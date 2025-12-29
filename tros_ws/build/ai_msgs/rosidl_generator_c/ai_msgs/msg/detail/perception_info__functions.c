// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ai_msgs:msg/PerceptionInfo.idl
// generated code does not contain a copyright notice
#include "ai_msgs/msg/detail/perception_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `class_names`
#include "rosidl_runtime_c/string_functions.h"

bool
ai_msgs__msg__PerceptionInfo__init(ai_msgs__msg__PerceptionInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ai_msgs__msg__PerceptionInfo__fini(msg);
    return false;
  }
  // height
  // width
  // class_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->class_names, 0)) {
    ai_msgs__msg__PerceptionInfo__fini(msg);
    return false;
  }
  return true;
}

void
ai_msgs__msg__PerceptionInfo__fini(ai_msgs__msg__PerceptionInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // height
  // width
  // class_names
  rosidl_runtime_c__String__Sequence__fini(&msg->class_names);
}

bool
ai_msgs__msg__PerceptionInfo__are_equal(const ai_msgs__msg__PerceptionInfo * lhs, const ai_msgs__msg__PerceptionInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // class_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->class_names), &(rhs->class_names)))
  {
    return false;
  }
  return true;
}

bool
ai_msgs__msg__PerceptionInfo__copy(
  const ai_msgs__msg__PerceptionInfo * input,
  ai_msgs__msg__PerceptionInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // height
  output->height = input->height;
  // width
  output->width = input->width;
  // class_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->class_names), &(output->class_names)))
  {
    return false;
  }
  return true;
}

ai_msgs__msg__PerceptionInfo *
ai_msgs__msg__PerceptionInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ai_msgs__msg__PerceptionInfo * msg = (ai_msgs__msg__PerceptionInfo *)allocator.allocate(sizeof(ai_msgs__msg__PerceptionInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ai_msgs__msg__PerceptionInfo));
  bool success = ai_msgs__msg__PerceptionInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ai_msgs__msg__PerceptionInfo__destroy(ai_msgs__msg__PerceptionInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ai_msgs__msg__PerceptionInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ai_msgs__msg__PerceptionInfo__Sequence__init(ai_msgs__msg__PerceptionInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ai_msgs__msg__PerceptionInfo * data = NULL;

  if (size) {
    data = (ai_msgs__msg__PerceptionInfo *)allocator.zero_allocate(size, sizeof(ai_msgs__msg__PerceptionInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ai_msgs__msg__PerceptionInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ai_msgs__msg__PerceptionInfo__fini(&data[i - 1]);
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
ai_msgs__msg__PerceptionInfo__Sequence__fini(ai_msgs__msg__PerceptionInfo__Sequence * array)
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
      ai_msgs__msg__PerceptionInfo__fini(&array->data[i]);
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

ai_msgs__msg__PerceptionInfo__Sequence *
ai_msgs__msg__PerceptionInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ai_msgs__msg__PerceptionInfo__Sequence * array = (ai_msgs__msg__PerceptionInfo__Sequence *)allocator.allocate(sizeof(ai_msgs__msg__PerceptionInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ai_msgs__msg__PerceptionInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ai_msgs__msg__PerceptionInfo__Sequence__destroy(ai_msgs__msg__PerceptionInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ai_msgs__msg__PerceptionInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ai_msgs__msg__PerceptionInfo__Sequence__are_equal(const ai_msgs__msg__PerceptionInfo__Sequence * lhs, const ai_msgs__msg__PerceptionInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ai_msgs__msg__PerceptionInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ai_msgs__msg__PerceptionInfo__Sequence__copy(
  const ai_msgs__msg__PerceptionInfo__Sequence * input,
  ai_msgs__msg__PerceptionInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ai_msgs__msg__PerceptionInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ai_msgs__msg__PerceptionInfo * data =
      (ai_msgs__msg__PerceptionInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ai_msgs__msg__PerceptionInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ai_msgs__msg__PerceptionInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ai_msgs__msg__PerceptionInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
