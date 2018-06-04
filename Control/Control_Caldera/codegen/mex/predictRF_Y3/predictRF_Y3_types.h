/*
 * predictRF_Y3_types.h
 *
 * Code generation for function 'predictRF_Y3'
 *
 */

#ifndef PREDICTRF_Y3_TYPES_H
#define PREDICTRF_Y3_TYPES_H

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

#ifndef typedef_predictRF_Y3StackData
#define typedef_predictRF_Y3StackData

typedef struct {
  struct {
    real_T RTree_Children[2186];
    real_T b_RTree_Children[2158];
    real_T c_RTree_Children[2154];
    real_T d_RTree_Children[2142];
    real_T e_RTree_Children[2122];
    real_T f_RTree_Children[2118];
    real_T g_RTree_Children[2114];
    real_T h_RTree_Children[2106];
    real_T i_RTree_Children[2102];
    real_T j_RTree_Children[2094];
    real_T k_RTree_Children[2086];
    real_T l_RTree_Children[2082];
    real_T m_RTree_Children[2078];
    real_T n_RTree_Children[2074];
    real_T o_RTree_Children[2070];
    real_T p_RTree_Children[2066];
    real_T q_RTree_Children[2062];
    real_T r_RTree_Children[2058];
    real_T s_RTree_Children[2054];
    real_T t_RTree_Children[2050];
    real_T u_RTree_Children[2046];
    real_T v_RTree_Children[2042];
    real_T w_RTree_Children[2038];
    real_T x_RTree_Children[2034];
    real_T y_RTree_Children[2030];
    real_T ab_RTree_Children[2022];
    real_T bb_RTree_Children[2018];
    real_T cb_RTree_Children[2014];
    real_T db_RTree_Children[2010];
    real_T eb_RTree_Children[2006];
    real_T fb_RTree_Children[2002];
    real_T gb_RTree_Children[1998];
    real_T hb_RTree_Children[1994];
    real_T ib_RTree_Children[1990];
    real_T jb_RTree_Children[1986];
    real_T kb_RTree_Children[1978];
    real_T lb_RTree_Children[1974];
    real_T mb_RTree_Children[1970];
    real_T nb_RTree_Children[1962];
    real_T ob_RTree_Children[1958];
    real_T pb_RTree_Children[1950];
    real_T qb_RTree_Children[1946];
    real_T rb_RTree_Children[1942];
    real_T sb_RTree_Children[1938];
    real_T tb_RTree_Children[1934];
    real_T ub_RTree_Children[1930];
    real_T vb_RTree_Children[1926];
    real_T wb_RTree_Children[1918];
    real_T xb_RTree_Children[1914];
    real_T yb_RTree_Children[1906];
    real_T ac_RTree_Children[1886];
    real_T bc_RTree_Children[1854];
    real_T cc_RTree_Children[1850];
    real_T dc_RTree_Children[1846];
    real_T ec_RTree_Children[1842];
    real_T fc_RTree_Children[1838];
    real_T gc_RTree_Children[1830];
    real_T hc_RTree_Children[1678];
    real_T RTree_CutVar[1093];
    real_T RTree_CutPoint[1093];
    real_T RTree_NodeMean[1093];
    real_T b_RTree_CutVar[1079];
    real_T b_RTree_CutPoint[1079];
    real_T b_RTree_NodeMean[1079];
    real_T c_RTree_CutVar[1077];
    real_T c_RTree_CutPoint[1077];
    real_T c_RTree_NodeMean[1077];
    real_T d_RTree_CutVar[1071];
    real_T d_RTree_CutPoint[1071];
    real_T d_RTree_NodeMean[1071];
    real_T e_RTree_CutVar[1061];
    real_T e_RTree_CutPoint[1061];
    real_T e_RTree_NodeMean[1061];
    real_T f_RTree_CutVar[1059];
    real_T f_RTree_CutPoint[1059];
    real_T f_RTree_NodeMean[1059];
    real_T g_RTree_CutVar[1057];
    real_T g_RTree_CutPoint[1057];
    real_T g_RTree_NodeMean[1057];
    real_T h_RTree_CutVar[1053];
    real_T h_RTree_CutPoint[1053];
    real_T h_RTree_NodeMean[1053];
    real_T i_RTree_CutVar[1051];
    real_T i_RTree_CutPoint[1051];
    real_T i_RTree_NodeMean[1051];
    real_T j_RTree_CutVar[1047];
    real_T j_RTree_CutPoint[1047];
    real_T j_RTree_NodeMean[1047];
    real_T k_RTree_CutVar[1043];
    real_T k_RTree_CutPoint[1043];
    real_T k_RTree_NodeMean[1043];
    real_T l_RTree_CutVar[1041];
    real_T l_RTree_CutPoint[1041];
    real_T l_RTree_NodeMean[1041];
    real_T m_RTree_CutVar[1039];
    real_T m_RTree_CutPoint[1039];
    real_T m_RTree_NodeMean[1039];
    real_T n_RTree_CutVar[1037];
    real_T n_RTree_CutPoint[1037];
    real_T n_RTree_NodeMean[1037];
    real_T o_RTree_CutVar[1035];
    real_T o_RTree_CutPoint[1035];
    real_T o_RTree_NodeMean[1035];
    real_T p_RTree_CutVar[1033];
    real_T p_RTree_CutPoint[1033];
    real_T p_RTree_NodeMean[1033];
    real_T q_RTree_CutVar[1031];
    real_T q_RTree_CutPoint[1031];
    real_T q_RTree_NodeMean[1031];
    real_T r_RTree_CutVar[1029];
    real_T r_RTree_CutPoint[1029];
    real_T r_RTree_NodeMean[1029];
    real_T s_RTree_CutVar[1027];
    real_T s_RTree_CutPoint[1027];
    real_T s_RTree_NodeMean[1027];
    real_T t_RTree_CutVar[1025];
    real_T t_RTree_CutPoint[1025];
    real_T t_RTree_NodeMean[1025];
    real_T u_RTree_CutVar[1023];
    real_T u_RTree_CutPoint[1023];
    real_T u_RTree_NodeMean[1023];
    real_T v_RTree_CutVar[1021];
    real_T v_RTree_CutPoint[1021];
    real_T v_RTree_NodeMean[1021];
    real_T w_RTree_CutVar[1019];
    real_T w_RTree_CutPoint[1019];
    real_T w_RTree_NodeMean[1019];
    real_T x_RTree_CutVar[1017];
    real_T x_RTree_CutPoint[1017];
    real_T x_RTree_NodeMean[1017];
    real_T y_RTree_CutVar[1015];
    real_T y_RTree_CutPoint[1015];
    real_T y_RTree_NodeMean[1015];
    real_T ab_RTree_CutVar[1011];
    real_T ab_RTree_CutPoint[1011];
    real_T ab_RTree_NodeMean[1011];
    real_T bb_RTree_CutVar[1009];
    real_T bb_RTree_CutPoint[1009];
    real_T bb_RTree_NodeMean[1009];
    real_T cb_RTree_CutVar[1007];
    real_T cb_RTree_CutPoint[1007];
    real_T cb_RTree_NodeMean[1007];
    real_T db_RTree_CutVar[1005];
    real_T db_RTree_CutPoint[1005];
    real_T db_RTree_NodeMean[1005];
    real_T eb_RTree_CutVar[1003];
    real_T eb_RTree_CutPoint[1003];
    real_T eb_RTree_NodeMean[1003];
    real_T fb_RTree_CutVar[1001];
    real_T fb_RTree_CutPoint[1001];
    real_T fb_RTree_NodeMean[1001];
    real_T gb_RTree_CutVar[999];
    real_T gb_RTree_CutPoint[999];
    real_T gb_RTree_NodeMean[999];
    real_T hb_RTree_CutVar[997];
    real_T hb_RTree_CutPoint[997];
    real_T hb_RTree_NodeMean[997];
    real_T ib_RTree_CutVar[995];
    real_T ib_RTree_CutPoint[995];
    real_T ib_RTree_NodeMean[995];
    real_T jb_RTree_CutVar[993];
    real_T jb_RTree_CutPoint[993];
    real_T jb_RTree_NodeMean[993];
    real_T kb_RTree_CutVar[989];
    real_T kb_RTree_CutPoint[989];
    real_T kb_RTree_NodeMean[989];
    real_T lb_RTree_CutVar[987];
    real_T lb_RTree_CutPoint[987];
    real_T lb_RTree_NodeMean[987];
    real_T mb_RTree_CutVar[985];
    real_T mb_RTree_CutPoint[985];
    real_T mb_RTree_NodeMean[985];
    real_T nb_RTree_CutVar[981];
    real_T nb_RTree_CutPoint[981];
    real_T nb_RTree_NodeMean[981];
    real_T ob_RTree_CutVar[979];
    real_T ob_RTree_CutPoint[979];
    real_T ob_RTree_NodeMean[979];
    real_T pb_RTree_CutVar[975];
    real_T pb_RTree_CutPoint[975];
    real_T pb_RTree_NodeMean[975];
    real_T qb_RTree_CutVar[973];
    real_T qb_RTree_CutPoint[973];
    real_T qb_RTree_NodeMean[973];
    real_T rb_RTree_CutVar[971];
    real_T rb_RTree_CutPoint[971];
    real_T rb_RTree_NodeMean[971];
    real_T sb_RTree_CutVar[969];
    real_T sb_RTree_CutPoint[969];
    real_T sb_RTree_NodeMean[969];
    real_T tb_RTree_CutVar[967];
    real_T tb_RTree_CutPoint[967];
    real_T tb_RTree_NodeMean[967];
    real_T ub_RTree_CutVar[965];
    real_T ub_RTree_CutPoint[965];
    real_T ub_RTree_NodeMean[965];
    real_T vb_RTree_CutVar[963];
    real_T vb_RTree_CutPoint[963];
    real_T vb_RTree_NodeMean[963];
    real_T wb_RTree_CutVar[959];
    real_T wb_RTree_CutPoint[959];
    real_T wb_RTree_NodeMean[959];
    real_T xb_RTree_CutVar[957];
    real_T xb_RTree_CutPoint[957];
    real_T xb_RTree_NodeMean[957];
  } f0;
} predictRF_Y3StackData;

#endif                                 /*typedef_predictRF_Y3StackData*/
#endif

/* End of code generation (predictRF_Y3_types.h) */
