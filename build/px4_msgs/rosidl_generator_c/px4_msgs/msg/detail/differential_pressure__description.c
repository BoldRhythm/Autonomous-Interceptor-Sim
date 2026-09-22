// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/DifferentialPressure.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/differential_pressure__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__DifferentialPressure__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x70, 0xb9, 0xc8, 0xde, 0x82, 0x40, 0xe1, 0xcf,
      0xda, 0xd4, 0xbd, 0x09, 0xf3, 0xf3, 0x3f, 0x2e,
      0xc4, 0xeb, 0xf4, 0xb7, 0x89, 0x06, 0x9c, 0x55,
      0x22, 0x36, 0x9c, 0x38, 0x22, 0x49, 0x14, 0xa0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__DifferentialPressure__TYPE_NAME[] = "px4_msgs/msg/DifferentialPressure";

// Define type names, field names, and default values
static char px4_msgs__msg__DifferentialPressure__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__DifferentialPressure__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4_msgs__msg__DifferentialPressure__FIELD_NAME__device_id[] = "device_id";
static char px4_msgs__msg__DifferentialPressure__FIELD_NAME__differential_pressure_pa[] = "differential_pressure_pa";
static char px4_msgs__msg__DifferentialPressure__FIELD_NAME__temperature[] = "temperature";
static char px4_msgs__msg__DifferentialPressure__FIELD_NAME__pitot_temperature[] = "pitot_temperature";
static char px4_msgs__msg__DifferentialPressure__FIELD_NAME__error_count[] = "error_count";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__DifferentialPressure__FIELDS[] = {
  {
    {px4_msgs__msg__DifferentialPressure__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__DifferentialPressure__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__DifferentialPressure__FIELD_NAME__device_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__DifferentialPressure__FIELD_NAME__differential_pressure_pa, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__DifferentialPressure__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__DifferentialPressure__FIELD_NAME__pitot_temperature, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__DifferentialPressure__FIELD_NAME__error_count, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4_msgs__msg__DifferentialPressure__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__DifferentialPressure__TYPE_NAME, 33, 33},
      {px4_msgs__msg__DifferentialPressure__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Differential-pressure (airspeed) sensor\n"
  "#\n"
  "# This is populated by airspeed sensor drivers and used by the sensor module to calculate airspeed.\n"
  "# The information is published in the `SCALED_PRESSURE_n` MAVLink messages (along with information from a corresponding `SensorBaro` instance).\n"
  "\n"
  "uint64 timestamp         # [us] Time of publication (since system start)\n"
  "uint64 timestamp_sample  # [us] Time of raw data capture\n"
  "\n"
  "uint32 device_id                  # [-] Unique device ID for the sensor that does not change between power cycles\n"
  "float32 differential_pressure_pa  # [Pa] Differential pressure reading (may be negative)\n"
  "float32 temperature               # [degC] [@invalid NaN if unknown] Temperature\n"
  "float32 pitot_temperature         # [degC] [@invalid NaN if unknown] Pitot temperature (if available)\n"
  "uint32 error_count                # [-] Number of errors detected by driver";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__DifferentialPressure__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__DifferentialPressure__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 882, 882},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__DifferentialPressure__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__DifferentialPressure__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
