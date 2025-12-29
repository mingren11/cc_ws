// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from performance_test:msg/Array256k.idl
// generated code does not contain a copyright notice

#ifndef PERFORMANCE_TEST__MSG__DETAIL__ARRAY256K__BUILDER_HPP_
#define PERFORMANCE_TEST__MSG__DETAIL__ARRAY256K__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "performance_test/msg/detail/array256k__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace performance_test
{

namespace msg
{

namespace builder
{

class Init_Array256k_id
{
public:
  explicit Init_Array256k_id(::performance_test::msg::Array256k & msg)
  : msg_(msg)
  {}
  ::performance_test::msg::Array256k id(::performance_test::msg::Array256k::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::performance_test::msg::Array256k msg_;
};

class Init_Array256k_time
{
public:
  explicit Init_Array256k_time(::performance_test::msg::Array256k & msg)
  : msg_(msg)
  {}
  Init_Array256k_id time(::performance_test::msg::Array256k::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_Array256k_id(msg_);
  }

private:
  ::performance_test::msg::Array256k msg_;
};

class Init_Array256k_array
{
public:
  Init_Array256k_array()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Array256k_time array(::performance_test::msg::Array256k::_array_type arg)
  {
    msg_.array = std::move(arg);
    return Init_Array256k_time(msg_);
  }

private:
  ::performance_test::msg::Array256k msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::performance_test::msg::Array256k>()
{
  return performance_test::msg::builder::Init_Array256k_array();
}

}  // namespace performance_test

#endif  // PERFORMANCE_TEST__MSG__DETAIL__ARRAY256K__BUILDER_HPP_
