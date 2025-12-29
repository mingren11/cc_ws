// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from performance_test:msg/Array1m.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "performance_test/msg/detail/array1m__struct.hpp"
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

void Array1m_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) performance_test::msg::Array1m(_init);
}

void Array1m_fini_function(void * message_memory)
{
  auto typed_message = static_cast<performance_test::msg::Array1m *>(message_memory);
  typed_message->~Array1m();
}

size_t size_function__Array1m__array(const void * untyped_member)
{
  (void)untyped_member;
  return 1048576;
}

const void * get_const_function__Array1m__array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<unsigned char, 1048576> *>(untyped_member);
  return &member[index];
}

void * get_function__Array1m__array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<unsigned char, 1048576> *>(untyped_member);
  return &member[index];
}

void fetch_function__Array1m__array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const unsigned char *>(
    get_const_function__Array1m__array(untyped_member, index));
  auto & value = *reinterpret_cast<unsigned char *>(untyped_value);
  value = item;
}

void assign_function__Array1m__array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<unsigned char *>(
    get_function__Array1m__array(untyped_member, index));
  const auto & value = *reinterpret_cast<const unsigned char *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Array1m_message_member_array[3] = {
  {
    "array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    1048576,  // array size
    false,  // is upper bound
    offsetof(performance_test::msg::Array1m, array),  // bytes offset in struct
    nullptr,  // default value
    size_function__Array1m__array,  // size() function pointer
    get_const_function__Array1m__array,  // get_const(index) function pointer
    get_function__Array1m__array,  // get(index) function pointer
    fetch_function__Array1m__array,  // fetch(index, &value) function pointer
    assign_function__Array1m__array,  // assign(index, value) function pointer
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
    offsetof(performance_test::msg::Array1m, time),  // bytes offset in struct
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
    offsetof(performance_test::msg::Array1m, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Array1m_message_members = {
  "performance_test::msg",  // message namespace
  "Array1m",  // message name
  3,  // number of fields
  sizeof(performance_test::msg::Array1m),
  Array1m_message_member_array,  // message members
  Array1m_init_function,  // function to initialize message memory (memory has to be allocated)
  Array1m_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Array1m_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Array1m_message_members,
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
get_message_type_support_handle<performance_test::msg::Array1m>()
{
  return &::performance_test::msg::rosidl_typesupport_introspection_cpp::Array1m_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, performance_test, msg, Array1m)() {
  return &::performance_test::msg::rosidl_typesupport_introspection_cpp::Array1m_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
