/*
 * Tracking.c
 *
 * Code generation for model "Tracking".
 *
 * Model version              : 1.61
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Tue May 01 22:38:11 2018
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Tracking.h"
#include "Tracking_private.h"

/* Block signals (auto storage) */
B_Tracking_T Tracking_B;

/* Block states (auto storage) */
DW_Tracking_T Tracking_DW;

/* External inputs (root inport signals with auto storage) */
ExtU_Tracking_T Tracking_U;

/* External input sizes (root inport signals with variable sizes) */
ExtUSize_Tracking_T Tracking_USize;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Tracking_T Tracking_Y;

/* External output sizes (root outports fed by signals with variable sizes) */
ExtYSize_Tracking_T Tracking_YSize;

/* Real-time model */
RT_MODEL_Tracking_T Tracking_M_;
RT_MODEL_Tracking_T *const Tracking_M = &Tracking_M_;

/* Model output function */
static void Tracking_output(void)
{
  int8_T Q[36];
  real_T x_prd[6];
  real_T p_prd[36];
  real_T S[4];
  real_T B[12];
  real_T klm_gain[12];
  int8_T b_data[2];
  int32_T k;
  int32_T r1;
  int32_T r2;
  real_T a21;
  real_T a22;
  static const int8_T a[36] = { 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0,
    0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1 };

  static const int16_T R[4] = { 1000, 0, 0, 1000 };

  static const int8_T b_a[12] = { 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 };

  static const int8_T b_b[36] = { 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0,
    1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1 };

  static const int8_T c_b[12] = { 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0 };

  real_T rtb_y[200];
  int32_T loop_ub;
  real_T a_0[36];
  real_T b_a_0[12];
  int8_T tmp;
  real_T b_a_1[2];
  int16_T z_idx_0;
  int16_T z_idx_1;

  /* MATLAB Function: '<Root>/Tracking' incorporates:
   *  Inport: '<Root>/u'
   */
  /* MATLAB Function 'Tracking': '<S1>:1' */
  /*  */
  /*    --------------------------------------------------------------------- */
  /*  */
  /*    Copyright 2010 The MathWorks, Inc. */
  /*  */
  /*    --------------------------------------------------------------------- */
  /*  */
  /*  Initialize state transition matrix */
  /*  Measurement matrix */
  for (r1 = 0; r1 < 36; r1++) {
    Q[r1] = 0;
  }

  for (k = 0; k < 6; k++) {
    Q[k + 6 * k] = 1;
  }

  /*  Initial conditions */
  /*  Pre-allocate output signal: */
  z_idx_0 = (int16_T)Tracking_USize.u[0];
  z_idx_1 = (int16_T)Tracking_USize.u[1];
  loop_ub = z_idx_0 * z_idx_1;
  for (r1 = 0; r1 < loop_ub; r1++) {
    Tracking_B.y_data[r1] = 0.0;
  }

  for (k = 0; k < Tracking_USize.u[1]; k++) {
    /*  Predicted state and covariance */
    for (r1 = 0; r1 < 6; r1++) {
      x_prd[r1] = 0.0;
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        a_0[r1 + 6 * loop_ub] = 0.0;
        for (r2 = 0; r2 < 6; r2++) {
          a_0[r1 + 6 * loop_ub] += (real_T)a[6 * r2 + r1] * Tracking_DW.p_est[6 *
            loop_ub + r2];
        }

        x_prd[r1] += (real_T)a[6 * loop_ub + r1] * Tracking_DW.x_est[loop_ub];
      }

      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        a21 = 0.0;
        for (r2 = 0; r2 < 6; r2++) {
          a21 += a_0[6 * r2 + r1] * (real_T)b_b[6 * loop_ub + r2];
        }

        p_prd[r1 + 6 * loop_ub] = (real_T)Q[6 * loop_ub + r1] + a21;
      }
    }

    /*  Estimation */
    for (r1 = 0; r1 < 2; r1++) {
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        b_a_0[r1 + (loop_ub << 1)] = 0.0;
        for (r2 = 0; r2 < 6; r2++) {
          b_a_0[r1 + (loop_ub << 1)] += (real_T)b_a[(r2 << 1) + r1] * p_prd[6 *
            r2 + loop_ub];
        }
      }

      for (loop_ub = 0; loop_ub < 2; loop_ub++) {
        a21 = 0.0;
        for (r2 = 0; r2 < 6; r2++) {
          a21 += b_a_0[(r2 << 1) + r1] * (real_T)c_b[6 * loop_ub + r2];
        }

        S[r1 + (loop_ub << 1)] = (real_T)R[(loop_ub << 1) + r1] + a21;
      }

      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        B[r1 + (loop_ub << 1)] = 0.0;
        for (r2 = 0; r2 < 6; r2++) {
          B[r1 + (loop_ub << 1)] += (real_T)b_a[(r2 << 1) + r1] * p_prd[6 * r2 +
            loop_ub];
        }
      }
    }

    if (fabs(S[1]) > fabs(S[0])) {
      r1 = 1;
      r2 = 0;
    } else {
      r1 = 0;
      r2 = 1;
    }

    a21 = S[r2] / S[r1];
    a22 = S[2 + r2] - S[2 + r1] * a21;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      b_a_0[1 + (loop_ub << 1)] = (B[(loop_ub << 1) + r2] - B[(loop_ub << 1) +
        r1] * a21) / a22;
      b_a_0[loop_ub << 1] = (B[(loop_ub << 1) + r1] - b_a_0[(loop_ub << 1) + 1] *
        S[2 + r1]) / S[r1];
    }

    /*  Estimated state and covariance */
    for (r1 = 0; r1 < 2; r1++) {
      a21 = 0.0;
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        klm_gain[loop_ub + 6 * r1] = b_a_0[(loop_ub << 1) + r1];
        a21 += (real_T)b_a[(loop_ub << 1) + r1] * x_prd[loop_ub];
      }

      b_a_1[r1] = Tracking_U.u[Tracking_USize.u[0] * k + r1] - a21;
    }

    for (r1 = 0; r1 < 6; r1++) {
      Tracking_DW.x_est[r1] = (klm_gain[r1 + 6] * b_a_1[1] + klm_gain[r1] *
        b_a_1[0]) + x_prd[r1];
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        a_0[r1 + 6 * loop_ub] = 0.0;
        a_0[r1 + 6 * loop_ub] += (real_T)b_a[loop_ub << 1] * klm_gain[r1];
        a_0[r1 + 6 * loop_ub] += (real_T)b_a[(loop_ub << 1) + 1] * klm_gain[r1 +
          6];
      }

      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        a21 = 0.0;
        for (r2 = 0; r2 < 6; r2++) {
          a21 += a_0[6 * r2 + r1] * p_prd[6 * loop_ub + r2];
        }

        Tracking_DW.p_est[r1 + 6 * loop_ub] = p_prd[6 * loop_ub + r1] - a21;
      }
    }

    /*  Compute the estimated measurements */
    tmp = (int8_T)((int8_T)z_idx_0 - 1);
    r2 = tmp + 1;
    loop_ub = tmp;
    for (r1 = 0; r1 <= loop_ub; r1++) {
      b_data[r1] = (int8_T)r1;
    }

    for (r1 = 0; r1 < 2; r1++) {
      b_a_1[r1] = 0.0;
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        b_a_1[r1] += (real_T)b_a[(loop_ub << 1) + r1] *
          Tracking_DW.x_est[loop_ub];
      }
    }

    for (r1 = 0; r1 < r2; r1++) {
      Tracking_B.y_data[b_data[r1] + z_idx_0 * k] = b_a_1[r1];
    }
  }

  /* '<S1>:1:3' */
  Tracking_DW.SFunction_DIMS2[0] = z_idx_0;
  Tracking_DW.SFunction_DIMS2[1] = z_idx_1;
  loop_ub = z_idx_0 * z_idx_1;
  for (r1 = 0; r1 < loop_ub; r1++) {
    rtb_y[r1] = Tracking_B.y_data[r1];
  }

  /* End of MATLAB Function: '<Root>/Tracking' */

  /* Outport: '<Root>/y' */
  Tracking_YSize.y[0] = Tracking_DW.SFunction_DIMS2[0];
  Tracking_YSize.y[1] = Tracking_DW.SFunction_DIMS2[1];
  loop_ub = Tracking_DW.SFunction_DIMS2[0] * Tracking_DW.SFunction_DIMS2[1];
  for (r1 = 0; r1 < loop_ub; r1++) {
    Tracking_Y.y[r1] = rtb_y[r1];
  }

  /* End of Outport: '<Root>/y' */
}

/* Model update function */
static void Tracking_update(void)
{
  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Tracking_M->Timing.clockTick0)) {
    ++Tracking_M->Timing.clockTickH0;
  }

  Tracking_M->Timing.t[0] = Tracking_M->Timing.clockTick0 *
    Tracking_M->Timing.stepSize0 + Tracking_M->Timing.clockTickH0 *
    Tracking_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void Tracking_initialize(void)
{
  {
    int32_T i;

    /* SystemInitialize for MATLAB Function: '<Root>/Tracking' */
    for (i = 0; i < 6; i++) {
      Tracking_DW.x_est[i] = 0.0;
    }

    memset(&Tracking_DW.p_est[0], 0, 36U * sizeof(real_T));

    /* End of SystemInitialize for MATLAB Function: '<Root>/Tracking' */
  }
}

/* Model terminate function */
static void Tracking_terminate(void)
{
  /* (no terminate code required) */
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  Tracking_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  Tracking_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  Tracking_initialize();
}

void MdlTerminate(void)
{
  Tracking_terminate();
}

/* Registration function */
RT_MODEL_Tracking_T *Tracking(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Tracking_M, 0,
                sizeof(RT_MODEL_Tracking_T));

  /* Initialize timing info */
  {
    int_T *mdlTsMap = Tracking_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    Tracking_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    Tracking_M->Timing.sampleTimes = (&Tracking_M->Timing.sampleTimesArray[0]);
    Tracking_M->Timing.offsetTimes = (&Tracking_M->Timing.offsetTimesArray[0]);

    /* task periods */
    Tracking_M->Timing.sampleTimes[0] = (1.0);

    /* task offsets */
    Tracking_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(Tracking_M, &Tracking_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = Tracking_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    Tracking_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(Tracking_M, 10.0);
  Tracking_M->Timing.stepSize0 = 1.0;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    Tracking_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(Tracking_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(Tracking_M->rtwLogInfo, (NULL));
    rtliSetLogT(Tracking_M->rtwLogInfo, "tout");
    rtliSetLogX(Tracking_M->rtwLogInfo, "");
    rtliSetLogXFinal(Tracking_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(Tracking_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(Tracking_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(Tracking_M->rtwLogInfo, 1000);
    rtliSetLogDecimation(Tracking_M->rtwLogInfo, 1);

    /*
     * Set pointers to the data and signal info for each output
     */
    {
      static void * rt_LoggedOutputSignalPtrs[] = {
        &Tracking_Y.y[0]
      };

      rtliSetLogYSignalPtrs(Tracking_M->rtwLogInfo, ((LogSignalPtrsType)
        rt_LoggedOutputSignalPtrs));
    }

    {
      static int_T rt_LoggedOutputWidths[] = {
        200
      };

      static int_T rt_LoggedOutputNumDimensions[] = {
        2
      };

      static int_T rt_LoggedOutputDimensions[] = {
        2, 100
      };

      static boolean_T rt_LoggedOutputIsVarDims[] = {
        1
      };

      static void* rt_LoggedCurrentSignalDimensions[] = {
        (NULL), (NULL)
      };

      static int_T rt_LoggedCurrentSignalDimensionsSize[] = {
        4, 4
      };

      static BuiltInDTypeId rt_LoggedOutputDataTypeIds[] = {
        SS_DOUBLE
      };

      static int_T rt_LoggedOutputComplexSignals[] = {
        0
      };

      static const char_T *rt_LoggedOutputLabels[] = {
        "y" };

      static const char_T *rt_LoggedOutputBlockNames[] = {
        "Tracking/y" };

      static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert[] = {
        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 }
      };

      static RTWLogSignalInfo rt_LoggedOutputSignalInfo[] = {
        {
          1,
          rt_LoggedOutputWidths,
          rt_LoggedOutputNumDimensions,
          rt_LoggedOutputDimensions,
          rt_LoggedOutputIsVarDims,
          rt_LoggedCurrentSignalDimensions,
          rt_LoggedCurrentSignalDimensionsSize,
          rt_LoggedOutputDataTypeIds,
          rt_LoggedOutputComplexSignals,
          (NULL),

          { rt_LoggedOutputLabels },
          (NULL),
          (NULL),
          (NULL),

          { rt_LoggedOutputBlockNames },

          { (NULL) },
          (NULL),
          rt_RTWLogDataTypeConvert
        }
      };

      rtliSetLogYSignalInfo(Tracking_M->rtwLogInfo, rt_LoggedOutputSignalInfo);

      /* set currSigDims field */
      rt_LoggedCurrentSignalDimensions[0] = &Tracking_YSize.y[0];
      rt_LoggedCurrentSignalDimensions[1] = &Tracking_YSize.y[1];
    }

    rtliSetLogY(Tracking_M->rtwLogInfo, "yout");
  }

  Tracking_M->solverInfoPtr = (&Tracking_M->solverInfo);
  Tracking_M->Timing.stepSize = (1.0);
  rtsiSetFixedStepSize(&Tracking_M->solverInfo, 1.0);
  rtsiSetSolverMode(&Tracking_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  Tracking_M->blockIO = ((void *) &Tracking_B);

  /* states (dwork) */
  Tracking_M->dwork = ((void *) &Tracking_DW);
  (void) memset((void *)&Tracking_DW, 0,
                sizeof(DW_Tracking_T));

  /* external inputs */
  Tracking_M->inputs = (((void*)&Tracking_U));
  (void)memset((void *)&Tracking_U, 0, sizeof(ExtU_Tracking_T));

  /* external input sizes */
  Tracking_USize.u[0] = 0;
  Tracking_USize.u[1] = 0;

  /* external outputs */
  Tracking_M->outputs = (&Tracking_Y);
  (void) memset(&Tracking_Y.y[0], 0,
                200U*sizeof(real_T));

  /* external output sizes */
  Tracking_YSize.y[0] = 0;
  Tracking_YSize.y[1] = 0;

  /* Initialize Sizes */
  Tracking_M->Sizes.numContStates = (0);/* Number of continuous states */
  Tracking_M->Sizes.numY = (200);      /* Number of model outputs */
  Tracking_M->Sizes.numU = (620);      /* Number of model inputs */
  Tracking_M->Sizes.sysDirFeedThru = (1);/* The model is direct feedthrough */
  Tracking_M->Sizes.numSampTimes = (1);/* Number of sample times */
  Tracking_M->Sizes.numBlocks = (3);   /* Number of blocks */
  Tracking_M->Sizes.numBlockIO = (0);  /* Number of block outputs */
  return Tracking_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
