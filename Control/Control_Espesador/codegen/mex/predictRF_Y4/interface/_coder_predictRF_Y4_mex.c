/*
 * _coder_predictRF_Y4_mex.c
 *
 * Code generation for function '_coder_predictRF_Y4_mex'
 *
 */

/* Include files */
#include "predictRF_Y4.h"
#include "_coder_predictRF_Y4_mex.h"
#include "predictRF_Y4_terminate.h"
#include "_coder_predictRF_Y4_api.h"
#include "predictRF_Y4_initialize.h"
#include "predictRF_Y4_data.h"

/* Function Declarations */
static void predictRF_Y4_mexFunction(predictRF_Y4StackData *SD, int32_T nlhs,
  mxArray *plhs[1], int32_T nrhs, const mxArray *prhs[3]);

/* Function Definitions */
static void predictRF_Y4_mexFunction(predictRF_Y4StackData *SD, int32_T nlhs,
  mxArray *plhs[1], int32_T nrhs, const mxArray *prhs[3])
{
  int32_T n;
  const mxArray *inputs[3];
  const mxArray *outputs[1];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 3, 4,
                        12, "predictRF_Y4");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 12,
                        "predictRF_Y4");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  predictRF_Y4_api(SD, inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  predictRF_Y4_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  predictRF_Y4StackData *predictRF_Y4StackDataGlobal = NULL;
  predictRF_Y4StackDataGlobal = (predictRF_Y4StackData *)mxCalloc(1, 1U * sizeof
    (predictRF_Y4StackData));
  mexAtExit(predictRF_Y4_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  predictRF_Y4_initialize();

  /* Dispatch the entry-point. */
  predictRF_Y4_mexFunction(predictRF_Y4StackDataGlobal, nlhs, plhs, nrhs, prhs);
  mxFree(predictRF_Y4StackDataGlobal);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_predictRF_Y4_mex.c) */
