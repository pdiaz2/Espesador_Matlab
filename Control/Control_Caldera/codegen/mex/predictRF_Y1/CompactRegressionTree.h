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
  obj_CutVar[4383], const real_T obj_Children[8766], const real_T obj_CutPoint
  [4383], const real_T obj_NodeMean[4383], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ab_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4381], const real_T obj_Children[8762], const real_T obj_CutPoint
  [4381], const real_T obj_NodeMean[4381], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ac_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4357], const real_T obj_Children[8714], const real_T obj_CutPoint
  [4357], const real_T obj_NodeMean[4357], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void b_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4345], const real_T obj_Children[8690], const real_T obj_CutPoint
  [4345], const real_T obj_NodeMean[4345], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void bb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4343], const real_T obj_Children[8686], const real_T obj_CutPoint
  [4343], const real_T obj_NodeMean[4343], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void bc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4363], const real_T obj_Children[8726], const real_T obj_CutPoint
  [4363], const real_T obj_NodeMean[4363], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void c_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4443], const real_T obj_Children[8886], const real_T obj_CutPoint
  [4443], const real_T obj_NodeMean[4443], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void cb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4463], const real_T obj_Children[8926], const real_T obj_CutPoint
  [4463], const real_T obj_NodeMean[4463], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void cc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4485], const real_T obj_Children[8970], const real_T obj_CutPoint
  [4485], const real_T obj_NodeMean[4485], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void d_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4423], const real_T obj_Children[8846], const real_T obj_CutPoint
  [4423], const real_T obj_NodeMean[4423], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void db_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4407], const real_T obj_Children[8814], const real_T obj_CutPoint
  [4407], const real_T obj_NodeMean[4407], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void dc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4405], const real_T obj_Children[8810], const real_T obj_CutPoint
  [4405], const real_T obj_NodeMean[4405], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void e_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4425], const real_T obj_Children[8850], const real_T obj_CutPoint
  [4425], const real_T obj_NodeMean[4425], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void eb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4385], const real_T obj_Children[8770], const real_T obj_CutPoint
  [4385], const real_T obj_NodeMean[4385], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void f_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4431], const real_T obj_Children[8862], const real_T obj_CutPoint
  [4431], const real_T obj_NodeMean[4431], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void fb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4413], const real_T obj_Children[8826], const real_T obj_CutPoint
  [4413], const real_T obj_NodeMean[4413], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void g_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4391], const real_T obj_Children[8782], const real_T obj_CutPoint
  [4391], const real_T obj_NodeMean[4391], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void gb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4389], const real_T obj_Children[8778], const real_T obj_CutPoint
  [4389], const real_T obj_NodeMean[4389], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void h_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4455], const real_T obj_Children[8910], const real_T obj_CutPoint
  [4455], const real_T obj_NodeMean[4455], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void hb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4493], const real_T obj_Children[8986], const real_T obj_CutPoint
  [4493], const real_T obj_NodeMean[4493], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void i_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4415], const real_T obj_Children[8830], const real_T obj_CutPoint
  [4415], const real_T obj_NodeMean[4415], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ib_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4375], const real_T obj_Children[8750], const real_T obj_CutPoint
  [4375], const real_T obj_NodeMean[4375], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void j_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4399], const real_T obj_Children[8798], const real_T obj_CutPoint
  [4399], const real_T obj_NodeMean[4399], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void jb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4387], const real_T obj_Children[8774], const real_T obj_CutPoint
  [4387], const real_T obj_NodeMean[4387], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void k_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4365], const real_T obj_Children[8730], const real_T obj_CutPoint
  [4365], const real_T obj_NodeMean[4365], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void kb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4461], const real_T obj_Children[8922], const real_T obj_CutPoint
  [4461], const real_T obj_NodeMean[4461], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void l_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4433], const real_T obj_Children[8866], const real_T obj_CutPoint
  [4433], const real_T obj_NodeMean[4433], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void lb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4325], const real_T obj_Children[8650], const real_T obj_CutPoint
  [4325], const real_T obj_NodeMean[4325], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void m_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4475], const real_T obj_Children[8950], const real_T obj_CutPoint
  [4475], const real_T obj_NodeMean[4475], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void mb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4459], const real_T obj_Children[8918], const real_T obj_CutPoint
  [4459], const real_T obj_NodeMean[4459], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void n_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4401], const real_T obj_Children[8802], const real_T obj_CutPoint
  [4401], const real_T obj_NodeMean[4401], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void nb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4373], const real_T obj_Children[8746], const real_T obj_CutPoint
  [4373], const real_T obj_NodeMean[4373], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void o_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4379], const real_T obj_Children[8758], const real_T obj_CutPoint
  [4379], const real_T obj_NodeMean[4379], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ob_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4367], const real_T obj_Children[8734], const real_T obj_CutPoint
  [4367], const real_T obj_NodeMean[4367], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void p_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4393], const real_T obj_Children[8786], const real_T obj_CutPoint
  [4393], const real_T obj_NodeMean[4393], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void pb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4503], const real_T obj_Children[9006], const real_T obj_CutPoint
  [4503], const real_T obj_NodeMean[4503], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void q_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4359], const real_T obj_Children[8718], const real_T obj_CutPoint
  [4359], const real_T obj_NodeMean[4359], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void qb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4397], const real_T obj_Children[8794], const real_T obj_CutPoint
  [4397], const real_T obj_NodeMean[4397], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void r_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4439], const real_T obj_Children[8878], const real_T obj_CutPoint
  [4439], const real_T obj_NodeMean[4439], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void rb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4491], const real_T obj_Children[8982], const real_T obj_CutPoint
  [4491], const real_T obj_NodeMean[4491], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void s_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4421], const real_T obj_Children[8842], const real_T obj_CutPoint
  [4421], const real_T obj_NodeMean[4421], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void sb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4477], const real_T obj_Children[8954], const real_T obj_CutPoint
  [4477], const real_T obj_NodeMean[4477], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void t_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4445], const real_T obj_Children[8890], const real_T obj_CutPoint
  [4445], const real_T obj_NodeMean[4445], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void tb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4471], const real_T obj_Children[8942], const real_T obj_CutPoint
  [4471], const real_T obj_NodeMean[4471], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void u_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4441], const real_T obj_Children[8882], const real_T obj_CutPoint
  [4441], const real_T obj_NodeMean[4441], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ub_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4403], const real_T obj_Children[8806], const real_T obj_CutPoint
  [4403], const real_T obj_NodeMean[4403], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void v_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4411], const real_T obj_Children[8822], const real_T obj_CutPoint
  [4411], const real_T obj_NodeMean[4411], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void vb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4409], const real_T obj_Children[8818], const real_T obj_CutPoint
  [4409], const real_T obj_NodeMean[4409], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void w_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4419], const real_T obj_Children[8838], const real_T obj_CutPoint
  [4419], const real_T obj_NodeMean[4419], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void wb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4467], const real_T obj_Children[8934], const real_T obj_CutPoint
  [4467], const real_T obj_NodeMean[4467], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void x_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4435], const real_T obj_Children[8870], const real_T obj_CutPoint
  [4435], const real_T obj_NodeMean[4435], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void xb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4395], const real_T obj_Children[8790], const real_T obj_CutPoint
  [4395], const real_T obj_NodeMean[4395], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void y_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4427], const real_T obj_Children[8854], const real_T obj_CutPoint
  [4427], const real_T obj_NodeMean[4427], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void yb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4483], const real_T obj_Children[8966], const real_T obj_CutPoint
  [4483], const real_T obj_NodeMean[4483], const emxArray_real_T *X,
  emxArray_real_T *Yfit);

#endif

/* End of code generation (CompactRegressionTree.h) */
