// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/DetectAndAvoid.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/detect_and_avoid__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__DetectAndAvoid__init(px4_msgs__msg__DetectAndAvoid * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // unique_id
  // unique_id_encoding
  // conflict_level
  // aircraft_dist
  // aircraft_dist_hor
  // aircraft_dist_vert
  // expected_min_dist_time
  return true;
}

void
px4_msgs__msg__DetectAndAvoid__fini(px4_msgs__msg__DetectAndAvoid * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // unique_id
  // unique_id_encoding
  // conflict_level
  // aircraft_dist
  // aircraft_dist_hor
  // aircraft_dist_vert
  // expected_min_dist_time
}

bool
px4_msgs__msg__DetectAndAvoid__are_equal(const px4_msgs__msg__DetectAndAvoid * lhs, const px4_msgs__msg__DetectAndAvoid * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // unique_id
  if (lhs->unique_id != rhs->unique_id) {
    return false;
  }
  // unique_id_encoding
  if (lhs->unique_id_encoding != rhs->unique_id_encoding) {
    return false;
  }
  // conflict_level
  if (lhs->conflict_level != rhs->conflict_level) {
    return false;
  }
  // aircraft_dist
  if (lhs->aircraft_dist != rhs->aircraft_dist) {
    return false;
  }
  // aircraft_dist_hor
  if (lhs->aircraft_dist_hor != rhs->aircraft_dist_hor) {
    return false;
  }
  // aircraft_dist_vert
  if (lhs->aircraft_dist_vert != rhs->aircraft_dist_vert) {
    return false;
  }
  // expected_min_dist_time
  if (lhs->expected_min_dist_time != rhs->expected_min_dist_time) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__DetectAndAvoid__copy(
  const px4_msgs__msg__DetectAndAvoid * input,
  px4_msgs__msg__DetectAndAvoid * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // unique_id
  output->unique_id = input->unique_id;
  // unique_id_encoding
  output->unique_id_encoding = input->unique_id_encoding;
  // conflict_level
  output->conflict_level = input->conflict_level;
  // aircraft_dist
  output->aircraft_dist = input->aircraft_dist;
  // aircraft_dist_hor
  output->aircraft_dist_hor = input->aircraft_dist_hor;
  // aircraft_dist_vert
  output->aircraft_dist_vert = input->aircraft_dist_vert;
  // expected_min_dist_time
  output->expected_min_dist_time = input->expected_min_dist_time;
  return true;
}

px4_msgs__msg__DetectAndAvoid *
px4_msgs__msg__DetectAndAvoid__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__DetectAndAvoid * msg = (px4_msgs__msg__DetectAndAvoid *)allocator.allocate(sizeof(px4_msgs__msg__DetectAndAvoid), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__DetectAndAvoid));
  bool success = px4_msgs__msg__DetectAndAvoid__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__DetectAndAvoid__destroy(px4_msgs__msg__DetectAndAvoid * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__DetectAndAvoid__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__DetectAndAvoid__Sequence__init(px4_msgs__msg__DetectAndAvoid__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__DetectAndAvoid * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(px4_msgs__msg__DetectAndAvoid)) {
      return false;
    }
    data = (px4_msgs__msg__DetectAndAvoid *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__DetectAndAvoid), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__DetectAndAvoid__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__DetectAndAvoid__fini(&data[i - 1]);
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
px4_msgs__msg__DetectAndAvoid__Sequence__fini(px4_msgs__msg__DetectAndAvoid__Sequence * array)
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
      px4_msgs__msg__DetectAndAvoid__fini(&array->data[i]);
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

px4_msgs__msg__DetectAndAvoid__Sequence *
px4_msgs__msg__DetectAndAvoid__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__DetectAndAvoid__Sequence * array = (px4_msgs__msg__DetectAndAvoid__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__DetectAndAvoid__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__DetectAndAvoid__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__DetectAndAvoid__Sequence__destroy(px4_msgs__msg__DetectAndAvoid__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__DetectAndAvoid__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__DetectAndAvoid__Sequence__are_equal(const px4_msgs__msg__DetectAndAvoid__Sequence * lhs, const px4_msgs__msg__DetectAndAvoid__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__DetectAndAvoid__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__DetectAndAvoid__Sequence__copy(
  const px4_msgs__msg__DetectAndAvoid__Sequence * input,
  px4_msgs__msg__DetectAndAvoid__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(px4_msgs__msg__DetectAndAvoid)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__DetectAndAvoid);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__DetectAndAvoid * data =
      (px4_msgs__msg__DetectAndAvoid *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__DetectAndAvoid__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__DetectAndAvoid__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__DetectAndAvoid__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
