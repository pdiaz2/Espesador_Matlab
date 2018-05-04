/*
 * predictRegEnsemble_terminate.c
 *
 * Code generation for function 'predictRegEnsemble_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "predictRegEnsemble.h"
#include "predictRegEnsemble_terminate.h"
#include "_coder_predictRegEnsemble_mex.h"
#include "predictRegEnsemble_data.h"

/* Function Definitions */
void predictRegEnsemble_atexit(void)
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

void predictRegEnsemble_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (predictRegEnsemble_terminate.c) */
