// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/DetectAndAvoidMostUrgent.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/detect_and_avoid_most_urgent__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__DetectAndAvoidMostUrgent__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xeb, 0x09, 0xea, 0xc8, 0xb3, 0x3b, 0x41, 0x70,
      0x7b, 0xa8, 0xec, 0x95, 0x63, 0x04, 0x00, 0x59,
      0x1f, 0x02, 0x97, 0x4a, 0x90, 0xab, 0x19, 0xec,
      0xca, 0x35, 0xc2, 0x64, 0x5f, 0x01, 0x9c, 0x58,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__DetectAndAvoidMostUrgent__TYPE_NAME[] = "px4_msgs/msg/DetectAndAvoidMostUrgent";

// Define type names, field names, and default values
static char px4_msgs__msg__DetectAndAvoidMostUrgent__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__DetectAndAvoidMostUrgent__FIELD_NAME__unique_id[] = "unique_id";
static char px4_msgs__msg__DetectAndAvoidMostUrgent__FIELD_NAME__unique_id_encoding[] = "unique_id_encoding";
static char px4_msgs__msg__DetectAndAvoidMostUrgent__FIELD_NAME__has_action[] = "has_action";
static char px4_msgs__msg__DetectAndAvoidMostUrgent__FIELD_NAME__conflict_level[] = "conflict_level";
static char px4_msgs__msg__DetectAndAvoidMostUrgent__FIELD_NAME__aircraft_dist[] = "aircraft_dist";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__DetectAndAvoidMostUrgent__FIELDS[] = {
  {
    {px4_msgs__msg__DetectAndAvoidMostUrgent__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__DetectAndAvoidMostUrgent__FIELD_NAME__unique_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__DetectAndAvoidMostUrgent__FIELD_NAME__unique_id_encoding, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__DetectAndAvoidMostUrgent__FIELD_NAME__has_action, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__DetectAndAvoidMostUrgent__FIELD_NAME__conflict_level, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__DetectAndAvoidMostUrgent__FIELD_NAME__aircraft_dist, 13, 13},
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
px4_msgs__msg__DetectAndAvoidMostUrgent__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__DetectAndAvoidMostUrgent__TYPE_NAME, 37, 37},
      {px4_msgs__msg__DetectAndAvoidMostUrgent__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Detect-and-avoid summary for the most urgent active conflict.\n"
  "#\n"
  "# Aggregated DAA status from navigator's `DetectAndAvoid` component.\n"
  "# It publishes the single active conflict that currently has the highest urgency\n"
  "# after the per-traffic conflict buffer has been updated.\n"
  "#\n"
  "# Unlike `detect_and_avoid`, this topic is not published for every processed\n"
  "# traffic report and does not include the detailed horizontal and vertical geometry.\n"
  "# It is the topic used for overall DAA status, automatic-action decisions, and\n"
  "# prearm checks.\n"
  "#\n"
  "# Published by: `navigator` (`DetectAndAvoid`)\n"
  "# Used by: `commander` DAA arming checks, logging, and tests\n"
  "\n"
  "uint8 UNIQUE_ID_ENCODING_ICAO = 0 # `unique_id` contains an ICAO address\n"
  "uint8 UNIQUE_ID_ENCODING_ADSB_CALLSIGN = 1 # `unique_id` contains an ADS-B callsign packed into a `uint64`\n"
  "uint8 UNIQUE_ID_ENCODING_UAS_ID = 2 # `unique_id` contains the reduced tail bytes of a UAS ID\n"
  "\n"
  "uint64 timestamp # [us] Time since system start\n"
  "uint64 unique_id # [-] Encoded identifier of the current most urgent traffic aircraft, selected in priority order: ICAO address, ADS-B callsign, then reduced UAS ID tail bytes\n"
  "uint8 unique_id_encoding # [-] Namespace used to decode `unique_id`\n"
  "\n"
  "bool has_action # [-] True if the configured DAA response for this most urgent conflict is stronger than Warn only\n"
  "uint8 conflict_level # [-] Conflict level of the current most urgent active conflict\n"
  "float32 aircraft_dist # [m] Approximate 3D range to the most urgent traffic aircraft (9999 when empty)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__DetectAndAvoidMostUrgent__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__DetectAndAvoidMostUrgent__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1516, 1516},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__DetectAndAvoidMostUrgent__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__DetectAndAvoidMostUrgent__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
