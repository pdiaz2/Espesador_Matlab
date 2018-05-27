/*
 * predictRF_Y2.h
 *
 * Code generation for function 'predictRF_Y2'
 *
 */

#ifndef PREDICTRF_Y2_H
#define PREDICTRF_Y2_H

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
#include "predictRF_Y2_types.h"

/* Function Declarations */
extern void predictRF_Y2(predictRF_Y2StackData *SD, const emlrtStack *sp, const
  emxArray_real_T *X, real_T numTrees, real_T numPredictors, emxArray_real_T *Y);

#endif

/* End of code generation (predictRF_Y2.h) */
