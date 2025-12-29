// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from performance_test:msg/Array16k.idl
// generated code does not contain a copyright notice

#ifndef PERFORMANCE_TEST__MSG__DETAIL__ARRAY16K__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define PERFORMANCE_TEST__MSG__DETAIL__ARRAY16K__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "performance_test/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "performance_test/msg/detail/array16k__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace performance_test
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_performance_test
cdr_serialize(
  const performance_test::msg::Array16k & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_performance_test
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  performance_test::msg::Array16k & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_performance_test
get_serialized_size(
  const performance_test::msg::Array16k & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_performance_test
max_serialized_size_Array16k(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace performance_test

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_performance_test
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, performance_test, msg, Array16k)();

#ifdef __cplusplus
}
#endif

#endif  // PERFORMANCE_TEST__MSG__DETAIL__ARRAY16K__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
