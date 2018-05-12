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
    real_T RTree_Children[9774];
    real_T b_RTree_Children[9630];
    real_T c_RTree_Children[9590];
    real_T d_RTree_Children[9578];
    real_T e_RTree_Children[9570];
    real_T f_RTree_Children[9566];
    real_T g_RTree_Children[9562];
    real_T h_RTree_Children[9518];
    real_T i_RTree_Children[9498];
    real_T j_RTree_Children[9482];
    real_T k_RTree_Children[9470];
    real_T l_RTree_Children[9450];
    real_T m_RTree_Children[9446];
    real_T n_RTree_Children[9434];
    real_T o_RTree_Children[9426];
    real_T p_RTree_Children[9418];
    real_T q_RTree_Children[9414];
    real_T r_RTree_Children[9406];
    real_T s_RTree_Children[9394];
    real_T t_RTree_Children[9386];
    real_T u_RTree_Children[9382];
    real_T v_RTree_Children[9370];
    real_T w_RTree_Children[9366];
    real_T x_RTree_Children[9362];
    real_T y_RTree_Children[9358];
    real_T ab_RTree_Children[9354];
    real_T bb_RTree_Children[9346];
    real_T cb_RTree_Children[9338];
    real_T db_RTree_Children[9330];
    real_T eb_RTree_Children[9326];
    real_T fb_RTree_Children[9322];
    real_T gb_RTree_Children[9318];
    real_T hb_RTree_Children[9306];
    real_T ib_RTree_Children[9294];
    real_T jb_RTree_Children[9290];
    real_T kb_RTree_Children[9278];
    real_T lb_RTree_Children[9274];
    real_T mb_RTree_Children[9270];
    real_T nb_RTree_Children[9266];
    real_T ob_RTree_Children[9262];
    real_T pb_RTree_Children[9258];
    real_T qb_RTree_Children[9250];
    real_T rb_RTree_Children[9242];
    real_T sb_RTree_Children[9238];
    real_T tb_RTree_Children[9234];
    real_T ub_RTree_Children[9230];
    real_T vb_RTree_Children[9226];
    real_T wb_RTree_Children[9210];
    real_T xb_RTree_Children[9206];
    real_T yb_RTree_Children[9194];
    real_T ac_RTree_Children[9182];
    real_T bc_RTree_Children[9178];
    real_T cc_RTree_Children[9166];
    real_T dc_RTree_Children[9154];
    real_T ec_RTree_Children[9150];
    real_T fc_RTree_Children[9138];
    real_T gc_RTree_Children[9134];
    real_T hc_RTree_Children[9130];
    real_T ic_RTree_Children[9126];
    real_T jc_RTree_Children[9110];
    real_T kc_RTree_Children[9098];
    real_T lc_RTree_Children[9090];
    real_T mc_RTree_Children[9086];
    real_T nc_RTree_Children[9070];
    real_T oc_RTree_Children[9022];
    real_T pc_RTree_Children[9018];
    real_T qc_RTree_Children[9010];
    real_T rc_RTree_Children[8962];
    real_T sc_RTree_Children[8954];
    real_T tc_RTree_Children[8930];
    real_T uc_RTree_Children[8894];
    real_T vc_RTree_Children[8886];
    real_T wc_RTree_Children[8870];
    real_T xc_RTree_Children[8786];
    real_T yc_RTree_Children[7830];
    real_T RTree_CutVar[4887];
    real_T RTree_CutPoint[4887];
    real_T RTree_NodeMean[4887];
    real_T b_RTree_CutVar[4815];
    real_T b_RTree_CutPoint[4815];
    real_T b_RTree_NodeMean[4815];
    real_T c_RTree_CutVar[4795];
    real_T c_RTree_CutPoint[4795];
    real_T c_RTree_NodeMean[4795];
    real_T d_RTree_CutVar[4789];
    real_T d_RTree_CutPoint[4789];
    real_T d_RTree_NodeMean[4789];
    real_T e_RTree_CutVar[4785];
    real_T e_RTree_CutPoint[4785];
    real_T e_RTree_NodeMean[4785];
    real_T f_RTree_CutVar[4783];
    real_T f_RTree_CutPoint[4783];
    real_T f_RTree_NodeMean[4783];
    real_T g_RTree_CutVar[4781];
    real_T g_RTree_CutPoint[4781];
    real_T g_RTree_NodeMean[4781];
    real_T h_RTree_CutVar[4759];
    real_T h_RTree_CutPoint[4759];
    real_T h_RTree_NodeMean[4759];
    real_T i_RTree_CutVar[4749];
    real_T i_RTree_CutPoint[4749];
    real_T i_RTree_NodeMean[4749];
    real_T j_RTree_CutVar[4741];
    real_T j_RTree_CutPoint[4741];
    real_T j_RTree_NodeMean[4741];
    real_T k_RTree_CutVar[4735];
    real_T k_RTree_CutPoint[4735];
    real_T k_RTree_NodeMean[4735];
    real_T l_RTree_CutVar[4725];
    real_T l_RTree_CutPoint[4725];
    real_T l_RTree_NodeMean[4725];
    real_T m_RTree_CutVar[4723];
    real_T m_RTree_CutPoint[4723];
    real_T m_RTree_NodeMean[4723];
    real_T n_RTree_CutVar[4717];
    real_T n_RTree_CutPoint[4717];
    real_T n_RTree_NodeMean[4717];
    real_T o_RTree_CutVar[4713];
    real_T o_RTree_CutPoint[4713];
    real_T o_RTree_NodeMean[4713];
    real_T p_RTree_CutVar[4709];
    real_T p_RTree_CutPoint[4709];
    real_T p_RTree_NodeMean[4709];
    real_T q_RTree_CutVar[4707];
    real_T q_RTree_CutPoint[4707];
    real_T q_RTree_NodeMean[4707];
    real_T r_RTree_CutVar[4703];
    real_T r_RTree_CutPoint[4703];
    real_T r_RTree_NodeMean[4703];
    real_T s_RTree_CutVar[4697];
    real_T s_RTree_CutPoint[4697];
    real_T s_RTree_NodeMean[4697];
    real_T t_RTree_CutVar[4693];
    real_T t_RTree_CutPoint[4693];
    real_T t_RTree_NodeMean[4693];
    real_T u_RTree_CutVar[4691];
    real_T u_RTree_CutPoint[4691];
    real_T u_RTree_NodeMean[4691];
    real_T v_RTree_CutVar[4685];
    real_T v_RTree_CutPoint[4685];
    real_T v_RTree_NodeMean[4685];
    real_T w_RTree_CutVar[4683];
    real_T w_RTree_CutPoint[4683];
    real_T w_RTree_NodeMean[4683];
    real_T x_RTree_CutVar[4681];
    real_T x_RTree_CutPoint[4681];
    real_T x_RTree_NodeMean[4681];
    real_T y_RTree_CutVar[4679];
    real_T y_RTree_CutPoint[4679];
    real_T y_RTree_NodeMean[4679];
    real_T ab_RTree_CutVar[4677];
    real_T ab_RTree_CutPoint[4677];
    real_T ab_RTree_NodeMean[4677];
    real_T bb_RTree_CutVar[4673];
    real_T bb_RTree_CutPoint[4673];
    real_T bb_RTree_NodeMean[4673];
    real_T cb_RTree_CutVar[4669];
    real_T cb_RTree_CutPoint[4669];
    real_T cb_RTree_NodeMean[4669];
    real_T db_RTree_CutVar[4665];
    real_T db_RTree_CutPoint[4665];
    real_T db_RTree_NodeMean[4665];
    real_T eb_RTree_CutVar[4663];
    real_T eb_RTree_CutPoint[4663];
    real_T eb_RTree_NodeMean[4663];
    real_T fb_RTree_CutVar[4661];
    real_T fb_RTree_CutPoint[4661];
    real_T fb_RTree_NodeMean[4661];
    real_T gb_RTree_CutVar[4659];
    real_T gb_RTree_CutPoint[4659];
    real_T gb_RTree_NodeMean[4659];
    real_T hb_RTree_CutVar[4653];
    real_T hb_RTree_CutPoint[4653];
    real_T hb_RTree_NodeMean[4653];
    real_T ib_RTree_CutVar[4647];
    real_T ib_RTree_CutPoint[4647];
    real_T ib_RTree_NodeMean[4647];
    real_T jb_RTree_CutVar[4645];
    real_T jb_RTree_CutPoint[4645];
    real_T jb_RTree_NodeMean[4645];
    real_T kb_RTree_CutVar[4639];
    real_T kb_RTree_CutPoint[4639];
    real_T kb_RTree_NodeMean[4639];
    real_T lb_RTree_CutVar[4637];
    real_T lb_RTree_CutPoint[4637];
    real_T lb_RTree_NodeMean[4637];
    real_T mb_RTree_CutVar[4635];
    real_T mb_RTree_CutPoint[4635];
    real_T mb_RTree_NodeMean[4635];
    real_T nb_RTree_CutVar[4633];
    real_T nb_RTree_CutPoint[4633];
    real_T nb_RTree_NodeMean[4633];
    real_T ob_RTree_CutVar[4631];
    real_T ob_RTree_CutPoint[4631];
    real_T ob_RTree_NodeMean[4631];
    real_T pb_RTree_CutVar[4629];
    real_T pb_RTree_CutPoint[4629];
    real_T pb_RTree_NodeMean[4629];
    real_T qb_RTree_CutVar[4625];
    real_T qb_RTree_CutPoint[4625];
    real_T qb_RTree_NodeMean[4625];
    real_T rb_RTree_CutVar[4621];
    real_T rb_RTree_CutPoint[4621];
    real_T rb_RTree_NodeMean[4621];
    real_T sb_RTree_CutVar[4619];
    real_T sb_RTree_CutPoint[4619];
    real_T sb_RTree_NodeMean[4619];
    real_T tb_RTree_CutVar[4617];
    real_T tb_RTree_CutPoint[4617];
    real_T tb_RTree_NodeMean[4617];
    real_T ub_RTree_CutVar[4615];
    real_T ub_RTree_CutPoint[4615];
    real_T ub_RTree_NodeMean[4615];
    real_T vb_RTree_CutVar[4613];
    real_T vb_RTree_CutPoint[4613];
    real_T vb_RTree_NodeMean[4613];
    real_T wb_RTree_CutVar[4605];
    real_T wb_RTree_CutPoint[4605];
    real_T wb_RTree_NodeMean[4605];
    real_T xb_RTree_CutVar[4603];
    real_T xb_RTree_CutPoint[4603];
    real_T xb_RTree_NodeMean[4603];
    real_T yb_RTree_CutVar[4597];
    real_T yb_RTree_CutPoint[4597];
    real_T yb_RTree_NodeMean[4597];
    real_T ac_RTree_CutVar[4591];
    real_T ac_RTree_CutPoint[4591];
    real_T ac_RTree_NodeMean[4591];
    real_T bc_RTree_CutVar[4589];
    real_T bc_RTree_CutPoint[4589];
    real_T bc_RTree_NodeMean[4589];
    real_T cc_RTree_CutVar[4583];
    real_T cc_RTree_CutPoint[4583];
    real_T cc_RTree_NodeMean[4583];
    real_T dc_RTree_CutVar[4577];
    real_T dc_RTree_CutPoint[4577];
    real_T dc_RTree_NodeMean[4577];
    real_T ec_RTree_CutVar[4575];
    real_T ec_RTree_CutPoint[4575];
    real_T ec_RTree_NodeMean[4575];
    real_T fc_RTree_CutVar[4569];
    real_T fc_RTree_CutPoint[4569];
    real_T fc_RTree_NodeMean[4569];
    real_T gc_RTree_CutVar[4567];
    real_T gc_RTree_CutPoint[4567];
    real_T gc_RTree_NodeMean[4567];
    real_T hc_RTree_CutVar[4565];
    real_T hc_RTree_CutPoint[4565];
    real_T hc_RTree_NodeMean[4565];
    real_T ic_RTree_CutVar[4563];
    real_T ic_RTree_CutPoint[4563];
    real_T ic_RTree_NodeMean[4563];
    real_T jc_RTree_CutVar[4555];
    real_T jc_RTree_CutPoint[4555];
    real_T jc_RTree_NodeMean[4555];
    real_T kc_RTree_CutVar[4549];
    real_T kc_RTree_CutPoint[4549];
    real_T kc_RTree_NodeMean[4549];
    real_T lc_RTree_CutVar[4545];
    real_T lc_RTree_CutPoint[4545];
    real_T lc_RTree_NodeMean[4545];
    real_T mc_RTree_CutVar[4543];
    real_T mc_RTree_CutPoint[4543];
    real_T mc_RTree_NodeMean[4543];
    real_T nc_RTree_CutVar[4535];
    real_T nc_RTree_CutPoint[4535];
    real_T nc_RTree_NodeMean[4535];
    real_T oc_RTree_CutVar[4511];
    real_T oc_RTree_CutPoint[4511];
    real_T oc_RTree_NodeMean[4511];
    real_T pc_RTree_CutVar[4509];
    real_T pc_RTree_CutPoint[4509];
    real_T pc_RTree_NodeMean[4509];
    real_T qc_RTree_CutVar[4505];
    real_T qc_RTree_CutPoint[4505];
    real_T qc_RTree_NodeMean[4505];
    real_T rc_RTree_CutVar[4481];
    real_T rc_RTree_CutPoint[4481];
    real_T rc_RTree_NodeMean[4481];
    real_T sc_RTree_CutVar[4477];
    real_T sc_RTree_CutPoint[4477];
    real_T sc_RTree_NodeMean[4477];
    real_T tc_RTree_CutVar[4465];
    real_T tc_RTree_CutPoint[4465];
    real_T tc_RTree_NodeMean[4465];
    real_T uc_RTree_CutVar[4447];
    real_T uc_RTree_CutPoint[4447];
    real_T uc_RTree_NodeMean[4447];
    real_T vc_RTree_CutVar[4443];
    real_T vc_RTree_CutPoint[4443];
    real_T vc_RTree_NodeMean[4443];
    real_T wc_RTree_CutVar[4435];
    real_T wc_RTree_CutPoint[4435];
    real_T wc_RTree_NodeMean[4435];
  } f0;
} predictRF_Y3StackData;

#endif                                 /*typedef_predictRF_Y3StackData*/
#endif

/* End of code generation (predictRF_Y3_types.h) */
