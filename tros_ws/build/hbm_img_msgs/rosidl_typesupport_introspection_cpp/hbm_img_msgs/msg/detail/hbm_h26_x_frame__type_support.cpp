// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from hbm_img_msgs:msg/HbmH26XFrame.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "hbm_img_msgs/msg/detail/hbm_h26_x_frame__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace hbm_img_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void HbmH26XFrame_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hbm_img_msgs::msg::HbmH26XFrame(_init);
}

void HbmH26XFrame_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hbm_img_msgs::msg::HbmH26XFrame *>(message_memory);
  typed_message->~HbmH26XFrame();
}

size_t size_function__HbmH26XFrame__encoding(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__HbmH26XFrame__encoding(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__HbmH26XFrame__encoding(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__HbmH26XFrame__encoding(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__HbmH26XFrame__encoding(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__HbmH26XFrame__encoding(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__HbmH26XFrame__encoding(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__HbmH26XFrame__data(const void * untyped_member)
{
  (void)untyped_member;
  return 512000;
}

const void * get_const_function__HbmH26XFrame__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 512000> *>(untyped_member);
  return &member[index];
}

void * get_function__HbmH26XFrame__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 512000> *>(untyped_member);
  return &member[index];
}

void fetch_function__HbmH26XFrame__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__HbmH26XFrame__data(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__HbmH26XFrame__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__HbmH26XFrame__data(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember HbmH26XFrame_message_member_array[8] = {
  {
    "index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hbm_img_msgs::msg::HbmH26XFrame, index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dts",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hbm_img_msgs::msg::HbmH26XFrame, dts),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pts",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hbm_img_msgs::msg::HbmH26XFrame, pts),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "encoding",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(hbm_img_msgs::msg::HbmH26XFrame, encoding),  // bytes offset in struct
    nullptr,  // default value
    size_function__HbmH26XFrame__encoding,  // size() function pointer
    get_const_function__HbmH26XFrame__encoding,  // get_const(index) function pointer
    get_function__HbmH26XFrame__encoding,  // get(index) function pointer
    fetch_function__HbmH26XFrame__encoding,  // fetch(index, &value) function pointer
    assign_function__HbmH26XFrame__encoding,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "height",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hbm_img_msgs::msg::HbmH26XFrame, height),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "width",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hbm_img_msgs::msg::HbmH26XFrame, width),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    512000,  // array size
    false,  // is upper bound
    offsetof(hbm_img_msgs::msg::HbmH26XFrame, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__HbmH26XFrame__data,  // size() function pointer
    get_const_function__HbmH26XFrame__data,  // get_const(index) function pointer
    get_function__HbmH26XFrame__data,  // get(index) function pointer
    fetch_function__HbmH26XFrame__data,  // fetch(index, &value) function pointer
    assign_function__HbmH26XFrame__data,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "data_size",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hbm_img_msgs::msg::HbmH26XFrame, data_size),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers HbmH26XFrame_message_members = {
  "hbm_img_msgs::msg",  // message namespace
  "HbmH26XFrame",  // message name
  8,  // number of fields
  sizeof(hbm_img_msgs::msg::HbmH26XFrame),
  HbmH26XFrame_message_member_array,  // message members
  HbmH26XFrame_init_function,  // function to initialize message memory (memory has to be allocated)
  HbmH26XFrame_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t HbmH26XFrame_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &HbmH26XFrame_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace hbm_img_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hbm_img_msgs::msg::HbmH26XFrame>()
{
  return &::hbm_img_msgs::msg::rosidl_typesupport_introspection_cpp::HbmH26XFrame_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hbm_img_msgs, msg, HbmH26XFrame)() {
  return &::hbm_img_msgs::msg::rosidl_typesupport_introspection_cpp::HbmH26XFrame_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
