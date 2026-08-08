// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/DetectAndAvoid.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/detect_and_avoid__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__DetectAndAvoid__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x04, 0x10, 0x74, 0xbc, 0xbb, 0x6b, 0xfd, 0x1b,
      0xc5, 0xe0, 0xbc, 0x4b, 0x1b, 0x85, 0x75, 0x04,
      0x34, 0x88, 0xa3, 0x75, 0x66, 0x4a, 0x2a, 0x7d,
      0x34, 0x50, 0x70, 0xb8, 0x79, 0xf6, 0x6d, 0x37,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__DetectAndAvoid__TYPE_NAME[] = "px4_msgs/msg/DetectAndAvoid";

// Define type names, field names, and default values
static char px4_msgs__msg__DetectAndAvoid__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__DetectAndAvoid__FIELD_NAME__unique_id[] = "unique_id";
static char px4_msgs__msg__DetectAndAvoid__FIELD_NAME__unique_id_encoding[] = "unique_id_encoding";
static char px4_msgs__msg__DetectAndAvoid__FIELD_NAME__conflict_level[] = "conflict_level";
static char px4_msgs__msg__DetectAndAvoid__FIELD_NAME__aircraft_dist[] = "aircraft_dist";
static char px4_msgs__msg__DetectAndAvoid__FIELD_NAME__aircraft_dist_hor[] = "aircraft_dist_hor";
static char px4_msgs__msg__DetectAndAvoid__FIELD_NAME__aircraft_dist_vert[] = "aircraft_dist_vert";
static char px4_msgs__msg__DetectAndAvoid__FIELD_NAME__expected_min_dist_time[] = "expected_min_dist_time";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__DetectAndAvoid__FIELDS[] = {
  {
    {px4_msgs__msg__DetectAndAvoid__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__DetectAndAvoid__FIELD_NAME__unique_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__DetectAndAvoid__FIELD_NAME__unique_id_encoding, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__DetectAndAvoid__FIELD_NAME__conflict_level, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__DetectAndAvoid__FIELD_NAME__aircraft_dist, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__DetectAndAvoid__FIELD_NAME__aircraft_dist_hor, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__DetectAndAvoid__FIELD_NAME__aircraft_dist_vert, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__DetectAndAvoid__FIELD_NAME__expected_min_dist_time, 22, 22},
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
px4_msgs__msg__DetectAndAvoid__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__DetectAndAvoid__TYPE_NAME, 27, 27},
      {px4_msgs__msg__DetectAndAvoid__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Detect-and-avoid conflict assessment for one traffic aircraft.\n"
  "#\n"
  "# Detailed per-traffic output from navigator's `DetectAndAvoid` component.\n"
  "# A sample is published when an evaluated report indicates a conflict or updates\n"
  "# an aircraft already tracked as a conflict. New reports assessed at NONE are omitted.\n"
  "#\n"
  "# Unlike `detect_and_avoid_most_urgent`, this topic does not summarize the single\n"
  "# active conflict driving DAA actions or prearm checks. It reports the conflict level\n"
  "# and geometry for the specific traffic aircraft that was just evaluated.\n"
  "#\n"
  "# Published by: `navigator` (`DetectAndAvoid`)\n"
  "# Used by: logging and tests\n"
  "\n"
  "uint8 DAA_CONFLICT_LVL_NONE = 0\n"
  "uint8 DAA_CONFLICT_LVL_LOW = 1\n"
  "uint8 DAA_CONFLICT_LVL_MEDIUM = 2\n"
  "uint8 DAA_CONFLICT_LVL_HIGH = 3\n"
  "uint8 DAA_CONFLICT_LVL_CRITICAL = 4\n"
  "\n"
  "uint8 UNIQUE_ID_ENCODING_ICAO = 0 # `unique_id` contains an ICAO address\n"
  "uint8 UNIQUE_ID_ENCODING_ADSB_CALLSIGN = 1 # `unique_id` contains an ADS-B callsign packed into a `uint64`\n"
  "uint8 UNIQUE_ID_ENCODING_UAS_ID = 2 # `unique_id` contains the reduced tail bytes of a UAS ID\n"
  "\n"
  "uint8 ORB_QUEUE_LENGTH = 16\n"
  "\n"
  "uint64 timestamp # [us] Time since system start\n"
  "uint64 unique_id # [-] Encoded traffic identifier selected in priority order: ICAO address, ADS-B callsign, then reduced UAS ID tail bytes\n"
  "uint8 unique_id_encoding # [-] Namespace used to decode `unique_id`\n"
  "\n"
  "uint8 conflict_level # [-] Conflict level calculated for this traffic aircraft\n"
  "float32 aircraft_dist # [m] Current 3D point-to-point range between ownship and the traffic aircraft\n"
  "float32 aircraft_dist_hor # [m] [@frame NED] Horizontal separation metric. In Crosstrack mode this is the signed crosstrack distance when available, otherwise direct horizontal range\n"
  "float32 aircraft_dist_vert # [m] [@frame NED] Vertical separation between ownship (the current vehicle) and the traffic aircraft\n"
  "float32 expected_min_dist_time # [s] Conservative collision-time estimate from current 3D separation and the sum of ownship and traffic speed magnitudes";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__DetectAndAvoid__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__DetectAndAvoid__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2004, 2004},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__DetectAndAvoid__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__DetectAndAvoid__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
