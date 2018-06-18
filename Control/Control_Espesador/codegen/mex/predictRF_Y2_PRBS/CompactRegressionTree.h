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
#include "predictRF_Y2_PRBS_types.h"

/* Function Declarations */
extern void CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1029], const real_T obj_Children[2058], const real_T obj_CutPoint
  [1029], const real_T obj_NodeMean[1029], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ab_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1015], const real_T obj_Children[2030], const real_T obj_CutPoint
  [1015], const real_T obj_NodeMean[1015], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void b_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1045], const real_T obj_Children[2090], const real_T obj_CutPoint
  [1045], const real_T obj_NodeMean[1045], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void bb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1039], const real_T obj_Children[2078], const real_T obj_CutPoint
  [1039], const real_T obj_NodeMean[1039], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void c_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1053], const real_T obj_Children[2106], const real_T obj_CutPoint
  [1053], const real_T obj_NodeMean[1053], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void cb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[927], const real_T obj_Children[1854], const real_T obj_CutPoint
  [927], const real_T obj_NodeMean[927], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void d_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1019], const real_T obj_Children[2038], const real_T obj_CutPoint
  [1019], const real_T obj_NodeMean[1019], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void db_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1051], const real_T obj_Children[2102], const real_T obj_CutPoint
  [1051], const real_T obj_NodeMean[1051], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void e_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1035], const real_T obj_Children[2070], const real_T obj_CutPoint
  [1035], const real_T obj_NodeMean[1035], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void eb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1005], const real_T obj_Children[2010], const real_T obj_CutPoint
  [1005], const real_T obj_NodeMean[1005], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void f_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1017], const real_T obj_Children[2034], const real_T obj_CutPoint
  [1017], const real_T obj_NodeMean[1017], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void fb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1033], const real_T obj_Children[2066], const real_T obj_CutPoint
  [1033], const real_T obj_NodeMean[1033], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void g_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1011], const real_T obj_Children[2022], const real_T obj_CutPoint
  [1011], const real_T obj_NodeMean[1011], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void gb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1009], const real_T obj_Children[2018], const real_T obj_CutPoint
  [1009], const real_T obj_NodeMean[1009], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void h_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[953], const real_T obj_Children[1906], const real_T obj_CutPoint
  [953], const real_T obj_NodeMean[953], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void hb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1073], const real_T obj_Children[2146], const real_T obj_CutPoint
  [1073], const real_T obj_NodeMean[1073], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void i_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1055], const real_T obj_Children[2110], const real_T obj_CutPoint
  [1055], const real_T obj_NodeMean[1055], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ib_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1041], const real_T obj_Children[2082], const real_T obj_CutPoint
  [1041], const real_T obj_NodeMean[1041], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void j_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[997], const real_T obj_Children[1994], const real_T obj_CutPoint
  [997], const real_T obj_NodeMean[997], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void jb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1077], const real_T obj_Children[2154], const real_T obj_CutPoint
  [1077], const real_T obj_NodeMean[1077], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void k_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1027], const real_T obj_Children[2054], const real_T obj_CutPoint
  [1027], const real_T obj_NodeMean[1027], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void kb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[993], const real_T obj_Children[1986], const real_T obj_CutPoint
  [993], const real_T obj_NodeMean[993], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void l_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1007], const real_T obj_Children[2014], const real_T obj_CutPoint
  [1007], const real_T obj_NodeMean[1007], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void lb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1021], const real_T obj_Children[2042], const real_T obj_CutPoint
  [1021], const real_T obj_NodeMean[1021], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void m_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1057], const real_T obj_Children[2114], const real_T obj_CutPoint
  [1057], const real_T obj_NodeMean[1057], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void mb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[983], const real_T obj_Children[1966], const real_T obj_CutPoint
  [983], const real_T obj_NodeMean[983], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void n_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1099], const real_T obj_Children[2198], const real_T obj_CutPoint
  [1099], const real_T obj_NodeMean[1099], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void nb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1001], const real_T obj_Children[2002], const real_T obj_CutPoint
  [1001], const real_T obj_NodeMean[1001], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void o_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1003], const real_T obj_Children[2006], const real_T obj_CutPoint
  [1003], const real_T obj_NodeMean[1003], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ob_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1061], const real_T obj_Children[2122], const real_T obj_CutPoint
  [1061], const real_T obj_NodeMean[1061], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void p_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1059], const real_T obj_Children[2118], const real_T obj_CutPoint
  [1059], const real_T obj_NodeMean[1059], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void pb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[971], const real_T obj_Children[1942], const real_T obj_CutPoint
  [971], const real_T obj_NodeMean[971], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void q_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1069], const real_T obj_Children[2138], const real_T obj_CutPoint
  [1069], const real_T obj_NodeMean[1069], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void qb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[991], const real_T obj_Children[1982], const real_T obj_CutPoint
  [991], const real_T obj_NodeMean[991], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void r_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[975], const real_T obj_Children[1950], const real_T obj_CutPoint
  [975], const real_T obj_NodeMean[975], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void rb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[969], const real_T obj_Children[1938], const real_T obj_CutPoint
  [969], const real_T obj_NodeMean[969], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void s_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[989], const real_T obj_Children[1978], const real_T obj_CutPoint
  [989], const real_T obj_NodeMean[989], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void sb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1025], const real_T obj_Children[2050], const real_T obj_CutPoint
  [1025], const real_T obj_NodeMean[1025], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void t_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[999], const real_T obj_Children[1998], const real_T obj_CutPoint
  [999], const real_T obj_NodeMean[999], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void tb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[957], const real_T obj_Children[1914], const real_T obj_CutPoint
  [957], const real_T obj_NodeMean[957], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void u_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[973], const real_T obj_Children[1946], const real_T obj_CutPoint
  [973], const real_T obj_NodeMean[973], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ub_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[965], const real_T obj_Children[1930], const real_T obj_CutPoint
  [965], const real_T obj_NodeMean[965], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void v_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1013], const real_T obj_Children[2026], const real_T obj_CutPoint
  [1013], const real_T obj_NodeMean[1013], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void vb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1047], const real_T obj_Children[2094], const real_T obj_CutPoint
  [1047], const real_T obj_NodeMean[1047], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void w_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[951], const real_T obj_Children[1902], const real_T obj_CutPoint
  [951], const real_T obj_NodeMean[951], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void wb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1031], const real_T obj_Children[2062], const real_T obj_CutPoint
  [1031], const real_T obj_NodeMean[1031], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void x_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[981], const real_T obj_Children[1962], const real_T obj_CutPoint
  [981], const real_T obj_NodeMean[981], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void xb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1023], const real_T obj_Children[2046], const real_T obj_CutPoint
  [1023], const real_T obj_NodeMean[1023], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void y_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[995], const real_T obj_Children[1990], const real_T obj_CutPoint
  [995], const real_T obj_NodeMean[995], const emxArray_real_T *X,
  emxArray_real_T *Yfit);

#endif

/* End of code generation (CompactRegressionTree.h) */
