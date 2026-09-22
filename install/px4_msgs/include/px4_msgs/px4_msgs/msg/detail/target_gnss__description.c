// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/TargetGnss.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/target_gnss__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__TargetGnss__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1e, 0x0d, 0xbf, 0x0e, 0xbe, 0x06, 0xea, 0xda,
      0xed, 0x40, 0xd7, 0x78, 0xd4, 0x05, 0xfc, 0xa8,
      0x0c, 0x90, 0xea, 0x17, 0xda, 0xab, 0x81, 0x06,
      0xb7, 0x23, 0x36, 0x8d, 0xfa, 0xb3, 0x54, 0xaa,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__TargetGnss__TYPE_NAME[] = "px4_msgs/msg/TargetGnss";

// Define type names, field names, and default values
static char px4_msgs__msg__TargetGnss__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__TargetGnss__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4_msgs__msg__TargetGnss__FIELD_NAME__latitude_deg[] = "latitude_deg";
static char px4_msgs__msg__TargetGnss__FIELD_NAME__longitude_deg[] = "longitude_deg";
static char px4_msgs__msg__TargetGnss__FIELD_NAME__altitude_msl_m[] = "altitude_msl_m";
static char px4_msgs__msg__TargetGnss__FIELD_NAME__eph[] = "eph";
static char px4_msgs__msg__TargetGnss__FIELD_NAME__epv[] = "epv";
static char px4_msgs__msg__TargetGnss__FIELD_NAME__abs_pos_updated[] = "abs_pos_updated";
static char px4_msgs__msg__TargetGnss__FIELD_NAME__vel_n_m_s[] = "vel_n_m_s";
static char px4_msgs__msg__TargetGnss__FIELD_NAME__vel_e_m_s[] = "vel_e_m_s";
static char px4_msgs__msg__TargetGnss__FIELD_NAME__vel_d_m_s[] = "vel_d_m_s";
static char px4_msgs__msg__TargetGnss__FIELD_NAME__s_acc_m_s[] = "s_acc_m_s";
static char px4_msgs__msg__TargetGnss__FIELD_NAME__vel_ned_updated[] = "vel_ned_updated";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__TargetGnss__FIELDS[] = {
  {
    {px4_msgs__msg__TargetGnss__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__TargetGnss__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__TargetGnss__FIELD_NAME__latitude_deg, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__TargetGnss__FIELD_NAME__longitude_deg, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__TargetGnss__FIELD_NAME__altitude_msl_m, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__TargetGnss__FIELD_NAME__eph, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__TargetGnss__FIELD_NAME__epv, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__TargetGnss__FIELD_NAME__abs_pos_updated, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__TargetGnss__FIELD_NAME__vel_n_m_s, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__TargetGnss__FIELD_NAME__vel_e_m_s, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__TargetGnss__FIELD_NAME__vel_d_m_s, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__TargetGnss__FIELD_NAME__s_acc_m_s, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__TargetGnss__FIELD_NAME__vel_ned_updated, 15, 15},
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
px4_msgs__msg__TargetGnss__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__TargetGnss__TYPE_NAME, 23, 23},
      {px4_msgs__msg__TargetGnss__FIELDS, 13, 13},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Landing target GNSS position in WGS84 coordinates, and optional NED velocity, from a target-mounted receiver.\n"
  "#\n"
  "# Published by: mavlink_receiver (when decoding TARGET_ABSOLUTE with position/velocity capability bits set).\n"
  "# Subscribed by: vision_target_estimator (VTEPosition).\n"
  "#\n"
  "# abs_pos_updated / vel_ned_updated tell the estimator which fields in this sample are fresh.\n"
  "\n"
  "uint64 timestamp # [us] Time since system start\n"
  "uint64 timestamp_sample # [us] Timestamp of the raw observation\n"
  "\n"
  "float64 latitude_deg # [deg] Latitude, allows centimeter level RTK precision\n"
  "float64 longitude_deg # [deg] Longitude, allows centimeter level RTK precision\n"
  "float32 altitude_msl_m # [m] Altitude above MSL\n"
  "\n"
  "float32 eph # [m] GNSS horizontal position accuracy\n"
  "float32 epv # [m] GNSS vertical position accuracy\n"
  "\n"
  "bool abs_pos_updated # True if WGS84 position is updated\n"
  "\n"
  "float32 vel_n_m_s # [m/s] GNSS North velocity\n"
  "float32 vel_e_m_s # [m/s] GNSS East velocity\n"
  "float32 vel_d_m_s # [m/s] GNSS Down velocity\n"
  "\n"
  "float32 s_acc_m_s # [m/s] GNSS speed accuracy estimate\n"
  "\n"
  "bool vel_ned_updated # True if NED velocity is updated";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__TargetGnss__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__TargetGnss__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1103, 1103},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__TargetGnss__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__TargetGnss__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
