// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/RangingBeacon.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/ranging_beacon__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__RangingBeacon__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2e, 0x04, 0xfb, 0x79, 0x1d, 0x84, 0xe2, 0x23,
      0xb4, 0x3f, 0x81, 0xf3, 0xb6, 0xe3, 0x19, 0x91,
      0x3c, 0x34, 0x66, 0x34, 0x7d, 0xd4, 0xc6, 0x83,
      0x2c, 0x43, 0x63, 0x63, 0x50, 0x51, 0x6b, 0x71,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__RangingBeacon__TYPE_NAME[] = "px4_msgs/msg/RangingBeacon";

// Define type names, field names, and default values
static char px4_msgs__msg__RangingBeacon__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__RangingBeacon__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4_msgs__msg__RangingBeacon__FIELD_NAME__beacon_id[] = "beacon_id";
static char px4_msgs__msg__RangingBeacon__FIELD_NAME__range[] = "range";
static char px4_msgs__msg__RangingBeacon__FIELD_NAME__lat[] = "lat";
static char px4_msgs__msg__RangingBeacon__FIELD_NAME__lon[] = "lon";
static char px4_msgs__msg__RangingBeacon__FIELD_NAME__alt[] = "alt";
static char px4_msgs__msg__RangingBeacon__FIELD_NAME__alt_type[] = "alt_type";
static char px4_msgs__msg__RangingBeacon__FIELD_NAME__hacc[] = "hacc";
static char px4_msgs__msg__RangingBeacon__FIELD_NAME__vacc[] = "vacc";
static char px4_msgs__msg__RangingBeacon__FIELD_NAME__sequence_nr[] = "sequence_nr";
static char px4_msgs__msg__RangingBeacon__FIELD_NAME__status[] = "status";
static char px4_msgs__msg__RangingBeacon__FIELD_NAME__carrier_freq[] = "carrier_freq";
static char px4_msgs__msg__RangingBeacon__FIELD_NAME__range_accuracy[] = "range_accuracy";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__RangingBeacon__FIELDS[] = {
  {
    {px4_msgs__msg__RangingBeacon__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RangingBeacon__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RangingBeacon__FIELD_NAME__beacon_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RangingBeacon__FIELD_NAME__range, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RangingBeacon__FIELD_NAME__lat, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RangingBeacon__FIELD_NAME__lon, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RangingBeacon__FIELD_NAME__alt, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RangingBeacon__FIELD_NAME__alt_type, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RangingBeacon__FIELD_NAME__hacc, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RangingBeacon__FIELD_NAME__vacc, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RangingBeacon__FIELD_NAME__sequence_nr, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RangingBeacon__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RangingBeacon__FIELD_NAME__carrier_freq, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RangingBeacon__FIELD_NAME__range_accuracy, 14, 14},
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
px4_msgs__msg__RangingBeacon__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__RangingBeacon__TYPE_NAME, 26, 26},
      {px4_msgs__msg__RangingBeacon__FIELDS, 14, 14},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Ranging beacon measurement data (e.g. LoRa, UWB)\n"
  "\n"
  "uint64 timestamp                # [us] time since system start\n"
  "uint64 timestamp_sample         # [us] the timestamp of the raw data\n"
  "uint8 beacon_id\n"
  "float32 range                   # [m] Range measurement\n"
  "\n"
  "float64 lat                     # [deg] Latitude\n"
  "float64 lon                     # [deg] Longitude\n"
  "float32 alt                     # [m] Beacon altitude (frame defined in alt_type)\n"
  "uint8 alt_type                  # [@enum ALT_TYPE] Altitude frame for alt field\n"
  "uint8 ALT_TYPE_WGS84 = 0        # Altitude above WGS84 ellipsoid\n"
  "uint8 ALT_TYPE_MSL   = 1        # Altitude above Mean Sea Level (AMSL)\n"
  "\n"
  "float32 hacc                    # [m] Groundbeacon horizontal accuracy\n"
  "float32 vacc                    # [m] Groundbeacon vertical accuracy\n"
  "\n"
  "uint8 sequence_nr\n"
  "uint8 status\n"
  "uint16 carrier_freq             # [MHz] Carrier frequency\n"
  "float32 range_accuracy          # [m] Range accuracy estimate\n"
  "\n"
  "\n"
  "# TOPICS ranging_beacon";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__RangingBeacon__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__RangingBeacon__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 973, 973},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__RangingBeacon__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__RangingBeacon__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
