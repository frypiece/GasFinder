//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: center_control.cpp
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
#include "center_control.h"
#include "center_control_private.h"
#define center_control_MessageQueueLen (1)

// Block signals (auto storage)
B_center_control_T center_control_B;

// Block states (auto storage)
DW_center_control_T center_control_DW;

// Real-time model
RT_MODEL_center_control_T center_control_M_;
RT_MODEL_center_control_T *const center_control_M = &center_control_M_;

// Model step function
void center_control_step(void)
{
  SL_Bus_center_control_geometry_msgs_Twist rtb_BusAssignment;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // Start for MATLABSystem: '<S4>/SourceBlock' incorporates:
  //   MATLABSystem: '<S4>/SourceBlock'

  Sub_center_control_1.getLatestMessage(&center_control_B.varargout_2);

  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   Constant: '<S1>/Constant'
  //   MATLAB Function: '<Root>/MATLAB Function'

  // MATLAB Function 'MATLAB Function': '<S2>:1'
  // '<S2>:1:3' x = 0;
  // '<S2>:1:4' z = 0;
  rtb_BusAssignment = center_control_P.Constant_Value_l;
  rtb_BusAssignment.Linear.X = 0.0;
  rtb_BusAssignment.Angular.Z = 0.0;

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // Start for MATLABSystem: '<S3>/SinkBlock' incorporates:
  //   MATLABSystem: '<S3>/SinkBlock'

  Pub_center_control_8.publish(&rtb_BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'
}

// Model initialize function
void center_control_initialize(void)
{
  // Registration code

  // initialize error status
  rtmSetErrorStatus(center_control_M, (NULL));

  // states (dwork)
  (void) memset((void *)&center_control_DW, 0,
                sizeof(DW_center_control_T));

  {
    static const char_T tmp[19] = { '/', 'c', 'a', 't', 'v', 'e', 'h', 'i', 'c',
      'l', 'e', '/', 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    static const char_T tmp_0[11] = { '/', 'd', 'e', 't', 'e', 'c', 't', 'i',
      'o', 'n', 's' };

    char_T tmp_1[20];
    char_T tmp_2[12];
    int32_T i;

    // Start for Atomic SubSystem: '<Root>/Subscribe'
    // Start for MATLABSystem: '<S4>/SourceBlock'
    center_control_DW.obj_n.isInitialized = 0;
    center_control_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      tmp_2[i] = tmp_0[i];
    }

    tmp_2[11] = '\x00';
    Sub_center_control_1.createSubscriber(tmp_2, center_control_MessageQueueLen);

    // End of Start for MATLABSystem: '<S4>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe'

    // Start for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S3>/SinkBlock'
    center_control_DW.obj.isInitialized = 0;
    center_control_DW.obj.isInitialized = 1;
    for (i = 0; i < 19; i++) {
      tmp_1[i] = tmp[i];
    }

    tmp_1[19] = '\x00';
    Pub_center_control_8.createPublisher(tmp_1, center_control_MessageQueueLen);

    // End of Start for MATLABSystem: '<S3>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish'
  }
}

// Model terminate function
void center_control_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Start for MATLABSystem: '<S4>/SourceBlock' incorporates:
  //   Terminate for MATLABSystem: '<S4>/SourceBlock'

  if (center_control_DW.obj_n.isInitialized == 1) {
    center_control_DW.obj_n.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S4>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Start for MATLABSystem: '<S3>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S3>/SinkBlock'

  if (center_control_DW.obj.isInitialized == 1) {
    center_control_DW.obj.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S3>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'
}

//
// File trailer for generated code.
//
// [EOF]
//
