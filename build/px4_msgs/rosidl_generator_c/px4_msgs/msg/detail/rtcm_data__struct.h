// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/RtcmData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/rtcm_data.h"


#ifndef PX4_MSGS__MSG__DETAIL__RTCM_DATA__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__RTCM_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ORB_QUEUE_LENGTH'.
enum
{
  px4_msgs__msg__RtcmData__ORB_QUEUE_LENGTH = 16
};

/// Constant 'MAX_INSTANCES'.
/**
  * Sized for the fixed-base corrections case (up to four independent sources). The moving-baseline
  * topic only uses instance 0 (single publisher per vehicle).
 */
enum
{
  px4_msgs__msg__RtcmData__MAX_INSTANCES = 4
};

/// Struct defined in msg/RtcmData in the package px4_msgs.
/**
  * RTCM3 data exchanged with GNSS receivers.
  *
  * Published under two topic names that share this definition (see TOPICS below):
  *
  * rtcm_corrections - external fixed-base corrections fed into the vehicle (MAVLink
  * GPS_RTCM_DATA, UAVCAN RTCMStream, GPS drivers in dump mode). Multiple
  * sources are allowed, one uORB instance each; consumers select an instance
  * via their stale-link logic.
  *
  * rtcm_moving_baseline - moving-base GPS output (RTCM 4072 or equivalent) intended for a rover.
  * Single publisher per vehicle (on-board moving base, or a CANnode
  * forwarding MovingBaselineData); consumers only read instance 0.
 */
typedef struct px4_msgs__msg__RtcmData
{
  /// Time since system start
  uint64_t timestamp;
  /// Unique device ID of the publisher that produced this RTCM
  uint32_t device_id;
  /// Length of data
  uint16_t len;
  /// LSB: 1=fragmented
  uint8_t flags;
  /// Correction payload (fixed-base RTCM3 and/or SPARTN frames, or moving-baseline RTCM3)
  uint8_t data[300];
} px4_msgs__msg__RtcmData;

// Struct for a sequence of px4_msgs__msg__RtcmData.
typedef struct px4_msgs__msg__RtcmData__Sequence
{
  px4_msgs__msg__RtcmData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__RtcmData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__RTCM_DATA__STRUCT_H_
