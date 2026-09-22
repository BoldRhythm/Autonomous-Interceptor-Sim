// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/SetpointConfig.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/setpoint_config__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__SetpointConfig__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x90, 0x84, 0x3f, 0xa8, 0x38, 0x9a, 0xac, 0x33,
      0x43, 0x7c, 0x60, 0x0d, 0xfa, 0xe1, 0x84, 0x27,
      0x8d, 0x22, 0x09, 0x24, 0x6b, 0x11, 0x88, 0x33,
      0xf8, 0x30, 0x33, 0x88, 0x0e, 0x9a, 0x7f, 0xd6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__SetpointConfig__TYPE_NAME[] = "px4_msgs/msg/SetpointConfig";

// Define type names, field names, and default values
static char px4_msgs__msg__SetpointConfig__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__SetpointConfig__FIELD_NAME__type[] = "type";
static char px4_msgs__msg__SetpointConfig__FIELD_NAME__source_id[] = "source_id";
static char px4_msgs__msg__SetpointConfig__FIELD_NAME__should_apply[] = "should_apply";
static char px4_msgs__msg__SetpointConfig__FIELD_NAME__timeout_ms[] = "timeout_ms";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__SetpointConfig__FIELDS[] = {
  {
    {px4_msgs__msg__SetpointConfig__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__SetpointConfig__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__SetpointConfig__FIELD_NAME__source_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__SetpointConfig__FIELD_NAME__should_apply, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__SetpointConfig__FIELD_NAME__timeout_ms, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4_msgs__msg__SetpointConfig__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__SetpointConfig__TYPE_NAME, 27, 27},
      {px4_msgs__msg__SetpointConfig__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Setpoint configuration message\n"
  "#\n"
  "# Published by external modes and PX4 will respond with SetpointConfigReply.\n"
  "\n"
  "uint32 MESSAGE_VERSION = 0\n"
  "\n"
  "uint64 timestamp # [us] Time since system start\n"
  "\n"
  "uint16 TYPE_INVALID = 0\n"
  "uint16 TYPE_DIRECT_ACTUATORS = 1 # ActuatorMotors and ActuatorServos\n"
  "uint16 TYPE_MULTICOPTER_GOTO = 2 # GotoSetpoint\n"
  "uint16 TYPE_FIXEDWING_LATERAL_LONGITUDINAL = 3 # FixedWingLateralSetpoint and FixedWingLongitudinalSetpoint\n"
  "uint16 TYPE_TRAJECTORY = 4 # TrajectorySetpoint\n"
  "uint16 TYPE_RATES = 5 # VehicleRatesSetpoint\n"
  "uint16 TYPE_ATTITUDE = 6 # VehicleAttitudeSetpoint\n"
  "uint16 TYPE_ROVER_POSITION = 7 # RoverPositionSetpoint\n"
  "uint16 TYPE_ROVER_SPEED_ATTITUDE = 8 # RoverSpeedSetpoint and RoverAttitudeSetpoint\n"
  "uint16 TYPE_ROVER_SPEED_RATE = 9 # RoverSpeedSetpoint and RoverRateSetpoint\n"
  "uint16 TYPE_ROVER_SPEED_STEERING = 10 # RoverSpeedSetpoint and RoverSteeringSetpoint\n"
  "uint16 TYPE_ROVER_THROTTLE_ATTITUDE = 11 # RoverThrottleSetpoint and RoverAttitudeSetpoint\n"
  "uint16 TYPE_ROVER_THROTTLE_RATE = 12 # RoverThrottleSetpoint and RoverRateSetpoint\n"
  "uint16 TYPE_ROVER_THROTTLE_STEERING = 13 # RoverThrottleSetpoint and RoverSteeringSetpoint\n"
  "uint16 TYPE_TRAJECTORY_6DOF = 14 # TrajectorySetpoint6dof\n"
  "uint16 TYPE_THRUST_AND_TORQUE = 15 # VehicleThrustSetpoint and VehicleTorqueSetpoint\n"
  "uint16 TYPE_POSITION_TRIPLET = 16 # PositionSetpointTriplet\n"
  "\n"
  "uint16 type # [@enum TYPE] setpoint type (corresponding to one or more setpoint messages)\n"
  "\n"
  "uint8 source_id # nav_state of the mode\n"
  "\n"
  "bool should_apply # if true: apply as current setpoint configuration (mode should be active). If false: setpoint configuration is not changed (can be used to check if a setpoint can be used with the current vehicle configuration).\n"
  "\n"
  "uint16 timeout_ms # Configure setpoint timeout. If no setpoint received for this time, PX4 triggers a failsafe. 0 disables the timeout (unresponsive modes still trigger a timeout through arming checks).";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__SetpointConfig__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__SetpointConfig__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1919, 1919},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__SetpointConfig__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__SetpointConfig__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
