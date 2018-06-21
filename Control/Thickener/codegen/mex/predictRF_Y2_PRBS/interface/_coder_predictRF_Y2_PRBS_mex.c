/*
 * _coder_predictRF_Y2_PRBS_mex.c
 *
 * Code generation for function '_coder_predictRF_Y2_PRBS_mex'
 *
 */

/* Include files */
#include "predictRF_Y2_PRBS.h"
#include "_coder_predictRF_Y2_PRBS_mex.h"
#include "predictRF_Y2_PRBS_terminate.h"
#include "_coder_predictRF_Y2_PRBS_api.h"
#include "predictRF_Y2_PRBS_initialize.h"
#include "predictRF_Y2_PRBS_data.h"

/* Function Declarations */
static void predictRF_Y2_PRBS_mexFunction(predictRF_Y2_PRBSStackData *SD,
  int32_T nlhs, mxArray *plhs[1], int32_T nrhs, const mxArray *prhs[3]);

/* Function Definitions */
static void predictRF_Y2_PRBS_mexFunction(predictRF_Y2_PRBSStackData *SD,
  int32_T nlhs, mxArray *plhs[1], int32_T nrhs, const mxArray *prhs[3])
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
                        17, "predictRF_Y2_PRBS");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 17,
                        "predictRF_Y2_PRBS");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  predictRF_Y2_PRBS_api(SD, inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  predictRF_Y2_PRBS_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  predictRF_Y2_PRBSStackData *c_predictRF_Y2_PRBSStackDataGlo = NULL;
  c_predictRF_Y2_PRBSStackDataGlo = (predictRF_Y2_PRBSStackData *)mxCalloc(1, 1U
    * sizeof(predictRF_Y2_PRBSStackData));
  mexAtExit(predictRF_Y2_PRBS_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  predictRF_Y2_PRBS_initialize();

  /* Dispatch the entry-point. */
  predictRF_Y2_PRBS_mexFunction(c_predictRF_Y2_PRBSStackDataGlo, nlhs, plhs,
    nrhs, prhs);
  mxFree(c_predictRF_Y2_PRBSStackDataGlo);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_predictRF_Y2_PRBS_mex.c) */
