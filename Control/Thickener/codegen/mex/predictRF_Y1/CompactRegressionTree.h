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
#include "predictRF_Y1_types.h"

/* Function Declarations */
extern void CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[551], const real_T obj_Children[1102], const real_T obj_CutPoint
  [551], const real_T obj_NodeMean[551], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ab_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[519], const real_T obj_Children[1038], const real_T obj_CutPoint
  [519], const real_T obj_NodeMean[519], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void b_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[553], const real_T obj_Children[1106], const real_T obj_CutPoint
  [553], const real_T obj_NodeMean[553], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void bb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[569], const real_T obj_Children[1138], const real_T obj_CutPoint
  [569], const real_T obj_NodeMean[569], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void c_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[537], const real_T obj_Children[1074], const real_T obj_CutPoint
  [537], const real_T obj_NodeMean[537], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void cb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[581], const real_T obj_Children[1162], const real_T obj_CutPoint
  [581], const real_T obj_NodeMean[581], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void d_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[549], const real_T obj_Children[1098], const real_T obj_CutPoint
  [549], const real_T obj_NodeMean[549], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void db_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[523], const real_T obj_Children[1046], const real_T obj_CutPoint
  [523], const real_T obj_NodeMean[523], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void e_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[557], const real_T obj_Children[1114], const real_T obj_CutPoint
  [557], const real_T obj_NodeMean[557], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void eb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[595], const real_T obj_Children[1190], const real_T obj_CutPoint
  [595], const real_T obj_NodeMean[595], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void f_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[535], const real_T obj_Children[1070], const real_T obj_CutPoint
  [535], const real_T obj_NodeMean[535], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void fb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[531], const real_T obj_Children[1062], const real_T obj_CutPoint
  [531], const real_T obj_NodeMean[531], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void g_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[555], const real_T obj_Children[1110], const real_T obj_CutPoint
  [555], const real_T obj_NodeMean[555], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void gb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[485], const real_T obj_Children[970], const real_T obj_CutPoint[485],
  const real_T obj_NodeMean[485], const emxArray_real_T *X, emxArray_real_T
  *Yfit);
extern void h_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[545], const real_T obj_Children[1090], const real_T obj_CutPoint
  [545], const real_T obj_NodeMean[545], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void hb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[591], const real_T obj_Children[1182], const real_T obj_CutPoint
  [591], const real_T obj_NodeMean[591], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void i_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[639], const real_T obj_Children[1278], const real_T obj_CutPoint
  [639], const real_T obj_NodeMean[639], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ib_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[525], const real_T obj_Children[1050], const real_T obj_CutPoint
  [525], const real_T obj_NodeMean[525], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void j_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[575], const real_T obj_Children[1150], const real_T obj_CutPoint
  [575], const real_T obj_NodeMean[575], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void k_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[533], const real_T obj_Children[1066], const real_T obj_CutPoint
  [533], const real_T obj_NodeMean[533], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void l_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[565], const real_T obj_Children[1130], const real_T obj_CutPoint
  [565], const real_T obj_NodeMean[565], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void m_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[615], const real_T obj_Children[1230], const real_T obj_CutPoint
  [615], const real_T obj_NodeMean[615], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void n_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[547], const real_T obj_Children[1094], const real_T obj_CutPoint
  [547], const real_T obj_NodeMean[547], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void o_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[539], const real_T obj_Children[1078], const real_T obj_CutPoint
  [539], const real_T obj_NodeMean[539], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void p_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[567], const real_T obj_Children[1134], const real_T obj_CutPoint
  [567], const real_T obj_NodeMean[567], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void q_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[529], const real_T obj_Children[1058], const real_T obj_CutPoint
  [529], const real_T obj_NodeMean[529], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void r_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[577], const real_T obj_Children[1154], const real_T obj_CutPoint
  [577], const real_T obj_NodeMean[577], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void s_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[561], const real_T obj_Children[1122], const real_T obj_CutPoint
  [561], const real_T obj_NodeMean[561], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void t_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[543], const real_T obj_Children[1086], const real_T obj_CutPoint
  [543], const real_T obj_NodeMean[543], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void u_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[571], const real_T obj_Children[1142], const real_T obj_CutPoint
  [571], const real_T obj_NodeMean[571], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void v_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[541], const real_T obj_Children[1082], const real_T obj_CutPoint
  [541], const real_T obj_NodeMean[541], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void w_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[563], const real_T obj_Children[1126], const real_T obj_CutPoint
  [563], const real_T obj_NodeMean[563], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void x_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[589], const real_T obj_Children[1178], const real_T obj_CutPoint
  [589], const real_T obj_NodeMean[589], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void y_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[573], const real_T obj_Children[1146], const real_T obj_CutPoint
  [573], const real_T obj_NodeMean[573], const emxArray_real_T *X,
  emxArray_real_T *Yfit);

#endif

/* End of code generation (CompactRegressionTree.h) */
