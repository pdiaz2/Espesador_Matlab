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
  obj_CutVar[2637], const real_T obj_Children[5274], const real_T obj_CutPoint
  [2637], const real_T obj_NodeMean[2637], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ab_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2651], const real_T obj_Children[5302], const real_T obj_CutPoint
  [2651], const real_T obj_NodeMean[2651], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void b_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2641], const real_T obj_Children[5282], const real_T obj_CutPoint
  [2641], const real_T obj_NodeMean[2641], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void bb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2639], const real_T obj_Children[5278], const real_T obj_CutPoint
  [2639], const real_T obj_NodeMean[2639], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void c_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2595], const real_T obj_Children[5190], const real_T obj_CutPoint
  [2595], const real_T obj_NodeMean[2595], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void cb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2579], const real_T obj_Children[5158], const real_T obj_CutPoint
  [2579], const real_T obj_NodeMean[2579], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void d_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2607], const real_T obj_Children[5214], const real_T obj_CutPoint
  [2607], const real_T obj_NodeMean[2607], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void db_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2627], const real_T obj_Children[5254], const real_T obj_CutPoint
  [2627], const real_T obj_NodeMean[2627], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void e_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2635], const real_T obj_Children[5270], const real_T obj_CutPoint
  [2635], const real_T obj_NodeMean[2635], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void eb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2669], const real_T obj_Children[5338], const real_T obj_CutPoint
  [2669], const real_T obj_NodeMean[2669], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void f_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2601], const real_T obj_Children[5202], const real_T obj_CutPoint
  [2601], const real_T obj_NodeMean[2601], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void fb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2663], const real_T obj_Children[5326], const real_T obj_CutPoint
  [2663], const real_T obj_NodeMean[2663], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void g_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2597], const real_T obj_Children[5194], const real_T obj_CutPoint
  [2597], const real_T obj_NodeMean[2597], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void gb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2591], const real_T obj_Children[5182], const real_T obj_CutPoint
  [2591], const real_T obj_NodeMean[2591], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void h_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2625], const real_T obj_Children[5250], const real_T obj_CutPoint
  [2625], const real_T obj_NodeMean[2625], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void hb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2615], const real_T obj_Children[5230], const real_T obj_CutPoint
  [2615], const real_T obj_NodeMean[2615], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void i_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2603], const real_T obj_Children[5206], const real_T obj_CutPoint
  [2603], const real_T obj_NodeMean[2603], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ib_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2613], const real_T obj_Children[5226], const real_T obj_CutPoint
  [2613], const real_T obj_NodeMean[2613], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void j_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2645], const real_T obj_Children[5290], const real_T obj_CutPoint
  [2645], const real_T obj_NodeMean[2645], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void jb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2665], const real_T obj_Children[5330], const real_T obj_CutPoint
  [2665], const real_T obj_NodeMean[2665], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void k_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2567], const real_T obj_Children[5134], const real_T obj_CutPoint
  [2567], const real_T obj_NodeMean[2567], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void kb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2671], const real_T obj_Children[5342], const real_T obj_CutPoint
  [2671], const real_T obj_NodeMean[2671], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void l_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2643], const real_T obj_Children[5286], const real_T obj_CutPoint
  [2643], const real_T obj_NodeMean[2643], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void lb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2619], const real_T obj_Children[5238], const real_T obj_CutPoint
  [2619], const real_T obj_NodeMean[2619], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void m_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2573], const real_T obj_Children[5146], const real_T obj_CutPoint
  [2573], const real_T obj_NodeMean[2573], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void mb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2657], const real_T obj_Children[5314], const real_T obj_CutPoint
  [2657], const real_T obj_NodeMean[2657], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void n_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2587], const real_T obj_Children[5174], const real_T obj_CutPoint
  [2587], const real_T obj_NodeMean[2587], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void nb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2633], const real_T obj_Children[5266], const real_T obj_CutPoint
  [2633], const real_T obj_NodeMean[2633], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void o_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2679], const real_T obj_Children[5358], const real_T obj_CutPoint
  [2679], const real_T obj_NodeMean[2679], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ob_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2593], const real_T obj_Children[5186], const real_T obj_CutPoint
  [2593], const real_T obj_NodeMean[2593], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void p_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2611], const real_T obj_Children[5222], const real_T obj_CutPoint
  [2611], const real_T obj_NodeMean[2611], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void pb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2685], const real_T obj_Children[5370], const real_T obj_CutPoint
  [2685], const real_T obj_NodeMean[2685], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void q_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2631], const real_T obj_Children[5262], const real_T obj_CutPoint
  [2631], const real_T obj_NodeMean[2631], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void qb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2605], const real_T obj_Children[5210], const real_T obj_CutPoint
  [2605], const real_T obj_NodeMean[2605], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void r_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2617], const real_T obj_Children[5234], const real_T obj_CutPoint
  [2617], const real_T obj_NodeMean[2617], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void rb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2609], const real_T obj_Children[5218], const real_T obj_CutPoint
  [2609], const real_T obj_NodeMean[2609], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void s_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2589], const real_T obj_Children[5178], const real_T obj_CutPoint
  [2589], const real_T obj_NodeMean[2589], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void sb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2649], const real_T obj_Children[5298], const real_T obj_CutPoint
  [2649], const real_T obj_NodeMean[2649], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void t_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2675], const real_T obj_Children[5350], const real_T obj_CutPoint
  [2675], const real_T obj_NodeMean[2675], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void tb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2623], const real_T obj_Children[5246], const real_T obj_CutPoint
  [2623], const real_T obj_NodeMean[2623], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void u_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2575], const real_T obj_Children[5150], const real_T obj_CutPoint
  [2575], const real_T obj_NodeMean[2575], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ub_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2655], const real_T obj_Children[5310], const real_T obj_CutPoint
  [2655], const real_T obj_NodeMean[2655], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void v_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2621], const real_T obj_Children[5242], const real_T obj_CutPoint
  [2621], const real_T obj_NodeMean[2621], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void w_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2697], const real_T obj_Children[5394], const real_T obj_CutPoint
  [2697], const real_T obj_NodeMean[2697], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void x_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2571], const real_T obj_Children[5142], const real_T obj_CutPoint
  [2571], const real_T obj_NodeMean[2571], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void y_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2629], const real_T obj_Children[5258], const real_T obj_CutPoint
  [2629], const real_T obj_NodeMean[2629], const emxArray_real_T *X,
  emxArray_real_T *Yfit);

#endif

/* End of code generation (CompactRegressionTree.h) */
