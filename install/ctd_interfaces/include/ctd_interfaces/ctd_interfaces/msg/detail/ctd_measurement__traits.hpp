// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ctd_interfaces:msg/CtdMeasurement.idl
// generated code does not contain a copyright notice

#ifndef CTD_INTERFACES__MSG__DETAIL__CTD_MEASUREMENT__TRAITS_HPP_
#define CTD_INTERFACES__MSG__DETAIL__CTD_MEASUREMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ctd_interfaces/msg/detail/ctd_measurement__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace ctd_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const CtdMeasurement & msg,
  std::ostream & out)
{
  out << "{";
  // member: sensor_id
  {
    out << "sensor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_id, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: conductivity
  {
    out << "conductivity: ";
    rosidl_generator_traits::value_to_yaml(msg.conductivity, out);
    out << ", ";
  }

  // member: pressure
  {
    out << "pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure, out);
    out << ", ";
  }

  // member: turbidity
  {
    out << "turbidity: ";
    rosidl_generator_traits::value_to_yaml(msg.turbidity, out);
    out << ", ";
  }

  // member: valid
  {
    out << "valid: ";
    rosidl_generator_traits::value_to_yaml(msg.valid, out);
    out << ", ";
  }

  // member: raw_line
  {
    out << "raw_line: ";
    rosidl_generator_traits::value_to_yaml(msg.raw_line, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CtdMeasurement & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sensor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_id, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: conductivity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "conductivity: ";
    rosidl_generator_traits::value_to_yaml(msg.conductivity, out);
    out << "\n";
  }

  // member: pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure, out);
    out << "\n";
  }

  // member: turbidity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turbidity: ";
    rosidl_generator_traits::value_to_yaml(msg.turbidity, out);
    out << "\n";
  }

  // member: valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid: ";
    rosidl_generator_traits::value_to_yaml(msg.valid, out);
    out << "\n";
  }

  // member: raw_line
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "raw_line: ";
    rosidl_generator_traits::value_to_yaml(msg.raw_line, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CtdMeasurement & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ctd_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ctd_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ctd_interfaces::msg::CtdMeasurement & msg,
  std::ostream & out, size_t indentation = 0)
{
  ctd_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ctd_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const ctd_interfaces::msg::CtdMeasurement & msg)
{
  return ctd_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ctd_interfaces::msg::CtdMeasurement>()
{
  return "ctd_interfaces::msg::CtdMeasurement";
}

template<>
inline const char * name<ctd_interfaces::msg::CtdMeasurement>()
{
  return "ctd_interfaces/msg/CtdMeasurement";
}

template<>
struct has_fixed_size<ctd_interfaces::msg::CtdMeasurement>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ctd_interfaces::msg::CtdMeasurement>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ctd_interfaces::msg::CtdMeasurement>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CTD_INTERFACES__MSG__DETAIL__CTD_MEASUREMENT__TRAITS_HPP_
