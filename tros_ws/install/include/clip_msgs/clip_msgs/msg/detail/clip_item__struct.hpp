// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from clip_msgs:msg/ClipItem.idl
// generated code does not contain a copyright notice

#ifndef CLIP_MSGS__MSG__DETAIL__CLIP_ITEM__STRUCT_HPP_
#define CLIP_MSGS__MSG__DETAIL__CLIP_ITEM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__clip_msgs__msg__ClipItem __attribute__((deprecated))
#else
# define DEPRECATED__clip_msgs__msg__ClipItem __declspec(deprecated)
#endif

namespace clip_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ClipItem_
{
  using Type = ClipItem_<ContainerAllocator>;

  explicit ClipItem_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = false;
      this->text = "";
      this->url = "";
    }
  }

  explicit ClipItem_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : text(_alloc),
    url(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = false;
      this->text = "";
      this->url = "";
    }
  }

  // field types and members
  using _type_type =
    bool;
  _type_type type;
  using _text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _text_type text;
  using _url_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _url_type url;
  using _feature_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _feature_type feature;
  using _extra_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _extra_type extra;

  // setters for named parameter idiom
  Type & set__type(
    const bool & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->text = _arg;
    return *this;
  }
  Type & set__url(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->url = _arg;
    return *this;
  }
  Type & set__feature(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->feature = _arg;
    return *this;
  }
  Type & set__extra(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->extra = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    clip_msgs::msg::ClipItem_<ContainerAllocator> *;
  using ConstRawPtr =
    const clip_msgs::msg::ClipItem_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<clip_msgs::msg::ClipItem_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<clip_msgs::msg::ClipItem_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      clip_msgs::msg::ClipItem_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<clip_msgs::msg::ClipItem_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      clip_msgs::msg::ClipItem_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<clip_msgs::msg::ClipItem_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<clip_msgs::msg::ClipItem_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<clip_msgs::msg::ClipItem_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__clip_msgs__msg__ClipItem
    std::shared_ptr<clip_msgs::msg::ClipItem_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__clip_msgs__msg__ClipItem
    std::shared_ptr<clip_msgs::msg::ClipItem_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClipItem_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->text != other.text) {
      return false;
    }
    if (this->url != other.url) {
      return false;
    }
    if (this->feature != other.feature) {
      return false;
    }
    if (this->extra != other.extra) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClipItem_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClipItem_

// alias to use template instance with default allocator
using ClipItem =
  clip_msgs::msg::ClipItem_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace clip_msgs

#endif  // CLIP_MSGS__MSG__DETAIL__CLIP_ITEM__STRUCT_HPP_
