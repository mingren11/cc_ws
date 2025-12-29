// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from performance_test:msg/Array32k.idl
// generated code does not contain a copyright notice

#ifndef PERFORMANCE_TEST__MSG__DETAIL__ARRAY32K__BUILDER_HPP_
#define PERFORMANCE_TEST__MSG__DETAIL__ARRAY32K__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "performance_test/msg/detail/array32k__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace performance_test
{

namespace msg
{

namespace builder
{

class Init_Array32k_id
{
public:
  explicit Init_Array32k_id(::performance_test::msg::Array32k & msg)
  : msg_(msg)
  {}
  ::performance_test::msg::Array32k id(::performance_test::msg::Array32k::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::performance_test::msg::Array32k msg_;
};

class Init_Array32k_time
{
public:
  explicit Init_Array32k_time(::performance_test::msg::Array32k & msg)
  : msg_(msg)
  {}
  Init_Array32k_id time(::performance_test::msg::Array32k::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_Array32k_id(msg_);
  }

private:
  ::performance_test::msg::Array32k msg_;
};

class Init_Array32k_array
{
public:
  Init_Array32k_array()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Array32k_time array(::performance_test::msg::Array32k::_array_type arg)
  {
    msg_.array = std::move(arg);
    return Init_Array32k_time(msg_);
  }

private:
  ::performance_test::msg::Array32k msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::performance_test::msg::Array32k>()
{
  return performance_test::msg::builder::Init_Array32k_array();
}

}  // namespace performance_test

#endif  // PERFORMANCE_TEST__MSG__DETAIL__ARRAY32K__BUILDER_HPP_
