// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ctd_interfaces:srv/SetAcquisition.idl
// generated code does not contain a copyright notice

#ifndef CTD_INTERFACES__SRV__DETAIL__SET_ACQUISITION__TRAITS_HPP_
#define CTD_INTERFACES__SRV__DETAIL__SET_ACQUISITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ctd_interfaces/srv/detail/set_acquisition__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ctd_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetAcquisition_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: target
  {
    out << "target: ";
    rosidl_generator_traits::value_to_yaml(msg.target, out);
    out << ", ";
  }

  // member: enable
  {
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetAcquisition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target: ";
    rosidl_generator_traits::value_to_yaml(msg.target, out);
    out << "\n";
  }

  // member: enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetAcquisition_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ctd_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ctd_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ctd_interfaces::srv::SetAcquisition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ctd_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ctd_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ctd_interfaces::srv::SetAcquisition_Request & msg)
{
  return ctd_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ctd_interfaces::srv::SetAcquisition_Request>()
{
  return "ctd_interfaces::srv::SetAcquisition_Request";
}

template<>
inline const char * name<ctd_interfaces::srv::SetAcquisition_Request>()
{
  return "ctd_interfaces/srv/SetAcquisition_Request";
}

template<>
struct has_fixed_size<ctd_interfaces::srv::SetAcquisition_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ctd_interfaces::srv::SetAcquisition_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ctd_interfaces::srv::SetAcquisition_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ctd_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetAcquisition_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetAcquisition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetAcquisition_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ctd_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ctd_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ctd_interfaces::srv::SetAcquisition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ctd_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ctd_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ctd_interfaces::srv::SetAcquisition_Response & msg)
{
  return ctd_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ctd_interfaces::srv::SetAcquisition_Response>()
{
  return "ctd_interfaces::srv::SetAcquisition_Response";
}

template<>
inline const char * name<ctd_interfaces::srv::SetAcquisition_Response>()
{
  return "ctd_interfaces/srv/SetAcquisition_Response";
}

template<>
struct has_fixed_size<ctd_interfaces::srv::SetAcquisition_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ctd_interfaces::srv::SetAcquisition_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ctd_interfaces::srv::SetAcquisition_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ctd_interfaces::srv::SetAcquisition>()
{
  return "ctd_interfaces::srv::SetAcquisition";
}

template<>
inline const char * name<ctd_interfaces::srv::SetAcquisition>()
{
  return "ctd_interfaces/srv/SetAcquisition";
}

template<>
struct has_fixed_size<ctd_interfaces::srv::SetAcquisition>
  : std::integral_constant<
    bool,
    has_fixed_size<ctd_interfaces::srv::SetAcquisition_Request>::value &&
    has_fixed_size<ctd_interfaces::srv::SetAcquisition_Response>::value
  >
{
};

template<>
struct has_bounded_size<ctd_interfaces::srv::SetAcquisition>
  : std::integral_constant<
    bool,
    has_bounded_size<ctd_interfaces::srv::SetAcquisition_Request>::value &&
    has_bounded_size<ctd_interfaces::srv::SetAcquisition_Response>::value
  >
{
};

template<>
struct is_service<ctd_interfaces::srv::SetAcquisition>
  : std::true_type
{
};

template<>
struct is_service_request<ctd_interfaces::srv::SetAcquisition_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ctd_interfaces::srv::SetAcquisition_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CTD_INTERFACES__SRV__DETAIL__SET_ACQUISITION__TRAITS_HPP_
