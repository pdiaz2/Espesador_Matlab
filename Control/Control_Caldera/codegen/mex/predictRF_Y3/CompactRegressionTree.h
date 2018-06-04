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
  obj_CutVar[967], const real_T obj_Children[1934], const real_T obj_CutPoint
  [967], const real_T obj_NodeMean[967], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ab_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1043], const real_T obj_Children[2086], const real_T obj_CutPoint
  [1043], const real_T obj_NodeMean[1043], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ac_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[993], const real_T obj_Children[1986], const real_T obj_CutPoint
  [993], const real_T obj_NodeMean[993], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void b_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[965], const real_T obj_Children[1930], const real_T obj_CutPoint
  [965], const real_T obj_NodeMean[965], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void bb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[995], const real_T obj_Children[1990], const real_T obj_CutPoint
  [995], const real_T obj_NodeMean[995], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void bc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1027], const real_T obj_Children[2054], const real_T obj_CutPoint
  [1027], const real_T obj_NodeMean[1027], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void c_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1023], const real_T obj_Children[2046], const real_T obj_CutPoint
  [1023], const real_T obj_NodeMean[1023], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void cb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[957], const real_T obj_Children[1914], const real_T obj_CutPoint
  [957], const real_T obj_NodeMean[957], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void cc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1009], const real_T obj_Children[2018], const real_T obj_CutPoint
  [1009], const real_T obj_NodeMean[1009], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void d_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1025], const real_T obj_Children[2050], const real_T obj_CutPoint
  [1025], const real_T obj_NodeMean[1025], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void db_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1029], const real_T obj_Children[2058], const real_T obj_CutPoint
  [1029], const real_T obj_NodeMean[1029], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void dc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[915], const real_T obj_Children[1830], const real_T obj_CutPoint
  [915], const real_T obj_NodeMean[915], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void e_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1001], const real_T obj_Children[2002], const real_T obj_CutPoint
  [1001], const real_T obj_NodeMean[1001], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void eb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1019], const real_T obj_Children[2038], const real_T obj_CutPoint
  [1019], const real_T obj_NodeMean[1019], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ec_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[839], const real_T obj_Children[1678], const real_T obj_CutPoint
  [839], const real_T obj_NodeMean[839], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void f_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[971], const real_T obj_Children[1942], const real_T obj_CutPoint
  [971], const real_T obj_NodeMean[971], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void fb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[919], const real_T obj_Children[1838], const real_T obj_CutPoint
  [919], const real_T obj_NodeMean[919], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void fc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[979], const real_T obj_Children[1958], const real_T obj_CutPoint
  [979], const real_T obj_NodeMean[979], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void g_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1039], const real_T obj_Children[2078], const real_T obj_CutPoint
  [1039], const real_T obj_NodeMean[1039], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void gb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1033], const real_T obj_Children[2066], const real_T obj_CutPoint
  [1033], const real_T obj_NodeMean[1033], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void gc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[973], const real_T obj_Children[1946], const real_T obj_CutPoint
  [973], const real_T obj_NodeMean[973], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void h_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1077], const real_T obj_Children[2154], const real_T obj_CutPoint
  [1077], const real_T obj_NodeMean[1077], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void hb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1041], const real_T obj_Children[2082], const real_T obj_CutPoint
  [1041], const real_T obj_NodeMean[1041], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void hc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1079], const real_T obj_Children[2158], const real_T obj_CutPoint
  [1079], const real_T obj_NodeMean[1079], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void i_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[999], const real_T obj_Children[1998], const real_T obj_CutPoint
  [999], const real_T obj_NodeMean[999], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ib_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1035], const real_T obj_Children[2070], const real_T obj_CutPoint
  [1035], const real_T obj_NodeMean[1035], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void j_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[987], const real_T obj_Children[1974], const real_T obj_CutPoint
  [987], const real_T obj_NodeMean[987], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void jb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[959], const real_T obj_Children[1918], const real_T obj_CutPoint
  [959], const real_T obj_NodeMean[959], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void k_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1015], const real_T obj_Children[2030], const real_T obj_CutPoint
  [1015], const real_T obj_NodeMean[1015], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void kb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1031], const real_T obj_Children[2062], const real_T obj_CutPoint
  [1031], const real_T obj_NodeMean[1031], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void l_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1021], const real_T obj_Children[2042], const real_T obj_CutPoint
  [1021], const real_T obj_NodeMean[1021], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void lb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[969], const real_T obj_Children[1938], const real_T obj_CutPoint
  [969], const real_T obj_NodeMean[969], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void m_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[985], const real_T obj_Children[1970], const real_T obj_CutPoint
  [985], const real_T obj_NodeMean[985], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void mb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1003], const real_T obj_Children[2006], const real_T obj_CutPoint
  [1003], const real_T obj_NodeMean[1003], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void n_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[997], const real_T obj_Children[1994], const real_T obj_CutPoint
  [997], const real_T obj_NodeMean[997], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void nb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1057], const real_T obj_Children[2114], const real_T obj_CutPoint
  [1057], const real_T obj_NodeMean[1057], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void o_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[943], const real_T obj_Children[1886], const real_T obj_CutPoint
  [943], const real_T obj_NodeMean[943], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ob_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1005], const real_T obj_Children[2010], const real_T obj_CutPoint
  [1005], const real_T obj_NodeMean[1005], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void p_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1037], const real_T obj_Children[2074], const real_T obj_CutPoint
  [1037], const real_T obj_NodeMean[1037], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void pb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[927], const real_T obj_Children[1854], const real_T obj_CutPoint
  [927], const real_T obj_NodeMean[927], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void q_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1059], const real_T obj_Children[2118], const real_T obj_CutPoint
  [1059], const real_T obj_NodeMean[1059], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void qb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1061], const real_T obj_Children[2122], const real_T obj_CutPoint
  [1061], const real_T obj_NodeMean[1061], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void r_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[923], const real_T obj_Children[1846], const real_T obj_CutPoint
  [923], const real_T obj_NodeMean[923], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void rb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[989], const real_T obj_Children[1978], const real_T obj_CutPoint
  [989], const real_T obj_NodeMean[989], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void s_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[921], const real_T obj_Children[1842], const real_T obj_CutPoint
  [921], const real_T obj_NodeMean[921], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void sb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[953], const real_T obj_Children[1906], const real_T obj_CutPoint
  [953], const real_T obj_NodeMean[953], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void t_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[963], const real_T obj_Children[1926], const real_T obj_CutPoint
  [963], const real_T obj_NodeMean[963], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void tb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[925], const real_T obj_Children[1850], const real_T obj_CutPoint
  [925], const real_T obj_NodeMean[925], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void u_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1011], const real_T obj_Children[2022], const real_T obj_CutPoint
  [1011], const real_T obj_NodeMean[1011], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ub_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1093], const real_T obj_Children[2186], const real_T obj_CutPoint
  [1093], const real_T obj_NodeMean[1093], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void v_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1051], const real_T obj_Children[2102], const real_T obj_CutPoint
  [1051], const real_T obj_NodeMean[1051], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void vb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1047], const real_T obj_Children[2094], const real_T obj_CutPoint
  [1047], const real_T obj_NodeMean[1047], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void w_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1007], const real_T obj_Children[2014], const real_T obj_CutPoint
  [1007], const real_T obj_NodeMean[1007], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void wb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1053], const real_T obj_Children[2106], const real_T obj_CutPoint
  [1053], const real_T obj_NodeMean[1053], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void x_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1071], const real_T obj_Children[2142], const real_T obj_CutPoint
  [1071], const real_T obj_NodeMean[1071], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void xb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[981], const real_T obj_Children[1962], const real_T obj_CutPoint
  [981], const real_T obj_NodeMean[981], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void y_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1017], const real_T obj_Children[2034], const real_T obj_CutPoint
  [1017], const real_T obj_NodeMean[1017], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void yb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[975], const real_T obj_Children[1950], const real_T obj_CutPoint
  [975], const real_T obj_NodeMean[975], const emxArray_real_T *X,
  emxArray_real_T *Yfit);

#endif

/* End of code generation (CompactRegressionTree.h) */
