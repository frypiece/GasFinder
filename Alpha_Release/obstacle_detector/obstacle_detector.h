//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: obstacle_detector.h
//
// Code generated for Simulink model 'obstacle_detector'.
//
// Model version                  : 1.67
// Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
// C/C++ source code generated on : Thu Mar 23 22:47:39 2017
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_obstacle_detector_h_
#define RTW_HEADER_obstacle_detector_h_
#include <float.h>
#include <math.h>
#include <stddef.h>
#include <string.h>
#ifndef obstacle_detector_COMMON_INCLUDES_
# define obstacle_detector_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slros_initialize.h"
#endif                                 // obstacle_detector_COMMON_INCLUDES_

#include "obstacle_detector_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

// Block signals (auto storage)
typedef struct {
  SL_Bus_obstacle_detector_sensor_msgs_LaserScan In1;// '<S7>/In1'
  SL_Bus_obstacle_detector_sensor_msgs_LaserScan varargout_2;
  SL_Bus_obstacle_detector_geometry_msgs_PolygonStamped BusAssignment;// '<Root>/Bus Assignment' 
  SL_Bus_obstacle_detector_rosgraph_msgs_Clock In1_g;// '<S6>/In1'
} B_obstacle_detector_T;

// Block states (auto storage) for system '<Root>'
typedef struct {
  void *SourceBlock_PWORK;             // '<S4>/SourceBlock'
  void *SourceBlock_PWORK_f;           // '<S3>/SourceBlock'
  void *SinkBlock_PWORK;               // '<S2>/SinkBlock'
  uint32_T seq;                        // '<Root>/box_detection1'
  robotics_slros_internal_block_T obj; // '<S2>/SinkBlock'
  robotics_slros_internal_blo_k_T obj_n;// '<S4>/SourceBlock'
  robotics_slros_internal_blo_k_T obj_o;// '<S3>/SourceBlock'
} DW_obstacle_detector_T;

// Parameters (auto storage)
struct P_obstacle_detector_T_ {
  SL_Bus_obstacle_detector_sensor_msgs_LaserScan Out1_Y0;// Computed Parameter: Out1_Y0
                                                         //  Referenced by: '<S7>/Out1'

  SL_Bus_obstacle_detector_sensor_msgs_LaserScan Constant_Value;// Computed Parameter: Constant_Value
                                                                //  Referenced by: '<S4>/Constant'

  SL_Bus_obstacle_detector_geometry_msgs_PolygonStamped Constant_Value_l;// Computed Parameter: Constant_Value_l
                                                                      //  Referenced by: '<S1>/Constant'

  SL_Bus_obstacle_detector_rosgraph_msgs_Clock Out1_Y0_e;// Computed Parameter: Out1_Y0_e
                                                         //  Referenced by: '<S6>/Out1'

  SL_Bus_obstacle_detector_rosgraph_msgs_Clock Constant_Value_c;// Computed Parameter: Constant_Value_c
                                                                //  Referenced by: '<S3>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_obstacle_detector_T {
  const char_T *errorStatus;
};

// Block parameters (auto storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_obstacle_detector_T obstacle_detector_P;

#ifdef __cplusplus

}
#endif

// Block signals (auto storage)
extern B_obstacle_detector_T obstacle_detector_B;

// Block states (auto storage)
extern DW_obstacle_detector_T obstacle_detector_DW;

#ifdef __cplusplus

extern "C" {

#endif

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void obstacle_detector_initialize(void);
  extern void obstacle_detector_step(void);
  extern void obstacle_detector_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_obstacle_detector_T *const obstacle_detector_M;

#ifdef __cplusplus

}
#endif

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'obstacle_detector'
//  '<S1>'   : 'obstacle_detector/Blank Message'
//  '<S2>'   : 'obstacle_detector/Publish'
//  '<S3>'   : 'obstacle_detector/Subscribe'
//  '<S4>'   : 'obstacle_detector/Subscribe1'
//  '<S5>'   : 'obstacle_detector/box_detection1'
//  '<S6>'   : 'obstacle_detector/Subscribe/Enabled Subsystem'
//  '<S7>'   : 'obstacle_detector/Subscribe1/Enabled Subsystem'

#endif                                 // RTW_HEADER_obstacle_detector_h_

//
// File trailer for generated code.
//
// [EOF]
//
