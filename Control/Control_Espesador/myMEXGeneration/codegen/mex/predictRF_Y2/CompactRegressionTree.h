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
#include "predictRF_Y2_types.h"

/* Function Declarations */
extern void CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[931], const real_T obj_Children[1862], const real_T obj_CutPoint
  [931], const real_T obj_NodeMean[931], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ab_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[937], const real_T obj_Children[1874], const real_T obj_CutPoint
  [937], const real_T obj_NodeMean[937], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void b_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[949], const real_T obj_Children[1898], const real_T obj_CutPoint
  [949], const real_T obj_NodeMean[949], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void bb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[893], const real_T obj_Children[1786], const real_T obj_CutPoint
  [893], const real_T obj_NodeMean[893], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void c_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[877], const real_T obj_Children[1754], const real_T obj_CutPoint
  [877], const real_T obj_NodeMean[877], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void cb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[901], const real_T obj_Children[1802], const real_T obj_CutPoint
  [901], const real_T obj_NodeMean[901], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void d_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[887], const real_T obj_Children[1774], const real_T obj_CutPoint
  [887], const real_T obj_NodeMean[887], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void db_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[899], const real_T obj_Children[1798], const real_T obj_CutPoint
  [899], const real_T obj_NodeMean[899], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void e_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[885], const real_T obj_Children[1770], const real_T obj_CutPoint
  [885], const real_T obj_NodeMean[885], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void eb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[865], const real_T obj_Children[1730], const real_T obj_CutPoint
  [865], const real_T obj_NodeMean[865], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void f_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[911], const real_T obj_Children[1822], const real_T obj_CutPoint
  [911], const real_T obj_NodeMean[911], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void fb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[941], const real_T obj_Children[1882], const real_T obj_CutPoint
  [941], const real_T obj_NodeMean[941], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void g_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[915], const real_T obj_Children[1830], const real_T obj_CutPoint
  [915], const real_T obj_NodeMean[915], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void gb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[925], const real_T obj_Children[1850], const real_T obj_CutPoint
  [925], const real_T obj_NodeMean[925], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void h_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[929], const real_T obj_Children[1858], const real_T obj_CutPoint
  [929], const real_T obj_NodeMean[929], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void hb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[961], const real_T obj_Children[1922], const real_T obj_CutPoint
  [961], const real_T obj_NodeMean[961], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void i_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[921], const real_T obj_Children[1842], const real_T obj_CutPoint
  [921], const real_T obj_NodeMean[921], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ib_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[945], const real_T obj_Children[1890], const real_T obj_CutPoint
  [945], const real_T obj_NodeMean[945], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void j_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[881], const real_T obj_Children[1762], const real_T obj_CutPoint
  [881], const real_T obj_NodeMean[881], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void jb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[913], const real_T obj_Children[1826], const real_T obj_CutPoint
  [913], const real_T obj_NodeMean[913], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void k_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[927], const real_T obj_Children[1854], const real_T obj_CutPoint
  [927], const real_T obj_NodeMean[927], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void kb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[909], const real_T obj_Children[1818], const real_T obj_CutPoint
  [909], const real_T obj_NodeMean[909], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void l_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[897], const real_T obj_Children[1794], const real_T obj_CutPoint
  [897], const real_T obj_NodeMean[897], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void lb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[907], const real_T obj_Children[1814], const real_T obj_CutPoint
  [907], const real_T obj_NodeMean[907], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void m_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[905], const real_T obj_Children[1810], const real_T obj_CutPoint
  [905], const real_T obj_NodeMean[905], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void mb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[955], const real_T obj_Children[1910], const real_T obj_CutPoint
  [955], const real_T obj_NodeMean[955], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void n_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[903], const real_T obj_Children[1806], const real_T obj_CutPoint
  [903], const real_T obj_NodeMean[903], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void nb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[943], const real_T obj_Children[1886], const real_T obj_CutPoint
  [943], const real_T obj_NodeMean[943], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void o_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[939], const real_T obj_Children[1878], const real_T obj_CutPoint
  [939], const real_T obj_NodeMean[939], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ob_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[883], const real_T obj_Children[1766], const real_T obj_CutPoint
  [883], const real_T obj_NodeMean[883], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void p_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[871], const real_T obj_Children[1742], const real_T obj_CutPoint
  [871], const real_T obj_NodeMean[871], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void pb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[869], const real_T obj_Children[1738], const real_T obj_CutPoint
  [869], const real_T obj_NodeMean[869], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void q_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[917], const real_T obj_Children[1834], const real_T obj_CutPoint
  [917], const real_T obj_NodeMean[917], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void qb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[969], const real_T obj_Children[1938], const real_T obj_CutPoint
  [969], const real_T obj_NodeMean[969], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void r_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[895], const real_T obj_Children[1790], const real_T obj_CutPoint
  [895], const real_T obj_NodeMean[895], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void rb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[933], const real_T obj_Children[1866], const real_T obj_CutPoint
  [933], const real_T obj_NodeMean[933], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void s_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[923], const real_T obj_Children[1846], const real_T obj_CutPoint
  [923], const real_T obj_NodeMean[923], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void sb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[971], const real_T obj_Children[1942], const real_T obj_CutPoint
  [971], const real_T obj_NodeMean[971], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void t_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[979], const real_T obj_Children[1958], const real_T obj_CutPoint
  [979], const real_T obj_NodeMean[979], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void u_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[851], const real_T obj_Children[1702], const real_T obj_CutPoint
  [851], const real_T obj_NodeMean[851], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void v_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[919], const real_T obj_Children[1838], const real_T obj_CutPoint
  [919], const real_T obj_NodeMean[919], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void w_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[983], const real_T obj_Children[1966], const real_T obj_CutPoint
  [983], const real_T obj_NodeMean[983], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void x_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[879], const real_T obj_Children[1758], const real_T obj_CutPoint
  [879], const real_T obj_NodeMean[879], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void y_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[889], const real_T obj_Children[1778], const real_T obj_CutPoint
  [889], const real_T obj_NodeMean[889], const emxArray_real_T *X,
  emxArray_real_T *Yfit);

#endif

/* End of code generation (CompactRegressionTree.h) */
