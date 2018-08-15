/*
 * File: CompactRegressionTree.c
 *
 * MATLAB Coder version            : 3.3
 * C/C++ source code generated on  : 30-Jul-2018 16:28:19
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "predictRF_Y1.h"
#include "CompactRegressionTree.h"
#include "predictRF_Y1_emxutil.h"

/* Function Definitions */

/*
 * Arguments    : const double obj_CutVar[551]
 *                const double obj_Children[1102]
 *                const double obj_CutPoint[551]
 *                const double obj_NodeMean[551]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void CompactRegressionTree_predict(const double obj_CutVar[551], const double
  obj_Children[1102], const double obj_CutPoint[551], const double obj_NodeMean
  [551], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r0;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r0, 1);
    loop_ub = node->size[0];
    n = r0->size[0];
    r0->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r0, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r0->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r0->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r0->data[n];
    }

    emxFree_real_T(&r0);
  }
}

/*
 * Arguments    : const double obj_CutVar[519]
 *                const double obj_Children[1038]
 *                const double obj_CutPoint[519]
 *                const double obj_NodeMean[519]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void ab_CompactRegressionTree_predic(const double obj_CutVar[519], const double
  obj_Children[1038], const double obj_CutPoint[519], const double obj_NodeMean
  [519], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r25;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r25, 1);
    loop_ub = node->size[0];
    n = r25->size[0];
    r25->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r25, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r25->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r25->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r25->data[n];
    }

    emxFree_real_T(&r25);
  }
}

/*
 * Arguments    : const double obj_CutVar[553]
 *                const double obj_Children[1106]
 *                const double obj_CutPoint[553]
 *                const double obj_NodeMean[553]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void b_CompactRegressionTree_predict(const double obj_CutVar[553], const double
  obj_Children[1106], const double obj_CutPoint[553], const double obj_NodeMean
  [553], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r1;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r1, 1);
    loop_ub = node->size[0];
    n = r1->size[0];
    r1->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r1, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r1->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r1->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r1->data[n];
    }

    emxFree_real_T(&r1);
  }
}

/*
 * Arguments    : const double obj_CutVar[569]
 *                const double obj_Children[1138]
 *                const double obj_CutPoint[569]
 *                const double obj_NodeMean[569]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void bb_CompactRegressionTree_predic(const double obj_CutVar[569], const double
  obj_Children[1138], const double obj_CutPoint[569], const double obj_NodeMean
  [569], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r26;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r26, 1);
    loop_ub = node->size[0];
    n = r26->size[0];
    r26->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r26, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r26->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r26->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r26->data[n];
    }

    emxFree_real_T(&r26);
  }
}

/*
 * Arguments    : const double obj_CutVar[537]
 *                const double obj_Children[1074]
 *                const double obj_CutPoint[537]
 *                const double obj_NodeMean[537]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void c_CompactRegressionTree_predict(const double obj_CutVar[537], const double
  obj_Children[1074], const double obj_CutPoint[537], const double obj_NodeMean
  [537], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r2;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r2, 1);
    loop_ub = node->size[0];
    n = r2->size[0];
    r2->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r2, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r2->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r2->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r2->data[n];
    }

    emxFree_real_T(&r2);
  }
}

/*
 * Arguments    : const double obj_CutVar[581]
 *                const double obj_Children[1162]
 *                const double obj_CutPoint[581]
 *                const double obj_NodeMean[581]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void cb_CompactRegressionTree_predic(const double obj_CutVar[581], const double
  obj_Children[1162], const double obj_CutPoint[581], const double obj_NodeMean
  [581], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r27;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r27, 1);
    loop_ub = node->size[0];
    n = r27->size[0];
    r27->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r27, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r27->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r27->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r27->data[n];
    }

    emxFree_real_T(&r27);
  }
}

/*
 * Arguments    : const double obj_CutVar[549]
 *                const double obj_Children[1098]
 *                const double obj_CutPoint[549]
 *                const double obj_NodeMean[549]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void d_CompactRegressionTree_predict(const double obj_CutVar[549], const double
  obj_Children[1098], const double obj_CutPoint[549], const double obj_NodeMean
  [549], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r3;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r3, 1);
    loop_ub = node->size[0];
    n = r3->size[0];
    r3->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r3, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r3->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r3->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r3->data[n];
    }

    emxFree_real_T(&r3);
  }
}

/*
 * Arguments    : const double obj_CutVar[523]
 *                const double obj_Children[1046]
 *                const double obj_CutPoint[523]
 *                const double obj_NodeMean[523]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void db_CompactRegressionTree_predic(const double obj_CutVar[523], const double
  obj_Children[1046], const double obj_CutPoint[523], const double obj_NodeMean
  [523], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r28;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r28, 1);
    loop_ub = node->size[0];
    n = r28->size[0];
    r28->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r28, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r28->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r28->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r28->data[n];
    }

    emxFree_real_T(&r28);
  }
}

/*
 * Arguments    : const double obj_CutVar[557]
 *                const double obj_Children[1114]
 *                const double obj_CutPoint[557]
 *                const double obj_NodeMean[557]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void e_CompactRegressionTree_predict(const double obj_CutVar[557], const double
  obj_Children[1114], const double obj_CutPoint[557], const double obj_NodeMean
  [557], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r4;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r4, 1);
    loop_ub = node->size[0];
    n = r4->size[0];
    r4->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r4, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r4->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r4->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r4->data[n];
    }

    emxFree_real_T(&r4);
  }
}

/*
 * Arguments    : const double obj_CutVar[595]
 *                const double obj_Children[1190]
 *                const double obj_CutPoint[595]
 *                const double obj_NodeMean[595]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void eb_CompactRegressionTree_predic(const double obj_CutVar[595], const double
  obj_Children[1190], const double obj_CutPoint[595], const double obj_NodeMean
  [595], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r29;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r29, 1);
    loop_ub = node->size[0];
    n = r29->size[0];
    r29->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r29, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r29->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r29->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r29->data[n];
    }

    emxFree_real_T(&r29);
  }
}

/*
 * Arguments    : const double obj_CutVar[535]
 *                const double obj_Children[1070]
 *                const double obj_CutPoint[535]
 *                const double obj_NodeMean[535]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void f_CompactRegressionTree_predict(const double obj_CutVar[535], const double
  obj_Children[1070], const double obj_CutPoint[535], const double obj_NodeMean
  [535], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r5;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r5, 1);
    loop_ub = node->size[0];
    n = r5->size[0];
    r5->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r5, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r5->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r5->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r5->data[n];
    }

    emxFree_real_T(&r5);
  }
}

/*
 * Arguments    : const double obj_CutVar[531]
 *                const double obj_Children[1062]
 *                const double obj_CutPoint[531]
 *                const double obj_NodeMean[531]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void fb_CompactRegressionTree_predic(const double obj_CutVar[531], const double
  obj_Children[1062], const double obj_CutPoint[531], const double obj_NodeMean
  [531], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r30;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r30, 1);
    loop_ub = node->size[0];
    n = r30->size[0];
    r30->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r30, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r30->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r30->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r30->data[n];
    }

    emxFree_real_T(&r30);
  }
}

/*
 * Arguments    : const double obj_CutVar[555]
 *                const double obj_Children[1110]
 *                const double obj_CutPoint[555]
 *                const double obj_NodeMean[555]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void g_CompactRegressionTree_predict(const double obj_CutVar[555], const double
  obj_Children[1110], const double obj_CutPoint[555], const double obj_NodeMean
  [555], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r6;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r6, 1);
    loop_ub = node->size[0];
    n = r6->size[0];
    r6->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r6, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r6->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r6->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r6->data[n];
    }

    emxFree_real_T(&r6);
  }
}

/*
 * Arguments    : const double obj_CutVar[485]
 *                const double obj_Children[970]
 *                const double obj_CutPoint[485]
 *                const double obj_NodeMean[485]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void gb_CompactRegressionTree_predic(const double obj_CutVar[485], const double
  obj_Children[970], const double obj_CutPoint[485], const double obj_NodeMean
  [485], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r31;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r31, 1);
    loop_ub = node->size[0];
    n = r31->size[0];
    r31->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r31, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r31->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r31->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r31->data[n];
    }

    emxFree_real_T(&r31);
  }
}

/*
 * Arguments    : const double obj_CutVar[545]
 *                const double obj_Children[1090]
 *                const double obj_CutPoint[545]
 *                const double obj_NodeMean[545]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void h_CompactRegressionTree_predict(const double obj_CutVar[545], const double
  obj_Children[1090], const double obj_CutPoint[545], const double obj_NodeMean
  [545], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r7;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r7, 1);
    loop_ub = node->size[0];
    n = r7->size[0];
    r7->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r7, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r7->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r7->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r7->data[n];
    }

    emxFree_real_T(&r7);
  }
}

/*
 * Arguments    : const double obj_CutVar[591]
 *                const double obj_Children[1182]
 *                const double obj_CutPoint[591]
 *                const double obj_NodeMean[591]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void hb_CompactRegressionTree_predic(const double obj_CutVar[591], const double
  obj_Children[1182], const double obj_CutPoint[591], const double obj_NodeMean
  [591], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r32;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r32, 1);
    loop_ub = node->size[0];
    n = r32->size[0];
    r32->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r32, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r32->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r32->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r32->data[n];
    }

    emxFree_real_T(&r32);
  }
}

/*
 * Arguments    : const double obj_CutVar[639]
 *                const double obj_Children[1278]
 *                const double obj_CutPoint[639]
 *                const double obj_NodeMean[639]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void i_CompactRegressionTree_predict(const double obj_CutVar[639], const double
  obj_Children[1278], const double obj_CutPoint[639], const double obj_NodeMean
  [639], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r8;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r8, 1);
    loop_ub = node->size[0];
    n = r8->size[0];
    r8->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r8, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r8->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r8->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r8->data[n];
    }

    emxFree_real_T(&r8);
  }
}

/*
 * Arguments    : const double obj_CutVar[525]
 *                const double obj_Children[1050]
 *                const double obj_CutPoint[525]
 *                const double obj_NodeMean[525]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void ib_CompactRegressionTree_predic(const double obj_CutVar[525], const double
  obj_Children[1050], const double obj_CutPoint[525], const double obj_NodeMean
  [525], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r33;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r33, 1);
    loop_ub = node->size[0];
    n = r33->size[0];
    r33->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r33, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r33->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r33->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r33->data[n];
    }

    emxFree_real_T(&r33);
  }
}

/*
 * Arguments    : const double obj_CutVar[575]
 *                const double obj_Children[1150]
 *                const double obj_CutPoint[575]
 *                const double obj_NodeMean[575]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void j_CompactRegressionTree_predict(const double obj_CutVar[575], const double
  obj_Children[1150], const double obj_CutPoint[575], const double obj_NodeMean
  [575], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r9;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r9, 1);
    loop_ub = node->size[0];
    n = r9->size[0];
    r9->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r9, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r9->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r9->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r9->data[n];
    }

    emxFree_real_T(&r9);
  }
}

/*
 * Arguments    : const double obj_CutVar[533]
 *                const double obj_Children[1066]
 *                const double obj_CutPoint[533]
 *                const double obj_NodeMean[533]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void k_CompactRegressionTree_predict(const double obj_CutVar[533], const double
  obj_Children[1066], const double obj_CutPoint[533], const double obj_NodeMean
  [533], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r10;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r10, 1);
    loop_ub = node->size[0];
    n = r10->size[0];
    r10->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r10, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r10->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r10->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r10->data[n];
    }

    emxFree_real_T(&r10);
  }
}

/*
 * Arguments    : const double obj_CutVar[565]
 *                const double obj_Children[1130]
 *                const double obj_CutPoint[565]
 *                const double obj_NodeMean[565]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void l_CompactRegressionTree_predict(const double obj_CutVar[565], const double
  obj_Children[1130], const double obj_CutPoint[565], const double obj_NodeMean
  [565], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r11;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r11, 1);
    loop_ub = node->size[0];
    n = r11->size[0];
    r11->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r11, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r11->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r11->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r11->data[n];
    }

    emxFree_real_T(&r11);
  }
}

/*
 * Arguments    : const double obj_CutVar[615]
 *                const double obj_Children[1230]
 *                const double obj_CutPoint[615]
 *                const double obj_NodeMean[615]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void m_CompactRegressionTree_predict(const double obj_CutVar[615], const double
  obj_Children[1230], const double obj_CutPoint[615], const double obj_NodeMean
  [615], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r12;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r12, 1);
    loop_ub = node->size[0];
    n = r12->size[0];
    r12->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r12, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r12->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r12->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r12->data[n];
    }

    emxFree_real_T(&r12);
  }
}

/*
 * Arguments    : const double obj_CutVar[547]
 *                const double obj_Children[1094]
 *                const double obj_CutPoint[547]
 *                const double obj_NodeMean[547]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void n_CompactRegressionTree_predict(const double obj_CutVar[547], const double
  obj_Children[1094], const double obj_CutPoint[547], const double obj_NodeMean
  [547], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r13;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r13, 1);
    loop_ub = node->size[0];
    n = r13->size[0];
    r13->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r13, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r13->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r13->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r13->data[n];
    }

    emxFree_real_T(&r13);
  }
}

/*
 * Arguments    : const double obj_CutVar[539]
 *                const double obj_Children[1078]
 *                const double obj_CutPoint[539]
 *                const double obj_NodeMean[539]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void o_CompactRegressionTree_predict(const double obj_CutVar[539], const double
  obj_Children[1078], const double obj_CutPoint[539], const double obj_NodeMean
  [539], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r14;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r14, 1);
    loop_ub = node->size[0];
    n = r14->size[0];
    r14->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r14, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r14->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r14->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r14->data[n];
    }

    emxFree_real_T(&r14);
  }
}

/*
 * Arguments    : const double obj_CutVar[567]
 *                const double obj_Children[1134]
 *                const double obj_CutPoint[567]
 *                const double obj_NodeMean[567]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void p_CompactRegressionTree_predict(const double obj_CutVar[567], const double
  obj_Children[1134], const double obj_CutPoint[567], const double obj_NodeMean
  [567], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r15;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r15, 1);
    loop_ub = node->size[0];
    n = r15->size[0];
    r15->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r15, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r15->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r15->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r15->data[n];
    }

    emxFree_real_T(&r15);
  }
}

/*
 * Arguments    : const double obj_CutVar[529]
 *                const double obj_Children[1058]
 *                const double obj_CutPoint[529]
 *                const double obj_NodeMean[529]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void q_CompactRegressionTree_predict(const double obj_CutVar[529], const double
  obj_Children[1058], const double obj_CutPoint[529], const double obj_NodeMean
  [529], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r16;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r16, 1);
    loop_ub = node->size[0];
    n = r16->size[0];
    r16->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r16, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r16->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r16->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r16->data[n];
    }

    emxFree_real_T(&r16);
  }
}

/*
 * Arguments    : const double obj_CutVar[577]
 *                const double obj_Children[1154]
 *                const double obj_CutPoint[577]
 *                const double obj_NodeMean[577]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void r_CompactRegressionTree_predict(const double obj_CutVar[577], const double
  obj_Children[1154], const double obj_CutPoint[577], const double obj_NodeMean
  [577], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r17;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r17, 1);
    loop_ub = node->size[0];
    n = r17->size[0];
    r17->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r17, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r17->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r17->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r17->data[n];
    }

    emxFree_real_T(&r17);
  }
}

/*
 * Arguments    : const double obj_CutVar[561]
 *                const double obj_Children[1122]
 *                const double obj_CutPoint[561]
 *                const double obj_NodeMean[561]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void s_CompactRegressionTree_predict(const double obj_CutVar[561], const double
  obj_Children[1122], const double obj_CutPoint[561], const double obj_NodeMean
  [561], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r18;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r18, 1);
    loop_ub = node->size[0];
    n = r18->size[0];
    r18->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r18, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r18->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r18->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r18->data[n];
    }

    emxFree_real_T(&r18);
  }
}

/*
 * Arguments    : const double obj_CutVar[543]
 *                const double obj_Children[1086]
 *                const double obj_CutPoint[543]
 *                const double obj_NodeMean[543]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void t_CompactRegressionTree_predict(const double obj_CutVar[543], const double
  obj_Children[1086], const double obj_CutPoint[543], const double obj_NodeMean
  [543], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r19;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r19, 1);
    loop_ub = node->size[0];
    n = r19->size[0];
    r19->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r19, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r19->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r19->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r19->data[n];
    }

    emxFree_real_T(&r19);
  }
}

/*
 * Arguments    : const double obj_CutVar[571]
 *                const double obj_Children[1142]
 *                const double obj_CutPoint[571]
 *                const double obj_NodeMean[571]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void u_CompactRegressionTree_predict(const double obj_CutVar[571], const double
  obj_Children[1142], const double obj_CutPoint[571], const double obj_NodeMean
  [571], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r20;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r20, 1);
    loop_ub = node->size[0];
    n = r20->size[0];
    r20->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r20, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r20->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r20->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r20->data[n];
    }

    emxFree_real_T(&r20);
  }
}

/*
 * Arguments    : const double obj_CutVar[541]
 *                const double obj_Children[1082]
 *                const double obj_CutPoint[541]
 *                const double obj_NodeMean[541]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void v_CompactRegressionTree_predict(const double obj_CutVar[541], const double
  obj_Children[1082], const double obj_CutPoint[541], const double obj_NodeMean
  [541], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r21;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r21, 1);
    loop_ub = node->size[0];
    n = r21->size[0];
    r21->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r21, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r21->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r21->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r21->data[n];
    }

    emxFree_real_T(&r21);
  }
}

/*
 * Arguments    : const double obj_CutVar[563]
 *                const double obj_Children[1126]
 *                const double obj_CutPoint[563]
 *                const double obj_NodeMean[563]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void w_CompactRegressionTree_predict(const double obj_CutVar[563], const double
  obj_Children[1126], const double obj_CutPoint[563], const double obj_NodeMean
  [563], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r22;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r22, 1);
    loop_ub = node->size[0];
    n = r22->size[0];
    r22->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r22, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r22->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r22->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r22->data[n];
    }

    emxFree_real_T(&r22);
  }
}

/*
 * Arguments    : const double obj_CutVar[589]
 *                const double obj_Children[1178]
 *                const double obj_CutPoint[589]
 *                const double obj_NodeMean[589]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void x_CompactRegressionTree_predict(const double obj_CutVar[589], const double
  obj_Children[1178], const double obj_CutPoint[589], const double obj_NodeMean
  [589], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r23;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r23, 1);
    loop_ub = node->size[0];
    n = r23->size[0];
    r23->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r23, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r23->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r23->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r23->data[n];
    }

    emxFree_real_T(&r23);
  }
}

/*
 * Arguments    : const double obj_CutVar[573]
 *                const double obj_Children[1146]
 *                const double obj_CutPoint[573]
 *                const double obj_NodeMean[573]
 *                const emxArray_real_T *X
 *                emxArray_real_T *Yfit
 * Return Type  : void
 */
void y_CompactRegressionTree_predict(const double obj_CutVar[573], const double
  obj_Children[1146], const double obj_CutPoint[573], const double obj_NodeMean
  [573], const emxArray_real_T *X, emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int n;
  int loop_ub;
  double m;
  emxArray_real_T *r24;
  if (X->size[0] == 0) {
    n = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
  } else {
    emxInit_real_T(&node, 1);
    n = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity((emxArray__common *)node, n, sizeof(double));
    loop_ub = X->size[0];
    for (n = 0; n < loop_ub; n++) {
      node->data[n] = 1.0;
    }

    for (n = 0; n < X->size[0]; n++) {
      m = 1.0;
      while (!((obj_CutVar[(int)m - 1] == 0.0) || rtIsNaN(X->data[n + X->size[0]
               * ((int)obj_CutVar[(int)m - 1] - 1)]))) {
        if (X->data[n + X->size[0] * ((int)obj_CutVar[(int)m - 1] - 1)] <
            obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[n] = m;
    }

    n = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity((emxArray__common *)Yfit, n, sizeof(double));
    loop_ub = node->size[0];
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = 0.0;
    }

    emxInit_real_T(&r24, 1);
    loop_ub = node->size[0];
    n = r24->size[0];
    r24->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r24, n, sizeof(double));
    for (n = 0; n < loop_ub; n++) {
      r24->data[n] = obj_NodeMean[(int)node->data[n] - 1];
    }

    loop_ub = r24->size[0];
    emxFree_real_T(&node);
    for (n = 0; n < loop_ub; n++) {
      Yfit->data[n] = r24->data[n];
    }

    emxFree_real_T(&r24);
  }
}

/*
 * File trailer for CompactRegressionTree.c
 *
 * [EOF]
 */
