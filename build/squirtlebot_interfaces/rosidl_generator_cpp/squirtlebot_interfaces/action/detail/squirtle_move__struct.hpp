// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from squirtlebot_interfaces:action/SquirtleMove.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "squirtlebot_interfaces/action/squirtle_move.hpp"


#ifndef SQUIRTLEBOT_INTERFACES__ACTION__DETAIL__SQUIRTLE_MOVE__STRUCT_HPP_
#define SQUIRTLEBOT_INTERFACES__ACTION__DETAIL__SQUIRTLE_MOVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_Goal __attribute__((deprecated))
#else
# define DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_Goal __declspec(deprecated)
#endif

namespace squirtlebot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SquirtleMove_Goal_
{
  using Type = SquirtleMove_Goal_<ContainerAllocator>;

  explicit SquirtleMove_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_x = 0.0;
      this->angular_z = 0.0;
      this->duration = 0l;
    }
  }

  explicit SquirtleMove_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_x = 0.0;
      this->angular_z = 0.0;
      this->duration = 0l;
    }
  }

  // field types and members
  using _linear_x_type =
    double;
  _linear_x_type linear_x;
  using _angular_z_type =
    double;
  _angular_z_type angular_z;
  using _duration_type =
    int32_t;
  _duration_type duration;

  // setters for named parameter idiom
  Type & set__linear_x(
    const double & _arg)
  {
    this->linear_x = _arg;
    return *this;
  }
  Type & set__angular_z(
    const double & _arg)
  {
    this->angular_z = _arg;
    return *this;
  }
  Type & set__duration(
    const int32_t & _arg)
  {
    this->duration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    squirtlebot_interfaces::action::SquirtleMove_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const squirtlebot_interfaces::action::SquirtleMove_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      squirtlebot_interfaces::action::SquirtleMove_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<squirtlebot_interfaces::action::SquirtleMove_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      squirtlebot_interfaces::action::SquirtleMove_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<squirtlebot_interfaces::action::SquirtleMove_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<squirtlebot_interfaces::action::SquirtleMove_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<squirtlebot_interfaces::action::SquirtleMove_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_Goal
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_Goal
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SquirtleMove_Goal_ & other) const
  {
    if (this->linear_x != other.linear_x) {
      return false;
    }
    if (this->angular_z != other.angular_z) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const SquirtleMove_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SquirtleMove_Goal_

// alias to use template instance with default allocator
using SquirtleMove_Goal =
  squirtlebot_interfaces::action::SquirtleMove_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace squirtlebot_interfaces


#ifndef _WIN32
# define DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_Result __attribute__((deprecated))
#else
# define DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_Result __declspec(deprecated)
#endif

namespace squirtlebot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SquirtleMove_Result_
{
  using Type = SquirtleMove_Result_<ContainerAllocator>;

  explicit SquirtleMove_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->final_position_x = 0.0;
      this->final_position_y = 0.0;
      this->final_theta_angle = 0.0;
      this->result_message = "";
    }
  }

  explicit SquirtleMove_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->final_position_x = 0.0;
      this->final_position_y = 0.0;
      this->final_theta_angle = 0.0;
      this->result_message = "";
    }
  }

  // field types and members
  using _final_position_x_type =
    double;
  _final_position_x_type final_position_x;
  using _final_position_y_type =
    double;
  _final_position_y_type final_position_y;
  using _final_theta_angle_type =
    double;
  _final_theta_angle_type final_theta_angle;
  using _result_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_message_type result_message;

  // setters for named parameter idiom
  Type & set__final_position_x(
    const double & _arg)
  {
    this->final_position_x = _arg;
    return *this;
  }
  Type & set__final_position_y(
    const double & _arg)
  {
    this->final_position_y = _arg;
    return *this;
  }
  Type & set__final_theta_angle(
    const double & _arg)
  {
    this->final_theta_angle = _arg;
    return *this;
  }
  Type & set__result_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    squirtlebot_interfaces::action::SquirtleMove_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const squirtlebot_interfaces::action::SquirtleMove_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      squirtlebot_interfaces::action::SquirtleMove_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<squirtlebot_interfaces::action::SquirtleMove_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      squirtlebot_interfaces::action::SquirtleMove_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<squirtlebot_interfaces::action::SquirtleMove_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<squirtlebot_interfaces::action::SquirtleMove_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<squirtlebot_interfaces::action::SquirtleMove_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_Result
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_Result
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SquirtleMove_Result_ & other) const
  {
    if (this->final_position_x != other.final_position_x) {
      return false;
    }
    if (this->final_position_y != other.final_position_y) {
      return false;
    }
    if (this->final_theta_angle != other.final_theta_angle) {
      return false;
    }
    if (this->result_message != other.result_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SquirtleMove_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SquirtleMove_Result_

// alias to use template instance with default allocator
using SquirtleMove_Result =
  squirtlebot_interfaces::action::SquirtleMove_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace squirtlebot_interfaces


#ifndef _WIN32
# define DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_Feedback __declspec(deprecated)
#endif

namespace squirtlebot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SquirtleMove_Feedback_
{
  using Type = SquirtleMove_Feedback_<ContainerAllocator>;

  explicit SquirtleMove_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_position_x = 0.0;
      this->current_position_y = 0.0;
      this->current_theta_angle = 0.0;
      this->status = "";
    }
  }

  explicit SquirtleMove_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_position_x = 0.0;
      this->current_position_y = 0.0;
      this->current_theta_angle = 0.0;
      this->status = "";
    }
  }

  // field types and members
  using _current_position_x_type =
    double;
  _current_position_x_type current_position_x;
  using _current_position_y_type =
    double;
  _current_position_y_type current_position_y;
  using _current_theta_angle_type =
    double;
  _current_theta_angle_type current_theta_angle;
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__current_position_x(
    const double & _arg)
  {
    this->current_position_x = _arg;
    return *this;
  }
  Type & set__current_position_y(
    const double & _arg)
  {
    this->current_position_y = _arg;
    return *this;
  }
  Type & set__current_theta_angle(
    const double & _arg)
  {
    this->current_theta_angle = _arg;
    return *this;
  }
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    squirtlebot_interfaces::action::SquirtleMove_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const squirtlebot_interfaces::action::SquirtleMove_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      squirtlebot_interfaces::action::SquirtleMove_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<squirtlebot_interfaces::action::SquirtleMove_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      squirtlebot_interfaces::action::SquirtleMove_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<squirtlebot_interfaces::action::SquirtleMove_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<squirtlebot_interfaces::action::SquirtleMove_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<squirtlebot_interfaces::action::SquirtleMove_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_Feedback
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_Feedback
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SquirtleMove_Feedback_ & other) const
  {
    if (this->current_position_x != other.current_position_x) {
      return false;
    }
    if (this->current_position_y != other.current_position_y) {
      return false;
    }
    if (this->current_theta_angle != other.current_theta_angle) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SquirtleMove_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SquirtleMove_Feedback_

// alias to use template instance with default allocator
using SquirtleMove_Feedback =
  squirtlebot_interfaces::action::SquirtleMove_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace squirtlebot_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "squirtlebot_interfaces/action/detail/squirtle_move__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request __declspec(deprecated)
#endif

namespace squirtlebot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SquirtleMove_SendGoal_Request_
{
  using Type = SquirtleMove_SendGoal_Request_<ContainerAllocator>;

  explicit SquirtleMove_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit SquirtleMove_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    squirtlebot_interfaces::action::SquirtleMove_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const squirtlebot_interfaces::action::SquirtleMove_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SquirtleMove_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const SquirtleMove_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SquirtleMove_SendGoal_Request_

// alias to use template instance with default allocator
using SquirtleMove_SendGoal_Request =
  squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace squirtlebot_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response __declspec(deprecated)
#endif

namespace squirtlebot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SquirtleMove_SendGoal_Response_
{
  using Type = SquirtleMove_SendGoal_Response_<ContainerAllocator>;

  explicit SquirtleMove_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit SquirtleMove_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SquirtleMove_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const SquirtleMove_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SquirtleMove_SendGoal_Response_

// alias to use template instance with default allocator
using SquirtleMove_SendGoal_Response =
  squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace squirtlebot_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event __declspec(deprecated)
#endif

namespace squirtlebot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SquirtleMove_SendGoal_Event_
{
  using Type = SquirtleMove_SendGoal_Event_<ContainerAllocator>;

  explicit SquirtleMove_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SquirtleMove_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SquirtleMove_SendGoal_Event_ & other) const
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
  bool operator!=(const SquirtleMove_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SquirtleMove_SendGoal_Event_

// alias to use template instance with default allocator
using SquirtleMove_SendGoal_Event =
  squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace squirtlebot_interfaces

namespace squirtlebot_interfaces
{

namespace action
{

struct SquirtleMove_SendGoal
{
  using Request = squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request;
  using Response = squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response;
  using Event = squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event;
};

}  // namespace action

}  // namespace squirtlebot_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_GetResult_Request __declspec(deprecated)
#endif

namespace squirtlebot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SquirtleMove_GetResult_Request_
{
  using Type = SquirtleMove_GetResult_Request_<ContainerAllocator>;

  explicit SquirtleMove_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit SquirtleMove_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    squirtlebot_interfaces::action::SquirtleMove_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const squirtlebot_interfaces::action::SquirtleMove_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      squirtlebot_interfaces::action::SquirtleMove_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<squirtlebot_interfaces::action::SquirtleMove_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      squirtlebot_interfaces::action::SquirtleMove_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<squirtlebot_interfaces::action::SquirtleMove_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<squirtlebot_interfaces::action::SquirtleMove_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<squirtlebot_interfaces::action::SquirtleMove_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_GetResult_Request
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_GetResult_Request
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SquirtleMove_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const SquirtleMove_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SquirtleMove_GetResult_Request_

// alias to use template instance with default allocator
using SquirtleMove_GetResult_Request =
  squirtlebot_interfaces::action::SquirtleMove_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace squirtlebot_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_GetResult_Response __declspec(deprecated)
#endif

namespace squirtlebot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SquirtleMove_GetResult_Response_
{
  using Type = SquirtleMove_GetResult_Response_<ContainerAllocator>;

  explicit SquirtleMove_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit SquirtleMove_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    squirtlebot_interfaces::action::SquirtleMove_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const squirtlebot_interfaces::action::SquirtleMove_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    squirtlebot_interfaces::action::SquirtleMove_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const squirtlebot_interfaces::action::SquirtleMove_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      squirtlebot_interfaces::action::SquirtleMove_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<squirtlebot_interfaces::action::SquirtleMove_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      squirtlebot_interfaces::action::SquirtleMove_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<squirtlebot_interfaces::action::SquirtleMove_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<squirtlebot_interfaces::action::SquirtleMove_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<squirtlebot_interfaces::action::SquirtleMove_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_GetResult_Response
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_GetResult_Response
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SquirtleMove_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SquirtleMove_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SquirtleMove_GetResult_Response_

// alias to use template instance with default allocator
using SquirtleMove_GetResult_Response =
  squirtlebot_interfaces::action::SquirtleMove_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace squirtlebot_interfaces


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_GetResult_Event __declspec(deprecated)
#endif

namespace squirtlebot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SquirtleMove_GetResult_Event_
{
  using Type = SquirtleMove_GetResult_Event_<ContainerAllocator>;

  explicit SquirtleMove_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SquirtleMove_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<squirtlebot_interfaces::action::SquirtleMove_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<squirtlebot_interfaces::action::SquirtleMove_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<squirtlebot_interfaces::action::SquirtleMove_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<squirtlebot_interfaces::action::SquirtleMove_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<squirtlebot_interfaces::action::SquirtleMove_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<squirtlebot_interfaces::action::SquirtleMove_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<squirtlebot_interfaces::action::SquirtleMove_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<squirtlebot_interfaces::action::SquirtleMove_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    squirtlebot_interfaces::action::SquirtleMove_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const squirtlebot_interfaces::action::SquirtleMove_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      squirtlebot_interfaces::action::SquirtleMove_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<squirtlebot_interfaces::action::SquirtleMove_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      squirtlebot_interfaces::action::SquirtleMove_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<squirtlebot_interfaces::action::SquirtleMove_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<squirtlebot_interfaces::action::SquirtleMove_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<squirtlebot_interfaces::action::SquirtleMove_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_GetResult_Event
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_GetResult_Event
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SquirtleMove_GetResult_Event_ & other) const
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
  bool operator!=(const SquirtleMove_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SquirtleMove_GetResult_Event_

// alias to use template instance with default allocator
using SquirtleMove_GetResult_Event =
  squirtlebot_interfaces::action::SquirtleMove_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace squirtlebot_interfaces

namespace squirtlebot_interfaces
{

namespace action
{

struct SquirtleMove_GetResult
{
  using Request = squirtlebot_interfaces::action::SquirtleMove_GetResult_Request;
  using Response = squirtlebot_interfaces::action::SquirtleMove_GetResult_Response;
  using Event = squirtlebot_interfaces::action::SquirtleMove_GetResult_Event;
};

}  // namespace action

}  // namespace squirtlebot_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage __declspec(deprecated)
#endif

namespace squirtlebot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SquirtleMove_FeedbackMessage_
{
  using Type = SquirtleMove_FeedbackMessage_<ContainerAllocator>;

  explicit SquirtleMove_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit SquirtleMove_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    squirtlebot_interfaces::action::SquirtleMove_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const squirtlebot_interfaces::action::SquirtleMove_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage
    std::shared_ptr<squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SquirtleMove_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const SquirtleMove_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SquirtleMove_FeedbackMessage_

// alias to use template instance with default allocator
using SquirtleMove_FeedbackMessage =
  squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace squirtlebot_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace squirtlebot_interfaces
{

namespace action
{

struct SquirtleMove
{
  /// The goal message defined in the action definition.
  using Goal = squirtlebot_interfaces::action::SquirtleMove_Goal;
  /// The result message defined in the action definition.
  using Result = squirtlebot_interfaces::action::SquirtleMove_Result;
  /// The feedback message defined in the action definition.
  using Feedback = squirtlebot_interfaces::action::SquirtleMove_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = squirtlebot_interfaces::action::SquirtleMove_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = squirtlebot_interfaces::action::SquirtleMove_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct SquirtleMove SquirtleMove;

}  // namespace action

}  // namespace squirtlebot_interfaces

#endif  // SQUIRTLEBOT_INTERFACES__ACTION__DETAIL__SQUIRTLE_MOVE__STRUCT_HPP_
