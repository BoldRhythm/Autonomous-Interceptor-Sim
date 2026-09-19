import time, math, rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, QoSReliabilityPolicy, QoSHistoryPolicy, QoSDurabilityPolicy
from px4_msgs.msg import VehicleAttitude
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


        # Initial state

        self.thrust_body = np.array([0.0, 0.0, -1.0]) # direction of thrust

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

    def q_rotate(self, q, q_initial):

        q_rotated = q * q_initial # since q is a SpatialMath UnitQuaternion, it handles q*v*q_conj. No need to explicitly write out that eqn.
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
        y = (v - self.cy) / self.fy

        ray = np.array([
            x,
            y,
            1.0
        ])

        return ray / np.linalg.norm(ray)

    def att_cb(self, msg):

        q = UnitQuaternion(msg.q)

        thrust_ned = self.q_rotate(q, self.thrust_body)

        # self.get_logger().info(
        #     f"q = {msg.q}, thrust_ned = {thrust_ned}"
        # )

    def centroid_cb(self, msg):

        u = msg.x
        v = msg.y

        # Pixel -> camera-frame LOS
        ray_camera = self.pixel_to_camera_ray(u, v)

        # Camera frame -> PX4 body FRD
        ray_body = self.R_BC @ ray_camera

        self.get_logger().info(
            f"Pixel: ({u:.1f}, {v:.1f}) | "
            f"Ray camera: {ray_camera} | "
            f"Ray body: {ray_body}"
        )



def main(args=None):
    rclpy.init()
    node = Attitude()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()