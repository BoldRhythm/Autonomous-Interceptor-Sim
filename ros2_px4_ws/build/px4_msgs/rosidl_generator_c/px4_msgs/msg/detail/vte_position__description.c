// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/VtePosition.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/vte_position__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__VtePosition__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x44, 0xa5, 0x9a, 0x06, 0x65, 0x31, 0x6d, 0xbe,
      0x61, 0xe8, 0x9e, 0xd4, 0x5f, 0x69, 0xe3, 0x51,
      0x6a, 0xcb, 0xf9, 0x97, 0xd4, 0x2b, 0x86, 0xa4,
      0x09, 0x8e, 0xdf, 0x25, 0x31, 0x04, 0xd0, 0x85,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__VtePosition__TYPE_NAME[] = "px4_msgs/msg/VtePosition";

// Define type names, field names, and default values
static char px4_msgs__msg__VtePosition__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__VtePosition__FIELD_NAME__rel_pos_valid[] = "rel_pos_valid";
static char px4_msgs__msg__VtePosition__FIELD_NAME__rel_vel_valid[] = "rel_vel_valid";
static char px4_msgs__msg__VtePosition__FIELD_NAME__rel_pos[] = "rel_pos";
static char px4_msgs__msg__VtePosition__FIELD_NAME__vel_uav[] = "vel_uav";
static char px4_msgs__msg__VtePosition__FIELD_NAME__vel_target[] = "vel_target";
static char px4_msgs__msg__VtePosition__FIELD_NAME__bias[] = "bias";
static char px4_msgs__msg__VtePosition__FIELD_NAME__acc_target[] = "acc_target";
static char px4_msgs__msg__VtePosition__FIELD_NAME__cov_rel_pos[] = "cov_rel_pos";
static char px4_msgs__msg__VtePosition__FIELD_NAME__cov_vel_uav[] = "cov_vel_uav";
static char px4_msgs__msg__VtePosition__FIELD_NAME__cov_bias[] = "cov_bias";
static char px4_msgs__msg__VtePosition__FIELD_NAME__cov_vel_target[] = "cov_vel_target";
static char px4_msgs__msg__VtePosition__FIELD_NAME__cov_acc_target[] = "cov_acc_target";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__VtePosition__FIELDS[] = {
  {
    {px4_msgs__msg__VtePosition__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VtePosition__FIELD_NAME__rel_pos_valid, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VtePosition__FIELD_NAME__rel_vel_valid, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VtePosition__FIELD_NAME__rel_pos, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VtePosition__FIELD_NAME__vel_uav, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VtePosition__FIELD_NAME__vel_target, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VtePosition__FIELD_NAME__bias, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VtePosition__FIELD_NAME__acc_target, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VtePosition__FIELD_NAME__cov_rel_pos, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VtePosition__FIELD_NAME__cov_vel_uav, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VtePosition__FIELD_NAME__cov_bias, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VtePosition__FIELD_NAME__cov_vel_target, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VtePosition__FIELD_NAME__cov_acc_target, 14, 14},
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
px4_msgs__msg__VtePosition__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__VtePosition__TYPE_NAME, 24, 24},
      {px4_msgs__msg__VtePosition__FIELDS, 13, 13},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Vision Target Estimator position state, exposing the full per-axis Kalman filter state with covariances for logging and tuning.\n"
  "#\n"
  "# Published by: vision_target_estimator (VTEPosition).\n"
  "# Subscribed by: logger only. The position-related fields consumed elsewhere (precision landing, EKF2 aiding) are exposed on landing_target_pose.\n"
  "#\n"
  "# vel_target and acc_target are only populated when the firmware is built with CONFIG_VTEST_MOVING=y; otherwise they stay at zero.\n"
  "\n"
  "uint64 timestamp # [us] Time since system start\n"
  "\n"
  "bool rel_pos_valid # [-] Relative position estimate valid\n"
  "bool rel_vel_valid # [-] Relative velocity estimate valid\n"
  "\n"
  "float32[3] rel_pos # [m] [@frame NED] Target position relative to vehicle\n"
  "float32[3] vel_uav # [m/s] [@frame NED] Vehicle velocity\n"
  "float32[3] vel_target # [m/s] [@frame NED] Target velocity\n"
  "float32[3] bias # [m] [@frame NED] GNSS bias between vehicle and target receivers\n"
  "float32[3] acc_target # [m/s^2] [@frame NED] Target acceleration\n"
  "\n"
  "float32[3] cov_rel_pos # [m^2] [@frame NED] Variance of rel_pos\n"
  "float32[3] cov_vel_uav # [(m/s)^2] [@frame NED] Variance of vel_uav\n"
  "float32[3] cov_bias # [m^2] [@frame NED] Variance of bias\n"
  "float32[3] cov_vel_target # [(m/s)^2] [@frame NED] Variance of vel_target\n"
  "float32[3] cov_acc_target # [(m/s^2)^2] [@frame NED] Variance of acc_target";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__VtePosition__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__VtePosition__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1311, 1311},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__VtePosition__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__VtePosition__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
