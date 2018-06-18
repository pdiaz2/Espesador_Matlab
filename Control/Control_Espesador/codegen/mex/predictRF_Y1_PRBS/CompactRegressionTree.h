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
#include "predictRF_Y1_PRBS_types.h"

/* Function Declarations */
extern void CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[667], const real_T obj_Children[1334], const real_T obj_CutPoint
  [667], const real_T obj_NodeMean[667], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ab_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[639], const real_T obj_Children[1278], const real_T obj_CutPoint
  [639], const real_T obj_NodeMean[639], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void b_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[711], const real_T obj_Children[1422], const real_T obj_CutPoint
  [711], const real_T obj_NodeMean[711], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void bb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[627], const real_T obj_Children[1254], const real_T obj_CutPoint
  [627], const real_T obj_NodeMean[627], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void c_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[621], const real_T obj_Children[1242], const real_T obj_CutPoint
  [621], const real_T obj_NodeMean[621], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void cb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[655], const real_T obj_Children[1310], const real_T obj_CutPoint
  [655], const real_T obj_NodeMean[655], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void d_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[737], const real_T obj_Children[1474], const real_T obj_CutPoint
  [737], const real_T obj_NodeMean[737], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void db_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[613], const real_T obj_Children[1226], const real_T obj_CutPoint
  [613], const real_T obj_NodeMean[613], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void e_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[683], const real_T obj_Children[1366], const real_T obj_CutPoint
  [683], const real_T obj_NodeMean[683], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void eb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[685], const real_T obj_Children[1370], const real_T obj_CutPoint
  [685], const real_T obj_NodeMean[685], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void f_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[697], const real_T obj_Children[1394], const real_T obj_CutPoint
  [697], const real_T obj_NodeMean[697], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void fb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[705], const real_T obj_Children[1410], const real_T obj_CutPoint
  [705], const real_T obj_NodeMean[705], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void g_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[641], const real_T obj_Children[1282], const real_T obj_CutPoint
  [641], const real_T obj_NodeMean[641], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void gb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[645], const real_T obj_Children[1290], const real_T obj_CutPoint
  [645], const real_T obj_NodeMean[645], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void h_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[669], const real_T obj_Children[1338], const real_T obj_CutPoint
  [669], const real_T obj_NodeMean[669], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void hb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[615], const real_T obj_Children[1230], const real_T obj_CutPoint
  [615], const real_T obj_NodeMean[615], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void i_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[709], const real_T obj_Children[1418], const real_T obj_CutPoint
  [709], const real_T obj_NodeMean[709], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ib_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[679], const real_T obj_Children[1358], const real_T obj_CutPoint
  [679], const real_T obj_NodeMean[679], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void j_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[643], const real_T obj_Children[1286], const real_T obj_CutPoint
  [643], const real_T obj_NodeMean[643], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void jb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[637], const real_T obj_Children[1274], const real_T obj_CutPoint
  [637], const real_T obj_NodeMean[637], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void k_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[673], const real_T obj_Children[1346], const real_T obj_CutPoint
  [673], const real_T obj_NodeMean[673], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void kb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[675], const real_T obj_Children[1350], const real_T obj_CutPoint
  [675], const real_T obj_NodeMean[675], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void l_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[647], const real_T obj_Children[1294], const real_T obj_CutPoint
  [647], const real_T obj_NodeMean[647], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void lb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[743], const real_T obj_Children[1486], const real_T obj_CutPoint
  [743], const real_T obj_NodeMean[743], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void m_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[695], const real_T obj_Children[1390], const real_T obj_CutPoint
  [695], const real_T obj_NodeMean[695], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void mb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[665], const real_T obj_Children[1330], const real_T obj_CutPoint
  [665], const real_T obj_NodeMean[665], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void n_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[657], const real_T obj_Children[1314], const real_T obj_CutPoint
  [657], const real_T obj_NodeMean[657], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void nb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[651], const real_T obj_Children[1302], const real_T obj_CutPoint
  [651], const real_T obj_NodeMean[651], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void o_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[633], const real_T obj_Children[1266], const real_T obj_CutPoint
  [633], const real_T obj_NodeMean[633], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ob_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[635], const real_T obj_Children[1270], const real_T obj_CutPoint
  [635], const real_T obj_NodeMean[635], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void p_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[671], const real_T obj_Children[1342], const real_T obj_CutPoint
  [671], const real_T obj_NodeMean[671], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void pb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[699], const real_T obj_Children[1398], const real_T obj_CutPoint
  [699], const real_T obj_NodeMean[699], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void q_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[687], const real_T obj_Children[1374], const real_T obj_CutPoint
  [687], const real_T obj_NodeMean[687], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void qb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[693], const real_T obj_Children[1386], const real_T obj_CutPoint
  [693], const real_T obj_NodeMean[693], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void r_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[659], const real_T obj_Children[1318], const real_T obj_CutPoint
  [659], const real_T obj_NodeMean[659], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void rb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[663], const real_T obj_Children[1326], const real_T obj_CutPoint
  [663], const real_T obj_NodeMean[663], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void s_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[689], const real_T obj_Children[1378], const real_T obj_CutPoint
  [689], const real_T obj_NodeMean[689], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void sb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[653], const real_T obj_Children[1306], const real_T obj_CutPoint
  [653], const real_T obj_NodeMean[653], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void t_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[649], const real_T obj_Children[1298], const real_T obj_CutPoint
  [649], const real_T obj_NodeMean[649], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void tb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[677], const real_T obj_Children[1354], const real_T obj_CutPoint
  [677], const real_T obj_NodeMean[677], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void u_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[703], const real_T obj_Children[1406], const real_T obj_CutPoint
  [703], const real_T obj_NodeMean[703], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ub_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[717], const real_T obj_Children[1434], const real_T obj_CutPoint
  [717], const real_T obj_NodeMean[717], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void v_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[543], const real_T obj_Children[1086], const real_T obj_CutPoint
  [543], const real_T obj_NodeMean[543], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void w_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[691], const real_T obj_Children[1382], const real_T obj_CutPoint
  [691], const real_T obj_NodeMean[691], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void x_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[661], const real_T obj_Children[1322], const real_T obj_CutPoint
  [661], const real_T obj_NodeMean[661], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void y_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[681], const real_T obj_Children[1362], const real_T obj_CutPoint
  [681], const real_T obj_NodeMean[681], const emxArray_real_T *X,
  emxArray_real_T *Yfit);

#endif

/* End of code generation (CompactRegressionTree.h) */
