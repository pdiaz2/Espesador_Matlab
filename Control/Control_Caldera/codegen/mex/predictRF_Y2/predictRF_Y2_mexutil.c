/*
 * predictRF_Y2_mexutil.c
 *
 * Code generation for function 'predictRF_Y2_mexutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "predictRF_Y2.h"
#include "predictRF_Y2_mexutil.h"

/* Function Definitions */
const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m2;
  y = NULL;
  m2 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m2);
  return y;
}

/* End of code generation (predictRF_Y2_mexutil.c) */
