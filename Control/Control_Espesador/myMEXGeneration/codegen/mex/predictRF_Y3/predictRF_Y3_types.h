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
    real_T RTree_Children[1398];
    real_T b_RTree_Children[1342];
    real_T c_RTree_Children[1314];
    real_T d_RTree_Children[1302];
    real_T e_RTree_Children[1298];
    real_T f_RTree_Children[1294];
    real_T g_RTree_Children[1290];
    real_T h_RTree_Children[1286];
    real_T i_RTree_Children[1282];
    real_T j_RTree_Children[1278];
    real_T k_RTree_Children[1270];
    real_T l_RTree_Children[1266];
    real_T m_RTree_Children[1262];
    real_T n_RTree_Children[1258];
    real_T o_RTree_Children[1254];
    real_T p_RTree_Children[1246];
    real_T q_RTree_Children[1238];
    real_T r_RTree_Children[1230];
    real_T s_RTree_Children[1226];
    real_T t_RTree_Children[1222];
    real_T u_RTree_Children[1218];
    real_T v_RTree_Children[1214];
    real_T w_RTree_Children[1210];
    real_T x_RTree_Children[1206];
    real_T y_RTree_Children[1202];
    real_T ab_RTree_Children[1198];
    real_T bb_RTree_Children[1194];
    real_T cb_RTree_Children[1190];
    real_T db_RTree_Children[1186];
    real_T eb_RTree_Children[1178];
    real_T fb_RTree_Children[1174];
    real_T gb_RTree_Children[1170];
    real_T hb_RTree_Children[1166];
    real_T ib_RTree_Children[1158];
    real_T jb_RTree_Children[1154];
    real_T kb_RTree_Children[1150];
    real_T lb_RTree_Children[1146];
    real_T mb_RTree_Children[1142];
    real_T nb_RTree_Children[1138];
    real_T ob_RTree_Children[1134];
    real_T pb_RTree_Children[1130];
    real_T qb_RTree_Children[1126];
    real_T rb_RTree_Children[1122];
    real_T sb_RTree_Children[1118];
    real_T tb_RTree_Children[1114];
    real_T ub_RTree_Children[1106];
    real_T vb_RTree_Children[1102];
    real_T wb_RTree_Children[1090];
    real_T xb_RTree_Children[1082];
    real_T yb_RTree_Children[1062];
    real_T RTree_CutVar[699];
    real_T RTree_CutPoint[699];
    real_T RTree_NodeMean[699];
    real_T b_RTree_CutVar[671];
    real_T b_RTree_CutPoint[671];
    real_T b_RTree_NodeMean[671];
    real_T c_RTree_CutVar[657];
    real_T c_RTree_CutPoint[657];
    real_T c_RTree_NodeMean[657];
    real_T d_RTree_CutVar[651];
    real_T d_RTree_CutPoint[651];
    real_T d_RTree_NodeMean[651];
    real_T e_RTree_CutVar[649];
    real_T e_RTree_CutPoint[649];
    real_T e_RTree_NodeMean[649];
    real_T f_RTree_CutVar[647];
    real_T f_RTree_CutPoint[647];
    real_T f_RTree_NodeMean[647];
    real_T g_RTree_CutVar[645];
    real_T g_RTree_CutPoint[645];
    real_T g_RTree_NodeMean[645];
    real_T h_RTree_CutVar[643];
    real_T h_RTree_CutPoint[643];
    real_T h_RTree_NodeMean[643];
    real_T i_RTree_CutVar[641];
    real_T i_RTree_CutPoint[641];
    real_T i_RTree_NodeMean[641];
    real_T j_RTree_CutVar[639];
    real_T j_RTree_CutPoint[639];
    real_T j_RTree_NodeMean[639];
    real_T k_RTree_CutVar[635];
    real_T k_RTree_CutPoint[635];
    real_T k_RTree_NodeMean[635];
    real_T l_RTree_CutVar[633];
    real_T l_RTree_CutPoint[633];
    real_T l_RTree_NodeMean[633];
    real_T m_RTree_CutVar[631];
    real_T m_RTree_CutPoint[631];
    real_T m_RTree_NodeMean[631];
    real_T n_RTree_CutVar[629];
    real_T n_RTree_CutPoint[629];
    real_T n_RTree_NodeMean[629];
    real_T o_RTree_CutVar[627];
    real_T o_RTree_CutPoint[627];
    real_T o_RTree_NodeMean[627];
    real_T p_RTree_CutVar[623];
    real_T p_RTree_CutPoint[623];
    real_T p_RTree_NodeMean[623];
    real_T q_RTree_CutVar[619];
    real_T q_RTree_CutPoint[619];
    real_T q_RTree_NodeMean[619];
    real_T r_RTree_CutVar[615];
    real_T r_RTree_CutPoint[615];
    real_T r_RTree_NodeMean[615];
    real_T s_RTree_CutVar[613];
    real_T s_RTree_CutPoint[613];
    real_T s_RTree_NodeMean[613];
    real_T t_RTree_CutVar[611];
    real_T t_RTree_CutPoint[611];
    real_T t_RTree_NodeMean[611];
    real_T u_RTree_CutVar[609];
    real_T u_RTree_CutPoint[609];
    real_T u_RTree_NodeMean[609];
    real_T v_RTree_CutVar[607];
    real_T v_RTree_CutPoint[607];
    real_T v_RTree_NodeMean[607];
    real_T w_RTree_CutVar[605];
    real_T w_RTree_CutPoint[605];
    real_T w_RTree_NodeMean[605];
    real_T x_RTree_CutVar[603];
    real_T x_RTree_CutPoint[603];
    real_T x_RTree_NodeMean[603];
    real_T y_RTree_CutVar[601];
    real_T y_RTree_CutPoint[601];
    real_T y_RTree_NodeMean[601];
    real_T ab_RTree_CutVar[599];
    real_T ab_RTree_CutPoint[599];
    real_T ab_RTree_NodeMean[599];
    real_T bb_RTree_CutVar[597];
    real_T bb_RTree_CutPoint[597];
    real_T bb_RTree_NodeMean[597];
    real_T cb_RTree_CutVar[595];
    real_T cb_RTree_CutPoint[595];
    real_T cb_RTree_NodeMean[595];
    real_T db_RTree_CutVar[593];
    real_T db_RTree_CutPoint[593];
    real_T db_RTree_NodeMean[593];
    real_T eb_RTree_CutVar[589];
    real_T eb_RTree_CutPoint[589];
    real_T eb_RTree_NodeMean[589];
    real_T fb_RTree_CutVar[587];
    real_T fb_RTree_CutPoint[587];
    real_T fb_RTree_NodeMean[587];
    real_T gb_RTree_CutVar[585];
    real_T gb_RTree_CutPoint[585];
    real_T gb_RTree_NodeMean[585];
    real_T hb_RTree_CutVar[583];
    real_T hb_RTree_CutPoint[583];
    real_T hb_RTree_NodeMean[583];
    real_T ib_RTree_CutVar[579];
    real_T ib_RTree_CutPoint[579];
    real_T ib_RTree_NodeMean[579];
    real_T jb_RTree_CutVar[577];
    real_T jb_RTree_CutPoint[577];
    real_T jb_RTree_NodeMean[577];
    real_T kb_RTree_CutVar[575];
  } f0;
} predictRF_Y3StackData;

#endif                                 /*typedef_predictRF_Y3StackData*/
#endif

/* End of code generation (predictRF_Y3_types.h) */
