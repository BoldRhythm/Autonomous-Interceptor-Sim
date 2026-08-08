// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/OpenDroneIdBasicId.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/open_drone_id_basic_id__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__OpenDroneIdBasicId__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x56, 0x44, 0x65, 0xa0, 0x12, 0x4d, 0xef, 0x95,
      0x96, 0x00, 0xe7, 0xe7, 0x69, 0x32, 0xe4, 0x35,
      0xca, 0xf2, 0x77, 0x63, 0x47, 0xb9, 0xe2, 0x2c,
      0x9d, 0xb6, 0xa5, 0xcf, 0x77, 0x86, 0xf3, 0x3e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__OpenDroneIdBasicId__TYPE_NAME[] = "px4_msgs/msg/OpenDroneIdBasicId";

// Define type names, field names, and default values
static char px4_msgs__msg__OpenDroneIdBasicId__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__OpenDroneIdBasicId__FIELD_NAME__id_or_mac[] = "id_or_mac";
static char px4_msgs__msg__OpenDroneIdBasicId__FIELD_NAME__id_type[] = "id_type";
static char px4_msgs__msg__OpenDroneIdBasicId__FIELD_NAME__ua_type[] = "ua_type";
static char px4_msgs__msg__OpenDroneIdBasicId__FIELD_NAME__uas_id[] = "uas_id";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__OpenDroneIdBasicId__FIELDS[] = {
  {
    {px4_msgs__msg__OpenDroneIdBasicId__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__OpenDroneIdBasicId__FIELD_NAME__id_or_mac, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      20,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__OpenDroneIdBasicId__FIELD_NAME__id_type, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__OpenDroneIdBasicId__FIELD_NAME__ua_type, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__OpenDroneIdBasicId__FIELD_NAME__uas_id, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      20,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4_msgs__msg__OpenDroneIdBasicId__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__OpenDroneIdBasicId__TYPE_NAME, 31, 31},
      {px4_msgs__msg__OpenDroneIdBasicId__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp\n"
  "uint8[20] id_or_mac\\t# Only used for drone ID data received from other UAs, no null termination, null filled if shorter\n"
  "uint8 id_type\\t\\t# MAV_ODID_ID_TYPE: indicates the format for the uas_id field\n"
  "uint8 ua_type\\t\\t# MAV_ODID_UA_TYPE: indicates the type of UA (Unmanned Aircraft)\n"
  "uint8[20] uas_id\\t# UAS (Unmanned Aircraft System) ID following the format specified by id_type, no null termination, null filled if shorter";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__OpenDroneIdBasicId__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__OpenDroneIdBasicId__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 433, 433},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__OpenDroneIdBasicId__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__OpenDroneIdBasicId__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
