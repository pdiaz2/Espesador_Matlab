/*
 * predictRegEnsemble_initialize.c
 *
 * Code generation for function 'predictRegEnsemble_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "predictRegEnsemble.h"
#include "predictRegEnsemble_initialize.h"
#include "_coder_predictRegEnsemble_mex.h"
#include "predictRegEnsemble_data.h"

/* Function Definitions */
void predictRegEnsemble_initialize(void)
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

/* End of code generation (predictRegEnsemble_initialize.c) */
