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
    real_T RTree_Children[10374];
    real_T b_RTree_Children[10370];
    real_T c_RTree_Children[10358];
    real_T d_RTree_Children[10354];
    real_T e_RTree_Children[10346];
    real_T f_RTree_Children[10334];
    real_T g_RTree_Children[10330];
    real_T h_RTree_Children[10326];
    real_T i_RTree_Children[10318];
    real_T j_RTree_Children[10314];
    real_T k_RTree_Children[10310];
    real_T l_RTree_Children[10306];
    real_T m_RTree_Children[10302];
    real_T n_RTree_Children[10298];
    real_T o_RTree_Children[10294];
    real_T p_RTree_Children[10290];
    real_T q_RTree_Children[10286];
    real_T r_RTree_Children[10282];
    real_T s_RTree_Children[10278];
    real_T t_RTree_Children[10274];
    real_T u_RTree_Children[10270];
    real_T v_RTree_Children[10266];
    real_T w_RTree_Children[10262];
    real_T x_RTree_Children[10258];
    real_T y_RTree_Children[10254];
    real_T ab_RTree_Children[10250];
    real_T bb_RTree_Children[10246];
    real_T cb_RTree_Children[10242];
    real_T db_RTree_Children[10238];
    real_T eb_RTree_Children[10234];
    real_T fb_RTree_Children[10230];
    real_T gb_RTree_Children[10226];
    real_T hb_RTree_Children[10222];
    real_T ib_RTree_Children[10218];
    real_T jb_RTree_Children[10214];
    real_T kb_RTree_Children[10210];
    real_T lb_RTree_Children[10206];
    real_T mb_RTree_Children[10198];
    real_T nb_RTree_Children[10190];
    real_T ob_RTree_Children[10186];
    real_T pb_RTree_Children[10174];
    real_T qb_RTree_Children[10166];
    real_T rb_RTree_Children[10162];
    real_T sb_RTree_Children[10158];
    real_T tb_RTree_Children[10154];
    real_T ub_RTree_Children[10150];
    real_T vb_RTree_Children[10122];
    real_T wb_RTree_Children[9930];
    real_T xb_RTree_Children[9918];
    real_T yb_RTree_Children[9526];
    real_T RTree_CutVar[5187];
    real_T RTree_CutPoint[5187];
    real_T RTree_NodeMean[5187];
    real_T b_RTree_CutVar[5185];
    real_T b_RTree_CutPoint[5185];
    real_T b_RTree_NodeMean[5185];
    real_T c_RTree_CutVar[5179];
    real_T c_RTree_CutPoint[5179];
    real_T c_RTree_NodeMean[5179];
    real_T d_RTree_CutVar[5177];
    real_T d_RTree_CutPoint[5177];
    real_T d_RTree_NodeMean[5177];
    real_T e_RTree_CutVar[5173];
    real_T e_RTree_CutPoint[5173];
    real_T e_RTree_NodeMean[5173];
    real_T f_RTree_CutVar[5167];
    real_T f_RTree_CutPoint[5167];
    real_T f_RTree_NodeMean[5167];
    real_T g_RTree_CutVar[5165];
    real_T g_RTree_CutPoint[5165];
    real_T g_RTree_NodeMean[5165];
    real_T h_RTree_CutVar[5163];
    real_T h_RTree_CutPoint[5163];
    real_T h_RTree_NodeMean[5163];
    real_T i_RTree_CutVar[5159];
    real_T i_RTree_CutPoint[5159];
    real_T i_RTree_NodeMean[5159];
    real_T j_RTree_CutVar[5157];
    real_T j_RTree_CutPoint[5157];
    real_T j_RTree_NodeMean[5157];
    real_T k_RTree_CutVar[5155];
    real_T k_RTree_CutPoint[5155];
    real_T k_RTree_NodeMean[5155];
    real_T l_RTree_CutVar[5153];
    real_T l_RTree_CutPoint[5153];
    real_T l_RTree_NodeMean[5153];
    real_T m_RTree_CutVar[5151];
    real_T m_RTree_CutPoint[5151];
    real_T m_RTree_NodeMean[5151];
    real_T n_RTree_CutVar[5149];
    real_T n_RTree_CutPoint[5149];
    real_T n_RTree_NodeMean[5149];
    real_T o_RTree_CutVar[5147];
    real_T o_RTree_CutPoint[5147];
    real_T o_RTree_NodeMean[5147];
    real_T p_RTree_CutVar[5145];
    real_T p_RTree_CutPoint[5145];
    real_T p_RTree_NodeMean[5145];
    real_T q_RTree_CutVar[5143];
    real_T q_RTree_CutPoint[5143];
    real_T q_RTree_NodeMean[5143];
    real_T r_RTree_CutVar[5141];
    real_T r_RTree_CutPoint[5141];
    real_T r_RTree_NodeMean[5141];
    real_T s_RTree_CutVar[5139];
    real_T s_RTree_CutPoint[5139];
    real_T s_RTree_NodeMean[5139];
    real_T t_RTree_CutVar[5137];
    real_T t_RTree_CutPoint[5137];
    real_T t_RTree_NodeMean[5137];
    real_T u_RTree_CutVar[5135];
    real_T u_RTree_CutPoint[5135];
    real_T u_RTree_NodeMean[5135];
    real_T v_RTree_CutVar[5133];
    real_T v_RTree_CutPoint[5133];
    real_T v_RTree_NodeMean[5133];
    real_T w_RTree_CutVar[5131];
    real_T w_RTree_CutPoint[5131];
    real_T w_RTree_NodeMean[5131];
    real_T x_RTree_CutVar[5129];
    real_T x_RTree_CutPoint[5129];
    real_T x_RTree_NodeMean[5129];
    real_T y_RTree_CutVar[5127];
    real_T y_RTree_CutPoint[5127];
    real_T y_RTree_NodeMean[5127];
    real_T ab_RTree_CutVar[5125];
    real_T ab_RTree_CutPoint[5125];
    real_T ab_RTree_NodeMean[5125];
    real_T bb_RTree_CutVar[5123];
    real_T bb_RTree_CutPoint[5123];
    real_T bb_RTree_NodeMean[5123];
    real_T cb_RTree_CutVar[5121];
    real_T cb_RTree_CutPoint[5121];
    real_T cb_RTree_NodeMean[5121];
    real_T db_RTree_CutVar[5119];
    real_T db_RTree_CutPoint[5119];
    real_T db_RTree_NodeMean[5119];
    real_T eb_RTree_CutVar[5117];
    real_T eb_RTree_CutPoint[5117];
    real_T eb_RTree_NodeMean[5117];
    real_T fb_RTree_CutVar[5115];
    real_T fb_RTree_CutPoint[5115];
    real_T fb_RTree_NodeMean[5115];
    real_T gb_RTree_CutVar[5113];
    real_T gb_RTree_CutPoint[5113];
    real_T gb_RTree_NodeMean[5113];
    real_T hb_RTree_CutVar[5111];
    real_T hb_RTree_CutPoint[5111];
    real_T hb_RTree_NodeMean[5111];
    real_T ib_RTree_CutVar[5109];
    real_T ib_RTree_CutPoint[5109];
    real_T ib_RTree_NodeMean[5109];
    real_T jb_RTree_CutVar[5107];
    real_T jb_RTree_CutPoint[5107];
    real_T jb_RTree_NodeMean[5107];
    real_T kb_RTree_CutVar[5105];
    real_T kb_RTree_CutPoint[5105];
    real_T kb_RTree_NodeMean[5105];
    real_T lb_RTree_CutVar[5103];
    real_T lb_RTree_CutPoint[5103];
    real_T lb_RTree_NodeMean[5103];
    real_T mb_RTree_CutVar[5099];
    real_T mb_RTree_CutPoint[5099];
    real_T mb_RTree_NodeMean[5099];
    real_T nb_RTree_CutVar[5095];
    real_T nb_RTree_CutPoint[5095];
    real_T nb_RTree_NodeMean[5095];
    real_T ob_RTree_CutVar[5093];
    real_T ob_RTree_CutPoint[5093];
    real_T ob_RTree_NodeMean[5093];
    real_T pb_RTree_CutVar[5087];
    real_T pb_RTree_CutPoint[5087];
    real_T pb_RTree_NodeMean[5087];
    real_T qb_RTree_CutVar[5083];
    real_T qb_RTree_CutPoint[5083];
    real_T qb_RTree_NodeMean[5083];
    real_T rb_RTree_CutVar[5081];
    real_T rb_RTree_CutPoint[5081];
    real_T rb_RTree_NodeMean[5081];
    real_T sb_RTree_CutVar[5079];
    real_T sb_RTree_CutPoint[5079];
    real_T sb_RTree_NodeMean[5079];
    real_T tb_RTree_CutVar[5077];
    real_T tb_RTree_CutPoint[5077];
    real_T tb_RTree_NodeMean[5077];
    real_T ub_RTree_CutVar[5075];
    real_T ub_RTree_CutPoint[5075];
    real_T ub_RTree_NodeMean[5075];
    real_T vb_RTree_CutVar[5061];
    real_T vb_RTree_CutPoint[5061];
    real_T vb_RTree_NodeMean[5061];
    real_T wb_RTree_CutVar[4965];
    real_T wb_RTree_CutPoint[4965];
    real_T wb_RTree_NodeMean[4965];
    real_T xb_RTree_CutVar[4959];
  } f0;
} predictRF_Y3StackData;

#endif                                 /*typedef_predictRF_Y3StackData*/
#endif

/* End of code generation (predictRF_Y3_types.h) */
