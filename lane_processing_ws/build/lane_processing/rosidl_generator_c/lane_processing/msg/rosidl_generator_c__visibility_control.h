// generated from rosidl_generator_c/resource/rosidl_generator_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef LANE_PROCESSING__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
#define LANE_PROCESSING__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_C_EXPORT_lane_processing __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_C_IMPORT_lane_processing __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_C_EXPORT_lane_processing __declspec(dllexport)
    #define ROSIDL_GENERATOR_C_IMPORT_lane_processing __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_C_BUILDING_DLL_lane_processing
    #define ROSIDL_GENERATOR_C_PUBLIC_lane_processing ROSIDL_GENERATOR_C_EXPORT_lane_processing
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_lane_processing ROSIDL_GENERATOR_C_IMPORT_lane_processing
  #endif
#else
  #define ROSIDL_GENERATOR_C_EXPORT_lane_processing __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_C_IMPORT_lane_processing
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_C_PUBLIC_lane_processing __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_lane_processing
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // LANE_PROCESSING__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
