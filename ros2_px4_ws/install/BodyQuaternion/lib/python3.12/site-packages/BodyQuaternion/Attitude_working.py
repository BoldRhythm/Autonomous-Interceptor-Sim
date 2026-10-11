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
    VehicleRatesSetpoint,
    SensorCombined
)

from geometry_msgs.msg import Point, Vector3
from spatialmath import UnitQuaternion


# PARAMETERS

SETPOINT_RATE_HZ = 50.0
SETPOINT_WARMUP_COUNT = 30

TAKEOFF_HEIGHT = -5.0

TAKEOFF_VELOCITY = -1.0

INITIAL_TARGET_RANGE = 20.0  # metres

DKF_DELAY = 4


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

        self.create_subscription(
            SensorCombined,
            f"{self.prefix}/fmu/out/sensor_combined",
            self.imu_cb,
            qos
        )

        self.gt_position_sub = self.create_subscription(
            Point,
            '/ground_truth/relative_position',
            self.gt_position_cb,
            10
        )

        self.gt_velocity_sub = self.create_subscription(
            Vector3,
            '/ground_truth/relative_velocity',
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
        self.control_mode = "velocity"

        # MATH

        self.omega_1 = np.zeros(3)

        self.q = None
        self.kb = 0.5



        self.forward_body = np.array([
            1.0,
            0.0,
            0.0
        ])

        # IMU state variables

        self.omega = np.zeros(3)
        self.accel = np.zeros(3)

        self.last_imu_time = None
        self.dt = 0.0

        # Camera orientation (from model.sdf)

        self.roll = math.radians(0.0)
        self.pitch = math.radians(0.0)
        self.yaw_camera = math.radians(0.0)

        self.R_BC = np.array([
            [0.0, 0.0, 1.0],
            [1.0, 0.0, 0.0],
            [0.0, 1.0, 0.0]
        ])

        # Gazebo world (ENU) -> PX4 local world (NED)
        self.C_NED_ENU = np.array([
            [0.0, 1.0,  0.0],
            [1.0, 0.0,  0.0],
            [0.0, 0.0, -1.0]
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

        # DKF init

        self.x = np.zeros(18)

        self.latest_p_img = None
        self.latest_pzc = None

        self.state_buffer = []
        self.covariance_buffer = []
        self.imu_buffer = []

        # State layout to populate state vector x
        self.Q_SLICE = slice(0, 4)
        self.PR_SLICE = slice(4, 7)
        self.VR_SLICE = slice(7, 10)
        self.IMG_SLICE = slice(10, 12)
        self.BG_SLICE = slice(12, 15)
        self.BA_SLICE = slice(15, 18)

        self.dkf_initialized = False

        # Initial Relative Velocity
        self.x[self.VR_SLICE] = np.zeros(3)

        # Initial Attitude
        self.x[self.Q_SLICE] = np.array([1.0, 0.0, 0.0, 0.0])

        # Measurement matrix
        self.H = np.zeros((2, 18))
        self.H[:, 10:12] = np.eye(2)

        # State-estimate covariance matrix
        self.P = np.eye(18)

        # Process-noise covariance matrix
        self.Q = np.eye(6)

        # Measurement-noise covariance matrix
        # Numerical value is NOT specified by the paper.
        # This must eventually be obtained from the image measurement error.
        self.R = np.diag([ # Setting tiny value to avoid singularity and make S^-1 exist.
            1e-6,
            1e-6
        ])

        # Ground-truth relative state, used only for DKF initialization
        self.gt_relative_position = None
        self.gt_relative_velocity = None

        # Acceleration (ad) control parameters 
        self.a_d = np.zeros(3) # acceleration vector init (to hold nt, ntd, and z1)
        self.k1 = 1.0
        self.k2 = 2.0
        self.mass = 2.1143076923  # kg, total interceptor mass: X500 + 4 rotors + monocular camera

        # Desired thrust control parameters
        self.g = np.array([
            0.0,
            0.0,
            9.81
        ])  # Gravity in NED coordinates (m/s^2)

        self.n_fd = np.array([
            0.0,
            0.0,
            -1.0
        ])  # Desired thrust direction

        self.f_d = 0.0  # Desired thrust magnitude (N)


    # --- MATH HELPER FUNCTIONS ---

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

    def desired_acceleration(self, nt, ntd, z1):

        # Estimated relative position and velocity
        pr = self.x[self.PR_SLICE]
        vr = self.x[self.VR_SLICE]

        pr_norm = np.linalg.norm(pr)

        if pr_norm < 1e-6:
            return np.zeros(3)

        # Eq. (16):
        # z2 = vr + k1 * pr
        z2 = vr + self.k1 * pr

        # Eq. (19):
        barrier_term = (
            (z1 / (self.kb**2 - z1**2))
            * (self.mass / pr_norm)
            * (
                -np.eye(3)
                + np.outer(nt, nt)
            )
            @ ntd
        )

        # Target acceleration is a disturbance in the paper.
        # No visual measurement of e_at is provided.
        at = np.zeros(3)

        a_d = (
            -self.k1 * vr
            -self.k2 * z2
            -pr
            + barrier_term
            + at
        )

        return a_d
    

    def build_F(self, dt, omega, accel, p_img, pzc):

        F = np.zeros((18, 18))

        q = self.x[self.Q_SLICE]
        q_filter = UnitQuaternion(q)
        R_eb = q_filter.R

        # Quaternion block
        wx, wy, wz = omega

        theta = np.linalg.norm(omega) * dt

        if theta < 1e-12:
            dq = np.array([1.0, 0.0, 0.0, 0.0])
        else:
            axis = omega / np.linalg.norm(omega)

            dq = np.array([
                math.cos(theta / 2.0),
                axis[0] * math.sin(theta / 2.0),
                axis[1] * math.sin(theta / 2.0),
                axis[2] * math.sin(theta / 2.0)
            ])

        dq0, dq1, dq2, dq3 = dq

        M = np.array([
            [ dq0, -dq1, -dq2, -dq3],
            [ dq1,  dq0, -dq3,  dq2],
            [ dq2,  dq3,  dq0, -dq1],
            [ dq3, -dq2,  dq1,  dq0]
        ])

        F[0:4, 0:4] = M

        # Quaternion to gyro bias block

        q0, q1, q2, q3 = q

        F_q_bg = np.array([
            [ q1/2,  q2/2,  q3/2],
            [-q0/2,  q3/2, -q2/2],
            [-q3/2, -q0/2,  q1/2],
            [ q2/2, -q1/2, -q0/2]
        ]) * dt

        F[0:4, 12:15] = F_q_bg

        # Position block

        F[4:7, 4:7] = np.eye(3)
        F[4:7, 7:10] = np.eye(3) * dt

        # Velocity - quaternion block

        bacc = self.x[self.BA_SLICE]
        a_b = accel - bacc

        M1 = np.array([
            [q0, -q3,  q2],
            [q1,  q2,  q3],
            [-q2, q1,  q0],
            [-q3, -q0, q1]
        ])

        M2 = np.array([
            [q3,  q0, -q1],
            [q2, -q1, -q0],
            [q1, q2, q3],
            [q0, -q3, q2]
        ])

        M3 = np.array([
            [-q2, q1, q0],
            [q3, q0, -q1],
            [-q0, q3, -q2],
            [q1, q2, q3]
        ])

        F_v_q = 2.0 * np.column_stack([
            M1 @ a_b,
            M2 @ a_b,
            M3 @ a_b
        ]).T * dt

        F[7:10, 0:4] = F_v_q

        # Velocity - accelerometer bias

        F_v_ba = -R_eb * dt

        F[7:10, 15:18] = F_v_ba

        # Image - velocity

        px, py = p_img

        L_v = np.array([
            [-1.0/pzc, 0.0, px/pzc],
            [0.0, -1.0/pzc, py/pzc]
        ])

        F_img_v = (
            L_v
            @ self.R_BC
            @ R_eb.T
            * dt
        )

        F[10:12, 7:10] = F_img_v

        # Image - quaternion

        vr = self.x[self.VR_SLICE]
        px, py = p_img

        M4 = np.array([
            [2*px*q0 + 2*q3, 2*px*q3 - 2*q0, -2*px*q2 - 2*q1],
            [2*px*q1 - 2*q2, 2*px*q2 + 2*q1,  2*px*q3 - 2*q0],
            [2*px*q2 - 2*q1, 2*px*q1 - 2*q2, -2*px*q0 - 2*q3],
            [2*px*q3 + 2*q0, 2*px*q0 + 2*q3,  2*px*q1 - 2*q2]
        ])

        M5 = np.array([
            [2*py*q0 - 2*q2, 2*py*q3 + 2*q1, -2*py*q2 - 2*q0],
            [2*py*q1 - 2*q3, 2*py*q2 + 2*q0,  2*py*q3 + 2*q1],
            [2*py*q2 - 2*q0, 2*py*q1 - 2*q3, -2*py*q0 + 2*q2],
            [2*py*q3 - 2*q1, 2*py*q0 - 2*q2,  2*py*q1 - 2*q3]
        ])

        F_img_q = (
            np.column_stack((
                M4 @ vr,
                M5 @ vr
            )).T
            / pzc
            * dt
        )

        F[10:12, 0:4] = F_img_q

        # Image - image

        v_camera = self.R_BC.T @ R_eb.T @ vr
        vzc = v_camera[2]

        omega_camera = self.R_BC.T @ np.asarray(omega)
        wxc, wyc, wzc = omega_camera

        F_img_img = np.array([
            [
                vzc/pzc + py*wxc - 2*px*wyc,
                px*wxc + wzc
            ],
            [
                -py*wyc - wzc,
                vzc/pzc + 2*py*wxc - px*wyc
            ]
        ])

        F_img_img = np.eye(2) + F_img_img * dt

        F[10:12, 10:12] = F_img_img

        # Image - gyro bias

        F_img_bg = -np.array([
            [
                px*py,
                -(1.0 + px**2),
                py
            ],
            [
                1.0 + py**2,
                -px*py,
                -px
            ]
        ]) @ self.R_BC.T

        F[10:12, 12:15] = F_img_bg

        # Gyroscope bias

        F[12:15, 12:15] = np.eye(3)

        # Accelerometer bias

        F[15:18, 15:18] = np.eye(3)

        return F
    

    def store_dkf_state(self, x, P, omega, accel, dt, p_img, pzc):
        # Store one IMU prediction for delayed DKF replay.

        self.state_buffer.append(x.copy())
        self.covariance_buffer.append(P.copy())

        self.imu_buffer.append({
            "omega": omega.copy(),
            "accel": accel.copy(),
            "dt": dt,
            "p_img": p_img.copy(),
            "pzc": pzc
        })

        # Keep only the history required for the delay
        max_buffer = DKF_DELAY + 1

        if len(self.state_buffer) > max_buffer:
            self.state_buffer.pop(0)

        if len(self.covariance_buffer) > max_buffer:
            self.covariance_buffer.pop(0)

        if len(self.imu_buffer) > max_buffer:
            self.imu_buffer.pop(0)


    def delayed_correction(self, p_img):
        """
        Delayed image measurement correction.

        The incoming image measurement at time k is assumed to
        correspond to the delayed state k-D.

        Implements the paper's delayed correction:
            x_(k-D) = x_(k-D|k-D-1)
                    + K (z_(k-D) - H x_(k-D|k-D-1))

            P_(k-D) = (I - K H) P_(k-D|k-D-1)

        followed by replay of the stored IMU predictions.
        """

        # We need D+1 states:
        # k-D, ..., k
        if len(self.state_buffer) < DKF_DELAY + 1:
            return

        # The paper requires measurement covariance R.
        # Since the gazebo sim is an ideal environment, R has been set to np.zeros((2,2)) in the init section.

        # 1. Retrieve delayed predicted state

        delayed_index = 0

        x_delayed_pred = self.state_buffer[delayed_index].copy()
        P_delayed_pred = self.covariance_buffer[delayed_index].copy()

        # 2. Measurement innovation

        innovation = (
            p_img
            - self.H @ x_delayed_pred
        )

        # 3. Kalman gain

        S = (
            self.H
            @ P_delayed_pred
            @ self.H.T
            + self.R
        )

        K = (
            P_delayed_pred
            @ self.H.T
            @ np.linalg.inv(S)
        )

        # 4. Delayed state correction

        x_delayed = (
            x_delayed_pred
            + K @ innovation
        )

        # 5. Delayed covariance correction

        I = np.eye(18)

        P_delayed = (
            (I - K @ self.H)
            @ P_delayed_pred
        )

        # Store corrected delayed state
        self.state_buffer[delayed_index] = x_delayed.copy()
        self.covariance_buffer[delayed_index] = P_delayed.copy()

        # 6. Replay IMU predictions

        x_replay = x_delayed.copy()
        P_replay = P_delayed.copy()

        for i in range(1, len(self.imu_buffer)):

            imu_data = self.imu_buffer[i]

            omega = imu_data["omega"]
            accel = imu_data["accel"]
            dt = imu_data["dt"]
            p_img_history = imu_data["p_img"]
            pzc_history = imu_data["pzc"]

            # build_F() uses self.x internally.
            # Temporarily make self.x the replay state.
            self.x = x_replay

            F = self.build_F(
                dt=dt,
                omega=omega,
                accel=accel,
                p_img=p_img_history,
                pzc=pzc_history
            )

            # State prediction
            x_replay = F @ x_replay

            # Covariance prediction
            P_replay = F @ P_replay @ F.T

            # Update the corresponding history entry
            self.state_buffer[i] = x_replay.copy()
            self.covariance_buffer[i] = P_replay.copy()

        # 7. Current state = replayed state

        self.x = x_replay
        self.P = P_replay

        self.get_logger().info(
            f"DKF CORRECTION | "
            f"innovation={innovation} | "
            f"pr={self.x[self.PR_SLICE]} | "
            f"vr={self.x[self.VR_SLICE]}",
            throttle_duration_sec=1.0
        )

    def predict_state(self, dt, omega, accel, p_img, pzc):

        F = self.build_F(
            dt=dt,
            omega=omega,
            accel=accel,
            p_img=p_img,
            pzc=pzc
        )

        # Eq. (30): State prediction
        # x_hat_k|k-1 = F_k x_hat_k-1

        x_pred = F @ self.x

        # Eq. (31): Covariance prediction
        #
        # For now we retain the F P F^T portion.
        # G Q G^T will be added when we implement G exactly
        # from the paper.

        P_pred = F @ self.P @ F.T

        # Store the predicted state and covariance
        # before replacing the current estimate.
        self.x = x_pred
        self.P = P_pred

        self.store_dkf_state(
            self.x,
            self.P,
            omega,
            accel,
            dt,
            p_img,
            pzc
        )

        if not np.all(np.isfinite(self.x)):
            self.get_logger().error(
                "DKF STATE CONTAINS NaN/INF!"
            )

        if not np.all(np.isfinite(self.P)):
            self.get_logger().error(
                "DKF COVARIANCE CONTAINS NaN/INF!"
            )

        self.get_logger().info(
            f"DKF | "
            f"pr={self.x[self.PR_SLICE]} | "
            f"vr={self.x[self.VR_SLICE]} | "
            f"pimg={self.x[self.IMG_SLICE]} | "
            f"||pr||={np.linalg.norm(self.x[self.PR_SLICE]):.3f}",
            throttle_duration_sec=1.0
        )

    # TIMESTAMP

    def micros(self):

        return int(
            self.get_clock().now().nanoseconds / 1000
        )

    # OFFBOARD MODE

    def publish_mode(self):

        msg = OffboardControlMode()

        msg.timestamp = self.micros()

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


    def desired_thrust_direction(self, a_d):
        """
        Calculate the desired thrust direction using Eq. (21).

        a_d: Desired acceleration in NED coordinates (m/s^2).
        Returns:
            n_fd: Unit vector representing desired thrust direction.
        """

        # Equation (21), neglecting aerodynamic drag:
        thrust_acceleration = a_d - self.g

        thrust_norm = np.linalg.norm(thrust_acceleration)

        if thrust_norm < 1e-6:
            self.get_logger().warning(
                "Cannot calculate desired thrust direction: "
                "thrust acceleration is near zero."
            )

            return None

        n_fd = thrust_acceleration / thrust_norm

        return n_fd


    def desired_thrust_magnitude(self, a_d):
        """
        Calculate the desired thrust magnitude using the paper's
        thrust equation, neglecting aerodynamic drag.

        a_d: Desired acceleration in NED coordinates (m/s^2).
        Returns:
            f_d: Desired thrust magnitude in Newtons.
        """

        if self.q is None:
            return None

        # Current thrust direction in NED.
        # PX4 body frame is FRD, so thrust acts along negative body Z.
        R_be = self.q.R

        n_f = R_be @ np.array([
            0.0,
            0.0,
            -1.0
        ])

        # Equation for desired thrust magnitude, neglecting drag:
        # f_d = n_f^T (m*a_d - m*g)

        force_required = self.mass * (a_d - self.g)

        f_d = float(np.dot(n_f, force_required))

        # A multicopter cannot produce negative thrust.
        f_d = max(0.0, f_d)

        return f_d


    def desired_attitude(self, n_f, n_fd, R_be):
        """
        Construct the desired attitude matrix R_d.

        n_f: Current thrust direction in the earth/NED frame.
        n_fd: Desired thrust direction in the earth/NED frame.
        R_be: Current body-to-earth/NED rotation matrix.

        Returns:
            R_d: Desired body-to-earth/NED rotation matrix.
        """

        n_f = np.asarray(n_f, dtype=float)
        n_fd = np.asarray(n_fd, dtype=float)

        # Normalize both thrust-direction vectors.
        n_f_norm = np.linalg.norm(n_f)
        n_fd_norm = np.linalg.norm(n_fd)

        if n_f_norm < 1e-6 or n_fd_norm < 1e-6:
            return None

        n_f = n_f / n_f_norm
        n_fd = n_fd / n_fd_norm

        # Axis and angle required to rotate the current
        # thrust direction onto the desired thrust direction.
        cross_product = np.cross(n_f, n_fd)

        dot_product = float(np.clip(
            np.dot(n_f, n_fd),
            -1.0,
            1.0
        ))

        # Skew-symmetric cross-product matrix.
        S = np.array([
            [0.0, -cross_product[2], cross_product[1]],
            [cross_product[2], 0.0, -cross_product[0]],
            [-cross_product[1], cross_product[0], 0.0]
        ])

        # Handle the case where the thrust directions are
        # already aligned.
        if dot_product > 1.0 - 1e-8:
            R_tilt = np.eye(3)

        # The directions are opposite, so the minimum-angle
        # rotation axis is ambiguous.
        elif dot_product < -1.0 + 1e-8:
            self.get_logger().warning(
                "Current and desired thrust directions are "
                "nearly opposite; desired attitude is ambiguous."
            )
            return None

        else:
            # Rodrigues' rotation formula.
            R_tilt = (
                np.eye(3)
                + S
                + (S @ S) / (1.0 + dot_product)
            )

        # Apply the tilt correction to the current attitude.
        R_d = R_tilt @ R_be

        return R_d
    
    def attitude_correction(self, R_d, R_be):
        """
        Calculate the attitude-correction angular velocity
        using the paper's SO(3) attitude-error expression.

        R_d: Desired body-to-earth rotation matrix.
        R_be: Current body-to-earth rotation matrix.

        Returns:
            omega_2: Three-component attitude-correction vector.
        """

        attitude_error = (
            R_d.T @ R_be
            - R_be.T @ R_d
        )

        # vex() extracts the vector corresponding to a
        # 3x3 skew-symmetric matrix.
        omega_2 = -0.5 * np.array([
            attitude_error[2, 1] - attitude_error[1, 2],
            attitude_error[0, 2] - attitude_error[2, 0],
            attitude_error[1, 0] - attitude_error[0, 1]
        ])

        return omega_2


    # BODY RATE PUBLISH Fn

    def publish_rates(self, omega, thrust):

        msg = VehicleRatesSetpoint()

        msg.timestamp = self.micros()

        msg.roll = float(omega[0])
        msg.pitch = float(omega[1])
        msg.yaw = float(omega[2])

        msg.thrust_body = [
            0.0,
            0.0,
            float(thrust)
        ]

        self.rate_setpoint_pub.publish(msg)


# --- CALLBACKS ---

    # GROUND-TRUTH INITIALIZATION INPUTS

    def gt_position_cb(self, msg):
        self.gt_relative_position = np.array([
            msg.x,
            msg.y,
            msg.z
        ], dtype=float)


    def gt_velocity_cb(self, msg):
        self.gt_relative_velocity = np.array([
            msg.x,
            msg.y,
            msg.z
        ], dtype=float)



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

        q = msg.q

        if len(q) == 4:

            w, x, y, z = q

            self.yaw = math.atan2(
                2.0 * (w * z + x * y),
                1.0 - 2.0 * (y * y + z * z)
            )

    # TARGET CENTROID

    def centroid_cb(self, msg):

        u = msg.x
        v = msg.y

        self.get_logger().info(
            f"CENTROID CALLBACK | u={u:.1f}, v={v:.1f}",
            throttle_duration_sec=1.0
        )

        p_img = np.array([
            (u - self.cx) / self.fx,
            (v - self.cy) / self.fy
        ])

        if self.q is None:
            self.get_logger().warning(
                "CENTROID CALLBACK STOPPED: attitude is None",
                throttle_duration_sec=1.0
            )
            return

        # Image → LOS
        
        nt_camera = self.pixel_to_camera_ray(u, v)

        nt_body = self.R_BC @ nt_camera

        nt = self.q_rotate(
            self.q,
            nt_body
        )


        # INITIALIZE DKF

        if not self.dkf_initialized:

            # Wait until attitude and both ground-truth measurements are available
            if (
                self.gt_relative_position is None
                or self.gt_relative_velocity is None
            ):
                return

            # Ground-truth node publishes target - interceptor in Gazebo ENU.
            # Convert the relative position and velocity into PX4 NED.
            p_gt_ned = self.C_NED_ENU @ self.gt_relative_position
            v_gt_ned = self.C_NED_ENU @ self.gt_relative_velocity

            # The DKF relative state follows interceptor - target.
            self.x[self.PR_SLICE] = -p_gt_ned
            self.x[self.VR_SLICE] = -v_gt_ned

            self.get_logger().info(
                f"GT FRAME CONVERSION | "
                f"p_gt_enu={self.gt_relative_position} | "
                f"p_gt_ned={p_gt_ned} | "
                f"pr_init={self.x[self.PR_SLICE]} | "
                f"v_gt_ned={v_gt_ned} | "
                f"vr_init={self.x[self.VR_SLICE]}",
                throttle_duration_sec=1.0
            )

            self.get_logger().info(
                f"GT RELATIVE POSITION RAW | "
                f"{self.gt_relative_position}",
                throttle_duration_sec=1.0
            )

            # Initialize image state and attitude as before
            self.x[self.IMG_SLICE] = p_img
            self.x[self.Q_SLICE] = np.array(self.q)

            self.dkf_initialized = True

            if (
                self.gt_relative_position is None
                or self.gt_relative_velocity is None
            ):
                self.get_logger().warning(
                    "CENTROID CALLBACK STOPPED: waiting for ground-truth "
                    f"position/velocity | "
                    f"position_available={self.gt_relative_position is not None} | "
                    f"velocity_available={self.gt_relative_velocity is not None}",
                    throttle_duration_sec=1.0
                )
                return


        # DELAYED IMAGE CORRECTION
        if self.dkf_initialized:
            self.delayed_correction(p_img)

        # Current estimated state

        # Estimated relative state is expressed in the NED world frame.
        pr = self.x[self.PR_SLICE]

        # PX4 attitude: body FRD -> world NED.
        R_eb = UnitQuaternion(
            self.x[self.Q_SLICE]
        ).R

        # State convention: pr = interceptor - target.
        # Therefore, target relative to interceptor is -pr.
        p_target_ned = -pr

        # NED -> body FRD.
        p_target_body = R_eb.T @ p_target_ned

        # Body FRD -> camera optical frame.
        p_target_camera = self.R_BC.T @ p_target_body

        pzc = p_target_camera[2]

        self.get_logger().info(
            f"CAMERA FRAME CHECK | "
            f"target_ned={p_target_ned} | "
            f"target_body={p_target_body} | "
            f"target_camera={p_target_camera} | "
            f"depth={pzc:.3f} m",
            throttle_duration_sec=1.0
        )

        # Candidate A: current world-to-body transformation
        p_body_A = R_eb.T @ p_target_ned
        p_camera_A = self.R_BC.T @ p_body_A

        # Candidate B: opposite attitude transformation
        p_body_B = R_eb @ p_target_ned
        p_camera_B = self.R_BC.T @ p_body_B

        self.get_logger().info(
            f"TRANSFORM COMPARISON | "
            f"A_camera={p_camera_A} | "
            f"A_depth={p_camera_A[2]:.3f} | "
            f"B_camera={p_camera_B} | "
            f"B_depth={p_camera_B[2]:.3f}",
            throttle_duration_sec=1.0
        )

        self.get_logger().info(
            f"FRAME CHECK | "
            f"target_earth={p_target_ned} | "
            f"target_body={p_target_body} | "
            f"target_camera={p_target_camera} | "
            f"centroid=({u:.1f}, {v:.1f})",
            throttle_duration_sec=1.0
        )

        self.get_logger().info(
            f"DEPTH DIAGNOSTIC | "
            f"pr={pr} | "
            f"q_filter={self.x[self.Q_SLICE]} | "
            f"q_px4={np.array(self.q)} | "
            f"R_eb=\n{R_eb} | "
            f"R_BC=\n{self.R_BC}",
            throttle_duration_sec=1.0
        )

        p_target_camera = (
            -self.R_BC.T
            @ R_eb.T
            @ pr
        )

        pzc = p_target_camera[2]

        # IMAGE PROJECTION CHECK
        if pzc > 0.01:
            Xc, Yc, Zc = p_target_camera

            predicted_x = Xc / Zc
            predicted_y = Yc / Zc

            measured_x = (u - self.cx) / self.fx
            measured_y = (v - self.cy) / self.fy

            self.get_logger().info(
                f"IMAGE PROJECTION CHECK | "
                f"predicted=({predicted_x:.4f}, {predicted_y:.4f}) | "
                f"measured=({measured_x:.4f}, {measured_y:.4f})",
                throttle_duration_sec=1.0
            )

        # EXISTING DEPTH CHECK — KEEP THIS
        if pzc <= 0.01:
            self.get_logger().warning(
                f"CENTROID CALLBACK STOPPED: invalid target depth "
                f"pzc={pzc:.4f} m | "
                f"pr={pr} | "
                f"p_target_camera={p_target_camera}",
                throttle_duration_sec=1.0
            )
            return

        self.latest_p_img = p_img
        self.latest_pzc = pzc

        self.get_logger().info(
            f"CONTROLLER INPUTS VALID | "
            f"p_img={p_img} | "
            f"pzc={pzc:.3f} m | "
            f"pr={self.x[self.PR_SLICE]} | "
            f"vr={self.x[self.VR_SLICE]}",
            throttle_duration_sec=1.0
        )

        # Current interceptor LOS

        ntd = self.get_interceptor_LOS()

        z1 = self.get_LOS_error(
            nt,
            ntd
        )

        omega_1 = self.collinear_controller(
            nt,
            ntd
        )

        self.omega_1 = omega_1

        self.a_d = self.desired_acceleration(
            nt,
            ntd,
            z1
        )

        # Calculate desired thrust direction
        n_fd = self.desired_thrust_direction(
            self.a_d
        )

        if n_fd is not None:
            self.n_fd = n_fd

        # Current body-to-earth/NED rotation.
        R_be = self.q.R

        # Current thrust direction in NED.
        n_f = R_be @ np.array([
            0.0,
            0.0,
            -1.0
        ])

        # Calculate desired attitude and attitude correction.
        R_d = self.desired_attitude(
            n_f,
            self.n_fd,
            R_be
        )

        if R_d is not None:

            omega_2 = self.attitude_correction(
                R_d,
                R_be
            )

            self.get_logger().info(
                f"omega_1 = {self.omega_1} | "
                f"omega_2 = {omega_2}",
                throttle_duration_sec=0.5
            )

        # Calculate desired thrust magnitude
        f_d = self.desired_thrust_magnitude(
            self.a_d
        )

        if f_d is not None:
            self.f_d = f_d

            self.get_logger().info(
                f"a_d = {self.a_d}, "
                f"n_fd = {self.n_fd}, "
                f"f_d = {self.f_d:.3f} N"
            )

        self.get_logger().info(
            f"AD | "
            f"z1={z1:.4f} | "
            f"pr={self.x[self.PR_SLICE]} | "
            f"vr={self.x[self.VR_SLICE]} | "
            f"z2={self.x[self.VR_SLICE] + self.k1*self.x[self.PR_SLICE]} | "
            f"ad={self.a_d}",
            throttle_duration_sec=1.0
        )

        # self.get_logger().info(
        #     f"nt  = {nt} | "
        #     f"ntd = {ntd} | "
        #     f"omega_1 = {omega_1} | "
        #     f"z1 = {z1}"
        # )

    def imu_cb(self, msg):

        # PX4 SensorCombined values
        self.omega = np.array([
            msg.gyro_rad[0],
            msg.gyro_rad[1],
            msg.gyro_rad[2]
        ])

        self.accel = np.array([
            msg.accelerometer_m_s2[0],
            msg.accelerometer_m_s2[1],
            msg.accelerometer_m_s2[2]
        ])

        # PX4 timestamp is in microseconds
        timestamp = msg.timestamp

        if self.last_imu_time is not None:
            self.dt = (timestamp - self.last_imu_time) * 1e-6

        self.last_imu_time = timestamp

        if (
            self.dkf_initialized
            and self.dt > 0.0
            and self.latest_p_img is not None
            and self.latest_pzc is not None
        ):
            self.predict_state(
                self.dt,
                self.omega,
                self.accel,
                self.latest_p_img,
                self.latest_pzc
            )

        self.get_logger().info(
        f"omega={self.omega} | "
        f"accel={self.accel} | "
        f"dt={self.dt}",
        throttle_duration_sec=1.0
    )

    # MAIN LOOP

    def loop(self):

        # ALWAYS PUBLISH OFFBOARD MODE

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

            # Target altitude reached.

            self.get_logger().info(
                f"TAKEOFF COMPLETE | z={z:.2f} m"
            )

            self.phase = "OMEGA_1"

            return

        # PHASE 5: OMEGA_1

        if self.phase == "OMEGA_1":

            z = self.position.z

            self.control_mode = "body_rate"
            self.publish_mode()

            self.publish_rates(
                self.omega_1,
                -0.5
            )

            self.get_logger().info(
                f"OMEGA_1 | "
                f"z={z:.2f} m | "
                f"omega_1={self.omega_1} | "
                f"yaw_rate={self.omega_1[2]:.4f}",
                throttle_duration_sec=0.5
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


if __name__ == '__main__':

    main()