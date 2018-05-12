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
    real_T RTree_Children[5686];
    real_T b_RTree_Children[5682];
    real_T c_RTree_Children[5674];
    real_T d_RTree_Children[5670];
    real_T e_RTree_Children[5654];
    real_T f_RTree_Children[5650];
    real_T g_RTree_Children[5646];
    real_T h_RTree_Children[5638];
    real_T i_RTree_Children[5634];
    real_T j_RTree_Children[5630];
    real_T k_RTree_Children[5626];
    real_T l_RTree_Children[5622];
    real_T m_RTree_Children[5618];
    real_T n_RTree_Children[5610];
    real_T o_RTree_Children[5606];
    real_T p_RTree_Children[5598];
    real_T q_RTree_Children[5594];
    real_T r_RTree_Children[5590];
    real_T s_RTree_Children[5586];
    real_T t_RTree_Children[5582];
    real_T u_RTree_Children[5570];
    real_T v_RTree_Children[5566];
    real_T w_RTree_Children[5562];
    real_T x_RTree_Children[5558];
    real_T y_RTree_Children[5554];
    real_T ab_RTree_Children[5550];
    real_T bb_RTree_Children[5542];
    real_T cb_RTree_Children[5538];
    real_T db_RTree_Children[5534];
    real_T eb_RTree_Children[5526];
    real_T fb_RTree_Children[5522];
    real_T gb_RTree_Children[5514];
    real_T hb_RTree_Children[5510];
    real_T ib_RTree_Children[5502];
    real_T jb_RTree_Children[5498];
    real_T kb_RTree_Children[5490];
    real_T lb_RTree_Children[5482];
    real_T mb_RTree_Children[5478];
    real_T nb_RTree_Children[5466];
    real_T ob_RTree_Children[5462];
    real_T pb_RTree_Children[5458];
    real_T qb_RTree_Children[5454];
    real_T rb_RTree_Children[5450];
    real_T sb_RTree_Children[5446];
    real_T tb_RTree_Children[5442];
    real_T ub_RTree_Children[5438];
    real_T vb_RTree_Children[5434];
    real_T wb_RTree_Children[5430];
    real_T xb_RTree_Children[5422];
    real_T yb_RTree_Children[5418];
    real_T ac_RTree_Children[5406];
    real_T bc_RTree_Children[5402];
    real_T cc_RTree_Children[5394];
    real_T dc_RTree_Children[5386];
    real_T ec_RTree_Children[5382];
    real_T fc_RTree_Children[5370];
    real_T gc_RTree_Children[5362];
    real_T hc_RTree_Children[5358];
    real_T ic_RTree_Children[5350];
    real_T jc_RTree_Children[5346];
    real_T kc_RTree_Children[5282];
    real_T lc_RTree_Children[5270];
    real_T mc_RTree_Children[5258];
    real_T nc_RTree_Children[5254];
    real_T oc_RTree_Children[5246];
    real_T pc_RTree_Children[5242];
    real_T qc_RTree_Children[5210];
    real_T rc_RTree_Children[5190];
    real_T sc_RTree_Children[5174];
    real_T tc_RTree_Children[4882];
    real_T uc_RTree_Children[4786];
    real_T RTree_CutVar[2843];
    real_T RTree_CutPoint[2843];
    real_T RTree_NodeMean[2843];
    real_T b_RTree_CutVar[2841];
    real_T b_RTree_CutPoint[2841];
    real_T b_RTree_NodeMean[2841];
    real_T c_RTree_CutVar[2837];
    real_T c_RTree_CutPoint[2837];
    real_T c_RTree_NodeMean[2837];
    real_T d_RTree_CutVar[2835];
    real_T d_RTree_CutPoint[2835];
    real_T d_RTree_NodeMean[2835];
    real_T e_RTree_CutVar[2827];
    real_T e_RTree_CutPoint[2827];
    real_T e_RTree_NodeMean[2827];
    real_T f_RTree_CutVar[2825];
    real_T f_RTree_CutPoint[2825];
    real_T f_RTree_NodeMean[2825];
    real_T g_RTree_CutVar[2823];
    real_T g_RTree_CutPoint[2823];
    real_T g_RTree_NodeMean[2823];
    real_T h_RTree_CutVar[2819];
    real_T h_RTree_CutPoint[2819];
    real_T h_RTree_NodeMean[2819];
    real_T i_RTree_CutVar[2817];
    real_T i_RTree_CutPoint[2817];
    real_T i_RTree_NodeMean[2817];
    real_T j_RTree_CutVar[2815];
    real_T j_RTree_CutPoint[2815];
    real_T j_RTree_NodeMean[2815];
    real_T k_RTree_CutVar[2813];
    real_T k_RTree_CutPoint[2813];
    real_T k_RTree_NodeMean[2813];
    real_T l_RTree_CutVar[2811];
    real_T l_RTree_CutPoint[2811];
    real_T l_RTree_NodeMean[2811];
    real_T m_RTree_CutVar[2809];
    real_T m_RTree_CutPoint[2809];
    real_T m_RTree_NodeMean[2809];
    real_T n_RTree_CutVar[2805];
    real_T n_RTree_CutPoint[2805];
    real_T n_RTree_NodeMean[2805];
    real_T o_RTree_CutVar[2803];
    real_T o_RTree_CutPoint[2803];
    real_T o_RTree_NodeMean[2803];
    real_T p_RTree_CutVar[2799];
    real_T p_RTree_CutPoint[2799];
    real_T p_RTree_NodeMean[2799];
    real_T q_RTree_CutVar[2797];
    real_T q_RTree_CutPoint[2797];
    real_T q_RTree_NodeMean[2797];
    real_T r_RTree_CutVar[2795];
    real_T r_RTree_CutPoint[2795];
    real_T r_RTree_NodeMean[2795];
    real_T s_RTree_CutVar[2793];
    real_T s_RTree_CutPoint[2793];
    real_T s_RTree_NodeMean[2793];
    real_T t_RTree_CutVar[2791];
    real_T t_RTree_CutPoint[2791];
    real_T t_RTree_NodeMean[2791];
    real_T u_RTree_CutVar[2785];
    real_T u_RTree_CutPoint[2785];
    real_T u_RTree_NodeMean[2785];
    real_T v_RTree_CutVar[2783];
    real_T v_RTree_CutPoint[2783];
    real_T v_RTree_NodeMean[2783];
    real_T w_RTree_CutVar[2781];
    real_T w_RTree_CutPoint[2781];
    real_T w_RTree_NodeMean[2781];
    real_T x_RTree_CutVar[2779];
    real_T x_RTree_CutPoint[2779];
    real_T x_RTree_NodeMean[2779];
    real_T y_RTree_CutVar[2777];
    real_T y_RTree_CutPoint[2777];
    real_T y_RTree_NodeMean[2777];
    real_T ab_RTree_CutVar[2775];
    real_T ab_RTree_CutPoint[2775];
    real_T ab_RTree_NodeMean[2775];
    real_T bb_RTree_CutVar[2771];
    real_T bb_RTree_CutPoint[2771];
    real_T bb_RTree_NodeMean[2771];
    real_T cb_RTree_CutVar[2769];
    real_T cb_RTree_CutPoint[2769];
    real_T cb_RTree_NodeMean[2769];
    real_T db_RTree_CutVar[2767];
    real_T db_RTree_CutPoint[2767];
    real_T db_RTree_NodeMean[2767];
    real_T eb_RTree_CutVar[2763];
    real_T eb_RTree_CutPoint[2763];
    real_T eb_RTree_NodeMean[2763];
    real_T fb_RTree_CutVar[2761];
    real_T fb_RTree_CutPoint[2761];
    real_T fb_RTree_NodeMean[2761];
    real_T gb_RTree_CutVar[2757];
    real_T gb_RTree_CutPoint[2757];
    real_T gb_RTree_NodeMean[2757];
    real_T hb_RTree_CutVar[2755];
    real_T hb_RTree_CutPoint[2755];
    real_T hb_RTree_NodeMean[2755];
    real_T ib_RTree_CutVar[2751];
    real_T ib_RTree_CutPoint[2751];
    real_T ib_RTree_NodeMean[2751];
    real_T jb_RTree_CutVar[2749];
    real_T jb_RTree_CutPoint[2749];
    real_T jb_RTree_NodeMean[2749];
    real_T kb_RTree_CutVar[2745];
    real_T kb_RTree_CutPoint[2745];
    real_T kb_RTree_NodeMean[2745];
    real_T lb_RTree_CutVar[2741];
    real_T lb_RTree_CutPoint[2741];
    real_T lb_RTree_NodeMean[2741];
    real_T mb_RTree_CutVar[2739];
    real_T mb_RTree_CutPoint[2739];
    real_T mb_RTree_NodeMean[2739];
    real_T nb_RTree_CutVar[2733];
    real_T nb_RTree_CutPoint[2733];
    real_T nb_RTree_NodeMean[2733];
    real_T ob_RTree_CutVar[2731];
    real_T ob_RTree_CutPoint[2731];
    real_T ob_RTree_NodeMean[2731];
    real_T pb_RTree_CutVar[2729];
    real_T pb_RTree_CutPoint[2729];
    real_T pb_RTree_NodeMean[2729];
    real_T qb_RTree_CutVar[2727];
    real_T qb_RTree_CutPoint[2727];
    real_T qb_RTree_NodeMean[2727];
    real_T rb_RTree_CutVar[2725];
    real_T rb_RTree_CutPoint[2725];
    real_T rb_RTree_NodeMean[2725];
    real_T sb_RTree_CutVar[2723];
    real_T sb_RTree_CutPoint[2723];
    real_T sb_RTree_NodeMean[2723];
    real_T tb_RTree_CutVar[2721];
    real_T tb_RTree_CutPoint[2721];
    real_T tb_RTree_NodeMean[2721];
    real_T ub_RTree_CutVar[2719];
    real_T ub_RTree_CutPoint[2719];
    real_T ub_RTree_NodeMean[2719];
    real_T vb_RTree_CutVar[2717];
    real_T vb_RTree_CutPoint[2717];
    real_T vb_RTree_NodeMean[2717];
    real_T wb_RTree_CutVar[2715];
    real_T wb_RTree_CutPoint[2715];
    real_T wb_RTree_NodeMean[2715];
    real_T xb_RTree_CutVar[2711];
    real_T xb_RTree_CutPoint[2711];
    real_T xb_RTree_NodeMean[2711];
    real_T yb_RTree_CutVar[2709];
    real_T yb_RTree_CutPoint[2709];
    real_T yb_RTree_NodeMean[2709];
    real_T ac_RTree_CutVar[2703];
    real_T ac_RTree_CutPoint[2703];
    real_T ac_RTree_NodeMean[2703];
    real_T bc_RTree_CutVar[2701];
    real_T bc_RTree_CutPoint[2701];
    real_T bc_RTree_NodeMean[2701];
    real_T cc_RTree_CutVar[2697];
    real_T cc_RTree_CutPoint[2697];
    real_T cc_RTree_NodeMean[2697];
    real_T dc_RTree_CutVar[2693];
    real_T dc_RTree_CutPoint[2693];
    real_T dc_RTree_NodeMean[2693];
    real_T ec_RTree_CutVar[2691];
    real_T ec_RTree_CutPoint[2691];
    real_T ec_RTree_NodeMean[2691];
    real_T fc_RTree_CutVar[2685];
    real_T fc_RTree_CutPoint[2685];
    real_T fc_RTree_NodeMean[2685];
    real_T gc_RTree_CutVar[2681];
    real_T gc_RTree_CutPoint[2681];
    real_T gc_RTree_NodeMean[2681];
    real_T hc_RTree_CutVar[2679];
    real_T hc_RTree_CutPoint[2679];
    real_T hc_RTree_NodeMean[2679];
    real_T ic_RTree_CutVar[2675];
    real_T ic_RTree_CutPoint[2675];
    real_T ic_RTree_NodeMean[2675];
    real_T jc_RTree_CutVar[2673];
    real_T jc_RTree_CutPoint[2673];
    real_T jc_RTree_NodeMean[2673];
    real_T kc_RTree_CutVar[2641];
    real_T kc_RTree_CutPoint[2641];
    real_T kc_RTree_NodeMean[2641];
    real_T lc_RTree_CutVar[2635];
    real_T lc_RTree_CutPoint[2635];
    real_T lc_RTree_NodeMean[2635];
    real_T mc_RTree_CutVar[2629];
    real_T mc_RTree_CutPoint[2629];
    real_T mc_RTree_NodeMean[2629];
    real_T nc_RTree_CutVar[2627];
    real_T nc_RTree_CutPoint[2627];
    real_T nc_RTree_NodeMean[2627];
    real_T oc_RTree_CutVar[2623];
    real_T oc_RTree_CutPoint[2623];
    real_T oc_RTree_NodeMean[2623];
    real_T pc_RTree_CutVar[2621];
    real_T pc_RTree_CutPoint[2621];
    real_T pc_RTree_NodeMean[2621];
    real_T qc_RTree_CutVar[2605];
    real_T qc_RTree_CutPoint[2605];
    real_T qc_RTree_NodeMean[2605];
    real_T rc_RTree_CutVar[2595];
    real_T rc_RTree_CutPoint[2595];
  } f0;
} predictRF_Y1StackData;

#endif                                 /*typedef_predictRF_Y1StackData*/
#endif

/* End of code generation (predictRF_Y1_types.h) */
