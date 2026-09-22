// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/VteAidSource3d.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/vte_aid_source3d__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__VteAidSource3d__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf8, 0x90, 0xba, 0x39, 0x6f, 0x2f, 0x0a, 0x61,
      0xef, 0x87, 0x79, 0xed, 0xce, 0x01, 0x6d, 0x7d,
      0xca, 0x3b, 0x23, 0x62, 0xd5, 0x45, 0x90, 0xa1,
      0xea, 0xcf, 0x20, 0x8d, 0xb1, 0x96, 0xec, 0xdb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__VteAidSource3d__TYPE_NAME[] = "px4_msgs/msg/VteAidSource3d";

// Define type names, field names, and default values
static char px4_msgs__msg__VteAidSource3d__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__VteAidSource3d__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4_msgs__msg__VteAidSource3d__FIELD_NAME__time_last_predict[] = "time_last_predict";
static char px4_msgs__msg__VteAidSource3d__FIELD_NAME__observation[] = "observation";
static char px4_msgs__msg__VteAidSource3d__FIELD_NAME__observation_variance[] = "observation_variance";
static char px4_msgs__msg__VteAidSource3d__FIELD_NAME__innovation[] = "innovation";
static char px4_msgs__msg__VteAidSource3d__FIELD_NAME__innovation_variance[] = "innovation_variance";
static char px4_msgs__msg__VteAidSource3d__FIELD_NAME__test_ratio[] = "test_ratio";
static char px4_msgs__msg__VteAidSource3d__FIELD_NAME__fusion_status[] = "fusion_status";
static char px4_msgs__msg__VteAidSource3d__FIELD_NAME__time_since_meas_ms[] = "time_since_meas_ms";
static char px4_msgs__msg__VteAidSource3d__FIELD_NAME__history_steps[] = "history_steps";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__VteAidSource3d__FIELDS[] = {
  {
    {px4_msgs__msg__VteAidSource3d__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VteAidSource3d__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VteAidSource3d__FIELD_NAME__time_last_predict, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VteAidSource3d__FIELD_NAME__observation, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VteAidSource3d__FIELD_NAME__observation_variance, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VteAidSource3d__FIELD_NAME__innovation, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VteAidSource3d__FIELD_NAME__innovation_variance, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VteAidSource3d__FIELD_NAME__test_ratio, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VteAidSource3d__FIELD_NAME__fusion_status, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VteAidSource3d__FIELD_NAME__time_since_meas_ms, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__VteAidSource3d__FIELD_NAME__history_steps, 13, 13},
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
px4_msgs__msg__VteAidSource3d__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__VteAidSource3d__TYPE_NAME, 27, 27},
      {px4_msgs__msg__VteAidSource3d__FIELDS, 11, 11},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Vision Target Estimator 3D fusion aid-source diagnostics, one fusion_status per NED axis.\n"
  "#\n"
  "# Published by: vision_target_estimator (VTEPosition) on every fusion attempt, including rejected ones.\n"
  "# Subscribed by: logger only. Inspect observation, innovation, test_ratio, and per-axis fusion_status to debug why a measurement was or was not fused.\n"
  "\n"
  "uint64 timestamp # [us] Time since system start\n"
  "uint64 timestamp_sample # [us] Timestamp of the raw observation\n"
  "uint64 time_last_predict # [us] Timestamp of last filter prediction\n"
  "\n"
  "# Observation & Innovation\n"
  "float32[3] observation # [-] [@frame NED] Sensor observation attempted to be fused\n"
  "float32[3] observation_variance # [-] [@frame NED] Variance of the observation attempted to be fused\n"
  "\n"
  "float32[3] innovation # [-] [@frame NED] Kalman Filter innovation (y = z - Hx)\n"
  "float32[3] innovation_variance # [-] [@frame NED] Kalman Filter variance of the innovation\n"
  "\n"
  "float32[3] test_ratio # [-] Normalized innovation squared (NIS)\n"
  "\n"
  "uint8[3] fusion_status # [@enum VTE_FUSION_STATUS] Fusion status code per axis\n"
  "uint8 STATUS_IDLE = 0 # No fusion attempted yet\n"
  "uint8 STATUS_FUSED_CURRENT = 1 # Fused immediately (low latency)\n"
  "uint8 STATUS_FUSED_OOSM = 2 # Fused via history buffer\n"
  "uint8 STATUS_REJECT_NIS = 3 # Rejected by Normalized Innovation Squared check\n"
  "uint8 STATUS_REJECT_COV = 4 # Rejected due to invalid/infinite covariance or numerical error\n"
  "uint8 STATUS_REJECT_TOO_OLD = 5 # Rejected: older than buffer limit (kOosmMaxTimeUs) or oldest sample\n"
  "uint8 STATUS_REJECT_TOO_NEW = 6 # Rejected: timestamp in the future (beyond tolerance)\n"
  "uint8 STATUS_REJECT_STALE = 7 # Rejected: history was reset due to staleness/discontinuity\n"
  "uint8 STATUS_REJECT_EMPTY = 8 # Rejected: history buffer not yet populated\n"
  "\n"
  "# OOSM Diagnostics (Shared across axes)\n"
  "float32 time_since_meas_ms # [ms] (now - timestamp_sample)\n"
  "uint8 history_steps # [-] Number of steps replayed in OOSM (0 if current or failed)\n"
  "\n"
  "# TOPICS vte_aid_gps_pos_target vte_aid_gps_pos_mission vte_aid_gps_vel_target vte_aid_gps_vel_uav\n"
  "# TOPICS vte_aid_fiducial_marker";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__VteAidSource3d__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__VteAidSource3d__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2069, 2069},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__VteAidSource3d__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__VteAidSource3d__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
