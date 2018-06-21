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
    real_T RTree_Children[1966];
    real_T b_RTree_Children[1958];
    real_T c_RTree_Children[1942];
    real_T d_RTree_Children[1938];
    real_T e_RTree_Children[1922];
    real_T f_RTree_Children[1910];
    real_T g_RTree_Children[1898];
    real_T h_RTree_Children[1890];
    real_T i_RTree_Children[1886];
    real_T j_RTree_Children[1882];
    real_T k_RTree_Children[1878];
    real_T l_RTree_Children[1874];
    real_T m_RTree_Children[1866];
    real_T n_RTree_Children[1862];
    real_T o_RTree_Children[1858];
    real_T p_RTree_Children[1854];
    real_T q_RTree_Children[1850];
    real_T r_RTree_Children[1846];
    real_T s_RTree_Children[1842];
    real_T t_RTree_Children[1838];
    real_T u_RTree_Children[1834];
    real_T v_RTree_Children[1830];
    real_T w_RTree_Children[1826];
    real_T x_RTree_Children[1822];
    real_T y_RTree_Children[1818];
    real_T ab_RTree_Children[1814];
    real_T bb_RTree_Children[1810];
    real_T cb_RTree_Children[1806];
    real_T db_RTree_Children[1802];
    real_T eb_RTree_Children[1798];
    real_T fb_RTree_Children[1794];
    real_T gb_RTree_Children[1790];
    real_T hb_RTree_Children[1786];
    real_T ib_RTree_Children[1778];
    real_T jb_RTree_Children[1774];
    real_T kb_RTree_Children[1770];
    real_T lb_RTree_Children[1766];
    real_T mb_RTree_Children[1762];
    real_T nb_RTree_Children[1758];
    real_T ob_RTree_Children[1754];
    real_T pb_RTree_Children[1742];
    real_T qb_RTree_Children[1738];
    real_T rb_RTree_Children[1730];
    real_T sb_RTree_Children[1702];
    real_T RTree_CutVar[983];
    real_T RTree_CutPoint[983];
    real_T RTree_NodeMean[983];
    real_T b_RTree_CutVar[979];
    real_T b_RTree_CutPoint[979];
    real_T b_RTree_NodeMean[979];
    real_T c_RTree_CutVar[971];
    real_T c_RTree_CutPoint[971];
    real_T c_RTree_NodeMean[971];
    real_T d_RTree_CutVar[969];
    real_T d_RTree_CutPoint[969];
    real_T d_RTree_NodeMean[969];
    real_T e_RTree_CutVar[961];
    real_T e_RTree_CutPoint[961];
    real_T e_RTree_NodeMean[961];
    real_T f_RTree_CutVar[955];
    real_T f_RTree_CutPoint[955];
    real_T f_RTree_NodeMean[955];
    real_T g_RTree_CutVar[949];
    real_T g_RTree_CutPoint[949];
    real_T g_RTree_NodeMean[949];
    real_T h_RTree_CutVar[945];
    real_T h_RTree_CutPoint[945];
    real_T h_RTree_NodeMean[945];
    real_T i_RTree_CutVar[943];
    real_T i_RTree_CutPoint[943];
    real_T i_RTree_NodeMean[943];
    real_T j_RTree_CutVar[941];
    real_T j_RTree_CutPoint[941];
    real_T j_RTree_NodeMean[941];
    real_T k_RTree_CutVar[939];
    real_T k_RTree_CutPoint[939];
    real_T k_RTree_NodeMean[939];
    real_T l_RTree_CutVar[937];
    real_T l_RTree_CutPoint[937];
    real_T l_RTree_NodeMean[937];
    real_T m_RTree_CutVar[933];
    real_T m_RTree_CutPoint[933];
    real_T m_RTree_NodeMean[933];
    real_T n_RTree_CutVar[931];
    real_T n_RTree_CutPoint[931];
    real_T n_RTree_NodeMean[931];
    real_T o_RTree_CutVar[929];
    real_T o_RTree_CutPoint[929];
    real_T o_RTree_NodeMean[929];
    real_T p_RTree_CutVar[927];
    real_T p_RTree_CutPoint[927];
    real_T p_RTree_NodeMean[927];
    real_T q_RTree_CutVar[925];
    real_T q_RTree_CutPoint[925];
    real_T q_RTree_NodeMean[925];
    real_T r_RTree_CutVar[923];
    real_T r_RTree_CutPoint[923];
    real_T r_RTree_NodeMean[923];
    real_T s_RTree_CutVar[921];
    real_T s_RTree_CutPoint[921];
    real_T s_RTree_NodeMean[921];
    real_T t_RTree_CutVar[919];
    real_T t_RTree_CutPoint[919];
    real_T t_RTree_NodeMean[919];
    real_T u_RTree_CutVar[917];
    real_T u_RTree_CutPoint[917];
    real_T u_RTree_NodeMean[917];
    real_T v_RTree_CutVar[915];
    real_T v_RTree_CutPoint[915];
    real_T v_RTree_NodeMean[915];
    real_T w_RTree_CutVar[913];
    real_T w_RTree_CutPoint[913];
    real_T w_RTree_NodeMean[913];
    real_T x_RTree_CutVar[911];
    real_T x_RTree_CutPoint[911];
    real_T x_RTree_NodeMean[911];
    real_T y_RTree_CutVar[909];
    real_T y_RTree_CutPoint[909];
    real_T y_RTree_NodeMean[909];
    real_T ab_RTree_CutVar[907];
    real_T ab_RTree_CutPoint[907];
    real_T ab_RTree_NodeMean[907];
    real_T bb_RTree_CutVar[905];
    real_T bb_RTree_CutPoint[905];
    real_T bb_RTree_NodeMean[905];
    real_T cb_RTree_CutVar[903];
    real_T cb_RTree_CutPoint[903];
    real_T cb_RTree_NodeMean[903];
    real_T db_RTree_CutVar[901];
    real_T db_RTree_CutPoint[901];
    real_T db_RTree_NodeMean[901];
    real_T eb_RTree_CutVar[899];
    real_T eb_RTree_CutPoint[899];
    real_T eb_RTree_NodeMean[899];
    real_T fb_RTree_CutVar[897];
    real_T fb_RTree_CutPoint[897];
    real_T fb_RTree_NodeMean[897];
    real_T gb_RTree_CutVar[895];
    real_T gb_RTree_CutPoint[895];
    real_T gb_RTree_NodeMean[895];
    real_T hb_RTree_CutVar[893];
    real_T hb_RTree_CutPoint[893];
    real_T hb_RTree_NodeMean[893];
    real_T ib_RTree_CutVar[889];
    real_T ib_RTree_CutPoint[889];
    real_T ib_RTree_NodeMean[889];
    real_T jb_RTree_CutVar[887];
    real_T jb_RTree_CutPoint[887];
  } f0;
} predictRF_Y2StackData;

#endif                                 /*typedef_predictRF_Y2StackData*/
#endif

/* End of code generation (predictRF_Y2_types.h) */
