// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4:msg/GpioConfig.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4/msg/detail/gpio_config__rosidl_typesupport_introspection_c.h"
#include "px4/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4/msg/detail/gpio_config__functions.h"
#include "px4/msg/detail/gpio_config__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void px4__msg__GpioConfig__rosidl_typesupport_introspection_c__GpioConfig_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4__msg__GpioConfig__init(message_memory);
}

void px4__msg__GpioConfig__rosidl_typesupport_introspection_c__GpioConfig_fini_function(void * message_memory)
{
  px4__msg__GpioConfig__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember px4__msg__GpioConfig__rosidl_typesupport_introspection_c__GpioConfig_message_member_array[5] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4__msg__GpioConfig, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "device_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4__msg__GpioConfig, device_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mask",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4__msg__GpioConfig, mask),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4__msg__GpioConfig, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "config",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4__msg__GpioConfig, config),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4__msg__GpioConfig__rosidl_typesupport_introspection_c__GpioConfig_message_members = {
  "px4__msg",  // message namespace
  "GpioConfig",  // message name
  5,  // number of fields
  sizeof(px4__msg__GpioConfig),
  px4__msg__GpioConfig__rosidl_typesupport_introspection_c__GpioConfig_message_member_array,  // message members
  px4__msg__GpioConfig__rosidl_typesupport_introspection_c__GpioConfig_init_function,  // function to initialize message memory (memory has to be allocated)
  px4__msg__GpioConfig__rosidl_typesupport_introspection_c__GpioConfig_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4__msg__GpioConfig__rosidl_typesupport_introspection_c__GpioConfig_message_type_support_handle = {
  0,
  &px4__msg__GpioConfig__rosidl_typesupport_introspection_c__GpioConfig_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4, msg, GpioConfig)() {
  if (!px4__msg__GpioConfig__rosidl_typesupport_introspection_c__GpioConfig_message_type_support_handle.typesupport_identifier) {
    px4__msg__GpioConfig__rosidl_typesupport_introspection_c__GpioConfig_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4__msg__GpioConfig__rosidl_typesupport_introspection_c__GpioConfig_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
