// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from hbm_img_msgs:msg/HbmMsg540P.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "hbm_img_msgs/msg/detail/hbm_msg540_p__struct.hpp"
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

void HbmMsg540P_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hbm_img_msgs::msg::HbmMsg540P(_init);
}

void HbmMsg540P_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hbm_img_msgs::msg::HbmMsg540P *>(message_memory);
  typed_message->~HbmMsg540P();
}

size_t size_function__HbmMsg540P__encoding(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__HbmMsg540P__encoding(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__HbmMsg540P__encoding(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__HbmMsg540P__encoding(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__HbmMsg540P__encoding(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__HbmMsg540P__encoding(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__HbmMsg540P__encoding(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__HbmMsg540P__data(const void * untyped_member)
{
  (void)untyped_member;
  return 1555200;
}

const void * get_const_function__HbmMsg540P__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 1555200> *>(untyped_member);
  return &member[index];
}

void * get_function__HbmMsg540P__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 1555200> *>(untyped_member);
  return &member[index];
}

void fetch_function__HbmMsg540P__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__HbmMsg540P__data(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__HbmMsg540P__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__HbmMsg540P__data(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember HbmMsg540P_message_member_array[8] = {
  {
    "index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hbm_img_msgs::msg::HbmMsg540P, index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "time_stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hbm_img_msgs::msg::HbmMsg540P, time_stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
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
    offsetof(hbm_img_msgs::msg::HbmMsg540P, height),  // bytes offset in struct
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
    offsetof(hbm_img_msgs::msg::HbmMsg540P, width),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
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
    offsetof(hbm_img_msgs::msg::HbmMsg540P, data_size),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "step",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hbm_img_msgs::msg::HbmMsg540P, step),  // bytes offset in struct
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
    offsetof(hbm_img_msgs::msg::HbmMsg540P, encoding),  // bytes offset in struct
    nullptr,  // default value
    size_function__HbmMsg540P__encoding,  // size() function pointer
    get_const_function__HbmMsg540P__encoding,  // get_const(index) function pointer
    get_function__HbmMsg540P__encoding,  // get(index) function pointer
    fetch_function__HbmMsg540P__encoding,  // fetch(index, &value) function pointer
    assign_function__HbmMsg540P__encoding,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    1555200,  // array size
    false,  // is upper bound
    offsetof(hbm_img_msgs::msg::HbmMsg540P, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__HbmMsg540P__data,  // size() function pointer
    get_const_function__HbmMsg540P__data,  // get_const(index) function pointer
    get_function__HbmMsg540P__data,  // get(index) function pointer
    fetch_function__HbmMsg540P__data,  // fetch(index, &value) function pointer
    assign_function__HbmMsg540P__data,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers HbmMsg540P_message_members = {
  "hbm_img_msgs::msg",  // message namespace
  "HbmMsg540P",  // message name
  8,  // number of fields
  sizeof(hbm_img_msgs::msg::HbmMsg540P),
  HbmMsg540P_message_member_array,  // message members
  HbmMsg540P_init_function,  // function to initialize message memory (memory has to be allocated)
  HbmMsg540P_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t HbmMsg540P_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &HbmMsg540P_message_members,
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
get_message_type_support_handle<hbm_img_msgs::msg::HbmMsg540P>()
{
  return &::hbm_img_msgs::msg::rosidl_typesupport_introspection_cpp::HbmMsg540P_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hbm_img_msgs, msg, HbmMsg540P)() {
  return &::hbm_img_msgs::msg::rosidl_typesupport_introspection_cpp::HbmMsg540P_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
