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
#include "predictRF_Y4_types.h"

/* Function Declarations */
extern void CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[425], const real_T obj_Children[850], const real_T obj_CutPoint[425],
  const real_T obj_NodeMean[425], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void b_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[433], const real_T obj_Children[866], const real_T obj_CutPoint[433],
  const real_T obj_NodeMean[433], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void c_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[431], const real_T obj_Children[862], const real_T obj_CutPoint[431],
  const real_T obj_NodeMean[431], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void d_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[419], const real_T obj_Children[838], const real_T obj_CutPoint[419],
  const real_T obj_NodeMean[419], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void e_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[423], const real_T obj_Children[846], const real_T obj_CutPoint[423],
  const real_T obj_NodeMean[423], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void f_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[443], const real_T obj_Children[886], const real_T obj_CutPoint[443],
  const real_T obj_NodeMean[443], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void g_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[435], const real_T obj_Children[870], const real_T obj_CutPoint[435],
  const real_T obj_NodeMean[435], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void h_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[427], const real_T obj_Children[854], const real_T obj_CutPoint[427],
  const real_T obj_NodeMean[427], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void i_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[403], const real_T obj_Children[806], const real_T obj_CutPoint[403],
  const real_T obj_NodeMean[403], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void j_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[439], const real_T obj_Children[878], const real_T obj_CutPoint[439],
  const real_T obj_NodeMean[439], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void k_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[437], const real_T obj_Children[874], const real_T obj_CutPoint[437],
  const real_T obj_NodeMean[437], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void l_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[421], const real_T obj_Children[842], const real_T obj_CutPoint[421],
  const real_T obj_NodeMean[421], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void m_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[429], const real_T obj_Children[858], const real_T obj_CutPoint[429],
  const real_T obj_NodeMean[429], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void n_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[415], const real_T obj_Children[830], const real_T obj_CutPoint[415],
  const real_T obj_NodeMean[415], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void o_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[445], const real_T obj_Children[890], const real_T obj_CutPoint[445],
  const real_T obj_NodeMean[445], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void p_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[411], const real_T obj_Children[822], const real_T obj_CutPoint[411],
  const real_T obj_NodeMean[411], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void q_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[407], const real_T obj_Children[814], const real_T obj_CutPoint[407],
  const real_T obj_NodeMean[407], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void r_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[399], const real_T obj_Children[798], const real_T obj_CutPoint[399],
  const real_T obj_NodeMean[399], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void s_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[449], const real_T obj_Children[898], const real_T obj_CutPoint[449],
  const real_T obj_NodeMean[449], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void t_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[417], const real_T obj_Children[834], const real_T obj_CutPoint[417],
  const real_T obj_NodeMean[417], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void u_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[467], const real_T obj_Children[934], const real_T obj_CutPoint[467],
  const real_T obj_NodeMean[467], const emxArray_real_T *X, emxArray_real_T
  *Yfit);

#endif

/* End of code generation (CompactRegressionTree.h) */
