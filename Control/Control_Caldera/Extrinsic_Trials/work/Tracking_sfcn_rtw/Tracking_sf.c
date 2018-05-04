/*
 * Tracking_sf.c
 *
 * Code generation for model "Tracking_sf".
 *
 * Model version              : 1.61
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Tue May 01 22:45:37 2018
 *
 * Target selection: rtwsfcn.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include <math.h>
#include "Tracking_sf.h"
#include "Tracking_sf_private.h"
#include "simstruc.h"
#include "fixedpoint.h"
#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)

extern void *Tracking_malloc(SimStruct *S);

#endif

#ifndef __RTW_UTFREE__
#if defined (MATLAB_MEX_FILE)

extern void * utMalloc(size_t);
extern void utFree(void *);

#endif
#endif                                 /* #ifndef __RTW_UTFREE__ */

#if defined(MATLAB_MEX_FILE)
#include "rt_nonfinite.c"
#endif

static const char_T *RT_MEMORY_ALLOCATION_ERROR =
  "memory allocation error in generated S-Function";

/* System initialize for root system: '<Root>' */
#define MDL_INITIALIZE_CONDITIONS

static void mdlInitializeConditions(SimStruct *S)
{
  if (ssIsFirstInitCond(S)) {
    int32_T i;

    /* SystemInitialize for MATLAB Function: '<Root>/Tracking' */
    for (i = 0; i < 6; i++) {
      ((real_T *)ssGetDWork(S, 0))[i] = 0.0;
    }

    memset(&((real_T *)ssGetDWork(S, 1))[0], 0, 36U * sizeof(real_T));

    /* End of SystemInitialize for MATLAB Function: '<Root>/Tracking' */
  } else {
    int32_T i;

    /* SystemReset for MATLAB Function: '<Root>/Tracking' */
    for (i = 0; i < 6; i++) {
      ((real_T *)ssGetDWork(S, 0))[i] = 0.0;
    }

    memset(&((real_T *)ssGetDWork(S, 1))[0], 0, 36U * sizeof(real_T));

    /* End of SystemReset for MATLAB Function: '<Root>/Tracking' */
  }
}

/* Start for root system: '<Root>' */
#define MDL_START

static void mdlStart(SimStruct *S)
{
  /* instance underlying S-Function data */
#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)
#  if defined(MATLAB_MEX_FILE)

  /* non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

#  endif

  Tracking_malloc(S);
  if (ssGetErrorStatus(S) != (NULL) ) {
    return;
  }

#endif

  {
  }
}

/* Outputs for root system: '<Root>' */
static void mdlOutputs(SimStruct *S, int_T tid)
{
  static real_T y_data[620];
  int8_T Q[36];
  real_T x_prd[6];
  real_T p_prd[36];
  real_T S_0[4];
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
  z_idx_0 = (int16_T)((const int32_T *)&ssGetCurrentInputPortDimensions(S, 0, 0))
    [0];
  z_idx_1 = (int16_T)((const int32_T *)&ssGetCurrentInputPortDimensions(S, 0, 0))
    [1];
  loop_ub = z_idx_0 * z_idx_1;
  for (r1 = 0; r1 < loop_ub; r1++) {
    y_data[r1] = 0.0;
  }

  for (k = 0; k < ((const int32_T *)&ssGetCurrentInputPortDimensions(S, 0, 0))[1];
       k++) {
    /*  Predicted state and covariance */
    for (r1 = 0; r1 < 6; r1++) {
      x_prd[r1] = 0.0;
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        a_0[r1 + 6 * loop_ub] = 0.0;
        for (r2 = 0; r2 < 6; r2++) {
          a_0[r1 + 6 * loop_ub] += (real_T)a[6 * r2 + r1] * ((real_T *)
            ssGetDWork(S, 1))[6 * loop_ub + r2];
        }

        x_prd[r1] += (real_T)a[6 * loop_ub + r1] * ((real_T *)ssGetDWork(S, 0))
          [loop_ub];
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

        S_0[r1 + (loop_ub << 1)] = (real_T)R[(loop_ub << 1) + r1] + a21;
      }

      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        B[r1 + (loop_ub << 1)] = 0.0;
        for (r2 = 0; r2 < 6; r2++) {
          B[r1 + (loop_ub << 1)] += (real_T)b_a[(r2 << 1) + r1] * p_prd[6 * r2 +
            loop_ub];
        }
      }
    }

    if (fabs(S_0[1]) > fabs(S_0[0])) {
      r1 = 1;
      r2 = 0;
    } else {
      r1 = 0;
      r2 = 1;
    }

    a21 = S_0[r2] / S_0[r1];
    a22 = S_0[2 + r2] - S_0[2 + r1] * a21;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      b_a_0[1 + (loop_ub << 1)] = (B[(loop_ub << 1) + r2] - B[(loop_ub << 1) +
        r1] * a21) / a22;
      b_a_0[loop_ub << 1] = (B[(loop_ub << 1) + r1] - b_a_0[(loop_ub << 1) + 1] *
        S_0[2 + r1]) / S_0[r1];
    }

    /*  Estimated state and covariance */
    for (r1 = 0; r1 < 2; r1++) {
      a21 = 0.0;
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        klm_gain[loop_ub + 6 * r1] = b_a_0[(loop_ub << 1) + r1];
        a21 += (real_T)b_a[(loop_ub << 1) + r1] * x_prd[loop_ub];
      }

      b_a_1[r1] = ((const real_T *)ssGetInputPortSignal(S, 0))[((const int32_T *)
        &ssGetCurrentInputPortDimensions(S, 0, 0))[0] * k + r1] - a21;
    }

    for (r1 = 0; r1 < 6; r1++) {
      ((real_T *)ssGetDWork(S, 0))[r1] = (klm_gain[r1 + 6] * b_a_1[1] +
        klm_gain[r1] * b_a_1[0]) + x_prd[r1];
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

        ((real_T *)ssGetDWork(S, 1))[r1 + 6 * loop_ub] = p_prd[6 * loop_ub + r1]
          - a21;
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
        b_a_1[r1] += (real_T)b_a[(loop_ub << 1) + r1] * ((real_T *)ssGetDWork(S,
          0))[loop_ub];
      }
    }

    for (r1 = 0; r1 < r2; r1++) {
      y_data[b_data[r1] + z_idx_0 * k] = b_a_1[r1];
    }
  }

  /* '<S1>:1:3' */
  ((int32_T *)ssGetDWork(S, 2))[0] = z_idx_0;
  ((int32_T *)ssGetDWork(S, 2))[1] = z_idx_1;
  loop_ub = z_idx_0 * z_idx_1;
  for (r1 = 0; r1 < loop_ub; r1++) {
    rtb_y[r1] = y_data[r1];
  }

  /* End of MATLAB Function: '<Root>/Tracking' */

  /* Outport: '<Root>/y' */
  ((int32_T *)&ssGetCurrentOutputPortDimensions(S, 0, 0))[0] = ((int32_T *)
    ssGetDWork(S, 2))[0];
  ((int32_T *)&ssGetCurrentOutputPortDimensions(S, 0, 0))[1] = ((int32_T *)
    ssGetDWork(S, 2))[1];
  loop_ub = ((int32_T *)ssGetDWork(S, 2))[0] * ((int32_T *)ssGetDWork(S, 2))[1];
  for (r1 = 0; r1 < loop_ub; r1++) {
    ((real_T *)ssGetOutputPortSignal(S, 0))[r1] = rtb_y[r1];
  }

  /* End of Outport: '<Root>/y' */
  UNUSED_PARAMETER(tid);
}

/* Update for root system: '<Root>' */
#define MDL_UPDATE

static void mdlUpdate(SimStruct *S, int_T tid)
{
  UNUSED_PARAMETER(tid);
}

/* Termination for root system: '<Root>' */
static void mdlTerminate(SimStruct *S)
{

#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)

  if (ssGetUserData(S) != (NULL) ) {
    rt_FREE(ssGetLocalBlockIO(S));
  }

  rt_FREE(ssGetUserData(S));

#endif

}

#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)
#  include "Tracking_mid.h"
#endif

/* Function to initialize sizes. */
static void mdlInitializeSizes(SimStruct *S)
{
  ssSetNumSampleTimes(S, 1);           /* Number of sample times */
  ssSetNumContStates(S, 0);            /* Number of continuous states */
  ssSetNumNonsampledZCs(S, 0);         /* Number of nonsampled ZCs */

  /* Number of output ports */
  if (!ssSetNumOutputPorts(S, 1))
    return;

  /* outport number: 0 */
  ssSetOutputPortDimensionsMode(S, 0, VARIABLE_DIMS_MODE);
  if (!ssSetOutputPortMatrixDimensions(S, 0, 2, 100))
    return;
  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
    ssSetOutputPortDataType(S, 0, SS_DOUBLE);
  }

  ssSetOutputPortSampleTime(S, 0, 1.0);
  ssSetOutputPortOffsetTime(S, 0, 0.0);
  ssSetOutputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);

  /* Number of input ports */
  if (!ssSetNumInputPorts(S, 1))
    return;

  /* inport number: 0 */
  {
    ssSetInputPortRequiredContiguous(S, 0, true);
    ssSetInputPortDimensionsMode(S, 0, VARIABLE_DIMS_MODE);
    if (!ssSetInputPortMatrixDimensions(S, 0, 2, 310))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 0, SS_DOUBLE);
    }

    ssSetInputPortDirectFeedThrough(S, 0, 1);
    ssSetInputPortSampleTime(S, 0, 1.0);
    ssSetInputPortOffsetTime(S, 0, 0.0);
    ssSetInputPortOverWritable(S, 0, 0);
    ssSetInputPortOptimOpts(S, 0, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  ssSetRTWGeneratedSFcn(S, 1);         /* Generated S-function */

  /* DWork */
  if (!ssSetNumDWork(S, 4)) {
    return;
  }

  /* '<Root>/Tracking': DWORK1 */
  ssSetDWorkName(S, 0, "DWORK0");
  ssSetDWorkWidth(S, 0, 6);

  /* '<Root>/Tracking': DWORK2 */
  ssSetDWorkName(S, 1, "DWORK1");
  ssSetDWorkWidth(S, 1, 36);

  /* '<Root>/Tracking': DWORK3 */
  ssSetDWorkName(S, 2, "DWORK2");
  ssSetDWorkWidth(S, 2, 2);
  ssSetDWorkDataType(S, 2, SS_INT32);

  /* '<Root>/u': DWORK1 */
  ssSetDWorkName(S, 3, "DWORK3");
  ssSetDWorkWidth(S, 3, 2);
  ssSetDWorkDataType(S, 3, SS_INT32);

  /* Tunable Parameters */
  ssSetNumSFcnParams(S, 0);

  /* Number of expected parameters */
#if defined(MATLAB_MEX_FILE)

  if (ssGetNumSFcnParams(S) == ssGetSFcnParamsCount(S)) {

#if defined(MDL_CHECK_PARAMETERS)

    mdlCheckParameters(S);

#endif                                 /* MDL_CHECK_PARAMETERS */

    if (ssGetErrorStatus(S) != (NULL) ) {
      return;
    }
  } else {
    return;                            /* Parameter mismatch will be reported by Simulink */
  }

#endif                                 /* MATLAB_MEX_FILE */

  /* Options */
  ssSetOptions(S, (SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE |
                   SS_OPTION_PORT_SAMPLE_TIMES_ASSIGNED ));

#if SS_SFCN_FOR_SIM

  {
    ssSupportsMultipleExecInstances(S, false);
    ssRegisterMsgForNotSupportingMultiExecInst(S,
      "<diag_root>\n    <diag id=\"Simulink:blocks:ImplicitIterSS_VariableDimsSigNotSupportedInside\">\n        <arguments><arg type=\"encoded\">PABfAF8AaQBpAFMAUwBfAF8APgA8AC8AXwBfAGkAaQBTAFMAXwBfAD4AAAA=</arg><arg type=\"encoded\">PABfAF8AaQB0AGUAcgBCAGwAawBfAF8APgA8AC8AXwBfAGkAdABlAHIAQgBsAGsAXwBfAD4AAAA=</arg><arg type=\"numeric\">1</arg><arg type=\"encoded\">VAByAGEAYwBrAGkAbgBnAC8AVAByAGEAYwBrAGkAbgBnAAAA</arg></arguments>    </diag>\n</diag_root>");
    ssHasStateInsideForEachSS(S, false);
  }

#endif

}

/* Function to initialize sample times. */
static void mdlInitializeSampleTimes(SimStruct *S)
{
  /* task periods */
  ssSetSampleTime(S, 0, 1.0);

  /* task offsets */
  ssSetOffsetTime(S, 0, 0.0);
}

#if defined(MATLAB_MEX_FILE)
# include "fixedpoint.c"
# include "simulink.c"
#else
# undef S_FUNCTION_NAME
# define S_FUNCTION_NAME               Tracking_sf
# include "cg_sfun.h"
#endif                                 /* defined(MATLAB_MEX_FILE) */
