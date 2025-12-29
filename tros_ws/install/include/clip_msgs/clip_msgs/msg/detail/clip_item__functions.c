// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from clip_msgs:msg/ClipItem.idl
// generated code does not contain a copyright notice
#include "clip_msgs/msg/detail/clip_item__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `text`
// Member `url`
// Member `extra`
#include "rosidl_runtime_c/string_functions.h"
// Member `feature`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
clip_msgs__msg__ClipItem__init(clip_msgs__msg__ClipItem * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // text
  if (!rosidl_runtime_c__String__init(&msg->text)) {
    clip_msgs__msg__ClipItem__fini(msg);
    return false;
  }
  // url
  if (!rosidl_runtime_c__String__init(&msg->url)) {
    clip_msgs__msg__ClipItem__fini(msg);
    return false;
  }
  // feature
  if (!rosidl_runtime_c__float__Sequence__init(&msg->feature, 0)) {
    clip_msgs__msg__ClipItem__fini(msg);
    return false;
  }
  // extra
  if (!rosidl_runtime_c__String__Sequence__init(&msg->extra, 0)) {
    clip_msgs__msg__ClipItem__fini(msg);
    return false;
  }
  return true;
}

void
clip_msgs__msg__ClipItem__fini(clip_msgs__msg__ClipItem * msg)
{
  if (!msg) {
    return;
  }
  // type
  // text
  rosidl_runtime_c__String__fini(&msg->text);
  // url
  rosidl_runtime_c__String__fini(&msg->url);
  // feature
  rosidl_runtime_c__float__Sequence__fini(&msg->feature);
  // extra
  rosidl_runtime_c__String__Sequence__fini(&msg->extra);
}

bool
clip_msgs__msg__ClipItem__are_equal(const clip_msgs__msg__ClipItem * lhs, const clip_msgs__msg__ClipItem * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->text), &(rhs->text)))
  {
    return false;
  }
  // url
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->url), &(rhs->url)))
  {
    return false;
  }
  // feature
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->feature), &(rhs->feature)))
  {
    return false;
  }
  // extra
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->extra), &(rhs->extra)))
  {
    return false;
  }
  return true;
}

bool
clip_msgs__msg__ClipItem__copy(
  const clip_msgs__msg__ClipItem * input,
  clip_msgs__msg__ClipItem * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // text
  if (!rosidl_runtime_c__String__copy(
      &(input->text), &(output->text)))
  {
    return false;
  }
  // url
  if (!rosidl_runtime_c__String__copy(
      &(input->url), &(output->url)))
  {
    return false;
  }
  // feature
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->feature), &(output->feature)))
  {
    return false;
  }
  // extra
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->extra), &(output->extra)))
  {
    return false;
  }
  return true;
}

clip_msgs__msg__ClipItem *
clip_msgs__msg__ClipItem__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clip_msgs__msg__ClipItem * msg = (clip_msgs__msg__ClipItem *)allocator.allocate(sizeof(clip_msgs__msg__ClipItem), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(clip_msgs__msg__ClipItem));
  bool success = clip_msgs__msg__ClipItem__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
clip_msgs__msg__ClipItem__destroy(clip_msgs__msg__ClipItem * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    clip_msgs__msg__ClipItem__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
clip_msgs__msg__ClipItem__Sequence__init(clip_msgs__msg__ClipItem__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clip_msgs__msg__ClipItem * data = NULL;

  if (size) {
    data = (clip_msgs__msg__ClipItem *)allocator.zero_allocate(size, sizeof(clip_msgs__msg__ClipItem), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = clip_msgs__msg__ClipItem__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        clip_msgs__msg__ClipItem__fini(&data[i - 1]);
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
clip_msgs__msg__ClipItem__Sequence__fini(clip_msgs__msg__ClipItem__Sequence * array)
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
      clip_msgs__msg__ClipItem__fini(&array->data[i]);
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

clip_msgs__msg__ClipItem__Sequence *
clip_msgs__msg__ClipItem__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  clip_msgs__msg__ClipItem__Sequence * array = (clip_msgs__msg__ClipItem__Sequence *)allocator.allocate(sizeof(clip_msgs__msg__ClipItem__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = clip_msgs__msg__ClipItem__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
clip_msgs__msg__ClipItem__Sequence__destroy(clip_msgs__msg__ClipItem__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    clip_msgs__msg__ClipItem__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
clip_msgs__msg__ClipItem__Sequence__are_equal(const clip_msgs__msg__ClipItem__Sequence * lhs, const clip_msgs__msg__ClipItem__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!clip_msgs__msg__ClipItem__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
clip_msgs__msg__ClipItem__Sequence__copy(
  const clip_msgs__msg__ClipItem__Sequence * input,
  clip_msgs__msg__ClipItem__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(clip_msgs__msg__ClipItem);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    clip_msgs__msg__ClipItem * data =
      (clip_msgs__msg__ClipItem *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!clip_msgs__msg__ClipItem__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          clip_msgs__msg__ClipItem__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!clip_msgs__msg__ClipItem__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
