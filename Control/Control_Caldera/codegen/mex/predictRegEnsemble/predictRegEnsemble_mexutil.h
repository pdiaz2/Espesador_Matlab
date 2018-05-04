/*
 * predictRegEnsemble_mexutil.h
 *
 * Code generation for function 'predictRegEnsemble_mexutil'
 *
 */

#ifndef PREDICTREGENSEMBLE_MEXUTIL_H
#define PREDICTREGENSEMBLE_MEXUTIL_H

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
extern real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_predict,
  const char_T *identifier);

#ifdef __WATCOMC__

#pragma aux c_emlrt_marshallIn value [8087];

#endif

extern real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);

#ifdef __WATCOMC__

#pragma aux d_emlrt_marshallIn value [8087];

#endif

extern const mxArray *emlrt_marshallOut(const real_T u);
extern real_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

#ifdef __WATCOMC__

#pragma aux j_emlrt_marshallIn value [8087];

#endif
#endif

/* End of code generation (predictRegEnsemble_mexutil.h) */
