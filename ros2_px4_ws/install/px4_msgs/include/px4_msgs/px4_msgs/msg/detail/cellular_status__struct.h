// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/CellularStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/cellular_status.h"


#ifndef PX4_MSGS__MSG__DETAIL__CELLULAR_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__CELLULAR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'STATUS_FLAG_UNKNOWN'.
/**
  * State unknown or not reportable
 */
enum
{
  px4_msgs__msg__CellularStatus__STATUS_FLAG_UNKNOWN = 0
};

/// Constant 'STATUS_FLAG_FAILED'.
/**
  * Modem is unusable
 */
enum
{
  px4_msgs__msg__CellularStatus__STATUS_FLAG_FAILED = 1
};

/// Constant 'STATUS_FLAG_INITIALIZING'.
/**
  * Modem is being initialized
 */
enum
{
  px4_msgs__msg__CellularStatus__STATUS_FLAG_INITIALIZING = 2
};

/// Constant 'STATUS_FLAG_LOCKED'.
/**
  * Modem is locked
 */
enum
{
  px4_msgs__msg__CellularStatus__STATUS_FLAG_LOCKED = 3
};

/// Constant 'STATUS_FLAG_DISABLED'.
/**
  * Modem is not enabled and is powered down
 */
enum
{
  px4_msgs__msg__CellularStatus__STATUS_FLAG_DISABLED = 4
};

/// Constant 'STATUS_FLAG_DISABLING'.
/**
  * Modem is currently transitioning to the STATUS_FLAG_DISABLED state
 */
enum
{
  px4_msgs__msg__CellularStatus__STATUS_FLAG_DISABLING = 5
};

/// Constant 'STATUS_FLAG_ENABLING'.
/**
  * Modem is currently transitioning to the STATUS_FLAG_ENABLED state
 */
enum
{
  px4_msgs__msg__CellularStatus__STATUS_FLAG_ENABLING = 6
};

/// Constant 'STATUS_FLAG_ENABLED'.
/**
  * Modem is enabled and powered on but not registered with a network provider and not available for data connections
 */
enum
{
  px4_msgs__msg__CellularStatus__STATUS_FLAG_ENABLED = 7
};

/// Constant 'STATUS_FLAG_SEARCHING'.
/**
  * Modem is searching for a network provider to register
 */
enum
{
  px4_msgs__msg__CellularStatus__STATUS_FLAG_SEARCHING = 8
};

/// Constant 'STATUS_FLAG_REGISTERED'.
/**
  * Modem is registered with a network provider, and data connections and messaging may be available for use
 */
enum
{
  px4_msgs__msg__CellularStatus__STATUS_FLAG_REGISTERED = 9
};

/// Constant 'STATUS_FLAG_DISCONNECTING'.
/**
  * Modem is disconnecting and deactivating the last active packet data bearer. This state will not be entered if more than one packet data bearer is active and one of the active bearers is deactivated
 */
enum
{
  px4_msgs__msg__CellularStatus__STATUS_FLAG_DISCONNECTING = 10
};

/// Constant 'STATUS_FLAG_CONNECTING'.
/**
  * Modem is activating and connecting the first packet data bearer. Subsequent bearer activations when another bearer is already active do not cause this state to be entered
 */
enum
{
  px4_msgs__msg__CellularStatus__STATUS_FLAG_CONNECTING = 11
};

/// Constant 'STATUS_FLAG_CONNECTED'.
/**
  * One or more packet data bearers is active and connected
 */
enum
{
  px4_msgs__msg__CellularStatus__STATUS_FLAG_CONNECTED = 12
};

/// Constant 'FAILURE_REASON_NONE'.
/**
  * No error
 */
enum
{
  px4_msgs__msg__CellularStatus__FAILURE_REASON_NONE = 0
};

/// Constant 'FAILURE_REASON_UNKNOWN'.
/**
  * Error state is unknown
 */
enum
{
  px4_msgs__msg__CellularStatus__FAILURE_REASON_UNKNOWN = 1
};

/// Constant 'FAILURE_REASON_SIM_MISSING'.
/**
  * SIM is required for the modem but missing
 */
enum
{
  px4_msgs__msg__CellularStatus__FAILURE_REASON_SIM_MISSING = 2
};

/// Constant 'FAILURE_REASON_SIM_ERROR'.
/**
  * SIM is available, but not usable for connection
 */
enum
{
  px4_msgs__msg__CellularStatus__FAILURE_REASON_SIM_ERROR = 3
};

/// Constant 'CELLULAR_NETWORK_RADIO_TYPE_NONE'.
/**
  * None
 */
enum
{
  px4_msgs__msg__CellularStatus__CELLULAR_NETWORK_RADIO_TYPE_NONE = 0
};

/// Constant 'CELLULAR_NETWORK_RADIO_TYPE_GSM'.
/**
  * GSM
 */
enum
{
  px4_msgs__msg__CellularStatus__CELLULAR_NETWORK_RADIO_TYPE_GSM = 1
};

/// Constant 'CELLULAR_NETWORK_RADIO_TYPE_CDMA'.
/**
  * CDMA
 */
enum
{
  px4_msgs__msg__CellularStatus__CELLULAR_NETWORK_RADIO_TYPE_CDMA = 2
};

/// Constant 'CELLULAR_NETWORK_RADIO_TYPE_WCDMA'.
/**
  * WCDMA
 */
enum
{
  px4_msgs__msg__CellularStatus__CELLULAR_NETWORK_RADIO_TYPE_WCDMA = 3
};

/// Constant 'CELLULAR_NETWORK_RADIO_TYPE_LTE'.
/**
  * LTE
 */
enum
{
  px4_msgs__msg__CellularStatus__CELLULAR_NETWORK_RADIO_TYPE_LTE = 4
};

/// Struct defined in msg/CellularStatus in the package px4_msgs.
/**
  * Cellular status
  *
  * This is currently used only for logging cell status from MAVLink 1:1.
 */
typedef struct px4_msgs__msg__CellularStatus
{
  /// Time since system start
  uint64_t timestamp;
  /// Status
  uint8_t status;
  /// Failure reason
  uint8_t failure_reason;
  /// Cellular network radio type
  uint8_t type;
  /// [%] [@invalid UINT8_MAX] Cellular network signal quality in percent. May be used for RSSI
  uint8_t quality;
  /// Mobile country code
  uint16_t mcc;
  /// Mobile network code
  uint16_t mnc;
  /// Location area code
  uint16_t lac;
  /// Cellular instance number. Indexed from 1. A value of 0 indicates the sender does not support reporting of multiple modems
  uint8_t id;
  /// [KiB/s] [@invalid 0] Download rate
  uint32_t link_tx_rate;
  /// [KiB/s] [@invalid 0] Upload rate
  uint32_t link_rx_rate;
  /// ID of the currently connected cell tower. Must be NULL terminated if the length is less than 9 human-readable characters, and without NULL termination character if the length is exactly 9 characters
  uint8_t cell_tower_id[9];
  /// [-] [@invalid 0] LTE frequency band number
  uint8_t band_number;
  /// [MHz] [@invalid 0] LTE radio frequency
  float band_frequency;
  /// Channel Number (CN), Absolute radio-frequency (ARFCN) / E-UTRA (EARFCN) / UTRA (UARFCN) / New radio (NR_CH)
  uint32_t channel_number;
  /// [dBm] [@invalid 0] Receiver signal level. On 3G is Received Signal Code Power (RSCP). On LTE Reference Signal Received Power (RSRP). On 5G is New Radio Reference Signal Received Power (NR_RSRP)
  float rx_level;
  /// [dBm] [@invalid 0] Transmitter signal absolute level
  float tx_level;
  /// [dBm] [@invalid 0] Received signal quality. On 3G is Receiver Quality (RxQual). On LTE is Reference Signal Received Quality (RSRQ). On 5G is New Radio Reference Signal Received Quality (NR_RSRQ)
  float rx_quality;
  /// [dB] [@invalid 0] Signal to Interference plus Noise Ratio
  float sinr;
} px4_msgs__msg__CellularStatus;

// Struct for a sequence of px4_msgs__msg__CellularStatus.
typedef struct px4_msgs__msg__CellularStatus__Sequence
{
  px4_msgs__msg__CellularStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__CellularStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__CELLULAR_STATUS__STRUCT_H_
