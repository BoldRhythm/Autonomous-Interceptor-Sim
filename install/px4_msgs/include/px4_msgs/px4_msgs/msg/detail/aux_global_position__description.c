// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/AuxGlobalPosition.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/aux_global_position__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__AuxGlobalPosition__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe7, 0xc7, 0x70, 0xfd, 0x6c, 0x04, 0x07, 0xff,
      0xa9, 0x7c, 0xe9, 0xb1, 0x6f, 0xf2, 0x1f, 0x3a,
      0xe1, 0x48, 0xb2, 0x70, 0x9e, 0x7c, 0x86, 0x65,
      0x8c, 0xf4, 0x0f, 0x0a, 0x93, 0x48, 0x45, 0x89,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__AuxGlobalPosition__TYPE_NAME[] = "px4_msgs/msg/AuxGlobalPosition";

// Define type names, field names, and default values
static char px4_msgs__msg__AuxGlobalPosition__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__AuxGlobalPosition__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4_msgs__msg__AuxGlobalPosition__FIELD_NAME__id[] = "id";
static char px4_msgs__msg__AuxGlobalPosition__FIELD_NAME__source[] = "source";
static char px4_msgs__msg__AuxGlobalPosition__FIELD_NAME__lat[] = "lat";
static char px4_msgs__msg__AuxGlobalPosition__FIELD_NAME__lon[] = "lon";
static char px4_msgs__msg__AuxGlobalPosition__FIELD_NAME__alt[] = "alt";
static char px4_msgs__msg__AuxGlobalPosition__FIELD_NAME__eph[] = "eph";
static char px4_msgs__msg__AuxGlobalPosition__FIELD_NAME__epv[] = "epv";
static char px4_msgs__msg__AuxGlobalPosition__FIELD_NAME__lat_lon_reset_counter[] = "lat_lon_reset_counter";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__AuxGlobalPosition__FIELDS[] = {
  {
    {px4_msgs__msg__AuxGlobalPosition__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__AuxGlobalPosition__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__AuxGlobalPosition__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__AuxGlobalPosition__FIELD_NAME__source, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__AuxGlobalPosition__FIELD_NAME__lat, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__AuxGlobalPosition__FIELD_NAME__lon, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__AuxGlobalPosition__FIELD_NAME__alt, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__AuxGlobalPosition__FIELD_NAME__eph, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__AuxGlobalPosition__FIELD_NAME__epv, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__AuxGlobalPosition__FIELD_NAME__lat_lon_reset_counter, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4_msgs__msg__AuxGlobalPosition__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__AuxGlobalPosition__TYPE_NAME, 30, 30},
      {px4_msgs__msg__AuxGlobalPosition__FIELDS, 10, 10},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Auxiliary global position\n"
  "#\n"
  "# This message provides global position data from an external source such as\n"
  "# pseudolites, visual navigation, or other positioning system.\n"
  "\n"
  "uint32 MESSAGE_VERSION = 1\n"
  "\n"
  "uint64 timestamp # [us] Time since system start\n"
  "uint64 timestamp_sample # [us] Timestamp of the raw data\n"
  "\n"
  "uint8 id # [-] Unique identifier for the AGP source\n"
  "uint8 source # [@enum SOURCE] Source type of the position data (based on mavlink::GLOBAL_POSITION_SRC)\n"
  "uint8 SOURCE_UNKNOWN = 0 # Unknown source\n"
  "uint8 SOURCE_GNSS = 1 # GNSS\n"
  "uint8 SOURCE_VISION = 2 # Vision\n"
  "uint8 SOURCE_PSEUDOLITES = 3 # Pseudolites\n"
  "uint8 SOURCE_TERRAIN = 4 # Terrain\n"
  "uint8 SOURCE_MAGNETIC = 5 # Magnetic\n"
  "uint8 SOURCE_ESTIMATOR = 6 # Estimator\n"
  "uint8 SOURCE_LEO = 7 # Low Earth Orbit satellite-based positioning\n"
  "\n"
  "# lat, lon: required for horizontal position fusion, alt: required for vertical position fusion\n"
  "float64 lat # [deg] Latitude in WGS84\n"
  "float64 lon # [deg] Longitude in WGS84\n"
  "float32 alt # [m] [@invalid NaN] Altitude above mean sea level (AMSL)\n"
  "\n"
  "float32 eph # [m] [@invalid NaN] Std dev of horizontal position, lower bounded by NOISE param\n"
  "float32 epv # [m] [@invalid NaN] Std dev of vertical position, lower bounded by NOISE param\n"
  "\n"
  "uint8 lat_lon_reset_counter # [-] Counter for reset events on horizontal position coordinates\n"
  "\n"
  "# TOPICS aux_global_position";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__AuxGlobalPosition__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__AuxGlobalPosition__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1341, 1341},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__AuxGlobalPosition__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__AuxGlobalPosition__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
