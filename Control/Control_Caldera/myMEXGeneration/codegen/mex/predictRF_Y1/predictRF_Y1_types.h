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
    real_T RTree_Children[5930];
    real_T b_RTree_Children[5926];
    real_T c_RTree_Children[5922];
    real_T d_RTree_Children[5918];
    real_T e_RTree_Children[5914];
    real_T f_RTree_Children[5910];
    real_T g_RTree_Children[5906];
    real_T h_RTree_Children[5902];
    real_T i_RTree_Children[5898];
    real_T j_RTree_Children[5894];
    real_T k_RTree_Children[5890];
    real_T l_RTree_Children[5886];
    real_T m_RTree_Children[5882];
    real_T n_RTree_Children[5878];
    real_T o_RTree_Children[5874];
    real_T p_RTree_Children[5870];
    real_T q_RTree_Children[5866];
    real_T r_RTree_Children[5862];
    real_T s_RTree_Children[5858];
    real_T t_RTree_Children[5854];
    real_T u_RTree_Children[5850];
    real_T v_RTree_Children[5846];
    real_T w_RTree_Children[5842];
    real_T x_RTree_Children[5838];
    real_T y_RTree_Children[5834];
    real_T ab_RTree_Children[5830];
    real_T bb_RTree_Children[5826];
    real_T cb_RTree_Children[5818];
    real_T db_RTree_Children[5814];
    real_T eb_RTree_Children[5810];
    real_T fb_RTree_Children[5806];
    real_T gb_RTree_Children[5802];
    real_T hb_RTree_Children[5798];
    real_T ib_RTree_Children[5790];
    real_T jb_RTree_Children[5786];
    real_T kb_RTree_Children[5758];
    real_T lb_RTree_Children[5754];
    real_T mb_RTree_Children[5750];
    real_T nb_RTree_Children[5706];
    real_T RTree_CutVar[2965];
    real_T RTree_CutPoint[2965];
    real_T RTree_NodeMean[2965];
    real_T b_RTree_CutVar[2963];
    real_T b_RTree_CutPoint[2963];
    real_T b_RTree_NodeMean[2963];
    real_T c_RTree_CutVar[2961];
    real_T c_RTree_CutPoint[2961];
    real_T c_RTree_NodeMean[2961];
    real_T d_RTree_CutVar[2959];
    real_T d_RTree_CutPoint[2959];
    real_T d_RTree_NodeMean[2959];
    real_T e_RTree_CutVar[2957];
    real_T e_RTree_CutPoint[2957];
    real_T e_RTree_NodeMean[2957];
    real_T f_RTree_CutVar[2955];
    real_T f_RTree_CutPoint[2955];
    real_T f_RTree_NodeMean[2955];
    real_T g_RTree_CutVar[2953];
    real_T g_RTree_CutPoint[2953];
    real_T g_RTree_NodeMean[2953];
    real_T h_RTree_CutVar[2951];
    real_T h_RTree_CutPoint[2951];
    real_T h_RTree_NodeMean[2951];
    real_T i_RTree_CutVar[2949];
    real_T i_RTree_CutPoint[2949];
    real_T i_RTree_NodeMean[2949];
    real_T j_RTree_CutVar[2947];
    real_T j_RTree_CutPoint[2947];
    real_T j_RTree_NodeMean[2947];
    real_T k_RTree_CutVar[2945];
    real_T k_RTree_CutPoint[2945];
    real_T k_RTree_NodeMean[2945];
    real_T l_RTree_CutVar[2943];
    real_T l_RTree_CutPoint[2943];
    real_T l_RTree_NodeMean[2943];
    real_T m_RTree_CutVar[2941];
    real_T m_RTree_CutPoint[2941];
    real_T m_RTree_NodeMean[2941];
    real_T n_RTree_CutVar[2939];
    real_T n_RTree_CutPoint[2939];
    real_T n_RTree_NodeMean[2939];
    real_T o_RTree_CutVar[2937];
    real_T o_RTree_CutPoint[2937];
    real_T o_RTree_NodeMean[2937];
    real_T p_RTree_CutVar[2935];
    real_T p_RTree_CutPoint[2935];
    real_T p_RTree_NodeMean[2935];
    real_T q_RTree_CutVar[2933];
    real_T q_RTree_CutPoint[2933];
    real_T q_RTree_NodeMean[2933];
    real_T r_RTree_CutVar[2931];
    real_T r_RTree_CutPoint[2931];
    real_T r_RTree_NodeMean[2931];
    real_T s_RTree_CutVar[2929];
    real_T s_RTree_CutPoint[2929];
    real_T s_RTree_NodeMean[2929];
    real_T t_RTree_CutVar[2927];
    real_T t_RTree_CutPoint[2927];
    real_T t_RTree_NodeMean[2927];
    real_T u_RTree_CutVar[2925];
    real_T u_RTree_CutPoint[2925];
    real_T u_RTree_NodeMean[2925];
    real_T v_RTree_CutVar[2923];
    real_T v_RTree_CutPoint[2923];
    real_T v_RTree_NodeMean[2923];
    real_T w_RTree_CutVar[2921];
    real_T w_RTree_CutPoint[2921];
    real_T w_RTree_NodeMean[2921];
    real_T x_RTree_CutVar[2919];
    real_T x_RTree_CutPoint[2919];
    real_T x_RTree_NodeMean[2919];
    real_T y_RTree_CutVar[2917];
    real_T y_RTree_CutPoint[2917];
    real_T y_RTree_NodeMean[2917];
    real_T ab_RTree_CutVar[2915];
    real_T ab_RTree_CutPoint[2915];
    real_T ab_RTree_NodeMean[2915];
    real_T bb_RTree_CutVar[2913];
    real_T bb_RTree_CutPoint[2913];
    real_T bb_RTree_NodeMean[2913];
    real_T cb_RTree_CutVar[2909];
    real_T cb_RTree_CutPoint[2909];
    real_T cb_RTree_NodeMean[2909];
    real_T db_RTree_CutVar[2907];
    real_T db_RTree_CutPoint[2907];
    real_T db_RTree_NodeMean[2907];
    real_T eb_RTree_CutVar[2905];
    real_T eb_RTree_CutPoint[2905];
    real_T eb_RTree_NodeMean[2905];
    real_T fb_RTree_CutVar[2903];
    real_T fb_RTree_CutPoint[2903];
    real_T fb_RTree_NodeMean[2903];
    real_T gb_RTree_CutVar[2901];
    real_T gb_RTree_CutPoint[2901];
    real_T gb_RTree_NodeMean[2901];
    real_T hb_RTree_CutVar[2899];
    real_T hb_RTree_CutPoint[2899];
    real_T hb_RTree_NodeMean[2899];
    real_T ib_RTree_CutVar[2895];
    real_T ib_RTree_CutPoint[2895];
    real_T ib_RTree_NodeMean[2895];
    real_T jb_RTree_CutVar[2893];
    real_T jb_RTree_CutPoint[2893];
    real_T jb_RTree_NodeMean[2893];
    real_T kb_RTree_CutVar[2879];
    real_T kb_RTree_CutPoint[2879];
    real_T kb_RTree_NodeMean[2879];
    real_T lb_RTree_CutVar[2877];
  } f0;
} predictRF_Y1StackData;

#endif                                 /*typedef_predictRF_Y1StackData*/
#endif

/* End of code generation (predictRF_Y1_types.h) */
