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
#include "predictRF_Y3_types.h"

/* Function Declarations */
extern void CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[557], const real_T obj_Children[1114], const real_T obj_CutPoint
  [557], const real_T obj_NodeMean[557], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ab_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[645], const real_T obj_Children[1290], const real_T obj_CutPoint
  [645], const real_T obj_NodeMean[645], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void b_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[615], const real_T obj_Children[1230], const real_T obj_CutPoint
  [615], const real_T obj_NodeMean[615], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void bb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[699], const real_T obj_Children[1398], const real_T obj_CutPoint
  [699], const real_T obj_NodeMean[699], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void c_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[559], const real_T obj_Children[1118], const real_T obj_CutPoint
  [559], const real_T obj_NodeMean[559], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void cb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[575], const real_T obj_Children[1150], const real_T obj_CutPoint
  [575], const real_T obj_NodeMean[575], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void d_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[579], const real_T obj_Children[1158], const real_T obj_CutPoint
  [579], const real_T obj_NodeMean[579], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void db_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[571], const real_T obj_Children[1142], const real_T obj_CutPoint
  [571], const real_T obj_NodeMean[571], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void e_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[553], const real_T obj_Children[1106], const real_T obj_CutPoint
  [553], const real_T obj_NodeMean[553], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void eb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[633], const real_T obj_Children[1266], const real_T obj_CutPoint
  [633], const real_T obj_NodeMean[633], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void f_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[601], const real_T obj_Children[1202], const real_T obj_CutPoint
  [601], const real_T obj_NodeMean[601], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void fb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[589], const real_T obj_Children[1178], const real_T obj_CutPoint
  [589], const real_T obj_NodeMean[589], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void g_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[629], const real_T obj_Children[1258], const real_T obj_CutPoint
  [629], const real_T obj_NodeMean[629], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void gb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[635], const real_T obj_Children[1270], const real_T obj_CutPoint
  [635], const real_T obj_NodeMean[635], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void h_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[587], const real_T obj_Children[1174], const real_T obj_CutPoint
  [587], const real_T obj_NodeMean[587], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void hb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[551], const real_T obj_Children[1102], const real_T obj_CutPoint
  [551], const real_T obj_NodeMean[551], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void i_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[595], const real_T obj_Children[1190], const real_T obj_CutPoint
  [595], const real_T obj_NodeMean[595], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ib_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[647], const real_T obj_Children[1294], const real_T obj_CutPoint
  [647], const real_T obj_NodeMean[647], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void j_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[573], const real_T obj_Children[1146], const real_T obj_CutPoint
  [573], const real_T obj_NodeMean[573], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void jb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[541], const real_T obj_Children[1082], const real_T obj_CutPoint
  [541], const real_T obj_NodeMean[541], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void k_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[649], const real_T obj_Children[1298], const real_T obj_CutPoint
  [649], const real_T obj_NodeMean[649], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void kb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[597], const real_T obj_Children[1194], const real_T obj_CutPoint
  [597], const real_T obj_NodeMean[597], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void l_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[563], const real_T obj_Children[1126], const real_T obj_CutPoint
  [563], const real_T obj_NodeMean[563], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void lb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[599], const real_T obj_Children[1198], const real_T obj_CutPoint
  [599], const real_T obj_NodeMean[599], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void m_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[641], const real_T obj_Children[1282], const real_T obj_CutPoint
  [641], const real_T obj_NodeMean[641], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void mb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[531], const real_T obj_Children[1062], const real_T obj_CutPoint
  [531], const real_T obj_NodeMean[531], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void n_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[593], const real_T obj_Children[1186], const real_T obj_CutPoint
  [593], const real_T obj_NodeMean[593], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void nb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[631], const real_T obj_Children[1262], const real_T obj_CutPoint
  [631], const real_T obj_NodeMean[631], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void o_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[627], const real_T obj_Children[1254], const real_T obj_CutPoint
  [627], const real_T obj_NodeMean[627], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ob_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[603], const real_T obj_Children[1206], const real_T obj_CutPoint
  [603], const real_T obj_NodeMean[603], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void p_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[545], const real_T obj_Children[1090], const real_T obj_CutPoint
  [545], const real_T obj_NodeMean[545], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void pb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[583], const real_T obj_Children[1166], const real_T obj_CutPoint
  [583], const real_T obj_NodeMean[583], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void q_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[609], const real_T obj_Children[1218], const real_T obj_CutPoint
  [609], const real_T obj_NodeMean[609], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void qb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[565], const real_T obj_Children[1130], const real_T obj_CutPoint
  [565], const real_T obj_NodeMean[565], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void r_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[611], const real_T obj_Children[1222], const real_T obj_CutPoint
  [611], const real_T obj_NodeMean[611], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void rb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[567], const real_T obj_Children[1134], const real_T obj_CutPoint
  [567], const real_T obj_NodeMean[567], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void s_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[577], const real_T obj_Children[1154], const real_T obj_CutPoint
  [577], const real_T obj_NodeMean[577], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void sb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[623], const real_T obj_Children[1246], const real_T obj_CutPoint
  [623], const real_T obj_NodeMean[623], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void t_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[607], const real_T obj_Children[1214], const real_T obj_CutPoint
  [607], const real_T obj_NodeMean[607], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void tb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[639], const real_T obj_Children[1278], const real_T obj_CutPoint
  [639], const real_T obj_NodeMean[639], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void u_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[585], const real_T obj_Children[1170], const real_T obj_CutPoint
  [585], const real_T obj_NodeMean[585], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ub_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[651], const real_T obj_Children[1302], const real_T obj_CutPoint
  [651], const real_T obj_NodeMean[651], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void v_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[643], const real_T obj_Children[1286], const real_T obj_CutPoint
  [643], const real_T obj_NodeMean[643], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void vb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[657], const real_T obj_Children[1314], const real_T obj_CutPoint
  [657], const real_T obj_NodeMean[657], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void w_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[569], const real_T obj_Children[1138], const real_T obj_CutPoint
  [569], const real_T obj_NodeMean[569], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void wb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[671], const real_T obj_Children[1342], const real_T obj_CutPoint
  [671], const real_T obj_NodeMean[671], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void x_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[605], const real_T obj_Children[1210], const real_T obj_CutPoint
  [605], const real_T obj_NodeMean[605], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void xb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[613], const real_T obj_Children[1226], const real_T obj_CutPoint
  [613], const real_T obj_NodeMean[613], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void y_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[619], const real_T obj_Children[1238], const real_T obj_CutPoint
  [619], const real_T obj_NodeMean[619], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void yb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[561], const real_T obj_Children[1122], const real_T obj_CutPoint
  [561], const real_T obj_NodeMean[561], const emxArray_real_T *X,
  emxArray_real_T *Yfit);

#endif

/* End of code generation (CompactRegressionTree.h) */
