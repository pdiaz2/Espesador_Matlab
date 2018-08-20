/*
 * CompactRegressionTree.h
 *
 * Code generation for function 'CompactRegressionTree'
 *
 */

#ifndef COMPACTREGRESSIONTREE_H
#define COMPACTREGRESSIONTREE_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "predictRF_Y2_B100_na6_nb6_1408_types.h"

/* Function Declarations */
extern void CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1175], const real_T obj_Children[2350], const real_T obj_CutPoint
  [1175], const real_T obj_NodeMean[1175], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void b_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1173], const real_T obj_Children[2346], const real_T obj_CutPoint
  [1173], const real_T obj_NodeMean[1173], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void c_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1181], const real_T obj_Children[2362], const real_T obj_CutPoint
  [1181], const real_T obj_NodeMean[1181], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void d_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1179], const real_T obj_Children[2358], const real_T obj_CutPoint
  [1179], const real_T obj_NodeMean[1179], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void e_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1165], const real_T obj_Children[2330], const real_T obj_CutPoint
  [1165], const real_T obj_NodeMean[1165], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void f_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1159], const real_T obj_Children[2318], const real_T obj_CutPoint
  [1159], const real_T obj_NodeMean[1159], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void g_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1155], const real_T obj_Children[2310], const real_T obj_CutPoint
  [1155], const real_T obj_NodeMean[1155], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void h_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1167], const real_T obj_Children[2334], const real_T obj_CutPoint
  [1167], const real_T obj_NodeMean[1167], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void i_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1163], const real_T obj_Children[2326], const real_T obj_CutPoint
  [1163], const real_T obj_NodeMean[1163], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void j_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1171], const real_T obj_Children[2342], const real_T obj_CutPoint
  [1171], const real_T obj_NodeMean[1171], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void k_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1169], const real_T obj_Children[2338], const real_T obj_CutPoint
  [1169], const real_T obj_NodeMean[1169], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void l_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1177], const real_T obj_Children[2354], const real_T obj_CutPoint
  [1177], const real_T obj_NodeMean[1177], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void m_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1151], const real_T obj_Children[2302], const real_T obj_CutPoint
  [1151], const real_T obj_NodeMean[1151], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void n_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1185], const real_T obj_Children[2370], const real_T obj_CutPoint
  [1185], const real_T obj_NodeMean[1185], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void o_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1161], const real_T obj_Children[2322], const real_T obj_CutPoint
  [1161], const real_T obj_NodeMean[1161], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void p_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1153], const real_T obj_Children[2306], const real_T obj_CutPoint
  [1153], const real_T obj_NodeMean[1153], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void q_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1157], const real_T obj_Children[2314], const real_T obj_CutPoint
  [1157], const real_T obj_NodeMean[1157], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void r_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1199], const real_T obj_Children[2398], const real_T obj_CutPoint
  [1199], const real_T obj_NodeMean[1199], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void s_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1187], const real_T obj_Children[2374], const real_T obj_CutPoint
  [1187], const real_T obj_NodeMean[1187], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void t_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1183], const real_T obj_Children[2366], const real_T obj_CutPoint
  [1183], const real_T obj_NodeMean[1183], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void u_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1145], const real_T obj_Children[2290], const real_T obj_CutPoint
  [1145], const real_T obj_NodeMean[1145], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void v_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1147], const real_T obj_Children[2294], const real_T obj_CutPoint
  [1147], const real_T obj_NodeMean[1147], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void w_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1149], const real_T obj_Children[2298], const real_T obj_CutPoint
  [1149], const real_T obj_NodeMean[1149], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void x_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1193], const real_T obj_Children[2386], const real_T obj_CutPoint
  [1193], const real_T obj_NodeMean[1193], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void y_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1137], const real_T obj_Children[2274], const real_T obj_CutPoint
  [1137], const real_T obj_NodeMean[1137], const emxArray_real_T *X,
  emxArray_real_T *Yfit);

#endif

/* End of code generation (CompactRegressionTree.h) */
