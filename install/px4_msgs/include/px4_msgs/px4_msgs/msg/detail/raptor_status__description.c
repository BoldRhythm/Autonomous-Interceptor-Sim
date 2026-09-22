// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/RaptorStatus.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/raptor_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__RaptorStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6a, 0x9c, 0xcf, 0x39, 0xdc, 0x9d, 0x1d, 0xc4,
      0xa6, 0x6f, 0x51, 0xbc, 0xf6, 0xc5, 0x41, 0xfa,
      0x97, 0xcf, 0xef, 0xdf, 0xdf, 0x5a, 0xc3, 0x07,
      0xe7, 0x43, 0xf1, 0x8f, 0xd3, 0xab, 0x4f, 0x03,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__RaptorStatus__TYPE_NAME[] = "px4_msgs/msg/RaptorStatus";

// Define type names, field names, and default values
static char px4_msgs__msg__RaptorStatus__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__RaptorStatus__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4_msgs__msg__RaptorStatus__FIELD_NAME__subscription_update_angular_velocity[] = "subscription_update_angular_velocity";
static char px4_msgs__msg__RaptorStatus__FIELD_NAME__subscription_update_local_position[] = "subscription_update_local_position";
static char px4_msgs__msg__RaptorStatus__FIELD_NAME__subscription_update_attitude[] = "subscription_update_attitude";
static char px4_msgs__msg__RaptorStatus__FIELD_NAME__subscription_update_trajectory_setpoint[] = "subscription_update_trajectory_setpoint";
static char px4_msgs__msg__RaptorStatus__FIELD_NAME__subscription_update_vehicle_status[] = "subscription_update_vehicle_status";
static char px4_msgs__msg__RaptorStatus__FIELD_NAME__exit_reason[] = "exit_reason";
static char px4_msgs__msg__RaptorStatus__FIELD_NAME__timestamp_last_vehicle_angular_velocity[] = "timestamp_last_vehicle_angular_velocity";
static char px4_msgs__msg__RaptorStatus__FIELD_NAME__timestamp_last_vehicle_local_position[] = "timestamp_last_vehicle_local_position";
static char px4_msgs__msg__RaptorStatus__FIELD_NAME__timestamp_last_vehicle_attitude[] = "timestamp_last_vehicle_attitude";
static char px4_msgs__msg__RaptorStatus__FIELD_NAME__timestamp_last_trajectory_setpoint[] = "timestamp_last_trajectory_setpoint";
static char px4_msgs__msg__RaptorStatus__FIELD_NAME__vehicle_angular_velocity_stale[] = "vehicle_angular_velocity_stale";
static char px4_msgs__msg__RaptorStatus__FIELD_NAME__vehicle_local_position_stale[] = "vehicle_local_position_stale";
static char px4_msgs__msg__RaptorStatus__FIELD_NAME__vehicle_attitude_stale[] = "vehicle_attitude_stale";
static char px4_msgs__msg__RaptorStatus__FIELD_NAME__trajectory_setpoint_stale[] = "trajectory_setpoint_stale";
static char px4_msgs__msg__RaptorStatus__FIELD_NAME__active[] = "active";
static char px4_msgs__msg__RaptorStatus__FIELD_NAME__substep[] = "substep";
static char px4_msgs__msg__RaptorStatus__FIELD_NAME__control_interval[] = "control_interval";
static char px4_msgs__msg__RaptorStatus__FIELD_NAME__trajectory_setpoint_dt_mean[] = "trajectory_setpoint_dt_mean";
static char px4_msgs__msg__RaptorStatus__FIELD_NAME__trajectory_setpoint_dt_max[] = "trajectory_setpoint_dt_max";
static char px4_msgs__msg__RaptorStatus__FIELD_NAME__trajectory_setpoint_dt_max_since_activation[] = "trajectory_setpoint_dt_max_since_activation";
static char px4_msgs__msg__RaptorStatus__FIELD_NAME__internal_reference_position[] = "internal_reference_position";
static char px4_msgs__msg__RaptorStatus__FIELD_NAME__internal_reference_linear_velocity[] = "internal_reference_linear_velocity";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__RaptorStatus__FIELDS[] = {
  {
    {px4_msgs__msg__RaptorStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RaptorStatus__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RaptorStatus__FIELD_NAME__subscription_update_angular_velocity, 36, 36},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RaptorStatus__FIELD_NAME__subscription_update_local_position, 34, 34},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RaptorStatus__FIELD_NAME__subscription_update_attitude, 28, 28},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RaptorStatus__FIELD_NAME__subscription_update_trajectory_setpoint, 39, 39},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RaptorStatus__FIELD_NAME__subscription_update_vehicle_status, 34, 34},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RaptorStatus__FIELD_NAME__exit_reason, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RaptorStatus__FIELD_NAME__timestamp_last_vehicle_angular_velocity, 39, 39},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RaptorStatus__FIELD_NAME__timestamp_last_vehicle_local_position, 37, 37},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RaptorStatus__FIELD_NAME__timestamp_last_vehicle_attitude, 31, 31},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RaptorStatus__FIELD_NAME__timestamp_last_trajectory_setpoint, 34, 34},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RaptorStatus__FIELD_NAME__vehicle_angular_velocity_stale, 30, 30},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RaptorStatus__FIELD_NAME__vehicle_local_position_stale, 28, 28},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RaptorStatus__FIELD_NAME__vehicle_attitude_stale, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RaptorStatus__FIELD_NAME__trajectory_setpoint_stale, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RaptorStatus__FIELD_NAME__active, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RaptorStatus__FIELD_NAME__substep, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RaptorStatus__FIELD_NAME__control_interval, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RaptorStatus__FIELD_NAME__trajectory_setpoint_dt_mean, 27, 27},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RaptorStatus__FIELD_NAME__trajectory_setpoint_dt_max, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RaptorStatus__FIELD_NAME__trajectory_setpoint_dt_max_since_activation, 43, 43},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RaptorStatus__FIELD_NAME__internal_reference_position, 27, 27},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RaptorStatus__FIELD_NAME__internal_reference_linear_velocity, 34, 34},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4_msgs__msg__RaptorStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__RaptorStatus__TYPE_NAME, 25, 25},
      {px4_msgs__msg__RaptorStatus__FIELDS, 24, 24},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Raptor Status\n"
  "\n"
  "# Diagnostic messages for the Raptor foundation policy.\n"
  "# This diagnostic data is useful for debugging (e.g. identifying missing input information).\n"
  "\n"
  "uint32 MESSAGE_VERSION = 0\n"
  "\n"
  "uint64 timestamp # [us] Time since system start\n"
  "uint64 timestamp_sample # [us] Sampling timestamp of the data this control response is based on\n"
  "bool subscription_update_angular_velocity # [bool] Flag signalling if the vehicle_angular_velocity was updated\n"
  "bool subscription_update_local_position # [bool] Flag signalling if the vehicle_local_position was updated\n"
  "bool subscription_update_attitude # [bool] Flag signalling if the vehicle_attitude was updated\n"
  "bool subscription_update_trajectory_setpoint # [bool] Flag signalling if the trajectory_setpoint was updated\n"
  "bool subscription_update_vehicle_status # [bool] Flag signalling if the vehicle_status was updated\n"
  "\n"
  "uint8 exit_reason # [enum] Exit reason identifier. Representing conditions that lead to the Raptor policy not being executed\n"
  "uint8 EXIT_REASON_NONE = 0 # No exit reason => Raptor control step was executed (actuator_motors should have been published)\n"
  "uint8 EXIT_REASON_NO_ANGULAR_VELOCITY_UPDATE = 1 # We synchronize the control onto the input observation with the highest update frequency, which is vehicle_angular_velocity. If there was no update, we do not need to execute the policy again\n"
  "uint8 EXIT_REASON_NOT_ALL_OBSERVATIONS_SET = 2 # We can not execute the policy if not all observations are available\n"
  "uint8 EXIT_REASON_ANGULAR_VELOCITY_STALE = 3 # If OBSERVATION_TIMEOUT_ANGULAR_VELOCITY is exceeded, we treat the vehicle_angular_velocity as stale and can not run the policy\n"
  "uint8 EXIT_REASON_LOCAL_POSITION_STALE = 4 # If OBSERVATION_TIMEOUT_LOCAL_POSITION is exceeded, we treat the vehicle_local_position as stale and can not run the policy\n"
  "uint8 EXIT_REASON_ATTITUDE_STALE = 5 # If OBSERVATION_TIMEOUT_ATTITUDE is exceeded, we treat the vehicle_attitude as stale and can not run the policy\n"
  "uint8 EXIT_REASON_EXECUTOR_STATUS_SOURCE_NOT_CONTROL = 6 # The executor that runs the policy can run in oversampling mode, where it decides if the policy should be ran based on the timestamp and not based on fixed synchronization onto the vehicle_angular_velocity. In this case the executor can decide to skip running the policy if the interval is too small, in which case this flag is set.\n"
  "\n"
  "uint32 timestamp_last_vehicle_angular_velocity # [us] Timestamp of the last received vehicle_angular_velocity message\n"
  "uint32 timestamp_last_vehicle_local_position # [us] Timestamp of the last received vehicle_local_position message\n"
  "uint32 timestamp_last_vehicle_attitude # [us] Timestamp of the last received vehicle_attitude message\n"
  "uint32 timestamp_last_trajectory_setpoint # [us] Timestamp of the last received trajectory_setpoint message\n"
  "\n"
  "bool vehicle_angular_velocity_stale # [bool] True if vehicle_angular_velocity data is considered stale (exceeded timeout)\n"
  "bool vehicle_local_position_stale # [bool] True if vehicle_local_position data is considered stale (exceeded timeout)\n"
  "bool vehicle_attitude_stale # [bool] True if vehicle_attitude data is considered stale (exceeded timeout)\n"
  "bool trajectory_setpoint_stale # [bool] True if trajectory_setpoint data is considered stale (exceeded timeout)\n"
  "\n"
  "bool active # [bool] True if the Raptor policy is currently active (publishing actuator_motors)\n"
  "uint8 substep # [-] The policy is trained at a fixed frequency (e.g. 100 Hz) but we might want to use it for control at higher frequencies (e.g. 400 Hz), which leads to a number of intermediate steps before the actual policy state is advanced (in this case 4 = 400 Hz / 100 Hz). This field provides the current substep (e.g. 0-3).\n"
  "float32 control_interval # [s] Time interval between control updates\n"
  "\n"
  "float32 trajectory_setpoint_dt_mean # [us] The average trajectory setpoint arrival time interval (since Raptor mode activation within NUM_TRAJECTORY_SETPOINT_DTS received trajectory_setpoint messages)\n"
  "float32 trajectory_setpoint_dt_max # [us] The max trajectory setpoint arrival time interval (since Raptor mode activation and within NUM_TRAJECTORY_SETPOINT_DTS received trajectory_setpoint messages)\n"
  "float32 trajectory_setpoint_dt_max_since_activation # [us] The max trajectory setpoint arrival time interval (since Raptor mode activation)\n"
  "\n"
  "float32[3] internal_reference_position # [m] [@frame FLU] Internal reference position\n"
  "float32[3] internal_reference_linear_velocity # [m/s] [@frame FLU] Internal reference linear velocity\n"
  "\n"
  "# TOPICS raptor_status";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__RaptorStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__RaptorStatus__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 4507, 4507},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__RaptorStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__RaptorStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
