/*
 * predictRegEnsemble.c
 *
 * Code generation for function 'predictRegEnsemble'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "predictRegEnsemble.h"
#include "predictRegEnsemble_emxutil.h"
#include "predictRegEnsemble_mexutil.h"
#include "predictRegEnsemble_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 10,    /* lineNo */
  "predictRegEnsemble",                /* fcnName */
  "C:\\Users\\pablo\\Documents\\MATLAB\\Magister\\Pablo\\Git\\Espesador_Matlab\\Control\\Control_Caldera\\predictRegEnsemble.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 18,  /* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 13,    /* lineNo */
  35,                                  /* colNo */
  "predictRegEnsemble",                /* fName */
  "C:\\Users\\pablo\\Documents\\MATLAB\\Magister\\Pablo\\Git\\Espesador_Matlab\\Control\\Control_Caldera\\predictRegEnsemble.m"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 13,  /* lineNo */
  15,                                  /* colNo */
  "predictRegEnsemble",                /* fName */
  "C:\\Users\\pablo\\Documents\\MATLAB\\Magister\\Pablo\\Git\\Espesador_Matlab\\Control\\Control_Caldera\\predictRegEnsemble.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 14,  /* lineNo */
  19,                                  /* colNo */
  "predictRegEnsemble",                /* fName */
  "C:\\Users\\pablo\\Documents\\MATLAB\\Magister\\Pablo\\Git\\Espesador_Matlab\\Control\\Control_Caldera\\predictRegEnsemble.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 20,  /* lineNo */
  14,                                  /* colNo */
  "predictRegEnsemble",                /* fName */
  "C:\\Users\\pablo\\Documents\\MATLAB\\Magister\\Pablo\\Git\\Espesador_Matlab\\Control\\Control_Caldera\\predictRegEnsemble.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 10,  /* lineNo */
  1,                                   /* colNo */
  "predictRegEnsemble",                /* fName */
  "C:\\Users\\pablo\\Documents\\MATLAB\\Magister\\Pablo\\Git\\Espesador_Matlab\\Control\\Control_Caldera\\predictRegEnsemble.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 12,/* lineNo */
  9,                                   /* colNo */
  "predictRegEnsemble",                /* fName */
  "C:\\Users\\pablo\\Documents\\MATLAB\\Magister\\Pablo\\Git\\Espesador_Matlab\\Control\\Control_Caldera\\predictRegEnsemble.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 19,/* lineNo */
  9,                                   /* colNo */
  "predictRegEnsemble",                /* fName */
  "C:\\Users\\pablo\\Documents\\MATLAB\\Magister\\Pablo\\Git\\Espesador_Matlab\\Control\\Control_Caldera\\predictRegEnsemble.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  25,                                  /* colNo */
  "RF",                                /* aName */
  "predictRegEnsemble",                /* fName */
  "C:\\Users\\pablo\\Documents\\MATLAB\\Magister\\Pablo\\Git\\Espesador_Matlab\\Control\\Control_Caldera\\predictRegEnsemble.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo e_emlrtRTEI = { 44,/* lineNo */
  19,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 59,/* lineNo */
  15,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 21,    /* lineNo */
  14,                                  /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m",/* pName */
  4                                    /* checkKind */
};

static emlrtRSInfo c_emlrtRSI = { 13,  /* lineNo */
  "predictRegEnsemble",                /* fcnName */
  "C:\\Users\\pablo\\Documents\\MATLAB\\Magister\\Pablo\\Git\\Espesador_Matlab\\Control\\Control_Caldera\\predictRegEnsemble.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 14,  /* lineNo */
  "predictRegEnsemble",                /* fcnName */
  "C:\\Users\\pablo\\Documents\\MATLAB\\Magister\\Pablo\\Git\\Espesador_Matlab\\Control\\Control_Caldera\\predictRegEnsemble.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 20,  /* lineNo */
  "predictRegEnsemble",                /* fcnName */
  "C:\\Users\\pablo\\Documents\\MATLAB\\Magister\\Pablo\\Git\\Espesador_Matlab\\Control\\Control_Caldera\\predictRegEnsemble.m"/* pathName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_loadCompactModel, const char_T *identifier);
static const mxArray *horzcat(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static const mxArray *loadCompactModel(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static const mxArray *num2str(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static const mxArray *predict(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_loadCompactModel, const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(b_loadCompactModel), &thisId);
  emlrtDestroyArray(&b_loadCompactModel);
}

static const mxArray *horzcat(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m3;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m3, 3, pArrays, "horzcat", true, location);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  static const int32_T dims[2] = { 1, 0 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  emlrtDestroyArray(&src);
}

static const mxArray *loadCompactModel(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m4;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m4, 1, &pArray, "loadCompactModel", true,
    location);
}

static const mxArray *num2str(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m2;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m2, 1, &pArray, "num2str", true, location);
}

static const mxArray *predict(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m5;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m5, 2, pArrays, "predict", true, location);
}

real_T predictRegEnsemble(const emlrtStack *sp, const emxArray_real_T *X, real_T
  numTrees, const emxArray_char_T *experimentName)
{
  real_T prediction;
  real_T varargin_1[2];
  int32_T k;
  int32_T exitg1;
  boolean_T p;
  real_T johnny;
  int32_T i0;
  emxArray_struct_T *RF;
  int32_T t;
  const mxArray *y;
  const mxArray *m0;
  const mxArray *b_y;
  const mxArray *strFile = NULL;
  static const int32_T iv0[2] = { 1, 0 };

  real_T *pData;
  int32_T i;
  int32_T b_i;
  int32_T c_i;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /* PREDICTREGENSEMBLE Summary of this function goes here */
  /*    Detailed explanation goes here */
  /*  According to Matlab docs, predict should be available for codegen, but */
  /*  doesn't work. */
  st.site = &emlrtRSI;
  varargin_1[0] = 1.0;
  varargin_1[1] = numTrees;
  b_st.site = &b_emlrtRSI;
  k = 0;
  do {
    exitg1 = 0;
    if (k < 2) {
      if ((varargin_1[k] != muDoubleScalarFloor(varargin_1[k])) ||
          muDoubleScalarIsInf(varargin_1[k])) {
        p = false;
        exitg1 = 1;
      } else {
        k++;
      }
    } else {
      p = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (p) {
    k = 0;
    do {
      exitg1 = 0;
      if (k < 2) {
        if ((-2.147483648E+9 > varargin_1[k]) || (2.147483647E+9 < varargin_1[k]))
        {
          p = false;
          exitg1 = 1;
        } else {
          k++;
        }
      } else {
        p = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    if (p) {
      p = true;
    } else {
      p = false;
    }
  } else {
    p = false;
  }

  if (!p) {
    emlrtErrorWithMessageIdR2012b(&b_st, &e_emlrtRTEI,
      "Coder:toolbox:eml_assert_valid_size_arg_invalidSizeVector", 4, 12,
      MIN_int32_T, 12, MAX_int32_T);
  }

  johnny = 1.0;
  for (k = 0; k < 2; k++) {
    if (varargin_1[k] <= 0.0) {
      johnny = 0.0;
    } else {
      johnny *= varargin_1[k];
    }
  }

  if (!(2.147483647E+9 >= johnny)) {
    emlrtErrorWithMessageIdR2012b(&b_st, &f_emlrtRTEI, "Coder:MATLAB:pmaxsize",
      0);
  }

  for (i0 = 0; i0 < 2; i0++) {
    if (!(varargin_1[i0] >= 0.0)) {
      emlrtNonNegativeCheckR2012b(varargin_1[i0], &emlrtDCI, &st);
    }
  }

  emxInit_struct_T(&st, &RF, 2, &emlrtRTEI, true);
  RF->size[0] = 1;
  RF->size[1] = (int32_T)numTrees;

  /*  for y = 1:numOutputs */
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, numTrees, mxDOUBLE_CLASS, (int32_T)
    numTrees, &c_emlrtRTEI, sp);
  t = 0;
  while (t <= (int32_T)numTrees - 1) {
    y = NULL;
    m0 = emlrtCreateCharArray(2, *(int32_T (*)[2])experimentName->size);
    emlrtInitCharArrayR2013a(sp, experimentName->size[1], m0,
      &experimentName->data[0]);
    emlrtAssign(&y, m0);
    b_y = NULL;
    m0 = emlrtCreateString1('_');
    emlrtAssign(&b_y, m0);
    st.site = &c_emlrtRSI;
    emlrtAssign(&strFile, horzcat(&st, y, b_y, num2str(&st, emlrt_marshallOut
      (1.0 + (real_T)t), &emlrtMCI), &b_emlrtMCI));
    st.site = &d_emlrtRSI;
    emlrt_marshallIn(sp, loadCompactModel(&st, emlrtAlias(strFile), &c_emlrtMCI),
                     "loadCompactModel");
    t++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  /*  end */
  prediction = 0.0;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, numTrees, mxDOUBLE_CLASS, (int32_T)
    numTrees, &d_emlrtRTEI, sp);
  t = 0;
  while (t <= (int32_T)numTrees - 1) {
    i0 = RF->size[1];
    k = t + 1;
    if (!((k >= 1) && (k <= i0))) {
      emlrtDynamicBoundsCheckR2012b(k, 1, i0, &emlrtBCI, sp);
    }

    y = NULL;
    m0 = emlrtCreateNumericArray(2, iv0, mxDOUBLE_CLASS, mxREAL);
    emlrtAssign(&y, m0);
    b_y = NULL;
    m0 = emlrtCreateNumericArray(4, *(int32_T (*)[2])X->size, mxDOUBLE_CLASS,
      mxREAL);
    pData = (real_T *)mxGetPr(m0);
    i0 = 0;
    for (k = 0; k < X->size[3]; k++) {
      for (i = 0; i < X->size[2]; i++) {
        for (b_i = 0; b_i < 11; b_i++) {
          for (c_i = 0; c_i < X->size[0]; c_i++) {
            pData[i0] = X->data[((c_i + X->size[0] * b_i) + X->size[0] * X->
                                 size[1] * i) + X->size[0] * X->size[1] *
              X->size[2] * k];
            i0++;
          }
        }
      }
    }

    emlrtAssign(&b_y, m0);
    st.site = &e_emlrtRSI;
    johnny = c_emlrt_marshallIn(&st, predict(&st, y, b_y, &d_emlrtMCI),
      "predict");
    prediction += 1.0 / numTrees * johnny;

    /*      prediction = prediction+5; */
    t++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_struct_T(&RF);
  emlrtDestroyArray(&strFile);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return prediction;
}

/* End of code generation (predictRegEnsemble.c) */
