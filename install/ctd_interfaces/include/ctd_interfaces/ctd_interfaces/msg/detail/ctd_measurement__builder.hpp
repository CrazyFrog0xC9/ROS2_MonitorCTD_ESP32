// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ctd_interfaces:msg/CtdMeasurement.idl
// generated code does not contain a copyright notice

#ifndef CTD_INTERFACES__MSG__DETAIL__CTD_MEASUREMENT__BUILDER_HPP_
#define CTD_INTERFACES__MSG__DETAIL__CTD_MEASUREMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ctd_interfaces/msg/detail/ctd_measurement__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ctd_interfaces
{

namespace msg
{

namespace builder
{

class Init_CtdMeasurement_raw_line
{
public:
  explicit Init_CtdMeasurement_raw_line(::ctd_interfaces::msg::CtdMeasurement & msg)
  : msg_(msg)
  {}
  ::ctd_interfaces::msg::CtdMeasurement raw_line(::ctd_interfaces::msg::CtdMeasurement::_raw_line_type arg)
  {
    msg_.raw_line = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ctd_interfaces::msg::CtdMeasurement msg_;
};

class Init_CtdMeasurement_valid
{
public:
  explicit Init_CtdMeasurement_valid(::ctd_interfaces::msg::CtdMeasurement & msg)
  : msg_(msg)
  {}
  Init_CtdMeasurement_raw_line valid(::ctd_interfaces::msg::CtdMeasurement::_valid_type arg)
  {
    msg_.valid = std::move(arg);
    return Init_CtdMeasurement_raw_line(msg_);
  }

private:
  ::ctd_interfaces::msg::CtdMeasurement msg_;
};

class Init_CtdMeasurement_turbidity
{
public:
  explicit Init_CtdMeasurement_turbidity(::ctd_interfaces::msg::CtdMeasurement & msg)
  : msg_(msg)
  {}
  Init_CtdMeasurement_valid turbidity(::ctd_interfaces::msg::CtdMeasurement::_turbidity_type arg)
  {
    msg_.turbidity = std::move(arg);
    return Init_CtdMeasurement_valid(msg_);
  }

private:
  ::ctd_interfaces::msg::CtdMeasurement msg_;
};

class Init_CtdMeasurement_pressure
{
public:
  explicit Init_CtdMeasurement_pressure(::ctd_interfaces::msg::CtdMeasurement & msg)
  : msg_(msg)
  {}
  Init_CtdMeasurement_turbidity pressure(::ctd_interfaces::msg::CtdMeasurement::_pressure_type arg)
  {
    msg_.pressure = std::move(arg);
    return Init_CtdMeasurement_turbidity(msg_);
  }

private:
  ::ctd_interfaces::msg::CtdMeasurement msg_;
};

class Init_CtdMeasurement_conductivity
{
public:
  explicit Init_CtdMeasurement_conductivity(::ctd_interfaces::msg::CtdMeasurement & msg)
  : msg_(msg)
  {}
  Init_CtdMeasurement_pressure conductivity(::ctd_interfaces::msg::CtdMeasurement::_conductivity_type arg)
  {
    msg_.conductivity = std::move(arg);
    return Init_CtdMeasurement_pressure(msg_);
  }

private:
  ::ctd_interfaces::msg::CtdMeasurement msg_;
};

class Init_CtdMeasurement_temperature
{
public:
  explicit Init_CtdMeasurement_temperature(::ctd_interfaces::msg::CtdMeasurement & msg)
  : msg_(msg)
  {}
  Init_CtdMeasurement_conductivity temperature(::ctd_interfaces::msg::CtdMeasurement::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_CtdMeasurement_conductivity(msg_);
  }

private:
  ::ctd_interfaces::msg::CtdMeasurement msg_;
};

class Init_CtdMeasurement_stamp
{
public:
  explicit Init_CtdMeasurement_stamp(::ctd_interfaces::msg::CtdMeasurement & msg)
  : msg_(msg)
  {}
  Init_CtdMeasurement_temperature stamp(::ctd_interfaces::msg::CtdMeasurement::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_CtdMeasurement_temperature(msg_);
  }

private:
  ::ctd_interfaces::msg::CtdMeasurement msg_;
};

class Init_CtdMeasurement_sensor_id
{
public:
  Init_CtdMeasurement_sensor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CtdMeasurement_stamp sensor_id(::ctd_interfaces::msg::CtdMeasurement::_sensor_id_type arg)
  {
    msg_.sensor_id = std::move(arg);
    return Init_CtdMeasurement_stamp(msg_);
  }

private:
  ::ctd_interfaces::msg::CtdMeasurement msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ctd_interfaces::msg::CtdMeasurement>()
{
  return ctd_interfaces::msg::builder::Init_CtdMeasurement_sensor_id();
}

}  // namespace ctd_interfaces

#endif  // CTD_INTERFACES__MSG__DETAIL__CTD_MEASUREMENT__BUILDER_HPP_
