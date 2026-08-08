// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/VteInput.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/vte_input__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__VteInput__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcf, 0x03, 0x15, 0xfd, 0xd6, 0x71, 0x68, 0x47,
      0xc5, 0xa1, 0xe7, 0xb5, 0x4f, 0x16, 0xad, 0x22,
      0x91, 0x7e, 0xa9, 0x7a, 0x34, 0x43, 0x3b, 0xf3,
      0x9e, 0x52, 0xe3, 0x42, 0xc5, 0x7c, 0x06, 0xb2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__VteInput__TYPE_NAME[] = "px4_msgs/msg/VteInput";

// Define type names, field names, and default values
static char px4_msgs__msg__VteInput__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__VteInput__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4_msgs__msg__VteInput__FIELD_NAME__acc_xyz[] = "acc_xyz";
static char px4_msgs__msg__VteInput__FIELD_NAME__q_att[] = "q_att";
static char px4_msgs__msg__VteInput__FIELD_NAME__acc_sample_count[] = "acc_sample_count";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__VteInput__FIELDS[] = {
  {
    {px4_msgs__msg__VteInput__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VteInput__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VteInput__FIELD_NAME__acc_xyz, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VteInput__FIELD_NAME__q_att, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VteInput__FIELD_NAME__acc_sample_count, 16, 16},
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
px4_msgs__msg__VteInput__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__VteInput__TYPE_NAME, 21, 21},
      {px4_msgs__msg__VteInput__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Vehicle inputs fed into the Vision Target Estimator position prediction step, logged for tuning.\n"
  "#\n"
  "# Published by: vision_target_estimator (VisionTargetEst work item).\n"
  "# Subscribed by: logger only.\n"
  "\n"
  "uint64 timestamp # [us] Time since system start\n"
  "uint64 timestamp_sample # [us] Timestamp of the raw input data\n"
  "\n"
  "float32[3] acc_xyz # [m/s^2] [@frame NED] Downsampled UAV bias-corrected acceleration (including gravity)\n"
  "float32[4] q_att # [-] Downsampled UAV attitude quaternion (FRD body -> NED earth)\n"
  "uint32 acc_sample_count # [-] Number of raw samples averaged into acc_xyz this cycle";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__VteInput__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__VteInput__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 587, 587},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__VteInput__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__VteInput__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
