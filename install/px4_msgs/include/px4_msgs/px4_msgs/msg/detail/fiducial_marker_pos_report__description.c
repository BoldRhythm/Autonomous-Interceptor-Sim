// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/FiducialMarkerPosReport.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/fiducial_marker_pos_report__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__FiducialMarkerPosReport__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xee, 0xf4, 0xe2, 0x59, 0x87, 0x70, 0x7a, 0x58,
      0x5d, 0x07, 0xef, 0xfb, 0x6c, 0x4c, 0x72, 0x11,
      0xac, 0x79, 0x29, 0x24, 0x2c, 0xe7, 0x9b, 0xe3,
      0x95, 0x83, 0x2e, 0x83, 0xaa, 0x59, 0x92, 0x06,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__FiducialMarkerPosReport__TYPE_NAME[] = "px4_msgs/msg/FiducialMarkerPosReport";

// Define type names, field names, and default values
static char px4_msgs__msg__FiducialMarkerPosReport__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__FiducialMarkerPosReport__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4_msgs__msg__FiducialMarkerPosReport__FIELD_NAME__rel_pos[] = "rel_pos";
static char px4_msgs__msg__FiducialMarkerPosReport__FIELD_NAME__cov_rel_pos[] = "cov_rel_pos";
static char px4_msgs__msg__FiducialMarkerPosReport__FIELD_NAME__q[] = "q";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__FiducialMarkerPosReport__FIELDS[] = {
  {
    {px4_msgs__msg__FiducialMarkerPosReport__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__FiducialMarkerPosReport__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__FiducialMarkerPosReport__FIELD_NAME__rel_pos, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__FiducialMarkerPosReport__FIELD_NAME__cov_rel_pos, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__FiducialMarkerPosReport__FIELD_NAME__q, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4_msgs__msg__FiducialMarkerPosReport__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__FiducialMarkerPosReport__TYPE_NAME, 36, 36},
      {px4_msgs__msg__FiducialMarkerPosReport__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Relative position of a precision-landing target detected by a vision pipeline (e.g. an ArUco marker).\n"
  "#\n"
  "# Published by: vision pipelines (on-board or off-board over MAVLink TARGET_RELATIVE), decoded in mavlink_receiver.\n"
  "# Subscribed by: vision_target_estimator (VTEPosition).\n"
  "#\n"
  "# The measurement is expressed in an arbitrary sensor frame; the quaternion q rotates it into the NED earth frame.\n"
  "\n"
  "uint64 timestamp # [us] Time since system start\n"
  "uint64 timestamp_sample # [us] Timestamp of the raw observation\n"
  "\n"
  "float32[3] rel_pos # [m] Target position relative to vehicle, expressed in the frame defined by q\n"
  "float32[3] cov_rel_pos # [m^2] Target position variance, expressed in the frame defined by q\n"
  "\n"
  "float32[4] q # [-] Quaternion rotation from the rel_pos frame to the NED earth frame";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__FiducialMarkerPosReport__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__FiducialMarkerPosReport__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 786, 786},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__FiducialMarkerPosReport__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__FiducialMarkerPosReport__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
