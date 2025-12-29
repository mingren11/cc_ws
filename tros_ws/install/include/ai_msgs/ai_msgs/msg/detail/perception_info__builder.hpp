// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ai_msgs:msg/PerceptionInfo.idl
// generated code does not contain a copyright notice

#ifndef AI_MSGS__MSG__DETAIL__PERCEPTION_INFO__BUILDER_HPP_
#define AI_MSGS__MSG__DETAIL__PERCEPTION_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ai_msgs/msg/detail/perception_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ai_msgs
{

namespace msg
{

namespace builder
{

class Init_PerceptionInfo_class_names
{
public:
  explicit Init_PerceptionInfo_class_names(::ai_msgs::msg::PerceptionInfo & msg)
  : msg_(msg)
  {}
  ::ai_msgs::msg::PerceptionInfo class_names(::ai_msgs::msg::PerceptionInfo::_class_names_type arg)
  {
    msg_.class_names = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ai_msgs::msg::PerceptionInfo msg_;
};

class Init_PerceptionInfo_width
{
public:
  explicit Init_PerceptionInfo_width(::ai_msgs::msg::PerceptionInfo & msg)
  : msg_(msg)
  {}
  Init_PerceptionInfo_class_names width(::ai_msgs::msg::PerceptionInfo::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_PerceptionInfo_class_names(msg_);
  }

private:
  ::ai_msgs::msg::PerceptionInfo msg_;
};

class Init_PerceptionInfo_height
{
public:
  explicit Init_PerceptionInfo_height(::ai_msgs::msg::PerceptionInfo & msg)
  : msg_(msg)
  {}
  Init_PerceptionInfo_width height(::ai_msgs::msg::PerceptionInfo::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_PerceptionInfo_width(msg_);
  }

private:
  ::ai_msgs::msg::PerceptionInfo msg_;
};

class Init_PerceptionInfo_header
{
public:
  Init_PerceptionInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PerceptionInfo_height header(::ai_msgs::msg::PerceptionInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PerceptionInfo_height(msg_);
  }

private:
  ::ai_msgs::msg::PerceptionInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ai_msgs::msg::PerceptionInfo>()
{
  return ai_msgs::msg::builder::Init_PerceptionInfo_header();
}

}  // namespace ai_msgs

#endif  // AI_MSGS__MSG__DETAIL__PERCEPTION_INFO__BUILDER_HPP_
