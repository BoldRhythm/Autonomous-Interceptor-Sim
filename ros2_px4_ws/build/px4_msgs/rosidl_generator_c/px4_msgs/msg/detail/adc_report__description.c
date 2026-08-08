// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/AdcReport.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/adc_report__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__AdcReport__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa6, 0x80, 0x9d, 0x02, 0x49, 0x0b, 0xec, 0xc2,
      0x79, 0xf9, 0x11, 0xf5, 0xbe, 0x11, 0xa8, 0xef,
      0x08, 0x48, 0xa9, 0xbb, 0x95, 0x26, 0x24, 0x91,
      0x71, 0x2b, 0x77, 0x1a, 0x12, 0x07, 0xd6, 0xe2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__AdcReport__TYPE_NAME[] = "px4_msgs/msg/AdcReport";

// Define type names, field names, and default values
static char px4_msgs__msg__AdcReport__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__AdcReport__FIELD_NAME__device_id[] = "device_id";
static char px4_msgs__msg__AdcReport__FIELD_NAME__channel_id[] = "channel_id";
static char px4_msgs__msg__AdcReport__FIELD_NAME__raw_data[] = "raw_data";
static char px4_msgs__msg__AdcReport__FIELD_NAME__resolution[] = "resolution";
static char px4_msgs__msg__AdcReport__FIELD_NAME__v_ref[] = "v_ref";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__AdcReport__FIELDS[] = {
  {
    {px4_msgs__msg__AdcReport__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__AdcReport__FIELD_NAME__device_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__AdcReport__FIELD_NAME__channel_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_ARRAY,
      16,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__AdcReport__FIELD_NAME__raw_data, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_ARRAY,
      16,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__AdcReport__FIELD_NAME__resolution, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__AdcReport__FIELD_NAME__v_ref, 5, 5},
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
px4_msgs__msg__AdcReport__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__AdcReport__TYPE_NAME, 22, 22},
      {px4_msgs__msg__AdcReport__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# ADC raw data.\n"
  "#\n"
  "# Communicates raw data from an analog-to-digital converter (ADC) to other modules, such as battery status.\n"
  "\n"
  "uint64 timestamp      # [us] Time since system start\n"
  "uint32 device_id      # [-] unique device ID for the sensor that does not change between power cycles\n"
  "int16[16] channel_id  # [-] ADC channel IDs, negative for non-existent, TODO: should be kept same as array index\n"
  "int32[16] raw_data    # [-] ADC channel raw value, accept negative value, valid if channel ID is positive\n"
  "uint32 resolution     # [-] ADC channel resolution\n"
  "float32 v_ref         # [V] ADC channel voltage reference, use to calculate LSB voltage(lsb=scale/resolution)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__AdcReport__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__AdcReport__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 662, 662},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__AdcReport__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__AdcReport__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
