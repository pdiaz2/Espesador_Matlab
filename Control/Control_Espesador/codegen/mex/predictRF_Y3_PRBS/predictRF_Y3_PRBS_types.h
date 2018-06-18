/*
 * predictRF_Y3_PRBS_types.h
 *
 * Code generation for function 'predictRF_Y3_PRBS'
 *
 */

#ifndef PREDICTRF_Y3_PRBS_TYPES_H
#define PREDICTRF_Y3_PRBS_TYPES_H

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

#ifndef typedef_predictRF_Y3_PRBSStackData
#define typedef_predictRF_Y3_PRBSStackData

typedef struct {
  struct {
    real_T RTree_Children[1626];
    real_T b_RTree_Children[1614];
    real_T c_RTree_Children[1594];
    real_T d_RTree_Children[1590];
    real_T e_RTree_Children[1586];
    real_T f_RTree_Children[1582];
    real_T g_RTree_Children[1578];
    real_T h_RTree_Children[1574];
    real_T i_RTree_Children[1570];
    real_T j_RTree_Children[1566];
    real_T k_RTree_Children[1562];
    real_T l_RTree_Children[1558];
    real_T m_RTree_Children[1554];
    real_T n_RTree_Children[1550];
    real_T o_RTree_Children[1546];
    real_T p_RTree_Children[1542];
    real_T q_RTree_Children[1538];
    real_T r_RTree_Children[1526];
    real_T s_RTree_Children[1518];
    real_T t_RTree_Children[1514];
    real_T u_RTree_Children[1510];
    real_T v_RTree_Children[1506];
    real_T w_RTree_Children[1502];
    real_T x_RTree_Children[1498];
    real_T y_RTree_Children[1490];
    real_T ab_RTree_Children[1486];
    real_T bb_RTree_Children[1482];
    real_T cb_RTree_Children[1478];
    real_T db_RTree_Children[1474];
    real_T eb_RTree_Children[1470];
    real_T fb_RTree_Children[1466];
    real_T gb_RTree_Children[1462];
    real_T hb_RTree_Children[1458];
    real_T ib_RTree_Children[1454];
    real_T jb_RTree_Children[1450];
    real_T kb_RTree_Children[1446];
    real_T lb_RTree_Children[1442];
    real_T mb_RTree_Children[1438];
    real_T nb_RTree_Children[1434];
    real_T ob_RTree_Children[1430];
    real_T pb_RTree_Children[1426];
    real_T qb_RTree_Children[1418];
    real_T rb_RTree_Children[1410];
    real_T sb_RTree_Children[1398];
    real_T tb_RTree_Children[1386];
    real_T ub_RTree_Children[1382];
    real_T vb_RTree_Children[1374];
    real_T wb_RTree_Children[1366];
    real_T xb_RTree_Children[1362];
    real_T yb_RTree_Children[1354];
    real_T ac_RTree_Children[1346];
    real_T bc_RTree_Children[1314];
    real_T cc_RTree_Children[1310];
    real_T RTree_CutVar[813];
    real_T RTree_CutPoint[813];
    real_T RTree_NodeMean[813];
    real_T b_RTree_CutVar[807];
    real_T b_RTree_CutPoint[807];
    real_T b_RTree_NodeMean[807];
    real_T c_RTree_CutVar[797];
    real_T c_RTree_CutPoint[797];
    real_T c_RTree_NodeMean[797];
    real_T d_RTree_CutVar[795];
    real_T d_RTree_CutPoint[795];
    real_T d_RTree_NodeMean[795];
    real_T e_RTree_CutVar[793];
    real_T e_RTree_CutPoint[793];
    real_T e_RTree_NodeMean[793];
    real_T f_RTree_CutVar[791];
    real_T f_RTree_CutPoint[791];
    real_T f_RTree_NodeMean[791];
    real_T g_RTree_CutVar[789];
    real_T g_RTree_CutPoint[789];
    real_T g_RTree_NodeMean[789];
    real_T h_RTree_CutVar[787];
    real_T h_RTree_CutPoint[787];
    real_T h_RTree_NodeMean[787];
    real_T i_RTree_CutVar[785];
    real_T i_RTree_CutPoint[785];
    real_T i_RTree_NodeMean[785];
    real_T j_RTree_CutVar[783];
    real_T j_RTree_CutPoint[783];
    real_T j_RTree_NodeMean[783];
    real_T k_RTree_CutVar[781];
    real_T k_RTree_CutPoint[781];
    real_T k_RTree_NodeMean[781];
    real_T l_RTree_CutVar[779];
    real_T l_RTree_CutPoint[779];
    real_T l_RTree_NodeMean[779];
    real_T m_RTree_CutVar[777];
    real_T m_RTree_CutPoint[777];
    real_T m_RTree_NodeMean[777];
    real_T n_RTree_CutVar[775];
    real_T n_RTree_CutPoint[775];
    real_T n_RTree_NodeMean[775];
    real_T o_RTree_CutVar[773];
    real_T o_RTree_CutPoint[773];
    real_T o_RTree_NodeMean[773];
    real_T p_RTree_CutVar[771];
    real_T p_RTree_CutPoint[771];
    real_T p_RTree_NodeMean[771];
    real_T q_RTree_CutVar[769];
    real_T q_RTree_CutPoint[769];
    real_T q_RTree_NodeMean[769];
    real_T r_RTree_CutVar[763];
    real_T r_RTree_CutPoint[763];
    real_T r_RTree_NodeMean[763];
    real_T s_RTree_CutVar[759];
    real_T s_RTree_CutPoint[759];
    real_T s_RTree_NodeMean[759];
    real_T t_RTree_CutVar[757];
    real_T t_RTree_CutPoint[757];
    real_T t_RTree_NodeMean[757];
    real_T u_RTree_CutVar[755];
    real_T u_RTree_CutPoint[755];
    real_T u_RTree_NodeMean[755];
    real_T v_RTree_CutVar[753];
    real_T v_RTree_CutPoint[753];
    real_T v_RTree_NodeMean[753];
    real_T w_RTree_CutVar[751];
    real_T w_RTree_CutPoint[751];
    real_T w_RTree_NodeMean[751];
    real_T x_RTree_CutVar[749];
    real_T x_RTree_CutPoint[749];
    real_T x_RTree_NodeMean[749];
    real_T y_RTree_CutVar[745];
    real_T y_RTree_CutPoint[745];
    real_T y_RTree_NodeMean[745];
    real_T ab_RTree_CutVar[743];
    real_T ab_RTree_CutPoint[743];
    real_T ab_RTree_NodeMean[743];
    real_T bb_RTree_CutVar[741];
    real_T bb_RTree_CutPoint[741];
    real_T bb_RTree_NodeMean[741];
    real_T cb_RTree_CutVar[739];
    real_T cb_RTree_CutPoint[739];
    real_T cb_RTree_NodeMean[739];
    real_T db_RTree_CutVar[737];
    real_T db_RTree_CutPoint[737];
    real_T db_RTree_NodeMean[737];
    real_T eb_RTree_CutVar[735];
    real_T eb_RTree_CutPoint[735];
    real_T eb_RTree_NodeMean[735];
    real_T fb_RTree_CutVar[733];
    real_T fb_RTree_CutPoint[733];
    real_T fb_RTree_NodeMean[733];
    real_T gb_RTree_CutVar[731];
    real_T gb_RTree_CutPoint[731];
    real_T gb_RTree_NodeMean[731];
    real_T hb_RTree_CutVar[729];
    real_T hb_RTree_CutPoint[729];
    real_T hb_RTree_NodeMean[729];
    real_T ib_RTree_CutVar[727];
    real_T ib_RTree_CutPoint[727];
    real_T ib_RTree_NodeMean[727];
    real_T jb_RTree_CutVar[725];
    real_T jb_RTree_CutPoint[725];
    real_T jb_RTree_NodeMean[725];
    real_T kb_RTree_CutVar[723];
    real_T kb_RTree_CutPoint[723];
    real_T kb_RTree_NodeMean[723];
    real_T lb_RTree_CutVar[721];
    real_T lb_RTree_CutPoint[721];
    real_T lb_RTree_NodeMean[721];
    real_T mb_RTree_CutVar[719];
    real_T mb_RTree_CutPoint[719];
    real_T mb_RTree_NodeMean[719];
    real_T nb_RTree_CutVar[717];
    real_T nb_RTree_CutPoint[717];
    real_T nb_RTree_NodeMean[717];
    real_T ob_RTree_CutVar[715];
    real_T ob_RTree_CutPoint[715];
    real_T ob_RTree_NodeMean[715];
    real_T pb_RTree_CutVar[713];
    real_T pb_RTree_CutPoint[713];
    real_T pb_RTree_NodeMean[713];
  } f0;
} predictRF_Y3_PRBSStackData;

#endif                                 /*typedef_predictRF_Y3_PRBSStackData*/
#endif

/* End of code generation (predictRF_Y3_PRBS_types.h) */
