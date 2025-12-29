// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from img_msgs:msg/H26XFrame.idl
// generated code does not contain a copyright notice

#ifndef IMG_MSGS__MSG__DETAIL__H26_X_FRAME__BUILDER_HPP_
#define IMG_MSGS__MSG__DETAIL__H26_X_FRAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "img_msgs/msg/detail/h26_x_frame__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace img_msgs
{

namespace msg
{

namespace builder
{

class Init_H26XFrame_data
{
public:
  explicit Init_H26XFrame_data(::img_msgs::msg::H26XFrame & msg)
  : msg_(msg)
  {}
  ::img_msgs::msg::H26XFrame data(::img_msgs::msg::H26XFrame::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::img_msgs::msg::H26XFrame msg_;
};

class Init_H26XFrame_pts
{
public:
  explicit Init_H26XFrame_pts(::img_msgs::msg::H26XFrame & msg)
  : msg_(msg)
  {}
  Init_H26XFrame_data pts(::img_msgs::msg::H26XFrame::_pts_type arg)
  {
    msg_.pts = std::move(arg);
    return Init_H26XFrame_data(msg_);
  }

private:
  ::img_msgs::msg::H26XFrame msg_;
};

class Init_H26XFrame_dts
{
public:
  explicit Init_H26XFrame_dts(::img_msgs::msg::H26XFrame & msg)
  : msg_(msg)
  {}
  Init_H26XFrame_pts dts(::img_msgs::msg::H26XFrame::_dts_type arg)
  {
    msg_.dts = std::move(arg);
    return Init_H26XFrame_pts(msg_);
  }

private:
  ::img_msgs::msg::H26XFrame msg_;
};

class Init_H26XFrame_width
{
public:
  explicit Init_H26XFrame_width(::img_msgs::msg::H26XFrame & msg)
  : msg_(msg)
  {}
  Init_H26XFrame_dts width(::img_msgs::msg::H26XFrame::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_H26XFrame_dts(msg_);
  }

private:
  ::img_msgs::msg::H26XFrame msg_;
};

class Init_H26XFrame_height
{
public:
  explicit Init_H26XFrame_height(::img_msgs::msg::H26XFrame & msg)
  : msg_(msg)
  {}
  Init_H26XFrame_width height(::img_msgs::msg::H26XFrame::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_H26XFrame_width(msg_);
  }

private:
  ::img_msgs::msg::H26XFrame msg_;
};

class Init_H26XFrame_encoding
{
public:
  explicit Init_H26XFrame_encoding(::img_msgs::msg::H26XFrame & msg)
  : msg_(msg)
  {}
  Init_H26XFrame_height encoding(::img_msgs::msg::H26XFrame::_encoding_type arg)
  {
    msg_.encoding = std::move(arg);
    return Init_H26XFrame_height(msg_);
  }

private:
  ::img_msgs::msg::H26XFrame msg_;
};

class Init_H26XFrame_index
{
public:
  Init_H26XFrame_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_H26XFrame_encoding index(::img_msgs::msg::H26XFrame::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_H26XFrame_encoding(msg_);
  }

private:
  ::img_msgs::msg::H26XFrame msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::img_msgs::msg::H26XFrame>()
{
  return img_msgs::msg::builder::Init_H26XFrame_index();
}

}  // namespace img_msgs

#endif  // IMG_MSGS__MSG__DETAIL__H26_X_FRAME__BUILDER_HPP_
