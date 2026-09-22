// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/RaptorInput.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/raptor_input__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__RaptorInput__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc5, 0xaf, 0xd9, 0x56, 0xbd, 0xd3, 0xa0, 0xbc,
      0x0a, 0x74, 0x93, 0x45, 0xb4, 0x37, 0xd7, 0x21,
      0x0e, 0x6e, 0xa3, 0x09, 0x99, 0x59, 0x39, 0x80,
      0xf2, 0x19, 0xbd, 0x92, 0xb6, 0x31, 0x35, 0x10,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__RaptorInput__TYPE_NAME[] = "px4_msgs/msg/RaptorInput";

// Define type names, field names, and default values
static char px4_msgs__msg__RaptorInput__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__RaptorInput__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4_msgs__msg__RaptorInput__FIELD_NAME__active[] = "active";
static char px4_msgs__msg__RaptorInput__FIELD_NAME__position[] = "position";
static char px4_msgs__msg__RaptorInput__FIELD_NAME__orientation[] = "orientation";
static char px4_msgs__msg__RaptorInput__FIELD_NAME__linear_velocity[] = "linear_velocity";
static char px4_msgs__msg__RaptorInput__FIELD_NAME__angular_velocity[] = "angular_velocity";
static char px4_msgs__msg__RaptorInput__FIELD_NAME__previous_action[] = "previous_action";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__RaptorInput__FIELDS[] = {
  {
    {px4_msgs__msg__RaptorInput__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RaptorInput__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RaptorInput__FIELD_NAME__active, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RaptorInput__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RaptorInput__FIELD_NAME__orientation, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RaptorInput__FIELD_NAME__linear_velocity, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RaptorInput__FIELD_NAME__angular_velocity, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RaptorInput__FIELD_NAME__previous_action, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4_msgs__msg__RaptorInput__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__RaptorInput__TYPE_NAME, 24, 24},
      {px4_msgs__msg__RaptorInput__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Raptor Input\n"
  "\n"
  "# The exact inputs to the Raptor foundation policy.\n"
  "# Having access to the exact inputs helps with debugging and post-hoc analysis.\n"
  "\n"
  "uint32 MESSAGE_VERSION = 0\n"
  "\n"
  "uint64 timestamp # [us] Time since system start\n"
  "uint64 timestamp_sample # [us] Sampling timestamp of the data this control response is based on\n"
  "bool active # Signals if the policy is active (aka publishing actuator_motors)\n"
  "float32[3] position # [m] [@frame FLU] Position of the vehicle_local_position frame\n"
  "float32[4] orientation # [-] Orientation in the vehicle_attitude frame but using the FLU convention as a unit quaternion (w, x, y, z)\n"
  "float32[3] linear_velocity # [m/s] [@frame FLU] Linear velocity in the vehicle_local_position frame\n"
  "float32[3] angular_velocity # [rad/s]  [@frame FLU] Angular velocity in the body frame\n"
  "uint8 ACTION_DIM = 4 # Policy output dimensionality (for quadrotors)\n"
  "float32[4] previous_action # [@range -1, 1] Previous action. Motor commands normalized to [-1, 1]\n"
  "\n"
  "# TOPICS raptor_input";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__RaptorInput__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__RaptorInput__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 995, 995},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__RaptorInput__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__RaptorInput__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
