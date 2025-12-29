// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from performance_test:msg/Array1m.idl
// generated code does not contain a copyright notice

#ifndef PERFORMANCE_TEST__MSG__DETAIL__ARRAY1M__BUILDER_HPP_
#define PERFORMANCE_TEST__MSG__DETAIL__ARRAY1M__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "performance_test/msg/detail/array1m__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace performance_test
{

namespace msg
{

namespace builder
{

class Init_Array1m_id
{
public:
  explicit Init_Array1m_id(::performance_test::msg::Array1m & msg)
  : msg_(msg)
  {}
  ::performance_test::msg::Array1m id(::performance_test::msg::Array1m::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::performance_test::msg::Array1m msg_;
};

class Init_Array1m_time
{
public:
  explicit Init_Array1m_time(::performance_test::msg::Array1m & msg)
  : msg_(msg)
  {}
  Init_Array1m_id time(::performance_test::msg::Array1m::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_Array1m_id(msg_);
  }

private:
  ::performance_test::msg::Array1m msg_;
};

class Init_Array1m_array
{
public:
  Init_Array1m_array()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Array1m_time array(::performance_test::msg::Array1m::_array_type arg)
  {
    msg_.array = std::move(arg);
    return Init_Array1m_time(msg_);
  }

private:
  ::performance_test::msg::Array1m msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::performance_test::msg::Array1m>()
{
  return performance_test::msg::builder::Init_Array1m_array();
}

}  // namespace performance_test

#endif  // PERFORMANCE_TEST__MSG__DETAIL__ARRAY1M__BUILDER_HPP_
