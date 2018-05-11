//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: center_control_data.cpp
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

// Block parameters (auto storage)
P_center_control_T center_control_P = {
  {
    {
      0U,                              // Seq

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // FrameId

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      },                               // FrameId_SL_Info

      {
        0,                             // Sec
        0                              // Nsec
      }                                // Stamp
    },                                 // Header

    {
      {
        {
          0.0F,                        // X
          0.0F,                        // Y
          0.0F                         // Z
        }, {
          0.0F,                        // X
          0.0F,                        // Y
          0.0F                         // Z
        }, {
          0.0F,                        // X
          0.0F,                        // Y
          0.0F                         // Z
        }, {
          0.0F,                        // X
          0.0F,                        // Y
          0.0F                         // Z
        }, {
          0.0F,                        // X
          0.0F,                        // Y
          0.0F                         // Z
        }, {
          0.0F,                        // X
          0.0F,                        // Y
          0.0F                         // Z
        }, {
          0.0F,                        // X
          0.0F,                        // Y
          0.0F                         // Z
        }, {
          0.0F,                        // X
          0.0F,                        // Y
          0.0F                         // Z
        }, {
          0.0F,                        // X
          0.0F,                        // Y
          0.0F                         // Z
        }, {
          0.0F,                        // X
          0.0F,                        // Y
          0.0F                         // Z
        }, {
          0.0F,                        // X
          0.0F,                        // Y
          0.0F                         // Z
        }, {
          0.0F,                        // X
          0.0F,                        // Y
          0.0F                         // Z
        }, {
          0.0F,                        // X
          0.0F,                        // Y
          0.0F                         // Z
        }, {
          0.0F,                        // X
          0.0F,                        // Y
          0.0F                         // Z
        }, {
          0.0F,                        // X
          0.0F,                        // Y
          0.0F                         // Z
        }, {
          0.0F,                        // X
          0.0F,                        // Y
          0.0F                         // Z
        } }
      ,                                // Points

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // Points_SL_Info
    }                                  // Polygon
  },                                   // Computed Parameter: Out1_Y0
                                       //  Referenced by: '<S5>/Out1'


  {
    {
      0U,                              // Seq

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // FrameId

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      },                               // FrameId_SL_Info

      {
        0,                             // Sec
        0                              // Nsec
      }                                // Stamp
    },                                 // Header

    {
      {
        {
          0.0F,                        // X
          0.0F,                        // Y
          0.0F                         // Z
        }, {
          0.0F,                        // X
          0.0F,                        // Y
          0.0F                         // Z
        }, {
          0.0F,                        // X
          0.0F,                        // Y
          0.0F                         // Z
        }, {
          0.0F,                        // X
          0.0F,                        // Y
          0.0F                         // Z
        }, {
          0.0F,                        // X
          0.0F,                        // Y
          0.0F                         // Z
        }, {
          0.0F,                        // X
          0.0F,                        // Y
          0.0F                         // Z
        }, {
          0.0F,                        // X
          0.0F,                        // Y
          0.0F                         // Z
        }, {
          0.0F,                        // X
          0.0F,                        // Y
          0.0F                         // Z
        }, {
          0.0F,                        // X
          0.0F,                        // Y
          0.0F                         // Z
        }, {
          0.0F,                        // X
          0.0F,                        // Y
          0.0F                         // Z
        }, {
          0.0F,                        // X
          0.0F,                        // Y
          0.0F                         // Z
        }, {
          0.0F,                        // X
          0.0F,                        // Y
          0.0F                         // Z
        }, {
          0.0F,                        // X
          0.0F,                        // Y
          0.0F                         // Z
        }, {
          0.0F,                        // X
          0.0F,                        // Y
          0.0F                         // Z
        }, {
          0.0F,                        // X
          0.0F,                        // Y
          0.0F                         // Z
        }, {
          0.0F,                        // X
          0.0F,                        // Y
          0.0F                         // Z
        } }
      ,                                // Points

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // Points_SL_Info
    }                                  // Polygon
  },                                   // Computed Parameter: Constant_Value
                                       //  Referenced by: '<S4>/Constant'


  {
    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // Linear

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    }                                  // Angular
  }                                    // Computed Parameter: Constant_Value_l
                                       //  Referenced by: '<S1>/Constant'

};

//
// File trailer for generated code.
//
// [EOF]
//
