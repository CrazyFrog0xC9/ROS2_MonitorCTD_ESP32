// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ctd_interfaces:srv/SetAcquisition.idl
// generated code does not contain a copyright notice

#ifndef CTD_INTERFACES__SRV__DETAIL__SET_ACQUISITION__BUILDER_HPP_
#define CTD_INTERFACES__SRV__DETAIL__SET_ACQUISITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ctd_interfaces/srv/detail/set_acquisition__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ctd_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetAcquisition_Request_enable
{
public:
  explicit Init_SetAcquisition_Request_enable(::ctd_interfaces::srv::SetAcquisition_Request & msg)
  : msg_(msg)
  {}
  ::ctd_interfaces::srv::SetAcquisition_Request enable(::ctd_interfaces::srv::SetAcquisition_Request::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ctd_interfaces::srv::SetAcquisition_Request msg_;
};

class Init_SetAcquisition_Request_target
{
public:
  Init_SetAcquisition_Request_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetAcquisition_Request_enable target(::ctd_interfaces::srv::SetAcquisition_Request::_target_type arg)
  {
    msg_.target = std::move(arg);
    return Init_SetAcquisition_Request_enable(msg_);
  }

private:
  ::ctd_interfaces::srv::SetAcquisition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ctd_interfaces::srv::SetAcquisition_Request>()
{
  return ctd_interfaces::srv::builder::Init_SetAcquisition_Request_target();
}

}  // namespace ctd_interfaces


namespace ctd_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetAcquisition_Response_message
{
public:
  explicit Init_SetAcquisition_Response_message(::ctd_interfaces::srv::SetAcquisition_Response & msg)
  : msg_(msg)
  {}
  ::ctd_interfaces::srv::SetAcquisition_Response message(::ctd_interfaces::srv::SetAcquisition_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ctd_interfaces::srv::SetAcquisition_Response msg_;
};

class Init_SetAcquisition_Response_success
{
public:
  Init_SetAcquisition_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetAcquisition_Response_message success(::ctd_interfaces::srv::SetAcquisition_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetAcquisition_Response_message(msg_);
  }

private:
  ::ctd_interfaces::srv::SetAcquisition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ctd_interfaces::srv::SetAcquisition_Response>()
{
  return ctd_interfaces::srv::builder::Init_SetAcquisition_Response_success();
}

}  // namespace ctd_interfaces

#endif  // CTD_INTERFACES__SRV__DETAIL__SET_ACQUISITION__BUILDER_HPP_
