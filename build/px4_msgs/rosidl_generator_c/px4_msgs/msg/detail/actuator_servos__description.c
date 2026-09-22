// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/ActuatorServos.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/actuator_servos__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__ActuatorServos__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x43, 0x1f, 0x2a, 0x0c, 0xd9, 0x89, 0x6b, 0x6a,
      0xda, 0x97, 0x29, 0x29, 0x94, 0x1c, 0xaa, 0x21,
      0xe5, 0x0d, 0x8a, 0xbe, 0xeb, 0x8d, 0x8d, 0x7c,
      0x8c, 0xbd, 0x94, 0xf6, 0x16, 0xe4, 0x6a, 0xda,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__ActuatorServos__TYPE_NAME[] = "px4_msgs/msg/ActuatorServos";

// Define type names, field names, and default values
static char px4_msgs__msg__ActuatorServos__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__ActuatorServos__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4_msgs__msg__ActuatorServos__FIELD_NAME__control[] = "control";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__ActuatorServos__FIELDS[] = {
  {
    {px4_msgs__msg__ActuatorServos__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__ActuatorServos__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__ActuatorServos__FIELD_NAME__control, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      15,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4_msgs__msg__ActuatorServos__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__ActuatorServos__TYPE_NAME, 27, 27},
      {px4_msgs__msg__ActuatorServos__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Servo control message\n"
  "#\n"
  "# Normalised output setpoint for up to 15 servos.\n"
  "# Published by the vehicle's allocation and consumed by the actuator output drivers.\n"
  "\n"
  "uint32 MESSAGE_VERSION = 1\n"
  "\n"
  "uint64 timestamp # [us] Time since system start\n"
  "uint64 timestamp_sample # [us] Sampling timestamp of the data this control response is based on\n"
  "\n"
  "uint8 NUM_CONTROLS = 15\n"
  "float32[15] control # [-] [@range -1, 1] Normalized output. 1 means maximum positive position. -1 maximum negative position (if not supported by the output, <0 maps to NaN). NaN maps to disarmed.";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__ActuatorServos__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__ActuatorServos__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 555, 555},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__ActuatorServos__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__ActuatorServos__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
