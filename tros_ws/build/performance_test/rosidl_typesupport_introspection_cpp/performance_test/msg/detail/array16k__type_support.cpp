// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from performance_test:msg/Array16k.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "performance_test/msg/detail/array16k__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace performance_test
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Array16k_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) performance_test::msg::Array16k(_init);
}

void Array16k_fini_function(void * message_memory)
{
  auto typed_message = static_cast<performance_test::msg::Array16k *>(message_memory);
  typed_message->~Array16k();
}

size_t size_function__Array16k__array(const void * untyped_member)
{
  (void)untyped_member;
  return 16384;
}

const void * get_const_function__Array16k__array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<unsigned char, 16384> *>(untyped_member);
  return &member[index];
}

void * get_function__Array16k__array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<unsigned char, 16384> *>(untyped_member);
  return &member[index];
}

void fetch_function__Array16k__array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const unsigned char *>(
    get_const_function__Array16k__array(untyped_member, index));
  auto & value = *reinterpret_cast<unsigned char *>(untyped_value);
  value = item;
}

void assign_function__Array16k__array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<unsigned char *>(
    get_function__Array16k__array(untyped_member, index));
  const auto & value = *reinterpret_cast<const unsigned char *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Array16k_message_member_array[3] = {
  {
    "array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    16384,  // array size
    false,  // is upper bound
    offsetof(performance_test::msg::Array16k, array),  // bytes offset in struct
    nullptr,  // default value
    size_function__Array16k__array,  // size() function pointer
    get_const_function__Array16k__array,  // get_const(index) function pointer
    get_function__Array16k__array,  // get(index) function pointer
    fetch_function__Array16k__array,  // fetch(index, &value) function pointer
    assign_function__Array16k__array,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(performance_test::msg::Array16k, time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(performance_test::msg::Array16k, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Array16k_message_members = {
  "performance_test::msg",  // message namespace
  "Array16k",  // message name
  3,  // number of fields
  sizeof(performance_test::msg::Array16k),
  Array16k_message_member_array,  // message members
  Array16k_init_function,  // function to initialize message memory (memory has to be allocated)
  Array16k_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Array16k_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Array16k_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace performance_test


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<performance_test::msg::Array16k>()
{
  return &::performance_test::msg::rosidl_typesupport_introspection_cpp::Array16k_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, performance_test, msg, Array16k)() {
  return &::performance_test::msg::rosidl_typesupport_introspection_cpp::Array16k_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
