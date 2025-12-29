// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from audio_msg:msg/AudioFrame.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "audio_msg/msg/detail/audio_frame__rosidl_typesupport_introspection_c.h"
#include "audio_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "audio_msg/msg/detail/audio_frame__functions.h"
#include "audio_msg/msg/detail/audio_frame__struct.h"


// Include directives for member types
// Member `pts`
#include "builtin_interfaces/msg/time.h"
// Member `pts`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `frame_type`
#include "audio_msg/msg/audio_frame_type.h"
// Member `frame_type`
#include "audio_msg/msg/detail/audio_frame_type__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `smart_audio`
#include "audio_msg/msg/smart_audio_data.h"
// Member `smart_audio`
#include "audio_msg/msg/detail/smart_audio_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void audio_msg__msg__AudioFrame__rosidl_typesupport_introspection_c__AudioFrame_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  audio_msg__msg__AudioFrame__init(message_memory);
}

void audio_msg__msg__AudioFrame__rosidl_typesupport_introspection_c__AudioFrame_fini_function(void * message_memory)
{
  audio_msg__msg__AudioFrame__fini(message_memory);
}

size_t audio_msg__msg__AudioFrame__rosidl_typesupport_introspection_c__size_function__AudioFrame__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * audio_msg__msg__AudioFrame__rosidl_typesupport_introspection_c__get_const_function__AudioFrame__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * audio_msg__msg__AudioFrame__rosidl_typesupport_introspection_c__get_function__AudioFrame__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void audio_msg__msg__AudioFrame__rosidl_typesupport_introspection_c__fetch_function__AudioFrame__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    audio_msg__msg__AudioFrame__rosidl_typesupport_introspection_c__get_const_function__AudioFrame__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void audio_msg__msg__AudioFrame__rosidl_typesupport_introspection_c__assign_function__AudioFrame__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    audio_msg__msg__AudioFrame__rosidl_typesupport_introspection_c__get_function__AudioFrame__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool audio_msg__msg__AudioFrame__rosidl_typesupport_introspection_c__resize_function__AudioFrame__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember audio_msg__msg__AudioFrame__rosidl_typesupport_introspection_c__AudioFrame_message_member_array[5] = {
  {
    "index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audio_msg__msg__AudioFrame, index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audio_msg__msg__AudioFrame, pts),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audio_msg__msg__AudioFrame, frame_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audio_msg__msg__AudioFrame, data),  // bytes offset in struct
    NULL,  // default value
    audio_msg__msg__AudioFrame__rosidl_typesupport_introspection_c__size_function__AudioFrame__data,  // size() function pointer
    audio_msg__msg__AudioFrame__rosidl_typesupport_introspection_c__get_const_function__AudioFrame__data,  // get_const(index) function pointer
    audio_msg__msg__AudioFrame__rosidl_typesupport_introspection_c__get_function__AudioFrame__data,  // get(index) function pointer
    audio_msg__msg__AudioFrame__rosidl_typesupport_introspection_c__fetch_function__AudioFrame__data,  // fetch(index, &value) function pointer
    audio_msg__msg__AudioFrame__rosidl_typesupport_introspection_c__assign_function__AudioFrame__data,  // assign(index, value) function pointer
    audio_msg__msg__AudioFrame__rosidl_typesupport_introspection_c__resize_function__AudioFrame__data  // resize(index) function pointer
  },
  {
    "smart_audio",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audio_msg__msg__AudioFrame, smart_audio),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers audio_msg__msg__AudioFrame__rosidl_typesupport_introspection_c__AudioFrame_message_members = {
  "audio_msg__msg",  // message namespace
  "AudioFrame",  // message name
  5,  // number of fields
  sizeof(audio_msg__msg__AudioFrame),
  audio_msg__msg__AudioFrame__rosidl_typesupport_introspection_c__AudioFrame_message_member_array,  // message members
  audio_msg__msg__AudioFrame__rosidl_typesupport_introspection_c__AudioFrame_init_function,  // function to initialize message memory (memory has to be allocated)
  audio_msg__msg__AudioFrame__rosidl_typesupport_introspection_c__AudioFrame_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t audio_msg__msg__AudioFrame__rosidl_typesupport_introspection_c__AudioFrame_message_type_support_handle = {
  0,
  &audio_msg__msg__AudioFrame__rosidl_typesupport_introspection_c__AudioFrame_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_audio_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, audio_msg, msg, AudioFrame)() {
  audio_msg__msg__AudioFrame__rosidl_typesupport_introspection_c__AudioFrame_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  audio_msg__msg__AudioFrame__rosidl_typesupport_introspection_c__AudioFrame_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, audio_msg, msg, AudioFrameType)();
  audio_msg__msg__AudioFrame__rosidl_typesupport_introspection_c__AudioFrame_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, audio_msg, msg, SmartAudioData)();
  if (!audio_msg__msg__AudioFrame__rosidl_typesupport_introspection_c__AudioFrame_message_type_support_handle.typesupport_identifier) {
    audio_msg__msg__AudioFrame__rosidl_typesupport_introspection_c__AudioFrame_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &audio_msg__msg__AudioFrame__rosidl_typesupport_introspection_c__AudioFrame_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
