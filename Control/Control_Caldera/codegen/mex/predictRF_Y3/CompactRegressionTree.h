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
  obj_CutVar[1289], const real_T obj_Children[2578], const real_T obj_CutPoint
  [1289], const real_T obj_NodeMean[1289], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ab_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1239], const real_T obj_Children[2478], const real_T obj_CutPoint
  [1239], const real_T obj_NodeMean[1239], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ac_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1295], const real_T obj_Children[2590], const real_T obj_CutPoint
  [1295], const real_T obj_NodeMean[1295], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void b_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1291], const real_T obj_Children[2582], const real_T obj_CutPoint
  [1291], const real_T obj_NodeMean[1291], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void bb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1269], const real_T obj_Children[2538], const real_T obj_CutPoint
  [1269], const real_T obj_NodeMean[1269], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void bc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1245], const real_T obj_Children[2490], const real_T obj_CutPoint
  [1245], const real_T obj_NodeMean[1245], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void c_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1297], const real_T obj_Children[2594], const real_T obj_CutPoint
  [1297], const real_T obj_NodeMean[1297], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void cb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1223], const real_T obj_Children[2446], const real_T obj_CutPoint
  [1223], const real_T obj_NodeMean[1223], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void cc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1317], const real_T obj_Children[2634], const real_T obj_CutPoint
  [1317], const real_T obj_NodeMean[1317], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void d_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1247], const real_T obj_Children[2494], const real_T obj_CutPoint
  [1247], const real_T obj_NodeMean[1247], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void db_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1303], const real_T obj_Children[2606], const real_T obj_CutPoint
  [1303], const real_T obj_NodeMean[1303], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void dc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1283], const real_T obj_Children[2566], const real_T obj_CutPoint
  [1283], const real_T obj_NodeMean[1283], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void e_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1281], const real_T obj_Children[2562], const real_T obj_CutPoint
  [1281], const real_T obj_NodeMean[1281], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void eb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1249], const real_T obj_Children[2498], const real_T obj_CutPoint
  [1249], const real_T obj_NodeMean[1249], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ec_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1381], const real_T obj_Children[2762], const real_T obj_CutPoint
  [1381], const real_T obj_NodeMean[1381], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void f_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1275], const real_T obj_Children[2550], const real_T obj_CutPoint
  [1275], const real_T obj_NodeMean[1275], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void fb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1335], const real_T obj_Children[2670], const real_T obj_CutPoint
  [1335], const real_T obj_NodeMean[1335], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void fc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1353], const real_T obj_Children[2706], const real_T obj_CutPoint
  [1353], const real_T obj_NodeMean[1353], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void g_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1271], const real_T obj_Children[2542], const real_T obj_CutPoint
  [1271], const real_T obj_NodeMean[1271], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void gb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1211], const real_T obj_Children[2422], const real_T obj_CutPoint
  [1211], const real_T obj_NodeMean[1211], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void gc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1193], const real_T obj_Children[2386], const real_T obj_CutPoint
  [1193], const real_T obj_NodeMean[1193], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void h_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1305], const real_T obj_Children[2610], const real_T obj_CutPoint
  [1305], const real_T obj_NodeMean[1305], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void hb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1299], const real_T obj_Children[2598], const real_T obj_CutPoint
  [1299], const real_T obj_NodeMean[1299], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void hc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1243], const real_T obj_Children[2486], const real_T obj_CutPoint
  [1243], const real_T obj_NodeMean[1243], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void i_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1235], const real_T obj_Children[2470], const real_T obj_CutPoint
  [1235], const real_T obj_NodeMean[1235], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ib_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1401], const real_T obj_Children[2802], const real_T obj_CutPoint
  [1401], const real_T obj_NodeMean[1401], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ic_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1323], const real_T obj_Children[2646], const real_T obj_CutPoint
  [1323], const real_T obj_NodeMean[1323], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void j_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1301], const real_T obj_Children[2602], const real_T obj_CutPoint
  [1301], const real_T obj_NodeMean[1301], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void jb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1261], const real_T obj_Children[2522], const real_T obj_CutPoint
  [1261], const real_T obj_NodeMean[1261], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void jc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1233], const real_T obj_Children[2466], const real_T obj_CutPoint
  [1233], const real_T obj_NodeMean[1233], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void k_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1377], const real_T obj_Children[2754], const real_T obj_CutPoint
  [1377], const real_T obj_NodeMean[1377], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void kb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1255], const real_T obj_Children[2510], const real_T obj_CutPoint
  [1255], const real_T obj_NodeMean[1255], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void l_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1413], const real_T obj_Children[2826], const real_T obj_CutPoint
  [1413], const real_T obj_NodeMean[1413], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void lb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1315], const real_T obj_Children[2630], const real_T obj_CutPoint
  [1315], const real_T obj_NodeMean[1315], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void m_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1287], const real_T obj_Children[2574], const real_T obj_CutPoint
  [1287], const real_T obj_NodeMean[1287], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void mb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1359], const real_T obj_Children[2718], const real_T obj_CutPoint
  [1359], const real_T obj_NodeMean[1359], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void n_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1319], const real_T obj_Children[2638], const real_T obj_CutPoint
  [1319], const real_T obj_NodeMean[1319], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void nb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1311], const real_T obj_Children[2622], const real_T obj_CutPoint
  [1311], const real_T obj_NodeMean[1311], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void o_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1351], const real_T obj_Children[2702], const real_T obj_CutPoint
  [1351], const real_T obj_NodeMean[1351], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ob_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1229], const real_T obj_Children[2458], const real_T obj_CutPoint
  [1229], const real_T obj_NodeMean[1229], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void p_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1337], const real_T obj_Children[2674], const real_T obj_CutPoint
  [1337], const real_T obj_NodeMean[1337], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void pb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1273], const real_T obj_Children[2546], const real_T obj_CutPoint
  [1273], const real_T obj_NodeMean[1273], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void q_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1263], const real_T obj_Children[2526], const real_T obj_CutPoint
  [1263], const real_T obj_NodeMean[1263], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void qb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1225], const real_T obj_Children[2450], const real_T obj_CutPoint
  [1225], const real_T obj_NodeMean[1225], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void r_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1293], const real_T obj_Children[2586], const real_T obj_CutPoint
  [1293], const real_T obj_NodeMean[1293], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void rb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1241], const real_T obj_Children[2482], const real_T obj_CutPoint
  [1241], const real_T obj_NodeMean[1241], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void s_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1237], const real_T obj_Children[2474], const real_T obj_CutPoint
  [1237], const real_T obj_NodeMean[1237], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void sb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1203], const real_T obj_Children[2406], const real_T obj_CutPoint
  [1203], const real_T obj_NodeMean[1203], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void t_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1201], const real_T obj_Children[2402], const real_T obj_CutPoint
  [1201], const real_T obj_NodeMean[1201], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void tb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1343], const real_T obj_Children[2686], const real_T obj_CutPoint
  [1343], const real_T obj_NodeMean[1343], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void u_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1267], const real_T obj_Children[2534], const real_T obj_CutPoint
  [1267], const real_T obj_NodeMean[1267], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ub_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1387], const real_T obj_Children[2774], const real_T obj_CutPoint
  [1387], const real_T obj_NodeMean[1387], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void v_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1259], const real_T obj_Children[2518], const real_T obj_CutPoint
  [1259], const real_T obj_NodeMean[1259], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void vb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1321], const real_T obj_Children[2642], const real_T obj_CutPoint
  [1321], const real_T obj_NodeMean[1321], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void w_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1279], const real_T obj_Children[2558], const real_T obj_CutPoint
  [1279], const real_T obj_NodeMean[1279], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void wb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1227], const real_T obj_Children[2454], const real_T obj_CutPoint
  [1227], const real_T obj_NodeMean[1227], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void x_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1307], const real_T obj_Children[2614], const real_T obj_CutPoint
  [1307], const real_T obj_NodeMean[1307], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void xb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1265], const real_T obj_Children[2530], const real_T obj_CutPoint
  [1265], const real_T obj_NodeMean[1265], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void y_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1327], const real_T obj_Children[2654], const real_T obj_CutPoint
  [1327], const real_T obj_NodeMean[1327], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void yb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1219], const real_T obj_Children[2438], const real_T obj_CutPoint
  [1219], const real_T obj_NodeMean[1219], const emxArray_real_T *X,
  emxArray_real_T *Yfit);

#endif

/* End of code generation (CompactRegressionTree.h) */
