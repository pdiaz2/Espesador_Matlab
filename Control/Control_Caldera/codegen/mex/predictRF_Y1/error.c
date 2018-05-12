/*
 * error.c
 *
 * Code generation for function 'error'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "predictRF_Y1.h"
#include "error.h"
#include "predictRF_Y1_mexutil.h"

/* Variable Definitions */
static emlrtMCInfo emlrtMCI = { 27,    /* lineNo */
  5,                                   /* colNo */
  "error",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\lang\\error.m"/* pName */
};

static emlrtRSInfo m_emlrtRSI = { 27,  /* lineNo */
  "error",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\lang\\error.m"/* pathName */
};

/* Function Declarations */
static void c_error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    const mxArray *d, emlrtMCInfo *location);

/* Function Definitions */
static void c_error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  emlrtCallMATLABR2012b(sp, 0, NULL, 3, pArrays, "error", true, location);
}

void b_error(const emlrtStack *sp, real_T varargin_3)
{
  const mxArray *y;
  const mxArray *m1;
  static const int32_T iv301[2] = { 1, 68 };

  static const char_T varargin_1[68] = { 'N', 'u', 'm', 'b', 'e', 'r', ' ', 'o',
    'f', ' ', 'p', 'r', 'e', 'd', 'i', 'c', 't', 'o', 'r', 's', ' ', 'i', 's',
    ' ', '%', 'd', ' ', 'i', 'n', ' ', 'h', 'a', 'r', 'd', 'c', 'o', 'd', 'e',
    'd', ' ', 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n', '.', ' ', 'D', 'i', 'f',
    'f', 'e', 'r', 'e', 'n', 't', ' ', 'f', 'r', 'o', 'm', ':', ' ', '%', 'd' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m1 = emlrtCreateCharArray(2, iv301);
  emlrtInitCharArrayR2013a(sp, 68, m1, &varargin_1[0]);
  emlrtAssign(&y, m1);
  st.site = &m_emlrtRSI;
  c_error(&st, y, emlrt_marshallOut(10.0), emlrt_marshallOut(varargin_3),
          &emlrtMCI);
}

void error(const emlrtStack *sp, real_T varargin_3)
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv300[2] = { 1, 63 };

  static const char_T varargin_1[63] = { 'N', 'u', 'm', 'b', 'e', 'r', ' ', 'o',
    'f', ' ', 't', 'r', 'e', 'e', 's', ' ', 'i', 's', ' ', '%', 'd', ' ', 'i',
    'n', ' ', 'h', 'a', 'r', 'd', 'c', 'o', 'd', 'e', 'd', ' ', 'f', 'u', 'n',
    'c', 't', 'i', 'o', 'n', '.', ' ', 'D', 'i', 'f', 'f', 'e', 'r', 'e', 'n',
    't', ' ', 'f', 'r', 'o', 'm', ':', ' ', '%', 'd' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m0 = emlrtCreateCharArray(2, iv300);
  emlrtInitCharArrayR2013a(sp, 63, m0, &varargin_1[0]);
  emlrtAssign(&y, m0);
  st.site = &m_emlrtRSI;
  c_error(&st, y, emlrt_marshallOut(100.0), emlrt_marshallOut(varargin_3),
          &emlrtMCI);
}

/* End of code generation (error.c) */
