// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/DetectAndAvoidMostUrgent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/detect_and_avoid_most_urgent.h"


#ifndef PX4_MSGS__MSG__DETAIL__DETECT_AND_AVOID_MOST_URGENT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__DETECT_AND_AVOID_MOST_URGENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'UNIQUE_ID_ENCODING_ICAO'.
/**
  * `unique_id` contains an ICAO address
 */
enum
{
  px4_msgs__msg__DetectAndAvoidMostUrgent__UNIQUE_ID_ENCODING_ICAO = 0
};

/// Constant 'UNIQUE_ID_ENCODING_ADSB_CALLSIGN'.
/**
  * `unique_id` contains an ADS-B callsign packed into a `uint64`
 */
enum
{
  px4_msgs__msg__DetectAndAvoidMostUrgent__UNIQUE_ID_ENCODING_ADSB_CALLSIGN = 1
};

/// Constant 'UNIQUE_ID_ENCODING_UAS_ID'.
/**
  * `unique_id` contains the reduced tail bytes of a UAS ID
 */
enum
{
  px4_msgs__msg__DetectAndAvoidMostUrgent__UNIQUE_ID_ENCODING_UAS_ID = 2
};

/// Struct defined in msg/DetectAndAvoidMostUrgent in the package px4_msgs.
/**
  * Detect-and-avoid summary for the most urgent active conflict.
  *
  * Aggregated DAA status from navigator's `DetectAndAvoid` component.
  * It publishes the single active conflict that currently has the highest urgency
  * after the per-traffic conflict buffer has been updated.
  *
  * Unlike `detect_and_avoid`, this topic is not published for every processed
  * traffic report and does not include the detailed horizontal and vertical geometry.
  * It is the topic used for overall DAA status, automatic-action decisions, and
  * prearm checks.
  *
  * Published by: `navigator` (`DetectAndAvoid`)
  * Used by: `commander` DAA arming checks, logging, and tests
 */
typedef struct px4_msgs__msg__DetectAndAvoidMostUrgent
{
  /// Time since system start
  uint64_t timestamp;
  /// Encoded identifier of the current most urgent traffic aircraft, selected in priority order: ICAO address, ADS-B callsign, then reduced UAS ID tail bytes
  uint64_t unique_id;
  /// Namespace used to decode `unique_id`
  uint8_t unique_id_encoding;
  /// True if the configured DAA response for this most urgent conflict is stronger than Warn only
  bool has_action;
  /// Conflict level of the current most urgent active conflict
  uint8_t conflict_level;
  /// Approximate 3D range to the most urgent traffic aircraft (9999 when empty)
  float aircraft_dist;
} px4_msgs__msg__DetectAndAvoidMostUrgent;

// Struct for a sequence of px4_msgs__msg__DetectAndAvoidMostUrgent.
typedef struct px4_msgs__msg__DetectAndAvoidMostUrgent__Sequence
{
  px4_msgs__msg__DetectAndAvoidMostUrgent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__DetectAndAvoidMostUrgent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__DETECT_AND_AVOID_MOST_URGENT__STRUCT_H_
