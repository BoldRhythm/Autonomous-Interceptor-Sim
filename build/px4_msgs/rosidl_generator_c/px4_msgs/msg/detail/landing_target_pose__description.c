// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/LandingTargetPose.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/landing_target_pose__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__LandingTargetPose__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x59, 0x15, 0x46, 0xa7, 0xf5, 0x42, 0x9d, 0x64,
      0xfe, 0xbc, 0x6e, 0xd8, 0xfe, 0x47, 0x85, 0x44,
      0xaa, 0x4b, 0x2f, 0x53, 0x7f, 0xb6, 0xb9, 0x1f,
      0x7b, 0xda, 0x35, 0xcb, 0xc8, 0x2e, 0xec, 0x17,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__LandingTargetPose__TYPE_NAME[] = "px4_msgs/msg/LandingTargetPose";

// Define type names, field names, and default values
static char px4_msgs__msg__LandingTargetPose__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__LandingTargetPose__FIELD_NAME__is_static[] = "is_static";
static char px4_msgs__msg__LandingTargetPose__FIELD_NAME__rel_pos_valid[] = "rel_pos_valid";
static char px4_msgs__msg__LandingTargetPose__FIELD_NAME__rel_vel_valid[] = "rel_vel_valid";
static char px4_msgs__msg__LandingTargetPose__FIELD_NAME__rel_vel_ekf2_valid[] = "rel_vel_ekf2_valid";
static char px4_msgs__msg__LandingTargetPose__FIELD_NAME__x_rel[] = "x_rel";
static char px4_msgs__msg__LandingTargetPose__FIELD_NAME__y_rel[] = "y_rel";
static char px4_msgs__msg__LandingTargetPose__FIELD_NAME__z_rel[] = "z_rel";
static char px4_msgs__msg__LandingTargetPose__FIELD_NAME__vx_rel[] = "vx_rel";
static char px4_msgs__msg__LandingTargetPose__FIELD_NAME__vy_rel[] = "vy_rel";
static char px4_msgs__msg__LandingTargetPose__FIELD_NAME__vz_rel[] = "vz_rel";
static char px4_msgs__msg__LandingTargetPose__FIELD_NAME__cov_x_rel[] = "cov_x_rel";
static char px4_msgs__msg__LandingTargetPose__FIELD_NAME__cov_y_rel[] = "cov_y_rel";
static char px4_msgs__msg__LandingTargetPose__FIELD_NAME__cov_z_rel[] = "cov_z_rel";
static char px4_msgs__msg__LandingTargetPose__FIELD_NAME__cov_vx_rel[] = "cov_vx_rel";
static char px4_msgs__msg__LandingTargetPose__FIELD_NAME__cov_vy_rel[] = "cov_vy_rel";
static char px4_msgs__msg__LandingTargetPose__FIELD_NAME__cov_vz_rel[] = "cov_vz_rel";
static char px4_msgs__msg__LandingTargetPose__FIELD_NAME__abs_pos_valid[] = "abs_pos_valid";
static char px4_msgs__msg__LandingTargetPose__FIELD_NAME__x_abs[] = "x_abs";
static char px4_msgs__msg__LandingTargetPose__FIELD_NAME__y_abs[] = "y_abs";
static char px4_msgs__msg__LandingTargetPose__FIELD_NAME__z_abs[] = "z_abs";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__LandingTargetPose__FIELDS[] = {
  {
    {px4_msgs__msg__LandingTargetPose__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__LandingTargetPose__FIELD_NAME__is_static, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__LandingTargetPose__FIELD_NAME__rel_pos_valid, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__LandingTargetPose__FIELD_NAME__rel_vel_valid, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__LandingTargetPose__FIELD_NAME__rel_vel_ekf2_valid, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__LandingTargetPose__FIELD_NAME__x_rel, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__LandingTargetPose__FIELD_NAME__y_rel, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__LandingTargetPose__FIELD_NAME__z_rel, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__LandingTargetPose__FIELD_NAME__vx_rel, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__LandingTargetPose__FIELD_NAME__vy_rel, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__LandingTargetPose__FIELD_NAME__vz_rel, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__LandingTargetPose__FIELD_NAME__cov_x_rel, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__LandingTargetPose__FIELD_NAME__cov_y_rel, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__LandingTargetPose__FIELD_NAME__cov_z_rel, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__LandingTargetPose__FIELD_NAME__cov_vx_rel, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__LandingTargetPose__FIELD_NAME__cov_vy_rel, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__LandingTargetPose__FIELD_NAME__cov_vz_rel, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__LandingTargetPose__FIELD_NAME__abs_pos_valid, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__LandingTargetPose__FIELD_NAME__x_abs, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__LandingTargetPose__FIELD_NAME__y_abs, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__LandingTargetPose__FIELD_NAME__z_abs, 5, 5},
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
px4_msgs__msg__LandingTargetPose__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__LandingTargetPose__TYPE_NAME, 30, 30},
      {px4_msgs__msg__LandingTargetPose__FIELDS, 21, 21},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Relative position of precision land target in navigation (body fixed, north aligned, NED) and inertial (world fixed, north aligned, NED) frames\n"
  "\n"
  "uint64 timestamp # [us] Time since system start\n"
  "\n"
  "bool is_static # [-] Flag indicating whether the landing target is static or moving with respect to the ground\n"
  "\n"
  "bool rel_pos_valid # [-] Flag showing whether relative position is valid\n"
  "bool rel_vel_valid # [-] Flag showing whether relative velocity is valid\n"
  "bool rel_vel_ekf2_valid # [-] Flag showing whether relative velocity is valid for EKF2 auxiliary velocity aiding\n"
  "\n"
  "float32 x_rel # [m] X/north position of target, relative to vehicle (navigation frame)\n"
  "float32 y_rel # [m] Y/east position of target, relative to vehicle (navigation frame)\n"
  "float32 z_rel # [m] Z/down position of target, relative to vehicle (navigation frame)\n"
  "\n"
  "float32 vx_rel # [m/s] X/north velocity of target, relative to vehicle (navigation frame)\n"
  "float32 vy_rel # [m/s] Y/east velocity of target, relative to vehicle (navigation frame)\n"
  "float32 vz_rel # [m/s] Z/down velocity of target, relative to vehicle (navigation frame)\n"
  "\n"
  "float32 cov_x_rel # [m^2] X/north position variance\n"
  "float32 cov_y_rel # [m^2] Y/east position variance\n"
  "float32 cov_z_rel # [m^2] Z/down position variance\n"
  "\n"
  "float32 cov_vx_rel # [(m/s)^2] X/north velocity variance\n"
  "float32 cov_vy_rel # [(m/s)^2] Y/east velocity variance\n"
  "float32 cov_vz_rel # [(m/s)^2] Z/down velocity variance\n"
  "\n"
  "bool abs_pos_valid # [-] Flag showing whether absolute position is valid\n"
  "\n"
  "float32 x_abs # [m] X/north position of target, relative to origin (navigation frame)\n"
  "float32 y_abs # [m] Y/east position of target, relative to origin (navigation frame)\n"
  "float32 z_abs # [m] Z/down position of target, relative to origin (navigation frame)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__LandingTargetPose__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__LandingTargetPose__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1752, 1752},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__LandingTargetPose__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__LandingTargetPose__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
