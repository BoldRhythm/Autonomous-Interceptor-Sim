#!/usr/bin/env python3
"""PX4/Gazebo test: verify altitude hold under direct body-rate control.

Test sequence:
  1. Stream Offboard setpoints and request Offboard mode.
  2. Arm and climb to TAKEOFF_HEIGHT using PX4 velocity control.
  3. Wait until vertical speed is small.
  4. Switch to direct body-rate mode, command all body rates = 0, and use
     the separate altitude feedback law to calculate vertical thrust.
  5. After HOLD_TEST_DURATION seconds, return to PX4 velocity mode with
     zero velocity setpoints. No landing command is sent.

Designed for SITL/Gazebo validation, not as a flight-ready safety controller.
"""

import math
import time

import numpy as np
import rclpy
from rclpy.node import Node
from rclpy.qos import (
    QoSProfile,
    QoSReliabilityPolicy,
    QoSHistoryPolicy,
    QoSDurabilityPolicy,
)

from px4_msgs.msg import (
    OffboardControlMode,
    TrajectorySetpoint,
    VehicleCommand,
    VehicleStatus,
    VehicleLocalPosition,
    VehicleAttitude,
    VehicleRatesSetpoint,
)
from spatialmath import UnitQuaternion


# ---------------------------------------------------------------------------
# SITL TEST PARAMETERS
# ---------------------------------------------------------------------------
SETPOINT_RATE_HZ = 50.0
SETPOINT_WARMUP_COUNT = 50       # 1 s at 50 Hz

TAKEOFF_HEIGHT = -5.0             # NED: -5 m is 5 m above the origin
TAKEOFF_VELOCITY = -0.7           # NED: negative z velocity means climb
TAKEOFF_SETTLE_VZ = 0.20          # m/s; transition only after climbing slows

HOLD_TEST_DURATION = 20.0         # seconds in direct body-rate mode

# This is a starting estimate, not guaranteed to equal the SITL hover value.
# Set it to the configured/verified hover thrust for your PX4 vehicle.
HOVER_THRUST = 0.75                # normalized magnitude in [0, 1]

# Altitude feedback gains; z and vz are in NED, positive downward.
ALTITUDE_KP = 1.2                  # 1/s^2
ALTITUDE_KD = 1.6                  # 1/s
MAX_VERTICAL_ACCEL = 3.0            # m/s^2
MIN_THRUST_MAGNITUDE = 0.15
MAX_THRUST_MAGNITUDE = 0.85
MIN_VERTICAL_THRUST_COS = 0.50
GRAVITY = 9.81


class BodyRateAltitudeHoldTest(Node):
    def __init__(self):
        super().__init__("body_rate_altitude_hold_test")

        qos = QoSProfile(
            reliability=QoSReliabilityPolicy.BEST_EFFORT,
            durability=QoSDurabilityPolicy.VOLATILE,
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=5,
        )

        self.declare_parameter("instance", 1)
        self.declare_parameter("mav_sys_id", 2)
        self.prefix = f"/px4_{self.get_parameter('instance').value}"
        self.mav_sys_id = int(self.get_parameter("mav_sys_id").value)

        self.ctrl_mode_pub = self.create_publisher(
            OffboardControlMode,
            f"{self.prefix}/fmu/in/offboard_control_mode",
            qos,
        )
        self.setpoint_pub = self.create_publisher(
            TrajectorySetpoint,
            f"{self.prefix}/fmu/in/trajectory_setpoint",
            qos,
        )
        self.cmd_pub = self.create_publisher(
            VehicleCommand,
            f"{self.prefix}/fmu/in/vehicle_command",
            qos,
        )
        self.rates_pub = self.create_publisher(
            VehicleRatesSetpoint,
            f"{self.prefix}/fmu/in/vehicle_rates_setpoint",
            qos,
        )

        self.create_subscription(
            VehicleStatus,
            f"{self.prefix}/fmu/out/vehicle_status_v4",
            self.status_cb,
            qos,
        )
        self.create_subscription(
            VehicleLocalPosition,
            f"{self.prefix}/fmu/out/vehicle_local_position_v1",
            self.position_cb,
            qos,
        )
        self.create_subscription(
            VehicleAttitude,
            f"{self.prefix}/fmu/out/vehicle_attitude",
            self.attitude_cb,
            qos,
        )

        self.status = None
        self.position = None
        self.q = None
        self.armed = False

        self.phase = "WARMUP"
        self.offboard_counter = 0
        self.body_rate_test_started = None
        self.last_command_time = 0.0

        self.create_timer(1.0 / SETPOINT_RATE_HZ, self.loop)
        self.get_logger().info(
            "Started. This test will take off to 5 m, test zero body rates "
            "with altitude-feedback thrust for 20 s, then return to velocity mode."
        )

    # ------------------------------------------------------------------
    # SUBSCRIBERS
    # ------------------------------------------------------------------
    def status_cb(self, msg):
        self.status = msg
        self.armed = (
            msg.arming_state == VehicleStatus.ARMING_STATE_ARMED
        )

    def position_cb(self, msg):
        self.position = msg

    def attitude_cb(self, msg):
        # PX4 VehicleAttitude quaternion order is [w, x, y, z].
        self.q = UnitQuaternion(np.asarray(msg.q, dtype=float))

    # ------------------------------------------------------------------
    # TIMESTAMP / COMMANDS
    # ------------------------------------------------------------------
    def micros(self):
        return int(self.get_clock().now().nanoseconds / 1000)

    def publish_mode(self, mode):
        msg = OffboardControlMode()
        msg.timestamp = self.micros()
        msg.position = False
        msg.velocity = mode == "velocity"
        msg.acceleration = False
        msg.attitude = False
        msg.body_rate = mode == "body_rate"
        self.ctrl_mode_pub.publish(msg)

    def publish_velocity_setpoint(self, vx, vy, vz, yawspeed=0.0):
        msg = TrajectorySetpoint()
        msg.timestamp = self.micros()
        msg.position = [float("nan")] * 3
        msg.velocity = [float(vx), float(vy), float(vz)]
        msg.acceleration = [float("nan")] * 3
        msg.jerk = [float("nan")] * 3
        msg.yaw = float("nan")
        msg.yawspeed = float(yawspeed)
        self.setpoint_pub.publish(msg)

    def publish_rates(self, omega, thrust_z):
        msg = VehicleRatesSetpoint()
        msg.timestamp = self.micros()
        msg.roll = float(omega[0])
        msg.pitch = float(omega[1])
        msg.yaw = float(omega[2])
        # PX4 FRD convention: negative body-z thrust is upward thrust.
        msg.thrust_body = [0.0, 0.0, float(thrust_z)]
        self.rates_pub.publish(msg)

    def publish_cmd(self, command, **params):
        msg = VehicleCommand()
        msg.timestamp = self.micros()
        msg.command = command
        msg.target_system = self.mav_sys_id
        msg.target_component = 1
        msg.source_system = self.mav_sys_id
        msg.source_component = 1
        msg.from_external = True
        for name in (
            "param1", "param2", "param3", "param4",
            "param5", "param6", "param7",
        ):
            setattr(msg, name, float(params.get(name, 0.0)))
        self.cmd_pub.publish(msg)

    # ------------------------------------------------------------------
    # ALTITUDE-TO-THRUST TEST CONTROLLER
    # ------------------------------------------------------------------
    def altitude_hold_thrust(self):
        """Return (body-z thrust setpoint, commanded NED vertical accel)."""
        if self.position is None:
            raise RuntimeError("Local-position estimate is not available")

        z = float(self.position.z)
        vz = float(self.position.vz)

        # NED vertical acceleration: negative means accelerate upward.
        acceleration_z = (
            ALTITUDE_KP * (TAKEOFF_HEIGHT - z)
            - ALTITUDE_KD * vz
        )
        acceleration_z = float(np.clip(
            acceleration_z,
            -MAX_VERTICAL_ACCEL,
            MAX_VERTICAL_ACCEL,
        ))

        # R[2,2] approximates how much of body-axis thrust acts vertically.
        vertical_cosine = float(self.q.R[2, 2]) if self.q is not None else 1.0
        vertical_cosine = max(MIN_VERTICAL_THRUST_COS, vertical_cosine)

        # Approximate SITL thrust-to-acceleration relationship near hover.
        thrust_magnitude = (
            HOVER_THRUST
            * (1.0 - acceleration_z / GRAVITY)
            / vertical_cosine
        )
        thrust_magnitude = float(np.clip(
            thrust_magnitude,
            MIN_THRUST_MAGNITUDE,
            MAX_THRUST_MAGNITUDE,
        ))

        return -thrust_magnitude, acceleration_z

    # ------------------------------------------------------------------
    # TEST STATE MACHINE
    # ------------------------------------------------------------------
    def loop(self):
        # The setpoint interface follows the current phase.
        active_mode = (
            "body_rate" if self.phase == "BODY_RATE_HOLD_TEST" else "velocity"
        )
        self.publish_mode(active_mode)

        # Warm up Offboard streaming before requesting Offboard mode.
        if self.offboard_counter < SETPOINT_WARMUP_COUNT:
            self.phase = "WARMUP"
            self.publish_velocity_setpoint(0.0, 0.0, 0.0)
            self.offboard_counter += 1
            return

        if self.position is None or self.status is None:
            self.publish_velocity_setpoint(0.0, 0.0, 0.0)
            self.get_logger().warning(
                "Waiting for PX4 status/local-position data.",
                throttle_duration_sec=2.0,
            )
            return

        if self.phase == "WARMUP":
            self.phase = "OFFBOARD_REQUEST"
            self.get_logger().info("Warmup complete; requesting Offboard.")

        if self.phase == "OFFBOARD_REQUEST":
            self.publish_velocity_setpoint(0.0, 0.0, 0.0)
            if self.status.nav_state != VehicleStatus.NAVIGATION_STATE_OFFBOARD:
                now = time.monotonic()
                if now - self.last_command_time >= 1.0:
                    self.publish_cmd(
                        VehicleCommand.VEHICLE_CMD_DO_SET_MODE,
                        param1=1.0,
                        param2=6.0,
                    )
                    self.last_command_time = now
                    self.get_logger().info("Requested Offboard mode.")
                return

            self.phase = "ARM"
            self.get_logger().info("Offboard accepted; requesting arm.")
            return

        if self.phase == "ARM":
            self.publish_velocity_setpoint(0.0, 0.0, 0.0)
            if not self.armed:
                now = time.monotonic()
                if now - self.last_command_time >= 1.0:
                    self.publish_cmd(
                        VehicleCommand.VEHICLE_CMD_COMPONENT_ARM_DISARM,
                        param1=1.0,
                    )
                    self.last_command_time = now
                    self.get_logger().info("Sent arm command.")
                return

            self.phase = "TAKEOFF"
            self.get_logger().info("Armed; climbing to target altitude.")
            return

        if self.phase == "TAKEOFF":
            if self.q is None:
                self.publish_velocity_setpoint(0.0, 0.0, 0.0)
                self.get_logger().warning(
                    "Waiting for PX4 attitude data.", throttle_duration_sec=2.0
                )
                return

            z = float(self.position.z)
            vz = float(self.position.vz)

            if z > TAKEOFF_HEIGHT:
                self.publish_velocity_setpoint(
                    0.0, 0.0, TAKEOFF_VELOCITY, 0.0
                )
                self.get_logger().info(
                    f"TAKEOFF | z={z:.2f} m | vz={vz:.2f} m/s",
                    throttle_duration_sec=0.5,
                )
                return

            # Stop the climb and wait until the velocity controller has settled.
            self.publish_velocity_setpoint(0.0, 0.0, 0.0, 0.0)
            if abs(vz) > TAKEOFF_SETTLE_VZ:
                self.get_logger().info(
                    f"SETTLING | z={z:.2f} m | vz={vz:.2f} m/s",
                    throttle_duration_sec=0.5,
                )
                return

            self.phase = "BODY_RATE_HOLD_TEST"
            self.body_rate_test_started = time.monotonic()
            self.get_logger().info(
                f"BODY-RATE TEST START | z={z:.2f} m | vz={vz:.2f} m/s | "
                f"hover_thrust={HOVER_THRUST:.3f} | duration={HOLD_TEST_DURATION:.1f} s"
            )
            return

        if self.phase == "BODY_RATE_HOLD_TEST":
            elapsed = time.monotonic() - self.body_rate_test_started
            if elapsed >= HOLD_TEST_DURATION:
                self.phase = "VELOCITY_HOLD"
                self.get_logger().warning(
                    "Body-rate test complete; switching back to PX4 velocity "
                    "mode with zero velocity setpoints."
                )
                return

            thrust_z, acceleration_z = self.altitude_hold_thrust()
            z = float(self.position.z)
            vz = float(self.position.vz)
            vertical_cosine = float(self.q.R[2, 2]) if self.q is not None else 1.0

            # This is the isolated test: no tracking/controller body rates.
            self.publish_rates(np.zeros(3), thrust_z)

            self.get_logger().info(
                f"HOLD TEST | t={elapsed:.1f}/{HOLD_TEST_DURATION:.1f} s | "
                f"z={z:.3f} m | z_error={TAKEOFF_HEIGHT - z:+.3f} m | "
                f"vz={vz:+.3f} m/s | rates=[0,0,0] | "
                f"R22={vertical_cosine:+.3f} | "
                f"az_cmd={acceleration_z:+.3f} m/s^2 | thrust_z={thrust_z:+.4f}",
                throttle_duration_sec=0.5,
            )
            return

        if self.phase == "VELOCITY_HOLD":
            # Finish the test in the original PX4 velocity-control mode.
            self.publish_velocity_setpoint(0.0, 0.0, 0.0, 0.0)
            self.get_logger().info(
                f"VELOCITY HOLD | z={float(self.position.z):.3f} m | "
                f"vz={float(self.position.vz):+.3f} m/s",
                throttle_duration_sec=1.0,
            )


def main(args=None):
    rclpy.init(args=args)
    node = BodyRateAltitudeHoldTest()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info("Test stopped by user.")
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
