#!/usr/bin/env python3

import cv2

import rclpy
from rclpy.node import Node

from sensor_msgs.msg import Image
from cv_bridge import CvBridge

IMAGE_TOPIC = "/world/default/model/interceptor_x500_0/link/camera_link/sensor/camera/image"

from rclpy.qos import (
    QoSProfile,
    ReliabilityPolicy,
    HistoryPolicy
)

qos = QoSProfile(
    history=HistoryPolicy.KEEP_LAST,
    depth=1,
    reliability=ReliabilityPolicy.BEST_EFFORT,
)

class VisionNode(Node):

    def __init__(self):
        super().__init__("vision_node")

        self.bridge = CvBridge()
        self.first_image = True

        self.subscription = self.create_subscription(
            Image,
            IMAGE_TOPIC,
            self.image_callback,
            qos
        )

        self.get_logger().info("Vision node started.")

    def image_callback(self, msg):

        frame = self.bridge.imgmsg_to_cv2(
            msg,
            desired_encoding="bgr8"
        )

        if self.first_image:
            self.get_logger().info(
                f"Receiving images ({frame.shape[1]}x{frame.shape[0]})"
            )
            self.first_image = False
        cv2.imshow("Interceptor Camera", frame)
        cv2.waitKey(1)


def main(args=None):

    rclpy.init(args=args)

    node = VisionNode()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    cv2.destroyAllWindows()
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()