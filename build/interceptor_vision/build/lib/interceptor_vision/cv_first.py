#!/usr/bin/env python3

import cv2
import numpy as np

import rclpy
from rclpy.node import Node

from sensor_msgs.msg import Image
from cv_bridge import CvBridge

from geometry_msgs.msg import Point

from rclpy.qos import (
    QoSProfile,
    ReliabilityPolicy,
    HistoryPolicy
)



# ============================================================
# Configuration
# ============================================================

IMAGE_TOPIC = "/world/default/model/interceptor_x500_1/link/camera_link/sensor/camera/image"

CONFIG_PATH = "/home/gp/Projects/interceptor-sim/ros2_px4_ws/src/interceptor_vision/interceptor_vision/YOLO/cfg/yolov4-tiny-drone.cfg"

WEIGHTS_PATH = "/home/gp/Documents/Datasets/UAV-Eagle/UAV-Eagle/backup/yolov4-tiny-drone_best.weights"

NAMES_PATH = "/home/gp/Documents/Datasets/UAV-Eagle/UAV-Eagle/obj.names"


# YOLO parameters
INPUT_WIDTH = 416
INPUT_HEIGHT = 416

CONFIDENCE_THRESHOLD = 0.5
NMS_THRESHOLD = 0.4


# ROS QoS
qos = QoSProfile(
    history=HistoryPolicy.KEEP_LAST,
    depth=1,
    reliability=ReliabilityPolicy.BEST_EFFORT,
)


# ============================================================
# Vision Node
# ============================================================

class VisionNode(Node):

    def __init__(self):

        super().__init__("vision_node")

        self.bridge = CvBridge()
        self.first_image = True

        # ----------------------------------------------------
        # Load YOLOv4-tiny
        # ----------------------------------------------------

        self.get_logger().info("Loading YOLOv4-tiny...")

        self.net = cv2.dnn.readNetFromDarknet(
            CONFIG_PATH,
            WEIGHTS_PATH
        )

        # Explicitly use CPU
        self.net.setPreferableBackend(
            cv2.dnn.DNN_BACKEND_OPENCV
        )

        self.net.setPreferableTarget(
            cv2.dnn.DNN_TARGET_CPU
        )

        # ----------------------------------------------------
        # Get YOLO output layers
        # ----------------------------------------------------

        layer_names = self.net.getLayerNames()

        output_layers = self.net.getUnconnectedOutLayers()

        self.output_layer_names = [
            layer_names[i - 1]
            for i in output_layers.flatten()
        ]

        # ----------------------------------------------------
        # Load class names
        # ----------------------------------------------------

        with open(NAMES_PATH, "r") as f:
            self.class_names = [
                line.strip()
                for line in f.readlines()
            ]

        self.get_logger().info(
            f"Loaded {len(self.class_names)} classes."
        )

        # ----------------------------------------------------
        # Create publisher to publish centroid values
        # ----------------------------------------------------       

        self.centroid_pub = self.create_publisher(
            Point,
            '/interceptor/target_centroid',
            10
        )

        # ----------------------------------------------------
        # Subscribe to camera
        # ----------------------------------------------------

        self.subscription = self.create_subscription(
            Image,
            IMAGE_TOPIC,
            self.image_callback,
            qos
        )

        self.get_logger().info(
            "YOLOv4-tiny loaded successfully."
        )

        self.get_logger().info(
            "Vision node started."
        )

    # ========================================================
    # Image Callback
    # ========================================================

    def image_callback(self, msg):

        # ----------------------------------------------------
        # Convert ROS image -> OpenCV image
        # ----------------------------------------------------

        frame = self.bridge.imgmsg_to_cv2(
            msg,
            desired_encoding="bgr8"
        )

        height, width = frame.shape[:2]

        if self.first_image:

            self.get_logger().info(
                f"Receiving images ({width}x{height})"
            )

            self.first_image = False

        # ----------------------------------------------------
        # Create YOLO input blob
        # ----------------------------------------------------

        blob = cv2.dnn.blobFromImage(
            frame,
            scalefactor=1 / 255.0,
            size=(INPUT_WIDTH, INPUT_HEIGHT),
            swapRB=True,
            crop=False
        )

        self.net.setInput(blob)

        # ----------------------------------------------------
        # Run YOLO inference
        # ----------------------------------------------------

        outputs = self.net.forward(
            self.output_layer_names
        )

        # ----------------------------------------------------
        # Process detections
        # ----------------------------------------------------

        boxes = []
        confidences = []
        class_ids = []

        for output in outputs:

            for detection in output:

                # Class probabilities
                scores = detection[5:]

                class_id = np.argmax(scores)

                class_confidence = scores[class_id]

                # Objectness × class confidence
                confidence = (
                    detection[4] * class_confidence
                )

                if confidence < CONFIDENCE_THRESHOLD:
                    continue

                # ------------------------------------------------
                # Convert normalized coordinates to image coords
                # ------------------------------------------------

                center_x = int(
                    detection[0] * width
                )

                center_y = int(
                    detection[1] * height
                )

                box_width = int(
                    detection[2] * width
                )

                box_height = int(
                    detection[3] * height
                )

                x = int(
                    center_x - box_width / 2
                )

                y = int(
                    center_y - box_height / 2
                )

                boxes.append([
                    x,
                    y,
                    box_width,
                    box_height
                ])

                confidences.append(
                    float(confidence)
                )

                class_ids.append(
                    class_id
                )

        # ----------------------------------------------------
        # Non-Maximum Suppression
        # ----------------------------------------------------

        indices = cv2.dnn.NMSBoxes(
            boxes,
            confidences,
            CONFIDENCE_THRESHOLD,
            NMS_THRESHOLD
        )

        # ----------------------------------------------------
        # Draw detections
        # ----------------------------------------------------

        if len(indices) > 0:

            for i in indices.flatten():

                x, y, w, h = boxes[i]

                class_id = class_ids[i]
                confidence = confidences[i]

                label = self.class_names[class_id]

                # Make sure box stays inside image
                x = max(0, x)
                y = max(0, y)

                w = min(w, width - x)
                h = min(h, height - y)

                # Draw bounding box
                cv2.rectangle(
                    frame,
                    (x, y),
                    (x + w, y + h),
                    (0, 255, 0),
                    2
                )

                # Label
                text = (
                    f"{label}: {confidence:.2f}"
                )

                cv2.putText(
                    frame,
                    text,
                    (x, max(y - 10, 0)),
                    cv2.FONT_HERSHEY_SIMPLEX,
                    0.5,
                    (0, 255, 0),
                    2
                )

                # Center of detected object
                center_x = x + w / 2.0
                center_y = y + h / 2.0

                # Publish the centroid coords (float) to a topic named target_centroid
                centroid_msg = Point()
                centroid_msg.x = center_x
                centroid_msg.y = center_y
                centroid_msg.z = 0.0

                self.centroid_pub.publish(centroid_msg)

                cv2.circle(
                    frame,
                    (int(center_x), int(center_y)),
                    4,
                    (0, 0, 255),
                    -1
                )

        # ----------------------------------------------------
        # Display
        # ----------------------------------------------------

        cv2.imshow(
            "Interceptor Camera - YOLOv4-tiny",
            frame
        )

        cv2.waitKey(1)


# ============================================================
# Main
# ============================================================

def main(args=None):

    rclpy.init(args=args)

    node = VisionNode()

    try:
        rclpy.spin(node)

    except KeyboardInterrupt:
        pass

    finally:

        cv2.destroyAllWindows()

        node.destroy_node()

        rclpy.shutdown()


if __name__ == "__main__":
    main()