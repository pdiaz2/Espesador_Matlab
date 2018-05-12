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
  obj_CutVar[2711], const real_T obj_Children[5422], const real_T obj_CutPoint
  [2711], const real_T obj_NodeMean[2711], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ab_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2749], const real_T obj_Children[5498], const real_T obj_CutPoint
  [2749], const real_T obj_NodeMean[2749], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ac_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2641], const real_T obj_Children[5282], const real_T obj_CutPoint
  [2641], const real_T obj_NodeMean[2641], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void b_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2785], const real_T obj_Children[5570], const real_T obj_CutPoint
  [2785], const real_T obj_NodeMean[2785], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void bb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2595], const real_T obj_Children[5190], const real_T obj_CutPoint
  [2595], const real_T obj_NodeMean[2595], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void bc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2733], const real_T obj_Children[5466], const real_T obj_CutPoint
  [2733], const real_T obj_NodeMean[2733], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void c_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2751], const real_T obj_Children[5502], const real_T obj_CutPoint
  [2751], const real_T obj_NodeMean[2751], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void cb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2685], const real_T obj_Children[5370], const real_T obj_CutPoint
  [2685], const real_T obj_NodeMean[2685], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void cc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2715], const real_T obj_Children[5430], const real_T obj_CutPoint
  [2715], const real_T obj_NodeMean[2715], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void d_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2755], const real_T obj_Children[5510], const real_T obj_CutPoint
  [2755], const real_T obj_NodeMean[2755], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void db_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2727], const real_T obj_Children[5454], const real_T obj_CutPoint
  [2727], const real_T obj_NodeMean[2727], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void dc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2819], const real_T obj_Children[5638], const real_T obj_CutPoint
  [2819], const real_T obj_NodeMean[2819], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void e_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2777], const real_T obj_Children[5554], const real_T obj_CutPoint
  [2777], const real_T obj_NodeMean[2777], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void eb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2835], const real_T obj_Children[5670], const real_T obj_CutPoint
  [2835], const real_T obj_NodeMean[2835], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ec_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2673], const real_T obj_Children[5346], const real_T obj_CutPoint
  [2673], const real_T obj_NodeMean[2673], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void f_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2783], const real_T obj_Children[5566], const real_T obj_CutPoint
  [2783], const real_T obj_NodeMean[2783], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void fb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2723], const real_T obj_Children[5446], const real_T obj_CutPoint
  [2723], const real_T obj_NodeMean[2723], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void fc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2769], const real_T obj_Children[5538], const real_T obj_CutPoint
  [2769], const real_T obj_NodeMean[2769], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void g_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2745], const real_T obj_Children[5490], const real_T obj_CutPoint
  [2745], const real_T obj_NodeMean[2745], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void gb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2627], const real_T obj_Children[5254], const real_T obj_CutPoint
  [2627], const real_T obj_NodeMean[2627], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void gc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2729], const real_T obj_Children[5458], const real_T obj_CutPoint
  [2729], const real_T obj_NodeMean[2729], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void h_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2739], const real_T obj_Children[5478], const real_T obj_CutPoint
  [2739], const real_T obj_NodeMean[2739], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void hb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2587], const real_T obj_Children[5174], const real_T obj_CutPoint
  [2587], const real_T obj_NodeMean[2587], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void hc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2693], const real_T obj_Children[5386], const real_T obj_CutPoint
  [2693], const real_T obj_NodeMean[2693], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void i_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2799], const real_T obj_Children[5598], const real_T obj_CutPoint
  [2799], const real_T obj_NodeMean[2799], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ib_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2813], const real_T obj_Children[5626], const real_T obj_CutPoint
  [2813], const real_T obj_NodeMean[2813], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ic_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2827], const real_T obj_Children[5654], const real_T obj_CutPoint
  [2827], const real_T obj_NodeMean[2827], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void j_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2767], const real_T obj_Children[5534], const real_T obj_CutPoint
  [2767], const real_T obj_NodeMean[2767], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void jb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2781], const real_T obj_Children[5562], const real_T obj_CutPoint
  [2781], const real_T obj_NodeMean[2781], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void jc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2635], const real_T obj_Children[5270], const real_T obj_CutPoint
  [2635], const real_T obj_NodeMean[2635], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void k_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2837], const real_T obj_Children[5674], const real_T obj_CutPoint
  [2837], const real_T obj_NodeMean[2837], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void kb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2771], const real_T obj_Children[5542], const real_T obj_CutPoint
  [2771], const real_T obj_NodeMean[2771], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void kc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2719], const real_T obj_Children[5438], const real_T obj_CutPoint
  [2719], const real_T obj_NodeMean[2719], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void l_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2843], const real_T obj_Children[5686], const real_T obj_CutPoint
  [2843], const real_T obj_NodeMean[2843], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void lb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2817], const real_T obj_Children[5634], const real_T obj_CutPoint
  [2817], const real_T obj_NodeMean[2817], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void lc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2679], const real_T obj_Children[5358], const real_T obj_CutPoint
  [2679], const real_T obj_NodeMean[2679], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void m_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2709], const real_T obj_Children[5418], const real_T obj_CutPoint
  [2709], const real_T obj_NodeMean[2709], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void mb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2703], const real_T obj_Children[5406], const real_T obj_CutPoint
  [2703], const real_T obj_NodeMean[2703], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void mc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2717], const real_T obj_Children[5434], const real_T obj_CutPoint
  [2717], const real_T obj_NodeMean[2717], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void n_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2675], const real_T obj_Children[5350], const real_T obj_CutPoint
  [2675], const real_T obj_NodeMean[2675], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void nb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2841], const real_T obj_Children[5682], const real_T obj_CutPoint
  [2841], const real_T obj_NodeMean[2841], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void nc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2791], const real_T obj_Children[5582], const real_T obj_CutPoint
  [2791], const real_T obj_NodeMean[2791], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void o_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2605], const real_T obj_Children[5210], const real_T obj_CutPoint
  [2605], const real_T obj_NodeMean[2605], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ob_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2731], const real_T obj_Children[5462], const real_T obj_CutPoint
  [2731], const real_T obj_NodeMean[2731], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void oc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2763], const real_T obj_Children[5526], const real_T obj_CutPoint
  [2763], const real_T obj_NodeMean[2763], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void p_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2815], const real_T obj_Children[5630], const real_T obj_CutPoint
  [2815], const real_T obj_NodeMean[2815], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void pb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2779], const real_T obj_Children[5558], const real_T obj_CutPoint
  [2779], const real_T obj_NodeMean[2779], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void pc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2795], const real_T obj_Children[5590], const real_T obj_CutPoint
  [2795], const real_T obj_NodeMean[2795], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void q_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2803], const real_T obj_Children[5606], const real_T obj_CutPoint
  [2803], const real_T obj_NodeMean[2803], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void qb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2623], const real_T obj_Children[5246], const real_T obj_CutPoint
  [2623], const real_T obj_NodeMean[2623], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void qc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2629], const real_T obj_Children[5258], const real_T obj_CutPoint
  [2629], const real_T obj_NodeMean[2629], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void r_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2691], const real_T obj_Children[5382], const real_T obj_CutPoint
  [2691], const real_T obj_NodeMean[2691], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void rb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2823], const real_T obj_Children[5646], const real_T obj_CutPoint
  [2823], const real_T obj_NodeMean[2823], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void rc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2681], const real_T obj_Children[5362], const real_T obj_CutPoint
  [2681], const real_T obj_NodeMean[2681], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void s_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2761], const real_T obj_Children[5522], const real_T obj_CutPoint
  [2761], const real_T obj_NodeMean[2761], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void sb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2775], const real_T obj_Children[5550], const real_T obj_CutPoint
  [2775], const real_T obj_NodeMean[2775], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void sc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2825], const real_T obj_Children[5650], const real_T obj_CutPoint
  [2825], const real_T obj_NodeMean[2825], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void t_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2793], const real_T obj_Children[5586], const real_T obj_CutPoint
  [2793], const real_T obj_NodeMean[2793], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void tb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2393], const real_T obj_Children[4786], const real_T obj_CutPoint
  [2393], const real_T obj_NodeMean[2393], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void tc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2701], const real_T obj_Children[5402], const real_T obj_CutPoint
  [2701], const real_T obj_NodeMean[2701], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void u_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2757], const real_T obj_Children[5514], const real_T obj_CutPoint
  [2757], const real_T obj_NodeMean[2757], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ub_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2809], const real_T obj_Children[5618], const real_T obj_CutPoint
  [2809], const real_T obj_NodeMean[2809], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void uc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2621], const real_T obj_Children[5242], const real_T obj_CutPoint
  [2621], const real_T obj_NodeMean[2621], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void v_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2797], const real_T obj_Children[5594], const real_T obj_CutPoint
  [2797], const real_T obj_NodeMean[2797], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void vb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2805], const real_T obj_Children[5610], const real_T obj_CutPoint
  [2805], const real_T obj_NodeMean[2805], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void w_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2441], const real_T obj_Children[4882], const real_T obj_CutPoint
  [2441], const real_T obj_NodeMean[2441], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void wb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2741], const real_T obj_Children[5482], const real_T obj_CutPoint
  [2741], const real_T obj_NodeMean[2741], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void x_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2725], const real_T obj_Children[5450], const real_T obj_CutPoint
  [2725], const real_T obj_NodeMean[2725], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void xb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2811], const real_T obj_Children[5622], const real_T obj_CutPoint
  [2811], const real_T obj_NodeMean[2811], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void y_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2697], const real_T obj_Children[5394], const real_T obj_CutPoint
  [2697], const real_T obj_NodeMean[2697], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void yb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2721], const real_T obj_Children[5442], const real_T obj_CutPoint
  [2721], const real_T obj_NodeMean[2721], const emxArray_real_T *X,
  emxArray_real_T *Yfit);

#endif

/* End of code generation (CompactRegressionTree.h) */
