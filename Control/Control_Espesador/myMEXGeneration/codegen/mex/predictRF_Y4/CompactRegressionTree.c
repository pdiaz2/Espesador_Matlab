/*
 * CompactRegressionTree.c
 *
 * Code generation for function 'CompactRegressionTree'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "predictRF_Y4.h"
#include "CompactRegressionTree.h"
#include "predictRF_Y4_emxutil.h"

/* Variable Definitions */
static emlrtRSInfo h_emlrtRSI = { 146, /* lineNo */
  "CompactRegressionTree",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\CompactRegressionTree.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 189, /* lineNo */
  "CompactRegressionTree",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\CompactRegressionTree.m"/* pathName */
};

static emlrtRTEInfo c_emlrtRTEI = { 101,/* lineNo */
  32,                                  /* colNo */
  "CompactRegressionTree",             /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\CompactRegressionTree.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 101,/* lineNo */
  24,                                  /* colNo */
  "CompactRegressionTree",             /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\CompactRegressionTree.m"/* pName */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  157,                                 /* lineNo */
  17,                                  /* colNo */
  "CompactRegressionTree",             /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\CompactRegressionTree.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { 1,     /* iFirst */
  9,                                   /* iLast */
  38,                                  /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { 1,   /* iFirst */
  9,                                   /* iLast */
  35,                                  /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { 1,   /* iFirst */
  425,                                 /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { 1,   /* iFirst */
  433,                                 /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { 1,   /* iFirst */
  431,                                 /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { 1,   /* iFirst */
  419,                                 /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { 1,   /* iFirst */
  423,                                 /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { 1,   /* iFirst */
  443,                                 /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { 1,   /* iFirst */
  435,                                 /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { 1,   /* iFirst */
  427,                                 /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { 1,   /* iFirst */
  403,                                 /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { 1,   /* iFirst */
  439,                                 /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { 1,   /* iFirst */
  437,                                 /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { 1,   /* iFirst */
  421,                                 /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { 1,   /* iFirst */
  429,                                 /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { 1,   /* iFirst */
  415,                                 /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { 1,   /* iFirst */
  445,                                 /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { 1,   /* iFirst */
  411,                                 /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { 1,   /* iFirst */
  407,                                 /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { 1,   /* iFirst */
  399,                                 /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { 1,   /* iFirst */
  449,                                 /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { 1,   /* iFirst */
  417,                                 /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { 1,   /* iFirst */
  467,                                 /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[425], const real_T obj_Children[850], const real_T obj_CutPoint[425],
  const real_T obj_NodeMean[425], const emxArray_real_T *X, emxArray_real_T
  *Yfit)
{
  emxArray_real_T *node;
  int32_T i1;
  int32_T loop_ub;
  int32_T i2;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r1;
  emxArray_real_T *r2;
  int32_T iv302[1];
  int32_T iv303[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i1 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i1, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &h_emlrtRSI;
    b_st.site = &i_emlrtRSI;
    i1 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i1, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      node->data[i1] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i1 = X->size[0];
      i2 = loop_ub + 1;
      if (!((i2 >= 1) && (i2 <= i1))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i1 = (int32_T)m;
        if (!((i1 >= 1) && (i1 <= 425))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, 425, &d_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i1 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i1 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i1 >= 1) && (i1 <= 9))) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, 9, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i1 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i1 >= 1) && (i1 <= 9))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, 9, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i1 = node->size[0];
      i2 = 1 + loop_ub;
      if (!((i2 >= 1) && (i2 <= i1))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &e_emlrtBCI, &b_st);
      }

      node->data[i2 - 1] = m;
    }

    i1 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i1, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      Yfit->data[i1] = 0.0;
    }

    emxInit_int32_T(sp, &r1, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i1 = r1->size[0];
    r1->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r1, i1, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      r1->data[i1] = i1;
    }

    emxInit_real_T(sp, &r2, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i1 = r2->size[0];
    r2->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r2, i1, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      r2->data[i1] = obj_NodeMean[(int32_T)node->data[i1] - 1];
    }

    i1 = node->size[0];
    iv302[0] = r1->size[0];
    iv303[0] = i1;
    emlrtSubAssignSizeCheckR2012b(iv302, 1, iv303, 1, &b_emlrtECI, sp);
    loop_ub = r2->size[0];
    emxFree_real_T(&node);
    for (i1 = 0; i1 < loop_ub; i1++) {
      Yfit->data[r1->data[i1]] = r2->data[i1];
    }

    emxFree_real_T(&r2);
    emxFree_int32_T(&r1);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void b_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[433], const real_T obj_Children[866], const real_T obj_CutPoint[433],
  const real_T obj_NodeMean[433], const emxArray_real_T *X, emxArray_real_T
  *Yfit)
{
  emxArray_real_T *node;
  int32_T i3;
  int32_T loop_ub;
  int32_T i4;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r3;
  emxArray_real_T *r4;
  int32_T iv304[1];
  int32_T iv305[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i3 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i3, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &h_emlrtRSI;
    b_st.site = &i_emlrtRSI;
    i3 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i3, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i3 = 0; i3 < loop_ub; i3++) {
      node->data[i3] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i3 = X->size[0];
      i4 = loop_ub + 1;
      if (!((i4 >= 1) && (i4 <= i3))) {
        emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i3 = (int32_T)m;
        if (!((i3 >= 1) && (i3 <= 433))) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, 433, &f_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i3 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i3 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i3 >= 1) && (i3 <= 9))) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, 9, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i3 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i3 >= 1) && (i3 <= 9))) {
              emlrtDynamicBoundsCheckR2012b(i3, 1, 9, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i3 = node->size[0];
      i4 = 1 + loop_ub;
      if (!((i4 >= 1) && (i4 <= i3))) {
        emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &e_emlrtBCI, &b_st);
      }

      node->data[i4 - 1] = m;
    }

    i3 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i3, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i3 = 0; i3 < loop_ub; i3++) {
      Yfit->data[i3] = 0.0;
    }

    emxInit_int32_T(sp, &r3, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i3 = r3->size[0];
    r3->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r3, i3, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i3 = 0; i3 < loop_ub; i3++) {
      r3->data[i3] = i3;
    }

    emxInit_real_T(sp, &r4, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i3 = r4->size[0];
    r4->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r4, i3, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i3 = 0; i3 < loop_ub; i3++) {
      r4->data[i3] = obj_NodeMean[(int32_T)node->data[i3] - 1];
    }

    i3 = node->size[0];
    iv304[0] = r3->size[0];
    iv305[0] = i3;
    emlrtSubAssignSizeCheckR2012b(iv304, 1, iv305, 1, &b_emlrtECI, sp);
    loop_ub = r4->size[0];
    emxFree_real_T(&node);
    for (i3 = 0; i3 < loop_ub; i3++) {
      Yfit->data[r3->data[i3]] = r4->data[i3];
    }

    emxFree_real_T(&r4);
    emxFree_int32_T(&r3);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void c_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[431], const real_T obj_Children[862], const real_T obj_CutPoint[431],
  const real_T obj_NodeMean[431], const emxArray_real_T *X, emxArray_real_T
  *Yfit)
{
  emxArray_real_T *node;
  int32_T i5;
  int32_T loop_ub;
  int32_T i6;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r5;
  emxArray_real_T *r6;
  int32_T iv306[1];
  int32_T iv307[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i5 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i5, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &h_emlrtRSI;
    b_st.site = &i_emlrtRSI;
    i5 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i5, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i5 = 0; i5 < loop_ub; i5++) {
      node->data[i5] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i5 = X->size[0];
      i6 = loop_ub + 1;
      if (!((i6 >= 1) && (i6 <= i5))) {
        emlrtDynamicBoundsCheckR2012b(i6, 1, i5, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i5 = (int32_T)m;
        if (!((i5 >= 1) && (i5 <= 431))) {
          emlrtDynamicBoundsCheckR2012b(i5, 1, 431, &g_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i5 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i5 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i5 >= 1) && (i5 <= 9))) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, 9, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i5 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i5 >= 1) && (i5 <= 9))) {
              emlrtDynamicBoundsCheckR2012b(i5, 1, 9, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i5 = node->size[0];
      i6 = 1 + loop_ub;
      if (!((i6 >= 1) && (i6 <= i5))) {
        emlrtDynamicBoundsCheckR2012b(i6, 1, i5, &e_emlrtBCI, &b_st);
      }

      node->data[i6 - 1] = m;
    }

    i5 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i5, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i5 = 0; i5 < loop_ub; i5++) {
      Yfit->data[i5] = 0.0;
    }

    emxInit_int32_T(sp, &r5, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i5 = r5->size[0];
    r5->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r5, i5, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i5 = 0; i5 < loop_ub; i5++) {
      r5->data[i5] = i5;
    }

    emxInit_real_T(sp, &r6, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i5 = r6->size[0];
    r6->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r6, i5, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i5 = 0; i5 < loop_ub; i5++) {
      r6->data[i5] = obj_NodeMean[(int32_T)node->data[i5] - 1];
    }

    i5 = node->size[0];
    iv306[0] = r5->size[0];
    iv307[0] = i5;
    emlrtSubAssignSizeCheckR2012b(iv306, 1, iv307, 1, &b_emlrtECI, sp);
    loop_ub = r6->size[0];
    emxFree_real_T(&node);
    for (i5 = 0; i5 < loop_ub; i5++) {
      Yfit->data[r5->data[i5]] = r6->data[i5];
    }

    emxFree_real_T(&r6);
    emxFree_int32_T(&r5);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void d_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[419], const real_T obj_Children[838], const real_T obj_CutPoint[419],
  const real_T obj_NodeMean[419], const emxArray_real_T *X, emxArray_real_T
  *Yfit)
{
  emxArray_real_T *node;
  int32_T i7;
  int32_T loop_ub;
  int32_T i8;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r7;
  emxArray_real_T *r8;
  int32_T iv308[1];
  int32_T iv309[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i7 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i7, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &h_emlrtRSI;
    b_st.site = &i_emlrtRSI;
    i7 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i7, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i7 = 0; i7 < loop_ub; i7++) {
      node->data[i7] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i7 = X->size[0];
      i8 = loop_ub + 1;
      if (!((i8 >= 1) && (i8 <= i7))) {
        emlrtDynamicBoundsCheckR2012b(i8, 1, i7, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i7 = (int32_T)m;
        if (!((i7 >= 1) && (i7 <= 419))) {
          emlrtDynamicBoundsCheckR2012b(i7, 1, 419, &h_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i7 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i7 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i7 >= 1) && (i7 <= 9))) {
            emlrtDynamicBoundsCheckR2012b(i7, 1, 9, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i7 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i7 >= 1) && (i7 <= 9))) {
              emlrtDynamicBoundsCheckR2012b(i7, 1, 9, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i7 = node->size[0];
      i8 = 1 + loop_ub;
      if (!((i8 >= 1) && (i8 <= i7))) {
        emlrtDynamicBoundsCheckR2012b(i8, 1, i7, &e_emlrtBCI, &b_st);
      }

      node->data[i8 - 1] = m;
    }

    i7 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i7, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i7 = 0; i7 < loop_ub; i7++) {
      Yfit->data[i7] = 0.0;
    }

    emxInit_int32_T(sp, &r7, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i7 = r7->size[0];
    r7->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r7, i7, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i7 = 0; i7 < loop_ub; i7++) {
      r7->data[i7] = i7;
    }

    emxInit_real_T(sp, &r8, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i7 = r8->size[0];
    r8->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r8, i7, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i7 = 0; i7 < loop_ub; i7++) {
      r8->data[i7] = obj_NodeMean[(int32_T)node->data[i7] - 1];
    }

    i7 = node->size[0];
    iv308[0] = r7->size[0];
    iv309[0] = i7;
    emlrtSubAssignSizeCheckR2012b(iv308, 1, iv309, 1, &b_emlrtECI, sp);
    loop_ub = r8->size[0];
    emxFree_real_T(&node);
    for (i7 = 0; i7 < loop_ub; i7++) {
      Yfit->data[r7->data[i7]] = r8->data[i7];
    }

    emxFree_real_T(&r8);
    emxFree_int32_T(&r7);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void e_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[423], const real_T obj_Children[846], const real_T obj_CutPoint[423],
  const real_T obj_NodeMean[423], const emxArray_real_T *X, emxArray_real_T
  *Yfit)
{
  emxArray_real_T *node;
  int32_T i9;
  int32_T loop_ub;
  int32_T i10;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r9;
  emxArray_real_T *r10;
  int32_T iv310[1];
  int32_T iv311[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i9 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i9, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &h_emlrtRSI;
    b_st.site = &i_emlrtRSI;
    i9 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i9, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i9 = 0; i9 < loop_ub; i9++) {
      node->data[i9] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i9 = X->size[0];
      i10 = loop_ub + 1;
      if (!((i10 >= 1) && (i10 <= i9))) {
        emlrtDynamicBoundsCheckR2012b(i10, 1, i9, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i9 = (int32_T)m;
        if (!((i9 >= 1) && (i9 <= 423))) {
          emlrtDynamicBoundsCheckR2012b(i9, 1, 423, &i_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i9 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i9 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i9 >= 1) && (i9 <= 9))) {
            emlrtDynamicBoundsCheckR2012b(i9, 1, 9, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i9 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i9 >= 1) && (i9 <= 9))) {
              emlrtDynamicBoundsCheckR2012b(i9, 1, 9, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i9 = node->size[0];
      i10 = 1 + loop_ub;
      if (!((i10 >= 1) && (i10 <= i9))) {
        emlrtDynamicBoundsCheckR2012b(i10, 1, i9, &e_emlrtBCI, &b_st);
      }

      node->data[i10 - 1] = m;
    }

    i9 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i9, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i9 = 0; i9 < loop_ub; i9++) {
      Yfit->data[i9] = 0.0;
    }

    emxInit_int32_T(sp, &r9, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i9 = r9->size[0];
    r9->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r9, i9, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i9 = 0; i9 < loop_ub; i9++) {
      r9->data[i9] = i9;
    }

    emxInit_real_T(sp, &r10, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i9 = r10->size[0];
    r10->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r10, i9, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i9 = 0; i9 < loop_ub; i9++) {
      r10->data[i9] = obj_NodeMean[(int32_T)node->data[i9] - 1];
    }

    i9 = node->size[0];
    iv310[0] = r9->size[0];
    iv311[0] = i9;
    emlrtSubAssignSizeCheckR2012b(iv310, 1, iv311, 1, &b_emlrtECI, sp);
    loop_ub = r10->size[0];
    emxFree_real_T(&node);
    for (i9 = 0; i9 < loop_ub; i9++) {
      Yfit->data[r9->data[i9]] = r10->data[i9];
    }

    emxFree_real_T(&r10);
    emxFree_int32_T(&r9);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void f_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[443], const real_T obj_Children[886], const real_T obj_CutPoint[443],
  const real_T obj_NodeMean[443], const emxArray_real_T *X, emxArray_real_T
  *Yfit)
{
  emxArray_real_T *node;
  int32_T i11;
  int32_T loop_ub;
  int32_T i12;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r11;
  emxArray_real_T *r12;
  int32_T iv312[1];
  int32_T iv313[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i11 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i11, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &h_emlrtRSI;
    b_st.site = &i_emlrtRSI;
    i11 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i11, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i11 = 0; i11 < loop_ub; i11++) {
      node->data[i11] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i11 = X->size[0];
      i12 = loop_ub + 1;
      if (!((i12 >= 1) && (i12 <= i11))) {
        emlrtDynamicBoundsCheckR2012b(i12, 1, i11, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i11 = (int32_T)m;
        if (!((i11 >= 1) && (i11 <= 443))) {
          emlrtDynamicBoundsCheckR2012b(i11, 1, 443, &j_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i11 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i11 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i11 >= 1) && (i11 <= 9))) {
            emlrtDynamicBoundsCheckR2012b(i11, 1, 9, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i11 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i11 >= 1) && (i11 <= 9))) {
              emlrtDynamicBoundsCheckR2012b(i11, 1, 9, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i11 = node->size[0];
      i12 = 1 + loop_ub;
      if (!((i12 >= 1) && (i12 <= i11))) {
        emlrtDynamicBoundsCheckR2012b(i12, 1, i11, &e_emlrtBCI, &b_st);
      }

      node->data[i12 - 1] = m;
    }

    i11 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i11, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i11 = 0; i11 < loop_ub; i11++) {
      Yfit->data[i11] = 0.0;
    }

    emxInit_int32_T(sp, &r11, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i11 = r11->size[0];
    r11->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r11, i11, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i11 = 0; i11 < loop_ub; i11++) {
      r11->data[i11] = i11;
    }

    emxInit_real_T(sp, &r12, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i11 = r12->size[0];
    r12->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r12, i11, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i11 = 0; i11 < loop_ub; i11++) {
      r12->data[i11] = obj_NodeMean[(int32_T)node->data[i11] - 1];
    }

    i11 = node->size[0];
    iv312[0] = r11->size[0];
    iv313[0] = i11;
    emlrtSubAssignSizeCheckR2012b(iv312, 1, iv313, 1, &b_emlrtECI, sp);
    loop_ub = r12->size[0];
    emxFree_real_T(&node);
    for (i11 = 0; i11 < loop_ub; i11++) {
      Yfit->data[r11->data[i11]] = r12->data[i11];
    }

    emxFree_real_T(&r12);
    emxFree_int32_T(&r11);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void g_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[435], const real_T obj_Children[870], const real_T obj_CutPoint[435],
  const real_T obj_NodeMean[435], const emxArray_real_T *X, emxArray_real_T
  *Yfit)
{
  emxArray_real_T *node;
  int32_T i13;
  int32_T loop_ub;
  int32_T i14;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r13;
  emxArray_real_T *r14;
  int32_T iv314[1];
  int32_T iv315[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i13 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i13, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &h_emlrtRSI;
    b_st.site = &i_emlrtRSI;
    i13 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i13, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i13 = 0; i13 < loop_ub; i13++) {
      node->data[i13] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i13 = X->size[0];
      i14 = loop_ub + 1;
      if (!((i14 >= 1) && (i14 <= i13))) {
        emlrtDynamicBoundsCheckR2012b(i14, 1, i13, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i13 = (int32_T)m;
        if (!((i13 >= 1) && (i13 <= 435))) {
          emlrtDynamicBoundsCheckR2012b(i13, 1, 435, &k_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i13 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i13 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i13 >= 1) && (i13 <= 9))) {
            emlrtDynamicBoundsCheckR2012b(i13, 1, 9, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i13 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i13 >= 1) && (i13 <= 9))) {
              emlrtDynamicBoundsCheckR2012b(i13, 1, 9, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i13 = node->size[0];
      i14 = 1 + loop_ub;
      if (!((i14 >= 1) && (i14 <= i13))) {
        emlrtDynamicBoundsCheckR2012b(i14, 1, i13, &e_emlrtBCI, &b_st);
      }

      node->data[i14 - 1] = m;
    }

    i13 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i13, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i13 = 0; i13 < loop_ub; i13++) {
      Yfit->data[i13] = 0.0;
    }

    emxInit_int32_T(sp, &r13, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i13 = r13->size[0];
    r13->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r13, i13, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i13 = 0; i13 < loop_ub; i13++) {
      r13->data[i13] = i13;
    }

    emxInit_real_T(sp, &r14, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i13 = r14->size[0];
    r14->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r14, i13, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i13 = 0; i13 < loop_ub; i13++) {
      r14->data[i13] = obj_NodeMean[(int32_T)node->data[i13] - 1];
    }

    i13 = node->size[0];
    iv314[0] = r13->size[0];
    iv315[0] = i13;
    emlrtSubAssignSizeCheckR2012b(iv314, 1, iv315, 1, &b_emlrtECI, sp);
    loop_ub = r14->size[0];
    emxFree_real_T(&node);
    for (i13 = 0; i13 < loop_ub; i13++) {
      Yfit->data[r13->data[i13]] = r14->data[i13];
    }

    emxFree_real_T(&r14);
    emxFree_int32_T(&r13);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void h_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[427], const real_T obj_Children[854], const real_T obj_CutPoint[427],
  const real_T obj_NodeMean[427], const emxArray_real_T *X, emxArray_real_T
  *Yfit)
{
  emxArray_real_T *node;
  int32_T i15;
  int32_T loop_ub;
  int32_T i16;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r15;
  emxArray_real_T *r16;
  int32_T iv316[1];
  int32_T iv317[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i15 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i15, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &h_emlrtRSI;
    b_st.site = &i_emlrtRSI;
    i15 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i15, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i15 = 0; i15 < loop_ub; i15++) {
      node->data[i15] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i15 = X->size[0];
      i16 = loop_ub + 1;
      if (!((i16 >= 1) && (i16 <= i15))) {
        emlrtDynamicBoundsCheckR2012b(i16, 1, i15, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i15 = (int32_T)m;
        if (!((i15 >= 1) && (i15 <= 427))) {
          emlrtDynamicBoundsCheckR2012b(i15, 1, 427, &l_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i15 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i15 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i15 >= 1) && (i15 <= 9))) {
            emlrtDynamicBoundsCheckR2012b(i15, 1, 9, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i15 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i15 >= 1) && (i15 <= 9))) {
              emlrtDynamicBoundsCheckR2012b(i15, 1, 9, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i15 = node->size[0];
      i16 = 1 + loop_ub;
      if (!((i16 >= 1) && (i16 <= i15))) {
        emlrtDynamicBoundsCheckR2012b(i16, 1, i15, &e_emlrtBCI, &b_st);
      }

      node->data[i16 - 1] = m;
    }

    i15 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i15, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i15 = 0; i15 < loop_ub; i15++) {
      Yfit->data[i15] = 0.0;
    }

    emxInit_int32_T(sp, &r15, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i15 = r15->size[0];
    r15->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r15, i15, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i15 = 0; i15 < loop_ub; i15++) {
      r15->data[i15] = i15;
    }

    emxInit_real_T(sp, &r16, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i15 = r16->size[0];
    r16->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r16, i15, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i15 = 0; i15 < loop_ub; i15++) {
      r16->data[i15] = obj_NodeMean[(int32_T)node->data[i15] - 1];
    }

    i15 = node->size[0];
    iv316[0] = r15->size[0];
    iv317[0] = i15;
    emlrtSubAssignSizeCheckR2012b(iv316, 1, iv317, 1, &b_emlrtECI, sp);
    loop_ub = r16->size[0];
    emxFree_real_T(&node);
    for (i15 = 0; i15 < loop_ub; i15++) {
      Yfit->data[r15->data[i15]] = r16->data[i15];
    }

    emxFree_real_T(&r16);
    emxFree_int32_T(&r15);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void i_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[403], const real_T obj_Children[806], const real_T obj_CutPoint[403],
  const real_T obj_NodeMean[403], const emxArray_real_T *X, emxArray_real_T
  *Yfit)
{
  emxArray_real_T *node;
  int32_T i17;
  int32_T loop_ub;
  int32_T i18;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r17;
  emxArray_real_T *r18;
  int32_T iv318[1];
  int32_T iv319[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i17 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i17, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &h_emlrtRSI;
    b_st.site = &i_emlrtRSI;
    i17 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i17, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i17 = 0; i17 < loop_ub; i17++) {
      node->data[i17] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i17 = X->size[0];
      i18 = loop_ub + 1;
      if (!((i18 >= 1) && (i18 <= i17))) {
        emlrtDynamicBoundsCheckR2012b(i18, 1, i17, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i17 = (int32_T)m;
        if (!((i17 >= 1) && (i17 <= 403))) {
          emlrtDynamicBoundsCheckR2012b(i17, 1, 403, &m_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i17 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i17 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i17 >= 1) && (i17 <= 9))) {
            emlrtDynamicBoundsCheckR2012b(i17, 1, 9, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i17 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i17 >= 1) && (i17 <= 9))) {
              emlrtDynamicBoundsCheckR2012b(i17, 1, 9, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i17 = node->size[0];
      i18 = 1 + loop_ub;
      if (!((i18 >= 1) && (i18 <= i17))) {
        emlrtDynamicBoundsCheckR2012b(i18, 1, i17, &e_emlrtBCI, &b_st);
      }

      node->data[i18 - 1] = m;
    }

    i17 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i17, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i17 = 0; i17 < loop_ub; i17++) {
      Yfit->data[i17] = 0.0;
    }

    emxInit_int32_T(sp, &r17, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i17 = r17->size[0];
    r17->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r17, i17, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i17 = 0; i17 < loop_ub; i17++) {
      r17->data[i17] = i17;
    }

    emxInit_real_T(sp, &r18, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i17 = r18->size[0];
    r18->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r18, i17, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i17 = 0; i17 < loop_ub; i17++) {
      r18->data[i17] = obj_NodeMean[(int32_T)node->data[i17] - 1];
    }

    i17 = node->size[0];
    iv318[0] = r17->size[0];
    iv319[0] = i17;
    emlrtSubAssignSizeCheckR2012b(iv318, 1, iv319, 1, &b_emlrtECI, sp);
    loop_ub = r18->size[0];
    emxFree_real_T(&node);
    for (i17 = 0; i17 < loop_ub; i17++) {
      Yfit->data[r17->data[i17]] = r18->data[i17];
    }

    emxFree_real_T(&r18);
    emxFree_int32_T(&r17);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void j_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[439], const real_T obj_Children[878], const real_T obj_CutPoint[439],
  const real_T obj_NodeMean[439], const emxArray_real_T *X, emxArray_real_T
  *Yfit)
{
  emxArray_real_T *node;
  int32_T i19;
  int32_T loop_ub;
  int32_T i20;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r19;
  emxArray_real_T *r20;
  int32_T iv320[1];
  int32_T iv321[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i19 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i19, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &h_emlrtRSI;
    b_st.site = &i_emlrtRSI;
    i19 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i19, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i19 = 0; i19 < loop_ub; i19++) {
      node->data[i19] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i19 = X->size[0];
      i20 = loop_ub + 1;
      if (!((i20 >= 1) && (i20 <= i19))) {
        emlrtDynamicBoundsCheckR2012b(i20, 1, i19, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i19 = (int32_T)m;
        if (!((i19 >= 1) && (i19 <= 439))) {
          emlrtDynamicBoundsCheckR2012b(i19, 1, 439, &n_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i19 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i19 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i19 >= 1) && (i19 <= 9))) {
            emlrtDynamicBoundsCheckR2012b(i19, 1, 9, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i19 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i19 >= 1) && (i19 <= 9))) {
              emlrtDynamicBoundsCheckR2012b(i19, 1, 9, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i19 = node->size[0];
      i20 = 1 + loop_ub;
      if (!((i20 >= 1) && (i20 <= i19))) {
        emlrtDynamicBoundsCheckR2012b(i20, 1, i19, &e_emlrtBCI, &b_st);
      }

      node->data[i20 - 1] = m;
    }

    i19 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i19, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i19 = 0; i19 < loop_ub; i19++) {
      Yfit->data[i19] = 0.0;
    }

    emxInit_int32_T(sp, &r19, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i19 = r19->size[0];
    r19->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r19, i19, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i19 = 0; i19 < loop_ub; i19++) {
      r19->data[i19] = i19;
    }

    emxInit_real_T(sp, &r20, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i19 = r20->size[0];
    r20->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r20, i19, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i19 = 0; i19 < loop_ub; i19++) {
      r20->data[i19] = obj_NodeMean[(int32_T)node->data[i19] - 1];
    }

    i19 = node->size[0];
    iv320[0] = r19->size[0];
    iv321[0] = i19;
    emlrtSubAssignSizeCheckR2012b(iv320, 1, iv321, 1, &b_emlrtECI, sp);
    loop_ub = r20->size[0];
    emxFree_real_T(&node);
    for (i19 = 0; i19 < loop_ub; i19++) {
      Yfit->data[r19->data[i19]] = r20->data[i19];
    }

    emxFree_real_T(&r20);
    emxFree_int32_T(&r19);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void k_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[437], const real_T obj_Children[874], const real_T obj_CutPoint[437],
  const real_T obj_NodeMean[437], const emxArray_real_T *X, emxArray_real_T
  *Yfit)
{
  emxArray_real_T *node;
  int32_T i21;
  int32_T loop_ub;
  int32_T i22;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r21;
  emxArray_real_T *r22;
  int32_T iv322[1];
  int32_T iv323[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i21 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i21, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &h_emlrtRSI;
    b_st.site = &i_emlrtRSI;
    i21 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i21, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i21 = 0; i21 < loop_ub; i21++) {
      node->data[i21] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i21 = X->size[0];
      i22 = loop_ub + 1;
      if (!((i22 >= 1) && (i22 <= i21))) {
        emlrtDynamicBoundsCheckR2012b(i22, 1, i21, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i21 = (int32_T)m;
        if (!((i21 >= 1) && (i21 <= 437))) {
          emlrtDynamicBoundsCheckR2012b(i21, 1, 437, &o_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i21 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i21 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i21 >= 1) && (i21 <= 9))) {
            emlrtDynamicBoundsCheckR2012b(i21, 1, 9, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i21 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i21 >= 1) && (i21 <= 9))) {
              emlrtDynamicBoundsCheckR2012b(i21, 1, 9, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i21 = node->size[0];
      i22 = 1 + loop_ub;
      if (!((i22 >= 1) && (i22 <= i21))) {
        emlrtDynamicBoundsCheckR2012b(i22, 1, i21, &e_emlrtBCI, &b_st);
      }

      node->data[i22 - 1] = m;
    }

    i21 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i21, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i21 = 0; i21 < loop_ub; i21++) {
      Yfit->data[i21] = 0.0;
    }

    emxInit_int32_T(sp, &r21, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i21 = r21->size[0];
    r21->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r21, i21, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i21 = 0; i21 < loop_ub; i21++) {
      r21->data[i21] = i21;
    }

    emxInit_real_T(sp, &r22, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i21 = r22->size[0];
    r22->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r22, i21, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i21 = 0; i21 < loop_ub; i21++) {
      r22->data[i21] = obj_NodeMean[(int32_T)node->data[i21] - 1];
    }

    i21 = node->size[0];
    iv322[0] = r21->size[0];
    iv323[0] = i21;
    emlrtSubAssignSizeCheckR2012b(iv322, 1, iv323, 1, &b_emlrtECI, sp);
    loop_ub = r22->size[0];
    emxFree_real_T(&node);
    for (i21 = 0; i21 < loop_ub; i21++) {
      Yfit->data[r21->data[i21]] = r22->data[i21];
    }

    emxFree_real_T(&r22);
    emxFree_int32_T(&r21);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void l_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[421], const real_T obj_Children[842], const real_T obj_CutPoint[421],
  const real_T obj_NodeMean[421], const emxArray_real_T *X, emxArray_real_T
  *Yfit)
{
  emxArray_real_T *node;
  int32_T i23;
  int32_T loop_ub;
  int32_T i24;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r23;
  emxArray_real_T *r24;
  int32_T iv324[1];
  int32_T iv325[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i23 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i23, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &h_emlrtRSI;
    b_st.site = &i_emlrtRSI;
    i23 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i23, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i23 = 0; i23 < loop_ub; i23++) {
      node->data[i23] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i23 = X->size[0];
      i24 = loop_ub + 1;
      if (!((i24 >= 1) && (i24 <= i23))) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i23 = (int32_T)m;
        if (!((i23 >= 1) && (i23 <= 421))) {
          emlrtDynamicBoundsCheckR2012b(i23, 1, 421, &p_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i23 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i23 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i23 >= 1) && (i23 <= 9))) {
            emlrtDynamicBoundsCheckR2012b(i23, 1, 9, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i23 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i23 >= 1) && (i23 <= 9))) {
              emlrtDynamicBoundsCheckR2012b(i23, 1, 9, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i23 = node->size[0];
      i24 = 1 + loop_ub;
      if (!((i24 >= 1) && (i24 <= i23))) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &e_emlrtBCI, &b_st);
      }

      node->data[i24 - 1] = m;
    }

    i23 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i23, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i23 = 0; i23 < loop_ub; i23++) {
      Yfit->data[i23] = 0.0;
    }

    emxInit_int32_T(sp, &r23, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i23 = r23->size[0];
    r23->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r23, i23, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i23 = 0; i23 < loop_ub; i23++) {
      r23->data[i23] = i23;
    }

    emxInit_real_T(sp, &r24, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i23 = r24->size[0];
    r24->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r24, i23, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i23 = 0; i23 < loop_ub; i23++) {
      r24->data[i23] = obj_NodeMean[(int32_T)node->data[i23] - 1];
    }

    i23 = node->size[0];
    iv324[0] = r23->size[0];
    iv325[0] = i23;
    emlrtSubAssignSizeCheckR2012b(iv324, 1, iv325, 1, &b_emlrtECI, sp);
    loop_ub = r24->size[0];
    emxFree_real_T(&node);
    for (i23 = 0; i23 < loop_ub; i23++) {
      Yfit->data[r23->data[i23]] = r24->data[i23];
    }

    emxFree_real_T(&r24);
    emxFree_int32_T(&r23);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void m_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[429], const real_T obj_Children[858], const real_T obj_CutPoint[429],
  const real_T obj_NodeMean[429], const emxArray_real_T *X, emxArray_real_T
  *Yfit)
{
  emxArray_real_T *node;
  int32_T i25;
  int32_T loop_ub;
  int32_T i26;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r25;
  emxArray_real_T *r26;
  int32_T iv326[1];
  int32_T iv327[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i25 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i25, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &h_emlrtRSI;
    b_st.site = &i_emlrtRSI;
    i25 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i25, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i25 = 0; i25 < loop_ub; i25++) {
      node->data[i25] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i25 = X->size[0];
      i26 = loop_ub + 1;
      if (!((i26 >= 1) && (i26 <= i25))) {
        emlrtDynamicBoundsCheckR2012b(i26, 1, i25, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i25 = (int32_T)m;
        if (!((i25 >= 1) && (i25 <= 429))) {
          emlrtDynamicBoundsCheckR2012b(i25, 1, 429, &q_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i25 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i25 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i25 >= 1) && (i25 <= 9))) {
            emlrtDynamicBoundsCheckR2012b(i25, 1, 9, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i25 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i25 >= 1) && (i25 <= 9))) {
              emlrtDynamicBoundsCheckR2012b(i25, 1, 9, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i25 = node->size[0];
      i26 = 1 + loop_ub;
      if (!((i26 >= 1) && (i26 <= i25))) {
        emlrtDynamicBoundsCheckR2012b(i26, 1, i25, &e_emlrtBCI, &b_st);
      }

      node->data[i26 - 1] = m;
    }

    i25 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i25, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i25 = 0; i25 < loop_ub; i25++) {
      Yfit->data[i25] = 0.0;
    }

    emxInit_int32_T(sp, &r25, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i25 = r25->size[0];
    r25->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r25, i25, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i25 = 0; i25 < loop_ub; i25++) {
      r25->data[i25] = i25;
    }

    emxInit_real_T(sp, &r26, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i25 = r26->size[0];
    r26->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r26, i25, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i25 = 0; i25 < loop_ub; i25++) {
      r26->data[i25] = obj_NodeMean[(int32_T)node->data[i25] - 1];
    }

    i25 = node->size[0];
    iv326[0] = r25->size[0];
    iv327[0] = i25;
    emlrtSubAssignSizeCheckR2012b(iv326, 1, iv327, 1, &b_emlrtECI, sp);
    loop_ub = r26->size[0];
    emxFree_real_T(&node);
    for (i25 = 0; i25 < loop_ub; i25++) {
      Yfit->data[r25->data[i25]] = r26->data[i25];
    }

    emxFree_real_T(&r26);
    emxFree_int32_T(&r25);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void n_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[415], const real_T obj_Children[830], const real_T obj_CutPoint[415],
  const real_T obj_NodeMean[415], const emxArray_real_T *X, emxArray_real_T
  *Yfit)
{
  emxArray_real_T *node;
  int32_T i27;
  int32_T loop_ub;
  int32_T i28;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r27;
  emxArray_real_T *r28;
  int32_T iv328[1];
  int32_T iv329[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i27 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i27, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &h_emlrtRSI;
    b_st.site = &i_emlrtRSI;
    i27 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i27, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i27 = 0; i27 < loop_ub; i27++) {
      node->data[i27] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i27 = X->size[0];
      i28 = loop_ub + 1;
      if (!((i28 >= 1) && (i28 <= i27))) {
        emlrtDynamicBoundsCheckR2012b(i28, 1, i27, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i27 = (int32_T)m;
        if (!((i27 >= 1) && (i27 <= 415))) {
          emlrtDynamicBoundsCheckR2012b(i27, 1, 415, &r_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i27 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i27 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i27 >= 1) && (i27 <= 9))) {
            emlrtDynamicBoundsCheckR2012b(i27, 1, 9, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i27 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i27 >= 1) && (i27 <= 9))) {
              emlrtDynamicBoundsCheckR2012b(i27, 1, 9, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i27 = node->size[0];
      i28 = 1 + loop_ub;
      if (!((i28 >= 1) && (i28 <= i27))) {
        emlrtDynamicBoundsCheckR2012b(i28, 1, i27, &e_emlrtBCI, &b_st);
      }

      node->data[i28 - 1] = m;
    }

    i27 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i27, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i27 = 0; i27 < loop_ub; i27++) {
      Yfit->data[i27] = 0.0;
    }

    emxInit_int32_T(sp, &r27, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i27 = r27->size[0];
    r27->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r27, i27, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i27 = 0; i27 < loop_ub; i27++) {
      r27->data[i27] = i27;
    }

    emxInit_real_T(sp, &r28, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i27 = r28->size[0];
    r28->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r28, i27, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i27 = 0; i27 < loop_ub; i27++) {
      r28->data[i27] = obj_NodeMean[(int32_T)node->data[i27] - 1];
    }

    i27 = node->size[0];
    iv328[0] = r27->size[0];
    iv329[0] = i27;
    emlrtSubAssignSizeCheckR2012b(iv328, 1, iv329, 1, &b_emlrtECI, sp);
    loop_ub = r28->size[0];
    emxFree_real_T(&node);
    for (i27 = 0; i27 < loop_ub; i27++) {
      Yfit->data[r27->data[i27]] = r28->data[i27];
    }

    emxFree_real_T(&r28);
    emxFree_int32_T(&r27);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void o_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[445], const real_T obj_Children[890], const real_T obj_CutPoint[445],
  const real_T obj_NodeMean[445], const emxArray_real_T *X, emxArray_real_T
  *Yfit)
{
  emxArray_real_T *node;
  int32_T i29;
  int32_T loop_ub;
  int32_T i30;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r29;
  emxArray_real_T *r30;
  int32_T iv330[1];
  int32_T iv331[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i29 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i29, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &h_emlrtRSI;
    b_st.site = &i_emlrtRSI;
    i29 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i29, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i29 = 0; i29 < loop_ub; i29++) {
      node->data[i29] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i29 = X->size[0];
      i30 = loop_ub + 1;
      if (!((i30 >= 1) && (i30 <= i29))) {
        emlrtDynamicBoundsCheckR2012b(i30, 1, i29, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i29 = (int32_T)m;
        if (!((i29 >= 1) && (i29 <= 445))) {
          emlrtDynamicBoundsCheckR2012b(i29, 1, 445, &s_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i29 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i29 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i29 >= 1) && (i29 <= 9))) {
            emlrtDynamicBoundsCheckR2012b(i29, 1, 9, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i29 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i29 >= 1) && (i29 <= 9))) {
              emlrtDynamicBoundsCheckR2012b(i29, 1, 9, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i29 = node->size[0];
      i30 = 1 + loop_ub;
      if (!((i30 >= 1) && (i30 <= i29))) {
        emlrtDynamicBoundsCheckR2012b(i30, 1, i29, &e_emlrtBCI, &b_st);
      }

      node->data[i30 - 1] = m;
    }

    i29 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i29, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i29 = 0; i29 < loop_ub; i29++) {
      Yfit->data[i29] = 0.0;
    }

    emxInit_int32_T(sp, &r29, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i29 = r29->size[0];
    r29->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r29, i29, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i29 = 0; i29 < loop_ub; i29++) {
      r29->data[i29] = i29;
    }

    emxInit_real_T(sp, &r30, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i29 = r30->size[0];
    r30->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r30, i29, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i29 = 0; i29 < loop_ub; i29++) {
      r30->data[i29] = obj_NodeMean[(int32_T)node->data[i29] - 1];
    }

    i29 = node->size[0];
    iv330[0] = r29->size[0];
    iv331[0] = i29;
    emlrtSubAssignSizeCheckR2012b(iv330, 1, iv331, 1, &b_emlrtECI, sp);
    loop_ub = r30->size[0];
    emxFree_real_T(&node);
    for (i29 = 0; i29 < loop_ub; i29++) {
      Yfit->data[r29->data[i29]] = r30->data[i29];
    }

    emxFree_real_T(&r30);
    emxFree_int32_T(&r29);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void p_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[411], const real_T obj_Children[822], const real_T obj_CutPoint[411],
  const real_T obj_NodeMean[411], const emxArray_real_T *X, emxArray_real_T
  *Yfit)
{
  emxArray_real_T *node;
  int32_T i31;
  int32_T loop_ub;
  int32_T i32;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r31;
  emxArray_real_T *r32;
  int32_T iv332[1];
  int32_T iv333[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i31 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i31, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &h_emlrtRSI;
    b_st.site = &i_emlrtRSI;
    i31 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i31, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i31 = 0; i31 < loop_ub; i31++) {
      node->data[i31] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i31 = X->size[0];
      i32 = loop_ub + 1;
      if (!((i32 >= 1) && (i32 <= i31))) {
        emlrtDynamicBoundsCheckR2012b(i32, 1, i31, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i31 = (int32_T)m;
        if (!((i31 >= 1) && (i31 <= 411))) {
          emlrtDynamicBoundsCheckR2012b(i31, 1, 411, &t_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i31 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i31 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i31 >= 1) && (i31 <= 9))) {
            emlrtDynamicBoundsCheckR2012b(i31, 1, 9, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i31 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i31 >= 1) && (i31 <= 9))) {
              emlrtDynamicBoundsCheckR2012b(i31, 1, 9, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i31 = node->size[0];
      i32 = 1 + loop_ub;
      if (!((i32 >= 1) && (i32 <= i31))) {
        emlrtDynamicBoundsCheckR2012b(i32, 1, i31, &e_emlrtBCI, &b_st);
      }

      node->data[i32 - 1] = m;
    }

    i31 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i31, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i31 = 0; i31 < loop_ub; i31++) {
      Yfit->data[i31] = 0.0;
    }

    emxInit_int32_T(sp, &r31, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i31 = r31->size[0];
    r31->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r31, i31, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i31 = 0; i31 < loop_ub; i31++) {
      r31->data[i31] = i31;
    }

    emxInit_real_T(sp, &r32, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i31 = r32->size[0];
    r32->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r32, i31, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i31 = 0; i31 < loop_ub; i31++) {
      r32->data[i31] = obj_NodeMean[(int32_T)node->data[i31] - 1];
    }

    i31 = node->size[0];
    iv332[0] = r31->size[0];
    iv333[0] = i31;
    emlrtSubAssignSizeCheckR2012b(iv332, 1, iv333, 1, &b_emlrtECI, sp);
    loop_ub = r32->size[0];
    emxFree_real_T(&node);
    for (i31 = 0; i31 < loop_ub; i31++) {
      Yfit->data[r31->data[i31]] = r32->data[i31];
    }

    emxFree_real_T(&r32);
    emxFree_int32_T(&r31);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void q_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[407], const real_T obj_Children[814], const real_T obj_CutPoint[407],
  const real_T obj_NodeMean[407], const emxArray_real_T *X, emxArray_real_T
  *Yfit)
{
  emxArray_real_T *node;
  int32_T i33;
  int32_T loop_ub;
  int32_T i34;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r33;
  emxArray_real_T *r34;
  int32_T iv334[1];
  int32_T iv335[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i33 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i33, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &h_emlrtRSI;
    b_st.site = &i_emlrtRSI;
    i33 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i33, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i33 = 0; i33 < loop_ub; i33++) {
      node->data[i33] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i33 = X->size[0];
      i34 = loop_ub + 1;
      if (!((i34 >= 1) && (i34 <= i33))) {
        emlrtDynamicBoundsCheckR2012b(i34, 1, i33, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i33 = (int32_T)m;
        if (!((i33 >= 1) && (i33 <= 407))) {
          emlrtDynamicBoundsCheckR2012b(i33, 1, 407, &u_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i33 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i33 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i33 >= 1) && (i33 <= 9))) {
            emlrtDynamicBoundsCheckR2012b(i33, 1, 9, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i33 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i33 >= 1) && (i33 <= 9))) {
              emlrtDynamicBoundsCheckR2012b(i33, 1, 9, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i33 = node->size[0];
      i34 = 1 + loop_ub;
      if (!((i34 >= 1) && (i34 <= i33))) {
        emlrtDynamicBoundsCheckR2012b(i34, 1, i33, &e_emlrtBCI, &b_st);
      }

      node->data[i34 - 1] = m;
    }

    i33 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i33, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i33 = 0; i33 < loop_ub; i33++) {
      Yfit->data[i33] = 0.0;
    }

    emxInit_int32_T(sp, &r33, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i33 = r33->size[0];
    r33->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r33, i33, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i33 = 0; i33 < loop_ub; i33++) {
      r33->data[i33] = i33;
    }

    emxInit_real_T(sp, &r34, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i33 = r34->size[0];
    r34->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r34, i33, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i33 = 0; i33 < loop_ub; i33++) {
      r34->data[i33] = obj_NodeMean[(int32_T)node->data[i33] - 1];
    }

    i33 = node->size[0];
    iv334[0] = r33->size[0];
    iv335[0] = i33;
    emlrtSubAssignSizeCheckR2012b(iv334, 1, iv335, 1, &b_emlrtECI, sp);
    loop_ub = r34->size[0];
    emxFree_real_T(&node);
    for (i33 = 0; i33 < loop_ub; i33++) {
      Yfit->data[r33->data[i33]] = r34->data[i33];
    }

    emxFree_real_T(&r34);
    emxFree_int32_T(&r33);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void r_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[399], const real_T obj_Children[798], const real_T obj_CutPoint[399],
  const real_T obj_NodeMean[399], const emxArray_real_T *X, emxArray_real_T
  *Yfit)
{
  emxArray_real_T *node;
  int32_T i35;
  int32_T loop_ub;
  int32_T i36;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r35;
  emxArray_real_T *r36;
  int32_T iv336[1];
  int32_T iv337[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i35 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i35, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &h_emlrtRSI;
    b_st.site = &i_emlrtRSI;
    i35 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i35, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i35 = 0; i35 < loop_ub; i35++) {
      node->data[i35] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i35 = X->size[0];
      i36 = loop_ub + 1;
      if (!((i36 >= 1) && (i36 <= i35))) {
        emlrtDynamicBoundsCheckR2012b(i36, 1, i35, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i35 = (int32_T)m;
        if (!((i35 >= 1) && (i35 <= 399))) {
          emlrtDynamicBoundsCheckR2012b(i35, 1, 399, &v_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i35 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i35 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i35 >= 1) && (i35 <= 9))) {
            emlrtDynamicBoundsCheckR2012b(i35, 1, 9, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i35 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i35 >= 1) && (i35 <= 9))) {
              emlrtDynamicBoundsCheckR2012b(i35, 1, 9, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i35 = node->size[0];
      i36 = 1 + loop_ub;
      if (!((i36 >= 1) && (i36 <= i35))) {
        emlrtDynamicBoundsCheckR2012b(i36, 1, i35, &e_emlrtBCI, &b_st);
      }

      node->data[i36 - 1] = m;
    }

    i35 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i35, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i35 = 0; i35 < loop_ub; i35++) {
      Yfit->data[i35] = 0.0;
    }

    emxInit_int32_T(sp, &r35, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i35 = r35->size[0];
    r35->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r35, i35, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i35 = 0; i35 < loop_ub; i35++) {
      r35->data[i35] = i35;
    }

    emxInit_real_T(sp, &r36, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i35 = r36->size[0];
    r36->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r36, i35, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i35 = 0; i35 < loop_ub; i35++) {
      r36->data[i35] = obj_NodeMean[(int32_T)node->data[i35] - 1];
    }

    i35 = node->size[0];
    iv336[0] = r35->size[0];
    iv337[0] = i35;
    emlrtSubAssignSizeCheckR2012b(iv336, 1, iv337, 1, &b_emlrtECI, sp);
    loop_ub = r36->size[0];
    emxFree_real_T(&node);
    for (i35 = 0; i35 < loop_ub; i35++) {
      Yfit->data[r35->data[i35]] = r36->data[i35];
    }

    emxFree_real_T(&r36);
    emxFree_int32_T(&r35);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void s_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[449], const real_T obj_Children[898], const real_T obj_CutPoint[449],
  const real_T obj_NodeMean[449], const emxArray_real_T *X, emxArray_real_T
  *Yfit)
{
  emxArray_real_T *node;
  int32_T i37;
  int32_T loop_ub;
  int32_T i38;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r37;
  emxArray_real_T *r38;
  int32_T iv338[1];
  int32_T iv339[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i37 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i37, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &h_emlrtRSI;
    b_st.site = &i_emlrtRSI;
    i37 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i37, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i37 = 0; i37 < loop_ub; i37++) {
      node->data[i37] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i37 = X->size[0];
      i38 = loop_ub + 1;
      if (!((i38 >= 1) && (i38 <= i37))) {
        emlrtDynamicBoundsCheckR2012b(i38, 1, i37, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i37 = (int32_T)m;
        if (!((i37 >= 1) && (i37 <= 449))) {
          emlrtDynamicBoundsCheckR2012b(i37, 1, 449, &w_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i37 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i37 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i37 >= 1) && (i37 <= 9))) {
            emlrtDynamicBoundsCheckR2012b(i37, 1, 9, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i37 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i37 >= 1) && (i37 <= 9))) {
              emlrtDynamicBoundsCheckR2012b(i37, 1, 9, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i37 = node->size[0];
      i38 = 1 + loop_ub;
      if (!((i38 >= 1) && (i38 <= i37))) {
        emlrtDynamicBoundsCheckR2012b(i38, 1, i37, &e_emlrtBCI, &b_st);
      }

      node->data[i38 - 1] = m;
    }

    i37 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i37, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i37 = 0; i37 < loop_ub; i37++) {
      Yfit->data[i37] = 0.0;
    }

    emxInit_int32_T(sp, &r37, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i37 = r37->size[0];
    r37->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r37, i37, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i37 = 0; i37 < loop_ub; i37++) {
      r37->data[i37] = i37;
    }

    emxInit_real_T(sp, &r38, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i37 = r38->size[0];
    r38->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r38, i37, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i37 = 0; i37 < loop_ub; i37++) {
      r38->data[i37] = obj_NodeMean[(int32_T)node->data[i37] - 1];
    }

    i37 = node->size[0];
    iv338[0] = r37->size[0];
    iv339[0] = i37;
    emlrtSubAssignSizeCheckR2012b(iv338, 1, iv339, 1, &b_emlrtECI, sp);
    loop_ub = r38->size[0];
    emxFree_real_T(&node);
    for (i37 = 0; i37 < loop_ub; i37++) {
      Yfit->data[r37->data[i37]] = r38->data[i37];
    }

    emxFree_real_T(&r38);
    emxFree_int32_T(&r37);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void t_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[417], const real_T obj_Children[834], const real_T obj_CutPoint[417],
  const real_T obj_NodeMean[417], const emxArray_real_T *X, emxArray_real_T
  *Yfit)
{
  emxArray_real_T *node;
  int32_T i39;
  int32_T loop_ub;
  int32_T i40;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r39;
  emxArray_real_T *r40;
  int32_T iv340[1];
  int32_T iv341[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i39 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i39, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &h_emlrtRSI;
    b_st.site = &i_emlrtRSI;
    i39 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i39, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i39 = 0; i39 < loop_ub; i39++) {
      node->data[i39] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i39 = X->size[0];
      i40 = loop_ub + 1;
      if (!((i40 >= 1) && (i40 <= i39))) {
        emlrtDynamicBoundsCheckR2012b(i40, 1, i39, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i39 = (int32_T)m;
        if (!((i39 >= 1) && (i39 <= 417))) {
          emlrtDynamicBoundsCheckR2012b(i39, 1, 417, &x_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i39 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i39 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i39 >= 1) && (i39 <= 9))) {
            emlrtDynamicBoundsCheckR2012b(i39, 1, 9, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i39 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i39 >= 1) && (i39 <= 9))) {
              emlrtDynamicBoundsCheckR2012b(i39, 1, 9, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i39 = node->size[0];
      i40 = 1 + loop_ub;
      if (!((i40 >= 1) && (i40 <= i39))) {
        emlrtDynamicBoundsCheckR2012b(i40, 1, i39, &e_emlrtBCI, &b_st);
      }

      node->data[i40 - 1] = m;
    }

    i39 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i39, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i39 = 0; i39 < loop_ub; i39++) {
      Yfit->data[i39] = 0.0;
    }

    emxInit_int32_T(sp, &r39, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i39 = r39->size[0];
    r39->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r39, i39, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i39 = 0; i39 < loop_ub; i39++) {
      r39->data[i39] = i39;
    }

    emxInit_real_T(sp, &r40, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i39 = r40->size[0];
    r40->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r40, i39, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i39 = 0; i39 < loop_ub; i39++) {
      r40->data[i39] = obj_NodeMean[(int32_T)node->data[i39] - 1];
    }

    i39 = node->size[0];
    iv340[0] = r39->size[0];
    iv341[0] = i39;
    emlrtSubAssignSizeCheckR2012b(iv340, 1, iv341, 1, &b_emlrtECI, sp);
    loop_ub = r40->size[0];
    emxFree_real_T(&node);
    for (i39 = 0; i39 < loop_ub; i39++) {
      Yfit->data[r39->data[i39]] = r40->data[i39];
    }

    emxFree_real_T(&r40);
    emxFree_int32_T(&r39);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void u_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[467], const real_T obj_Children[934], const real_T obj_CutPoint[467],
  const real_T obj_NodeMean[467], const emxArray_real_T *X, emxArray_real_T
  *Yfit)
{
  emxArray_real_T *node;
  int32_T i41;
  int32_T loop_ub;
  int32_T i42;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r41;
  emxArray_real_T *r42;
  int32_T iv342[1];
  int32_T iv343[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i41 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i41, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &h_emlrtRSI;
    b_st.site = &i_emlrtRSI;
    i41 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i41, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i41 = 0; i41 < loop_ub; i41++) {
      node->data[i41] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i41 = X->size[0];
      i42 = loop_ub + 1;
      if (!((i42 >= 1) && (i42 <= i41))) {
        emlrtDynamicBoundsCheckR2012b(i42, 1, i41, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i41 = (int32_T)m;
        if (!((i41 >= 1) && (i41 <= 467))) {
          emlrtDynamicBoundsCheckR2012b(i41, 1, 467, &y_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i41 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i41 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i41 >= 1) && (i41 <= 9))) {
            emlrtDynamicBoundsCheckR2012b(i41, 1, 9, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i41 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i41 >= 1) && (i41 <= 9))) {
              emlrtDynamicBoundsCheckR2012b(i41, 1, 9, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i41 = node->size[0];
      i42 = 1 + loop_ub;
      if (!((i42 >= 1) && (i42 <= i41))) {
        emlrtDynamicBoundsCheckR2012b(i42, 1, i41, &e_emlrtBCI, &b_st);
      }

      node->data[i42 - 1] = m;
    }

    i41 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i41, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i41 = 0; i41 < loop_ub; i41++) {
      Yfit->data[i41] = 0.0;
    }

    emxInit_int32_T(sp, &r41, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i41 = r41->size[0];
    r41->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r41, i41, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i41 = 0; i41 < loop_ub; i41++) {
      r41->data[i41] = i41;
    }

    emxInit_real_T(sp, &r42, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i41 = r42->size[0];
    r42->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r42, i41, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i41 = 0; i41 < loop_ub; i41++) {
      r42->data[i41] = obj_NodeMean[(int32_T)node->data[i41] - 1];
    }

    i41 = node->size[0];
    iv342[0] = r41->size[0];
    iv343[0] = i41;
    emlrtSubAssignSizeCheckR2012b(iv342, 1, iv343, 1, &b_emlrtECI, sp);
    loop_ub = r42->size[0];
    emxFree_real_T(&node);
    for (i41 = 0; i41 < loop_ub; i41++) {
      Yfit->data[r41->data[i41]] = r42->data[i41];
    }

    emxFree_real_T(&r42);
    emxFree_int32_T(&r41);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (CompactRegressionTree.c) */
