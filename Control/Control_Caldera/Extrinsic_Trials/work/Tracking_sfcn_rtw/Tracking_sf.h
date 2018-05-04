/*
 * Tracking_sf.h
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

#ifndef RTW_HEADER_Tracking_sf_h_
#define RTW_HEADER_Tracking_sf_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef Tracking_sf_COMMON_INCLUDES_
# define Tracking_sf_COMMON_INCLUDES_
#include <stdlib.h>
#define S_FUNCTION_NAME                Tracking_sf
#define S_FUNCTION_LEVEL               2
#define RTW_GENERATED_S_FUNCTION
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#if !defined(MATLAB_MEX_FILE)
#include "rt_matrx.h"
#endif

#if !defined(RTW_SFUNCTION_DEFINES)
#define RTW_SFUNCTION_DEFINES

typedef struct {
  void *blockIO;
  void *defaultParam;
  void *nonContDerivSig;
} LocalS;

#define ssSetLocalBlockIO(S, io)       ((LocalS *)ssGetUserData(S))->blockIO = ((void *)(io))
#define ssGetLocalBlockIO(S)           ((LocalS *)ssGetUserData(S))->blockIO
#define ssSetLocalDefaultParam(S, paramVector) ((LocalS *)ssGetUserData(S))->defaultParam = (paramVector)
#define ssGetLocalDefaultParam(S)      ((LocalS *)ssGetUserData(S))->defaultParam
#define ssSetLocalNonContDerivSig(S, pSig) ((LocalS *)ssGetUserData(S))->nonContDerivSig = (pSig)
#define ssGetLocalNonContDerivSig(S)   ((LocalS *)ssGetUserData(S))->nonContDerivSig
#endif
#endif                                 /* Tracking_sf_COMMON_INCLUDES_ */

#include "Tracking_sf_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T *u[620];                      /* '<Root>/u' */
} ExternalUPtrs_Tracking_T;

/* External input sizes (for root inport signals with variable sizes) */
typedef struct {
  int32_T u[2];                        /* '<Root>/u' */
} ExternalUSizePtrs_Tracking_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T *y[200];                      /* '<Root>/y' */
} ExtY_Tracking_T;

/* External output sizes (for root outports fed by signals with variable sizes) */
typedef struct {
  int32_T y[2];                        /* '<Root>/y' */
} ExtYSize_Tracking_T;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('ex_kalman99/Tracking')    - opens subsystem ex_kalman99/Tracking
 * hilite_system('ex_kalman99/Tracking/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'ex_kalman99'
 * '<S1>'   : 'ex_kalman99/Tracking'
 */
#endif                                 /* RTW_HEADER_Tracking_sf_h_ */
