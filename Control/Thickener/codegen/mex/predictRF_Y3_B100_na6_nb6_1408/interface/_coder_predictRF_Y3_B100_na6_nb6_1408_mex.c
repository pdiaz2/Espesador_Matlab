/*
 * _coder_predictRF_Y3_B100_na6_nb6_1408_mex.c
 *
 * Code generation for function '_coder_predictRF_Y3_B100_na6_nb6_1408_mex'
 *
 */

/* Include files */
#include "predictRF_Y3_B100_na6_nb6_1408.h"
#include "_coder_predictRF_Y3_B100_na6_nb6_1408_mex.h"
#include "predictRF_Y3_B100_na6_nb6_1408_terminate.h"
#include "_coder_predictRF_Y3_B100_na6_nb6_1408_api.h"
#include "predictRF_Y3_B100_na6_nb6_1408_initialize.h"
#include "predictRF_Y3_B100_na6_nb6_1408_data.h"

/* Function Declarations */
static void c_predictRF_Y3_B100_na6_nb6_140(d_predictRF_Y3_B100_na6_nb6_140 *SD,
  int32_T nlhs, mxArray *plhs[1], int32_T nrhs, const mxArray *prhs[3]);

/* Function Definitions */
static void c_predictRF_Y3_B100_na6_nb6_140(d_predictRF_Y3_B100_na6_nb6_140 *SD,
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
                        30, "predictRF_Y3_B100_na6_nb6_1408");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 30,
                        "predictRF_Y3_B100_na6_nb6_1408");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  predictRF_Y3_B100_na6_nb6_1408_api(SD, inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  predictRF_Y3_B100_na6_nb6_1408_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  d_predictRF_Y3_B100_na6_nb6_140 *e_predictRF_Y3_B100_na6_nb6_140 = NULL;
  e_predictRF_Y3_B100_na6_nb6_140 = (d_predictRF_Y3_B100_na6_nb6_140 *)mxCalloc
    (1, 1U * sizeof(d_predictRF_Y3_B100_na6_nb6_140));
  mexAtExit(predictRF_Y3_B100_na6_nb6_1408_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  predictRF_Y3_B100_na6_nb6_1408_initialize();

  /* Dispatch the entry-point. */
  c_predictRF_Y3_B100_na6_nb6_140(e_predictRF_Y3_B100_na6_nb6_140, nlhs, plhs,
    nrhs, prhs);
  mxFree(e_predictRF_Y3_B100_na6_nb6_140);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_predictRF_Y3_B100_na6_nb6_1408_mex.c) */
