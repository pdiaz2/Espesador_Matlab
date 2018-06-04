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
    real_T RTree_Children[5394];
    real_T b_RTree_Children[5370];
    real_T c_RTree_Children[5358];
    real_T d_RTree_Children[5350];
    real_T e_RTree_Children[5342];
    real_T f_RTree_Children[5338];
    real_T g_RTree_Children[5330];
    real_T h_RTree_Children[5326];
    real_T i_RTree_Children[5314];
    real_T j_RTree_Children[5310];
    real_T k_RTree_Children[5302];
    real_T l_RTree_Children[5298];
    real_T m_RTree_Children[5290];
    real_T n_RTree_Children[5286];
    real_T o_RTree_Children[5282];
    real_T p_RTree_Children[5278];
    real_T q_RTree_Children[5274];
    real_T r_RTree_Children[5270];
    real_T s_RTree_Children[5266];
    real_T t_RTree_Children[5262];
    real_T u_RTree_Children[5258];
    real_T v_RTree_Children[5254];
    real_T w_RTree_Children[5250];
    real_T x_RTree_Children[5246];
    real_T y_RTree_Children[5242];
    real_T ab_RTree_Children[5238];
    real_T bb_RTree_Children[5234];
    real_T cb_RTree_Children[5230];
    real_T db_RTree_Children[5226];
    real_T eb_RTree_Children[5222];
    real_T fb_RTree_Children[5218];
    real_T gb_RTree_Children[5214];
    real_T hb_RTree_Children[5210];
    real_T ib_RTree_Children[5206];
    real_T jb_RTree_Children[5202];
    real_T kb_RTree_Children[5194];
    real_T lb_RTree_Children[5190];
    real_T mb_RTree_Children[5186];
    real_T nb_RTree_Children[5182];
    real_T ob_RTree_Children[5178];
    real_T pb_RTree_Children[5174];
    real_T qb_RTree_Children[5158];
    real_T rb_RTree_Children[5150];
    real_T sb_RTree_Children[5146];
    real_T tb_RTree_Children[5142];
    real_T ub_RTree_Children[5134];
    real_T RTree_CutVar[2697];
    real_T RTree_CutPoint[2697];
    real_T RTree_NodeMean[2697];
    real_T b_RTree_CutVar[2685];
    real_T b_RTree_CutPoint[2685];
    real_T b_RTree_NodeMean[2685];
    real_T c_RTree_CutVar[2679];
    real_T c_RTree_CutPoint[2679];
    real_T c_RTree_NodeMean[2679];
    real_T d_RTree_CutVar[2675];
    real_T d_RTree_CutPoint[2675];
    real_T d_RTree_NodeMean[2675];
    real_T e_RTree_CutVar[2671];
    real_T e_RTree_CutPoint[2671];
    real_T e_RTree_NodeMean[2671];
    real_T f_RTree_CutVar[2669];
    real_T f_RTree_CutPoint[2669];
    real_T f_RTree_NodeMean[2669];
    real_T g_RTree_CutVar[2665];
    real_T g_RTree_CutPoint[2665];
    real_T g_RTree_NodeMean[2665];
    real_T h_RTree_CutVar[2663];
    real_T h_RTree_CutPoint[2663];
    real_T h_RTree_NodeMean[2663];
    real_T i_RTree_CutVar[2657];
    real_T i_RTree_CutPoint[2657];
    real_T i_RTree_NodeMean[2657];
    real_T j_RTree_CutVar[2655];
    real_T j_RTree_CutPoint[2655];
    real_T j_RTree_NodeMean[2655];
    real_T k_RTree_CutVar[2651];
    real_T k_RTree_CutPoint[2651];
    real_T k_RTree_NodeMean[2651];
    real_T l_RTree_CutVar[2649];
    real_T l_RTree_CutPoint[2649];
    real_T l_RTree_NodeMean[2649];
    real_T m_RTree_CutVar[2645];
    real_T m_RTree_CutPoint[2645];
    real_T m_RTree_NodeMean[2645];
    real_T n_RTree_CutVar[2643];
    real_T n_RTree_CutPoint[2643];
    real_T n_RTree_NodeMean[2643];
    real_T o_RTree_CutVar[2641];
    real_T o_RTree_CutPoint[2641];
    real_T o_RTree_NodeMean[2641];
    real_T p_RTree_CutVar[2639];
    real_T p_RTree_CutPoint[2639];
    real_T p_RTree_NodeMean[2639];
    real_T q_RTree_CutVar[2637];
    real_T q_RTree_CutPoint[2637];
    real_T q_RTree_NodeMean[2637];
    real_T r_RTree_CutVar[2635];
    real_T r_RTree_CutPoint[2635];
    real_T r_RTree_NodeMean[2635];
    real_T s_RTree_CutVar[2633];
    real_T s_RTree_CutPoint[2633];
    real_T s_RTree_NodeMean[2633];
    real_T t_RTree_CutVar[2631];
    real_T t_RTree_CutPoint[2631];
    real_T t_RTree_NodeMean[2631];
    real_T u_RTree_CutVar[2629];
    real_T u_RTree_CutPoint[2629];
    real_T u_RTree_NodeMean[2629];
    real_T v_RTree_CutVar[2627];
    real_T v_RTree_CutPoint[2627];
    real_T v_RTree_NodeMean[2627];
    real_T w_RTree_CutVar[2625];
    real_T w_RTree_CutPoint[2625];
    real_T w_RTree_NodeMean[2625];
    real_T x_RTree_CutVar[2623];
    real_T x_RTree_CutPoint[2623];
    real_T x_RTree_NodeMean[2623];
    real_T y_RTree_CutVar[2621];
    real_T y_RTree_CutPoint[2621];
    real_T y_RTree_NodeMean[2621];
    real_T ab_RTree_CutVar[2619];
    real_T ab_RTree_CutPoint[2619];
    real_T ab_RTree_NodeMean[2619];
    real_T bb_RTree_CutVar[2617];
    real_T bb_RTree_CutPoint[2617];
    real_T bb_RTree_NodeMean[2617];
    real_T cb_RTree_CutVar[2615];
    real_T cb_RTree_CutPoint[2615];
    real_T cb_RTree_NodeMean[2615];
    real_T db_RTree_CutVar[2613];
    real_T db_RTree_CutPoint[2613];
    real_T db_RTree_NodeMean[2613];
    real_T eb_RTree_CutVar[2611];
    real_T eb_RTree_CutPoint[2611];
    real_T eb_RTree_NodeMean[2611];
    real_T fb_RTree_CutVar[2609];
    real_T fb_RTree_CutPoint[2609];
    real_T fb_RTree_NodeMean[2609];
    real_T gb_RTree_CutVar[2607];
    real_T gb_RTree_CutPoint[2607];
    real_T gb_RTree_NodeMean[2607];
    real_T hb_RTree_CutVar[2605];
    real_T hb_RTree_CutPoint[2605];
    real_T hb_RTree_NodeMean[2605];
    real_T ib_RTree_CutVar[2603];
    real_T ib_RTree_CutPoint[2603];
    real_T ib_RTree_NodeMean[2603];
    real_T jb_RTree_CutVar[2601];
    real_T jb_RTree_CutPoint[2601];
    real_T jb_RTree_NodeMean[2601];
    real_T kb_RTree_CutVar[2597];
    real_T kb_RTree_CutPoint[2597];
    real_T kb_RTree_NodeMean[2597];
    real_T lb_RTree_CutVar[2595];
    real_T lb_RTree_CutPoint[2595];
    real_T lb_RTree_NodeMean[2595];
    real_T mb_RTree_CutVar[2593];
    real_T mb_RTree_CutPoint[2593];
    real_T mb_RTree_NodeMean[2593];
    real_T nb_RTree_CutVar[2591];
    real_T nb_RTree_CutPoint[2591];
    real_T nb_RTree_NodeMean[2591];
    real_T ob_RTree_CutVar[2589];
    real_T ob_RTree_CutPoint[2589];
    real_T ob_RTree_NodeMean[2589];
    real_T pb_RTree_CutVar[2587];
    real_T pb_RTree_CutPoint[2587];
    real_T pb_RTree_NodeMean[2587];
    real_T qb_RTree_CutVar[2579];
    real_T qb_RTree_CutPoint[2579];
    real_T qb_RTree_NodeMean[2579];
    real_T rb_RTree_CutVar[2575];
    real_T rb_RTree_CutPoint[2575];
    real_T rb_RTree_NodeMean[2575];
  } f0;
} predictRF_Y1StackData;

#endif                                 /*typedef_predictRF_Y1StackData*/
#endif

/* End of code generation (predictRF_Y1_types.h) */
