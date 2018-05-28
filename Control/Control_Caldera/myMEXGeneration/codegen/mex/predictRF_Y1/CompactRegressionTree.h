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
  obj_CutVar[2941], const real_T obj_Children[5882], const real_T obj_CutPoint
  [2941], const real_T obj_NodeMean[2941], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ab_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2957], const real_T obj_Children[5914], const real_T obj_CutPoint
  [2957], const real_T obj_NodeMean[2957], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void b_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2903], const real_T obj_Children[5806], const real_T obj_CutPoint
  [2903], const real_T obj_NodeMean[2903], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void bb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2909], const real_T obj_Children[5818], const real_T obj_CutPoint
  [2909], const real_T obj_NodeMean[2909], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void c_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2931], const real_T obj_Children[5862], const real_T obj_CutPoint
  [2931], const real_T obj_NodeMean[2931], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void cb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2899], const real_T obj_Children[5798], const real_T obj_CutPoint
  [2899], const real_T obj_NodeMean[2899], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void d_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2895], const real_T obj_Children[5790], const real_T obj_CutPoint
  [2895], const real_T obj_NodeMean[2895], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void db_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2947], const real_T obj_Children[5894], const real_T obj_CutPoint
  [2947], const real_T obj_NodeMean[2947], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void e_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2929], const real_T obj_Children[5858], const real_T obj_CutPoint
  [2929], const real_T obj_NodeMean[2929], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void eb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2951], const real_T obj_Children[5902], const real_T obj_CutPoint
  [2951], const real_T obj_NodeMean[2951], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void f_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2913], const real_T obj_Children[5826], const real_T obj_CutPoint
  [2913], const real_T obj_NodeMean[2913], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void fb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2877], const real_T obj_Children[5754], const real_T obj_CutPoint
  [2877], const real_T obj_NodeMean[2877], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void g_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2917], const real_T obj_Children[5834], const real_T obj_CutPoint
  [2917], const real_T obj_NodeMean[2917], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void gb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2959], const real_T obj_Children[5918], const real_T obj_CutPoint
  [2959], const real_T obj_NodeMean[2959], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void h_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2961], const real_T obj_Children[5922], const real_T obj_CutPoint
  [2961], const real_T obj_NodeMean[2961], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void hb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2935], const real_T obj_Children[5870], const real_T obj_CutPoint
  [2935], const real_T obj_NodeMean[2935], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void i_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2939], const real_T obj_Children[5878], const real_T obj_CutPoint
  [2939], const real_T obj_NodeMean[2939], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ib_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2901], const real_T obj_Children[5802], const real_T obj_CutPoint
  [2901], const real_T obj_NodeMean[2901], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void j_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2905], const real_T obj_Children[5810], const real_T obj_CutPoint
  [2905], const real_T obj_NodeMean[2905], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void jb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2945], const real_T obj_Children[5890], const real_T obj_CutPoint
  [2945], const real_T obj_NodeMean[2945], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void k_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2915], const real_T obj_Children[5830], const real_T obj_CutPoint
  [2915], const real_T obj_NodeMean[2915], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void kb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2893], const real_T obj_Children[5786], const real_T obj_CutPoint
  [2893], const real_T obj_NodeMean[2893], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void l_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2955], const real_T obj_Children[5910], const real_T obj_CutPoint
  [2955], const real_T obj_NodeMean[2955], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void lb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2923], const real_T obj_Children[5846], const real_T obj_CutPoint
  [2923], const real_T obj_NodeMean[2923], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void m_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2949], const real_T obj_Children[5898], const real_T obj_CutPoint
  [2949], const real_T obj_NodeMean[2949], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void mb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2879], const real_T obj_Children[5758], const real_T obj_CutPoint
  [2879], const real_T obj_NodeMean[2879], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void n_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2927], const real_T obj_Children[5854], const real_T obj_CutPoint
  [2927], const real_T obj_NodeMean[2927], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void nb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2963], const real_T obj_Children[5926], const real_T obj_CutPoint
  [2963], const real_T obj_NodeMean[2963], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void o_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2925], const real_T obj_Children[5850], const real_T obj_CutPoint
  [2925], const real_T obj_NodeMean[2925], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void p_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2853], const real_T obj_Children[5706], const real_T obj_CutPoint
  [2853], const real_T obj_NodeMean[2853], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void q_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2965], const real_T obj_Children[5930], const real_T obj_CutPoint
  [2965], const real_T obj_NodeMean[2965], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void r_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2937], const real_T obj_Children[5874], const real_T obj_CutPoint
  [2937], const real_T obj_NodeMean[2937], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void s_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2907], const real_T obj_Children[5814], const real_T obj_CutPoint
  [2907], const real_T obj_NodeMean[2907], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void t_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2919], const real_T obj_Children[5838], const real_T obj_CutPoint
  [2919], const real_T obj_NodeMean[2919], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void u_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2953], const real_T obj_Children[5906], const real_T obj_CutPoint
  [2953], const real_T obj_NodeMean[2953], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void v_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2943], const real_T obj_Children[5886], const real_T obj_CutPoint
  [2943], const real_T obj_NodeMean[2943], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void w_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2875], const real_T obj_Children[5750], const real_T obj_CutPoint
  [2875], const real_T obj_NodeMean[2875], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void x_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2921], const real_T obj_Children[5842], const real_T obj_CutPoint
  [2921], const real_T obj_NodeMean[2921], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void y_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[2933], const real_T obj_Children[5866], const real_T obj_CutPoint
  [2933], const real_T obj_NodeMean[2933], const emxArray_real_T *X,
  emxArray_real_T *Yfit);

#endif

/* End of code generation (CompactRegressionTree.h) */
