#!/usr/bin/env python3

import threading

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Point, Vector3

import gz.transport13 as gz_transport
from gz.msgs10.pose_v_pb2 import Pose_V


class RelativePositionNode(Node):

    def __init__(self):
        super().__init__('relative_position_node')

        # Gazebo model names
        self.interceptor_name = 'interceptor_x500_1'
        self.target_name = 'interceptor_x500_2'

        # Latest model positions in the Gazebo world frame
        self.interceptor_position = None
        self.target_position = None

        # Relative ground-truth state:
        # target position - interceptor position
        self.relative_position = None
        self.relative_velocity = None

        # Previous sample for numerical differentiation
        self.previous_relative_position = None
        self.previous_sim_time = None

        self.position_lock = threading.Lock()

        # ROS 2 publishers
        self.position_publisher = self.create_publisher(
            Point,
            '/ground_truth/relative_position',
            10
        )

        self.velocity_publisher = self.create_publisher(
            Vector3,
            '/ground_truth/relative_velocity',
            10
        )

        # Gazebo Transport subscriber
        self.gz_node = gz_transport.Node()

        self.gz_node.subscribe(
            Pose_V,
            '/world/default/pose/info',
            self.pose_callback
        )

        # Publish the latest state at 20 Hz
        self.timer = self.create_timer(
            0.05,
            self.publish_ground_truth
        )

        self.get_logger().info(
            'Subscribed to /world/default/pose/info'
        )
        self.get_logger().info(
            'Publishing /ground_truth/relative_position'
        )
        self.get_logger().info(
            'Publishing /ground_truth/relative_velocity'
        )

    def pose_callback(self, msg):
        """Extract model positions and estimate relative velocity."""

        # Gazebo simulation timestamp
        sim_time = (
            float(msg.header.stamp.sec)
            + float(msg.header.stamp.nsec) * 1e-9
        )

        interceptor_position = None
        target_position = None

        # Identify the models by name, never by array index
        for pose in msg.pose:

            if pose.name == self.interceptor_name:
                interceptor_position = (
                    pose.position.x,
                    pose.position.y,
                    pose.position.z
                )

            elif pose.name == self.target_name:
                target_position = (
                    pose.position.x,
                    pose.position.y,
                    pose.position.z
                )

        # Do not calculate anything until both models are available
        if interceptor_position is None or target_position is None:
            return

        # Relative position in the Gazebo world frame
        relative_position = (
            target_position[0] - interceptor_position[0],
            target_position[1] - interceptor_position[1],
            target_position[2] - interceptor_position[2]
        )

        with self.position_lock:

            # First valid measurement: position only
            if (
                self.previous_relative_position is None
                or self.previous_sim_time is None
            ):
                self.relative_position = relative_position
                self.previous_relative_position = relative_position
                self.previous_sim_time = sim_time
                return

            dt = sim_time - self.previous_sim_time

            # Ignore duplicate timestamps
            if dt <= 0.0:
                return

            # Handle simulation-time resets
            if dt > 1.0:
                self.relative_position = relative_position
                self.relative_velocity = None
                self.previous_relative_position = relative_position
                self.previous_sim_time = sim_time
                return

            # Numerical derivative of relative position
            relative_velocity = tuple(
                (
                    relative_position[i]
                    - self.previous_relative_position[i]
                ) / dt
                for i in range(3)
            )

            # Update latest ground-truth state
            self.relative_position = relative_position
            self.relative_velocity = relative_velocity

            # Save this sample for the next derivative
            self.previous_relative_position = relative_position
            self.previous_sim_time = sim_time

    def publish_ground_truth(self):
        """Publish the latest relative position and velocity."""

        with self.position_lock:
            position = self.relative_position
            velocity = self.relative_velocity

        if position is None:
            return

        position_msg = Point()
        position_msg.x = position[0]
        position_msg.y = position[1]
        position_msg.z = position[2]

        self.position_publisher.publish(position_msg)

        # Velocity requires at least two distinct position timestamps
        if velocity is not None:

            velocity_msg = Vector3()
            velocity_msg.x = velocity[0]
            velocity_msg.y = velocity[1]
            velocity_msg.z = velocity[2]

            self.velocity_publisher.publish(velocity_msg)


def main(args=None):
    rclpy.init(args=args)

    node = RelativePositionNode()

    try:
        rclpy.spin(node)

    except KeyboardInterrupt:
        pass

    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()