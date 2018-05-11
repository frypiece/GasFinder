//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: center_control.h
//
// Code generated for Simulink model 'center_control'.
//
// Model version                  : 1.5
// Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
// C/C++ source code generated on : Thu Mar 23 21:42:02 2017
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_center_control_h_
#define RTW_HEADER_center_control_h_
#include <stddef.h>
#include <string.h>
#ifndef center_control_COMMON_INCLUDES_
# define center_control_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slros_initialize.h"
#endif                                 // center_control_COMMON_INCLUDES_

#include "center_control_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

// Block signals (auto storage)
typedef struct {
  SL_Bus_center_control_geometry_msgs_PolygonStamped varargout_2;
} B_center_control_T;

// Block states (auto storage) for system '<Root>'
typedef struct {
  void *SourceBlock_PWORK;             // '<S4>/SourceBlock'
  void *SinkBlock_PWORK;               // '<S3>/SinkBlock'
  robotics_slros_internal_block_T obj; // '<S3>/SinkBlock'
  robotics_slros_internal_blo_l_T obj_n;// '<S4>/SourceBlock'
} DW_center_control_T;

// Parameters (auto storage)
struct P_center_control_T_ {
  SL_Bus_center_control_geometry_msgs_PolygonStamped Out1_Y0;// Computed Parameter: Out1_Y0
                                                             //  Referenced by: '<S5>/Out1'

  SL_Bus_center_control_geometry_msgs_PolygonStamped Constant_Value;// Computed Parameter: Constant_Value
                                                                    //  Referenced by: '<S4>/Constant'

  SL_Bus_center_control_geometry_msgs_Twist Constant_Value_l;// Computed Parameter: Constant_Value_l
                                                             //  Referenced by: '<S1>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_center_control_T {
  const char_T *errorStatus;
};

// Block parameters (auto storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_center_control_T center_control_P;

#ifdef __cplusplus

}
#endif

// Block signals (auto storage)
extern B_center_control_T center_control_B;

// Block states (auto storage)
extern DW_center_control_T center_control_DW;

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
  extern void center_control_initialize(void);
  extern void center_control_step(void);
  extern void center_control_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_center_control_T *const center_control_M;

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
//  '<Root>' : 'center_control'
//  '<S1>'   : 'center_control/Blank Message'
//  '<S2>'   : 'center_control/MATLAB Function'
//  '<S3>'   : 'center_control/Publish'
//  '<S4>'   : 'center_control/Subscribe'
//  '<S5>'   : 'center_control/Subscribe/Enabled Subsystem'

#endif                                 // RTW_HEADER_center_control_h_

//
// File trailer for generated code.
//
// [EOF]
//
