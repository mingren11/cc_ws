// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ai_msgs:msg/PerceptionInfo.idl
// generated code does not contain a copyright notice

#ifndef AI_MSGS__MSG__DETAIL__PERCEPTION_INFO__STRUCT_HPP_
#define AI_MSGS__MSG__DETAIL__PERCEPTION_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ai_msgs__msg__PerceptionInfo __attribute__((deprecated))
#else
# define DEPRECATED__ai_msgs__msg__PerceptionInfo __declspec(deprecated)
#endif

namespace ai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PerceptionInfo_
{
  using Type = PerceptionInfo_<ContainerAllocator>;

  explicit PerceptionInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0ul;
      this->width = 0ul;
    }
  }

  explicit PerceptionInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0ul;
      this->width = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _height_type =
    uint32_t;
  _height_type height;
  using _width_type =
    uint32_t;
  _width_type width;
  using _class_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _class_names_type class_names;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
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
  Type & set__class_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->class_names = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ai_msgs::msg::PerceptionInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const ai_msgs::msg::PerceptionInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ai_msgs::msg::PerceptionInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ai_msgs::msg::PerceptionInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ai_msgs::msg::PerceptionInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ai_msgs::msg::PerceptionInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ai_msgs::msg::PerceptionInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ai_msgs::msg::PerceptionInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ai_msgs::msg::PerceptionInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ai_msgs::msg::PerceptionInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ai_msgs__msg__PerceptionInfo
    std::shared_ptr<ai_msgs::msg::PerceptionInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ai_msgs__msg__PerceptionInfo
    std::shared_ptr<ai_msgs::msg::PerceptionInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PerceptionInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->class_names != other.class_names) {
      return false;
    }
    return true;
  }
  bool operator!=(const PerceptionInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PerceptionInfo_

// alias to use template instance with default allocator
using PerceptionInfo =
  ai_msgs::msg::PerceptionInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ai_msgs

#endif  // AI_MSGS__MSG__DETAIL__PERCEPTION_INFO__STRUCT_HPP_
