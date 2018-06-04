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
#include "predictRF_Y2_types.h"

/* Function Declarations */
extern void CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[709], const real_T obj_Children[1418], const real_T obj_CutPoint
  [709], const real_T obj_NodeMean[709], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ab_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[755], const real_T obj_Children[1510], const real_T obj_CutPoint
  [755], const real_T obj_NodeMean[755], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void b_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[717], const real_T obj_Children[1434], const real_T obj_CutPoint
  [717], const real_T obj_NodeMean[717], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void bb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[751], const real_T obj_Children[1502], const real_T obj_CutPoint
  [751], const real_T obj_NodeMean[751], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void c_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[749], const real_T obj_Children[1498], const real_T obj_CutPoint
  [749], const real_T obj_NodeMean[749], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void cb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[743], const real_T obj_Children[1486], const real_T obj_CutPoint
  [743], const real_T obj_NodeMean[743], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void d_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[721], const real_T obj_Children[1442], const real_T obj_CutPoint
  [721], const real_T obj_NodeMean[721], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void db_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[735], const real_T obj_Children[1470], const real_T obj_CutPoint
  [735], const real_T obj_NodeMean[735], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void e_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[763], const real_T obj_Children[1526], const real_T obj_CutPoint
  [763], const real_T obj_NodeMean[763], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void eb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[731], const real_T obj_Children[1462], const real_T obj_CutPoint
  [731], const real_T obj_NodeMean[731], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void f_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[737], const real_T obj_Children[1474], const real_T obj_CutPoint
  [737], const real_T obj_NodeMean[737], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void fb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[695], const real_T obj_Children[1390], const real_T obj_CutPoint
  [695], const real_T obj_NodeMean[695], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void g_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[729], const real_T obj_Children[1458], const real_T obj_CutPoint
  [729], const real_T obj_NodeMean[729], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void gb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[711], const real_T obj_Children[1422], const real_T obj_CutPoint
  [711], const real_T obj_NodeMean[711], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void h_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[685], const real_T obj_Children[1370], const real_T obj_CutPoint
  [685], const real_T obj_NodeMean[685], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void hb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[675], const real_T obj_Children[1350], const real_T obj_CutPoint
  [675], const real_T obj_NodeMean[675], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void i_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[741], const real_T obj_Children[1482], const real_T obj_CutPoint
  [741], const real_T obj_NodeMean[741], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ib_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[719], const real_T obj_Children[1438], const real_T obj_CutPoint
  [719], const real_T obj_NodeMean[719], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void j_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[697], const real_T obj_Children[1394], const real_T obj_CutPoint
  [697], const real_T obj_NodeMean[697], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void jb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[727], const real_T obj_Children[1454], const real_T obj_CutPoint
  [727], const real_T obj_NodeMean[727], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void k_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[707], const real_T obj_Children[1414], const real_T obj_CutPoint
  [707], const real_T obj_NodeMean[707], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void kb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[665], const real_T obj_Children[1330], const real_T obj_CutPoint
  [665], const real_T obj_NodeMean[665], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void l_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[705], const real_T obj_Children[1410], const real_T obj_CutPoint
  [705], const real_T obj_NodeMean[705], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void lb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[701], const real_T obj_Children[1402], const real_T obj_CutPoint
  [701], const real_T obj_NodeMean[701], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void m_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[723], const real_T obj_Children[1446], const real_T obj_CutPoint
  [723], const real_T obj_NodeMean[723], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void mb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[689], const real_T obj_Children[1378], const real_T obj_CutPoint
  [689], const real_T obj_NodeMean[689], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void n_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[703], const real_T obj_Children[1406], const real_T obj_CutPoint
  [703], const real_T obj_NodeMean[703], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void nb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[753], const real_T obj_Children[1506], const real_T obj_CutPoint
  [753], const real_T obj_NodeMean[753], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void o_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[687], const real_T obj_Children[1374], const real_T obj_CutPoint
  [687], const real_T obj_NodeMean[687], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void p_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[699], const real_T obj_Children[1398], const real_T obj_CutPoint
  [699], const real_T obj_NodeMean[699], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void q_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[715], const real_T obj_Children[1430], const real_T obj_CutPoint
  [715], const real_T obj_NodeMean[715], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void r_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[733], const real_T obj_Children[1466], const real_T obj_CutPoint
  [733], const real_T obj_NodeMean[733], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void s_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[679], const real_T obj_Children[1358], const real_T obj_CutPoint
  [679], const real_T obj_NodeMean[679], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void t_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[691], const real_T obj_Children[1382], const real_T obj_CutPoint
  [691], const real_T obj_NodeMean[691], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void u_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[747], const real_T obj_Children[1494], const real_T obj_CutPoint
  [747], const real_T obj_NodeMean[747], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void v_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[725], const real_T obj_Children[1450], const real_T obj_CutPoint
  [725], const real_T obj_NodeMean[725], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void w_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[713], const real_T obj_Children[1426], const real_T obj_CutPoint
  [713], const real_T obj_NodeMean[713], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void x_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[683], const real_T obj_Children[1366], const real_T obj_CutPoint
  [683], const real_T obj_NodeMean[683], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void y_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[757], const real_T obj_Children[1514], const real_T obj_CutPoint
  [757], const real_T obj_NodeMean[757], const emxArray_real_T *X,
  emxArray_real_T *Yfit);

#endif

/* End of code generation (CompactRegressionTree.h) */
