/*
 * predictRF_Y4_terminate.c
 *
 * Code generation for function 'predictRF_Y4_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "predictRF_Y4.h"
#include "predictRF_Y4_terminate.h"
#include "_coder_predictRF_Y4_mex.h"
#include "predictRF_Y4_data.h"

/* Function Definitions */
void predictRF_Y4_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void predictRF_Y4_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (predictRF_Y4_terminate.c) */
