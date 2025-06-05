// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from squirtlebot_interfaces:msg/CancelSquirtleMove.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "squirtlebot_interfaces/msg/cancel_squirtle_move.hpp"


#ifndef SQUIRTLEBOT_INTERFACES__MSG__DETAIL__CANCEL_SQUIRTLE_MOVE__STRUCT_HPP_
#define SQUIRTLEBOT_INTERFACES__MSG__DETAIL__CANCEL_SQUIRTLE_MOVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__squirtlebot_interfaces__msg__CancelSquirtleMove __attribute__((deprecated))
#else
# define DEPRECATED__squirtlebot_interfaces__msg__CancelSquirtleMove __declspec(deprecated)
#endif

namespace squirtlebot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CancelSquirtleMove_
{
  using Type = CancelSquirtleMove_<ContainerAllocator>;

  explicit CancelSquirtleMove_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cancel_move = false;
    }
  }

  explicit CancelSquirtleMove_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cancel_move = false;
    }
  }

  // field types and members
  using _cancel_move_type =
    bool;
  _cancel_move_type cancel_move;

  // setters for named parameter idiom
  Type & set__cancel_move(
    const bool & _arg)
  {
    this->cancel_move = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    squirtlebot_interfaces::msg::CancelSquirtleMove_<ContainerAllocator> *;
  using ConstRawPtr =
    const squirtlebot_interfaces::msg::CancelSquirtleMove_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<squirtlebot_interfaces::msg::CancelSquirtleMove_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<squirtlebot_interfaces::msg::CancelSquirtleMove_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      squirtlebot_interfaces::msg::CancelSquirtleMove_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<squirtlebot_interfaces::msg::CancelSquirtleMove_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      squirtlebot_interfaces::msg::CancelSquirtleMove_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<squirtlebot_interfaces::msg::CancelSquirtleMove_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<squirtlebot_interfaces::msg::CancelSquirtleMove_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<squirtlebot_interfaces::msg::CancelSquirtleMove_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__squirtlebot_interfaces__msg__CancelSquirtleMove
    std::shared_ptr<squirtlebot_interfaces::msg::CancelSquirtleMove_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__squirtlebot_interfaces__msg__CancelSquirtleMove
    std::shared_ptr<squirtlebot_interfaces::msg::CancelSquirtleMove_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CancelSquirtleMove_ & other) const
  {
    if (this->cancel_move != other.cancel_move) {
      return false;
    }
    return true;
  }
  bool operator!=(const CancelSquirtleMove_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CancelSquirtleMove_

// alias to use template instance with default allocator
using CancelSquirtleMove =
  squirtlebot_interfaces::msg::CancelSquirtleMove_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace squirtlebot_interfaces

#endif  // SQUIRTLEBOT_INTERFACES__MSG__DETAIL__CANCEL_SQUIRTLE_MOVE__STRUCT_HPP_
