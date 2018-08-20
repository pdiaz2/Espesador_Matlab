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
#include "predictRF_Y3_B100_na6_nb6_1408_types.h"

/* Function Declarations */
extern void CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[347], const real_T obj_Children[694], const real_T obj_CutPoint[347],
  const real_T obj_NodeMean[347], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void ab_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[371], const real_T obj_Children[742], const real_T obj_CutPoint[371],
  const real_T obj_NodeMean[371], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void b_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[359], const real_T obj_Children[718], const real_T obj_CutPoint[359],
  const real_T obj_NodeMean[359], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void bb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[383], const real_T obj_Children[766], const real_T obj_CutPoint[383],
  const real_T obj_NodeMean[383], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void c_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[369], const real_T obj_Children[738], const real_T obj_CutPoint[369],
  const real_T obj_NodeMean[369], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void d_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[345], const real_T obj_Children[690], const real_T obj_CutPoint[345],
  const real_T obj_NodeMean[345], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void e_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[365], const real_T obj_Children[730], const real_T obj_CutPoint[365],
  const real_T obj_NodeMean[365], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void f_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[355], const real_T obj_Children[710], const real_T obj_CutPoint[355],
  const real_T obj_NodeMean[355], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void g_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[349], const real_T obj_Children[698], const real_T obj_CutPoint[349],
  const real_T obj_NodeMean[349], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void h_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[333], const real_T obj_Children[666], const real_T obj_CutPoint[333],
  const real_T obj_NodeMean[333], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void i_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[375], const real_T obj_Children[750], const real_T obj_CutPoint[375],
  const real_T obj_NodeMean[375], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void j_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[357], const real_T obj_Children[714], const real_T obj_CutPoint[357],
  const real_T obj_NodeMean[357], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void k_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[379], const real_T obj_Children[758], const real_T obj_CutPoint[379],
  const real_T obj_NodeMean[379], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void l_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[339], const real_T obj_Children[678], const real_T obj_CutPoint[339],
  const real_T obj_NodeMean[339], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void m_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[387], const real_T obj_Children[774], const real_T obj_CutPoint[387],
  const real_T obj_NodeMean[387], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void n_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[353], const real_T obj_Children[706], const real_T obj_CutPoint[353],
  const real_T obj_NodeMean[353], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void o_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[361], const real_T obj_Children[722], const real_T obj_CutPoint[361],
  const real_T obj_NodeMean[361], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void p_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[363], const real_T obj_Children[726], const real_T obj_CutPoint[363],
  const real_T obj_NodeMean[363], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void q_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[327], const real_T obj_Children[654], const real_T obj_CutPoint[327],
  const real_T obj_NodeMean[327], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void r_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[377], const real_T obj_Children[754], const real_T obj_CutPoint[377],
  const real_T obj_NodeMean[377], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void s_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[367], const real_T obj_Children[734], const real_T obj_CutPoint[367],
  const real_T obj_NodeMean[367], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void t_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[343], const real_T obj_Children[686], const real_T obj_CutPoint[343],
  const real_T obj_NodeMean[343], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void u_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[373], const real_T obj_Children[746], const real_T obj_CutPoint[373],
  const real_T obj_NodeMean[373], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void v_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[337], const real_T obj_Children[674], const real_T obj_CutPoint[337],
  const real_T obj_NodeMean[337], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void w_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[341], const real_T obj_Children[682], const real_T obj_CutPoint[341],
  const real_T obj_NodeMean[341], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void x_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[381], const real_T obj_Children[762], const real_T obj_CutPoint[381],
  const real_T obj_NodeMean[381], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void y_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[335], const real_T obj_Children[670], const real_T obj_CutPoint[335],
  const real_T obj_NodeMean[335], const emxArray_real_T *X, emxArray_real_T
  *Yfit);

#endif

/* End of code generation (CompactRegressionTree.h) */
