// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ctd_interfaces:action/AcquireData.idl
// generated code does not contain a copyright notice

#ifndef CTD_INTERFACES__ACTION__DETAIL__ACQUIRE_DATA__BUILDER_HPP_
#define CTD_INTERFACES__ACTION__DETAIL__ACQUIRE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ctd_interfaces/action/detail/acquire_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ctd_interfaces
{

namespace action
{

namespace builder
{

class Init_AcquireData_Goal_duration_sec
{
public:
  explicit Init_AcquireData_Goal_duration_sec(::ctd_interfaces::action::AcquireData_Goal & msg)
  : msg_(msg)
  {}
  ::ctd_interfaces::action::AcquireData_Goal duration_sec(::ctd_interfaces::action::AcquireData_Goal::_duration_sec_type arg)
  {
    msg_.duration_sec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ctd_interfaces::action::AcquireData_Goal msg_;
};

class Init_AcquireData_Goal_target
{
public:
  Init_AcquireData_Goal_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AcquireData_Goal_duration_sec target(::ctd_interfaces::action::AcquireData_Goal::_target_type arg)
  {
    msg_.target = std::move(arg);
    return Init_AcquireData_Goal_duration_sec(msg_);
  }

private:
  ::ctd_interfaces::action::AcquireData_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ctd_interfaces::action::AcquireData_Goal>()
{
  return ctd_interfaces::action::builder::Init_AcquireData_Goal_target();
}

}  // namespace ctd_interfaces


namespace ctd_interfaces
{

namespace action
{

namespace builder
{

class Init_AcquireData_Result_summary
{
public:
  explicit Init_AcquireData_Result_summary(::ctd_interfaces::action::AcquireData_Result & msg)
  : msg_(msg)
  {}
  ::ctd_interfaces::action::AcquireData_Result summary(::ctd_interfaces::action::AcquireData_Result::_summary_type arg)
  {
    msg_.summary = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ctd_interfaces::action::AcquireData_Result msg_;
};

class Init_AcquireData_Result_success
{
public:
  Init_AcquireData_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AcquireData_Result_summary success(::ctd_interfaces::action::AcquireData_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_AcquireData_Result_summary(msg_);
  }

private:
  ::ctd_interfaces::action::AcquireData_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ctd_interfaces::action::AcquireData_Result>()
{
  return ctd_interfaces::action::builder::Init_AcquireData_Result_success();
}

}  // namespace ctd_interfaces


namespace ctd_interfaces
{

namespace action
{

namespace builder
{

class Init_AcquireData_Feedback_status
{
public:
  explicit Init_AcquireData_Feedback_status(::ctd_interfaces::action::AcquireData_Feedback & msg)
  : msg_(msg)
  {}
  ::ctd_interfaces::action::AcquireData_Feedback status(::ctd_interfaces::action::AcquireData_Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ctd_interfaces::action::AcquireData_Feedback msg_;
};

class Init_AcquireData_Feedback_progress
{
public:
  Init_AcquireData_Feedback_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AcquireData_Feedback_status progress(::ctd_interfaces::action::AcquireData_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return Init_AcquireData_Feedback_status(msg_);
  }

private:
  ::ctd_interfaces::action::AcquireData_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ctd_interfaces::action::AcquireData_Feedback>()
{
  return ctd_interfaces::action::builder::Init_AcquireData_Feedback_progress();
}

}  // namespace ctd_interfaces


namespace ctd_interfaces
{

namespace action
{

namespace builder
{

class Init_AcquireData_SendGoal_Request_goal
{
public:
  explicit Init_AcquireData_SendGoal_Request_goal(::ctd_interfaces::action::AcquireData_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ctd_interfaces::action::AcquireData_SendGoal_Request goal(::ctd_interfaces::action::AcquireData_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ctd_interfaces::action::AcquireData_SendGoal_Request msg_;
};

class Init_AcquireData_SendGoal_Request_goal_id
{
public:
  Init_AcquireData_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AcquireData_SendGoal_Request_goal goal_id(::ctd_interfaces::action::AcquireData_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AcquireData_SendGoal_Request_goal(msg_);
  }

private:
  ::ctd_interfaces::action::AcquireData_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ctd_interfaces::action::AcquireData_SendGoal_Request>()
{
  return ctd_interfaces::action::builder::Init_AcquireData_SendGoal_Request_goal_id();
}

}  // namespace ctd_interfaces


namespace ctd_interfaces
{

namespace action
{

namespace builder
{

class Init_AcquireData_SendGoal_Response_stamp
{
public:
  explicit Init_AcquireData_SendGoal_Response_stamp(::ctd_interfaces::action::AcquireData_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ctd_interfaces::action::AcquireData_SendGoal_Response stamp(::ctd_interfaces::action::AcquireData_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ctd_interfaces::action::AcquireData_SendGoal_Response msg_;
};

class Init_AcquireData_SendGoal_Response_accepted
{
public:
  Init_AcquireData_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AcquireData_SendGoal_Response_stamp accepted(::ctd_interfaces::action::AcquireData_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_AcquireData_SendGoal_Response_stamp(msg_);
  }

private:
  ::ctd_interfaces::action::AcquireData_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ctd_interfaces::action::AcquireData_SendGoal_Response>()
{
  return ctd_interfaces::action::builder::Init_AcquireData_SendGoal_Response_accepted();
}

}  // namespace ctd_interfaces


namespace ctd_interfaces
{

namespace action
{

namespace builder
{

class Init_AcquireData_GetResult_Request_goal_id
{
public:
  Init_AcquireData_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ctd_interfaces::action::AcquireData_GetResult_Request goal_id(::ctd_interfaces::action::AcquireData_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ctd_interfaces::action::AcquireData_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ctd_interfaces::action::AcquireData_GetResult_Request>()
{
  return ctd_interfaces::action::builder::Init_AcquireData_GetResult_Request_goal_id();
}

}  // namespace ctd_interfaces


namespace ctd_interfaces
{

namespace action
{

namespace builder
{

class Init_AcquireData_GetResult_Response_result
{
public:
  explicit Init_AcquireData_GetResult_Response_result(::ctd_interfaces::action::AcquireData_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ctd_interfaces::action::AcquireData_GetResult_Response result(::ctd_interfaces::action::AcquireData_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ctd_interfaces::action::AcquireData_GetResult_Response msg_;
};

class Init_AcquireData_GetResult_Response_status
{
public:
  Init_AcquireData_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AcquireData_GetResult_Response_result status(::ctd_interfaces::action::AcquireData_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_AcquireData_GetResult_Response_result(msg_);
  }

private:
  ::ctd_interfaces::action::AcquireData_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ctd_interfaces::action::AcquireData_GetResult_Response>()
{
  return ctd_interfaces::action::builder::Init_AcquireData_GetResult_Response_status();
}

}  // namespace ctd_interfaces


namespace ctd_interfaces
{

namespace action
{

namespace builder
{

class Init_AcquireData_FeedbackMessage_feedback
{
public:
  explicit Init_AcquireData_FeedbackMessage_feedback(::ctd_interfaces::action::AcquireData_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ctd_interfaces::action::AcquireData_FeedbackMessage feedback(::ctd_interfaces::action::AcquireData_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ctd_interfaces::action::AcquireData_FeedbackMessage msg_;
};

class Init_AcquireData_FeedbackMessage_goal_id
{
public:
  Init_AcquireData_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AcquireData_FeedbackMessage_feedback goal_id(::ctd_interfaces::action::AcquireData_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AcquireData_FeedbackMessage_feedback(msg_);
  }

private:
  ::ctd_interfaces::action::AcquireData_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ctd_interfaces::action::AcquireData_FeedbackMessage>()
{
  return ctd_interfaces::action::builder::Init_AcquireData_FeedbackMessage_goal_id();
}

}  // namespace ctd_interfaces

#endif  // CTD_INTERFACES__ACTION__DETAIL__ACQUIRE_DATA__BUILDER_HPP_
