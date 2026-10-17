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

        # Individual velocities
        self.interceptor_velocity = None
        self.target_velocity = None

        self.previous_interceptor_position = None
        self.previous_target_position = None

        # Limit console output to once per second
        self.last_velocity_log_time = 0.0

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

        self.interceptor_vel_publisher = self.create_publisher(
            Vector3,
            '/ground_truth/interceptor_velocity',
            10
        )

        self.target_vel_publisher = self.create_publisher(
            Vector3,
            '/ground_truth/target_velocity',
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
        self.get_logger().info(
            'Publishing /ground_truth/interceptor_velocity'
        )
        self.get_logger().info(
            'Publishing /ground_truth/target_velocity'
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
        interceptor_velocity = None
        target_velocity = None

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

            # First valid measurement: initialise previous samples.
            if (
                self.previous_relative_position is None
                or self.previous_sim_time is None
                or self.previous_interceptor_position is None
                or self.previous_target_position is None
            ):
                self.relative_position = relative_position

                self.previous_relative_position = relative_position
                self.previous_interceptor_position = interceptor_position
                self.previous_target_position = target_position
                self.previous_sim_time = sim_time

                return

            dt = sim_time - self.previous_sim_time

            # Ignore duplicate or out-of-order timestamps.
            if dt <= 0.0:
                return

            # Reset the derivative after a large simulation-time jump.
            if dt > 1.0:
                self.relative_position = relative_position
                self.relative_velocity = None
                self.interceptor_velocity = None
                self.target_velocity = None

                self.previous_relative_position = relative_position
                self.previous_interceptor_position = interceptor_position
                self.previous_target_position = target_position
                self.previous_sim_time = sim_time

                return

            # Numerical estimation of interceptor velocity
            interceptor_velocity = tuple(
                (interceptor_position[i] - self.previous_interceptor_position[i]) / dt
                for i in range(3)
            )

            # Numerical estimation of target velocity
            target_velocity = tuple(
                (target_position[i] - self.previous_target_position[i]) / dt
                for i in range(3)
            )

            # Relative velocity = target velocity - interceptor velocity.
            relative_velocity = tuple(
                target_velocity[i] - interceptor_velocity[i]
                for i in range(3)
            )

            # Update the latest samples.
            self.relative_position = relative_position
            self.relative_velocity = relative_velocity

            self.interceptor_velocity = interceptor_velocity
            self.target_velocity = target_velocity

            # Save positions and timestamp for the next sample.
            self.previous_relative_position = relative_position
            self.previous_interceptor_position = interceptor_position
            self.previous_target_position = target_position
            self.previous_sim_time = sim_time

    def publish_ground_truth(self):
        """Publish the latest relative position and velocity."""

        with self.position_lock:
            position = self.relative_position
            velocity = self.relative_velocity
            interceptor_velocity = self.interceptor_velocity
            target_velocity = self.target_velocity

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

            interceptor_vel_msg = Vector3()
            interceptor_vel_msg.x = interceptor_velocity[0]
            interceptor_vel_msg.y = interceptor_velocity[1]
            interceptor_vel_msg.z = interceptor_velocity[2]

            self.interceptor_vel_publisher.publish(interceptor_vel_msg)

            target_vel_msg = Vector3()
            target_vel_msg.x = target_velocity[0]
            target_vel_msg.y = target_velocity[1]
            target_vel_msg.z = target_velocity[2]

            self.target_vel_publisher.publish(target_vel_msg)



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