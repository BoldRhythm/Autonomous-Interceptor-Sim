// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/GainCompression.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/gain_compression__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__GainCompression__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1f, 0x3c, 0x0e, 0xbe, 0x49, 0x8c, 0x48, 0x31,
      0x20, 0x5a, 0x65, 0x7c, 0x1f, 0xa9, 0xbd, 0x2a,
      0x2b, 0x87, 0xab, 0x0f, 0xda, 0x47, 0xa7, 0x1b,
      0x0f, 0x56, 0x9c, 0xa2, 0xbe, 0xff, 0x78, 0xa5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__GainCompression__TYPE_NAME[] = "px4_msgs/msg/GainCompression";

// Define type names, field names, and default values
static char px4_msgs__msg__GainCompression__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__GainCompression__FIELD_NAME__compression_gains[] = "compression_gains";
static char px4_msgs__msg__GainCompression__FIELD_NAME__spectral_damper_hpf[] = "spectral_damper_hpf";
static char px4_msgs__msg__GainCompression__FIELD_NAME__spectral_damper_out[] = "spectral_damper_out";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__GainCompression__FIELDS[] = {
  {
    {px4_msgs__msg__GainCompression__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__GainCompression__FIELD_NAME__compression_gains, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__GainCompression__FIELD_NAME__spectral_damper_hpf, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__GainCompression__FIELD_NAME__spectral_damper_out, 19, 19},
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
px4_msgs__msg__GainCompression__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__GainCompression__TYPE_NAME, 28, 28},
      {px4_msgs__msg__GainCompression__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp                # Time since system start (microseconds)\n"
  "\n"
  "float32[3] compression_gains\\t# [-] [@frame FRD] [@range 0, 1] Multiplicative gain to modify the output of the controller per axis\n"
  "float32[3] spectral_damper_hpf  # [-] [@frame FRD] Squared output of spectral damper high-pass filter\n"
  "float32[3] spectral_damper_out  # [-] [@frame FRD] Spectral damper output squared";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__GainCompression__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__GainCompression__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 388, 388},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__GainCompression__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__GainCompression__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
