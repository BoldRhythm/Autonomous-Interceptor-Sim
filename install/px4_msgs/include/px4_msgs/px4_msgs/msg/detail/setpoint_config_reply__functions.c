// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/SetpointConfigReply.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/setpoint_config_reply__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__SetpointConfigReply__init(px4_msgs__msg__SetpointConfigReply * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // type
  // source_id
  // result
  // mode_req_angular_velocity
  // mode_req_attitude
  // mode_req_local_alt
  // mode_req_local_position
  return true;
}

void
px4_msgs__msg__SetpointConfigReply__fini(px4_msgs__msg__SetpointConfigReply * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // type
  // source_id
  // result
  // mode_req_angular_velocity
  // mode_req_attitude
  // mode_req_local_alt
  // mode_req_local_position
}

bool
px4_msgs__msg__SetpointConfigReply__are_equal(const px4_msgs__msg__SetpointConfigReply * lhs, const px4_msgs__msg__SetpointConfigReply * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // source_id
  if (lhs->source_id != rhs->source_id) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  // mode_req_angular_velocity
  if (lhs->mode_req_angular_velocity != rhs->mode_req_angular_velocity) {
    return false;
  }
  // mode_req_attitude
  if (lhs->mode_req_attitude != rhs->mode_req_attitude) {
    return false;
  }
  // mode_req_local_alt
  if (lhs->mode_req_local_alt != rhs->mode_req_local_alt) {
    return false;
  }
  // mode_req_local_position
  if (lhs->mode_req_local_position != rhs->mode_req_local_position) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__SetpointConfigReply__copy(
  const px4_msgs__msg__SetpointConfigReply * input,
  px4_msgs__msg__SetpointConfigReply * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // type
  output->type = input->type;
  // source_id
  output->source_id = input->source_id;
  // result
  output->result = input->result;
  // mode_req_angular_velocity
  output->mode_req_angular_velocity = input->mode_req_angular_velocity;
  // mode_req_attitude
  output->mode_req_attitude = input->mode_req_attitude;
  // mode_req_local_alt
  output->mode_req_local_alt = input->mode_req_local_alt;
  // mode_req_local_position
  output->mode_req_local_position = input->mode_req_local_position;
  return true;
}

px4_msgs__msg__SetpointConfigReply *
px4_msgs__msg__SetpointConfigReply__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__SetpointConfigReply * msg = (px4_msgs__msg__SetpointConfigReply *)allocator.allocate(sizeof(px4_msgs__msg__SetpointConfigReply), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__SetpointConfigReply));
  bool success = px4_msgs__msg__SetpointConfigReply__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__SetpointConfigReply__destroy(px4_msgs__msg__SetpointConfigReply * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__SetpointConfigReply__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__SetpointConfigReply__Sequence__init(px4_msgs__msg__SetpointConfigReply__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__SetpointConfigReply * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(px4_msgs__msg__SetpointConfigReply)) {
      return false;
    }
    data = (px4_msgs__msg__SetpointConfigReply *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__SetpointConfigReply), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__SetpointConfigReply__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__SetpointConfigReply__fini(&data[i - 1]);
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
px4_msgs__msg__SetpointConfigReply__Sequence__fini(px4_msgs__msg__SetpointConfigReply__Sequence * array)
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
      px4_msgs__msg__SetpointConfigReply__fini(&array->data[i]);
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

px4_msgs__msg__SetpointConfigReply__Sequence *
px4_msgs__msg__SetpointConfigReply__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__SetpointConfigReply__Sequence * array = (px4_msgs__msg__SetpointConfigReply__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__SetpointConfigReply__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__SetpointConfigReply__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__SetpointConfigReply__Sequence__destroy(px4_msgs__msg__SetpointConfigReply__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__SetpointConfigReply__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__SetpointConfigReply__Sequence__are_equal(const px4_msgs__msg__SetpointConfigReply__Sequence * lhs, const px4_msgs__msg__SetpointConfigReply__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__SetpointConfigReply__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__SetpointConfigReply__Sequence__copy(
  const px4_msgs__msg__SetpointConfigReply__Sequence * input,
  px4_msgs__msg__SetpointConfigReply__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(px4_msgs__msg__SetpointConfigReply)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__SetpointConfigReply);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__SetpointConfigReply * data =
      (px4_msgs__msg__SetpointConfigReply *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__SetpointConfigReply__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__SetpointConfigReply__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__SetpointConfigReply__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
