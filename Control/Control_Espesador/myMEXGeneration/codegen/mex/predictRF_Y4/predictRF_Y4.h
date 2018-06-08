/*
 * predictRF_Y4.h
 *
 * Code generation for function 'predictRF_Y4'
 *
 */

#ifndef PREDICTRF_Y4_H
#define PREDICTRF_Y4_H

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
#include "predictRF_Y4_types.h"

/* Function Declarations */
extern void predictRF_Y4(predictRF_Y4StackData *SD, const emlrtStack *sp, const
  emxArray_real_T *X, real_T numTrees, real_T numPredictors, emxArray_real_T *Y);

#endif

/* End of code generation (predictRF_Y4.h) */
