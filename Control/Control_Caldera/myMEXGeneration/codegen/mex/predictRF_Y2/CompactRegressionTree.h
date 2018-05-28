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
  obj_CutVar[657], const real_T obj_Children[1314], const real_T obj_CutPoint
  [657], const real_T obj_NodeMean[657], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ab_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[185], const real_T obj_Children[370], const real_T obj_CutPoint[185],
  const real_T obj_NodeMean[185], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void ac_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[361], const real_T obj_Children[722], const real_T obj_CutPoint[361],
  const real_T obj_NodeMean[361], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void b_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[533], const real_T obj_Children[1066], const real_T obj_CutPoint
  [533], const real_T obj_NodeMean[533], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void bb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[635], const real_T obj_Children[1270], const real_T obj_CutPoint
  [635], const real_T obj_NodeMean[635], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void bc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[537], const real_T obj_Children[1074], const real_T obj_CutPoint
  [537], const real_T obj_NodeMean[537], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void c_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[665], const real_T obj_Children[1330], const real_T obj_CutPoint
  [665], const real_T obj_NodeMean[665], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void cb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[633], const real_T obj_Children[1266], const real_T obj_CutPoint
  [633], const real_T obj_NodeMean[633], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void cc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[353], const real_T obj_Children[706], const real_T obj_CutPoint[353],
  const real_T obj_NodeMean[353], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void d_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[653], const real_T obj_Children[1306], const real_T obj_CutPoint
  [653], const real_T obj_NodeMean[653], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void db_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[659], const real_T obj_Children[1318], const real_T obj_CutPoint
  [659], const real_T obj_NodeMean[659], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void dc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[569], const real_T obj_Children[1138], const real_T obj_CutPoint
  [569], const real_T obj_NodeMean[569], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void e_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[673], const real_T obj_Children[1346], const real_T obj_CutPoint
  [673], const real_T obj_NodeMean[673], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void eb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[605], const real_T obj_Children[1210], const real_T obj_CutPoint
  [605], const real_T obj_NodeMean[605], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ec_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[599], const real_T obj_Children[1198], const real_T obj_CutPoint
  [599], const real_T obj_NodeMean[599], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void f_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[595], const real_T obj_Children[1190], const real_T obj_CutPoint
  [595], const real_T obj_NodeMean[595], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void fb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[637], const real_T obj_Children[1274], const real_T obj_CutPoint
  [637], const real_T obj_NodeMean[637], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void fc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[575], const real_T obj_Children[1150], const real_T obj_CutPoint
  [575], const real_T obj_NodeMean[575], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void g_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[611], const real_T obj_Children[1222], const real_T obj_CutPoint
  [611], const real_T obj_NodeMean[611], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void gb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[625], const real_T obj_Children[1250], const real_T obj_CutPoint
  [625], const real_T obj_NodeMean[625], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void gc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[525], const real_T obj_Children[1050], const real_T obj_CutPoint
  [525], const real_T obj_NodeMean[525], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void h_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[121], const real_T obj_Children[242], const real_T obj_CutPoint[121],
  const real_T obj_NodeMean[121], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void hb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[579], const real_T obj_Children[1158], const real_T obj_CutPoint
  [579], const real_T obj_NodeMean[579], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void hc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[3], const real_T obj_Children[6], const real_T obj_CutPoint[3],
  const real_T obj_NodeMean[3], const emxArray_real_T *X, emxArray_real_T *Yfit);
extern void i_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[601], const real_T obj_Children[1202], const real_T obj_CutPoint
  [601], const real_T obj_NodeMean[601], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ib_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[615], const real_T obj_Children[1230], const real_T obj_CutPoint
  [615], const real_T obj_NodeMean[615], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ic_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[663], const real_T obj_Children[1326], const real_T obj_CutPoint
  [663], const real_T obj_NodeMean[663], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void j_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[627], const real_T obj_Children[1254], const real_T obj_CutPoint
  [627], const real_T obj_NodeMean[627], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void jb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[707], const real_T obj_Children[1414], const real_T obj_CutPoint
  [707], const real_T obj_NodeMean[707], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void jc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[557], const real_T obj_Children[1114], const real_T obj_CutPoint
  [557], const real_T obj_NodeMean[557], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void k_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[583], const real_T obj_Children[1166], const real_T obj_CutPoint
  [583], const real_T obj_NodeMean[583], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void kb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[535], const real_T obj_Children[1070], const real_T obj_CutPoint
  [535], const real_T obj_NodeMean[535], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void kc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[617], const real_T obj_Children[1234], const real_T obj_CutPoint
  [617], const real_T obj_NodeMean[617], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void l_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[399], const real_T obj_Children[798], const real_T obj_CutPoint[399],
  const real_T obj_NodeMean[399], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void lb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[649], const real_T obj_Children[1298], const real_T obj_CutPoint
  [649], const real_T obj_NodeMean[649], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void lc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[609], const real_T obj_Children[1218], const real_T obj_CutPoint
  [609], const real_T obj_NodeMean[609], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void m_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[643], const real_T obj_Children[1286], const real_T obj_CutPoint
  [643], const real_T obj_NodeMean[643], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void mb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[531], const real_T obj_Children[1062], const real_T obj_CutPoint
  [531], const real_T obj_NodeMean[531], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void mc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[517], const real_T obj_Children[1034], const real_T obj_CutPoint
  [517], const real_T obj_NodeMean[517], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void n_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[639], const real_T obj_Children[1278], const real_T obj_CutPoint
  [639], const real_T obj_NodeMean[639], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void nb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[699], const real_T obj_Children[1398], const real_T obj_CutPoint
  [699], const real_T obj_NodeMean[699], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void nc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[467], const real_T obj_Children[934], const real_T obj_CutPoint[467],
  const real_T obj_NodeMean[467], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void o_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[619], const real_T obj_Children[1238], const real_T obj_CutPoint
  [619], const real_T obj_NodeMean[619], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ob_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[297], const real_T obj_Children[594], const real_T obj_CutPoint[297],
  const real_T obj_NodeMean[297], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void oc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[573], const real_T obj_Children[1146], const real_T obj_CutPoint
  [573], const real_T obj_NodeMean[573], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void p_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[463], const real_T obj_Children[926], const real_T obj_CutPoint[463],
  const real_T obj_NodeMean[463], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void pb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[511], const real_T obj_Children[1022], const real_T obj_CutPoint
  [511], const real_T obj_NodeMean[511], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void pc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[515], const real_T obj_Children[1030], const real_T obj_CutPoint
  [515], const real_T obj_NodeMean[515], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void q_CompactRegressionTree_predict(const emlrtStack *sp, real_T
  obj_NodeMean, const emxArray_real_T *X, emxArray_real_T *Yfit);
extern void qb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[697], const real_T obj_Children[1394], const real_T obj_CutPoint
  [697], const real_T obj_NodeMean[697], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void qc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[597], const real_T obj_Children[1194], const real_T obj_CutPoint
  [597], const real_T obj_NodeMean[597], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void r_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[685], const real_T obj_Children[1370], const real_T obj_CutPoint
  [685], const real_T obj_NodeMean[685], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void rb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[591], const real_T obj_Children[1182], const real_T obj_CutPoint
  [591], const real_T obj_NodeMean[591], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void rc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[505], const real_T obj_Children[1010], const real_T obj_CutPoint
  [505], const real_T obj_NodeMean[505], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void s_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[631], const real_T obj_Children[1262], const real_T obj_CutPoint
  [631], const real_T obj_NodeMean[631], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void sb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[677], const real_T obj_Children[1354], const real_T obj_CutPoint
  [677], const real_T obj_NodeMean[677], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void sc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[499], const real_T obj_Children[998], const real_T obj_CutPoint[499],
  const real_T obj_NodeMean[499], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void t_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[641], const real_T obj_Children[1282], const real_T obj_CutPoint
  [641], const real_T obj_NodeMean[641], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void tb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[513], const real_T obj_Children[1026], const real_T obj_CutPoint
  [513], const real_T obj_NodeMean[513], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void tc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[415], const real_T obj_Children[830], const real_T obj_CutPoint[415],
  const real_T obj_NodeMean[415], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void u_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[603], const real_T obj_Children[1206], const real_T obj_CutPoint
  [603], const real_T obj_NodeMean[603], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ub_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[317], const real_T obj_Children[634], const real_T obj_CutPoint[317],
  const real_T obj_NodeMean[317], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void v_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[629], const real_T obj_Children[1258], const real_T obj_CutPoint
  [629], const real_T obj_NodeMean[629], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void vb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[681], const real_T obj_Children[1362], const real_T obj_CutPoint
  [681], const real_T obj_NodeMean[681], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void w_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[593], const real_T obj_Children[1186], const real_T obj_CutPoint
  [593], const real_T obj_NodeMean[593], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void wb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[709], const real_T obj_Children[1418], const real_T obj_CutPoint
  [709], const real_T obj_NodeMean[709], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void x_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[545], const real_T obj_Children[1090], const real_T obj_CutPoint
  [545], const real_T obj_NodeMean[545], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void xb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[207], const real_T obj_Children[414], const real_T obj_CutPoint[207],
  const real_T obj_NodeMean[207], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void y_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[695], const real_T obj_Children[1390], const real_T obj_CutPoint
  [695], const real_T obj_NodeMean[695], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void yb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[585], const real_T obj_Children[1170], const real_T obj_CutPoint
  [585], const real_T obj_NodeMean[585], const emxArray_real_T *X,
  emxArray_real_T *Yfit);

#endif

/* End of code generation (CompactRegressionTree.h) */
