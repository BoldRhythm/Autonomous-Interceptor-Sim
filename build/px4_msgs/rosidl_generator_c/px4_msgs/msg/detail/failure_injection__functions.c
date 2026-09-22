// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/FailureInjection.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/failure_injection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__FailureInjection__init(px4_msgs__msg__FailureInjection * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // count
  // unit
  // instance_mask
  // failure_type
  return true;
}

void
px4_msgs__msg__FailureInjection__fini(px4_msgs__msg__FailureInjection * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // count
  // unit
  // instance_mask
  // failure_type
}

bool
px4_msgs__msg__FailureInjection__are_equal(const px4_msgs__msg__FailureInjection * lhs, const px4_msgs__msg__FailureInjection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // count
  if (lhs->count != rhs->count) {
    return false;
  }
  // unit
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->unit[i] != rhs->unit[i]) {
      return false;
    }
  }
  // instance_mask
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->instance_mask[i] != rhs->instance_mask[i]) {
      return false;
    }
  }
  // failure_type
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->failure_type[i] != rhs->failure_type[i]) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__FailureInjection__copy(
  const px4_msgs__msg__FailureInjection * input,
  px4_msgs__msg__FailureInjection * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // count
  output->count = input->count;
  // unit
  for (size_t i = 0; i < 4; ++i) {
    output->unit[i] = input->unit[i];
  }
  // instance_mask
  for (size_t i = 0; i < 4; ++i) {
    output->instance_mask[i] = input->instance_mask[i];
  }
  // failure_type
  for (size_t i = 0; i < 4; ++i) {
    output->failure_type[i] = input->failure_type[i];
  }
  return true;
}

px4_msgs__msg__FailureInjection *
px4_msgs__msg__FailureInjection__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__FailureInjection * msg = (px4_msgs__msg__FailureInjection *)allocator.allocate(sizeof(px4_msgs__msg__FailureInjection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__FailureInjection));
  bool success = px4_msgs__msg__FailureInjection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__FailureInjection__destroy(px4_msgs__msg__FailureInjection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__FailureInjection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__FailureInjection__Sequence__init(px4_msgs__msg__FailureInjection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__FailureInjection * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(px4_msgs__msg__FailureInjection)) {
      return false;
    }
    data = (px4_msgs__msg__FailureInjection *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__FailureInjection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__FailureInjection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__FailureInjection__fini(&data[i - 1]);
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
px4_msgs__msg__FailureInjection__Sequence__fini(px4_msgs__msg__FailureInjection__Sequence * array)
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
      px4_msgs__msg__FailureInjection__fini(&array->data[i]);
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

px4_msgs__msg__FailureInjection__Sequence *
px4_msgs__msg__FailureInjection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__FailureInjection__Sequence * array = (px4_msgs__msg__FailureInjection__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__FailureInjection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__FailureInjection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__FailureInjection__Sequence__destroy(px4_msgs__msg__FailureInjection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__FailureInjection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__FailureInjection__Sequence__are_equal(const px4_msgs__msg__FailureInjection__Sequence * lhs, const px4_msgs__msg__FailureInjection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__FailureInjection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__FailureInjection__Sequence__copy(
  const px4_msgs__msg__FailureInjection__Sequence * input,
  px4_msgs__msg__FailureInjection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(px4_msgs__msg__FailureInjection)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__FailureInjection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__FailureInjection * data =
      (px4_msgs__msg__FailureInjection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__FailureInjection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__FailureInjection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__FailureInjection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
