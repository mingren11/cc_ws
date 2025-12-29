// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from clip_msgs:action/GetFeatures.idl
// generated code does not contain a copyright notice

#ifndef CLIP_MSGS__ACTION__DETAIL__GET_FEATURES__STRUCT_HPP_
#define CLIP_MSGS__ACTION__DETAIL__GET_FEATURES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__clip_msgs__action__GetFeatures_Goal __attribute__((deprecated))
#else
# define DEPRECATED__clip_msgs__action__GetFeatures_Goal __declspec(deprecated)
#endif

namespace clip_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetFeatures_Goal_
{
  using Type = GetFeatures_Goal_<ContainerAllocator>;

  explicit GetFeatures_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = false;
    }
  }

  explicit GetFeatures_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = false;
    }
  }

  // field types and members
  using _type_type =
    bool;
  _type_type type;
  using _urls_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _urls_type urls;
  using _texts_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _texts_type texts;

  // setters for named parameter idiom
  Type & set__type(
    const bool & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__urls(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->urls = _arg;
    return *this;
  }
  Type & set__texts(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->texts = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    clip_msgs::action::GetFeatures_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const clip_msgs::action::GetFeatures_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<clip_msgs::action::GetFeatures_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<clip_msgs::action::GetFeatures_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      clip_msgs::action::GetFeatures_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<clip_msgs::action::GetFeatures_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      clip_msgs::action::GetFeatures_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<clip_msgs::action::GetFeatures_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<clip_msgs::action::GetFeatures_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<clip_msgs::action::GetFeatures_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__clip_msgs__action__GetFeatures_Goal
    std::shared_ptr<clip_msgs::action::GetFeatures_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__clip_msgs__action__GetFeatures_Goal
    std::shared_ptr<clip_msgs::action::GetFeatures_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetFeatures_Goal_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->urls != other.urls) {
      return false;
    }
    if (this->texts != other.texts) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetFeatures_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetFeatures_Goal_

// alias to use template instance with default allocator
using GetFeatures_Goal =
  clip_msgs::action::GetFeatures_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace clip_msgs


#ifndef _WIN32
# define DEPRECATED__clip_msgs__action__GetFeatures_Result __attribute__((deprecated))
#else
# define DEPRECATED__clip_msgs__action__GetFeatures_Result __declspec(deprecated)
#endif

namespace clip_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetFeatures_Result_
{
  using Type = GetFeatures_Result_<ContainerAllocator>;

  explicit GetFeatures_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_code = 0l;
    }
  }

  explicit GetFeatures_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_code = 0l;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _error_code_type =
    int32_t;
  _error_code_type error_code;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__error_code(
    const int32_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    clip_msgs::action::GetFeatures_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const clip_msgs::action::GetFeatures_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<clip_msgs::action::GetFeatures_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<clip_msgs::action::GetFeatures_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      clip_msgs::action::GetFeatures_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<clip_msgs::action::GetFeatures_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      clip_msgs::action::GetFeatures_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<clip_msgs::action::GetFeatures_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<clip_msgs::action::GetFeatures_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<clip_msgs::action::GetFeatures_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__clip_msgs__action__GetFeatures_Result
    std::shared_ptr<clip_msgs::action::GetFeatures_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__clip_msgs__action__GetFeatures_Result
    std::shared_ptr<clip_msgs::action::GetFeatures_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetFeatures_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetFeatures_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetFeatures_Result_

// alias to use template instance with default allocator
using GetFeatures_Result =
  clip_msgs::action::GetFeatures_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace clip_msgs


// Include directives for member types
// Member 'item'
#include "clip_msgs/msg/detail/clip_item__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__clip_msgs__action__GetFeatures_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__clip_msgs__action__GetFeatures_Feedback __declspec(deprecated)
#endif

namespace clip_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetFeatures_Feedback_
{
  using Type = GetFeatures_Feedback_<ContainerAllocator>;

  explicit GetFeatures_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : item(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_progress = 0.0f;
    }
  }

  explicit GetFeatures_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : item(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_progress = 0.0f;
    }
  }

  // field types and members
  using _current_progress_type =
    float;
  _current_progress_type current_progress;
  using _item_type =
    clip_msgs::msg::ClipItem_<ContainerAllocator>;
  _item_type item;

  // setters for named parameter idiom
  Type & set__current_progress(
    const float & _arg)
  {
    this->current_progress = _arg;
    return *this;
  }
  Type & set__item(
    const clip_msgs::msg::ClipItem_<ContainerAllocator> & _arg)
  {
    this->item = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    clip_msgs::action::GetFeatures_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const clip_msgs::action::GetFeatures_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<clip_msgs::action::GetFeatures_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<clip_msgs::action::GetFeatures_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      clip_msgs::action::GetFeatures_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<clip_msgs::action::GetFeatures_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      clip_msgs::action::GetFeatures_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<clip_msgs::action::GetFeatures_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<clip_msgs::action::GetFeatures_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<clip_msgs::action::GetFeatures_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__clip_msgs__action__GetFeatures_Feedback
    std::shared_ptr<clip_msgs::action::GetFeatures_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__clip_msgs__action__GetFeatures_Feedback
    std::shared_ptr<clip_msgs::action::GetFeatures_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetFeatures_Feedback_ & other) const
  {
    if (this->current_progress != other.current_progress) {
      return false;
    }
    if (this->item != other.item) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetFeatures_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetFeatures_Feedback_

// alias to use template instance with default allocator
using GetFeatures_Feedback =
  clip_msgs::action::GetFeatures_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace clip_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "clip_msgs/action/detail/get_features__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__clip_msgs__action__GetFeatures_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__clip_msgs__action__GetFeatures_SendGoal_Request __declspec(deprecated)
#endif

namespace clip_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetFeatures_SendGoal_Request_
{
  using Type = GetFeatures_SendGoal_Request_<ContainerAllocator>;

  explicit GetFeatures_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit GetFeatures_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    clip_msgs::action::GetFeatures_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const clip_msgs::action::GetFeatures_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    clip_msgs::action::GetFeatures_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const clip_msgs::action::GetFeatures_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<clip_msgs::action::GetFeatures_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<clip_msgs::action::GetFeatures_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      clip_msgs::action::GetFeatures_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<clip_msgs::action::GetFeatures_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      clip_msgs::action::GetFeatures_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<clip_msgs::action::GetFeatures_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<clip_msgs::action::GetFeatures_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<clip_msgs::action::GetFeatures_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__clip_msgs__action__GetFeatures_SendGoal_Request
    std::shared_ptr<clip_msgs::action::GetFeatures_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__clip_msgs__action__GetFeatures_SendGoal_Request
    std::shared_ptr<clip_msgs::action::GetFeatures_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetFeatures_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetFeatures_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetFeatures_SendGoal_Request_

// alias to use template instance with default allocator
using GetFeatures_SendGoal_Request =
  clip_msgs::action::GetFeatures_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace clip_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__clip_msgs__action__GetFeatures_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__clip_msgs__action__GetFeatures_SendGoal_Response __declspec(deprecated)
#endif

namespace clip_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetFeatures_SendGoal_Response_
{
  using Type = GetFeatures_SendGoal_Response_<ContainerAllocator>;

  explicit GetFeatures_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit GetFeatures_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    clip_msgs::action::GetFeatures_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const clip_msgs::action::GetFeatures_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<clip_msgs::action::GetFeatures_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<clip_msgs::action::GetFeatures_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      clip_msgs::action::GetFeatures_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<clip_msgs::action::GetFeatures_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      clip_msgs::action::GetFeatures_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<clip_msgs::action::GetFeatures_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<clip_msgs::action::GetFeatures_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<clip_msgs::action::GetFeatures_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__clip_msgs__action__GetFeatures_SendGoal_Response
    std::shared_ptr<clip_msgs::action::GetFeatures_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__clip_msgs__action__GetFeatures_SendGoal_Response
    std::shared_ptr<clip_msgs::action::GetFeatures_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetFeatures_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetFeatures_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetFeatures_SendGoal_Response_

// alias to use template instance with default allocator
using GetFeatures_SendGoal_Response =
  clip_msgs::action::GetFeatures_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace clip_msgs

namespace clip_msgs
{

namespace action
{

struct GetFeatures_SendGoal
{
  using Request = clip_msgs::action::GetFeatures_SendGoal_Request;
  using Response = clip_msgs::action::GetFeatures_SendGoal_Response;
};

}  // namespace action

}  // namespace clip_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__clip_msgs__action__GetFeatures_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__clip_msgs__action__GetFeatures_GetResult_Request __declspec(deprecated)
#endif

namespace clip_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetFeatures_GetResult_Request_
{
  using Type = GetFeatures_GetResult_Request_<ContainerAllocator>;

  explicit GetFeatures_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit GetFeatures_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    clip_msgs::action::GetFeatures_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const clip_msgs::action::GetFeatures_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<clip_msgs::action::GetFeatures_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<clip_msgs::action::GetFeatures_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      clip_msgs::action::GetFeatures_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<clip_msgs::action::GetFeatures_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      clip_msgs::action::GetFeatures_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<clip_msgs::action::GetFeatures_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<clip_msgs::action::GetFeatures_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<clip_msgs::action::GetFeatures_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__clip_msgs__action__GetFeatures_GetResult_Request
    std::shared_ptr<clip_msgs::action::GetFeatures_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__clip_msgs__action__GetFeatures_GetResult_Request
    std::shared_ptr<clip_msgs::action::GetFeatures_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetFeatures_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetFeatures_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetFeatures_GetResult_Request_

// alias to use template instance with default allocator
using GetFeatures_GetResult_Request =
  clip_msgs::action::GetFeatures_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace clip_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "clip_msgs/action/detail/get_features__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__clip_msgs__action__GetFeatures_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__clip_msgs__action__GetFeatures_GetResult_Response __declspec(deprecated)
#endif

namespace clip_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetFeatures_GetResult_Response_
{
  using Type = GetFeatures_GetResult_Response_<ContainerAllocator>;

  explicit GetFeatures_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit GetFeatures_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    clip_msgs::action::GetFeatures_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const clip_msgs::action::GetFeatures_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    clip_msgs::action::GetFeatures_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const clip_msgs::action::GetFeatures_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<clip_msgs::action::GetFeatures_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<clip_msgs::action::GetFeatures_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      clip_msgs::action::GetFeatures_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<clip_msgs::action::GetFeatures_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      clip_msgs::action::GetFeatures_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<clip_msgs::action::GetFeatures_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<clip_msgs::action::GetFeatures_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<clip_msgs::action::GetFeatures_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__clip_msgs__action__GetFeatures_GetResult_Response
    std::shared_ptr<clip_msgs::action::GetFeatures_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__clip_msgs__action__GetFeatures_GetResult_Response
    std::shared_ptr<clip_msgs::action::GetFeatures_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetFeatures_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetFeatures_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetFeatures_GetResult_Response_

// alias to use template instance with default allocator
using GetFeatures_GetResult_Response =
  clip_msgs::action::GetFeatures_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace clip_msgs

namespace clip_msgs
{

namespace action
{

struct GetFeatures_GetResult
{
  using Request = clip_msgs::action::GetFeatures_GetResult_Request;
  using Response = clip_msgs::action::GetFeatures_GetResult_Response;
};

}  // namespace action

}  // namespace clip_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "clip_msgs/action/detail/get_features__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__clip_msgs__action__GetFeatures_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__clip_msgs__action__GetFeatures_FeedbackMessage __declspec(deprecated)
#endif

namespace clip_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetFeatures_FeedbackMessage_
{
  using Type = GetFeatures_FeedbackMessage_<ContainerAllocator>;

  explicit GetFeatures_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit GetFeatures_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    clip_msgs::action::GetFeatures_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const clip_msgs::action::GetFeatures_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    clip_msgs::action::GetFeatures_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const clip_msgs::action::GetFeatures_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<clip_msgs::action::GetFeatures_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<clip_msgs::action::GetFeatures_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      clip_msgs::action::GetFeatures_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<clip_msgs::action::GetFeatures_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      clip_msgs::action::GetFeatures_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<clip_msgs::action::GetFeatures_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<clip_msgs::action::GetFeatures_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<clip_msgs::action::GetFeatures_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__clip_msgs__action__GetFeatures_FeedbackMessage
    std::shared_ptr<clip_msgs::action::GetFeatures_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__clip_msgs__action__GetFeatures_FeedbackMessage
    std::shared_ptr<clip_msgs::action::GetFeatures_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetFeatures_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetFeatures_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetFeatures_FeedbackMessage_

// alias to use template instance with default allocator
using GetFeatures_FeedbackMessage =
  clip_msgs::action::GetFeatures_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace clip_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace clip_msgs
{

namespace action
{

struct GetFeatures
{
  /// The goal message defined in the action definition.
  using Goal = clip_msgs::action::GetFeatures_Goal;
  /// The result message defined in the action definition.
  using Result = clip_msgs::action::GetFeatures_Result;
  /// The feedback message defined in the action definition.
  using Feedback = clip_msgs::action::GetFeatures_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = clip_msgs::action::GetFeatures_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = clip_msgs::action::GetFeatures_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = clip_msgs::action::GetFeatures_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct GetFeatures GetFeatures;

}  // namespace action

}  // namespace clip_msgs

#endif  // CLIP_MSGS__ACTION__DETAIL__GET_FEATURES__STRUCT_HPP_
