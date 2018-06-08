/*
 * predictRF_Y4_initialize.c
 *
 * Code generation for function 'predictRF_Y4_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "predictRF_Y4.h"
#include "predictRF_Y4_initialize.h"
#include "_coder_predictRF_Y4_mex.h"
#include "predictRF_Y4_data.h"

/* Function Definitions */
void predictRF_Y4_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (predictRF_Y4_initialize.c) */
