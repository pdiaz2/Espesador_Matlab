/*
 * _coder_predictRF_Y3_mex.c
 *
 * Code generation for function '_coder_predictRF_Y3_mex'
 *
 */

/* Include files */
#include "predictRF_Y3.h"
#include "_coder_predictRF_Y3_mex.h"
#include "predictRF_Y3_terminate.h"
#include "_coder_predictRF_Y3_api.h"
#include "predictRF_Y3_initialize.h"
#include "predictRF_Y3_data.h"

/* Function Declarations */
static void predictRF_Y3_mexFunction(predictRF_Y3StackData *SD, int32_T nlhs,
  mxArray *plhs[1], int32_T nrhs, const mxArray *prhs[3]);

/* Function Definitions */
static void predictRF_Y3_mexFunction(predictRF_Y3StackData *SD, int32_T nlhs,
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
                        12, "predictRF_Y3");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 12,
                        "predictRF_Y3");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  predictRF_Y3_api(SD, inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  predictRF_Y3_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  predictRF_Y3StackData *predictRF_Y3StackDataGlobal = NULL;
  predictRF_Y3StackDataGlobal = (predictRF_Y3StackData *)mxCalloc(1, 1U * sizeof
    (predictRF_Y3StackData));
  mexAtExit(predictRF_Y3_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  predictRF_Y3_initialize();

  /* Dispatch the entry-point. */
  predictRF_Y3_mexFunction(predictRF_Y3StackDataGlobal, nlhs, plhs, nrhs, prhs);
  mxFree(predictRF_Y3StackDataGlobal);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_predictRF_Y3_mex.c) */
