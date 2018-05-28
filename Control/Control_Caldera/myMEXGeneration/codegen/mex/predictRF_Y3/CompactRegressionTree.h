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
  obj_CutVar[5147], const real_T obj_Children[10294], const real_T obj_CutPoint
  [5147], const real_T obj_NodeMean[5147], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ab_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[5131], const real_T obj_Children[10262], const real_T obj_CutPoint
  [5131], const real_T obj_NodeMean[5131], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void b_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[5099], const real_T obj_Children[10198], const real_T obj_CutPoint
  [5099], const real_T obj_NodeMean[5099], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void bb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[5141], const real_T obj_Children[10282], const real_T obj_CutPoint
  [5141], const real_T obj_NodeMean[5141], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void c_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[5187], const real_T obj_Children[10374], const real_T obj_CutPoint
  [5187], const real_T obj_NodeMean[5187], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void cb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[5125], const real_T obj_Children[10250], const real_T obj_CutPoint
  [5125], const real_T obj_NodeMean[5125], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void d_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[5061], const real_T obj_Children[10122], const real_T obj_CutPoint
  [5061], const real_T obj_NodeMean[5061], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void db_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4959], const real_T obj_Children[9918], const real_T obj_CutPoint
  [4959], const real_T obj_NodeMean[4959], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void e_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[5083], const real_T obj_Children[10166], const real_T obj_CutPoint
  [5083], const real_T obj_NodeMean[5083], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void eb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[5153], const real_T obj_Children[10306], const real_T obj_CutPoint
  [5153], const real_T obj_NodeMean[5153], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void f_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[5165], const real_T obj_Children[10330], const real_T obj_CutPoint
  [5165], const real_T obj_NodeMean[5165], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void fb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[5149], const real_T obj_Children[10298], const real_T obj_CutPoint
  [5149], const real_T obj_NodeMean[5149], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void g_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[5105], const real_T obj_Children[10210], const real_T obj_CutPoint
  [5105], const real_T obj_NodeMean[5105], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void gb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[5113], const real_T obj_Children[10226], const real_T obj_CutPoint
  [5113], const real_T obj_NodeMean[5113], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void h_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[5185], const real_T obj_Children[10370], const real_T obj_CutPoint
  [5185], const real_T obj_NodeMean[5185], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void hb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[5095], const real_T obj_Children[10190], const real_T obj_CutPoint
  [5095], const real_T obj_NodeMean[5095], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void i_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[5155], const real_T obj_Children[10310], const real_T obj_CutPoint
  [5155], const real_T obj_NodeMean[5155], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ib_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[5159], const real_T obj_Children[10318], const real_T obj_CutPoint
  [5159], const real_T obj_NodeMean[5159], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void j_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[5117], const real_T obj_Children[10234], const real_T obj_CutPoint
  [5117], const real_T obj_NodeMean[5117], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void jb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[5103], const real_T obj_Children[10206], const real_T obj_CutPoint
  [5103], const real_T obj_NodeMean[5103], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void k_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[5129], const real_T obj_Children[10258], const real_T obj_CutPoint
  [5129], const real_T obj_NodeMean[5129], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void kb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[5115], const real_T obj_Children[10230], const real_T obj_CutPoint
  [5115], const real_T obj_NodeMean[5115], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void l_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[5135], const real_T obj_Children[10270], const real_T obj_CutPoint
  [5135], const real_T obj_NodeMean[5135], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void lb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[5177], const real_T obj_Children[10354], const real_T obj_CutPoint
  [5177], const real_T obj_NodeMean[5177], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void m_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[5119], const real_T obj_Children[10238], const real_T obj_CutPoint
  [5119], const real_T obj_NodeMean[5119], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void mb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[5107], const real_T obj_Children[10214], const real_T obj_CutPoint
  [5107], const real_T obj_NodeMean[5107], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void n_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[5151], const real_T obj_Children[10302], const real_T obj_CutPoint
  [5151], const real_T obj_NodeMean[5151], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void nb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[5079], const real_T obj_Children[10158], const real_T obj_CutPoint
  [5079], const real_T obj_NodeMean[5079], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void o_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[5139], const real_T obj_Children[10278], const real_T obj_CutPoint
  [5139], const real_T obj_NodeMean[5139], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ob_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[5167], const real_T obj_Children[10334], const real_T obj_CutPoint
  [5167], const real_T obj_NodeMean[5167], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void p_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[5145], const real_T obj_Children[10290], const real_T obj_CutPoint
  [5145], const real_T obj_NodeMean[5145], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void pb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[5081], const real_T obj_Children[10162], const real_T obj_CutPoint
  [5081], const real_T obj_NodeMean[5081], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void q_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[5111], const real_T obj_Children[10222], const real_T obj_CutPoint
  [5111], const real_T obj_NodeMean[5111], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void qb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4763], const real_T obj_Children[9526], const real_T obj_CutPoint
  [4763], const real_T obj_NodeMean[4763], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void r_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[5127], const real_T obj_Children[10254], const real_T obj_CutPoint
  [5127], const real_T obj_NodeMean[5127], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void rb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[5173], const real_T obj_Children[10346], const real_T obj_CutPoint
  [5173], const real_T obj_NodeMean[5173], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void s_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[5157], const real_T obj_Children[10314], const real_T obj_CutPoint
  [5157], const real_T obj_NodeMean[5157], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void sb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[5087], const real_T obj_Children[10174], const real_T obj_CutPoint
  [5087], const real_T obj_NodeMean[5087], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void t_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[5121], const real_T obj_Children[10242], const real_T obj_CutPoint
  [5121], const real_T obj_NodeMean[5121], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void tb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[5093], const real_T obj_Children[10186], const real_T obj_CutPoint
  [5093], const real_T obj_NodeMean[5093], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void u_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[5137], const real_T obj_Children[10274], const real_T obj_CutPoint
  [5137], const real_T obj_NodeMean[5137], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ub_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[5075], const real_T obj_Children[10150], const real_T obj_CutPoint
  [5075], const real_T obj_NodeMean[5075], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void v_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[5123], const real_T obj_Children[10246], const real_T obj_CutPoint
  [5123], const real_T obj_NodeMean[5123], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void vb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[5179], const real_T obj_Children[10358], const real_T obj_CutPoint
  [5179], const real_T obj_NodeMean[5179], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void w_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[5163], const real_T obj_Children[10326], const real_T obj_CutPoint
  [5163], const real_T obj_NodeMean[5163], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void wb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[5133], const real_T obj_Children[10266], const real_T obj_CutPoint
  [5133], const real_T obj_NodeMean[5133], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void x_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[5143], const real_T obj_Children[10286], const real_T obj_CutPoint
  [5143], const real_T obj_NodeMean[5143], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void xb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4965], const real_T obj_Children[9930], const real_T obj_CutPoint
  [4965], const real_T obj_NodeMean[4965], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void y_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[5077], const real_T obj_Children[10154], const real_T obj_CutPoint
  [5077], const real_T obj_NodeMean[5077], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void yb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[5109], const real_T obj_Children[10218], const real_T obj_CutPoint
  [5109], const real_T obj_NodeMean[5109], const emxArray_real_T *X,
  emxArray_real_T *Yfit);

#endif

/* End of code generation (CompactRegressionTree.h) */
