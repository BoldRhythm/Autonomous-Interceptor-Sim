#!/usr/bin/env python3

import math
import numpy as np
import rclpy

from rclpy.node import Node
from rclpy.qos import (
    QoSProfile,
    QoSReliabilityPolicy,
    QoSHistoryPolicy,
    QoSDurabilityPolicy
)

from px4_msgs.msg import (
    OffboardControlMode,
    TrajectorySetpoint,
    VehicleCommand,
    VehicleStatus,
    VehicleLocalPosition,
    VehicleAttitude
)

from geometry_msgs.msg import Point
from spatialmath import UnitQuaternion


# =============================================================
# PARAMETERS
# =============================================================

SETPOINT_RATE_HZ = 50.0
SETPOINT_WARMUP_COUNT = 30

TAKEOFF_HEIGHT = -5.0

TAKEOFF_VELOCITY = -1.0


class Attitude(Node):

    def __init__(self):

        super().__init__('Attitude')

        # =====================================================
        # QoS
        # =====================================================

        qos = QoSProfile(
            reliability=QoSReliabilityPolicy.BEST_EFFORT,
            durability=QoSDurabilityPolicy.VOLATILE,
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=5
        )

        # =====================================================
        # PARAMETERS
        # =====================================================

        self.declare_parameter("instance", 1)
        self.declare_parameter("mav_sys_id", 2)

        self.instance = self.get_parameter("instance").value
        self.mav_sys_id = self.get_parameter("mav_sys_id").value

        self.prefix = f"/px4_{self.instance}"

        # =====================================================
        # PUBLISHERS
        # =====================================================

        self.ctrl_mode_pub = self.create_publisher(
            OffboardControlMode,
            f"{self.prefix}/fmu/in/offboard_control_mode",
            qos
        )

        self.setpoint_pub = self.create_publisher(
            TrajectorySetpoint,
            f"{self.prefix}/fmu/in/trajectory_setpoint",
            qos
        )

        self.cmd_pub = self.create_publisher(
            VehicleCommand,
            f"{self.prefix}/fmu/in/vehicle_command",
            qos
        )

        # =====================================================
        # SUBSCRIBERS
        # =====================================================

        self.create_subscription(
            VehicleStatus,
            f"{self.prefix}/fmu/out/vehicle_status_v4",
            self.status_cb,
            qos
        )

        self.create_subscription(
            VehicleLocalPosition,
            f"{self.prefix}/fmu/out/vehicle_local_position_v1",
            self.position_cb,
            qos
        )

        self.create_subscription(
            VehicleAttitude,
            f"{self.prefix}/fmu/out/vehicle_attitude",
            self.attitude_cb,
            qos
        )

        self.create_subscription(
            Point,
            "/interceptor/target_centroid",
            self.centroid_cb,
            qos
        )

        # =====================================================
        # STATE
        # =====================================================

        self.status = VehicleStatus()

        self.armed = False

        self.position = VehicleLocalPosition()

        self.yaw = 0.0

        self.offboard_counter = 0

        # =====================================================
        # CONTROL STATE
        # =====================================================

        self.phase = "WARMUP"

        # =====================================================
        # MATH
        # =====================================================

        self.omega_1 = np.zeros(3)

        self.q = None
        self.kb = 0.5

        self.forward_body = np.array([
            1.0,
            0.0,
            0.0
        ])

        # Camera orientation (from model.sdf)

        self.roll = math.radians(0.0)
        self.pitch = math.radians(0.0)
        self.yaw_camera = math.radians(0.0)

        self.R_BC = np.array([
            [0.0, 0.0, 1.0],
            [1.0, 0.0, 0.0],
            [0.0, 1.0, 0.0]
        ])

        self.width = 640
        self.height = 480
        self.hfov = 1.74
        self.vfov = 1.45

        self.fx = (
            (self.width / 2)
            / math.tan(self.hfov / 2)
        )

        self.fy = (
            (self.height / 2)
            / math.tan(self.vfov / 2)
        )

        self.cx = self.width / 2
        self.cy = self.height / 2

        self.K = np.array([
            [self.fx, 0.0, self.cx],
            [0.0, self.fy, self.cy],
            [0.0, 0.0, 1.0]
        ])

        # =====================================================
        # TIMER
        # =====================================================

        self.create_timer(
            1.0 / SETPOINT_RATE_HZ,
            self.loop
        )

        self.get_logger().info(
            "Attitude initialized."
        )

    # =========================================================
    # CALLBACKS
    # =========================================================

    def status_cb(self, msg):

        self.status = msg

        self.armed = (
            msg.arming_state ==
            VehicleStatus.ARMING_STATE_ARMED
        )

    # ---------------------------------------------------------

    def position_cb(self, msg):

        self.position = msg

    # ---------------------------------------------------------

    def attitude_cb(self, msg):

        self.q = UnitQuaternion(msg.q)

        q = msg.q

        if len(q) == 4:

            w, x, y, z = q

            self.yaw = math.atan2(
                2.0 * (w * z + x * y),
                1.0 - 2.0 * (y * y + z * z)
            )

    # =========================================================
    # MATH
    # =========================================================

    def q_rotate(self, q, vector):

        q_rotated = q * vector
        return q_rotated

    def align_camera(self, roll, pitch, yaw):

        # the goal of this function is to handle the orientation of camera wrt base link, ie the drone.
        camera_orientation = UnitQuaternion.RPY(
            [roll, pitch, yaw],
            order='zyx'
        )

        return camera_orientation

    def pixel_to_camera_ray(self, u, v):

        x = (u - self.cx) / self.fx
        y = (v - self.cy) / self.fy

        ray = np.array([
            x,
            y,
            1.0
        ])

        return ray / np.linalg.norm(ray)

    def image_error(self, u, v):

        error_u = u - self.cx
        error_v = v - self.cy

        return np.array([
            error_u,
            error_v
        ])

    def get_interceptor_LOS(self):

        ntd = self.q_rotate(
            self.q,
            self.forward_body
        )

        return ntd

    def get_LOS_error(self, nt, ntd):

        dot_product = np.dot(ntd, nt)

        dot_product = np.clip(
            dot_product,
            -1.0,
            1.0
        )

        z1 = 1.0 - dot_product

        return z1

    def collinear_controller(self, nt, ntd):

        z1 = self.get_LOS_error(
            nt,
            ntd
        )

        if z1 >= self.kb**2:

            self.get_logger().error(
                f"Barrier condition violated: "
                f"z1={z1:.4f}, "
                f"kb^2={self.kb**2:.4f}"
            )

        R_be = self.q.R

        cross_product = np.cross(
            ntd,
            nt
        )

        omega_1 = (
            z1 / (self.kb**2 - z1**2)
        ) * R_be.T @ cross_product

        return omega_1

    # =========================================================
    # TIMESTAMP
    # =========================================================

    def micros(self):

        return int(
            self.get_clock().now().nanoseconds / 1000
        )

    # =========================================================
    # OFFBOARD MODE
    # =========================================================

    def publish_mode(self):

        msg = OffboardControlMode()

        msg.timestamp = self.micros()

        # IMPORTANT:
        #
        # We stay in velocity mode for the entire test.
        #
        # This allows TrajectorySetpoint to contain:
        #
        #     vx
        #     vy
        #     vz
        #     yawspeed

        msg.position = False

        msg.velocity = True

        msg.acceleration = False

        msg.attitude = False

        msg.body_rate = False

        self.ctrl_mode_pub.publish(msg)

    # =========================================================
    # TRAJECTORY SETPOINT
    # =========================================================

    def publish_setpoint(
        self,
        vx,
        vy,
        vz,
        yawspeed
    ):

        msg = TrajectorySetpoint()

        msg.timestamp = self.micros()

        # Position unused

        msg.position = [
            float('nan'),
            float('nan'),
            float('nan')
        ]

        # Velocity control

        msg.velocity = [
            float(vx),
            float(vy),
            float(vz)
        ]

        # Acceleration unused

        msg.acceleration = [
            float('nan'),
            float('nan'),
            float('nan')
        ]

        # Jerk unused

        msg.jerk = [
            float('nan'),
            float('nan'),
            float('nan')
        ]

        # We don't want absolute yaw.

        msg.yaw = float('nan')

        # We want a yaw rate.

        msg.yawspeed = float(yawspeed)

        self.setpoint_pub.publish(msg)

    # =========================================================
    # VEHICLE COMMAND
    # =========================================================

    def publish_cmd(
        self,
        cmd,
        **params
    ):

        msg = VehicleCommand()

        msg.timestamp = self.micros()

        msg.command = cmd

        msg.target_system = self.mav_sys_id

        msg.target_component = 1

        msg.source_system = self.mav_sys_id

        msg.source_component = 1

        msg.from_external = True

        for parameter in [
            "param1",
            "param2",
            "param3",
            "param4",
            "param5",
            "param6",
            "param7"
        ]:

            setattr(
                msg,
                parameter,
                params.get(parameter, 0.0)
            )

        self.cmd_pub.publish(msg)

    # =========================================================
    # TARGET CENTROID
    # =========================================================

    def centroid_cb(self, msg):

        u = msg.x
        v = msg.y

        if self.q is None:
            return

        # ICS → CCS
        nt_camera = self.pixel_to_camera_ray(
            u,
            v
        )

        # CCS → BCS
        nt_body = self.R_BC @ nt_camera

        # BCS → EFCS
        nt = self.q_rotate(
            self.q,
            nt_body
        )

        # Current interceptor LOS
        ntd = self.get_interceptor_LOS()

        # Current difference in LOS of the interceptor and target in EFCS
        z1 = self.get_LOS_error(
            nt,
            ntd
        )

        # Paper Eq. (13)
        omega_1 = self.collinear_controller(
            nt,
            ntd
        )

        self.omega_1 = omega_1

        self.get_logger().info(
            f"nt  = {nt} | "
            f"ntd = {ntd} | "
            f"omega_1 = {omega_1} | "
            f"z1 = {z1}"
        )

    # =========================================================
    # MAIN LOOP
    # =========================================================

    def loop(self):

        # =====================================================
        # ALWAYS PUBLISH OFFBOARD MODE
        # =====================================================

        self.publish_mode()

        # =====================================================
        # PHASE 1: WARMUP
        # =====================================================

        if self.offboard_counter < SETPOINT_WARMUP_COUNT:

            self.phase = "WARMUP"

            self.publish_setpoint(
                0.0,
                0.0,
                0.0,
                0.0
            )

            self.offboard_counter += 1

            return

        # =====================================================
        # PHASE 2: ENTER OFFBOARD + ARM
        # =====================================================

        if self.phase == "WARMUP":

            self.phase = "OFFBOARD_REQUEST"

            self.get_logger().info(
                "Warmup complete. Requesting OFFBOARD."
            )

        # -----------------------------------------------------

        if self.phase == "OFFBOARD_REQUEST":

            # Keep sending a valid velocity setpoint.

            self.publish_setpoint(
                0.0,
                0.0,
                0.0,
                0.0
            )

            # Request OFFBOARD.

            if (
                self.status.nav_state
                != VehicleStatus.NAVIGATION_STATE_OFFBOARD
            ):

                self.publish_cmd(
                    VehicleCommand.VEHICLE_CMD_DO_SET_MODE,
                    param1=1.0,
                    param2=6.0
                )

                self.get_logger().info(
                    "OFFBOARD command sent.",
                    throttle_duration_sec=1.0
                )

                return

            # PX4 accepted OFFBOARD.

            self.get_logger().info(
                "OFFBOARD accepted."
            )

            self.phase = "ARM"

            return

        # =====================================================
        # PHASE 3: ARM
        # =====================================================

        if self.phase == "ARM":

            self.publish_setpoint(
                0.0,
                0.0,
                0.0,
                0.0
            )

            if not self.armed:

                self.publish_cmd(
                    VehicleCommand.VEHICLE_CMD_COMPONENT_ARM_DISARM,
                    param1=1.0
                )

                self.get_logger().info(
                    "ARM command sent.",
                    throttle_duration_sec=1.0
                )

                return

            # PX4 reports armed.

            self.get_logger().info(
                "Vehicle ARMED."
            )

            self.phase = "TAKEOFF"

            return

        # =====================================================
        # PHASE 4: TAKEOFF
        # =====================================================

        if self.phase == "TAKEOFF":

            z = self.position.z

            # NED:
            #
            # z = 0       starting altitude
            # z = -5      5 m above starting altitude
            #
            if z > TAKEOFF_HEIGHT:

                self.publish_setpoint(
                    0.0,
                    0.0,
                    TAKEOFF_VELOCITY,
                    0.0
                )

                self.get_logger().info(
                    f"TAKEOFF | "
                    f"z={z:.2f} m | "
                    f"vz={TAKEOFF_VELOCITY:.2f} m/s",
                    throttle_duration_sec=0.5
                )

                return

            # Target altitude reached.

            self.get_logger().info(
                f"TAKEOFF COMPLETE | z={z:.2f} m"
            )

            self.phase = "OMEGA_1"

            return

        # =====================================================
        # PHASE 5: OMEGA_1
        # =====================================================

        if self.phase == "OMEGA_1":

            z = self.position.z

            self.publish_setpoint(
                0.0,
                0.0,
                0.0,
                self.omega_1[2]
            )

            self.get_logger().info(
                f"OMEGA_1 | "
                f"z={z:.2f} m | "
                f"omega_1={self.omega_1} | "
                f"yaw_rate={self.omega_1[2]:.4f}",
                throttle_duration_sec=0.5
            )


# =============================================================
# MAIN
# =============================================================

def main(args=None):

    rclpy.init(args=args)

    node = Attitude()

    try:

        rclpy.spin(node)

    except KeyboardInterrupt:

        node.get_logger().info(
            "Attitude shutting down."
        )

    finally:

        node.destroy_node()

        rclpy.shutdown()


if __name__ == '__main__':

    main()