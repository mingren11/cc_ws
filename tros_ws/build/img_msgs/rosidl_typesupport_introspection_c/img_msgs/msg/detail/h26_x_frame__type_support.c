// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from img_msgs:msg/H26XFrame.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "img_msgs/msg/detail/h26_x_frame__rosidl_typesupport_introspection_c.h"
#include "img_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "img_msgs/msg/detail/h26_x_frame__functions.h"
#include "img_msgs/msg/detail/h26_x_frame__struct.h"


// Include directives for member types
// Member `dts`
// Member `pts`
#include "builtin_interfaces/msg/time.h"
// Member `dts`
// Member `pts`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__H26XFrame_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  img_msgs__msg__H26XFrame__init(message_memory);
}

void img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__H26XFrame_fini_function(void * message_memory)
{
  img_msgs__msg__H26XFrame__fini(message_memory);
}

size_t img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__size_function__H26XFrame__encoding(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__get_const_function__H26XFrame__encoding(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__get_function__H26XFrame__encoding(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__fetch_function__H26XFrame__encoding(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__get_const_function__H26XFrame__encoding(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__assign_function__H26XFrame__encoding(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__get_function__H26XFrame__encoding(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__size_function__H26XFrame__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__get_const_function__H26XFrame__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__get_function__H26XFrame__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__fetch_function__H26XFrame__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__get_const_function__H26XFrame__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__assign_function__H26XFrame__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__get_function__H26XFrame__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__resize_function__H26XFrame__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__H26XFrame_message_member_array[7] = {
  {
    "index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(img_msgs__msg__H26XFrame, index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "encoding",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(img_msgs__msg__H26XFrame, encoding),  // bytes offset in struct
    NULL,  // default value
    img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__size_function__H26XFrame__encoding,  // size() function pointer
    img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__get_const_function__H26XFrame__encoding,  // get_const(index) function pointer
    img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__get_function__H26XFrame__encoding,  // get(index) function pointer
    img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__fetch_function__H26XFrame__encoding,  // fetch(index, &value) function pointer
    img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__assign_function__H26XFrame__encoding,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(img_msgs__msg__H26XFrame, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(img_msgs__msg__H26XFrame, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(img_msgs__msg__H26XFrame, dts),  // bytes offset in struct
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
    offsetof(img_msgs__msg__H26XFrame, pts),  // bytes offset in struct
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
    offsetof(img_msgs__msg__H26XFrame, data),  // bytes offset in struct
    NULL,  // default value
    img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__size_function__H26XFrame__data,  // size() function pointer
    img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__get_const_function__H26XFrame__data,  // get_const(index) function pointer
    img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__get_function__H26XFrame__data,  // get(index) function pointer
    img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__fetch_function__H26XFrame__data,  // fetch(index, &value) function pointer
    img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__assign_function__H26XFrame__data,  // assign(index, value) function pointer
    img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__resize_function__H26XFrame__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__H26XFrame_message_members = {
  "img_msgs__msg",  // message namespace
  "H26XFrame",  // message name
  7,  // number of fields
  sizeof(img_msgs__msg__H26XFrame),
  img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__H26XFrame_message_member_array,  // message members
  img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__H26XFrame_init_function,  // function to initialize message memory (memory has to be allocated)
  img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__H26XFrame_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__H26XFrame_message_type_support_handle = {
  0,
  &img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__H26XFrame_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_img_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, img_msgs, msg, H26XFrame)() {
  img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__H26XFrame_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__H26XFrame_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__H26XFrame_message_type_support_handle.typesupport_identifier) {
    img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__H26XFrame_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &img_msgs__msg__H26XFrame__rosidl_typesupport_introspection_c__H26XFrame_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
