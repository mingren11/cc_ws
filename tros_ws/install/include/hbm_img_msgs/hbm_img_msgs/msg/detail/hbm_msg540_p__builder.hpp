// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hbm_img_msgs:msg/HbmMsg540P.idl
// generated code does not contain a copyright notice

#ifndef HBM_IMG_MSGS__MSG__DETAIL__HBM_MSG540_P__BUILDER_HPP_
#define HBM_IMG_MSGS__MSG__DETAIL__HBM_MSG540_P__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hbm_img_msgs/msg/detail/hbm_msg540_p__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hbm_img_msgs
{

namespace msg
{

namespace builder
{

class Init_HbmMsg540P_data
{
public:
  explicit Init_HbmMsg540P_data(::hbm_img_msgs::msg::HbmMsg540P & msg)
  : msg_(msg)
  {}
  ::hbm_img_msgs::msg::HbmMsg540P data(::hbm_img_msgs::msg::HbmMsg540P::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hbm_img_msgs::msg::HbmMsg540P msg_;
};

class Init_HbmMsg540P_encoding
{
public:
  explicit Init_HbmMsg540P_encoding(::hbm_img_msgs::msg::HbmMsg540P & msg)
  : msg_(msg)
  {}
  Init_HbmMsg540P_data encoding(::hbm_img_msgs::msg::HbmMsg540P::_encoding_type arg)
  {
    msg_.encoding = std::move(arg);
    return Init_HbmMsg540P_data(msg_);
  }

private:
  ::hbm_img_msgs::msg::HbmMsg540P msg_;
};

class Init_HbmMsg540P_step
{
public:
  explicit Init_HbmMsg540P_step(::hbm_img_msgs::msg::HbmMsg540P & msg)
  : msg_(msg)
  {}
  Init_HbmMsg540P_encoding step(::hbm_img_msgs::msg::HbmMsg540P::_step_type arg)
  {
    msg_.step = std::move(arg);
    return Init_HbmMsg540P_encoding(msg_);
  }

private:
  ::hbm_img_msgs::msg::HbmMsg540P msg_;
};

class Init_HbmMsg540P_data_size
{
public:
  explicit Init_HbmMsg540P_data_size(::hbm_img_msgs::msg::HbmMsg540P & msg)
  : msg_(msg)
  {}
  Init_HbmMsg540P_step data_size(::hbm_img_msgs::msg::HbmMsg540P::_data_size_type arg)
  {
    msg_.data_size = std::move(arg);
    return Init_HbmMsg540P_step(msg_);
  }

private:
  ::hbm_img_msgs::msg::HbmMsg540P msg_;
};

class Init_HbmMsg540P_width
{
public:
  explicit Init_HbmMsg540P_width(::hbm_img_msgs::msg::HbmMsg540P & msg)
  : msg_(msg)
  {}
  Init_HbmMsg540P_data_size width(::hbm_img_msgs::msg::HbmMsg540P::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_HbmMsg540P_data_size(msg_);
  }

private:
  ::hbm_img_msgs::msg::HbmMsg540P msg_;
};

class Init_HbmMsg540P_height
{
public:
  explicit Init_HbmMsg540P_height(::hbm_img_msgs::msg::HbmMsg540P & msg)
  : msg_(msg)
  {}
  Init_HbmMsg540P_width height(::hbm_img_msgs::msg::HbmMsg540P::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_HbmMsg540P_width(msg_);
  }

private:
  ::hbm_img_msgs::msg::HbmMsg540P msg_;
};

class Init_HbmMsg540P_time_stamp
{
public:
  explicit Init_HbmMsg540P_time_stamp(::hbm_img_msgs::msg::HbmMsg540P & msg)
  : msg_(msg)
  {}
  Init_HbmMsg540P_height time_stamp(::hbm_img_msgs::msg::HbmMsg540P::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_HbmMsg540P_height(msg_);
  }

private:
  ::hbm_img_msgs::msg::HbmMsg540P msg_;
};

class Init_HbmMsg540P_index
{
public:
  Init_HbmMsg540P_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HbmMsg540P_time_stamp index(::hbm_img_msgs::msg::HbmMsg540P::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_HbmMsg540P_time_stamp(msg_);
  }

private:
  ::hbm_img_msgs::msg::HbmMsg540P msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hbm_img_msgs::msg::HbmMsg540P>()
{
  return hbm_img_msgs::msg::builder::Init_HbmMsg540P_index();
}

}  // namespace hbm_img_msgs

#endif  // HBM_IMG_MSGS__MSG__DETAIL__HBM_MSG540_P__BUILDER_HPP_
