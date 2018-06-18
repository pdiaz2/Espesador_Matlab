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
#include "predictRF_Y3_PRBS_types.h"

/* Function Declarations */
extern void CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[813], const real_T obj_Children[1626], const real_T obj_CutPoint
  [813], const real_T obj_NodeMean[813], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ab_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[731], const real_T obj_Children[1462], const real_T obj_CutPoint
  [731], const real_T obj_NodeMean[731], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ac_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[721], const real_T obj_Children[1442], const real_T obj_CutPoint
  [721], const real_T obj_NodeMean[721], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void b_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[709], const real_T obj_Children[1418], const real_T obj_CutPoint
  [709], const real_T obj_NodeMean[709], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void bb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[673], const real_T obj_Children[1346], const real_T obj_CutPoint
  [673], const real_T obj_NodeMean[673], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void bc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[691], const real_T obj_Children[1382], const real_T obj_CutPoint
  [691], const real_T obj_NodeMean[691], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void c_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[779], const real_T obj_Children[1558], const real_T obj_CutPoint
  [779], const real_T obj_NodeMean[779], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void cb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[751], const real_T obj_Children[1502], const real_T obj_CutPoint
  [751], const real_T obj_NodeMean[751], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void cc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[749], const real_T obj_Children[1498], const real_T obj_CutPoint
  [749], const real_T obj_NodeMean[749], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void d_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[717], const real_T obj_Children[1434], const real_T obj_CutPoint
  [717], const real_T obj_NodeMean[717], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void db_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[775], const real_T obj_Children[1550], const real_T obj_CutPoint
  [775], const real_T obj_NodeMean[775], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void e_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[759], const real_T obj_Children[1518], const real_T obj_CutPoint
  [759], const real_T obj_NodeMean[759], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void eb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[739], const real_T obj_Children[1478], const real_T obj_CutPoint
  [739], const real_T obj_NodeMean[739], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void f_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[713], const real_T obj_Children[1426], const real_T obj_CutPoint
  [713], const real_T obj_NodeMean[713], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void fb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[693], const real_T obj_Children[1386], const real_T obj_CutPoint
  [693], const real_T obj_NodeMean[693], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void g_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[763], const real_T obj_Children[1526], const real_T obj_CutPoint
  [763], const real_T obj_NodeMean[763], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void gb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[737], const real_T obj_Children[1474], const real_T obj_CutPoint
  [737], const real_T obj_NodeMean[737], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void h_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[783], const real_T obj_Children[1566], const real_T obj_CutPoint
  [783], const real_T obj_NodeMean[783], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void hb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[677], const real_T obj_Children[1354], const real_T obj_CutPoint
  [677], const real_T obj_NodeMean[677], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void i_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[657], const real_T obj_Children[1314], const real_T obj_CutPoint
  [657], const real_T obj_NodeMean[657], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ib_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[795], const real_T obj_Children[1590], const real_T obj_CutPoint
  [795], const real_T obj_NodeMean[795], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void j_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[771], const real_T obj_Children[1542], const real_T obj_CutPoint
  [771], const real_T obj_NodeMean[771], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void jb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[733], const real_T obj_Children[1466], const real_T obj_CutPoint
  [733], const real_T obj_NodeMean[733], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void k_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[787], const real_T obj_Children[1574], const real_T obj_CutPoint
  [787], const real_T obj_NodeMean[787], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void kb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[735], const real_T obj_Children[1470], const real_T obj_CutPoint
  [735], const real_T obj_NodeMean[735], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void l_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[773], const real_T obj_Children[1546], const real_T obj_CutPoint
  [773], const real_T obj_NodeMean[773], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void lb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[683], const real_T obj_Children[1366], const real_T obj_CutPoint
  [683], const real_T obj_NodeMean[683], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void m_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[705], const real_T obj_Children[1410], const real_T obj_CutPoint
  [705], const real_T obj_NodeMean[705], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void mb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[807], const real_T obj_Children[1614], const real_T obj_CutPoint
  [807], const real_T obj_NodeMean[807], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void n_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[753], const real_T obj_Children[1506], const real_T obj_CutPoint
  [753], const real_T obj_NodeMean[753], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void nb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[723], const real_T obj_Children[1446], const real_T obj_CutPoint
  [723], const real_T obj_NodeMean[723], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void o_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[777], const real_T obj_Children[1554], const real_T obj_CutPoint
  [777], const real_T obj_NodeMean[777], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ob_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[655], const real_T obj_Children[1310], const real_T obj_CutPoint
  [655], const real_T obj_NodeMean[655], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void p_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[757], const real_T obj_Children[1514], const real_T obj_CutPoint
  [757], const real_T obj_NodeMean[757], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void pb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[791], const real_T obj_Children[1582], const real_T obj_CutPoint
  [791], const real_T obj_NodeMean[791], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void q_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[743], const real_T obj_Children[1486], const real_T obj_CutPoint
  [743], const real_T obj_NodeMean[743], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void qb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[745], const real_T obj_Children[1490], const real_T obj_CutPoint
  [745], const real_T obj_NodeMean[745], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void r_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[681], const real_T obj_Children[1362], const real_T obj_CutPoint
  [681], const real_T obj_NodeMean[681], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void rb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[729], const real_T obj_Children[1458], const real_T obj_CutPoint
  [729], const real_T obj_NodeMean[729], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void s_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[727], const real_T obj_Children[1454], const real_T obj_CutPoint
  [727], const real_T obj_NodeMean[727], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void sb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[725], const real_T obj_Children[1450], const real_T obj_CutPoint
  [725], const real_T obj_NodeMean[725], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void t_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[699], const real_T obj_Children[1398], const real_T obj_CutPoint
  [699], const real_T obj_NodeMean[699], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void tb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[789], const real_T obj_Children[1578], const real_T obj_CutPoint
  [789], const real_T obj_NodeMean[789], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void u_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[741], const real_T obj_Children[1482], const real_T obj_CutPoint
  [741], const real_T obj_NodeMean[741], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ub_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[793], const real_T obj_Children[1586], const real_T obj_CutPoint
  [793], const real_T obj_NodeMean[793], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void v_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[755], const real_T obj_Children[1510], const real_T obj_CutPoint
  [755], const real_T obj_NodeMean[755], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void vb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[769], const real_T obj_Children[1538], const real_T obj_CutPoint
  [769], const real_T obj_NodeMean[769], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void w_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[797], const real_T obj_Children[1594], const real_T obj_CutPoint
  [797], const real_T obj_NodeMean[797], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void wb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[687], const real_T obj_Children[1374], const real_T obj_CutPoint
  [687], const real_T obj_NodeMean[687], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void x_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[715], const real_T obj_Children[1430], const real_T obj_CutPoint
  [715], const real_T obj_NodeMean[715], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void xb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[781], const real_T obj_Children[1562], const real_T obj_CutPoint
  [781], const real_T obj_NodeMean[781], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void y_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[785], const real_T obj_Children[1570], const real_T obj_CutPoint
  [785], const real_T obj_NodeMean[785], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void yb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[719], const real_T obj_Children[1438], const real_T obj_CutPoint
  [719], const real_T obj_NodeMean[719], const emxArray_real_T *X,
  emxArray_real_T *Yfit);

#endif

/* End of code generation (CompactRegressionTree.h) */
