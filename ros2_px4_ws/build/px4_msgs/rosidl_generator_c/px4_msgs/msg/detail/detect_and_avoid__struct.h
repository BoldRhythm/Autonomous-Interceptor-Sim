// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/DetectAndAvoid.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/detect_and_avoid.h"


#ifndef PX4_MSGS__MSG__DETAIL__DETECT_AND_AVOID__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__DETECT_AND_AVOID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'DAA_CONFLICT_LVL_NONE'.
enum
{
  px4_msgs__msg__DetectAndAvoid__DAA_CONFLICT_LVL_NONE = 0
};

/// Constant 'DAA_CONFLICT_LVL_LOW'.
enum
{
  px4_msgs__msg__DetectAndAvoid__DAA_CONFLICT_LVL_LOW = 1
};

/// Constant 'DAA_CONFLICT_LVL_MEDIUM'.
enum
{
  px4_msgs__msg__DetectAndAvoid__DAA_CONFLICT_LVL_MEDIUM = 2
};

/// Constant 'DAA_CONFLICT_LVL_HIGH'.
enum
{
  px4_msgs__msg__DetectAndAvoid__DAA_CONFLICT_LVL_HIGH = 3
};

/// Constant 'DAA_CONFLICT_LVL_CRITICAL'.
enum
{
  px4_msgs__msg__DetectAndAvoid__DAA_CONFLICT_LVL_CRITICAL = 4
};

/// Constant 'UNIQUE_ID_ENCODING_ICAO'.
/**
  * `unique_id` contains an ICAO address
 */
enum
{
  px4_msgs__msg__DetectAndAvoid__UNIQUE_ID_ENCODING_ICAO = 0
};

/// Constant 'UNIQUE_ID_ENCODING_ADSB_CALLSIGN'.
/**
  * `unique_id` contains an ADS-B callsign packed into a `uint64`
 */
enum
{
  px4_msgs__msg__DetectAndAvoid__UNIQUE_ID_ENCODING_ADSB_CALLSIGN = 1
};

/// Constant 'UNIQUE_ID_ENCODING_UAS_ID'.
/**
  * `unique_id` contains the reduced tail bytes of a UAS ID
 */
enum
{
  px4_msgs__msg__DetectAndAvoid__UNIQUE_ID_ENCODING_UAS_ID = 2
};

/// Constant 'ORB_QUEUE_LENGTH'.
enum
{
  px4_msgs__msg__DetectAndAvoid__ORB_QUEUE_LENGTH = 16
};

/// Struct defined in msg/DetectAndAvoid in the package px4_msgs.
/**
  * Detect-and-avoid conflict assessment for one traffic aircraft.
  *
  * Detailed per-traffic output from navigator's `DetectAndAvoid` component.
  * A sample is published when an evaluated report indicates a conflict or updates
  * an aircraft already tracked as a conflict. New reports assessed at NONE are omitted.
  *
  * Unlike `detect_and_avoid_most_urgent`, this topic does not summarize the single
  * active conflict driving DAA actions or prearm checks. It reports the conflict level
  * and geometry for the specific traffic aircraft that was just evaluated.
  *
  * Published by: `navigator` (`DetectAndAvoid`)
  * Used by: logging and tests
 */
typedef struct px4_msgs__msg__DetectAndAvoid
{
  /// Time since system start
  uint64_t timestamp;
  /// Encoded traffic identifier selected in priority order: ICAO address, ADS-B callsign, then reduced UAS ID tail bytes
  uint64_t unique_id;
  /// Namespace used to decode `unique_id`
  uint8_t unique_id_encoding;
  /// Conflict level calculated for this traffic aircraft
  uint8_t conflict_level;
  /// Current 3D point-to-point range between ownship and the traffic aircraft
  float aircraft_dist;
  /// [m] [@frame NED] Horizontal separation metric. In Crosstrack mode this is the signed crosstrack distance when available, otherwise direct horizontal range
  float aircraft_dist_hor;
  /// [m] [@frame NED] Vertical separation between ownship (the current vehicle) and the traffic aircraft
  float aircraft_dist_vert;
  /// Conservative collision-time estimate from current 3D separation and the sum of ownship and traffic speed magnitudes
  float expected_min_dist_time;
} px4_msgs__msg__DetectAndAvoid;

// Struct for a sequence of px4_msgs__msg__DetectAndAvoid.
typedef struct px4_msgs__msg__DetectAndAvoid__Sequence
{
  px4_msgs__msg__DetectAndAvoid * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__DetectAndAvoid__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__DETECT_AND_AVOID__STRUCT_H_
