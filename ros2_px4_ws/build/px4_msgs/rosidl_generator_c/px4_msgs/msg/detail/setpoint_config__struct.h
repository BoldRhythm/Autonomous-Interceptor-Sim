// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/SetpointConfig.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/setpoint_config.h"


#ifndef PX4_MSGS__MSG__DETAIL__SETPOINT_CONFIG__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__SETPOINT_CONFIG__STRUCT_H_

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
  px4_msgs__msg__SetpointConfig__MESSAGE_VERSION = 0ul
};

/// Constant 'TYPE_INVALID'.
enum
{
  px4_msgs__msg__SetpointConfig__TYPE_INVALID = 0
};

/// Constant 'TYPE_DIRECT_ACTUATORS'.
/**
  * ActuatorMotors and ActuatorServos
 */
enum
{
  px4_msgs__msg__SetpointConfig__TYPE_DIRECT_ACTUATORS = 1
};

/// Constant 'TYPE_MULTICOPTER_GOTO'.
/**
  * GotoSetpoint
 */
enum
{
  px4_msgs__msg__SetpointConfig__TYPE_MULTICOPTER_GOTO = 2
};

/// Constant 'TYPE_FIXEDWING_LATERAL_LONGITUDINAL'.
/**
  * FixedWingLateralSetpoint and FixedWingLongitudinalSetpoint
 */
enum
{
  px4_msgs__msg__SetpointConfig__TYPE_FIXEDWING_LATERAL_LONGITUDINAL = 3
};

/// Constant 'TYPE_TRAJECTORY'.
/**
  * TrajectorySetpoint
 */
enum
{
  px4_msgs__msg__SetpointConfig__TYPE_TRAJECTORY = 4
};

/// Constant 'TYPE_RATES'.
/**
  * VehicleRatesSetpoint
 */
enum
{
  px4_msgs__msg__SetpointConfig__TYPE_RATES = 5
};

/// Constant 'TYPE_ATTITUDE'.
/**
  * VehicleAttitudeSetpoint
 */
enum
{
  px4_msgs__msg__SetpointConfig__TYPE_ATTITUDE = 6
};

/// Constant 'TYPE_ROVER_POSITION'.
/**
  * RoverPositionSetpoint
 */
enum
{
  px4_msgs__msg__SetpointConfig__TYPE_ROVER_POSITION = 7
};

/// Constant 'TYPE_ROVER_SPEED_ATTITUDE'.
/**
  * RoverSpeedSetpoint and RoverAttitudeSetpoint
 */
enum
{
  px4_msgs__msg__SetpointConfig__TYPE_ROVER_SPEED_ATTITUDE = 8
};

/// Constant 'TYPE_ROVER_SPEED_RATE'.
/**
  * RoverSpeedSetpoint and RoverRateSetpoint
 */
enum
{
  px4_msgs__msg__SetpointConfig__TYPE_ROVER_SPEED_RATE = 9
};

/// Constant 'TYPE_ROVER_SPEED_STEERING'.
/**
  * RoverSpeedSetpoint and RoverSteeringSetpoint
 */
enum
{
  px4_msgs__msg__SetpointConfig__TYPE_ROVER_SPEED_STEERING = 10
};

/// Constant 'TYPE_ROVER_THROTTLE_ATTITUDE'.
/**
  * RoverThrottleSetpoint and RoverAttitudeSetpoint
 */
enum
{
  px4_msgs__msg__SetpointConfig__TYPE_ROVER_THROTTLE_ATTITUDE = 11
};

/// Constant 'TYPE_ROVER_THROTTLE_RATE'.
/**
  * RoverThrottleSetpoint and RoverRateSetpoint
 */
enum
{
  px4_msgs__msg__SetpointConfig__TYPE_ROVER_THROTTLE_RATE = 12
};

/// Constant 'TYPE_ROVER_THROTTLE_STEERING'.
/**
  * RoverThrottleSetpoint and RoverSteeringSetpoint
 */
enum
{
  px4_msgs__msg__SetpointConfig__TYPE_ROVER_THROTTLE_STEERING = 13
};

/// Constant 'TYPE_TRAJECTORY_6DOF'.
/**
  * TrajectorySetpoint6dof
 */
enum
{
  px4_msgs__msg__SetpointConfig__TYPE_TRAJECTORY_6DOF = 14
};

/// Constant 'TYPE_THRUST_AND_TORQUE'.
/**
  * VehicleThrustSetpoint and VehicleTorqueSetpoint
 */
enum
{
  px4_msgs__msg__SetpointConfig__TYPE_THRUST_AND_TORQUE = 15
};

/// Constant 'TYPE_POSITION_TRIPLET'.
/**
  * PositionSetpointTriplet
 */
enum
{
  px4_msgs__msg__SetpointConfig__TYPE_POSITION_TRIPLET = 16
};

/// Struct defined in msg/SetpointConfig in the package px4_msgs.
/**
  * Setpoint configuration message
  *
  * Published by external modes and PX4 will respond with SetpointConfigReply.
 */
typedef struct px4_msgs__msg__SetpointConfig
{
  /// Time since system start
  uint64_t timestamp;
  /// setpoint type (corresponding to one or more setpoint messages)
  uint16_t type;
  /// nav_state of the mode
  uint8_t source_id;
  /// if true: apply as current setpoint configuration (mode should be active). If false: setpoint configuration is not changed (can be used to check if a setpoint can be used with the current vehicle configuration).
  bool should_apply;
  /// Configure setpoint timeout. If no setpoint received for this time, PX4 triggers a failsafe. 0 disables the timeout (unresponsive modes still trigger a timeout through arming checks).
  uint16_t timeout_ms;
} px4_msgs__msg__SetpointConfig;

// Struct for a sequence of px4_msgs__msg__SetpointConfig.
typedef struct px4_msgs__msg__SetpointConfig__Sequence
{
  px4_msgs__msg__SetpointConfig * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__SetpointConfig__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__SETPOINT_CONFIG__STRUCT_H_
