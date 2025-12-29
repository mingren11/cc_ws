// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from audio_msg:msg/AudioFrameType.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "audio_msg/msg/detail/audio_frame_type__rosidl_typesupport_introspection_c.h"
#include "audio_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "audio_msg/msg/detail/audio_frame_type__functions.h"
#include "audio_msg/msg/detail/audio_frame_type__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void audio_msg__msg__AudioFrameType__rosidl_typesupport_introspection_c__AudioFrameType_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  audio_msg__msg__AudioFrameType__init(message_memory);
}

void audio_msg__msg__AudioFrameType__rosidl_typesupport_introspection_c__AudioFrameType_fini_function(void * message_memory)
{
  audio_msg__msg__AudioFrameType__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember audio_msg__msg__AudioFrameType__rosidl_typesupport_introspection_c__AudioFrameType_message_member_array[1] = {
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audio_msg__msg__AudioFrameType, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers audio_msg__msg__AudioFrameType__rosidl_typesupport_introspection_c__AudioFrameType_message_members = {
  "audio_msg__msg",  // message namespace
  "AudioFrameType",  // message name
  1,  // number of fields
  sizeof(audio_msg__msg__AudioFrameType),
  audio_msg__msg__AudioFrameType__rosidl_typesupport_introspection_c__AudioFrameType_message_member_array,  // message members
  audio_msg__msg__AudioFrameType__rosidl_typesupport_introspection_c__AudioFrameType_init_function,  // function to initialize message memory (memory has to be allocated)
  audio_msg__msg__AudioFrameType__rosidl_typesupport_introspection_c__AudioFrameType_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t audio_msg__msg__AudioFrameType__rosidl_typesupport_introspection_c__AudioFrameType_message_type_support_handle = {
  0,
  &audio_msg__msg__AudioFrameType__rosidl_typesupport_introspection_c__AudioFrameType_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_audio_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, audio_msg, msg, AudioFrameType)() {
  if (!audio_msg__msg__AudioFrameType__rosidl_typesupport_introspection_c__AudioFrameType_message_type_support_handle.typesupport_identifier) {
    audio_msg__msg__AudioFrameType__rosidl_typesupport_introspection_c__AudioFrameType_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &audio_msg__msg__AudioFrameType__rosidl_typesupport_introspection_c__AudioFrameType_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
