/*
 * predictRF_Y1_types.h
 *
 * Code generation for function 'predictRF_Y1'
 *
 */

#ifndef PREDICTRF_Y1_TYPES_H
#define PREDICTRF_Y1_TYPES_H

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

#ifndef typedef_predictRF_Y1StackData
#define typedef_predictRF_Y1StackData

typedef struct {
  struct {
    real_T RTree_Children[1278];
    real_T b_RTree_Children[1230];
    real_T c_RTree_Children[1190];
    real_T d_RTree_Children[1182];
    real_T e_RTree_Children[1178];
    real_T f_RTree_Children[1162];
    real_T g_RTree_Children[1154];
    real_T h_RTree_Children[1150];
    real_T i_RTree_Children[1146];
    real_T j_RTree_Children[1142];
    real_T k_RTree_Children[1138];
    real_T l_RTree_Children[1134];
    real_T m_RTree_Children[1130];
    real_T n_RTree_Children[1126];
    real_T o_RTree_Children[1122];
    real_T p_RTree_Children[1114];
    real_T q_RTree_Children[1110];
    real_T r_RTree_Children[1106];
    real_T s_RTree_Children[1102];
    real_T t_RTree_Children[1098];
    real_T u_RTree_Children[1094];
    real_T v_RTree_Children[1090];
    real_T w_RTree_Children[1086];
    real_T x_RTree_Children[1082];
    real_T y_RTree_Children[1078];
    real_T ab_RTree_Children[1074];
    real_T bb_RTree_Children[1070];
    real_T cb_RTree_Children[1066];
    real_T db_RTree_Children[1062];
    real_T eb_RTree_Children[1058];
    real_T fb_RTree_Children[1050];
    real_T gb_RTree_Children[1046];
    real_T hb_RTree_Children[1038];
    real_T ib_RTree_Children[970];
    real_T RTree_CutVar[639];
    real_T RTree_CutPoint[639];
    real_T RTree_NodeMean[639];
    real_T b_RTree_CutVar[615];
    real_T b_RTree_CutPoint[615];
    real_T b_RTree_NodeMean[615];
    real_T c_RTree_CutVar[595];
    real_T c_RTree_CutPoint[595];
    real_T c_RTree_NodeMean[595];
    real_T d_RTree_CutVar[591];
    real_T d_RTree_CutPoint[591];
    real_T d_RTree_NodeMean[591];
    real_T e_RTree_CutVar[589];
    real_T e_RTree_CutPoint[589];
    real_T e_RTree_NodeMean[589];
    real_T f_RTree_CutVar[581];
    real_T f_RTree_CutPoint[581];
    real_T f_RTree_NodeMean[581];
    real_T g_RTree_CutVar[577];
    real_T g_RTree_CutPoint[577];
    real_T g_RTree_NodeMean[577];
    real_T h_RTree_CutVar[575];
    real_T h_RTree_CutPoint[575];
    real_T h_RTree_NodeMean[575];
    real_T i_RTree_CutVar[573];
    real_T i_RTree_CutPoint[573];
    real_T i_RTree_NodeMean[573];
    real_T j_RTree_CutVar[571];
    real_T j_RTree_CutPoint[571];
    real_T j_RTree_NodeMean[571];
    real_T k_RTree_CutVar[569];
    real_T k_RTree_CutPoint[569];
    real_T k_RTree_NodeMean[569];
    real_T l_RTree_CutVar[567];
    real_T l_RTree_CutPoint[567];
    real_T l_RTree_NodeMean[567];
    real_T m_RTree_CutVar[565];
    real_T m_RTree_CutPoint[565];
    real_T m_RTree_NodeMean[565];
    real_T n_RTree_CutVar[563];
    real_T n_RTree_CutPoint[563];
    real_T n_RTree_NodeMean[563];
    real_T o_RTree_CutVar[561];
    real_T o_RTree_CutPoint[561];
    real_T o_RTree_NodeMean[561];
    real_T p_RTree_CutVar[557];
    real_T p_RTree_CutPoint[557];
    real_T p_RTree_NodeMean[557];
    real_T q_RTree_CutVar[555];
    real_T q_RTree_CutPoint[555];
    real_T q_RTree_NodeMean[555];
    real_T r_RTree_CutVar[553];
    real_T r_RTree_CutPoint[553];
    real_T r_RTree_NodeMean[553];
    real_T s_RTree_CutVar[551];
    real_T s_RTree_CutPoint[551];
  } f0;
} predictRF_Y1StackData;

#endif                                 /*typedef_predictRF_Y1StackData*/
#endif

/* End of code generation (predictRF_Y1_types.h) */
