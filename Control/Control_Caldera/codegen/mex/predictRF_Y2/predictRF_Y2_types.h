/*
 * predictRF_Y2_types.h
 *
 * Code generation for function 'predictRF_Y2'
 *
 */

#ifndef PREDICTRF_Y2_TYPES_H
#define PREDICTRF_Y2_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray__common
#define struct_emxArray__common

struct emxArray__common
{
  void *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray__common*/

#ifndef typedef_emxArray__common
#define typedef_emxArray__common

typedef struct emxArray__common emxArray__common;

#endif                                 /*typedef_emxArray__common*/

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T

struct emxArray_int32_T
{
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_int32_T*/

#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T

typedef struct emxArray_int32_T emxArray_int32_T;

#endif                                 /*typedef_emxArray_int32_T*/

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/

#ifndef typedef_predictRF_Y2StackData
#define typedef_predictRF_Y2StackData

typedef struct {
  struct {
    real_T RTree_Children[4058];
    real_T b_RTree_Children[4038];
    real_T c_RTree_Children[3986];
    real_T d_RTree_Children[3982];
    real_T e_RTree_Children[3974];
    real_T f_RTree_Children[3966];
    real_T g_RTree_Children[3950];
    real_T h_RTree_Children[3942];
    real_T i_RTree_Children[3934];
    real_T j_RTree_Children[3910];
    real_T k_RTree_Children[3894];
    real_T l_RTree_Children[3890];
    real_T m_RTree_Children[3878];
    real_T n_RTree_Children[3870];
    real_T o_RTree_Children[3838];
    real_T p_RTree_Children[3822];
    real_T q_RTree_Children[3814];
    real_T r_RTree_Children[3798];
    real_T s_RTree_Children[3790];
    real_T t_RTree_Children[3786];
    real_T u_RTree_Children[3782];
    real_T v_RTree_Children[3770];
    real_T w_RTree_Children[3746];
    real_T x_RTree_Children[3726];
    real_T y_RTree_Children[3722];
    real_T ab_RTree_Children[3710];
    real_T bb_RTree_Children[3702];
    real_T cb_RTree_Children[3698];
    real_T db_RTree_Children[3694];
    real_T eb_RTree_Children[3690];
    real_T fb_RTree_Children[3686];
    real_T gb_RTree_Children[3682];
    real_T hb_RTree_Children[3678];
    real_T ib_RTree_Children[3674];
    real_T jb_RTree_Children[3670];
    real_T kb_RTree_Children[3662];
    real_T lb_RTree_Children[3658];
    real_T mb_RTree_Children[3642];
    real_T nb_RTree_Children[3638];
    real_T ob_RTree_Children[3614];
    real_T pb_RTree_Children[3606];
    real_T qb_RTree_Children[3602];
    real_T rb_RTree_Children[3594];
    real_T sb_RTree_Children[3578];
    real_T tb_RTree_Children[3574];
    real_T ub_RTree_Children[3558];
    real_T vb_RTree_Children[3554];
    real_T wb_RTree_Children[3550];
    real_T xb_RTree_Children[3534];
    real_T yb_RTree_Children[3522];
    real_T ac_RTree_Children[3510];
    real_T bc_RTree_Children[3502];
    real_T cc_RTree_Children[3498];
    real_T dc_RTree_Children[3490];
    real_T ec_RTree_Children[3486];
    real_T fc_RTree_Children[3474];
    real_T gc_RTree_Children[3466];
    real_T hc_RTree_Children[3462];
    real_T ic_RTree_Children[3450];
    real_T jc_RTree_Children[3442];
    real_T kc_RTree_Children[3434];
    real_T lc_RTree_Children[3414];
    real_T mc_RTree_Children[3410];
    real_T nc_RTree_Children[3386];
    real_T oc_RTree_Children[3370];
    real_T pc_RTree_Children[3326];
    real_T qc_RTree_Children[3310];
    real_T rc_RTree_Children[3298];
    real_T sc_RTree_Children[3266];
    real_T tc_RTree_Children[3262];
    real_T uc_RTree_Children[3246];
    real_T vc_RTree_Children[3238];
    real_T wc_RTree_Children[3202];
    real_T xc_RTree_Children[3178];
    real_T yc_RTree_Children[3162];
    real_T ad_RTree_Children[3150];
    real_T bd_RTree_Children[3138];
    real_T cd_RTree_Children[3110];
    real_T dd_RTree_Children[3038];
    real_T ed_RTree_Children[3006];
    real_T fd_RTree_Children[2982];
    real_T gd_RTree_Children[2946];
    real_T hd_RTree_Children[2874];
    real_T id_RTree_Children[2838];
    real_T jd_RTree_Children[2774];
    real_T kd_RTree_Children[2666];
    real_T ld_RTree_Children[2634];
    real_T md_RTree_Children[2530];
    real_T nd_RTree_Children[2238];
    real_T od_RTree_Children[2234];
    real_T RTree_CutVar[2029];
    real_T RTree_CutPoint[2029];
    real_T RTree_NodeMean[2029];
    real_T b_RTree_CutVar[2019];
    real_T b_RTree_CutPoint[2019];
    real_T b_RTree_NodeMean[2019];
    real_T c_RTree_CutVar[1993];
    real_T c_RTree_CutPoint[1993];
    real_T c_RTree_NodeMean[1993];
    real_T d_RTree_CutVar[1991];
    real_T d_RTree_CutPoint[1991];
    real_T d_RTree_NodeMean[1991];
    real_T e_RTree_CutVar[1987];
    real_T e_RTree_CutPoint[1987];
    real_T e_RTree_NodeMean[1987];
    real_T f_RTree_CutVar[1983];
    real_T f_RTree_CutPoint[1983];
    real_T f_RTree_NodeMean[1983];
    real_T g_RTree_CutVar[1975];
    real_T g_RTree_CutPoint[1975];
    real_T g_RTree_NodeMean[1975];
    real_T h_RTree_CutVar[1971];
    real_T h_RTree_CutPoint[1971];
    real_T h_RTree_NodeMean[1971];
    real_T i_RTree_CutVar[1967];
    real_T i_RTree_CutPoint[1967];
    real_T i_RTree_NodeMean[1967];
    real_T j_RTree_CutVar[1955];
    real_T j_RTree_CutPoint[1955];
    real_T j_RTree_NodeMean[1955];
    real_T k_RTree_CutVar[1947];
    real_T k_RTree_CutPoint[1947];
    real_T k_RTree_NodeMean[1947];
    real_T l_RTree_CutVar[1945];
    real_T l_RTree_CutPoint[1945];
    real_T l_RTree_NodeMean[1945];
    real_T m_RTree_CutVar[1939];
    real_T m_RTree_CutPoint[1939];
    real_T m_RTree_NodeMean[1939];
    real_T n_RTree_CutVar[1935];
    real_T n_RTree_CutPoint[1935];
    real_T n_RTree_NodeMean[1935];
    real_T o_RTree_CutVar[1919];
    real_T o_RTree_CutPoint[1919];
    real_T o_RTree_NodeMean[1919];
    real_T p_RTree_CutVar[1911];
    real_T p_RTree_CutPoint[1911];
    real_T p_RTree_NodeMean[1911];
    real_T q_RTree_CutVar[1907];
    real_T q_RTree_CutPoint[1907];
    real_T q_RTree_NodeMean[1907];
    real_T r_RTree_CutVar[1899];
    real_T r_RTree_CutPoint[1899];
    real_T r_RTree_NodeMean[1899];
    real_T s_RTree_CutVar[1895];
    real_T s_RTree_CutPoint[1895];
    real_T s_RTree_NodeMean[1895];
    real_T t_RTree_CutVar[1893];
    real_T t_RTree_CutPoint[1893];
    real_T t_RTree_NodeMean[1893];
    real_T u_RTree_CutVar[1891];
    real_T u_RTree_CutPoint[1891];
    real_T u_RTree_NodeMean[1891];
    real_T v_RTree_CutVar[1885];
    real_T v_RTree_CutPoint[1885];
    real_T v_RTree_NodeMean[1885];
    real_T w_RTree_CutVar[1873];
    real_T w_RTree_CutPoint[1873];
    real_T w_RTree_NodeMean[1873];
    real_T x_RTree_CutVar[1863];
    real_T x_RTree_CutPoint[1863];
    real_T x_RTree_NodeMean[1863];
    real_T y_RTree_CutVar[1861];
    real_T y_RTree_CutPoint[1861];
    real_T y_RTree_NodeMean[1861];
    real_T ab_RTree_CutVar[1855];
    real_T ab_RTree_CutPoint[1855];
    real_T ab_RTree_NodeMean[1855];
    real_T bb_RTree_CutVar[1851];
    real_T bb_RTree_CutPoint[1851];
    real_T bb_RTree_NodeMean[1851];
    real_T cb_RTree_CutVar[1849];
    real_T cb_RTree_CutPoint[1849];
    real_T cb_RTree_NodeMean[1849];
    real_T db_RTree_CutVar[1847];
    real_T db_RTree_CutPoint[1847];
    real_T db_RTree_NodeMean[1847];
    real_T eb_RTree_CutVar[1845];
    real_T eb_RTree_CutPoint[1845];
    real_T eb_RTree_NodeMean[1845];
    real_T fb_RTree_CutVar[1843];
    real_T fb_RTree_CutPoint[1843];
    real_T fb_RTree_NodeMean[1843];
    real_T gb_RTree_CutVar[1841];
    real_T gb_RTree_CutPoint[1841];
    real_T gb_RTree_NodeMean[1841];
    real_T hb_RTree_CutVar[1839];
    real_T hb_RTree_CutPoint[1839];
    real_T hb_RTree_NodeMean[1839];
    real_T ib_RTree_CutVar[1837];
    real_T ib_RTree_CutPoint[1837];
    real_T ib_RTree_NodeMean[1837];
    real_T jb_RTree_CutVar[1835];
    real_T jb_RTree_CutPoint[1835];
    real_T jb_RTree_NodeMean[1835];
    real_T kb_RTree_CutVar[1831];
    real_T kb_RTree_CutPoint[1831];
    real_T kb_RTree_NodeMean[1831];
    real_T lb_RTree_CutVar[1829];
    real_T lb_RTree_CutPoint[1829];
    real_T lb_RTree_NodeMean[1829];
    real_T mb_RTree_CutVar[1821];
    real_T mb_RTree_CutPoint[1821];
    real_T mb_RTree_NodeMean[1821];
    real_T nb_RTree_CutVar[1819];
    real_T nb_RTree_CutPoint[1819];
    real_T nb_RTree_NodeMean[1819];
    real_T ob_RTree_CutVar[1807];
    real_T ob_RTree_CutPoint[1807];
    real_T ob_RTree_NodeMean[1807];
    real_T pb_RTree_CutVar[1803];
    real_T pb_RTree_CutPoint[1803];
    real_T pb_RTree_NodeMean[1803];
    real_T qb_RTree_CutVar[1801];
    real_T qb_RTree_CutPoint[1801];
    real_T qb_RTree_NodeMean[1801];
    real_T rb_RTree_CutVar[1797];
    real_T rb_RTree_CutPoint[1797];
    real_T rb_RTree_NodeMean[1797];
    real_T sb_RTree_CutVar[1789];
    real_T sb_RTree_CutPoint[1789];
    real_T sb_RTree_NodeMean[1789];
    real_T tb_RTree_CutVar[1787];
    real_T tb_RTree_CutPoint[1787];
    real_T tb_RTree_NodeMean[1787];
    real_T ub_RTree_CutVar[1779];
    real_T ub_RTree_CutPoint[1779];
    real_T ub_RTree_NodeMean[1779];
    real_T vb_RTree_CutVar[1777];
    real_T vb_RTree_CutPoint[1777];
    real_T vb_RTree_NodeMean[1777];
    real_T wb_RTree_CutVar[1775];
    real_T wb_RTree_CutPoint[1775];
    real_T wb_RTree_NodeMean[1775];
    real_T xb_RTree_CutVar[1767];
    real_T xb_RTree_CutPoint[1767];
    real_T xb_RTree_NodeMean[1767];
    real_T yb_RTree_CutVar[1761];
    real_T yb_RTree_CutPoint[1761];
    real_T yb_RTree_NodeMean[1761];
    real_T ac_RTree_CutVar[1755];
    real_T ac_RTree_CutPoint[1755];
    real_T ac_RTree_NodeMean[1755];
    real_T bc_RTree_CutVar[1751];
    real_T bc_RTree_CutPoint[1751];
    real_T bc_RTree_NodeMean[1751];
    real_T cc_RTree_CutVar[1749];
    real_T cc_RTree_CutPoint[1749];
    real_T cc_RTree_NodeMean[1749];
    real_T dc_RTree_CutVar[1745];
    real_T dc_RTree_CutPoint[1745];
    real_T dc_RTree_NodeMean[1745];
    real_T ec_RTree_CutVar[1743];
    real_T ec_RTree_CutPoint[1743];
    real_T ec_RTree_NodeMean[1743];
    real_T fc_RTree_CutVar[1737];
    real_T fc_RTree_CutPoint[1737];
    real_T fc_RTree_NodeMean[1737];
    real_T gc_RTree_CutVar[1733];
    real_T gc_RTree_CutPoint[1733];
    real_T gc_RTree_NodeMean[1733];
    real_T hc_RTree_CutVar[1731];
    real_T hc_RTree_CutPoint[1731];
    real_T hc_RTree_NodeMean[1731];
    real_T ic_RTree_CutVar[1725];
    real_T ic_RTree_CutPoint[1725];
    real_T ic_RTree_NodeMean[1725];
    real_T jc_RTree_CutVar[1721];
    real_T jc_RTree_CutPoint[1721];
    real_T jc_RTree_NodeMean[1721];
    real_T kc_RTree_CutVar[1717];
    real_T kc_RTree_CutPoint[1717];
    real_T kc_RTree_NodeMean[1717];
    real_T lc_RTree_CutVar[1707];
    real_T lc_RTree_CutPoint[1707];
    real_T lc_RTree_NodeMean[1707];
    real_T mc_RTree_CutVar[1705];
    real_T mc_RTree_CutPoint[1705];
    real_T mc_RTree_NodeMean[1705];
    real_T nc_RTree_CutVar[1693];
    real_T nc_RTree_CutPoint[1693];
    real_T nc_RTree_NodeMean[1693];
    real_T oc_RTree_CutVar[1685];
    real_T oc_RTree_CutPoint[1685];
    real_T oc_RTree_NodeMean[1685];
    real_T pc_RTree_CutVar[1663];
    real_T pc_RTree_CutPoint[1663];
    real_T pc_RTree_NodeMean[1663];
    real_T qc_RTree_CutVar[1655];
    real_T qc_RTree_CutPoint[1655];
    real_T qc_RTree_NodeMean[1655];
    real_T rc_RTree_CutVar[1649];
    real_T rc_RTree_CutPoint[1649];
    real_T rc_RTree_NodeMean[1649];
    real_T sc_RTree_CutVar[1633];
    real_T sc_RTree_CutPoint[1633];
    real_T sc_RTree_NodeMean[1633];
    real_T tc_RTree_CutVar[1631];
    real_T tc_RTree_CutPoint[1631];
    real_T tc_RTree_NodeMean[1631];
    real_T uc_RTree_CutVar[1623];
    real_T uc_RTree_CutPoint[1623];
    real_T uc_RTree_NodeMean[1623];
    real_T vc_RTree_CutVar[1619];
    real_T vc_RTree_CutPoint[1619];
    real_T vc_RTree_NodeMean[1619];
    real_T wc_RTree_CutVar[1601];
    real_T wc_RTree_CutPoint[1601];
    real_T wc_RTree_NodeMean[1601];
    real_T xc_RTree_CutVar[1589];
    real_T xc_RTree_CutPoint[1589];
    real_T xc_RTree_NodeMean[1589];
    real_T yc_RTree_CutVar[1581];
    real_T yc_RTree_CutPoint[1581];
    real_T yc_RTree_NodeMean[1581];
    real_T ad_RTree_CutVar[1575];
    real_T ad_RTree_CutPoint[1575];
    real_T ad_RTree_NodeMean[1575];
    real_T bd_RTree_CutVar[1569];
    real_T bd_RTree_CutPoint[1569];
    real_T bd_RTree_NodeMean[1569];
    real_T cd_RTree_CutVar[1555];
    real_T cd_RTree_CutPoint[1555];
    real_T cd_RTree_NodeMean[1555];
    real_T dd_RTree_CutVar[1519];
    real_T dd_RTree_CutPoint[1519];
    real_T dd_RTree_NodeMean[1519];
    real_T ed_RTree_CutVar[1503];
    real_T ed_RTree_CutPoint[1503];
    real_T ed_RTree_NodeMean[1503];
    real_T fd_RTree_CutVar[1491];
    real_T fd_RTree_CutPoint[1491];
    real_T fd_RTree_NodeMean[1491];
    real_T gd_RTree_CutVar[1473];
    real_T gd_RTree_CutPoint[1473];
    real_T gd_RTree_NodeMean[1473];
    real_T hd_RTree_CutVar[1437];
    real_T hd_RTree_CutPoint[1437];
    real_T hd_RTree_NodeMean[1437];
    real_T id_RTree_CutVar[1419];
    real_T id_RTree_CutPoint[1419];
  } f0;
} predictRF_Y2StackData;

#endif                                 /*typedef_predictRF_Y2StackData*/
#endif

/* End of code generation (predictRF_Y2_types.h) */
