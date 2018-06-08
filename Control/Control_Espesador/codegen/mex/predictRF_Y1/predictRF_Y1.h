/*
 * predictRF_Y1.h
 *
 * Code generation for function 'predictRF_Y1'
 *
 */

#ifndef PREDICTRF_Y1_H
#define PREDICTRF_Y1_H

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
#include "predictRF_Y1_types.h"

/* Function Declarations */
extern void predictRF_Y1(predictRF_Y1StackData *SD, const emlrtStack *sp, const
  emxArray_real_T *X, real_T numTrees, real_T numPredictors, emxArray_real_T *Y);

#endif

/* End of code generation (predictRF_Y1.h) */
