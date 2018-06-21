/*
 * _coder_predictRF_Y4_PRBS_api.c
 *
 * Code generation for function '_coder_predictRF_Y4_PRBS_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "predictRF_Y4_PRBS.h"
#include "_coder_predictRF_Y4_PRBS_api.h"
#include "predictRF_Y4_PRBS_emxutil.h"
#include "predictRF_Y4_PRBS_data.h"

/* Variable Definitions */
static emlrtRTEInfo e_emlrtRTEI = { 1, /* lineNo */
  1,                                   /* colNo */
  "_coder_predictRF_Y4_PRBS_api",      /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *numTrees,
  const char_T *identifier);
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *X, const
  char_T *identifier, emxArray_real_T *y);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  e_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *numTrees,
  const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(numTrees), &thisId);
  emlrtDestroyArray(&numTrees);
  return y;
}

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, 10 };

  const boolean_T bv0[2] = { true, false };

  int32_T iv379[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv0[0],
    iv379);
  ret->size[0] = iv379[0];
  ret->size[1] = iv379[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *X, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(X), &thisId, y);
  emlrtDestroyArray(&X);
}

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m2;
  static const int32_T iv378[1] = { 0 };

  y = NULL;
  m2 = emlrtCreateNumericArray(1, iv378, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m2, (void *)&u->data[0]);
  emlrtSetDimensions((mxArray *)m2, u->size, 1);
  emlrtAssign(&y, m2);
  return y;
}

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void predictRF_Y4_PRBS_api(predictRF_Y4_PRBSStackData *SD, const mxArray * const
  prhs[3], const mxArray *plhs[1])
{
  emxArray_real_T *X;
  emxArray_real_T *Y;
  real_T numTrees;
  real_T numPredictors;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T1(&st, &X, 2, &e_emlrtRTEI, true);
  emxInit_real_T(&st, &Y, 1, &e_emlrtRTEI, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "X", X);
  numTrees = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "numTrees");
  numPredictors = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "numPredictors");

  /* Invoke the target function */
  predictRF_Y4_PRBS(SD, &st, X, numTrees, numPredictors, Y);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(Y);
  Y->canFreeData = false;
  emxFree_real_T(&Y);
  X->canFreeData = false;
  emxFree_real_T(&X);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_predictRF_Y4_PRBS_api.c) */
