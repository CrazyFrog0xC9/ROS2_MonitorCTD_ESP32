// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ctd_interfaces:msg/CtdMeasurement.idl
// generated code does not contain a copyright notice

#ifndef CTD_INTERFACES__MSG__DETAIL__CTD_MEASUREMENT__STRUCT_HPP_
#define CTD_INTERFACES__MSG__DETAIL__CTD_MEASUREMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ctd_interfaces__msg__CtdMeasurement __attribute__((deprecated))
#else
# define DEPRECATED__ctd_interfaces__msg__CtdMeasurement __declspec(deprecated)
#endif

namespace ctd_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CtdMeasurement_
{
  using Type = CtdMeasurement_<ContainerAllocator>;

  explicit CtdMeasurement_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_id = "";
      this->temperature = 0.0f;
      this->conductivity = 0.0f;
      this->pressure = 0.0f;
      this->turbidity = 0.0f;
      this->valid = false;
      this->raw_line = "";
    }
  }

  explicit CtdMeasurement_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sensor_id(_alloc),
    stamp(_alloc, _init),
    raw_line(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_id = "";
      this->temperature = 0.0f;
      this->conductivity = 0.0f;
      this->pressure = 0.0f;
      this->turbidity = 0.0f;
      this->valid = false;
      this->raw_line = "";
    }
  }

  // field types and members
  using _sensor_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sensor_id_type sensor_id;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _temperature_type =
    float;
  _temperature_type temperature;
  using _conductivity_type =
    float;
  _conductivity_type conductivity;
  using _pressure_type =
    float;
  _pressure_type pressure;
  using _turbidity_type =
    float;
  _turbidity_type turbidity;
  using _valid_type =
    bool;
  _valid_type valid;
  using _raw_line_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _raw_line_type raw_line;

  // setters for named parameter idiom
  Type & set__sensor_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sensor_id = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__temperature(
    const float & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__conductivity(
    const float & _arg)
  {
    this->conductivity = _arg;
    return *this;
  }
  Type & set__pressure(
    const float & _arg)
  {
    this->pressure = _arg;
    return *this;
  }
  Type & set__turbidity(
    const float & _arg)
  {
    this->turbidity = _arg;
    return *this;
  }
  Type & set__valid(
    const bool & _arg)
  {
    this->valid = _arg;
    return *this;
  }
  Type & set__raw_line(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->raw_line = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ctd_interfaces::msg::CtdMeasurement_<ContainerAllocator> *;
  using ConstRawPtr =
    const ctd_interfaces::msg::CtdMeasurement_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ctd_interfaces::msg::CtdMeasurement_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ctd_interfaces::msg::CtdMeasurement_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ctd_interfaces::msg::CtdMeasurement_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ctd_interfaces::msg::CtdMeasurement_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ctd_interfaces::msg::CtdMeasurement_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ctd_interfaces::msg::CtdMeasurement_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ctd_interfaces::msg::CtdMeasurement_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ctd_interfaces::msg::CtdMeasurement_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ctd_interfaces__msg__CtdMeasurement
    std::shared_ptr<ctd_interfaces::msg::CtdMeasurement_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ctd_interfaces__msg__CtdMeasurement
    std::shared_ptr<ctd_interfaces::msg::CtdMeasurement_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CtdMeasurement_ & other) const
  {
    if (this->sensor_id != other.sensor_id) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->conductivity != other.conductivity) {
      return false;
    }
    if (this->pressure != other.pressure) {
      return false;
    }
    if (this->turbidity != other.turbidity) {
      return false;
    }
    if (this->valid != other.valid) {
      return false;
    }
    if (this->raw_line != other.raw_line) {
      return false;
    }
    return true;
  }
  bool operator!=(const CtdMeasurement_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CtdMeasurement_

// alias to use template instance with default allocator
using CtdMeasurement =
  ctd_interfaces::msg::CtdMeasurement_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ctd_interfaces

#endif  // CTD_INTERFACES__MSG__DETAIL__CTD_MEASUREMENT__STRUCT_HPP_
