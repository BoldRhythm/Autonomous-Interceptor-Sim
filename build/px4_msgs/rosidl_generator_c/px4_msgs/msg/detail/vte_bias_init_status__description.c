// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/VteBiasInitStatus.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/vte_bias_init_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__VteBiasInitStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x36, 0x3e, 0x3c, 0x90, 0x18, 0x75, 0x04, 0x5b,
      0x6e, 0xb0, 0xc0, 0x95, 0x64, 0xfd, 0xb3, 0x59,
      0x38, 0x20, 0x6d, 0xe4, 0x58, 0xf9, 0xff, 0xc3,
      0xca, 0xe3, 0x56, 0x29, 0x4f, 0x48, 0x28, 0x69,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__VteBiasInitStatus__TYPE_NAME[] = "px4_msgs/msg/VteBiasInitStatus";

// Define type names, field names, and default values
static char px4_msgs__msg__VteBiasInitStatus__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__VteBiasInitStatus__FIELD_NAME__raw_bias[] = "raw_bias";
static char px4_msgs__msg__VteBiasInitStatus__FIELD_NAME__filtered_bias[] = "filtered_bias";
static char px4_msgs__msg__VteBiasInitStatus__FIELD_NAME__delta_norm[] = "delta_norm";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__VteBiasInitStatus__FIELDS[] = {
  {
    {px4_msgs__msg__VteBiasInitStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VteBiasInitStatus__FIELD_NAME__raw_bias, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VteBiasInitStatus__FIELD_NAME__filtered_bias, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VteBiasInitStatus__FIELD_NAME__delta_norm, 10, 10},
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
px4_msgs__msg__VteBiasInitStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__VteBiasInitStatus__TYPE_NAME, 30, 30},
      {px4_msgs__msg__VteBiasInitStatus__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Diagnostics for the initial GNSS/vision bias averaging phase in the Vision Target Estimator.\n"
  "#\n"
  "# Published by: vision_target_estimator (VTEPosition) while the bias low-pass filter is running.\n"
  "# Subscribed by: logger only, to verify that the bias settles before the estimator starts fusing vision.\n"
  "\n"
  "uint64 timestamp # [us] Time since system start\n"
  "\n"
  "float32[3] raw_bias # [m] [@frame NED] Current GNSS-vision bias sample\n"
  "float32[3] filtered_bias # [m] [@frame NED] Low-pass filtered bias sample\n"
  "float32 delta_norm # [m] norm(raw_bias_k - raw_bias_k-1)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__VteBiasInitStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__VteBiasInitStatus__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 551, 551},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__VteBiasInitStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__VteBiasInitStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
