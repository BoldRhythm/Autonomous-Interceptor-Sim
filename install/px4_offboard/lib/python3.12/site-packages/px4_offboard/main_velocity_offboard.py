#!/usr/bin/env python3

import time, math, rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, QoSReliabilityPolicy, QoSHistoryPolicy, QoSDurabilityPolicy
from px4_msgs.msg import VehicleLocalPosition

from px4_msgs.msg import (
    OffboardControlMode,
    TrajectorySetpoint,
    VehicleCommand,
    VehicleStatus,
    VehicleAttitude
)
from geometry_msgs.msg import Twist
from std_msgs.msg import Bool

SETPOINT_RATE_HZ = 50.0
SETPOINT_WARMUP_COUNT = 30
VEL_LIMIT_XY = 3.0
VEL_LIMIT_Z = 2.0

class PX4Offboard(Node):
    def __init__(self):
        super().__init__('px4_velocity_offboard')

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
        self.ctrl_mode_pub = self.create_publisher(OffboardControlMode, f"{self.prefix}/fmu/in/offboard_control_mode", qos)
        self.setpoint_pub = self.create_publisher(TrajectorySetpoint, f"{self.prefix}/fmu/in/trajectory_setpoint", qos)
        self.cmd_pub = self.create_publisher(VehicleCommand, f"{self.prefix}/fmu/in/vehicle_command", qos)

        # Subscribers
        self.create_subscription(VehicleStatus, f"{self.prefix}/fmu/out/vehicle_status_v4", self.status_cb, qos)
        self.create_subscription(VehicleAttitude, f"{self.prefix}/fmu/out/vehicle_attitude", self.att_cb, qos)
        self.create_subscription(VehicleLocalPosition, f"{self.prefix}/fmu/out/vehicle_local_position_v1", self.position_cb, qos)

        # Internal state
        self.yawspeed = 0.0
        self.yaw = 0.0  # Current yaw from vehicle
        self.status = VehicleStatus()
        self.armed = False
        self.landing = False
        self.position = VehicleLocalPosition()
        self.offboard_counter = 0

        self.waypoints = [
            (0.0, -5.0),
            (5.0, -5.0),
            (5.0, 0.0),
            (0.0, 0.0),
            (0.0, -5.0)
        ]
        self.current_waypoint = 0
        self.takeoff_height = -5.0
        self.waypoint_tolerance = 0.3

        # Timer
        self.create_timer(1.0 / SETPOINT_RATE_HZ, self.loop)
        self.get_logger().info("PX4 Offboard initialized.")

    # -------------------- Callbacks --------------------
    def status_cb(self, msg):
        self.status = msg

        self.armed = (msg.arming_state == VehicleStatus.ARMING_STATE_ARMED)

    def position_cb(self, msg):
        self.position = msg

    def att_cb(self, msg):
        q = msg.q
        if len(q) == 4:
            w, x, y, z = q
            self.yaw = math.atan2(2 * (w * z + x * y), 1 - 2 * (y * y + z * z))

    def compute_velocity(self):

        target_x, target_y = self.waypoints[self.current_waypoint]

        # position error
        dx = target_x - self.position.x
        dy = target_y - self.position.y
        dz = self.takeoff_height - self.position.z

        # distance to waypoint
        distance = math.sqrt(dx*dx + dy*dy + dz*dz)

        # waypoint logic
        if distance < self.waypoint_tolerance:

            self.get_logger().info(
                f"Reached waypoint {self.current_waypoint}"
            )

            if self.current_waypoint < len(self.waypoints)-1:
                self.current_waypoint += 1
            else:
                if not self.landing:
                    self.get_logger().info("Reached final waypoint, initiating landing.")
                    self.land()
                    self.landing = True
            return 0.0, 0.0, 0.0

        # generate velocity
        Kp = 0.8

        vx = Kp * dx
        vy = Kp * dy
        vz = Kp * dz

        # calculate and clamp speed
        speed = math.sqrt(vx*vx + vy*vy)

        if speed > VEL_LIMIT_XY:
            scale = VEL_LIMIT_XY / speed
            vx *= scale
            vy *= scale

        vz = max(-VEL_LIMIT_Z, min(VEL_LIMIT_Z, vz))

        return vx, vy, vz

    # -------------------- Helpers --------------------
    def micros(self):
        return int(self.get_clock().now().nanoseconds / 1000)

    def publish_mode(self):
        msg = OffboardControlMode()
        msg.timestamp = self.micros()
        msg.position = False
        msg.velocity = True
        msg.acceleration = False
        msg.attitude = False
        msg.body_rate = False
        self.ctrl_mode_pub.publish(msg)

    def publish_setpoint(self, vx, vy, vz, yawspeed):
        msg = TrajectorySetpoint()
        msg.timestamp = self.micros()
        msg.position = [float('nan')] * 3
        msg.velocity = [vx, vy, vz]
        msg.acceleration = [float('nan')] * 3
        msg.jerk = [float('nan')] * 3
        msg.yaw = float('nan')  # We're using yawspeed, not absolute yaw
        msg.yawspeed = yawspeed
        self.setpoint_pub.publish(msg)

    def publish_cmd(self, cmd, **params):
        m = VehicleCommand()
        m.timestamp = self.micros()
        m.command = cmd
        m.target_system = self.mav_sys_id
        m.target_component = 1
        m.source_system = 1
        m.source_component = 1
        m.from_external = True
        for k in ["param1","param2","param3","param4","param5","param6","param7"]:
            setattr(m, k, params.get(k, 0.0))
        self.cmd_pub.publish(m)

    def land(self):
        self.publish_cmd(VehicleCommand.VEHICLE_CMD_NAV_LAND)

    # -------------------- Main Loop --------------------
    def loop(self):
        self.publish_mode()

        # Warm up phase
        if self.offboard_counter < SETPOINT_WARMUP_COUNT:
            self.publish_setpoint(0.0, 0.0, 0.0, 0.0)
            self.offboard_counter += 1
            return
        
        # Switch to Offboard and arm once
        if self.offboard_counter == 30:
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

        # Landing Complete
        if self.landing:
            if (self.landing and self.status.arming_state == VehicleStatus.ARMING_STATE_DISARMED):
                self.get_logger().info("Landing complete!")
                rclpy.shutdown()
            return

        # Check if PX4 reports Offboard mode
        if (
            self.status.nav_state != VehicleStatus.NAVIGATION_STATE_OFFBOARD
            or
            not self.armed
        ):
            self.publish_setpoint(0.0, 0.0, 0.0, 0.0)
            return
        
        # Guidance
        vx, vy, vz = self.compute_velocity()
        target_x, target_y = self.waypoints[self.current_waypoint]

        self.publish_setpoint(vx, vy, vz, self.yawspeed)
        


        # Debug logging
        if abs(self.yawspeed) > 0.01:
            self.get_logger().info(
                f"ROTATING: yaw_rate={self.yawspeed:.3f} rad/s | current_yaw={math.degrees(self.yaw):.1f}°",
                throttle_duration_sec=0.3,
            )
        else:
            self.get_logger().info(
                f"Waypoint {self.current_waypoint} ({target_x:.1f}, {target_y:.1f}) | vx={vx:.2f}, vy={vy:.2f}, vz={vz:.2f}",
                throttle_duration_sec=0.5,
            )


def main(args=None):
    rclpy.init(args=args)
    node = PX4Offboard()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info("PX4 Offboard Teleop node shutting down...")
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
