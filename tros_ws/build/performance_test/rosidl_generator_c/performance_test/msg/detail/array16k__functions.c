// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from performance_test:msg/Array16k.idl
// generated code does not contain a copyright notice
#include "performance_test/msg/detail/array16k__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
performance_test__msg__Array16k__init(performance_test__msg__Array16k * msg)
{
  if (!msg) {
    return false;
  }
  // array
  // time
  // id
  return true;
}

void
performance_test__msg__Array16k__fini(performance_test__msg__Array16k * msg)
{
  if (!msg) {
    return;
  }
  // array
  // time
  // id
}

bool
performance_test__msg__Array16k__are_equal(const performance_test__msg__Array16k * lhs, const performance_test__msg__Array16k * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // array
  for (size_t i = 0; i < 16384; ++i) {
    if (lhs->array[i] != rhs->array[i]) {
      return false;
    }
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  return true;
}

bool
performance_test__msg__Array16k__copy(
  const performance_test__msg__Array16k * input,
  performance_test__msg__Array16k * output)
{
  if (!input || !output) {
    return false;
  }
  // array
  for (size_t i = 0; i < 16384; ++i) {
    output->array[i] = input->array[i];
  }
  // time
  output->time = input->time;
  // id
  output->id = input->id;
  return true;
}

performance_test__msg__Array16k *
performance_test__msg__Array16k__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  performance_test__msg__Array16k * msg = (performance_test__msg__Array16k *)allocator.allocate(sizeof(performance_test__msg__Array16k), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(performance_test__msg__Array16k));
  bool success = performance_test__msg__Array16k__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
performance_test__msg__Array16k__destroy(performance_test__msg__Array16k * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    performance_test__msg__Array16k__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
performance_test__msg__Array16k__Sequence__init(performance_test__msg__Array16k__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  performance_test__msg__Array16k * data = NULL;

  if (size) {
    data = (performance_test__msg__Array16k *)allocator.zero_allocate(size, sizeof(performance_test__msg__Array16k), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = performance_test__msg__Array16k__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        performance_test__msg__Array16k__fini(&data[i - 1]);
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
performance_test__msg__Array16k__Sequence__fini(performance_test__msg__Array16k__Sequence * array)
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
      performance_test__msg__Array16k__fini(&array->data[i]);
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

performance_test__msg__Array16k__Sequence *
performance_test__msg__Array16k__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  performance_test__msg__Array16k__Sequence * array = (performance_test__msg__Array16k__Sequence *)allocator.allocate(sizeof(performance_test__msg__Array16k__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = performance_test__msg__Array16k__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
performance_test__msg__Array16k__Sequence__destroy(performance_test__msg__Array16k__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    performance_test__msg__Array16k__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
performance_test__msg__Array16k__Sequence__are_equal(const performance_test__msg__Array16k__Sequence * lhs, const performance_test__msg__Array16k__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!performance_test__msg__Array16k__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
performance_test__msg__Array16k__Sequence__copy(
  const performance_test__msg__Array16k__Sequence * input,
  performance_test__msg__Array16k__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(performance_test__msg__Array16k);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    performance_test__msg__Array16k * data =
      (performance_test__msg__Array16k *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!performance_test__msg__Array16k__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          performance_test__msg__Array16k__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!performance_test__msg__Array16k__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
