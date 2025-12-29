// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from audio_msg:msg/AudioFrame.idl
// generated code does not contain a copyright notice
#include "audio_msg/msg/detail/audio_frame__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pts`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `frame_type`
#include "audio_msg/msg/detail/audio_frame_type__functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `smart_audio`
#include "audio_msg/msg/detail/smart_audio_data__functions.h"

bool
audio_msg__msg__AudioFrame__init(audio_msg__msg__AudioFrame * msg)
{
  if (!msg) {
    return false;
  }
  // index
  // pts
  if (!builtin_interfaces__msg__Time__init(&msg->pts)) {
    audio_msg__msg__AudioFrame__fini(msg);
    return false;
  }
  // frame_type
  if (!audio_msg__msg__AudioFrameType__init(&msg->frame_type)) {
    audio_msg__msg__AudioFrame__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    audio_msg__msg__AudioFrame__fini(msg);
    return false;
  }
  // smart_audio
  if (!audio_msg__msg__SmartAudioData__init(&msg->smart_audio)) {
    audio_msg__msg__AudioFrame__fini(msg);
    return false;
  }
  return true;
}

void
audio_msg__msg__AudioFrame__fini(audio_msg__msg__AudioFrame * msg)
{
  if (!msg) {
    return;
  }
  // index
  // pts
  builtin_interfaces__msg__Time__fini(&msg->pts);
  // frame_type
  audio_msg__msg__AudioFrameType__fini(&msg->frame_type);
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
  // smart_audio
  audio_msg__msg__SmartAudioData__fini(&msg->smart_audio);
}

bool
audio_msg__msg__AudioFrame__are_equal(const audio_msg__msg__AudioFrame * lhs, const audio_msg__msg__AudioFrame * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // index
  if (lhs->index != rhs->index) {
    return false;
  }
  // pts
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->pts), &(rhs->pts)))
  {
    return false;
  }
  // frame_type
  if (!audio_msg__msg__AudioFrameType__are_equal(
      &(lhs->frame_type), &(rhs->frame_type)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // smart_audio
  if (!audio_msg__msg__SmartAudioData__are_equal(
      &(lhs->smart_audio), &(rhs->smart_audio)))
  {
    return false;
  }
  return true;
}

bool
audio_msg__msg__AudioFrame__copy(
  const audio_msg__msg__AudioFrame * input,
  audio_msg__msg__AudioFrame * output)
{
  if (!input || !output) {
    return false;
  }
  // index
  output->index = input->index;
  // pts
  if (!builtin_interfaces__msg__Time__copy(
      &(input->pts), &(output->pts)))
  {
    return false;
  }
  // frame_type
  if (!audio_msg__msg__AudioFrameType__copy(
      &(input->frame_type), &(output->frame_type)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // smart_audio
  if (!audio_msg__msg__SmartAudioData__copy(
      &(input->smart_audio), &(output->smart_audio)))
  {
    return false;
  }
  return true;
}

audio_msg__msg__AudioFrame *
audio_msg__msg__AudioFrame__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_msg__msg__AudioFrame * msg = (audio_msg__msg__AudioFrame *)allocator.allocate(sizeof(audio_msg__msg__AudioFrame), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(audio_msg__msg__AudioFrame));
  bool success = audio_msg__msg__AudioFrame__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
audio_msg__msg__AudioFrame__destroy(audio_msg__msg__AudioFrame * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    audio_msg__msg__AudioFrame__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
audio_msg__msg__AudioFrame__Sequence__init(audio_msg__msg__AudioFrame__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_msg__msg__AudioFrame * data = NULL;

  if (size) {
    data = (audio_msg__msg__AudioFrame *)allocator.zero_allocate(size, sizeof(audio_msg__msg__AudioFrame), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = audio_msg__msg__AudioFrame__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        audio_msg__msg__AudioFrame__fini(&data[i - 1]);
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
audio_msg__msg__AudioFrame__Sequence__fini(audio_msg__msg__AudioFrame__Sequence * array)
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
      audio_msg__msg__AudioFrame__fini(&array->data[i]);
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

audio_msg__msg__AudioFrame__Sequence *
audio_msg__msg__AudioFrame__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_msg__msg__AudioFrame__Sequence * array = (audio_msg__msg__AudioFrame__Sequence *)allocator.allocate(sizeof(audio_msg__msg__AudioFrame__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = audio_msg__msg__AudioFrame__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
audio_msg__msg__AudioFrame__Sequence__destroy(audio_msg__msg__AudioFrame__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    audio_msg__msg__AudioFrame__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
audio_msg__msg__AudioFrame__Sequence__are_equal(const audio_msg__msg__AudioFrame__Sequence * lhs, const audio_msg__msg__AudioFrame__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!audio_msg__msg__AudioFrame__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
audio_msg__msg__AudioFrame__Sequence__copy(
  const audio_msg__msg__AudioFrame__Sequence * input,
  audio_msg__msg__AudioFrame__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(audio_msg__msg__AudioFrame);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    audio_msg__msg__AudioFrame * data =
      (audio_msg__msg__AudioFrame *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!audio_msg__msg__AudioFrame__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          audio_msg__msg__AudioFrame__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!audio_msg__msg__AudioFrame__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
