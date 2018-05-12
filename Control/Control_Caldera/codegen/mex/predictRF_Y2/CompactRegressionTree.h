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
  obj_CutVar[1693], const real_T obj_Children[3386], const real_T obj_CutPoint
  [1693], const real_T obj_NodeMean[1693], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ab_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1633], const real_T obj_Children[3266], const real_T obj_CutPoint
  [1633], const real_T obj_NodeMean[1633], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ac_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1947], const real_T obj_Children[3894], const real_T obj_CutPoint
  [1947], const real_T obj_NodeMean[1947], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ad_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1601], const real_T obj_Children[3202], const real_T obj_CutPoint
  [1601], const real_T obj_NodeMean[1601], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void b_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1265], const real_T obj_Children[2530], const real_T obj_CutPoint
  [1265], const real_T obj_NodeMean[1265], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void bb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1801], const real_T obj_Children[3602], const real_T obj_CutPoint
  [1801], const real_T obj_NodeMean[1801], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void bc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1519], const real_T obj_Children[3038], const real_T obj_CutPoint
  [1519], const real_T obj_NodeMean[1519], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void bd_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1891], const real_T obj_Children[3782], const real_T obj_CutPoint
  [1891], const real_T obj_NodeMean[1891], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void c_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1895], const real_T obj_Children[3790], const real_T obj_CutPoint
  [1895], const real_T obj_NodeMean[1895], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void cb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1797], const real_T obj_Children[3594], const real_T obj_CutPoint
  [1797], const real_T obj_NodeMean[1797], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void cc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1919], const real_T obj_Children[3838], const real_T obj_CutPoint
  [1919], const real_T obj_NodeMean[1919], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void cd_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1779], const real_T obj_Children[3558], const real_T obj_CutPoint
  [1779], const real_T obj_NodeMean[1779], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void d_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1955], const real_T obj_Children[3910], const real_T obj_CutPoint
  [1955], const real_T obj_NodeMean[1955], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void db_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1807], const real_T obj_Children[3614], const real_T obj_CutPoint
  [1807], const real_T obj_NodeMean[1807], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void dc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1745], const real_T obj_Children[3490], const real_T obj_CutPoint
  [1745], const real_T obj_NodeMean[1745], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void dd_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1333], const real_T obj_Children[2666], const real_T obj_CutPoint
  [1333], const real_T obj_NodeMean[1333], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void e_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1733], const real_T obj_Children[3466], const real_T obj_CutPoint
  [1733], const real_T obj_NodeMean[1733], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void eb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1503], const real_T obj_Children[3006], const real_T obj_CutPoint
  [1503], const real_T obj_NodeMean[1503], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ec_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1685], const real_T obj_Children[3370], const real_T obj_CutPoint
  [1685], const real_T obj_NodeMean[1685], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ed_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1317], const real_T obj_Children[2634], const real_T obj_CutPoint
  [1317], const real_T obj_NodeMean[1317], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void f_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1935], const real_T obj_Children[3870], const real_T obj_CutPoint
  [1935], const real_T obj_NodeMean[1935], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void fb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1649], const real_T obj_Children[3298], const real_T obj_CutPoint
  [1649], const real_T obj_NodeMean[1649], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void fc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1749], const real_T obj_Children[3498], const real_T obj_CutPoint
  [1749], const real_T obj_NodeMean[1749], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void fd_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1737], const real_T obj_Children[3474], const real_T obj_CutPoint
  [1737], const real_T obj_NodeMean[1737], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void g_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1873], const real_T obj_Children[3746], const real_T obj_CutPoint
  [1873], const real_T obj_NodeMean[1873], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void gb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1721], const real_T obj_Children[3442], const real_T obj_CutPoint
  [1721], const real_T obj_NodeMean[1721], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void gc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1967], const real_T obj_Children[3934], const real_T obj_CutPoint
  [1967], const real_T obj_NodeMean[1967], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void gd_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1419], const real_T obj_Children[2838], const real_T obj_CutPoint
  [1419], const real_T obj_NodeMean[1419], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void h_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1775], const real_T obj_Children[3550], const real_T obj_CutPoint
  [1775], const real_T obj_NodeMean[1775], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void hb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1907], const real_T obj_Children[3814], const real_T obj_CutPoint
  [1907], const real_T obj_NodeMean[1907], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void hc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1939], const real_T obj_Children[3878], const real_T obj_CutPoint
  [1939], const real_T obj_NodeMean[1939], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void hd_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1387], const real_T obj_Children[2774], const real_T obj_CutPoint
  [1387], const real_T obj_NodeMean[1387], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void i_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1787], const real_T obj_Children[3574], const real_T obj_CutPoint
  [1787], const real_T obj_NodeMean[1787], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ib_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1581], const real_T obj_Children[3162], const real_T obj_CutPoint
  [1581], const real_T obj_NodeMean[1581], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ic_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1831], const real_T obj_Children[3662], const real_T obj_CutPoint
  [1831], const real_T obj_NodeMean[1831], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void id_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1751], const real_T obj_Children[3502], const real_T obj_CutPoint
  [1751], const real_T obj_NodeMean[1751], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void j_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1789], const real_T obj_Children[3578], const real_T obj_CutPoint
  [1789], const real_T obj_NodeMean[1789], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void jb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1863], const real_T obj_Children[3726], const real_T obj_CutPoint
  [1863], const real_T obj_NodeMean[1863], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void jc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1743], const real_T obj_Children[3486], const real_T obj_CutPoint
  [1743], const real_T obj_NodeMean[1743], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void jd_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1843], const real_T obj_Children[3686], const real_T obj_CutPoint
  [1843], const real_T obj_NodeMean[1843], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void k_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1575], const real_T obj_Children[3150], const real_T obj_CutPoint
  [1575], const real_T obj_NodeMean[1575], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void kb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1829], const real_T obj_Children[3658], const real_T obj_CutPoint
  [1829], const real_T obj_NodeMean[1829], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void kc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1623], const real_T obj_Children[3246], const real_T obj_CutPoint
  [1623], const real_T obj_NodeMean[1623], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void kd_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1631], const real_T obj_Children[3262], const real_T obj_CutPoint
  [1631], const real_T obj_NodeMean[1631], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void l_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1777], const real_T obj_Children[3554], const real_T obj_CutPoint
  [1777], const real_T obj_NodeMean[1777], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void lb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1119], const real_T obj_Children[2238], const real_T obj_CutPoint
  [1119], const real_T obj_NodeMean[1119], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void lc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1473], const real_T obj_Children[2946], const real_T obj_CutPoint
  [1473], const real_T obj_NodeMean[1473], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ld_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2029], const real_T obj_Children[4058], const real_T obj_CutPoint
  [2029], const real_T obj_NodeMean[2029], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void m_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1861], const real_T obj_Children[3722], const real_T obj_CutPoint
  [1861], const real_T obj_NodeMean[1861], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void mb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1839], const real_T obj_Children[3678], const real_T obj_CutPoint
  [1839], const real_T obj_NodeMean[1839], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void mc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1491], const real_T obj_Children[2982], const real_T obj_CutPoint
  [1491], const real_T obj_NodeMean[1491], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void md_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1767], const real_T obj_Children[3534], const real_T obj_CutPoint
  [1767], const real_T obj_NodeMean[1767], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void n_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1841], const real_T obj_Children[3682], const real_T obj_CutPoint
  [1841], const real_T obj_NodeMean[1841], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void nb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1899], const real_T obj_Children[3798], const real_T obj_CutPoint
  [1899], const real_T obj_NodeMean[1899], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void nc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1855], const real_T obj_Children[3710], const real_T obj_CutPoint
  [1855], const real_T obj_NodeMean[1855], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void nd_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1845], const real_T obj_Children[3690], const real_T obj_CutPoint
  [1845], const real_T obj_NodeMean[1845], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void o_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1987], const real_T obj_Children[3974], const real_T obj_CutPoint
  [1987], const real_T obj_NodeMean[1987], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ob_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1717], const real_T obj_Children[3434], const real_T obj_CutPoint
  [1717], const real_T obj_NodeMean[1717], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void oc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1993], const real_T obj_Children[3986], const real_T obj_CutPoint
  [1993], const real_T obj_NodeMean[1993], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void od_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1911], const real_T obj_Children[3822], const real_T obj_CutPoint
  [1911], const real_T obj_NodeMean[1911], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void p_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1569], const real_T obj_Children[3138], const real_T obj_CutPoint
  [1569], const real_T obj_NodeMean[1569], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void pb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1945], const real_T obj_Children[3890], const real_T obj_CutPoint
  [1945], const real_T obj_NodeMean[1945], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void pc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1663], const real_T obj_Children[3326], const real_T obj_CutPoint
  [1663], const real_T obj_NodeMean[1663], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void q_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1849], const real_T obj_Children[3698], const real_T obj_CutPoint
  [1849], const real_T obj_NodeMean[1849], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void qb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1983], const real_T obj_Children[3966], const real_T obj_CutPoint
  [1983], const real_T obj_NodeMean[1983], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void qc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1991], const real_T obj_Children[3982], const real_T obj_CutPoint
  [1991], const real_T obj_NodeMean[1991], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void r_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1803], const real_T obj_Children[3606], const real_T obj_CutPoint
  [1803], const real_T obj_NodeMean[1803], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void rb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1117], const real_T obj_Children[2234], const real_T obj_CutPoint
  [1117], const real_T obj_NodeMean[1117], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void rc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1837], const real_T obj_Children[3674], const real_T obj_CutPoint
  [1837], const real_T obj_NodeMean[1837], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void s_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1619], const real_T obj_Children[3238], const real_T obj_CutPoint
  [1619], const real_T obj_NodeMean[1619], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void sb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1731], const real_T obj_Children[3462], const real_T obj_CutPoint
  [1731], const real_T obj_NodeMean[1731], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void sc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1885], const real_T obj_Children[3770], const real_T obj_CutPoint
  [1885], const real_T obj_NodeMean[1885], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void t_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1821], const real_T obj_Children[3642], const real_T obj_CutPoint
  [1821], const real_T obj_NodeMean[1821], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void tb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1555], const real_T obj_Children[3110], const real_T obj_CutPoint
  [1555], const real_T obj_NodeMean[1555], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void tc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1705], const real_T obj_Children[3410], const real_T obj_CutPoint
  [1705], const real_T obj_NodeMean[1705], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void u_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1437], const real_T obj_Children[2874], const real_T obj_CutPoint
  [1437], const real_T obj_NodeMean[1437], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void ub_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1755], const real_T obj_Children[3510], const real_T obj_CutPoint
  [1755], const real_T obj_NodeMean[1755], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void uc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1819], const real_T obj_Children[3638], const real_T obj_CutPoint
  [1819], const real_T obj_NodeMean[1819], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void v_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1971], const real_T obj_Children[3942], const real_T obj_CutPoint
  [1971], const real_T obj_NodeMean[1971], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void vb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1655], const real_T obj_Children[3310], const real_T obj_CutPoint
  [1655], const real_T obj_NodeMean[1655], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void vc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[2019], const real_T obj_Children[4038], const real_T obj_CutPoint
  [2019], const real_T obj_NodeMean[2019], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void w_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1893], const real_T obj_Children[3786], const real_T obj_CutPoint
  [1893], const real_T obj_NodeMean[1893], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void wb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1851], const real_T obj_Children[3702], const real_T obj_CutPoint
  [1851], const real_T obj_NodeMean[1851], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void wc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1835], const real_T obj_Children[3670], const real_T obj_CutPoint
  [1835], const real_T obj_NodeMean[1835], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void x_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1761], const real_T obj_Children[3522], const real_T obj_CutPoint
  [1761], const real_T obj_NodeMean[1761], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void xb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1707], const real_T obj_Children[3414], const real_T obj_CutPoint
  [1707], const real_T obj_NodeMean[1707], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void xc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1589], const real_T obj_Children[3178], const real_T obj_CutPoint
  [1589], const real_T obj_NodeMean[1589], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void y_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1975], const real_T obj_Children[3950], const real_T obj_CutPoint
  [1975], const real_T obj_NodeMean[1975], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void yb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1847], const real_T obj_Children[3694], const real_T obj_CutPoint
  [1847], const real_T obj_NodeMean[1847], const emxArray_real_T *X,
  emxArray_real_T *Yfit);
extern void yc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1725], const real_T obj_Children[3450], const real_T obj_CutPoint
  [1725], const real_T obj_NodeMean[1725], const emxArray_real_T *X,
  emxArray_real_T *Yfit);

#endif

/* End of code generation (CompactRegressionTree.h) */
