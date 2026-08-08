// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/CameraCapture.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/camera_capture__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__CameraCapture__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8d, 0x80, 0x33, 0xba, 0x13, 0xbd, 0xc6, 0xdf,
      0xbe, 0x88, 0x9e, 0x4b, 0xf5, 0x29, 0x3a, 0x3c,
      0xd1, 0x5c, 0xf9, 0x2b, 0x3c, 0x11, 0xc3, 0xce,
      0xdf, 0x84, 0x59, 0xe5, 0x37, 0x8f, 0xd5, 0x97,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__CameraCapture__TYPE_NAME[] = "px4_msgs/msg/CameraCapture";

// Define type names, field names, and default values
static char px4_msgs__msg__CameraCapture__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__CameraCapture__FIELD_NAME__timestamp_utc[] = "timestamp_utc";
static char px4_msgs__msg__CameraCapture__FIELD_NAME__seq[] = "seq";
static char px4_msgs__msg__CameraCapture__FIELD_NAME__lat[] = "lat";
static char px4_msgs__msg__CameraCapture__FIELD_NAME__lon[] = "lon";
static char px4_msgs__msg__CameraCapture__FIELD_NAME__alt[] = "alt";
static char px4_msgs__msg__CameraCapture__FIELD_NAME__ground_distance[] = "ground_distance";
static char px4_msgs__msg__CameraCapture__FIELD_NAME__q[] = "q";
static char px4_msgs__msg__CameraCapture__FIELD_NAME__result[] = "result";
static char px4_msgs__msg__CameraCapture__FIELD_NAME__report[] = "report";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__CameraCapture__FIELDS[] = {
  {
    {px4_msgs__msg__CameraCapture__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__CameraCapture__FIELD_NAME__timestamp_utc, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__CameraCapture__FIELD_NAME__seq, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__CameraCapture__FIELD_NAME__lat, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__CameraCapture__FIELD_NAME__lon, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__CameraCapture__FIELD_NAME__alt, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__CameraCapture__FIELD_NAME__ground_distance, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__CameraCapture__FIELD_NAME__q, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__CameraCapture__FIELD_NAME__result, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__CameraCapture__FIELD_NAME__report, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4_msgs__msg__CameraCapture__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__CameraCapture__TYPE_NAME, 26, 26},
      {px4_msgs__msg__CameraCapture__FIELDS, 10, 10},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp\\t\\t# time since system start (microseconds)\n"
  "uint64 timestamp_utc\\t\\t# Capture time in UTC / GPS time\n"
  "uint32 seq\\t\\t\\t\\t\\t# Image sequence number\n"
  "float64 lat\\t\\t\\t\\t\\t# Latitude in degrees (WGS84)\n"
  "float64 lon\\t\\t\\t\\t\\t# Longitude in degrees (WGS84)\n"
  "float32 alt\\t\\t\\t\\t\\t# Altitude (AMSL)\n"
  "float32 ground_distance\\t\\t\\t# Altitude above ground (meters)\n"
  "float32[4] q\\t\\t\\t\\t\\t# Attitude of the camera relative to NED earth-fixed frame when using a gimbal, otherwise vehicle attitude\n"
  "int8 result\\t\\t\\t\\t\\t# 1 for success, 0 for failure, -1 if camera does not provide feedback\n"
  "bool report\\t\\t\\t\\t\\t# Report this capture to the ground station (CAMERA_IMAGE_CAPTURED); it is always logged regardless";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__CameraCapture__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__CameraCapture__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 666, 666},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__CameraCapture__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__CameraCapture__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
