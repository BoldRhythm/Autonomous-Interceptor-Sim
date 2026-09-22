// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/ActuatorServosTrim.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/actuator_servos_trim__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__ActuatorServosTrim__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xaa, 0xe5, 0x2f, 0xc6, 0xa8, 0x38, 0x3f, 0xc0,
      0xce, 0x28, 0x2d, 0x8e, 0xb3, 0xe2, 0xe0, 0x8d,
      0x7d, 0x61, 0x7e, 0xcd, 0x82, 0xed, 0x22, 0x62,
      0x82, 0x75, 0xfd, 0xfa, 0xcf, 0xe1, 0x21, 0x4b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__ActuatorServosTrim__TYPE_NAME[] = "px4_msgs/msg/ActuatorServosTrim";

// Define type names, field names, and default values
static char px4_msgs__msg__ActuatorServosTrim__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__ActuatorServosTrim__FIELD_NAME__trim[] = "trim";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__ActuatorServosTrim__FIELDS[] = {
  {
    {px4_msgs__msg__ActuatorServosTrim__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__ActuatorServosTrim__FIELD_NAME__trim, 4, 4},
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
px4_msgs__msg__ActuatorServosTrim__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__ActuatorServosTrim__TYPE_NAME, 31, 31},
      {px4_msgs__msg__ActuatorServosTrim__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Servo trims, added as offset to servo outputs\n"
  "uint64 timestamp\\t\\t\\t# time since system start (microseconds)\n"
  "\n"
  "uint8 NUM_CONTROLS = 15\n"
  "float32[15] trim    # range: [-1, 1]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__ActuatorServosTrim__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__ActuatorServosTrim__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 170, 170},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__ActuatorServosTrim__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__ActuatorServosTrim__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
