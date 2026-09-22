// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/CellularStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/cellular_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__CellularStatus__init(px4_msgs__msg__CellularStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // status
  // failure_reason
  // type
  // quality
  // mcc
  // mnc
  // lac
  // id
  // link_tx_rate
  // link_rx_rate
  // cell_tower_id
  // band_number
  // band_frequency
  // channel_number
  // rx_level
  // tx_level
  // rx_quality
  // sinr
  return true;
}

void
px4_msgs__msg__CellularStatus__fini(px4_msgs__msg__CellularStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // status
  // failure_reason
  // type
  // quality
  // mcc
  // mnc
  // lac
  // id
  // link_tx_rate
  // link_rx_rate
  // cell_tower_id
  // band_number
  // band_frequency
  // channel_number
  // rx_level
  // tx_level
  // rx_quality
  // sinr
}

bool
px4_msgs__msg__CellularStatus__are_equal(const px4_msgs__msg__CellularStatus * lhs, const px4_msgs__msg__CellularStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // failure_reason
  if (lhs->failure_reason != rhs->failure_reason) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // quality
  if (lhs->quality != rhs->quality) {
    return false;
  }
  // mcc
  if (lhs->mcc != rhs->mcc) {
    return false;
  }
  // mnc
  if (lhs->mnc != rhs->mnc) {
    return false;
  }
  // lac
  if (lhs->lac != rhs->lac) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // link_tx_rate
  if (lhs->link_tx_rate != rhs->link_tx_rate) {
    return false;
  }
  // link_rx_rate
  if (lhs->link_rx_rate != rhs->link_rx_rate) {
    return false;
  }
  // cell_tower_id
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->cell_tower_id[i] != rhs->cell_tower_id[i]) {
      return false;
    }
  }
  // band_number
  if (lhs->band_number != rhs->band_number) {
    return false;
  }
  // band_frequency
  if (lhs->band_frequency != rhs->band_frequency) {
    return false;
  }
  // channel_number
  if (lhs->channel_number != rhs->channel_number) {
    return false;
  }
  // rx_level
  if (lhs->rx_level != rhs->rx_level) {
    return false;
  }
  // tx_level
  if (lhs->tx_level != rhs->tx_level) {
    return false;
  }
  // rx_quality
  if (lhs->rx_quality != rhs->rx_quality) {
    return false;
  }
  // sinr
  if (lhs->sinr != rhs->sinr) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__CellularStatus__copy(
  const px4_msgs__msg__CellularStatus * input,
  px4_msgs__msg__CellularStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // status
  output->status = input->status;
  // failure_reason
  output->failure_reason = input->failure_reason;
  // type
  output->type = input->type;
  // quality
  output->quality = input->quality;
  // mcc
  output->mcc = input->mcc;
  // mnc
  output->mnc = input->mnc;
  // lac
  output->lac = input->lac;
  // id
  output->id = input->id;
  // link_tx_rate
  output->link_tx_rate = input->link_tx_rate;
  // link_rx_rate
  output->link_rx_rate = input->link_rx_rate;
  // cell_tower_id
  for (size_t i = 0; i < 9; ++i) {
    output->cell_tower_id[i] = input->cell_tower_id[i];
  }
  // band_number
  output->band_number = input->band_number;
  // band_frequency
  output->band_frequency = input->band_frequency;
  // channel_number
  output->channel_number = input->channel_number;
  // rx_level
  output->rx_level = input->rx_level;
  // tx_level
  output->tx_level = input->tx_level;
  // rx_quality
  output->rx_quality = input->rx_quality;
  // sinr
  output->sinr = input->sinr;
  return true;
}

px4_msgs__msg__CellularStatus *
px4_msgs__msg__CellularStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__CellularStatus * msg = (px4_msgs__msg__CellularStatus *)allocator.allocate(sizeof(px4_msgs__msg__CellularStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__CellularStatus));
  bool success = px4_msgs__msg__CellularStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__CellularStatus__destroy(px4_msgs__msg__CellularStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__CellularStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__CellularStatus__Sequence__init(px4_msgs__msg__CellularStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__CellularStatus * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(px4_msgs__msg__CellularStatus)) {
      return false;
    }
    data = (px4_msgs__msg__CellularStatus *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__CellularStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__CellularStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__CellularStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
px4_msgs__msg__CellularStatus__Sequence__fini(px4_msgs__msg__CellularStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__CellularStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

px4_msgs__msg__CellularStatus__Sequence *
px4_msgs__msg__CellularStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__CellularStatus__Sequence * array = (px4_msgs__msg__CellularStatus__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__CellularStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__CellularStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__CellularStatus__Sequence__destroy(px4_msgs__msg__CellularStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__CellularStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__CellularStatus__Sequence__are_equal(const px4_msgs__msg__CellularStatus__Sequence * lhs, const px4_msgs__msg__CellularStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__CellularStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__CellularStatus__Sequence__copy(
  const px4_msgs__msg__CellularStatus__Sequence * input,
  px4_msgs__msg__CellularStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(px4_msgs__msg__CellularStatus)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__CellularStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__CellularStatus * data =
      (px4_msgs__msg__CellularStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__CellularStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__CellularStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__CellularStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
