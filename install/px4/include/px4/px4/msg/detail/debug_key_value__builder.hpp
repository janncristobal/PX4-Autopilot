// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4:msg/DebugKeyValue.idl
// generated code does not contain a copyright notice

#ifndef PX4__MSG__DETAIL__DEBUG_KEY_VALUE__BUILDER_HPP_
#define PX4__MSG__DETAIL__DEBUG_KEY_VALUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4/msg/detail/debug_key_value__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4
{

namespace msg
{

namespace builder
{

class Init_DebugKeyValue_value
{
public:
  explicit Init_DebugKeyValue_value(::px4::msg::DebugKeyValue & msg)
  : msg_(msg)
  {}
  ::px4::msg::DebugKeyValue value(::px4::msg::DebugKeyValue::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4::msg::DebugKeyValue msg_;
};

class Init_DebugKeyValue_key
{
public:
  explicit Init_DebugKeyValue_key(::px4::msg::DebugKeyValue & msg)
  : msg_(msg)
  {}
  Init_DebugKeyValue_value key(::px4::msg::DebugKeyValue::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_DebugKeyValue_value(msg_);
  }

private:
  ::px4::msg::DebugKeyValue msg_;
};

class Init_DebugKeyValue_timestamp
{
public:
  Init_DebugKeyValue_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DebugKeyValue_key timestamp(::px4::msg::DebugKeyValue::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_DebugKeyValue_key(msg_);
  }

private:
  ::px4::msg::DebugKeyValue msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4::msg::DebugKeyValue>()
{
  return px4::msg::builder::Init_DebugKeyValue_timestamp();
}

}  // namespace px4

#endif  // PX4__MSG__DETAIL__DEBUG_KEY_VALUE__BUILDER_HPP_
