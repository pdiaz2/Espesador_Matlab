/*
 * predictRF_Y2_terminate.c
 *
 * Code generation for function 'predictRF_Y2_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "predictRF_Y2.h"
#include "predictRF_Y2_terminate.h"
#include "_coder_predictRF_Y2_mex.h"
#include "predictRF_Y2_data.h"

/* Function Definitions */
void predictRF_Y2_atexit(void)
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

void predictRF_Y2_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (predictRF_Y2_terminate.c) */
