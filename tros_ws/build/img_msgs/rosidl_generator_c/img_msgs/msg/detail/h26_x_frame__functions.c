// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from img_msgs:msg/H26XFrame.idl
// generated code does not contain a copyright notice
#include "img_msgs/msg/detail/h26_x_frame__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `dts`
// Member `pts`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
img_msgs__msg__H26XFrame__init(img_msgs__msg__H26XFrame * msg)
{
  if (!msg) {
    return false;
  }
  // index
  // encoding
  // height
  // width
  // dts
  if (!builtin_interfaces__msg__Time__init(&msg->dts)) {
    img_msgs__msg__H26XFrame__fini(msg);
    return false;
  }
  // pts
  if (!builtin_interfaces__msg__Time__init(&msg->pts)) {
    img_msgs__msg__H26XFrame__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    img_msgs__msg__H26XFrame__fini(msg);
    return false;
  }
  return true;
}

void
img_msgs__msg__H26XFrame__fini(img_msgs__msg__H26XFrame * msg)
{
  if (!msg) {
    return;
  }
  // index
  // encoding
  // height
  // width
  // dts
  builtin_interfaces__msg__Time__fini(&msg->dts);
  // pts
  builtin_interfaces__msg__Time__fini(&msg->pts);
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
}

bool
img_msgs__msg__H26XFrame__are_equal(const img_msgs__msg__H26XFrame * lhs, const img_msgs__msg__H26XFrame * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // index
  if (lhs->index != rhs->index) {
    return false;
  }
  // encoding
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->encoding[i] != rhs->encoding[i]) {
      return false;
    }
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // dts
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->dts), &(rhs->dts)))
  {
    return false;
  }
  // pts
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->pts), &(rhs->pts)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
img_msgs__msg__H26XFrame__copy(
  const img_msgs__msg__H26XFrame * input,
  img_msgs__msg__H26XFrame * output)
{
  if (!input || !output) {
    return false;
  }
  // index
  output->index = input->index;
  // encoding
  for (size_t i = 0; i < 12; ++i) {
    output->encoding[i] = input->encoding[i];
  }
  // height
  output->height = input->height;
  // width
  output->width = input->width;
  // dts
  if (!builtin_interfaces__msg__Time__copy(
      &(input->dts), &(output->dts)))
  {
    return false;
  }
  // pts
  if (!builtin_interfaces__msg__Time__copy(
      &(input->pts), &(output->pts)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

img_msgs__msg__H26XFrame *
img_msgs__msg__H26XFrame__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  img_msgs__msg__H26XFrame * msg = (img_msgs__msg__H26XFrame *)allocator.allocate(sizeof(img_msgs__msg__H26XFrame), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(img_msgs__msg__H26XFrame));
  bool success = img_msgs__msg__H26XFrame__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
img_msgs__msg__H26XFrame__destroy(img_msgs__msg__H26XFrame * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    img_msgs__msg__H26XFrame__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
img_msgs__msg__H26XFrame__Sequence__init(img_msgs__msg__H26XFrame__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  img_msgs__msg__H26XFrame * data = NULL;

  if (size) {
    data = (img_msgs__msg__H26XFrame *)allocator.zero_allocate(size, sizeof(img_msgs__msg__H26XFrame), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = img_msgs__msg__H26XFrame__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        img_msgs__msg__H26XFrame__fini(&data[i - 1]);
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
img_msgs__msg__H26XFrame__Sequence__fini(img_msgs__msg__H26XFrame__Sequence * array)
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
      img_msgs__msg__H26XFrame__fini(&array->data[i]);
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

img_msgs__msg__H26XFrame__Sequence *
img_msgs__msg__H26XFrame__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  img_msgs__msg__H26XFrame__Sequence * array = (img_msgs__msg__H26XFrame__Sequence *)allocator.allocate(sizeof(img_msgs__msg__H26XFrame__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = img_msgs__msg__H26XFrame__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
img_msgs__msg__H26XFrame__Sequence__destroy(img_msgs__msg__H26XFrame__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    img_msgs__msg__H26XFrame__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
img_msgs__msg__H26XFrame__Sequence__are_equal(const img_msgs__msg__H26XFrame__Sequence * lhs, const img_msgs__msg__H26XFrame__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!img_msgs__msg__H26XFrame__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
img_msgs__msg__H26XFrame__Sequence__copy(
  const img_msgs__msg__H26XFrame__Sequence * input,
  img_msgs__msg__H26XFrame__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(img_msgs__msg__H26XFrame);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    img_msgs__msg__H26XFrame * data =
      (img_msgs__msg__H26XFrame *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!img_msgs__msg__H26XFrame__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          img_msgs__msg__H26XFrame__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!img_msgs__msg__H26XFrame__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
