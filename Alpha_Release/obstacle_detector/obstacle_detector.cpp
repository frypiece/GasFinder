//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: obstacle_detector.cpp
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
#include "obstacle_detector.h"
#include "obstacle_detector_private.h"
#define obstacle_detect_MessageQueueLen (1)

// Block signals (auto storage)
B_obstacle_detector_T obstacle_detector_B;

// Block states (auto storage)
DW_obstacle_detector_T obstacle_detector_DW;

// Real-time model
RT_MODEL_obstacle_detector_T obstacle_detector_M_;
RT_MODEL_obstacle_detector_T *const obstacle_detector_M = &obstacle_detector_M_;
real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

real_T rt_remd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T u1_0;
  if (!((!rtIsNaN(u0)) && (!rtIsInf(u0)) && ((!rtIsNaN(u1)) && (!rtIsInf(u1)))))
  {
    y = (rtNaN);
  } else {
    if (u1 < 0.0) {
      u1_0 = ceil(u1);
    } else {
      u1_0 = floor(u1);
    }

    if ((u1 != 0.0) && (u1 != u1_0)) {
      u1_0 = u0 / u1;
      if (fabs(u1_0 - rt_roundd_snf(u1_0)) <= DBL_EPSILON * fabs(u1_0)) {
        y = 0.0;
      } else {
        y = fmod(u0, u1);
      }
    } else {
      y = fmod(u0, u1);
    }
  }

  return y;
}

// Model step function
void obstacle_detector_step(void)
{
  real32_T x;
  real32_T y;
  int32_T idx;
  int8_T n;
  real_T c_x;
  static const uint8_T b[15] = { 99U, 97U, 116U, 118U, 101U, 104U, 105U, 99U,
    108U, 101U, 47U, 111U, 100U, 111U, 109U };

  SL_Bus_obstacle_detector_rosgraph_msgs_Clock varargout_2;
  boolean_T varargout_1;
  uint32_T qY;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // Start for MATLABSystem: '<S3>/SourceBlock' incorporates:
  //   Inport: '<S6>/In1'
  //   MATLABSystem: '<S3>/SourceBlock'

  varargout_1 = Sub_obstacle_detector_66.getLatestMessage(&varargout_2);

  // Outputs for Enabled SubSystem: '<S3>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S6>/Enable'

  if (varargout_1) {
    obstacle_detector_B.In1_g = varargout_2;
  }

  // End of Start for MATLABSystem: '<S3>/SourceBlock'
  // End of Outputs for SubSystem: '<S3>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   Constant: '<S1>/Constant'

  obstacle_detector_B.BusAssignment = obstacle_detector_P.Constant_Value_l;
  obstacle_detector_B.BusAssignment.Header.Stamp =
    obstacle_detector_B.In1_g.Clock_;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe1'
  // Start for MATLABSystem: '<S4>/SourceBlock' incorporates:
  //   Inport: '<S7>/In1'
  //   MATLABSystem: '<S4>/SourceBlock'

  varargout_1 = Sub_obstacle_detector_63.getLatestMessage
    (&obstacle_detector_B.varargout_2);

  // Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S7>/Enable'

  if (varargout_1) {
    obstacle_detector_B.In1 = obstacle_detector_B.varargout_2;
  }

  // End of Start for MATLABSystem: '<S4>/SourceBlock'
  // End of Outputs for SubSystem: '<S4>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe1'

  // MATLAB Function: '<Root>/box_detection1'
  //  the sequence of the message must increment each time we publish, so we
  //  need it to be persistent across instantiations
  // MATLAB Function 'box_detection1': '<S5>:1'
  //  if this is the first time our model is run, then 'seq' will not exist.
  //  Then 'isempty(seq)' will be true, which allows us to intialize it to 0
  // '<S5>:1:9' if isempty(seq)
  //  increment the sequence number
  // '<S5>:1:14' seq = seq+1;
  qY = obstacle_detector_DW.seq + /*MW:OvSatOk*/ 1U;
  if (qY < obstacle_detector_DW.seq) {
    qY = MAX_uint32_T;
  }

  obstacle_detector_DW.seq = qY;

  //  set our output to be a copy of the input (blankMsg)
  // '<S5>:1:16' outputMsg = blankMsg;
  //  by definition in this block, we are making a square.
  //  IF YOU USE THIS model as inspiration for an output detection that is a
  //  pentagon, then you would set the length to be 5, for example.
  // '<S5>:1:21' outputMsg.Polygon.Points_SL_Info.CurrentLength = uint32(4);
  obstacle_detector_B.BusAssignment.Polygon.Points_SL_Info.CurrentLength = 4U;

  //  set the frame to be relative to our base of 0. If you want to use data
  //  coming from another detection, then you can set the /detections to be in
  //  the frame of that specific sensor
  // '<S5>:1:25' str = 'catvehicle/odom';
  //  initialize the header and set its values
  // '<S5>:1:27' strLength = length(str);
  // '<S5>:1:28' outputMsg.Header.Seq = seq;
  obstacle_detector_B.BusAssignment.Header.Seq = obstacle_detector_DW.seq;

  // '<S5>:1:29' outputMsg.Header.FrameId(1:strLength) = str;
  for (idx = 0; idx < 15; idx++) {
    obstacle_detector_B.BusAssignment.Header.FrameId[idx] = b[idx];
  }

  // '<S5>:1:30' outputMsg.Header.FrameId_SL_Info.CurrentLength = uint32(strLength); 
  obstacle_detector_B.BusAssignment.Header.FrameId_SL_Info.CurrentLength = 15U;

  // '<S5>:1:32' for idx=1:180
  for (idx = 0; idx < 180; idx++) {
    // '<S5>:1:33' if(ranges(idx)<80)
    if (obstacle_detector_B.In1.Ranges[idx] < 80.0F) {
      //  these points in (x,y,z) are either taken from the inputs, or hardcoded 
      // '<S5>:1:35' x = single(ranges(idx)*cosd(idx-90));
      c_x = rt_remd_snf((1.0 + (real_T)idx) - 90.0, 360.0);
      if (fabs(c_x) <= 45.0) {
        c_x *= 0.017453292519943295;
        n = 0;
      } else if (c_x > 0.0) {
        c_x = (c_x - 90.0) * 0.017453292519943295;
        n = 1;
      } else {
        c_x = (c_x + 90.0) * 0.017453292519943295;
        n = -1;
      }

      switch (n) {
       case 0:
        c_x = cos(c_x);
        break;

       case 1:
        c_x = -sin(c_x);
        break;

       case -1:
        c_x = sin(c_x);
        break;

       default:
        c_x = -cos(c_x);
        break;
      }

      x = obstacle_detector_B.In1.Ranges[idx] * (real32_T)c_x;

      // '<S5>:1:36' y = single(ranges(idx)*sind(idx-90));
      c_x = rt_remd_snf((1.0 + (real_T)idx) - 90.0, 360.0);
      if (fabs(c_x) <= 45.0) {
        c_x *= 0.017453292519943295;
        n = 0;
      } else if (c_x > 0.0) {
        c_x = (c_x - 90.0) * 0.017453292519943295;
        n = 1;
      } else {
        c_x = (c_x + 90.0) * 0.017453292519943295;
        n = -1;
      }

      switch (n) {
       case 0:
        c_x = sin(c_x);
        break;

       case 1:
        c_x = cos(c_x);
        break;

       case -1:
        c_x = -cos(c_x);
        break;

       default:
        c_x = -sin(c_x);
        break;
      }

      y = obstacle_detector_B.In1.Ranges[idx] * (real32_T)c_x;

      // '<S5>:1:37' z = single(0);
      //  populate point 1
      // '<S5>:1:39' outputMsg.Polygon.Points(1).X = floor(x);
      obstacle_detector_B.BusAssignment.Polygon.Points[0].X = (real32_T)floor
        ((real_T)x);

      // '<S5>:1:40' outputMsg.Polygon.Points(1).Y = floor(y);
      obstacle_detector_B.BusAssignment.Polygon.Points[0].Y = (real32_T)floor
        ((real_T)y);

      // '<S5>:1:41' outputMsg.Polygon.Points(1).Z = z;
      obstacle_detector_B.BusAssignment.Polygon.Points[0].Z = 0.0F;

      //  populate point 2
      // '<S5>:1:44' outputMsg.Polygon.Points(2).X = floor(x);
      obstacle_detector_B.BusAssignment.Polygon.Points[1].X = (real32_T)floor
        ((real_T)x);

      // '<S5>:1:45' outputMsg.Polygon.Points(2).Y = ceil(y);
      obstacle_detector_B.BusAssignment.Polygon.Points[1].Y = (real32_T)ceil
        ((real_T)y);

      // '<S5>:1:46' outputMsg.Polygon.Points(2).Z = z;
      obstacle_detector_B.BusAssignment.Polygon.Points[1].Z = 0.0F;

      //  populate point 3
      // '<S5>:1:49' outputMsg.Polygon.Points(3).X = ceil(x);
      obstacle_detector_B.BusAssignment.Polygon.Points[2].X = (real32_T)ceil
        ((real_T)x);

      // '<S5>:1:50' outputMsg.Polygon.Points(3).Y = ceil(y);
      obstacle_detector_B.BusAssignment.Polygon.Points[2].Y = (real32_T)ceil
        ((real_T)y);

      // '<S5>:1:51' outputMsg.Polygon.Points(3).Z = z;
      obstacle_detector_B.BusAssignment.Polygon.Points[2].Z = 0.0F;

      //  populate point 4
      // '<S5>:1:54' outputMsg.Polygon.Points(4).X = ceil(x);
      obstacle_detector_B.BusAssignment.Polygon.Points[3].X = (real32_T)ceil
        ((real_T)x);

      // '<S5>:1:55' outputMsg.Polygon.Points(4).Y = floor(y);
      obstacle_detector_B.BusAssignment.Polygon.Points[3].Y = (real32_T)floor
        ((real_T)y);

      // '<S5>:1:56' outputMsg.Polygon.Points(4).Z = z;
      obstacle_detector_B.BusAssignment.Polygon.Points[3].Z = 0.0F;
    }
  }

  // End of MATLAB Function: '<Root>/box_detection1'

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // Start for MATLABSystem: '<S2>/SinkBlock' incorporates:
  //   MATLABSystem: '<S2>/SinkBlock'

  //  note that the polygon type "closes" between the last and first points
  Pub_obstacle_detector_6.publish(&obstacle_detector_B.BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'
}

// Model initialize function
void obstacle_detector_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // initialize error status
  rtmSetErrorStatus(obstacle_detector_M, (NULL));

  // block I/O
  (void) memset(((void *) &obstacle_detector_B), 0,
                sizeof(B_obstacle_detector_T));

  // states (dwork)
  (void) memset((void *)&obstacle_detector_DW, 0,
                sizeof(DW_obstacle_detector_T));

  {
    static const char_T tmp[11] = { '/', 'd', 'e', 't', 'e', 'c', 't', 'i', 'o',
      'n', 's' };

    static const char_T tmp_0[30] = { '/', 'c', 'a', 't', 'v', 'e', 'h', 'i',
      'c', 'l', 'e', '/', 'f', 'r', 'o', 'n', 't', '_', 'l', 'a', 's', 'e', 'r',
      '_', 'p', 'o', 'i', 'n', 't', 's' };

    static const char_T tmp_1[6] = { '/', 'c', 'l', 'o', 'c', 'k' };

    char_T tmp_2[12];
    char_T tmp_3[31];
    char_T tmp_4[7];
    int32_T i;

    // Start for Atomic SubSystem: '<Root>/Subscribe'
    // Start for MATLABSystem: '<S3>/SourceBlock'
    obstacle_detector_DW.obj_o.isInitialized = 0;
    obstacle_detector_DW.obj_o.isInitialized = 1;
    for (i = 0; i < 6; i++) {
      tmp_4[i] = tmp_1[i];
    }

    tmp_4[6] = '\x00';
    Sub_obstacle_detector_66.createSubscriber(tmp_4,
      obstacle_detect_MessageQueueLen);

    // End of Start for MATLABSystem: '<S3>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe'

    // Start for Atomic SubSystem: '<Root>/Subscribe1'
    // Start for MATLABSystem: '<S4>/SourceBlock'
    obstacle_detector_DW.obj_n.isInitialized = 0;
    obstacle_detector_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 30; i++) {
      tmp_3[i] = tmp_0[i];
    }

    tmp_3[30] = '\x00';
    Sub_obstacle_detector_63.createSubscriber(tmp_3,
      obstacle_detect_MessageQueueLen);

    // End of Start for MATLABSystem: '<S4>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe1'

    // Start for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S2>/SinkBlock'
    obstacle_detector_DW.obj.isInitialized = 0;
    obstacle_detector_DW.obj.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      tmp_2[i] = tmp[i];
    }

    tmp_2[11] = '\x00';
    Pub_obstacle_detector_6.createPublisher(tmp_2,
      obstacle_detect_MessageQueueLen);

    // End of Start for MATLABSystem: '<S2>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S3>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S6>/Out1'
    obstacle_detector_B.In1_g = obstacle_detector_P.Out1_Y0_e;

    // End of SystemInitialize for SubSystem: '<S3>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S4>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S7>/Out1'
    obstacle_detector_B.In1 = obstacle_detector_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S4>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe1'

    // SystemInitialize for MATLAB Function: '<Root>/box_detection1'
    // '<S5>:1:10' seq=uint32(0);
    obstacle_detector_DW.seq = 0U;
  }
}

// Model terminate function
void obstacle_detector_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Start for MATLABSystem: '<S3>/SourceBlock' incorporates:
  //   Terminate for MATLABSystem: '<S3>/SourceBlock'

  if (obstacle_detector_DW.obj_o.isInitialized == 1) {
    obstacle_detector_DW.obj_o.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S3>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe1'
  // Start for MATLABSystem: '<S4>/SourceBlock' incorporates:
  //   Terminate for MATLABSystem: '<S4>/SourceBlock'

  if (obstacle_detector_DW.obj_n.isInitialized == 1) {
    obstacle_detector_DW.obj_n.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S4>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe1'

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Start for MATLABSystem: '<S2>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S2>/SinkBlock'

  if (obstacle_detector_DW.obj.isInitialized == 1) {
    obstacle_detector_DW.obj.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S2>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'
}

//
// File trailer for generated code.
//
// [EOF]
//
