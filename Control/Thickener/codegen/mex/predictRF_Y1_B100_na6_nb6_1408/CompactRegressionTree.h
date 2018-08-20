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
#include "predictRF_Y1_B100_na6_nb6_1408_types.h"

/* Function Declarations */
extern void CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[455], const real_T obj_Children[910], const real_T obj_CutPoint[455],
  const real_T obj_NodeMean[455], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void b_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[467], const real_T obj_Children[934], const real_T obj_CutPoint[467],
  const real_T obj_NodeMean[467], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void c_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[453], const real_T obj_Children[906], const real_T obj_CutPoint[453],
  const real_T obj_NodeMean[453], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void d_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[449], const real_T obj_Children[898], const real_T obj_CutPoint[449],
  const real_T obj_NodeMean[449], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void e_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[463], const real_T obj_Children[926], const real_T obj_CutPoint[463],
  const real_T obj_NodeMean[463], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void f_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[473], const real_T obj_Children[946], const real_T obj_CutPoint[473],
  const real_T obj_NodeMean[473], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void g_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[461], const real_T obj_Children[922], const real_T obj_CutPoint[461],
  const real_T obj_NodeMean[461], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void h_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[493], const real_T obj_Children[986], const real_T obj_CutPoint[493],
  const real_T obj_NodeMean[493], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void i_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[471], const real_T obj_Children[942], const real_T obj_CutPoint[471],
  const real_T obj_NodeMean[471], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void j_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[483], const real_T obj_Children[966], const real_T obj_CutPoint[483],
  const real_T obj_NodeMean[483], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void k_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[477], const real_T obj_Children[954], const real_T obj_CutPoint[477],
  const real_T obj_NodeMean[477], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void l_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[469], const real_T obj_Children[938], const real_T obj_CutPoint[469],
  const real_T obj_NodeMean[469], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void m_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[465], const real_T obj_Children[930], const real_T obj_CutPoint[465],
  const real_T obj_NodeMean[465], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void n_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[459], const real_T obj_Children[918], const real_T obj_CutPoint[459],
  const real_T obj_NodeMean[459], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void o_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[481], const real_T obj_Children[962], const real_T obj_CutPoint[481],
  const real_T obj_NodeMean[481], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void p_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[457], const real_T obj_Children[914], const real_T obj_CutPoint[457],
  const real_T obj_NodeMean[457], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void q_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[441], const real_T obj_Children[882], const real_T obj_CutPoint[441],
  const real_T obj_NodeMean[441], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void r_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[447], const real_T obj_Children[894], const real_T obj_CutPoint[447],
  const real_T obj_NodeMean[447], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void s_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[451], const real_T obj_Children[902], const real_T obj_CutPoint[451],
  const real_T obj_NodeMean[451], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void t_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[485], const real_T obj_Children[970], const real_T obj_CutPoint[485],
  const real_T obj_NodeMean[485], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void u_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[479], const real_T obj_Children[958], const real_T obj_CutPoint[479],
  const real_T obj_NodeMean[479], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void v_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[475], const real_T obj_Children[950], const real_T obj_CutPoint[475],
  const real_T obj_NodeMean[475], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void w_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[439], const real_T obj_Children[878], const real_T obj_CutPoint[439],
  const real_T obj_NodeMean[439], const emxArray_real_T *X, emxArray_real_T
  *Yfit);

#endif

/* End of code generation (CompactRegressionTree.h) */
