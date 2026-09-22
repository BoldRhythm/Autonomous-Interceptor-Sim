import time, math, rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, QoSReliabilityPolicy, QoSHistoryPolicy, QoSDurabilityPolicy
from px4_msgs.msg import VehicleAttitude, VehicleStatus
from px4_msgs.msg import VehicleRatesSetpoint
from px4_msgs.msg import OffboardControlMode
from px4_msgs.msg import VehicleLocalPosition
from px4_msgs.msg import VehicleCommand
from px4_msgs.msg import TrajectorySetpoint
from geometry_msgs.msg import Twist, Point
from std_msgs.msg import Bool
import numpy as np
from spatialmath import UnitQuaternion


class Attitude(Node):
    def __init__(self):
        super().__init__('Attitude')

        qos = QoSProfile(
            reliability=QoSReliabilityPolicy.BEST_EFFORT,
            durability=QoSDurabilityPolicy.VOLATILE,
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=5
        )

        self.declare_parameter("instance", 1)
        self.declare_parameter("mav_sys_id", 2)

        self.instance = self.get_parameter("instance").value
        self.mav_sys_id = self.get_parameter("mav_sys_id").value

        self.prefix = f"/px4_{self.instance}"

        # Publishers

        self.rate_setpoint_pub = self.create_publisher(
            VehicleRatesSetpoint,
            f"{self.prefix}/fmu/in/vehicle_rates_setpoint",
            qos
        )

        self.cmd_pub = self.create_publisher(
            VehicleCommand,
            f"{self.prefix}/fmu/in/vehicle_command",
            qos
        )

        self.ctrl_mode_pub = self.create_publisher(
            OffboardControlMode,
            f"{self.prefix}/fmu/in/offboard_control_mode",
            qos
        )

        self.velocity_pub = self.create_publisher(
            TrajectorySetpoint,
            f"{self.prefix}/fmu/in/trajectory_setpoint",
            qos
        )

        self.create_subscription(
            VehicleLocalPosition,
            f"{self.prefix}/fmu/out/vehicle_local_position",
            self.position_cb,
            qos
        )
        
        # Subscriptions

        self.create_subscription(
            VehicleAttitude,
            f"{self.prefix}/fmu/out/vehicle_attitude",
            self.att_cb,
            qos
        )

        self.create_subscription(
            Point,
            "/interceptor/target_centroid",
            self.centroid_cb,
            qos
        )

        self.create_subscription(
            VehicleStatus,
            f"{self.prefix}/fmu/out/vehicle_status_v4",
            self.status_cb,
            qos
        )


        # Initial state

        self.control_mode = "velocity"
        self.status = VehicleStatus()
        self.armed = False
        self.z = None
        self.takeoff_altitude = -5.0
        

        self.create_timer(0.02, self.offboard_loop)
        self.offboard_counter = 0
        self.SETPOINT_WARMUP_COUNT = 100
        self.omega_1 = np.zeros(3)

        self.thrust_body = np.array([0.0, 0.0, -1.0]) # direction of thrust, used only for initial math testing
        self.q = None
        self.kb = 0.5
        self.forward_body = np.array([1.0, 0.0, 0.0]) # just the window function to pick up the LOS vector of the interceptor

        # Camera orientation (from model.sdf)

        self.roll = math.radians(0.0)
        self.pitch = math.radians(0.0)
        self.yaw = math.radians(0.0)

        self.R_BC = np.array([
            [0.0, 0.0, 1.0],
            [1.0, 0.0, 0.0],
            [0.0, 1.0, 0.0]
        ])

        self.width = 640
        self.height = 480
        self.hfov = 1.74 # radians
        self.vfov = 1.45 # radians 
        
        self.fx = (self.width / 2) / math.tan(self.hfov / 2)
        self.fy = (self.height / 2) / math.tan(self.vfov / 2)

        self.cx = self.width / 2
        self.cy = self.height / 2

        self.K = np.array([
            [self.fx, 0.0, self.cx],
            [0.0, self.fy, self.cy],
            [0.0, 0.0, 1.0]
        ])


    def q_rotate(self, q, vector):

        q_rotated = q * vector # since q is a SpatialMath UnitQuaternion, it handles q*v*q_conj. No need to explicitly write out that eqn.
        return q_rotated

    def align_camera(self, roll, pitch, yaw):

        # the goal of this function is to handle the orientation of camera wrt base link, ie the drone.
        camera_orientation = UnitQuaternion.RPY(
            [roll, pitch, yaw],
            order = 'zyx'
        )
        return camera_orientation

    def pixel_to_camera_ray(self, u, v):

        x = (u - self.cx) / self.fx
        y = (v - self.cy) / self.fy # The division in both is due to normalization

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

        ntd = self.q_rotate(self.q, self.forward_body)

        return ntd

    def get_LOS_error(self, nt, ntd):

        dot_product = np.dot(ntd, nt)
        dot_product = np.clip(dot_product, -1.0, 1.0)

        z1 = 1.0 - dot_product # LOS error

        return z1

    def collinear_controller(self, nt, ntd):

        z1 = self.get_LOS_error(nt, ntd)

        if z1 >= self.kb**2:
            self.get_logger().error(
                f"Barrier condition violated: z1={z1:.4f}, kb^2={self.kb**2:.4f}"
            )

        R_be = self.q.R
        cross_product = np.cross(ntd, nt)

        omega_1 = (
            z1 / (self.kb**2 - z1**2)
        ) * R_be.T @ cross_product

        return omega_1

    def publish_omega(self, omega_1):

        msg = VehicleRatesSetpoint()

        msg.timestamp = int(self.get_clock().now().nanoseconds / 1000)

        msg.roll = float(omega_1[0])
        msg.pitch = float(omega_1[1])
        msg.yaw = float(omega_1[2])

        self.rate_setpoint_pub.publish(msg)

    def att_cb(self, msg):

        self.q = UnitQuaternion(msg.q)

        thrust_ned = self.q_rotate(self.q, self.thrust_body)

        ntd = self.get_interceptor_LOS()

        # self.get_logger().info(
        #     f"q = {msg.q}, thrust_ned = {thrust_ned}"
        # )

    def centroid_cb(self, msg):

        u = msg.x
        v = msg.y

        # ICS → CCS
        nt_camera = self.pixel_to_camera_ray(u, v)

        # CCS → BCS
        nt_body = self.R_BC @ nt_camera

        if self.q is None:
            return

        # BCS → EFCS
        nt = self.q_rotate(self.q, nt_body)

        # Current interceptor LOS
        ntd = self.get_interceptor_LOS()

        # Current difference in LOS of the interceptor and target in EFCS
        z1 = self.get_LOS_error(nt, ntd)

        # Paper Eq. (13)
        omega_1 = self.collinear_controller(nt, ntd)

        # self.omega_1 = omega_1
        self.omega_1 = np.array([0.0, 0.0, 0.5])

        self.get_logger().info(
            f"nt  = {nt} | "
            f"ntd = {ntd} | "
            f"omega_1 = {omega_1} |"
            f"z1 = {z1}"
        )

    def status_cb(self, msg):
        self.status = msg
        self.armed = (
            msg.arming_state == VehicleStatus.ARMING_STATE_ARMED
        )

    def offboard_loop(self):

        # ---------------------------------
        # 1. Warm-up
        # ---------------------------------
        if self.offboard_counter < self.SETPOINT_WARMUP_COUNT:

            self.control_mode = "velocity"
            self.publish_mode()
            self.publish_velocity(0.0, 0.0, 0.0)

            self.offboard_counter += 1
            return

        # ---------------------------------
        # 2. Enter Offboard + arm
        # ---------------------------------
        if self.offboard_counter == self.SETPOINT_WARMUP_COUNT:

            self.control_mode = "velocity"
            self.publish_mode()
            self.publish_velocity(0.0, 0.0, 0.0)

            self.publish_cmd(
                VehicleCommand.VEHICLE_CMD_DO_SET_MODE,
                param1=1.0,
                param2=6.0
            )

            self.publish_cmd(
                VehicleCommand.VEHICLE_CMD_COMPONENT_ARM_DISARM,
                param1=1.0
            )

            self.offboard_counter += 1
            return

        # ---------------------------------
        # 3. Wait until PX4 confirms
        # ---------------------------------
        if (
            self.status.nav_state !=
            VehicleStatus.NAVIGATION_STATE_OFFBOARD
            or not self.armed
        ):
            self.control_mode = "velocity"
            self.publish_mode()
            self.publish_velocity(0.0, 0.0, 0.0)
            return

        # ---------------------------------
        # 4. Takeoff
        # ---------------------------------
        if self.z is None:
            self.control_mode = "velocity"
            self.publish_mode()
            self.publish_velocity(0.0, 0.0, -1.0)
            return

        if self.z > self.takeoff_altitude:

            self.control_mode = "velocity"
            self.publish_mode()

            # NED: negative Z = upward
            self.publish_velocity(0.0, 0.0, -1.0)

            return

        # ---------------------------------
        # 5. Takeoff complete → body-rate
        # ---------------------------------
        self.control_mode = "body_rate"
        self.publish_mode()

        self.publish_omega(self.omega_1)


    def position_cb(self, msg):

        self.z = msg.z
    
    def publish_mode(self):

        msg = OffboardControlMode()
        msg.timestamp = int(self.get_clock().now().nanoseconds / 1000)

        msg.position = False
        msg.velocity = self.control_mode == "velocity"
        msg.acceleration = False
        msg.attitude = False
        msg.body_rate = self.control_mode == "body_rate"

        self.ctrl_mode_pub.publish(msg)

    def publish_velocity(self, vx, vy, vz):

        msg = TrajectorySetpoint()

        msg.timestamp = int(self.get_clock().now().nanoseconds / 1000)

        msg.velocity = [
            float(vx),
            float(vy),
            float(vz)
        ]

        # Don't command position/acceleration
        msg.position = [float('nan')] * 3
        msg.acceleration = [float('nan')] * 3

        self.velocity_pub.publish(msg)

    def publish_cmd(self, command, param1=0.0, param2=0.0):
        msg = VehicleCommand()
        msg.timestamp = int(self.get_clock().now().nanoseconds / 1000)

        msg.param1 = param1
        msg.param2 = param2

        msg.command = command
        msg.target_system = self.mav_sys_id
        msg.target_component = 1

        msg.source_system = self.mav_sys_id
        msg.source_component = 1

        msg.from_external = True

        self.cmd_pub.publish(msg)

def main(args=None):
    rclpy.init()
    node = Attitude()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()