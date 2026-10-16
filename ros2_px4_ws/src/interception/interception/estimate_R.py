#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Point

import numpy as np


# Camera parameters
IMAGE_WIDTH = 640
IMAGE_HEIGHT = 480

HFOV = 1.74
VFOV = 1.45

CX = IMAGE_WIDTH / 2.0
CY = IMAGE_HEIGHT / 2.0

FX = (IMAGE_WIDTH / 2.0) / np.tan(HFOV / 2.0)
FY = (IMAGE_HEIGHT / 2.0) / np.tan(VFOV / 2.0)


# Number of samples
NUM_SAMPLES = 1000


class EstimateR(Node):

    def __init__(self):
        super().__init__('estimate_R')

        self.samples = []

        self.subscription = self.create_subscription(
            Point,
            '/interceptor/target_centroid',
            self.centroid_cb,
            10
        )

        self.get_logger().info('R calibration started.')
        self.get_logger().info(
            f'Collecting {NUM_SAMPLES} samples...'
        )

    # Convert pixel to normalized coordinates
    def pixel_to_normalized(self, u, v):

        x = (u - CX) / FX
        y = (v - CY) / FY

        return np.array([x, y], dtype=np.float64)

    # Get centroid
    def centroid_cb(self, msg):

        u = msg.x
        v = msg.y

        if not np.isfinite(u) or not np.isfinite(v):
            return

        p_img = self.pixel_to_normalized(u, v)

        self.samples.append(p_img)

        n = len(self.samples)

        if n % 100 == 0:
            self.get_logger().info(
                f'Samples: {n}/{NUM_SAMPLES}'
            )

        # Calculate R
        if n >= NUM_SAMPLES:

            samples = np.array(self.samples)

            mean = np.mean(samples, axis=0)

            sigma_x2 = np.var(
                samples[:, 0],
                ddof=1
            )

            sigma_y2 = np.var(
                samples[:, 1],
                ddof=1
            )

            R = np.array([
                [sigma_x2, 0.0],
                [0.0, sigma_y2]
            ])

            self.get_logger().info(
                'R calibration complete.'
            )

            self.get_logger().info(
                f'Mean: x={mean[0]:.8f}, y={mean[1]:.8f}'
            )

            self.get_logger().info(
                f'sigma_x^2 = {sigma_x2:.10e}'
            )

            self.get_logger().info(
                f'sigma_y^2 = {sigma_y2:.10e}'
            )

            self.get_logger().info(
                f'R =\n{R}'
            )

            # Save R
            np.savetxt(
                'R_matrix.txt',
                R,
                fmt='%.12e'
            )

            self.get_logger().info(
                'R saved to R_matrix.txt'
            )

            self.destroy_subscription(self.subscription)


def main(args=None):

    rclpy.init(args=args)

    node = EstimateR()

    try:
        rclpy.spin(node)

    except KeyboardInterrupt:
        pass

    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()