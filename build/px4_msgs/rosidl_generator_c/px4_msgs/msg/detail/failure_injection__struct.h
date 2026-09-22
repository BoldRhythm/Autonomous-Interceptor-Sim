// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/FailureInjection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/failure_injection.h"


#ifndef PX4_MSGS__MSG__DETAIL__FAILURE_INJECTION__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__FAILURE_INJECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'MAX_FAILURES'.
/**
  * maximum number of simultaneous failures
 */
enum
{
  px4_msgs__msg__FailureInjection__MAX_FAILURES = 4
};

/// Constant 'FAILURE_UNIT_SENSOR_GYRO'.
/**
  * Failure unit (affected component). Mirrors MAVLink FAILURE_UNIT and the
  * FAILURE_UNIT_* values in vehicle_command.
 */
enum
{
  px4_msgs__msg__FailureInjection__FAILURE_UNIT_SENSOR_GYRO = 0
};

/// Constant 'FAILURE_UNIT_SENSOR_ACCEL'.
enum
{
  px4_msgs__msg__FailureInjection__FAILURE_UNIT_SENSOR_ACCEL = 1
};

/// Constant 'FAILURE_UNIT_SENSOR_MAG'.
enum
{
  px4_msgs__msg__FailureInjection__FAILURE_UNIT_SENSOR_MAG = 2
};

/// Constant 'FAILURE_UNIT_SENSOR_BARO'.
enum
{
  px4_msgs__msg__FailureInjection__FAILURE_UNIT_SENSOR_BARO = 3
};

/// Constant 'FAILURE_UNIT_SENSOR_GPS'.
enum
{
  px4_msgs__msg__FailureInjection__FAILURE_UNIT_SENSOR_GPS = 4
};

/// Constant 'FAILURE_UNIT_SENSOR_OPTICAL_FLOW'.
enum
{
  px4_msgs__msg__FailureInjection__FAILURE_UNIT_SENSOR_OPTICAL_FLOW = 5
};

/// Constant 'FAILURE_UNIT_SENSOR_VIO'.
enum
{
  px4_msgs__msg__FailureInjection__FAILURE_UNIT_SENSOR_VIO = 6
};

/// Constant 'FAILURE_UNIT_SENSOR_DISTANCE_SENSOR'.
enum
{
  px4_msgs__msg__FailureInjection__FAILURE_UNIT_SENSOR_DISTANCE_SENSOR = 7
};

/// Constant 'FAILURE_UNIT_SENSOR_AIRSPEED'.
enum
{
  px4_msgs__msg__FailureInjection__FAILURE_UNIT_SENSOR_AIRSPEED = 8
};

/// Constant 'FAILURE_UNIT_SYSTEM_BATTERY'.
enum
{
  px4_msgs__msg__FailureInjection__FAILURE_UNIT_SYSTEM_BATTERY = 100
};

/// Constant 'FAILURE_UNIT_SYSTEM_MOTOR'.
enum
{
  px4_msgs__msg__FailureInjection__FAILURE_UNIT_SYSTEM_MOTOR = 101
};

/// Constant 'FAILURE_UNIT_SYSTEM_SERVO'.
enum
{
  px4_msgs__msg__FailureInjection__FAILURE_UNIT_SYSTEM_SERVO = 102
};

/// Constant 'FAILURE_UNIT_SYSTEM_AVOIDANCE'.
enum
{
  px4_msgs__msg__FailureInjection__FAILURE_UNIT_SYSTEM_AVOIDANCE = 103
};

/// Constant 'FAILURE_UNIT_SYSTEM_RC_SIGNAL'.
enum
{
  px4_msgs__msg__FailureInjection__FAILURE_UNIT_SYSTEM_RC_SIGNAL = 104
};

/// Constant 'FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL'.
enum
{
  px4_msgs__msg__FailureInjection__FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL = 105
};

/// Constant 'FAILURE_UNIT_SYSTEM_ESC'.
enum
{
  px4_msgs__msg__FailureInjection__FAILURE_UNIT_SYSTEM_ESC = 106
};

/// Constant 'FAILURE_TYPE_OK'.
/**
  * Failure mode.
  * Mirrors MAVLink FAILURE_TYPE and the FAILURE_TYPE_* values in vehicle_command.
 */
enum
{
  px4_msgs__msg__FailureInjection__FAILURE_TYPE_OK = 0
};

/// Constant 'FAILURE_TYPE_OFF'.
enum
{
  px4_msgs__msg__FailureInjection__FAILURE_TYPE_OFF = 1
};

/// Constant 'FAILURE_TYPE_STUCK'.
enum
{
  px4_msgs__msg__FailureInjection__FAILURE_TYPE_STUCK = 2
};

/// Constant 'FAILURE_TYPE_GARBAGE'.
enum
{
  px4_msgs__msg__FailureInjection__FAILURE_TYPE_GARBAGE = 3
};

/// Constant 'FAILURE_TYPE_WRONG'.
enum
{
  px4_msgs__msg__FailureInjection__FAILURE_TYPE_WRONG = 4
};

/// Constant 'FAILURE_TYPE_SLOW'.
enum
{
  px4_msgs__msg__FailureInjection__FAILURE_TYPE_SLOW = 5
};

/// Constant 'FAILURE_TYPE_DELAYED'.
enum
{
  px4_msgs__msg__FailureInjection__FAILURE_TYPE_DELAYED = 6
};

/// Constant 'FAILURE_TYPE_INTERMITTENT'.
enum
{
  px4_msgs__msg__FailureInjection__FAILURE_TYPE_INTERMITTENT = 7
};

/// Struct defined in msg/FailureInjection in the package px4_msgs.
/**
  * Failure injection configuration.
  *
  *  Currently active failure-injection configuration, published by the failure
  *  injection manager (the sole subscriber to vehicle_command INJECT_FAILURE).
  *  Republished only when the configuration changes, so command spam on
  *  vehicle_command cannot propagate to the consumers applying the failures.
 */
typedef struct px4_msgs__msg__FailureInjection
{
  /// Time since system start
  uint64_t timestamp;
  /// number of valid entries in the arrays below
  uint8_t count;
  /// Affected component per entry
  uint8_t unit[4];
  /// Bit i targets instance (i+1); 0xFFFF = all instances
  uint16_t instance_mask[4];
  /// failure mode per entry
  uint8_t failure_type[4];
} px4_msgs__msg__FailureInjection;

// Struct for a sequence of px4_msgs__msg__FailureInjection.
typedef struct px4_msgs__msg__FailureInjection__Sequence
{
  px4_msgs__msg__FailureInjection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__FailureInjection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__FAILURE_INJECTION__STRUCT_H_
