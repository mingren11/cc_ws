// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hbm_img_msgs:msg/HbmH26XFrame.idl
// generated code does not contain a copyright notice

#ifndef HBM_IMG_MSGS__MSG__DETAIL__HBM_H26_X_FRAME__BUILDER_HPP_
#define HBM_IMG_MSGS__MSG__DETAIL__HBM_H26_X_FRAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hbm_img_msgs/msg/detail/hbm_h26_x_frame__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hbm_img_msgs
{

namespace msg
{

namespace builder
{

class Init_HbmH26XFrame_data_size
{
public:
  explicit Init_HbmH26XFrame_data_size(::hbm_img_msgs::msg::HbmH26XFrame & msg)
  : msg_(msg)
  {}
  ::hbm_img_msgs::msg::HbmH26XFrame data_size(::hbm_img_msgs::msg::HbmH26XFrame::_data_size_type arg)
  {
    msg_.data_size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hbm_img_msgs::msg::HbmH26XFrame msg_;
};

class Init_HbmH26XFrame_data
{
public:
  explicit Init_HbmH26XFrame_data(::hbm_img_msgs::msg::HbmH26XFrame & msg)
  : msg_(msg)
  {}
  Init_HbmH26XFrame_data_size data(::hbm_img_msgs::msg::HbmH26XFrame::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_HbmH26XFrame_data_size(msg_);
  }

private:
  ::hbm_img_msgs::msg::HbmH26XFrame msg_;
};

class Init_HbmH26XFrame_width
{
public:
  explicit Init_HbmH26XFrame_width(::hbm_img_msgs::msg::HbmH26XFrame & msg)
  : msg_(msg)
  {}
  Init_HbmH26XFrame_data width(::hbm_img_msgs::msg::HbmH26XFrame::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_HbmH26XFrame_data(msg_);
  }

private:
  ::hbm_img_msgs::msg::HbmH26XFrame msg_;
};

class Init_HbmH26XFrame_height
{
public:
  explicit Init_HbmH26XFrame_height(::hbm_img_msgs::msg::HbmH26XFrame & msg)
  : msg_(msg)
  {}
  Init_HbmH26XFrame_width height(::hbm_img_msgs::msg::HbmH26XFrame::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_HbmH26XFrame_width(msg_);
  }

private:
  ::hbm_img_msgs::msg::HbmH26XFrame msg_;
};

class Init_HbmH26XFrame_encoding
{
public:
  explicit Init_HbmH26XFrame_encoding(::hbm_img_msgs::msg::HbmH26XFrame & msg)
  : msg_(msg)
  {}
  Init_HbmH26XFrame_height encoding(::hbm_img_msgs::msg::HbmH26XFrame::_encoding_type arg)
  {
    msg_.encoding = std::move(arg);
    return Init_HbmH26XFrame_height(msg_);
  }

private:
  ::hbm_img_msgs::msg::HbmH26XFrame msg_;
};

class Init_HbmH26XFrame_pts
{
public:
  explicit Init_HbmH26XFrame_pts(::hbm_img_msgs::msg::HbmH26XFrame & msg)
  : msg_(msg)
  {}
  Init_HbmH26XFrame_encoding pts(::hbm_img_msgs::msg::HbmH26XFrame::_pts_type arg)
  {
    msg_.pts = std::move(arg);
    return Init_HbmH26XFrame_encoding(msg_);
  }

private:
  ::hbm_img_msgs::msg::HbmH26XFrame msg_;
};

class Init_HbmH26XFrame_dts
{
public:
  explicit Init_HbmH26XFrame_dts(::hbm_img_msgs::msg::HbmH26XFrame & msg)
  : msg_(msg)
  {}
  Init_HbmH26XFrame_pts dts(::hbm_img_msgs::msg::HbmH26XFrame::_dts_type arg)
  {
    msg_.dts = std::move(arg);
    return Init_HbmH26XFrame_pts(msg_);
  }

private:
  ::hbm_img_msgs::msg::HbmH26XFrame msg_;
};

class Init_HbmH26XFrame_index
{
public:
  Init_HbmH26XFrame_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HbmH26XFrame_dts index(::hbm_img_msgs::msg::HbmH26XFrame::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_HbmH26XFrame_dts(msg_);
  }

private:
  ::hbm_img_msgs::msg::HbmH26XFrame msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hbm_img_msgs::msg::HbmH26XFrame>()
{
  return hbm_img_msgs::msg::builder::Init_HbmH26XFrame_index();
}

}  // namespace hbm_img_msgs

#endif  // HBM_IMG_MSGS__MSG__DETAIL__HBM_H26_X_FRAME__BUILDER_HPP_
