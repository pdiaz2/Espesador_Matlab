/*
 * File: _coder_predictRF_Y1_api.h
 *
 * MATLAB Coder version            : 3.3
 * C/C++ source code generated on  : 30-Jul-2018 16:28:19
 */

#ifndef _CODER_PREDICTRF_Y1_API_H
#define _CODER_PREDICTRF_Y1_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_predictRF_Y1_api.h"

/* Type Definitions */
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
#ifdef __cplusplus

extern "C" {

#endif

  extern void predictRF_Y1(emxArray_real_T *X, real_T numTrees, real_T
    numPredictors, emxArray_real_T *Y);
  extern void predictRF_Y1_api(const mxArray * const prhs[3], const mxArray
    *plhs[1]);
  extern void predictRF_Y1_atexit(void);
  extern void predictRF_Y1_initialize(void);
  extern void predictRF_Y1_terminate(void);
  extern void predictRF_Y1_xil_terminate(void);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for _coder_predictRF_Y1_api.h
 *
 * [EOF]
 */
