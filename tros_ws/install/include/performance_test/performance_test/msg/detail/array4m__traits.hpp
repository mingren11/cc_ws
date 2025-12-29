// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from performance_test:msg/Array4m.idl
// generated code does not contain a copyright notice

#ifndef PERFORMANCE_TEST__MSG__DETAIL__ARRAY4M__TRAITS_HPP_
#define PERFORMANCE_TEST__MSG__DETAIL__ARRAY4M__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "performance_test/msg/detail/array4m__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace performance_test
{

namespace msg
{

inline void to_flow_style_yaml(
  const Array4m & msg,
  std::ostream & out)
{
  out << "{";
  // member: array
  {
    if (msg.array.size() == 0) {
      out << "array: []";
    } else {
      out << "array: [";
      size_t pending_items = msg.array.size();
      for (auto item : msg.array) {
        rosidl_generator_traits::character_value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Array4m & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.array.size() == 0) {
      out << "array: []\n";
    } else {
      out << "array:\n";
      for (auto item : msg.array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::character_value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Array4m & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace performance_test

namespace rosidl_generator_traits
{

[[deprecated("use performance_test::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const performance_test::msg::Array4m & msg,
  std::ostream & out, size_t indentation = 0)
{
  performance_test::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use performance_test::msg::to_yaml() instead")]]
inline std::string to_yaml(const performance_test::msg::Array4m & msg)
{
  return performance_test::msg::to_yaml(msg);
}

template<>
inline const char * data_type<performance_test::msg::Array4m>()
{
  return "performance_test::msg::Array4m";
}

template<>
inline const char * name<performance_test::msg::Array4m>()
{
  return "performance_test/msg/Array4m";
}

template<>
struct has_fixed_size<performance_test::msg::Array4m>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<performance_test::msg::Array4m>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<performance_test::msg::Array4m>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PERFORMANCE_TEST__MSG__DETAIL__ARRAY4M__TRAITS_HPP_
