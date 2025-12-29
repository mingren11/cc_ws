// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from clip_msgs:msg/ClipItem.idl
// generated code does not contain a copyright notice

#ifndef CLIP_MSGS__MSG__DETAIL__CLIP_ITEM__BUILDER_HPP_
#define CLIP_MSGS__MSG__DETAIL__CLIP_ITEM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "clip_msgs/msg/detail/clip_item__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace clip_msgs
{

namespace msg
{

namespace builder
{

class Init_ClipItem_extra
{
public:
  explicit Init_ClipItem_extra(::clip_msgs::msg::ClipItem & msg)
  : msg_(msg)
  {}
  ::clip_msgs::msg::ClipItem extra(::clip_msgs::msg::ClipItem::_extra_type arg)
  {
    msg_.extra = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clip_msgs::msg::ClipItem msg_;
};

class Init_ClipItem_feature
{
public:
  explicit Init_ClipItem_feature(::clip_msgs::msg::ClipItem & msg)
  : msg_(msg)
  {}
  Init_ClipItem_extra feature(::clip_msgs::msg::ClipItem::_feature_type arg)
  {
    msg_.feature = std::move(arg);
    return Init_ClipItem_extra(msg_);
  }

private:
  ::clip_msgs::msg::ClipItem msg_;
};

class Init_ClipItem_url
{
public:
  explicit Init_ClipItem_url(::clip_msgs::msg::ClipItem & msg)
  : msg_(msg)
  {}
  Init_ClipItem_feature url(::clip_msgs::msg::ClipItem::_url_type arg)
  {
    msg_.url = std::move(arg);
    return Init_ClipItem_feature(msg_);
  }

private:
  ::clip_msgs::msg::ClipItem msg_;
};

class Init_ClipItem_text
{
public:
  explicit Init_ClipItem_text(::clip_msgs::msg::ClipItem & msg)
  : msg_(msg)
  {}
  Init_ClipItem_url text(::clip_msgs::msg::ClipItem::_text_type arg)
  {
    msg_.text = std::move(arg);
    return Init_ClipItem_url(msg_);
  }

private:
  ::clip_msgs::msg::ClipItem msg_;
};

class Init_ClipItem_type
{
public:
  Init_ClipItem_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClipItem_text type(::clip_msgs::msg::ClipItem::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ClipItem_text(msg_);
  }

private:
  ::clip_msgs::msg::ClipItem msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::clip_msgs::msg::ClipItem>()
{
  return clip_msgs::msg::builder::Init_ClipItem_type();
}

}  // namespace clip_msgs

#endif  // CLIP_MSGS__MSG__DETAIL__CLIP_ITEM__BUILDER_HPP_
