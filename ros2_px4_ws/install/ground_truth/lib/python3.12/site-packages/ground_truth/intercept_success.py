#!/usr/bin/env python3
"""Standalone, simulation-only proximity popup for ROS 2.

Subscribes to /ground_truth/relative_position (geometry_msgs/msg/Point).
Shows one local GUI notification when the reported relative-position magnitude
first falls below a configurable threshold. It does not publish ROS messages or
send commands to PX4, vehicles, or payloads.

Run on a desktop session with ROS 2 sourced and Tkinter available.
"""

from __future__ import annotations

import math
import threading
import time
from typing import Optional

import rclpy
from geometry_msgs.msg import Point
from rclpy.executors import SingleThreadedExecutor
from rclpy.node import Node

try:
    import tkinter as tk
    from tkinter import messagebox
except ImportError as exc:  # pragma: no cover - depends on host installation
    tk = None
    messagebox = None
    TK_IMPORT_ERROR = exc
else:
    TK_IMPORT_ERROR = None


class InterceptSuccessPopup(Node):
    """Monitor fresh ground-truth samples and show a one-shot GUI notification."""

    def __init__(self) -> None:
        super().__init__("intercept_success_popup")

        self.declare_parameter(
            "relative_position_topic", "/ground_truth/relative_position"
        )
        self.declare_parameter("success_distance_m", 1.0)
        self.declare_parameter("state_timeout_s", 0.75)

        self.topic = str(self.get_parameter("relative_position_topic").value)
        self.threshold_m = float(self.get_parameter("success_distance_m").value)
        self.timeout_s = float(self.get_parameter("state_timeout_s").value)

        if not math.isfinite(self.threshold_m) or self.threshold_m <= 0.0:
            raise ValueError("Parameter success_distance_m must be finite and > 0")
        if not math.isfinite(self.timeout_s) or self.timeout_s <= 0.0:
            raise ValueError("Parameter state_timeout_s must be finite and > 0")

        self._lock = threading.Lock()
        self._distance_m: Optional[float] = None
        self._last_rx_monotonic: Optional[float] = None
        self._success_distance_m: Optional[float] = None
        self._success_latched = False
        self._popup_pending = threading.Event()

        self._subscription = self.create_subscription(
            Point, self.topic, self._relative_position_callback, 10
        )
        self.get_logger().info(
            "Simulation-only proximity monitor started: "
            f"topic={self.topic}, threshold={self.threshold_m:.2f} m, "
            f"freshness timeout={self.timeout_s:.2f} s."
        )
        self.get_logger().info(
            "This node only displays a local notification; it publishes no ROS events."
        )

    def _relative_position_callback(self, msg: Point) -> None:
        x, y, z = float(msg.x), float(msg.y), float(msg.z)
        if not all(math.isfinite(value) for value in (x, y, z)):
            self.get_logger().warning(
                "Ignoring ground-truth relative position containing NaN or infinity."
            )
            return

        distance = math.sqrt(x * x + y * y + z * z)
        now = time.monotonic()
        with self._lock:
            self._distance_m = distance
            self._last_rx_monotonic = now
            if distance < self.threshold_m and not self._success_latched:
                self._success_latched = True
                self._success_distance_m = distance
                self._popup_pending.set()

    def _build_gui(self) -> None:
        if tk is None or messagebox is None:
            detail = f" Details: {TK_IMPORT_ERROR}" if TK_IMPORT_ERROR else ""
            raise RuntimeError(
                "Tkinter is unavailable. On Ubuntu install it with "
                "'sudo apt install python3-tk' and run this script in a desktop session."
                + detail
            )

        root = tk.Tk()
        root.title("Gazebo Proximity Monitor")
        root.geometry("500x200")
        root.resizable(False, False)

        tk.Label(
            root,
            text="SIMULATION PROXIMITY MONITOR",
            font=("Sans", 14, "bold"),
        ).pack(pady=(18, 10))

        range_label = tk.Label(
            root, text="Waiting for ground-truth data…", font=("Sans", 12)
        )
        range_label.pack(pady=4)

        status_label = tk.Label(
            root,
            text=f"Threshold: {self.threshold_m:.2f} m",
            font=("Sans", 10),
        )
        status_label.pack(pady=4)

        popup_displayed = False

        def refresh() -> None:
            nonlocal popup_displayed
            with self._lock:
                distance = self._distance_m
                last_rx = self._last_rx_monotonic
                success_distance = self._success_distance_m
                success_latched = self._success_latched

            if distance is None or last_rx is None:
                range_label.config(text="Waiting for ground-truth data…")
                status_label.config(text="No sample received yet")
            elif time.monotonic() - last_rx > self.timeout_s:
                range_label.config(text=f"Last separation: {distance:.3f} m")
                status_label.config(text="STALE INPUT — last sample is not current")
            else:
                range_label.config(text=f"Current separation: {distance:.3f} m")
                status_label.config(
                    text=(
                        "PROXIMITY THRESHOLD REACHED! (latched to 1m)"
                        if success_latched
                        else "Ground-truth input fresh"
                    )
                )

            if self._popup_pending.is_set() and not popup_displayed:
                self._popup_pending.clear()
                popup_displayed = True
                value = success_distance if success_distance is not None else distance
                measured = "unknown" if value is None else f"{value:.3f} m"
                messagebox.showinfo(
                    "Simulation proximity threshold reached!",
                    f"Ground-truth relative-position magnitude fell below "
                    f"{self.threshold_m:.2f} m.\n\n"
                    f"Separation at first threshold crossing: {measured}.\n\n"
                    "Note : This records a simulated close approach only.",
                    parent=root,
                )

            root.after(100, refresh)

        def on_close() -> None:
            root.destroy()

        root.protocol("WM_DELETE_WINDOW", on_close)
        root.after(100, refresh)
        root.mainloop()

    def close(self) -> None:
        """Release the subscription and node resources."""
        self.destroy_node()


def main(args=None) -> int:
    """ROS 2 entry point."""
    rclpy.init(args=args)
    node: Optional[InterceptSuccessPopup] = None
    executor: Optional[SingleThreadedExecutor] = None
    ros_thread: Optional[threading.Thread] = None

    try:
        node = InterceptSuccessPopup()
        executor = SingleThreadedExecutor()
        executor.add_node(node)
        ros_thread = threading.Thread(
            target=executor.spin,
            name="intercept-popup-ros-spin",
            daemon=True,
        )
        ros_thread.start()
        node._build_gui()
        return 0
    except KeyboardInterrupt:
        return 130
    except Exception as exc:
        if node is not None:
            node.get_logger().error(f"Could not run proximity popup: {exc}")
        else:
            print(f"Could not start proximity popup: {exc}")
        return 1
    finally:
        if executor is not None:
            try:
                executor.shutdown(timeout_sec=1.0)
            except Exception:
                pass
        if node is not None:
            try:
                node.close()
            except Exception:
                pass
        if rclpy.ok():
            rclpy.shutdown()
        if ros_thread is not None and ros_thread.is_alive():
            ros_thread.join(timeout=1.0)


if __name__ == "__main__":
    raise SystemExit(main())
