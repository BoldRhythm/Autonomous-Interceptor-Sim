// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/TransponderReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/transponder_report.h"


#ifndef PX4_MSGS__MSG__DETAIL__TRANSPONDER_REPORT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__TRANSPONDER_REPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ADSB_EMITTER_TYPE_NO_INFO'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_NO_INFO = 0
};

/// Constant 'ADSB_EMITTER_TYPE_LIGHT'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_LIGHT = 1
};

/// Constant 'ADSB_EMITTER_TYPE_SMALL'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_SMALL = 2
};

/// Constant 'ADSB_EMITTER_TYPE_LARGE'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_LARGE = 3
};

/// Constant 'ADSB_EMITTER_TYPE_HIGH_VORTEX_LARGE'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_HIGH_VORTEX_LARGE = 4
};

/// Constant 'ADSB_EMITTER_TYPE_HEAVY'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_HEAVY = 5
};

/// Constant 'ADSB_EMITTER_TYPE_HIGHLY_MANUV'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_HIGHLY_MANUV = 6
};

/// Constant 'ADSB_EMITTER_TYPE_ROTOCRAFT'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_ROTOCRAFT = 7
};

/// Constant 'ADSB_EMITTER_TYPE_UNASSIGNED'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_UNASSIGNED = 8
};

/// Constant 'ADSB_EMITTER_TYPE_GLIDER'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_GLIDER = 9
};

/// Constant 'ADSB_EMITTER_TYPE_LIGHTER_AIR'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_LIGHTER_AIR = 10
};

/// Constant 'ADSB_EMITTER_TYPE_PARACHUTE'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_PARACHUTE = 11
};

/// Constant 'ADSB_EMITTER_TYPE_ULTRA_LIGHT'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_ULTRA_LIGHT = 12
};

/// Constant 'ADSB_EMITTER_TYPE_UNASSIGNED2'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_UNASSIGNED2 = 13
};

/// Constant 'ADSB_EMITTER_TYPE_UAV'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_UAV = 14
};

/// Constant 'ADSB_EMITTER_TYPE_SPACE'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_SPACE = 15
};

/// Constant 'ADSB_EMITTER_TYPE_UNASSGINED3'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_UNASSGINED3 = 16
};

/// Constant 'ADSB_EMITTER_TYPE_EMERGENCY_SURFACE'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_EMERGENCY_SURFACE = 17
};

/// Constant 'ADSB_EMITTER_TYPE_SERVICE_SURFACE'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_SERVICE_SURFACE = 18
};

/// Constant 'ADSB_EMITTER_TYPE_POINT_OBSTACLE'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_POINT_OBSTACLE = 19
};

/// Constant 'ADSB_EMITTER_TYPE_ENUM_END'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_ENUM_END = 20
};

/// Constant 'PX4_ADSB_FLAGS_VALID_COORDS'.
enum
{
  px4_msgs__msg__TransponderReport__PX4_ADSB_FLAGS_VALID_COORDS = 1
};

/// Constant 'PX4_ADSB_FLAGS_VALID_ALTITUDE'.
enum
{
  px4_msgs__msg__TransponderReport__PX4_ADSB_FLAGS_VALID_ALTITUDE = 2
};

/// Constant 'PX4_ADSB_FLAGS_VALID_HEADING'.
enum
{
  px4_msgs__msg__TransponderReport__PX4_ADSB_FLAGS_VALID_HEADING = 4
};

/// Constant 'PX4_ADSB_FLAGS_VALID_VELOCITY'.
enum
{
  px4_msgs__msg__TransponderReport__PX4_ADSB_FLAGS_VALID_VELOCITY = 8
};

/// Constant 'PX4_ADSB_FLAGS_VALID_CALLSIGN'.
enum
{
  px4_msgs__msg__TransponderReport__PX4_ADSB_FLAGS_VALID_CALLSIGN = 16
};

/// Constant 'PX4_ADSB_FLAGS_VALID_SQUAWK'.
enum
{
  px4_msgs__msg__TransponderReport__PX4_ADSB_FLAGS_VALID_SQUAWK = 32
};

/// Constant 'PX4_ADSB_FLAGS_SIMULATED'.
enum
{
  px4_msgs__msg__TransponderReport__PX4_ADSB_FLAGS_SIMULATED = 64
};

/// Constant 'PX4_ADSB_FLAGS_VERTICAL_VELOCITY_VALID'.
enum
{
  px4_msgs__msg__TransponderReport__PX4_ADSB_FLAGS_VERTICAL_VELOCITY_VALID = 128
};

/// Constant 'PX4_ADSB_FLAGS_BARO_VALID'.
enum
{
  px4_msgs__msg__TransponderReport__PX4_ADSB_FLAGS_BARO_VALID = 256
};

/// Constant 'PX4_ADSB_FLAGS_SOURCE_UAT'.
enum
{
  px4_msgs__msg__TransponderReport__PX4_ADSB_FLAGS_SOURCE_UAT = 32768
};

/// Constant 'ORB_QUEUE_LENGTH'.
enum
{
  px4_msgs__msg__TransponderReport__ORB_QUEUE_LENGTH = 16
};

/// Struct defined in msg/TransponderReport in the package px4_msgs.
/**
  * Transponder report
  *
  * ADSB report closely matching MAVLink's ADSB_VEHICLE (246) message with few internal extra fields at the end.
  * Populated by ADSB receivers, processed for user messaging and navigator, logging and republishing ADSB information.
 */
typedef struct px4_msgs__msg__TransponderReport
{
  /// Time since system start
  uint64_t timestamp;
  /// ICAO address
  uint32_t icao_address;
  /// Latitude, validity flag: PX4_ADSB_FLAGS_VALID_COORDS
  double lat;
  /// Longitude, validity flag: PX4_ADSB_FLAGS_VALID_COORDS
  double lon;
  /// Type from ADSB_ALTITUDE_TYPE enum
  uint8_t altitude_type;
  /// Altitude (ASL), validity flag: PX4_ADSB_FLAGS_VALID_ALTITUDE
  float altitude;
  /// Course over ground, 0 to 2pi, 0 is north, validity flag: PX4_ADSB_FLAGS_VALID_HEADING
  float heading;
  /// Horizontal velocity, validity flag: PX4_ADSB_FLAGS_VALID_VELOCITY
  float hor_velocity;
  /// Vertical velocity, positive is up, validity flag: PX4_ADSB_FLAGS_VALID_VELOCITY
  float ver_velocity;
  /// The callsign, 8+null, validity flag: PX4_ADSB_FLAGS_VALID_CALLSIGN
  uint8_t callsign[9];
  /// Type matching MAVLink's ADSB_EMITTER_TYPE enum
  uint8_t emitter_type;
  /// Time since last communication
  uint8_t tslc;
  /// Flags matching MAVLink's ADSB_FLAGS bitmask
  uint16_t flags;
  /// Squawk code, validity flag: PX4_ADSB_FLAGS_VALID_SQUAWK
  uint16_t squawk;
  /// Unique UAS ID, not part of ADSB_VEHICLE MAVLink message
  uint8_t uas_id[18];
} px4_msgs__msg__TransponderReport;

// Struct for a sequence of px4_msgs__msg__TransponderReport.
typedef struct px4_msgs__msg__TransponderReport__Sequence
{
  px4_msgs__msg__TransponderReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__TransponderReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__TRANSPONDER_REPORT__STRUCT_H_
