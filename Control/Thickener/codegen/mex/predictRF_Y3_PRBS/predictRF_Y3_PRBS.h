/*
 * predictRF_Y3_PRBS.h
 *
 * Code generation for function 'predictRF_Y3_PRBS'
 *
 */

#ifndef PREDICTRF_Y3_PRBS_H
#define PREDICTRF_Y3_PRBS_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "predictRF_Y3_PRBS_types.h"

/* Function Declarations */
extern void predictRF_Y3_PRBS(predictRF_Y3_PRBSStackData *SD, const emlrtStack
  *sp, const emxArray_real_T *X, real_T numTrees, real_T numPredictors,
  emxArray_real_T *Y);

#endif

/* End of code generation (predictRF_Y3_PRBS.h) */