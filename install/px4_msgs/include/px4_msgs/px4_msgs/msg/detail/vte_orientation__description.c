// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/VteOrientation.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/vte_orientation__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__VteOrientation__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa1, 0x4b, 0x0b, 0xb0, 0xeb, 0x03, 0x31, 0xae,
      0xaf, 0x96, 0x08, 0xf0, 0xcc, 0x92, 0x92, 0x5e,
      0xec, 0x83, 0x9a, 0x9c, 0xc2, 0x6f, 0x2f, 0xa2,
      0xb2, 0xe8, 0x87, 0x26, 0x85, 0x12, 0xd2, 0x4f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__VteOrientation__TYPE_NAME[] = "px4_msgs/msg/VteOrientation";

// Define type names, field names, and default values
static char px4_msgs__msg__VteOrientation__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__VteOrientation__FIELD_NAME__orientation_valid[] = "orientation_valid";
static char px4_msgs__msg__VteOrientation__FIELD_NAME__yaw[] = "yaw";
static char px4_msgs__msg__VteOrientation__FIELD_NAME__cov_yaw[] = "cov_yaw";
static char px4_msgs__msg__VteOrientation__FIELD_NAME__yaw_rate[] = "yaw_rate";
static char px4_msgs__msg__VteOrientation__FIELD_NAME__cov_yaw_rate[] = "cov_yaw_rate";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__VteOrientation__FIELDS[] = {
  {
    {px4_msgs__msg__VteOrientation__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VteOrientation__FIELD_NAME__orientation_valid, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VteOrientation__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VteOrientation__FIELD_NAME__cov_yaw, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VteOrientation__FIELD_NAME__yaw_rate, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VteOrientation__FIELD_NAME__cov_yaw_rate, 12, 12},
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
px4_msgs__msg__VteOrientation__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__VteOrientation__TYPE_NAME, 27, 27},
      {px4_msgs__msg__VteOrientation__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Vision Target Estimator orientation state, exposing the full yaw filter output with covariances for logging and tuning.\n"
  "#\n"
  "# Published by: vision_target_estimator (VTEOrientation).\n"
  "# Subscribed by: logger only. The orientation-related fields consumed elsewhere (precision landing) are exposed on landing_target_pose.\n"
  "\n"
  "uint64 timestamp # [us] Time since system start\n"
  "\n"
  "bool orientation_valid # [-] Relative orientation estimate valid\n"
  "\n"
  "float32 yaw # [rad] [@frame NED] Target yaw angle\n"
  "float32 cov_yaw # [rad^2] Variance of yaw\n"
  "\n"
  "float32 yaw_rate # [rad/s] [@frame NED] Target yaw rate\n"
  "float32 cov_yaw_rate # [(rad/s)^2] Variance of yaw_rate";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__VteOrientation__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__VteOrientation__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 639, 639},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__VteOrientation__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__VteOrientation__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
