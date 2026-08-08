// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/RegisterExtComponentRequest.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/register_ext_component_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__RegisterExtComponentRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8a, 0xd8, 0x89, 0x9b, 0x6f, 0x85, 0xe8, 0xba,
      0x01, 0x73, 0xa5, 0x0b, 0x1a, 0xfb, 0xf2, 0x8f,
      0x96, 0xe4, 0x6c, 0xa6, 0xc4, 0x47, 0x8d, 0x49,
      0xdb, 0x43, 0xe2, 0x2d, 0x01, 0xa6, 0xa6, 0x52,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__RegisterExtComponentRequest__TYPE_NAME[] = "px4_msgs/msg/RegisterExtComponentRequest";

// Define type names, field names, and default values
static char px4_msgs__msg__RegisterExtComponentRequest__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__RegisterExtComponentRequest__FIELD_NAME__request_id[] = "request_id";
static char px4_msgs__msg__RegisterExtComponentRequest__FIELD_NAME__name[] = "name";
static char px4_msgs__msg__RegisterExtComponentRequest__FIELD_NAME__px4_ros2_api_version[] = "px4_ros2_api_version";
static char px4_msgs__msg__RegisterExtComponentRequest__FIELD_NAME__register_arming_check[] = "register_arming_check";
static char px4_msgs__msg__RegisterExtComponentRequest__FIELD_NAME__register_mode[] = "register_mode";
static char px4_msgs__msg__RegisterExtComponentRequest__FIELD_NAME__register_mode_executor[] = "register_mode_executor";
static char px4_msgs__msg__RegisterExtComponentRequest__FIELD_NAME__enable_replace_internal_mode[] = "enable_replace_internal_mode";
static char px4_msgs__msg__RegisterExtComponentRequest__FIELD_NAME__replace_internal_mode[] = "replace_internal_mode";
static char px4_msgs__msg__RegisterExtComponentRequest__FIELD_NAME__activate_mode_immediately[] = "activate_mode_immediately";
static char px4_msgs__msg__RegisterExtComponentRequest__FIELD_NAME__not_user_selectable[] = "not_user_selectable";
static char px4_msgs__msg__RegisterExtComponentRequest__FIELD_NAME__request_offboard_setpoints[] = "request_offboard_setpoints";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__RegisterExtComponentRequest__FIELDS[] = {
  {
    {px4_msgs__msg__RegisterExtComponentRequest__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RegisterExtComponentRequest__FIELD_NAME__request_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RegisterExtComponentRequest__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      25,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RegisterExtComponentRequest__FIELD_NAME__px4_ros2_api_version, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RegisterExtComponentRequest__FIELD_NAME__register_arming_check, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RegisterExtComponentRequest__FIELD_NAME__register_mode, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RegisterExtComponentRequest__FIELD_NAME__register_mode_executor, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RegisterExtComponentRequest__FIELD_NAME__enable_replace_internal_mode, 28, 28},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RegisterExtComponentRequest__FIELD_NAME__replace_internal_mode, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RegisterExtComponentRequest__FIELD_NAME__activate_mode_immediately, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RegisterExtComponentRequest__FIELD_NAME__not_user_selectable, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__RegisterExtComponentRequest__FIELD_NAME__request_offboard_setpoints, 26, 26},
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
px4_msgs__msg__RegisterExtComponentRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__RegisterExtComponentRequest__TYPE_NAME, 40, 40},
      {px4_msgs__msg__RegisterExtComponentRequest__FIELDS, 12, 12},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Request to register an external component\n"
  "\n"
  "uint32 MESSAGE_VERSION = 2\n"
  "\n"
  "uint64 timestamp # time since system start (microseconds)\n"
  "\n"
  "uint64 request_id                  # ID, set this to a random value\n"
  "char[25] name                      # either the requested mode name, or component name\n"
  "\n"
  "uint16 LATEST_PX4_ROS2_API_VERSION = 2 # API version compatibility. Increase this on a breaking semantic change. Changes to any message field are detected separately and do not require an API version change.\n"
  "\n"
  "uint16 px4_ros2_api_version   # Set to LATEST_PX4_ROS2_API_VERSION\n"
  "\n"
  "# Components to be registered\n"
  "bool register_arming_check\n"
  "bool register_mode                 # registering a mode also requires arming_check to be set\n"
  "bool register_mode_executor        # registering an executor also requires a mode to be registered (which is the owned mode by the executor)\n"
  "\n"
  "bool enable_replace_internal_mode  # set to true if an internal mode should be replaced\n"
  "uint8 replace_internal_mode        # vehicle_status::NAVIGATION_STATE_*\n"
  "bool activate_mode_immediately     # switch to the registered mode (can only be set in combination with an executor)\n"
  "bool not_user_selectable           # mode cannot be selected by the user\n"
  "bool request_offboard_setpoints    # set to true if the registered mode wants to receive offboard trajectory setpoints via MAVLink\n"
  "\n"
  "uint8 ORB_QUEUE_LENGTH = 2";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__RegisterExtComponentRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__RegisterExtComponentRequest__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1366, 1366},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__RegisterExtComponentRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__RegisterExtComponentRequest__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
