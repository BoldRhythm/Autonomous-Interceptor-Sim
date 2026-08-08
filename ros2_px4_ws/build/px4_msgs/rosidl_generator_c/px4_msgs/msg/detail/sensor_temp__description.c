// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/SensorTemp.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/sensor_temp__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__SensorTemp__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x32, 0x0d, 0x53, 0x68, 0x5a, 0x03, 0x8e, 0x4e,
      0x12, 0x6f, 0x1f, 0x14, 0xaa, 0x6c, 0x09, 0x8e,
      0xe9, 0x2b, 0xb0, 0x7c, 0x98, 0x1f, 0x00, 0x38,
      0x9f, 0x4b, 0xa2, 0x82, 0xc3, 0x52, 0xd1, 0x5d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__SensorTemp__TYPE_NAME[] = "px4_msgs/msg/SensorTemp";

// Define type names, field names, and default values
static char px4_msgs__msg__SensorTemp__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__SensorTemp__FIELD_NAME__device_id[] = "device_id";
static char px4_msgs__msg__SensorTemp__FIELD_NAME__temperature[] = "temperature";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__SensorTemp__FIELDS[] = {
  {
    {px4_msgs__msg__SensorTemp__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__SensorTemp__FIELD_NAME__device_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__SensorTemp__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4_msgs__msg__SensorTemp__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__SensorTemp__TYPE_NAME, 23, 23},
      {px4_msgs__msg__SensorTemp__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp          # time since system start (microseconds)\n"
  "\n"
  "uint32 device_id          # unique device ID for the sensor that does not change between power cycles\n"
  "float32  temperature      # Temperature provided by sensor (Celsius)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__SensorTemp__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__SensorTemp__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 239, 239},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__SensorTemp__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__SensorTemp__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
