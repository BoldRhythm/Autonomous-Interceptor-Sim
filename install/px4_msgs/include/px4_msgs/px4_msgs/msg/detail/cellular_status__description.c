// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/CellularStatus.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/cellular_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__CellularStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd1, 0x00, 0x6e, 0xc4, 0x4b, 0x41, 0x8c, 0x77,
      0x33, 0x6c, 0x06, 0xd7, 0xc3, 0x42, 0xf5, 0x66,
      0xdd, 0x02, 0x27, 0x3a, 0xd7, 0xba, 0x6a, 0xa3,
      0x4a, 0xcd, 0x38, 0x6a, 0x35, 0x8c, 0x96, 0xdc,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__CellularStatus__TYPE_NAME[] = "px4_msgs/msg/CellularStatus";

// Define type names, field names, and default values
static char px4_msgs__msg__CellularStatus__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__CellularStatus__FIELD_NAME__status[] = "status";
static char px4_msgs__msg__CellularStatus__FIELD_NAME__failure_reason[] = "failure_reason";
static char px4_msgs__msg__CellularStatus__FIELD_NAME__type[] = "type";
static char px4_msgs__msg__CellularStatus__FIELD_NAME__quality[] = "quality";
static char px4_msgs__msg__CellularStatus__FIELD_NAME__mcc[] = "mcc";
static char px4_msgs__msg__CellularStatus__FIELD_NAME__mnc[] = "mnc";
static char px4_msgs__msg__CellularStatus__FIELD_NAME__lac[] = "lac";
static char px4_msgs__msg__CellularStatus__FIELD_NAME__id[] = "id";
static char px4_msgs__msg__CellularStatus__FIELD_NAME__link_tx_rate[] = "link_tx_rate";
static char px4_msgs__msg__CellularStatus__FIELD_NAME__link_rx_rate[] = "link_rx_rate";
static char px4_msgs__msg__CellularStatus__FIELD_NAME__cell_tower_id[] = "cell_tower_id";
static char px4_msgs__msg__CellularStatus__FIELD_NAME__band_number[] = "band_number";
static char px4_msgs__msg__CellularStatus__FIELD_NAME__band_frequency[] = "band_frequency";
static char px4_msgs__msg__CellularStatus__FIELD_NAME__channel_number[] = "channel_number";
static char px4_msgs__msg__CellularStatus__FIELD_NAME__rx_level[] = "rx_level";
static char px4_msgs__msg__CellularStatus__FIELD_NAME__tx_level[] = "tx_level";
static char px4_msgs__msg__CellularStatus__FIELD_NAME__rx_quality[] = "rx_quality";
static char px4_msgs__msg__CellularStatus__FIELD_NAME__sinr[] = "sinr";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__CellularStatus__FIELDS[] = {
  {
    {px4_msgs__msg__CellularStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__CellularStatus__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__CellularStatus__FIELD_NAME__failure_reason, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__CellularStatus__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__CellularStatus__FIELD_NAME__quality, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__CellularStatus__FIELD_NAME__mcc, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__CellularStatus__FIELD_NAME__mnc, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__CellularStatus__FIELD_NAME__lac, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__CellularStatus__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__CellularStatus__FIELD_NAME__link_tx_rate, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__CellularStatus__FIELD_NAME__link_rx_rate, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__CellularStatus__FIELD_NAME__cell_tower_id, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      9,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__CellularStatus__FIELD_NAME__band_number, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__CellularStatus__FIELD_NAME__band_frequency, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__CellularStatus__FIELD_NAME__channel_number, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__CellularStatus__FIELD_NAME__rx_level, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__CellularStatus__FIELD_NAME__tx_level, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__CellularStatus__FIELD_NAME__rx_quality, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__CellularStatus__FIELD_NAME__sinr, 4, 4},
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
px4_msgs__msg__CellularStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__CellularStatus__TYPE_NAME, 27, 27},
      {px4_msgs__msg__CellularStatus__FIELDS, 19, 19},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Cellular status\n"
  "#\n"
  "# This is currently used only for logging cell status from MAVLink 1:1.\n"
  "\n"
  "uint64 timestamp # [us] Time since system start\n"
  "\n"
  "uint8 status # [@enum STATUS_FLAG] Status\n"
  "uint8 STATUS_FLAG_UNKNOWN = 0 # State unknown or not reportable\n"
  "uint8 STATUS_FLAG_FAILED = 1 # Modem is unusable\n"
  "uint8 STATUS_FLAG_INITIALIZING = 2 # Modem is being initialized\n"
  "uint8 STATUS_FLAG_LOCKED = 3 # Modem is locked\n"
  "uint8 STATUS_FLAG_DISABLED = 4 # Modem is not enabled and is powered down\n"
  "uint8 STATUS_FLAG_DISABLING = 5 # Modem is currently transitioning to the STATUS_FLAG_DISABLED state\n"
  "uint8 STATUS_FLAG_ENABLING = 6 # Modem is currently transitioning to the STATUS_FLAG_ENABLED state\n"
  "uint8 STATUS_FLAG_ENABLED = 7 # Modem is enabled and powered on but not registered with a network provider and not available for data connections\n"
  "uint8 STATUS_FLAG_SEARCHING = 8 # Modem is searching for a network provider to register\n"
  "uint8 STATUS_FLAG_REGISTERED = 9 # Modem is registered with a network provider, and data connections and messaging may be available for use\n"
  "uint8 STATUS_FLAG_DISCONNECTING = 10 # Modem is disconnecting and deactivating the last active packet data bearer. This state will not be entered if more than one packet data bearer is active and one of the active bearers is deactivated\n"
  "uint8 STATUS_FLAG_CONNECTING = 11 # Modem is activating and connecting the first packet data bearer. Subsequent bearer activations when another bearer is already active do not cause this state to be entered\n"
  "uint8 STATUS_FLAG_CONNECTED = 12 # One or more packet data bearers is active and connected\n"
  "\n"
  "uint8 failure_reason # [@enum FAILURE_REASON] Failure reason\n"
  "uint8 FAILURE_REASON_NONE = 0 # No error\n"
  "uint8 FAILURE_REASON_UNKNOWN = 1 # Error state is unknown\n"
  "uint8 FAILURE_REASON_SIM_MISSING = 2 # SIM is required for the modem but missing\n"
  "uint8 FAILURE_REASON_SIM_ERROR = 3 # SIM is available, but not usable for connection\n"
  "\n"
  "uint8 type # [@enum CELLULAR_NETWORK_RADIO_TYPE] Cellular network radio type\n"
  "uint8 CELLULAR_NETWORK_RADIO_TYPE_NONE = 0 # None\n"
  "uint8 CELLULAR_NETWORK_RADIO_TYPE_GSM = 1 # GSM\n"
  "uint8 CELLULAR_NETWORK_RADIO_TYPE_CDMA = 2 # CDMA\n"
  "uint8 CELLULAR_NETWORK_RADIO_TYPE_WCDMA = 3 # WCDMA\n"
  "uint8 CELLULAR_NETWORK_RADIO_TYPE_LTE = 4 # LTE\n"
  "\n"
  "uint8 quality # [%] [@invalid UINT8_MAX] Cellular network signal quality in percent. May be used for RSSI\n"
  "uint16 mcc # [@invalid UINT16_MAX] Mobile country code\n"
  "uint16 mnc # [@invalid UINT16_MAX] Mobile network code\n"
  "uint16 lac # [@invalid 0] Location area code\n"
  "\n"
  "uint8 id # [-] Cellular instance number. Indexed from 1. A value of 0 indicates the sender does not support reporting of multiple modems\n"
  "uint32 link_tx_rate # [KiB/s] [@invalid 0] Download rate\n"
  "uint32 link_rx_rate # [KiB/s] [@invalid 0] Upload rate\n"
  "char[9] cell_tower_id # [@invalid 0] ID of the currently connected cell tower. Must be NULL terminated if the length is less than 9 human-readable characters, and without NULL termination character if the length is exactly 9 characters\n"
  "uint8 band_number # [-] [@invalid 0] LTE frequency band number\n"
  "float32 band_frequency # [MHz] [@invalid 0] LTE radio frequency\n"
  "uint32 channel_number # [@invalid 0] Channel Number (CN), Absolute radio-frequency (ARFCN) / E-UTRA (EARFCN) / UTRA (UARFCN) / New radio (NR_CH)\n"
  "float32 rx_level # [dBm] [@invalid 0] Receiver signal level. On 3G is Received Signal Code Power (RSCP). On LTE Reference Signal Received Power (RSRP). On 5G is New Radio Reference Signal Received Power (NR_RSRP)\n"
  "float32 tx_level # [dBm] [@invalid 0] Transmitter signal absolute level\n"
  "float32 rx_quality # [dBm] [@invalid 0] Received signal quality. On 3G is Receiver Quality (RxQual). On LTE is Reference Signal Received Quality (RSRQ). On 5G is New Radio Reference Signal Received Quality (NR_RSRQ)\n"
  "float32 sinr # [dB] [@invalid 0] Signal to Interference plus Noise Ratio";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__CellularStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__CellularStatus__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 3838, 3838},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__CellularStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__CellularStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
