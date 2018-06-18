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
#include "predictRF_Y4_PRBS_types.h"

/* Function Declarations */
extern void CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[369], const real_T obj_Children[738], const real_T obj_CutPoint[369],
  const real_T obj_NodeMean[369], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void ab_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[313], const real_T obj_Children[626], const real_T obj_CutPoint[313],
  const real_T obj_NodeMean[313], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void b_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[363], const real_T obj_Children[726], const real_T obj_CutPoint[363],
  const real_T obj_NodeMean[363], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void bb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[299], const real_T obj_Children[598], const real_T obj_CutPoint[299],
  const real_T obj_NodeMean[299], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void c_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[349], const real_T obj_Children[698], const real_T obj_CutPoint[349],
  const real_T obj_NodeMean[349], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void cb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[333], const real_T obj_Children[666], const real_T obj_CutPoint[333],
  const real_T obj_NodeMean[333], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void d_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[423], const real_T obj_Children[846], const real_T obj_CutPoint[423],
  const real_T obj_NodeMean[423], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void db_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[395], const real_T obj_Children[790], const real_T obj_CutPoint[395],
  const real_T obj_NodeMean[395], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void e_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[343], const real_T obj_Children[686], const real_T obj_CutPoint[343],
  const real_T obj_NodeMean[343], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void eb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[365], const real_T obj_Children[730], const real_T obj_CutPoint[365],
  const real_T obj_NodeMean[365], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void f_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[379], const real_T obj_Children[758], const real_T obj_CutPoint[379],
  const real_T obj_NodeMean[379], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void fb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[391], const real_T obj_Children[782], const real_T obj_CutPoint[391],
  const real_T obj_NodeMean[391], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void g_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[359], const real_T obj_Children[718], const real_T obj_CutPoint[359],
  const real_T obj_NodeMean[359], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void gb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[337], const real_T obj_Children[674], const real_T obj_CutPoint[337],
  const real_T obj_NodeMean[337], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void h_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[317], const real_T obj_Children[634], const real_T obj_CutPoint[317],
  const real_T obj_NodeMean[317], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void hb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[367], const real_T obj_Children[734], const real_T obj_CutPoint[367],
  const real_T obj_NodeMean[367], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void i_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[361], const real_T obj_Children[722], const real_T obj_CutPoint[361],
  const real_T obj_NodeMean[361], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void ib_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[345], const real_T obj_Children[690], const real_T obj_CutPoint[345],
  const real_T obj_NodeMean[345], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void j_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[355], const real_T obj_Children[710], const real_T obj_CutPoint[355],
  const real_T obj_NodeMean[355], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void jb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[335], const real_T obj_Children[670], const real_T obj_CutPoint[335],
  const real_T obj_NodeMean[335], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void k_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[353], const real_T obj_Children[706], const real_T obj_CutPoint[353],
  const real_T obj_NodeMean[353], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void kb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[311], const real_T obj_Children[622], const real_T obj_CutPoint[311],
  const real_T obj_NodeMean[311], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void l_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[387], const real_T obj_Children[774], const real_T obj_CutPoint[387],
  const real_T obj_NodeMean[387], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void lb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[381], const real_T obj_Children[762], const real_T obj_CutPoint[381],
  const real_T obj_NodeMean[381], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void m_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[375], const real_T obj_Children[750], const real_T obj_CutPoint[375],
  const real_T obj_NodeMean[375], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void mb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[301], const real_T obj_Children[602], const real_T obj_CutPoint[301],
  const real_T obj_NodeMean[301], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void n_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[339], const real_T obj_Children[678], const real_T obj_CutPoint[339],
  const real_T obj_NodeMean[339], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void o_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[357], const real_T obj_Children[714], const real_T obj_CutPoint[357],
  const real_T obj_NodeMean[357], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void p_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[341], const real_T obj_Children[682], const real_T obj_CutPoint[341],
  const real_T obj_NodeMean[341], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void q_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[373], const real_T obj_Children[746], const real_T obj_CutPoint[373],
  const real_T obj_NodeMean[373], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void r_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[325], const real_T obj_Children[650], const real_T obj_CutPoint[325],
  const real_T obj_NodeMean[325], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void s_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[331], const real_T obj_Children[662], const real_T obj_CutPoint[331],
  const real_T obj_NodeMean[331], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void t_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[389], const real_T obj_Children[778], const real_T obj_CutPoint[389],
  const real_T obj_NodeMean[389], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void u_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[371], const real_T obj_Children[742], const real_T obj_CutPoint[371],
  const real_T obj_NodeMean[371], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void v_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[377], const real_T obj_Children[754], const real_T obj_CutPoint[377],
  const real_T obj_NodeMean[377], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void w_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[329], const real_T obj_Children[658], const real_T obj_CutPoint[329],
  const real_T obj_NodeMean[329], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void x_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[351], const real_T obj_Children[702], const real_T obj_CutPoint[351],
  const real_T obj_NodeMean[351], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void y_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[327], const real_T obj_Children[654], const real_T obj_CutPoint[327],
  const real_T obj_NodeMean[327], const emxArray_real_T *X, emxArray_real_T
  *Yfit);

#endif

/* End of code generation (CompactRegressionTree.h) */
