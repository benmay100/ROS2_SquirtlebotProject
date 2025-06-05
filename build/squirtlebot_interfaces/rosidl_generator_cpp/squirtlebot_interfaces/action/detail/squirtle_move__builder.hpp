// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from squirtlebot_interfaces:action/SquirtleMove.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "squirtlebot_interfaces/action/squirtle_move.hpp"


#ifndef SQUIRTLEBOT_INTERFACES__ACTION__DETAIL__SQUIRTLE_MOVE__BUILDER_HPP_
#define SQUIRTLEBOT_INTERFACES__ACTION__DETAIL__SQUIRTLE_MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "squirtlebot_interfaces/action/detail/squirtle_move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace squirtlebot_interfaces
{

namespace action
{

namespace builder
{

class Init_SquirtleMove_Goal_duration
{
public:
  explicit Init_SquirtleMove_Goal_duration(::squirtlebot_interfaces::action::SquirtleMove_Goal & msg)
  : msg_(msg)
  {}
  ::squirtlebot_interfaces::action::SquirtleMove_Goal duration(::squirtlebot_interfaces::action::SquirtleMove_Goal::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::squirtlebot_interfaces::action::SquirtleMove_Goal msg_;
};

class Init_SquirtleMove_Goal_angular_z
{
public:
  explicit Init_SquirtleMove_Goal_angular_z(::squirtlebot_interfaces::action::SquirtleMove_Goal & msg)
  : msg_(msg)
  {}
  Init_SquirtleMove_Goal_duration angular_z(::squirtlebot_interfaces::action::SquirtleMove_Goal::_angular_z_type arg)
  {
    msg_.angular_z = std::move(arg);
    return Init_SquirtleMove_Goal_duration(msg_);
  }

private:
  ::squirtlebot_interfaces::action::SquirtleMove_Goal msg_;
};

class Init_SquirtleMove_Goal_linear_x
{
public:
  Init_SquirtleMove_Goal_linear_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SquirtleMove_Goal_angular_z linear_x(::squirtlebot_interfaces::action::SquirtleMove_Goal::_linear_x_type arg)
  {
    msg_.linear_x = std::move(arg);
    return Init_SquirtleMove_Goal_angular_z(msg_);
  }

private:
  ::squirtlebot_interfaces::action::SquirtleMove_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::squirtlebot_interfaces::action::SquirtleMove_Goal>()
{
  return squirtlebot_interfaces::action::builder::Init_SquirtleMove_Goal_linear_x();
}

}  // namespace squirtlebot_interfaces


namespace squirtlebot_interfaces
{

namespace action
{

namespace builder
{

class Init_SquirtleMove_Result_result_message
{
public:
  explicit Init_SquirtleMove_Result_result_message(::squirtlebot_interfaces::action::SquirtleMove_Result & msg)
  : msg_(msg)
  {}
  ::squirtlebot_interfaces::action::SquirtleMove_Result result_message(::squirtlebot_interfaces::action::SquirtleMove_Result::_result_message_type arg)
  {
    msg_.result_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::squirtlebot_interfaces::action::SquirtleMove_Result msg_;
};

class Init_SquirtleMove_Result_final_theta_angle
{
public:
  explicit Init_SquirtleMove_Result_final_theta_angle(::squirtlebot_interfaces::action::SquirtleMove_Result & msg)
  : msg_(msg)
  {}
  Init_SquirtleMove_Result_result_message final_theta_angle(::squirtlebot_interfaces::action::SquirtleMove_Result::_final_theta_angle_type arg)
  {
    msg_.final_theta_angle = std::move(arg);
    return Init_SquirtleMove_Result_result_message(msg_);
  }

private:
  ::squirtlebot_interfaces::action::SquirtleMove_Result msg_;
};

class Init_SquirtleMove_Result_final_position_y
{
public:
  explicit Init_SquirtleMove_Result_final_position_y(::squirtlebot_interfaces::action::SquirtleMove_Result & msg)
  : msg_(msg)
  {}
  Init_SquirtleMove_Result_final_theta_angle final_position_y(::squirtlebot_interfaces::action::SquirtleMove_Result::_final_position_y_type arg)
  {
    msg_.final_position_y = std::move(arg);
    return Init_SquirtleMove_Result_final_theta_angle(msg_);
  }

private:
  ::squirtlebot_interfaces::action::SquirtleMove_Result msg_;
};

class Init_SquirtleMove_Result_final_position_x
{
public:
  Init_SquirtleMove_Result_final_position_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SquirtleMove_Result_final_position_y final_position_x(::squirtlebot_interfaces::action::SquirtleMove_Result::_final_position_x_type arg)
  {
    msg_.final_position_x = std::move(arg);
    return Init_SquirtleMove_Result_final_position_y(msg_);
  }

private:
  ::squirtlebot_interfaces::action::SquirtleMove_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::squirtlebot_interfaces::action::SquirtleMove_Result>()
{
  return squirtlebot_interfaces::action::builder::Init_SquirtleMove_Result_final_position_x();
}

}  // namespace squirtlebot_interfaces


namespace squirtlebot_interfaces
{

namespace action
{

namespace builder
{

class Init_SquirtleMove_Feedback_status
{
public:
  explicit Init_SquirtleMove_Feedback_status(::squirtlebot_interfaces::action::SquirtleMove_Feedback & msg)
  : msg_(msg)
  {}
  ::squirtlebot_interfaces::action::SquirtleMove_Feedback status(::squirtlebot_interfaces::action::SquirtleMove_Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::squirtlebot_interfaces::action::SquirtleMove_Feedback msg_;
};

class Init_SquirtleMove_Feedback_current_theta_angle
{
public:
  explicit Init_SquirtleMove_Feedback_current_theta_angle(::squirtlebot_interfaces::action::SquirtleMove_Feedback & msg)
  : msg_(msg)
  {}
  Init_SquirtleMove_Feedback_status current_theta_angle(::squirtlebot_interfaces::action::SquirtleMove_Feedback::_current_theta_angle_type arg)
  {
    msg_.current_theta_angle = std::move(arg);
    return Init_SquirtleMove_Feedback_status(msg_);
  }

private:
  ::squirtlebot_interfaces::action::SquirtleMove_Feedback msg_;
};

class Init_SquirtleMove_Feedback_current_position_y
{
public:
  explicit Init_SquirtleMove_Feedback_current_position_y(::squirtlebot_interfaces::action::SquirtleMove_Feedback & msg)
  : msg_(msg)
  {}
  Init_SquirtleMove_Feedback_current_theta_angle current_position_y(::squirtlebot_interfaces::action::SquirtleMove_Feedback::_current_position_y_type arg)
  {
    msg_.current_position_y = std::move(arg);
    return Init_SquirtleMove_Feedback_current_theta_angle(msg_);
  }

private:
  ::squirtlebot_interfaces::action::SquirtleMove_Feedback msg_;
};

class Init_SquirtleMove_Feedback_current_position_x
{
public:
  Init_SquirtleMove_Feedback_current_position_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SquirtleMove_Feedback_current_position_y current_position_x(::squirtlebot_interfaces::action::SquirtleMove_Feedback::_current_position_x_type arg)
  {
    msg_.current_position_x = std::move(arg);
    return Init_SquirtleMove_Feedback_current_position_y(msg_);
  }

private:
  ::squirtlebot_interfaces::action::SquirtleMove_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::squirtlebot_interfaces::action::SquirtleMove_Feedback>()
{
  return squirtlebot_interfaces::action::builder::Init_SquirtleMove_Feedback_current_position_x();
}

}  // namespace squirtlebot_interfaces


namespace squirtlebot_interfaces
{

namespace action
{

namespace builder
{

class Init_SquirtleMove_SendGoal_Request_goal
{
public:
  explicit Init_SquirtleMove_SendGoal_Request_goal(::squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request goal(::squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request msg_;
};

class Init_SquirtleMove_SendGoal_Request_goal_id
{
public:
  Init_SquirtleMove_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SquirtleMove_SendGoal_Request_goal goal_id(::squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SquirtleMove_SendGoal_Request_goal(msg_);
  }

private:
  ::squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request>()
{
  return squirtlebot_interfaces::action::builder::Init_SquirtleMove_SendGoal_Request_goal_id();
}

}  // namespace squirtlebot_interfaces


namespace squirtlebot_interfaces
{

namespace action
{

namespace builder
{

class Init_SquirtleMove_SendGoal_Response_stamp
{
public:
  explicit Init_SquirtleMove_SendGoal_Response_stamp(::squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response stamp(::squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response msg_;
};

class Init_SquirtleMove_SendGoal_Response_accepted
{
public:
  Init_SquirtleMove_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SquirtleMove_SendGoal_Response_stamp accepted(::squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_SquirtleMove_SendGoal_Response_stamp(msg_);
  }

private:
  ::squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response>()
{
  return squirtlebot_interfaces::action::builder::Init_SquirtleMove_SendGoal_Response_accepted();
}

}  // namespace squirtlebot_interfaces


namespace squirtlebot_interfaces
{

namespace action
{

namespace builder
{

class Init_SquirtleMove_SendGoal_Event_response
{
public:
  explicit Init_SquirtleMove_SendGoal_Event_response(::squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event response(::squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event msg_;
};

class Init_SquirtleMove_SendGoal_Event_request
{
public:
  explicit Init_SquirtleMove_SendGoal_Event_request(::squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_SquirtleMove_SendGoal_Event_response request(::squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SquirtleMove_SendGoal_Event_response(msg_);
  }

private:
  ::squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event msg_;
};

class Init_SquirtleMove_SendGoal_Event_info
{
public:
  Init_SquirtleMove_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SquirtleMove_SendGoal_Event_request info(::squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SquirtleMove_SendGoal_Event_request(msg_);
  }

private:
  ::squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event>()
{
  return squirtlebot_interfaces::action::builder::Init_SquirtleMove_SendGoal_Event_info();
}

}  // namespace squirtlebot_interfaces


namespace squirtlebot_interfaces
{

namespace action
{

namespace builder
{

class Init_SquirtleMove_GetResult_Request_goal_id
{
public:
  Init_SquirtleMove_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::squirtlebot_interfaces::action::SquirtleMove_GetResult_Request goal_id(::squirtlebot_interfaces::action::SquirtleMove_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::squirtlebot_interfaces::action::SquirtleMove_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::squirtlebot_interfaces::action::SquirtleMove_GetResult_Request>()
{
  return squirtlebot_interfaces::action::builder::Init_SquirtleMove_GetResult_Request_goal_id();
}

}  // namespace squirtlebot_interfaces


namespace squirtlebot_interfaces
{

namespace action
{

namespace builder
{

class Init_SquirtleMove_GetResult_Response_result
{
public:
  explicit Init_SquirtleMove_GetResult_Response_result(::squirtlebot_interfaces::action::SquirtleMove_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::squirtlebot_interfaces::action::SquirtleMove_GetResult_Response result(::squirtlebot_interfaces::action::SquirtleMove_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::squirtlebot_interfaces::action::SquirtleMove_GetResult_Response msg_;
};

class Init_SquirtleMove_GetResult_Response_status
{
public:
  Init_SquirtleMove_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SquirtleMove_GetResult_Response_result status(::squirtlebot_interfaces::action::SquirtleMove_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SquirtleMove_GetResult_Response_result(msg_);
  }

private:
  ::squirtlebot_interfaces::action::SquirtleMove_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::squirtlebot_interfaces::action::SquirtleMove_GetResult_Response>()
{
  return squirtlebot_interfaces::action::builder::Init_SquirtleMove_GetResult_Response_status();
}

}  // namespace squirtlebot_interfaces


namespace squirtlebot_interfaces
{

namespace action
{

namespace builder
{

class Init_SquirtleMove_GetResult_Event_response
{
public:
  explicit Init_SquirtleMove_GetResult_Event_response(::squirtlebot_interfaces::action::SquirtleMove_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::squirtlebot_interfaces::action::SquirtleMove_GetResult_Event response(::squirtlebot_interfaces::action::SquirtleMove_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::squirtlebot_interfaces::action::SquirtleMove_GetResult_Event msg_;
};

class Init_SquirtleMove_GetResult_Event_request
{
public:
  explicit Init_SquirtleMove_GetResult_Event_request(::squirtlebot_interfaces::action::SquirtleMove_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_SquirtleMove_GetResult_Event_response request(::squirtlebot_interfaces::action::SquirtleMove_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SquirtleMove_GetResult_Event_response(msg_);
  }

private:
  ::squirtlebot_interfaces::action::SquirtleMove_GetResult_Event msg_;
};

class Init_SquirtleMove_GetResult_Event_info
{
public:
  Init_SquirtleMove_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SquirtleMove_GetResult_Event_request info(::squirtlebot_interfaces::action::SquirtleMove_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SquirtleMove_GetResult_Event_request(msg_);
  }

private:
  ::squirtlebot_interfaces::action::SquirtleMove_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::squirtlebot_interfaces::action::SquirtleMove_GetResult_Event>()
{
  return squirtlebot_interfaces::action::builder::Init_SquirtleMove_GetResult_Event_info();
}

}  // namespace squirtlebot_interfaces


namespace squirtlebot_interfaces
{

namespace action
{

namespace builder
{

class Init_SquirtleMove_FeedbackMessage_feedback
{
public:
  explicit Init_SquirtleMove_FeedbackMessage_feedback(::squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage feedback(::squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage msg_;
};

class Init_SquirtleMove_FeedbackMessage_goal_id
{
public:
  Init_SquirtleMove_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SquirtleMove_FeedbackMessage_feedback goal_id(::squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SquirtleMove_FeedbackMessage_feedback(msg_);
  }

private:
  ::squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage>()
{
  return squirtlebot_interfaces::action::builder::Init_SquirtleMove_FeedbackMessage_goal_id();
}

}  // namespace squirtlebot_interfaces

#endif  // SQUIRTLEBOT_INTERFACES__ACTION__DETAIL__SQUIRTLE_MOVE__BUILDER_HPP_
