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

    VehicleAttitude,

    VehicleRatesSetpoint

)

from geometry_msgs.msg import Point, Vector3

from spatialmath import UnitQuaternion

# PARAMETERS

# The paper separates the collinear outer loop (~50 Hz) from the attitude
# inner loop (~200 Hz). This node publishes Offboard setpoints at 200 Hz;
# centroid callbacks update the outer-loop commands when a new image arrives.
SETPOINT_RATE_HZ = 200.0
SETPOINT_WARMUP_COUNT = 200  # 1 s at 200 Hz before requesting Offboard

TAKEOFF_HEIGHT = -5.0       # PX4 NED: negative means above the origin
TAKEOFF_VELOCITY = -1.0     # m/s NED
TAKEOFF_SETTLE_VZ = 0.2     # m/s; wait for near-zero vertical velocity

# Gazebo/PX4 adapter, calibrated empirically in the user's SITL:
# a normalized magnitude of 0.75 held this vehicle near hover.
HOVER_THRUST = 0.75
MAX_NORMALIZED_THRUST = 0.95

# Paper Eq. (28) uses the vector-rate saturation sat(omega, omega_m).
# This is a PX4/SITL limit, not a gain specified by the paper.
MAX_BODY_RATE = 3.0  # rad/s, Euclidean norm of [roll, pitch, yaw] rates

GRAVITY = 9.81

# Paper Eq. (1) includes rotor drag: f_drag^e = -R_eb D R_eb^T v^e.
# Replace zeros with identified Gazebo/airframe drag coefficients when known.
# Zero is an explicit initial simplification for validating the control path.
ROTOR_DRAG_COEFFS = (0.0, 0.0, 0.0)

# Gazebo-specific frame conversion: ENU -> NED.
C_NED_ENU = np.array([
    [0.0, 1.0, 0.0],
    [1.0, 0.0, 0.0],
    [0.0, 0.0, -1.0],
])

# Test-only inputs. Existing Gazebo ground-truth node publishes
# target - interceptor in ENU; the paper defines p_r/v_r = interceptor - target.
GT_POSITION_TOPIC = "/ground_truth/relative_position"
GT_VELOCITY_TOPIC = "/ground_truth/relative_velocity"

class Attitude(Node):

    def __init__(self):

        super().__init__('Attitude')

        # QoS

        qos = QoSProfile(

            reliability=QoSReliabilityPolicy.BEST_EFFORT,

            durability=QoSDurabilityPolicy.VOLATILE,

            history=QoSHistoryPolicy.KEEP_LAST,

            depth=5

        )

        # PARAMETERS

        self.declare_parameter("instance", 1)

        self.declare_parameter("mav_sys_id", 2)

        self.instance = self.get_parameter("instance").value

        self.mav_sys_id = self.get_parameter("mav_sys_id").value

        self.prefix = f"/px4_{self.instance}"

        # PUBLISHERS

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

        self.rate_setpoint_pub = self.create_publisher(

            VehicleRatesSetpoint,

            f"{self.prefix}/fmu/in/vehicle_rates_setpoint",

            qos

        )

        # SUBSCRIBERS

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

        # TEMPORARY VALIDATION INPUTS: Gazebo ground truth, not for the final
        # estimator. These are used until the paper's DKF is implemented.
        self.gt_position_sub = self.create_subscription(
            Point,
            GT_POSITION_TOPIC,
            self.gt_position_cb,
            10
        )
        self.gt_velocity_sub = self.create_subscription(
            Vector3,
            GT_VELOCITY_TOPIC,
            self.gt_velocity_cb,
            10
        )

        # STATE

        self.status = VehicleStatus()

        self.armed = False

        self.position = VehicleLocalPosition()

        self.yaw = 0.0

        self.offboard_counter = 0

        # CONTROL STATE

        self.phase = "WARMUP"

        # Use velocity control for warmup/takeoff, then body-rate control for tracking.

        self.control_mode = "velocity"

        # MATH

        self.omega_1 = np.zeros(3)

        self.q = None

        # Paper controller gains/state. Relative-state input is temporarily
        # supplied by Gazebo ground truth; replace it with DKF estimates later.
        self.kb = 0.5
        self.k1 = 1.0
        self.k2 = 2.0
        self.mass = 2.1143076923  # kg; SITL vehicle + camera mass used previously
        self.g = np.array([0.0, 0.0, GRAVITY])  # NED gravity
        self.drag_coeffs = np.diag(np.asarray(ROTOR_DRAG_COEFFS, dtype=float))

        self.gt_relative_position_enu = None
        self.gt_relative_velocity_enu = None
        self.controller_state_ready = False

        self.omega_1 = np.zeros(3)
        self.omega_2 = np.zeros(3)
        self.omega_d = np.zeros(3)
        self.a_d = np.zeros(3)
        self.n_fd = np.array([0.0, 0.0, -1.0])
        self.R_d = None
        self.f_d = self.mass * GRAVITY
        self.z1 = 0.0

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

        # TIMER

        self.create_timer(

            1.0 / SETPOINT_RATE_HZ,

            self.loop

        )

        self.get_logger().info(

            "Attitude initialized."

        )

    # CALLBACKS

    def status_cb(self, msg):

        self.status = msg

        self.armed = (

            msg.arming_state ==

            VehicleStatus.ARMING_STATE_ARMED

        )

    def position_cb(self, msg):

        self.position = msg

    def attitude_cb(self, msg):

        self.q = UnitQuaternion(msg.q)
        if self.R_d is None:
            self.R_d = self.q.R.copy()

        q = msg.q

        if len(q) == 4:

            w, x, y, z = q

            self.yaw = math.atan2(

                2.0 * (w * z + x * y),

                1.0 - 2.0 * (y * y + z * z)

            )

    # MATH

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
        """Paper Eq. (13): LOS/body-rate term, with Eq. (28) saturation later."""
        z1 = self.get_LOS_error(nt, ntd)
        denominator = self.kb**2 - z1**2

        # The paper's stability condition requires z1 < k_b. Do not evaluate
        # the barrier law at or beyond its singular boundary.
        if z1 >= self.kb or denominator <= 1e-8:
            self.get_logger().warning(
                f"LOS barrier condition not satisfied: z1={z1:.4f}, "
                f"required z1 < k_b={self.kb:.4f}; omega_1 set to zero",
                throttle_duration_sec=1.0,
            )
            return np.zeros(3)

        R_be = self.q.R
        return (z1 / denominator) * (R_be.T @ np.cross(ntd, nt))

    def get_relative_state_ned(self):
        """Convert Gazebo GT (target-interceptor, ENU) to paper state (NED)."""
        if (self.gt_relative_position_enu is None or
                self.gt_relative_velocity_enu is None):
            return None, None

        # First convert ENU coordinates to NED, then reverse the vector
        # direction: paper p_r/v_r = interceptor - target.
        p_r_ned = -C_NED_ENU @ self.gt_relative_position_enu
        v_r_ned = -C_NED_ENU @ self.gt_relative_velocity_enu
        return p_r_ned, v_r_ned

    def desired_acceleration(self, nt, ntd, z1, p_r, v_r):
        """Paper Eq. (19), using target acceleration as an unknown disturbance."""
        p_r = np.asarray(p_r, dtype=float)
        v_r = np.asarray(v_r, dtype=float)
        p_norm = float(np.linalg.norm(p_r))
        denominator = self.kb**2 - z1**2

        if p_norm < 1e-6:
            # Avoid the undefined unit LOS/barrier expression at zero range.
            return np.zeros(3)
        if z1 >= self.kb or denominator <= 1e-8:
            return None

        # Eq. (16): z_2 = v_r + k_1 p_r.
        z2 = v_r + self.k1 * p_r

        # Eq. (19). Keep the paper's m / ||p_r|| factor as printed.
        barrier_direction = (-np.eye(3) + np.outer(nt, nt)) @ ntd
        barrier_term = (
            (z1 / denominator)
            * (self.mass / p_norm)
            * barrier_direction
        )

        # Target acceleration is treated as a disturbance; it is not observed
        # in the available camera stream, so the initial implementation uses 0.
        a_t = np.zeros(3)
        return -self.k1 * v_r - self.k2 * z2 - p_r + barrier_term + a_t

    def drag_force_ned(self, R_be):
        """Paper Eq. (1) rotor-drag model, parameterized by D = diag(dx,dy,dz)."""
        v_ned = np.array([
            float(self.position.vx),
            float(self.position.vy),
            float(self.position.vz),
        ])
        return -R_be @ self.drag_coeffs @ R_be.T @ v_ned

    def desired_thrust_direction(self, a_d, drag_force_ned):
        """Paper Eq. (21), in NED with PX4 FRD body-axis convention."""
        force_per_mass = a_d - self.g - drag_force_ned / self.mass
        magnitude = float(np.linalg.norm(force_per_mass))
        if magnitude < 1e-8:
            return None
        return force_per_mass / magnitude

    def desired_attitude(self, n_f, n_fd, R_be):
        """Paper Eq. (22): tilt the current thrust vector to the desired vector."""
        n_f = np.asarray(n_f, dtype=float)
        n_fd = np.asarray(n_fd, dtype=float)
        nf_norm = float(np.linalg.norm(n_f))
        nfd_norm = float(np.linalg.norm(n_fd))
        if nf_norm < 1e-8 or nfd_norm < 1e-8:
            return None

        n_f /= nf_norm
        n_fd /= nfd_norm
        cross = np.cross(n_f, n_fd)
        cross_norm = float(np.linalg.norm(cross))
        dot = float(np.clip(np.dot(n_f, n_fd), -1.0, 1.0))
        angle = math.acos(dot)

        if angle < 1e-8:
            R_tilt = np.eye(3)
        elif cross_norm < 1e-8:
            # The 180-degree case has no unique minimum tilt axis.
            self.get_logger().warning(
                "Desired thrust direction nearly opposite to current; "
                "retaining previous desired attitude",
                throttle_duration_sec=1.0,
            )
            return None
        else:
            axis = cross / cross_norm
            S = np.array([
                [0.0, -axis[2], axis[1]],
                [axis[2], 0.0, -axis[0]],
                [-axis[1], axis[0], 0.0],
            ])
            # Rodrigues exponential map from the paper's Eq. (22).
            R_tilt = (
                np.eye(3)
                + math.sin(angle) * S
                + (1.0 - math.cos(angle)) * (S @ S)
            )
        return R_tilt @ R_be

    def attitude_correction(self, R_d, R_be):
        """Paper Eq. (26): omega_2 = -vex(R_d^T R_be - R_be^T R_d)."""
        error_matrix = R_d.T @ R_be - R_be.T @ R_d
        return -np.array([
            error_matrix[2, 1],
            error_matrix[0, 2],
            error_matrix[1, 0],
        ])

    def desired_thrust_force(self, a_d, n_f, drag_force_ned):
        """Paper Eq. (23) before PX4 normalization: force in Newtons."""
        required_force = self.mass * (a_d - self.g) - drag_force_ned
        f_projected = float(np.dot(n_f, required_force))

        # PX4 takes normalized thrust, not Newtons. Infer the matching maximum
        # force from this SITL's calibrated hover command and chosen normalized
        # upper bound; the underlying requested force is still Eq. (23).
        f_max = (
            self.mass * GRAVITY
            * MAX_NORMALIZED_THRUST / HOVER_THRUST
        )
        return float(np.clip(f_projected, 0.0, f_max))

    def force_to_px4_thrust(self, f_d):
        """Gazebo/PX4 adapter: Newtons -> normalized negative body-z thrust."""
        normalized_magnitude = HOVER_THRUST * f_d / (self.mass * GRAVITY)
        normalized_magnitude = float(np.clip(
            normalized_magnitude, 0.0, MAX_NORMALIZED_THRUST
        ))
        return -normalized_magnitude

    @staticmethod
    def saturate_body_rate(omega, omega_max=MAX_BODY_RATE):
        """Paper Eq. (29): saturate the 3-vector by its Euclidean norm."""
        omega = np.asarray(omega, dtype=float)
        magnitude = float(np.linalg.norm(omega))
        if magnitude > omega_max > 0.0:
            return omega * (omega_max / magnitude)
        return omega

    # TIMESTAMP

    def micros(self):

        return int(

            self.get_clock().now().nanoseconds / 1000

        )

    # OFFBOARD MODE

    def publish_mode(self):

        msg = OffboardControlMode()

        msg.timestamp = self.micros()

        # Select the active Offboard interface.

        # Velocity mode is used for warmup/takeoff; body-rate mode is used for tracking.

        msg.position = False

        msg.velocity = self.control_mode == "velocity"

        msg.acceleration = False

        msg.attitude = False

        msg.body_rate = self.control_mode == "body_rate"

        self.ctrl_mode_pub.publish(msg)

    # TRAJECTORY SETPOINT

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

    # BODY-RATE SETPOINT

    def publish_rates(self, omega, thrust_z):

        msg = VehicleRatesSetpoint()

        msg.timestamp = self.micros()

        # Three-axis body-rate command from the paper's tracking controller [rad/s].

        msg.roll = float(omega[0])

        msg.pitch = float(omega[1])

        msg.yaw = float(omega[2])

        # Negative body-z thrust produces upward thrust in PX4's FRD convention.

        msg.thrust_body = [0.0, 0.0, float(thrust_z)]

        self.rate_setpoint_pub.publish(msg)

    # VEHICLE COMMAND

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

    # TEMPORARY GAZEBO GROUND-TRUTH INPUTS (replace by DKF estimates later)
    def gt_position_cb(self, msg):
        self.gt_relative_position_enu = np.array(
            [msg.x, msg.y, msg.z], dtype=float
        )

    def gt_velocity_cb(self, msg):
        self.gt_relative_velocity_enu = np.array(
            [msg.x, msg.y, msg.z], dtype=float
        )

    # TARGET CENTROID

    def centroid_cb(self, msg):
        """Paper outer-loop update: image LOS, omega_1, a_d and R_d.

        Relative position/velocity are Gazebo ground truth for this validation
        stage only. Once the DKF is implemented, this input is replaced with
        the corresponding estimated states.
        """
        if self.q is None:
            return

        u = float(msg.x)
        v = float(msg.y)
        nt_camera = self.pixel_to_camera_ray(u, v)
        nt_body = self.R_BC @ nt_camera
        nt = np.asarray(self.q_rotate(self.q, nt_body), dtype=float)
        nt_norm = float(np.linalg.norm(nt))
        if nt_norm < 1e-8:
            return
        nt /= nt_norm

        ntd = np.asarray(self.get_interceptor_LOS(), dtype=float)
        ntd_norm = float(np.linalg.norm(ntd))
        if ntd_norm < 1e-8:
            return
        ntd /= ntd_norm

        p_r, v_r = self.get_relative_state_ned()
        if p_r is None or v_r is None:
            self.controller_state_ready = False
            self.get_logger().warning(
                f"Waiting for temporary Gazebo relative-state topics: "
                f"{GT_POSITION_TOPIC}, {GT_VELOCITY_TOPIC}",
                throttle_duration_sec=2.0,
            )
            return

        p_norm = float(np.linalg.norm(p_r))
        if p_norm < 1e-6:
            self.get_logger().warning(
                "Relative range is near zero; holding previous commands",
                throttle_duration_sec=1.0,
            )
            return

        z1 = self.get_LOS_error(nt, ntd)
        omega_1 = self.collinear_controller(nt, ntd)
        a_d = self.desired_acceleration(nt, ntd, z1, p_r, v_r)
        if a_d is None:
            self.controller_state_ready = False
            return

        R_be = self.q.R
        # PX4 FRD: propeller thrust acts along body -z.
        n_f = R_be @ np.array([0.0, 0.0, -1.0])
        f_drag = self.drag_force_ned(R_be)
        n_fd = self.desired_thrust_direction(a_d, f_drag)
        if n_fd is None:
            self.get_logger().warning(
                "Could not compute desired thrust direction; keeping previous command",
                throttle_duration_sec=1.0,
            )
            return
        R_d = self.desired_attitude(n_f, n_fd, R_be)
        if R_d is None:
            return

        self.omega_1 = omega_1
        self.a_d = a_d
        self.n_fd = n_fd
        self.R_d = R_d
        self.z1 = z1
        self.controller_state_ready = True

        # A useful frame/convention diagnostic: paper nt = -p_r/||p_r||.
        nt_from_gt = -p_r / p_norm
        los_consistency = float(np.clip(np.dot(nt, nt_from_gt), -1.0, 1.0))
        self.get_logger().info(
            f"PAPER OUTER LOOP | z1={z1:.4f} | p_r_NED={p_r} | "
            f"v_r_NED={v_r} | LOS_GT_dot={los_consistency:.3f} | "
            f"omega_1={omega_1} | a_d={a_d} | n_fd={n_fd}",
            throttle_duration_sec=0.5,
        )

    # MAIN LOOP

    def loop(self):

        # Select exactly one Offboard interface for this timer cycle.

        # Use velocity control through takeoff; direct body rates only in tracking.

        self.control_mode = "body_rate" if self.phase == "OMEGA_1" else "velocity"

        self.publish_mode()

        # PHASE 1: WARMUP

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

        # PHASE 2: ENTER OFFBOARD + ARM

        if self.phase == "WARMUP":

            self.phase = "OFFBOARD_REQUEST"

            self.get_logger().info(

                "Warmup complete. Requesting OFFBOARD."

            )

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

        # PHASE 3: ARM

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

        # PHASE 4: TAKEOFF

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

            # At the target altitude, first command zero vertical velocity in

            # velocity mode so the vehicle does not enter rate mode still climbing.

            self.publish_setpoint(

                0.0,

                0.0,

                0.0,

                0.0

            )

            vz = float(self.position.vz)

            if abs(vz) > TAKEOFF_SETTLE_VZ:

                self.get_logger().info(

                    f"TAKEOFF SETTLING | z={z:.2f} m | vz={vz:.2f} m/s",

                    throttle_duration_sec=0.5

                )

                return

            self.get_logger().info(

                f"TAKEOFF COMPLETE | z={z:.2f} m | vz={vz:.2f} m/s"

            )

            self.phase = "OMEGA_1"

            return

        # PHASE 5: OMEGA_1

        if self.phase == "OMEGA_1":
            z = float(self.position.z)
            vz = float(self.position.vz)

            if self.q is None or not self.controller_state_ready or self.R_d is None:
                # Safe validation behaviour while GT and a valid centroid are
                # unavailable: no tracking command, calibrated level-hover thrust.
                self.publish_rates(np.zeros(3), -HOVER_THRUST)
                self.get_logger().info(
                    f"PAPER CONTROL WAITING | z={z:.2f} m | vz={vz:.2f} m/s | "
                    f"thrust_z={-HOVER_THRUST:.3f}",
                    throttle_duration_sec=1.0,
                )
                return

            R_be = self.q.R
            n_f = R_be @ np.array([0.0, 0.0, -1.0])
            f_drag = self.drag_force_ned(R_be)

            # Paper Eq. (26): inner-loop attitude correction.
            self.omega_2 = self.attitude_correction(self.R_d, R_be)

            # Paper Eq. (28): combine LOS and attitude terms, then Eq. (29) norm saturation.
            self.omega_d = self.saturate_body_rate(self.omega_1 + self.omega_2)

            # Paper Eq. (23) outputs force in Newtons; convert to PX4's normalized
            # body-z thrust using the empirically calibrated SITL hover command.
            self.f_d = self.desired_thrust_force(self.a_d, n_f, f_drag)
            thrust_z = self.force_to_px4_thrust(self.f_d)
            self.publish_rates(self.omega_d, thrust_z)

            self.get_logger().info(
                f"PAPER INNER LOOP | z={z:.2f} m | vz={vz:.2f} m/s | "
                f"omega_1={self.omega_1} | omega_2={self.omega_2} | "
                f"omega_d={self.omega_d} | a_d={self.a_d} | "
                f"f_d={self.f_d:.3f} N | thrust_z={thrust_z:.3f}",
                throttle_duration_sec=0.5,
            )

# MAIN

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
        # ROS 2 may already have shut down its context after Ctrl-C.
        if rclpy.ok():
            rclpy.shutdown()

if __name__ == '__main__':

    main()
