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
  obj_CutVar[4633], const real_T obj_Children[9266], const real_T obj_CutPoint
  [4633], const real_T obj_NodeMean[4633], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ab_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4659], const real_T obj_Children[9318], const real_T obj_CutPoint
  [4659], const real_T obj_NodeMean[4659], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ac_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4629], const real_T obj_Children[9258], const real_T obj_CutPoint
  [4629], const real_T obj_NodeMean[4629], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void b_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4619], const real_T obj_Children[9238], const real_T obj_CutPoint
  [4619], const real_T obj_NodeMean[4619], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void bb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4625], const real_T obj_Children[9250], const real_T obj_CutPoint
  [4625], const real_T obj_NodeMean[4625], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void bc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4613], const real_T obj_Children[9226], const real_T obj_CutPoint
  [4613], const real_T obj_NodeMean[4613], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void c_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4789], const real_T obj_Children[9578], const real_T obj_CutPoint
  [4789], const real_T obj_NodeMean[4789], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void cb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4639], const real_T obj_Children[9278], const real_T obj_CutPoint
  [4639], const real_T obj_NodeMean[4639], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void cc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4669], const real_T obj_Children[9338], const real_T obj_CutPoint
  [4669], const real_T obj_NodeMean[4669], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void d_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4567], const real_T obj_Children[9134], const real_T obj_CutPoint
  [4567], const real_T obj_NodeMean[4567], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void db_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4677], const real_T obj_Children[9354], const real_T obj_CutPoint
  [4677], const real_T obj_NodeMean[4677], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void dc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4535], const real_T obj_Children[9070], const real_T obj_CutPoint
  [4535], const real_T obj_NodeMean[4535], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void e_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4577], const real_T obj_Children[9154], const real_T obj_CutPoint
  [4577], const real_T obj_NodeMean[4577], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void eb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4575], const real_T obj_Children[9150], const real_T obj_CutPoint
  [4575], const real_T obj_NodeMean[4575], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ec_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4741], const real_T obj_Children[9482], const real_T obj_CutPoint
  [4741], const real_T obj_NodeMean[4741], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void f_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4637], const real_T obj_Children[9274], const real_T obj_CutPoint
  [4637], const real_T obj_NodeMean[4637], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void fb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4563], const real_T obj_Children[9126], const real_T obj_CutPoint
  [4563], const real_T obj_NodeMean[4563], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void fc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4621], const real_T obj_Children[9242], const real_T obj_CutPoint
  [4621], const real_T obj_NodeMean[4621], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void g_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4435], const real_T obj_Children[8870], const real_T obj_CutPoint
  [4435], const real_T obj_NodeMean[4435], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void gb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4549], const real_T obj_Children[9098], const real_T obj_CutPoint
  [4549], const real_T obj_NodeMean[4549], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void gc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4583], const real_T obj_Children[9166], const real_T obj_CutPoint
  [4583], const real_T obj_NodeMean[4583], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void h_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4795], const real_T obj_Children[9590], const real_T obj_CutPoint
  [4795], const real_T obj_NodeMean[4795], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void hb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4447], const real_T obj_Children[8894], const real_T obj_CutPoint
  [4447], const real_T obj_NodeMean[4447], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void hc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4661], const real_T obj_Children[9322], const real_T obj_CutPoint
  [4661], const real_T obj_NodeMean[4661], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void i_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4703], const real_T obj_Children[9406], const real_T obj_CutPoint
  [4703], const real_T obj_NodeMean[4703], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ib_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4709], const real_T obj_Children[9418], const real_T obj_CutPoint
  [4709], const real_T obj_NodeMean[4709], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ic_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4545], const real_T obj_Children[9090], const real_T obj_CutPoint
  [4545], const real_T obj_NodeMean[4545], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void j_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4691], const real_T obj_Children[9382], const real_T obj_CutPoint
  [4691], const real_T obj_NodeMean[4691], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void jb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4785], const real_T obj_Children[9570], const real_T obj_CutPoint
  [4785], const real_T obj_NodeMean[4785], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void jc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4707], const real_T obj_Children[9414], const real_T obj_CutPoint
  [4707], const real_T obj_NodeMean[4707], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void k_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4665], const real_T obj_Children[9330], const real_T obj_CutPoint
  [4665], const real_T obj_NodeMean[4665], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void kb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4597], const real_T obj_Children[9194], const real_T obj_CutPoint
  [4597], const real_T obj_NodeMean[4597], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void kc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4615], const real_T obj_Children[9230], const real_T obj_CutPoint
  [4615], const real_T obj_NodeMean[4615], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void l_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4713], const real_T obj_Children[9426], const real_T obj_CutPoint
  [4713], const real_T obj_NodeMean[4713], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void lb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4683], const real_T obj_Children[9366], const real_T obj_CutPoint
  [4683], const real_T obj_NodeMean[4683], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void lc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4477], const real_T obj_Children[8954], const real_T obj_CutPoint
  [4477], const real_T obj_NodeMean[4477], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void m_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4685], const real_T obj_Children[9370], const real_T obj_CutPoint
  [4685], const real_T obj_NodeMean[4685], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void mb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4589], const real_T obj_Children[9178], const real_T obj_CutPoint
  [4589], const real_T obj_NodeMean[4589], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void mc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4465], const real_T obj_Children[8930], const real_T obj_CutPoint
  [4465], const real_T obj_NodeMean[4465], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void n_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4605], const real_T obj_Children[9210], const real_T obj_CutPoint
  [4605], const real_T obj_NodeMean[4605], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void nb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4505], const real_T obj_Children[9010], const real_T obj_CutPoint
  [4505], const real_T obj_NodeMean[4505], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void nc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4887], const real_T obj_Children[9774], const real_T obj_CutPoint
  [4887], const real_T obj_NodeMean[4887], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void o_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4681], const real_T obj_Children[9362], const real_T obj_CutPoint
  [4681], const real_T obj_NodeMean[4681], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ob_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4569], const real_T obj_Children[9138], const real_T obj_CutPoint
  [4569], const real_T obj_NodeMean[4569], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void oc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4635], const real_T obj_Children[9270], const real_T obj_CutPoint
  [4635], const real_T obj_NodeMean[4635], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void p_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4697], const real_T obj_Children[9394], const real_T obj_CutPoint
  [4697], const real_T obj_NodeMean[4697], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void pb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4631], const real_T obj_Children[9262], const real_T obj_CutPoint
  [4631], const real_T obj_NodeMean[4631], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void pc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4543], const real_T obj_Children[9086], const real_T obj_CutPoint
  [4543], const real_T obj_NodeMean[4543], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void q_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4815], const real_T obj_Children[9630], const real_T obj_CutPoint
  [4815], const real_T obj_NodeMean[4815], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void qb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4603], const real_T obj_Children[9206], const real_T obj_CutPoint
  [4603], const real_T obj_NodeMean[4603], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void qc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4565], const real_T obj_Children[9130], const real_T obj_CutPoint
  [4565], const real_T obj_NodeMean[4565], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void r_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4783], const real_T obj_Children[9566], const real_T obj_CutPoint
  [4783], const real_T obj_NodeMean[4783], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void rb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4723], const real_T obj_Children[9446], const real_T obj_CutPoint
  [4723], const real_T obj_NodeMean[4723], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void rc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4481], const real_T obj_Children[8962], const real_T obj_CutPoint
  [4481], const real_T obj_NodeMean[4481], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void s_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4393], const real_T obj_Children[8786], const real_T obj_CutPoint
  [4393], const real_T obj_NodeMean[4393], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void sb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4693], const real_T obj_Children[9386], const real_T obj_CutPoint
  [4693], const real_T obj_NodeMean[4693], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void sc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4673], const real_T obj_Children[9346], const real_T obj_CutPoint
  [4673], const real_T obj_NodeMean[4673], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void t_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4735], const real_T obj_Children[9470], const real_T obj_CutPoint
  [4735], const real_T obj_NodeMean[4735], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void tb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4725], const real_T obj_Children[9450], const real_T obj_CutPoint
  [4725], const real_T obj_NodeMean[4725], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void tc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4679], const real_T obj_Children[9358], const real_T obj_CutPoint
  [4679], const real_T obj_NodeMean[4679], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void u_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4645], const real_T obj_Children[9290], const real_T obj_CutPoint
  [4645], const real_T obj_NodeMean[4645], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ub_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4653], const real_T obj_Children[9306], const real_T obj_CutPoint
  [4653], const real_T obj_NodeMean[4653], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void uc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4443], const real_T obj_Children[8886], const real_T obj_CutPoint
  [4443], const real_T obj_NodeMean[4443], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void v_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4663], const real_T obj_Children[9326], const real_T obj_CutPoint
  [4663], const real_T obj_NodeMean[4663], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void vb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4647], const real_T obj_Children[9294], const real_T obj_CutPoint
  [4647], const real_T obj_NodeMean[4647], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void vc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4749], const real_T obj_Children[9498], const real_T obj_CutPoint
  [4749], const real_T obj_NodeMean[4749], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void w_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4759], const real_T obj_Children[9518], const real_T obj_CutPoint
  [4759], const real_T obj_NodeMean[4759], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void wb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4781], const real_T obj_Children[9562], const real_T obj_CutPoint
  [4781], const real_T obj_NodeMean[4781], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void wc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4591], const real_T obj_Children[9182], const real_T obj_CutPoint
  [4591], const real_T obj_NodeMean[4591], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void x_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4717], const real_T obj_Children[9434], const real_T obj_CutPoint
  [4717], const real_T obj_NodeMean[4717], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void xb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4511], const real_T obj_Children[9022], const real_T obj_CutPoint
  [4511], const real_T obj_NodeMean[4511], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void xc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4555], const real_T obj_Children[9110], const real_T obj_CutPoint
  [4555], const real_T obj_NodeMean[4555], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void y_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4617], const real_T obj_Children[9234], const real_T obj_CutPoint
  [4617], const real_T obj_NodeMean[4617], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void yb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[3915], const real_T obj_Children[7830], const real_T obj_CutPoint
  [3915], const real_T obj_NodeMean[3915], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void yc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4509], const real_T obj_Children[9018], const real_T obj_CutPoint
  [4509], const real_T obj_NodeMean[4509], const emxArray_real_T *X,
  emxArray_real_T *Yfit);

#endif

/* End of code generation (CompactRegressionTree.h) */
