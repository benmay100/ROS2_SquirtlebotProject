// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from squirtlebot_interfaces:msg/KillSpawnSquirtle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "squirtlebot_interfaces/msg/kill_spawn_squirtle.hpp"


#ifndef SQUIRTLEBOT_INTERFACES__MSG__DETAIL__KILL_SPAWN_SQUIRTLE__STRUCT_HPP_
#define SQUIRTLEBOT_INTERFACES__MSG__DETAIL__KILL_SPAWN_SQUIRTLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__squirtlebot_interfaces__msg__KillSpawnSquirtle __attribute__((deprecated))
#else
# define DEPRECATED__squirtlebot_interfaces__msg__KillSpawnSquirtle __declspec(deprecated)
#endif

namespace squirtlebot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KillSpawnSquirtle_
{
  using Type = KillSpawnSquirtle_<ContainerAllocator>;

  explicit KillSpawnSquirtle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kill_or_spawn = "";
    }
  }

  explicit KillSpawnSquirtle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : kill_or_spawn(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kill_or_spawn = "";
    }
  }

  // field types and members
  using _kill_or_spawn_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _kill_or_spawn_type kill_or_spawn;

  // setters for named parameter idiom
  Type & set__kill_or_spawn(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->kill_or_spawn = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    squirtlebot_interfaces::msg::KillSpawnSquirtle_<ContainerAllocator> *;
  using ConstRawPtr =
    const squirtlebot_interfaces::msg::KillSpawnSquirtle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<squirtlebot_interfaces::msg::KillSpawnSquirtle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<squirtlebot_interfaces::msg::KillSpawnSquirtle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      squirtlebot_interfaces::msg::KillSpawnSquirtle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<squirtlebot_interfaces::msg::KillSpawnSquirtle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      squirtlebot_interfaces::msg::KillSpawnSquirtle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<squirtlebot_interfaces::msg::KillSpawnSquirtle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<squirtlebot_interfaces::msg::KillSpawnSquirtle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<squirtlebot_interfaces::msg::KillSpawnSquirtle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__squirtlebot_interfaces__msg__KillSpawnSquirtle
    std::shared_ptr<squirtlebot_interfaces::msg::KillSpawnSquirtle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__squirtlebot_interfaces__msg__KillSpawnSquirtle
    std::shared_ptr<squirtlebot_interfaces::msg::KillSpawnSquirtle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KillSpawnSquirtle_ & other) const
  {
    if (this->kill_or_spawn != other.kill_or_spawn) {
      return false;
    }
    return true;
  }
  bool operator!=(const KillSpawnSquirtle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KillSpawnSquirtle_

// alias to use template instance with default allocator
using KillSpawnSquirtle =
  squirtlebot_interfaces::msg::KillSpawnSquirtle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace squirtlebot_interfaces

#endif  // SQUIRTLEBOT_INTERFACES__MSG__DETAIL__KILL_SPAWN_SQUIRTLE__STRUCT_HPP_
