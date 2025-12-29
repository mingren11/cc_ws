// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from img_msgs:msg/H26XFrame.idl
// generated code does not contain a copyright notice

#ifndef IMG_MSGS__MSG__DETAIL__H26_X_FRAME__STRUCT_HPP_
#define IMG_MSGS__MSG__DETAIL__H26_X_FRAME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'dts'
// Member 'pts'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__img_msgs__msg__H26XFrame __attribute__((deprecated))
#else
# define DEPRECATED__img_msgs__msg__H26XFrame __declspec(deprecated)
#endif

namespace img_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct H26XFrame_
{
  using Type = H26XFrame_<ContainerAllocator>;

  explicit H26XFrame_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : dts(_init),
    pts(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0ul;
      std::fill<typename std::array<uint8_t, 12>::iterator, uint8_t>(this->encoding.begin(), this->encoding.end(), 0);
      this->height = 0ul;
      this->width = 0ul;
    }
  }

  explicit H26XFrame_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : encoding(_alloc),
    dts(_alloc, _init),
    pts(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0ul;
      std::fill<typename std::array<uint8_t, 12>::iterator, uint8_t>(this->encoding.begin(), this->encoding.end(), 0);
      this->height = 0ul;
      this->width = 0ul;
    }
  }

  // field types and members
  using _index_type =
    uint32_t;
  _index_type index;
  using _encoding_type =
    std::array<uint8_t, 12>;
  _encoding_type encoding;
  using _height_type =
    uint32_t;
  _height_type height;
  using _width_type =
    uint32_t;
  _width_type width;
  using _dts_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _dts_type dts;
  using _pts_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _pts_type pts;
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__index(
    const uint32_t & _arg)
  {
    this->index = _arg;
    return *this;
  }
  Type & set__encoding(
    const std::array<uint8_t, 12> & _arg)
  {
    this->encoding = _arg;
    return *this;
  }
  Type & set__height(
    const uint32_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__width(
    const uint32_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__dts(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->dts = _arg;
    return *this;
  }
  Type & set__pts(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->pts = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    img_msgs::msg::H26XFrame_<ContainerAllocator> *;
  using ConstRawPtr =
    const img_msgs::msg::H26XFrame_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<img_msgs::msg::H26XFrame_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<img_msgs::msg::H26XFrame_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      img_msgs::msg::H26XFrame_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<img_msgs::msg::H26XFrame_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      img_msgs::msg::H26XFrame_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<img_msgs::msg::H26XFrame_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<img_msgs::msg::H26XFrame_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<img_msgs::msg::H26XFrame_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__img_msgs__msg__H26XFrame
    std::shared_ptr<img_msgs::msg::H26XFrame_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__img_msgs__msg__H26XFrame
    std::shared_ptr<img_msgs::msg::H26XFrame_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const H26XFrame_ & other) const
  {
    if (this->index != other.index) {
      return false;
    }
    if (this->encoding != other.encoding) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->dts != other.dts) {
      return false;
    }
    if (this->pts != other.pts) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const H26XFrame_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct H26XFrame_

// alias to use template instance with default allocator
using H26XFrame =
  img_msgs::msg::H26XFrame_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace img_msgs

#endif  // IMG_MSGS__MSG__DETAIL__H26_X_FRAME__STRUCT_HPP_
