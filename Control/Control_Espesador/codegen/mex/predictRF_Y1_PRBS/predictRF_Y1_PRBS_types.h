/*
 * predictRF_Y1_PRBS_types.h
 *
 * Code generation for function 'predictRF_Y1_PRBS'
 *
 */

#ifndef PREDICTRF_Y1_PRBS_TYPES_H
#define PREDICTRF_Y1_PRBS_TYPES_H

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

#ifndef typedef_predictRF_Y1_PRBSStackData
#define typedef_predictRF_Y1_PRBSStackData

typedef struct {
  struct {
    real_T RTree_Children[1486];
    real_T b_RTree_Children[1474];
    real_T c_RTree_Children[1434];
    real_T d_RTree_Children[1422];
    real_T e_RTree_Children[1418];
    real_T f_RTree_Children[1410];
    real_T g_RTree_Children[1406];
    real_T h_RTree_Children[1398];
    real_T i_RTree_Children[1394];
    real_T j_RTree_Children[1390];
    real_T k_RTree_Children[1386];
    real_T l_RTree_Children[1382];
    real_T m_RTree_Children[1378];
    real_T n_RTree_Children[1374];
    real_T o_RTree_Children[1370];
    real_T p_RTree_Children[1366];
    real_T q_RTree_Children[1362];
    real_T r_RTree_Children[1358];
    real_T s_RTree_Children[1354];
    real_T t_RTree_Children[1350];
    real_T u_RTree_Children[1346];
    real_T v_RTree_Children[1342];
    real_T w_RTree_Children[1338];
    real_T x_RTree_Children[1334];
    real_T y_RTree_Children[1330];
    real_T ab_RTree_Children[1326];
    real_T bb_RTree_Children[1322];
    real_T cb_RTree_Children[1318];
    real_T db_RTree_Children[1314];
    real_T eb_RTree_Children[1310];
    real_T fb_RTree_Children[1306];
    real_T gb_RTree_Children[1302];
    real_T hb_RTree_Children[1298];
    real_T ib_RTree_Children[1294];
    real_T jb_RTree_Children[1290];
    real_T kb_RTree_Children[1286];
    real_T lb_RTree_Children[1282];
    real_T mb_RTree_Children[1278];
    real_T nb_RTree_Children[1274];
    real_T ob_RTree_Children[1270];
    real_T pb_RTree_Children[1266];
    real_T qb_RTree_Children[1254];
    real_T rb_RTree_Children[1242];
    real_T sb_RTree_Children[1230];
    real_T tb_RTree_Children[1226];
    real_T ub_RTree_Children[1086];
    real_T RTree_CutVar[743];
    real_T RTree_CutPoint[743];
    real_T RTree_NodeMean[743];
    real_T b_RTree_CutVar[737];
    real_T b_RTree_CutPoint[737];
    real_T b_RTree_NodeMean[737];
    real_T c_RTree_CutVar[717];
    real_T c_RTree_CutPoint[717];
    real_T c_RTree_NodeMean[717];
    real_T d_RTree_CutVar[711];
    real_T d_RTree_CutPoint[711];
    real_T d_RTree_NodeMean[711];
    real_T e_RTree_CutVar[709];
    real_T e_RTree_CutPoint[709];
    real_T e_RTree_NodeMean[709];
    real_T f_RTree_CutVar[705];
    real_T f_RTree_CutPoint[705];
    real_T f_RTree_NodeMean[705];
    real_T g_RTree_CutVar[703];
    real_T g_RTree_CutPoint[703];
    real_T g_RTree_NodeMean[703];
    real_T h_RTree_CutVar[699];
    real_T h_RTree_CutPoint[699];
    real_T h_RTree_NodeMean[699];
    real_T i_RTree_CutVar[697];
    real_T i_RTree_CutPoint[697];
    real_T i_RTree_NodeMean[697];
    real_T j_RTree_CutVar[695];
    real_T j_RTree_CutPoint[695];
    real_T j_RTree_NodeMean[695];
    real_T k_RTree_CutVar[693];
    real_T k_RTree_CutPoint[693];
    real_T k_RTree_NodeMean[693];
    real_T l_RTree_CutVar[691];
    real_T l_RTree_CutPoint[691];
    real_T l_RTree_NodeMean[691];
    real_T m_RTree_CutVar[689];
    real_T m_RTree_CutPoint[689];
    real_T m_RTree_NodeMean[689];
    real_T n_RTree_CutVar[687];
    real_T n_RTree_CutPoint[687];
    real_T n_RTree_NodeMean[687];
    real_T o_RTree_CutVar[685];
    real_T o_RTree_CutPoint[685];
    real_T o_RTree_NodeMean[685];
    real_T p_RTree_CutVar[683];
    real_T p_RTree_CutPoint[683];
    real_T p_RTree_NodeMean[683];
    real_T q_RTree_CutVar[681];
    real_T q_RTree_CutPoint[681];
    real_T q_RTree_NodeMean[681];
    real_T r_RTree_CutVar[679];
    real_T r_RTree_CutPoint[679];
    real_T r_RTree_NodeMean[679];
    real_T s_RTree_CutVar[677];
    real_T s_RTree_CutPoint[677];
    real_T s_RTree_NodeMean[677];
    real_T t_RTree_CutVar[675];
    real_T t_RTree_CutPoint[675];
    real_T t_RTree_NodeMean[675];
    real_T u_RTree_CutVar[673];
    real_T u_RTree_CutPoint[673];
    real_T u_RTree_NodeMean[673];
    real_T v_RTree_CutVar[671];
    real_T v_RTree_CutPoint[671];
    real_T v_RTree_NodeMean[671];
    real_T w_RTree_CutVar[669];
    real_T w_RTree_CutPoint[669];
    real_T w_RTree_NodeMean[669];
    real_T x_RTree_CutVar[667];
    real_T x_RTree_CutPoint[667];
    real_T x_RTree_NodeMean[667];
    real_T y_RTree_CutVar[665];
    real_T y_RTree_CutPoint[665];
    real_T y_RTree_NodeMean[665];
    real_T ab_RTree_CutVar[663];
    real_T ab_RTree_CutPoint[663];
    real_T ab_RTree_NodeMean[663];
    real_T bb_RTree_CutVar[661];
    real_T bb_RTree_CutPoint[661];
    real_T bb_RTree_NodeMean[661];
    real_T cb_RTree_CutVar[659];
    real_T cb_RTree_CutPoint[659];
    real_T cb_RTree_NodeMean[659];
    real_T db_RTree_CutVar[657];
    real_T db_RTree_CutPoint[657];
    real_T db_RTree_NodeMean[657];
    real_T eb_RTree_CutVar[655];
    real_T eb_RTree_CutPoint[655];
    real_T eb_RTree_NodeMean[655];
    real_T fb_RTree_CutVar[653];
    real_T fb_RTree_CutPoint[653];
    real_T fb_RTree_NodeMean[653];
    real_T gb_RTree_CutVar[651];
    real_T gb_RTree_CutPoint[651];
    real_T gb_RTree_NodeMean[651];
    real_T hb_RTree_CutVar[649];
    real_T hb_RTree_CutPoint[649];
    real_T hb_RTree_NodeMean[649];
  } f0;
} predictRF_Y1_PRBSStackData;

#endif                                 /*typedef_predictRF_Y1_PRBSStackData*/
#endif

/* End of code generation (predictRF_Y1_PRBS_types.h) */
