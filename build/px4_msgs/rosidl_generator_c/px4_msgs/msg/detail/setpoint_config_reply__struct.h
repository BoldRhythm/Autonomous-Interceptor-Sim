// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/SetpointConfigReply.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/setpoint_config_reply.h"


#ifndef PX4_MSGS__MSG__DETAIL__SETPOINT_CONFIG_REPLY__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__SETPOINT_CONFIG_REPLY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'MESSAGE_VERSION'.
enum
{
  px4_msgs__msg__SetpointConfigReply__MESSAGE_VERSION = 0ul
};

/// Constant 'RESULT_SUCCESS'.
enum
{
  px4_msgs__msg__SetpointConfigReply__RESULT_SUCCESS = 0
};

/// Constant 'RESULT_FAILURE_OTHER'.
enum
{
  px4_msgs__msg__SetpointConfigReply__RESULT_FAILURE_OTHER = 1
};

/// Constant 'RESULT_UNSUPPORTED'.
/**
  * Setpoint type is unsupported for the current vehicle
 */
enum
{
  px4_msgs__msg__SetpointConfigReply__RESULT_UNSUPPORTED = 2
};

/// Constant 'RESULT_UNKNOWN_SETPOINT_TYPE'.
/**
  * The setpoint type is not known
 */
enum
{
  px4_msgs__msg__SetpointConfigReply__RESULT_UNKNOWN_SETPOINT_TYPE = 3
};

/// Struct defined in msg/SetpointConfigReply in the package px4_msgs.
/**
  * Reply to SetpointConfig
 */
typedef struct px4_msgs__msg__SetpointConfigReply
{
  /// Time since system start
  uint64_t timestamp;
  /// See SetpointConfig::TYPE_*
  uint16_t type;
  /// nav_state of the mode that sent the SetpointConfig
  uint8_t source_id;
  uint8_t result;
  /// Mode requirements for using the given setpoint type. A mode will use these and apply them to the arming check reply (PX4 does not do that itself).
  /// Certain setpoint types can be used in a reduced way, for example a TrajectorySetpoint without position control. In that case PX4 still sets all requirement flags, and the mode will then ignore mode_req_local_position.
  bool mode_req_angular_velocity;
  bool mode_req_attitude;
  bool mode_req_local_alt;
  bool mode_req_local_position;
} px4_msgs__msg__SetpointConfigReply;

// Struct for a sequence of px4_msgs__msg__SetpointConfigReply.
typedef struct px4_msgs__msg__SetpointConfigReply__Sequence
{
  px4_msgs__msg__SetpointConfigReply * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__SetpointConfigReply__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__SETPOINT_CONFIG_REPLY__STRUCT_H_
