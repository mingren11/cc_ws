// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hbm_img_msgs:msg/HbmH26XFrame.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hbm_img_msgs/msg/detail/hbm_h26_x_frame__rosidl_typesupport_introspection_c.h"
#include "hbm_img_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hbm_img_msgs/msg/detail/hbm_h26_x_frame__functions.h"
#include "hbm_img_msgs/msg/detail/hbm_h26_x_frame__struct.h"


// Include directives for member types
// Member `dts`
// Member `pts`
#include "builtin_interfaces/msg/time.h"
// Member `dts`
// Member `pts`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__HbmH26XFrame_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hbm_img_msgs__msg__HbmH26XFrame__init(message_memory);
}

void hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__HbmH26XFrame_fini_function(void * message_memory)
{
  hbm_img_msgs__msg__HbmH26XFrame__fini(message_memory);
}

size_t hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__size_function__HbmH26XFrame__encoding(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__get_const_function__HbmH26XFrame__encoding(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__get_function__HbmH26XFrame__encoding(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__fetch_function__HbmH26XFrame__encoding(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__get_const_function__HbmH26XFrame__encoding(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__assign_function__HbmH26XFrame__encoding(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__get_function__HbmH26XFrame__encoding(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__size_function__HbmH26XFrame__data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 512000;
}

const void * hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__get_const_function__HbmH26XFrame__data(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__get_function__HbmH26XFrame__data(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__fetch_function__HbmH26XFrame__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__get_const_function__HbmH26XFrame__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__assign_function__HbmH26XFrame__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__get_function__HbmH26XFrame__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__HbmH26XFrame_message_member_array[8] = {
  {
    "index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hbm_img_msgs__msg__HbmH26XFrame, index),  // bytes offset in struct
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
    offsetof(hbm_img_msgs__msg__HbmH26XFrame, dts),  // bytes offset in struct
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
    offsetof(hbm_img_msgs__msg__HbmH26XFrame, pts),  // bytes offset in struct
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
    offsetof(hbm_img_msgs__msg__HbmH26XFrame, encoding),  // bytes offset in struct
    NULL,  // default value
    hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__size_function__HbmH26XFrame__encoding,  // size() function pointer
    hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__get_const_function__HbmH26XFrame__encoding,  // get_const(index) function pointer
    hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__get_function__HbmH26XFrame__encoding,  // get(index) function pointer
    hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__fetch_function__HbmH26XFrame__encoding,  // fetch(index, &value) function pointer
    hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__assign_function__HbmH26XFrame__encoding,  // assign(index, value) function pointer
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
    offsetof(hbm_img_msgs__msg__HbmH26XFrame, height),  // bytes offset in struct
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
    offsetof(hbm_img_msgs__msg__HbmH26XFrame, width),  // bytes offset in struct
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
    512000,  // array size
    false,  // is upper bound
    offsetof(hbm_img_msgs__msg__HbmH26XFrame, data),  // bytes offset in struct
    NULL,  // default value
    hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__size_function__HbmH26XFrame__data,  // size() function pointer
    hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__get_const_function__HbmH26XFrame__data,  // get_const(index) function pointer
    hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__get_function__HbmH26XFrame__data,  // get(index) function pointer
    hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__fetch_function__HbmH26XFrame__data,  // fetch(index, &value) function pointer
    hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__assign_function__HbmH26XFrame__data,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hbm_img_msgs__msg__HbmH26XFrame, data_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__HbmH26XFrame_message_members = {
  "hbm_img_msgs__msg",  // message namespace
  "HbmH26XFrame",  // message name
  8,  // number of fields
  sizeof(hbm_img_msgs__msg__HbmH26XFrame),
  hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__HbmH26XFrame_message_member_array,  // message members
  hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__HbmH26XFrame_init_function,  // function to initialize message memory (memory has to be allocated)
  hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__HbmH26XFrame_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__HbmH26XFrame_message_type_support_handle = {
  0,
  &hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__HbmH26XFrame_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hbm_img_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hbm_img_msgs, msg, HbmH26XFrame)() {
  hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__HbmH26XFrame_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__HbmH26XFrame_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__HbmH26XFrame_message_type_support_handle.typesupport_identifier) {
    hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__HbmH26XFrame_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hbm_img_msgs__msg__HbmH26XFrame__rosidl_typesupport_introspection_c__HbmH26XFrame_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
