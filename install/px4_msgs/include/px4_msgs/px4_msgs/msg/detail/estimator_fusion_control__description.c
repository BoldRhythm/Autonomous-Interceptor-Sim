// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/EstimatorFusionControl.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/estimator_fusion_control__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__EstimatorFusionControl__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb2, 0x6a, 0x9a, 0xb0, 0x17, 0x66, 0xe5, 0x1f,
      0xfb, 0x0c, 0x3d, 0x71, 0xb0, 0x5a, 0x26, 0xd2,
      0xd0, 0xdc, 0x52, 0x43, 0x8e, 0xfc, 0xf5, 0xee,
      0x81, 0xdb, 0xe5, 0x21, 0x42, 0x2a, 0x57, 0xbe,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__EstimatorFusionControl__TYPE_NAME[] = "px4_msgs/msg/EstimatorFusionControl";

// Define type names, field names, and default values
static char px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__gps_intended[] = "gps_intended";
static char px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__of_intended[] = "of_intended";
static char px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__ev_intended[] = "ev_intended";
static char px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__agp_intended[] = "agp_intended";
static char px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__baro_intended[] = "baro_intended";
static char px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__rng_intended[] = "rng_intended";
static char px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__mag_intended[] = "mag_intended";
static char px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__aspd_intended[] = "aspd_intended";
static char px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__rngbcn_intended[] = "rngbcn_intended";
static char px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__gps_active[] = "gps_active";
static char px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__of_active[] = "of_active";
static char px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__ev_active[] = "ev_active";
static char px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__agp_active[] = "agp_active";
static char px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__baro_active[] = "baro_active";
static char px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__rng_active[] = "rng_active";
static char px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__mag_active[] = "mag_active";
static char px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__aspd_active[] = "aspd_active";
static char px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__rngbcn_active[] = "rngbcn_active";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__EstimatorFusionControl__FIELDS[] = {
  {
    {px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__gps_intended, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__of_intended, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__ev_intended, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__agp_intended, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__baro_intended, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__rng_intended, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__mag_intended, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__aspd_intended, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__rngbcn_intended, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__gps_active, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__of_active, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__ev_active, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__agp_active, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__baro_active, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__rng_active, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__mag_active, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__aspd_active, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__EstimatorFusionControl__FIELD_NAME__rngbcn_active, 13, 13},
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
px4_msgs__msg__EstimatorFusionControl__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__EstimatorFusionControl__TYPE_NAME, 35, 35},
      {px4_msgs__msg__EstimatorFusionControl__FIELDS, 19, 19},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 timestamp                # time since system start (microseconds)\n"
  "\n"
  "# sensor intended for fusion (enabled via EKF2_SENS_EN AND CTRL param != disabled)\n"
  "bool[2] gps_intended\n"
  "bool of_intended\n"
  "bool ev_intended\n"
  "bool[4] agp_intended\n"
  "bool baro_intended\n"
  "bool rng_intended\n"
  "bool mag_intended\n"
  "bool aspd_intended\n"
  "bool rngbcn_intended\n"
  "\n"
  "# whether the estimator is actively fusing data from each source\n"
  "bool[2] gps_active\n"
  "bool of_active\n"
  "bool ev_active\n"
  "bool[4] agp_active\n"
  "bool baro_active\n"
  "bool rng_active\n"
  "bool mag_active\n"
  "bool aspd_active\n"
  "bool rngbcn_active";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__EstimatorFusionControl__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__EstimatorFusionControl__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 547, 547},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__EstimatorFusionControl__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__EstimatorFusionControl__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
