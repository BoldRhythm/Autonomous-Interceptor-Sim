// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/SetpointConfigReply.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/setpoint_config_reply__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__SetpointConfigReply__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf6, 0x48, 0x96, 0x62, 0x4a, 0x15, 0x97, 0x16,
      0xcc, 0xf7, 0x19, 0xc2, 0x52, 0xe8, 0x8f, 0x84,
      0xa3, 0x40, 0x8a, 0x97, 0xa4, 0xe0, 0xaf, 0x9c,
      0xd3, 0xd0, 0x83, 0xfb, 0x37, 0x38, 0x3e, 0x86,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__SetpointConfigReply__TYPE_NAME[] = "px4_msgs/msg/SetpointConfigReply";

// Define type names, field names, and default values
static char px4_msgs__msg__SetpointConfigReply__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__SetpointConfigReply__FIELD_NAME__type[] = "type";
static char px4_msgs__msg__SetpointConfigReply__FIELD_NAME__source_id[] = "source_id";
static char px4_msgs__msg__SetpointConfigReply__FIELD_NAME__result[] = "result";
static char px4_msgs__msg__SetpointConfigReply__FIELD_NAME__mode_req_angular_velocity[] = "mode_req_angular_velocity";
static char px4_msgs__msg__SetpointConfigReply__FIELD_NAME__mode_req_attitude[] = "mode_req_attitude";
static char px4_msgs__msg__SetpointConfigReply__FIELD_NAME__mode_req_local_alt[] = "mode_req_local_alt";
static char px4_msgs__msg__SetpointConfigReply__FIELD_NAME__mode_req_local_position[] = "mode_req_local_position";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__SetpointConfigReply__FIELDS[] = {
  {
    {px4_msgs__msg__SetpointConfigReply__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__SetpointConfigReply__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__SetpointConfigReply__FIELD_NAME__source_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__SetpointConfigReply__FIELD_NAME__result, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__SetpointConfigReply__FIELD_NAME__mode_req_angular_velocity, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__SetpointConfigReply__FIELD_NAME__mode_req_attitude, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__SetpointConfigReply__FIELD_NAME__mode_req_local_alt, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__SetpointConfigReply__FIELD_NAME__mode_req_local_position, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4_msgs__msg__SetpointConfigReply__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__SetpointConfigReply__TYPE_NAME, 32, 32},
      {px4_msgs__msg__SetpointConfigReply__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Reply to SetpointConfig\n"
  "\n"
  "uint32 MESSAGE_VERSION = 0\n"
  "\n"
  "uint64 timestamp # [us] Time since system start\n"
  "\n"
  "uint16 type # See SetpointConfig::TYPE_*\n"
  "\n"
  "uint8 source_id # nav_state of the mode that sent the SetpointConfig\n"
  "\n"
  "uint8 RESULT_SUCCESS = 0\n"
  "uint8 RESULT_FAILURE_OTHER = 1\n"
  "uint8 RESULT_UNSUPPORTED = 2 # Setpoint type is unsupported for the current vehicle\n"
  "uint8 RESULT_UNKNOWN_SETPOINT_TYPE = 3 # The setpoint type is not known\n"
  "uint8 result # [@enum RESULT]\n"
  "\n"
  "# Mode requirements for using the given setpoint type. A mode will use these and apply them to the arming check reply (PX4 does not do that itself).\n"
  "# Certain setpoint types can be used in a reduced way, for example a TrajectorySetpoint without position control. In that case PX4 still sets all requirement flags, and the mode will then ignore mode_req_local_position.\n"
  "bool mode_req_angular_velocity\n"
  "bool mode_req_attitude\n"
  "bool mode_req_local_alt\n"
  "bool mode_req_local_position";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__SetpointConfigReply__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__SetpointConfigReply__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 935, 935},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__SetpointConfigReply__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__SetpointConfigReply__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
