// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from squirtlebot_interfaces:srv/KillSquirtle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "squirtlebot_interfaces/srv/kill_squirtle.hpp"


#ifndef SQUIRTLEBOT_INTERFACES__SRV__DETAIL__KILL_SQUIRTLE__STRUCT_HPP_
#define SQUIRTLEBOT_INTERFACES__SRV__DETAIL__KILL_SQUIRTLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__squirtlebot_interfaces__srv__KillSquirtle_Request __attribute__((deprecated))
#else
# define DEPRECATED__squirtlebot_interfaces__srv__KillSquirtle_Request __declspec(deprecated)
#endif

namespace squirtlebot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct KillSquirtle_Request_
{
  using Type = KillSquirtle_Request_<ContainerAllocator>;

  explicit KillSquirtle_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kill_active_squirtle = false;
    }
  }

  explicit KillSquirtle_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kill_active_squirtle = false;
    }
  }

  // field types and members
  using _kill_active_squirtle_type =
    bool;
  _kill_active_squirtle_type kill_active_squirtle;

  // setters for named parameter idiom
  Type & set__kill_active_squirtle(
    const bool & _arg)
  {
    this->kill_active_squirtle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    squirtlebot_interfaces::srv::KillSquirtle_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const squirtlebot_interfaces::srv::KillSquirtle_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<squirtlebot_interfaces::srv::KillSquirtle_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<squirtlebot_interfaces::srv::KillSquirtle_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      squirtlebot_interfaces::srv::KillSquirtle_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<squirtlebot_interfaces::srv::KillSquirtle_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      squirtlebot_interfaces::srv::KillSquirtle_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<squirtlebot_interfaces::srv::KillSquirtle_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<squirtlebot_interfaces::srv::KillSquirtle_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<squirtlebot_interfaces::srv::KillSquirtle_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__squirtlebot_interfaces__srv__KillSquirtle_Request
    std::shared_ptr<squirtlebot_interfaces::srv::KillSquirtle_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__squirtlebot_interfaces__srv__KillSquirtle_Request
    std::shared_ptr<squirtlebot_interfaces::srv::KillSquirtle_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KillSquirtle_Request_ & other) const
  {
    if (this->kill_active_squirtle != other.kill_active_squirtle) {
      return false;
    }
    return true;
  }
  bool operator!=(const KillSquirtle_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KillSquirtle_Request_

// alias to use template instance with default allocator
using KillSquirtle_Request =
  squirtlebot_interfaces::srv::KillSquirtle_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace squirtlebot_interfaces


#ifndef _WIN32
# define DEPRECATED__squirtlebot_interfaces__srv__KillSquirtle_Response __attribute__((deprecated))
#else
# define DEPRECATED__squirtlebot_interfaces__srv__KillSquirtle_Response __declspec(deprecated)
#endif

namespace squirtlebot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct KillSquirtle_Response_
{
  using Type = KillSquirtle_Response_<ContainerAllocator>;

  explicit KillSquirtle_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit KillSquirtle_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    squirtlebot_interfaces::srv::KillSquirtle_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const squirtlebot_interfaces::srv::KillSquirtle_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<squirtlebot_interfaces::srv::KillSquirtle_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<squirtlebot_interfaces::srv::KillSquirtle_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      squirtlebot_interfaces::srv::KillSquirtle_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<squirtlebot_interfaces::srv::KillSquirtle_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      squirtlebot_interfaces::srv::KillSquirtle_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<squirtlebot_interfaces::srv::KillSquirtle_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<squirtlebot_interfaces::srv::KillSquirtle_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<squirtlebot_interfaces::srv::KillSquirtle_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__squirtlebot_interfaces__srv__KillSquirtle_Response
    std::shared_ptr<squirtlebot_interfaces::srv::KillSquirtle_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__squirtlebot_interfaces__srv__KillSquirtle_Response
    std::shared_ptr<squirtlebot_interfaces::srv::KillSquirtle_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KillSquirtle_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const KillSquirtle_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KillSquirtle_Response_

// alias to use template instance with default allocator
using KillSquirtle_Response =
  squirtlebot_interfaces::srv::KillSquirtle_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace squirtlebot_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__squirtlebot_interfaces__srv__KillSquirtle_Event __attribute__((deprecated))
#else
# define DEPRECATED__squirtlebot_interfaces__srv__KillSquirtle_Event __declspec(deprecated)
#endif

namespace squirtlebot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct KillSquirtle_Event_
{
  using Type = KillSquirtle_Event_<ContainerAllocator>;

  explicit KillSquirtle_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit KillSquirtle_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<squirtlebot_interfaces::srv::KillSquirtle_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<squirtlebot_interfaces::srv::KillSquirtle_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<squirtlebot_interfaces::srv::KillSquirtle_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<squirtlebot_interfaces::srv::KillSquirtle_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<squirtlebot_interfaces::srv::KillSquirtle_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<squirtlebot_interfaces::srv::KillSquirtle_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<squirtlebot_interfaces::srv::KillSquirtle_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<squirtlebot_interfaces::srv::KillSquirtle_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    squirtlebot_interfaces::srv::KillSquirtle_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const squirtlebot_interfaces::srv::KillSquirtle_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<squirtlebot_interfaces::srv::KillSquirtle_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<squirtlebot_interfaces::srv::KillSquirtle_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      squirtlebot_interfaces::srv::KillSquirtle_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<squirtlebot_interfaces::srv::KillSquirtle_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      squirtlebot_interfaces::srv::KillSquirtle_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<squirtlebot_interfaces::srv::KillSquirtle_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<squirtlebot_interfaces::srv::KillSquirtle_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<squirtlebot_interfaces::srv::KillSquirtle_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__squirtlebot_interfaces__srv__KillSquirtle_Event
    std::shared_ptr<squirtlebot_interfaces::srv::KillSquirtle_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__squirtlebot_interfaces__srv__KillSquirtle_Event
    std::shared_ptr<squirtlebot_interfaces::srv::KillSquirtle_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KillSquirtle_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const KillSquirtle_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KillSquirtle_Event_

// alias to use template instance with default allocator
using KillSquirtle_Event =
  squirtlebot_interfaces::srv::KillSquirtle_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace squirtlebot_interfaces

namespace squirtlebot_interfaces
{

namespace srv
{

struct KillSquirtle
{
  using Request = squirtlebot_interfaces::srv::KillSquirtle_Request;
  using Response = squirtlebot_interfaces::srv::KillSquirtle_Response;
  using Event = squirtlebot_interfaces::srv::KillSquirtle_Event;
};

}  // namespace srv

}  // namespace squirtlebot_interfaces

#endif  // SQUIRTLEBOT_INTERFACES__SRV__DETAIL__KILL_SQUIRTLE__STRUCT_HPP_
