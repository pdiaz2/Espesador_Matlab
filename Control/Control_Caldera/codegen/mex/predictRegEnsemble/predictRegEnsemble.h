/*
 * predictRegEnsemble.h
 *
 * Code generation for function 'predictRegEnsemble'
 *
 */

#ifndef PREDICTREGENSEMBLE_H
#define PREDICTREGENSEMBLE_H

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
#include "predictRegEnsemble_types.h"

/* Function Declarations */
extern real_T predictRegEnsemble(const emlrtStack *sp, const emxArray_real_T *X,
  real_T numTrees, const emxArray_char_T *experimentName);

#ifdef __WATCOMC__

#pragma aux predictRegEnsemble value [8087];

#endif
#endif

/* End of code generation (predictRegEnsemble.h) */
