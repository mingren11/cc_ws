// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from clip_msgs:msg/ClipItem.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "clip_msgs/msg/detail/clip_item__rosidl_typesupport_introspection_c.h"
#include "clip_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "clip_msgs/msg/detail/clip_item__functions.h"
#include "clip_msgs/msg/detail/clip_item__struct.h"


// Include directives for member types
// Member `text`
// Member `url`
// Member `extra`
#include "rosidl_runtime_c/string_functions.h"
// Member `feature`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__ClipItem_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  clip_msgs__msg__ClipItem__init(message_memory);
}

void clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__ClipItem_fini_function(void * message_memory)
{
  clip_msgs__msg__ClipItem__fini(message_memory);
}

size_t clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__size_function__ClipItem__feature(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__get_const_function__ClipItem__feature(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__get_function__ClipItem__feature(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__fetch_function__ClipItem__feature(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__get_const_function__ClipItem__feature(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__assign_function__ClipItem__feature(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__get_function__ClipItem__feature(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__resize_function__ClipItem__feature(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__size_function__ClipItem__extra(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__get_const_function__ClipItem__extra(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__get_function__ClipItem__extra(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__fetch_function__ClipItem__extra(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__get_const_function__ClipItem__extra(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__assign_function__ClipItem__extra(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__get_function__ClipItem__extra(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__resize_function__ClipItem__extra(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__ClipItem_message_member_array[5] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clip_msgs__msg__ClipItem, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "text",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clip_msgs__msg__ClipItem, text),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "url",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clip_msgs__msg__ClipItem, url),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clip_msgs__msg__ClipItem, feature),  // bytes offset in struct
    NULL,  // default value
    clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__size_function__ClipItem__feature,  // size() function pointer
    clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__get_const_function__ClipItem__feature,  // get_const(index) function pointer
    clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__get_function__ClipItem__feature,  // get(index) function pointer
    clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__fetch_function__ClipItem__feature,  // fetch(index, &value) function pointer
    clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__assign_function__ClipItem__feature,  // assign(index, value) function pointer
    clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__resize_function__ClipItem__feature  // resize(index) function pointer
  },
  {
    "extra",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clip_msgs__msg__ClipItem, extra),  // bytes offset in struct
    NULL,  // default value
    clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__size_function__ClipItem__extra,  // size() function pointer
    clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__get_const_function__ClipItem__extra,  // get_const(index) function pointer
    clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__get_function__ClipItem__extra,  // get(index) function pointer
    clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__fetch_function__ClipItem__extra,  // fetch(index, &value) function pointer
    clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__assign_function__ClipItem__extra,  // assign(index, value) function pointer
    clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__resize_function__ClipItem__extra  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__ClipItem_message_members = {
  "clip_msgs__msg",  // message namespace
  "ClipItem",  // message name
  5,  // number of fields
  sizeof(clip_msgs__msg__ClipItem),
  clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__ClipItem_message_member_array,  // message members
  clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__ClipItem_init_function,  // function to initialize message memory (memory has to be allocated)
  clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__ClipItem_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__ClipItem_message_type_support_handle = {
  0,
  &clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__ClipItem_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_clip_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, clip_msgs, msg, ClipItem)() {
  if (!clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__ClipItem_message_type_support_handle.typesupport_identifier) {
    clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__ClipItem_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &clip_msgs__msg__ClipItem__rosidl_typesupport_introspection_c__ClipItem_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
