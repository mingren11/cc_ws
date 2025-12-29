// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ai_msgs:msg/Perf.idl
// generated code does not contain a copyright notice

#ifndef AI_MSGS__MSG__DETAIL__PERF__TRAITS_HPP_
#define AI_MSGS__MSG__DETAIL__PERF__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ai_msgs/msg/detail/perf__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp_start'
// Member 'stamp_end'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace ai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Perf & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: stamp_start
  {
    out << "stamp_start: ";
    to_flow_style_yaml(msg.stamp_start, out);
    out << ", ";
  }

  // member: stamp_end
  {
    out << "stamp_end: ";
    to_flow_style_yaml(msg.stamp_end, out);
    out << ", ";
  }

  // member: time_ms_duration
  {
    out << "time_ms_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.time_ms_duration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Perf & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: stamp_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp_start:\n";
    to_block_style_yaml(msg.stamp_start, out, indentation + 2);
  }

  // member: stamp_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp_end:\n";
    to_block_style_yaml(msg.stamp_end, out, indentation + 2);
  }

  // member: time_ms_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_ms_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.time_ms_duration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Perf & msg, bool use_flow_style = false)
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

}  // namespace ai_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ai_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ai_msgs::msg::Perf & msg,
  std::ostream & out, size_t indentation = 0)
{
  ai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ai_msgs::msg::Perf & msg)
{
  return ai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ai_msgs::msg::Perf>()
{
  return "ai_msgs::msg::Perf";
}

template<>
inline const char * name<ai_msgs::msg::Perf>()
{
  return "ai_msgs/msg/Perf";
}

template<>
struct has_fixed_size<ai_msgs::msg::Perf>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ai_msgs::msg::Perf>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ai_msgs::msg::Perf>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AI_MSGS__MSG__DETAIL__PERF__TRAITS_HPP_
