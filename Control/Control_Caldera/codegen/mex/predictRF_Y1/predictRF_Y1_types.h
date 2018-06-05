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
    real_T RTree_Children[9006];
    real_T b_RTree_Children[8986];
    real_T c_RTree_Children[8982];
    real_T d_RTree_Children[8970];
    real_T e_RTree_Children[8966];
    real_T f_RTree_Children[8954];
    real_T g_RTree_Children[8950];
    real_T h_RTree_Children[8942];
    real_T i_RTree_Children[8934];
    real_T j_RTree_Children[8926];
    real_T k_RTree_Children[8922];
    real_T l_RTree_Children[8918];
    real_T m_RTree_Children[8910];
    real_T n_RTree_Children[8890];
    real_T o_RTree_Children[8886];
    real_T p_RTree_Children[8882];
    real_T q_RTree_Children[8878];
    real_T r_RTree_Children[8870];
    real_T s_RTree_Children[8866];
    real_T t_RTree_Children[8862];
    real_T u_RTree_Children[8854];
    real_T v_RTree_Children[8850];
    real_T w_RTree_Children[8846];
    real_T x_RTree_Children[8842];
    real_T y_RTree_Children[8838];
    real_T ab_RTree_Children[8830];
    real_T bb_RTree_Children[8826];
    real_T cb_RTree_Children[8822];
    real_T db_RTree_Children[8818];
    real_T eb_RTree_Children[8814];
    real_T fb_RTree_Children[8810];
    real_T gb_RTree_Children[8806];
    real_T hb_RTree_Children[8802];
    real_T ib_RTree_Children[8798];
    real_T jb_RTree_Children[8794];
    real_T kb_RTree_Children[8790];
    real_T lb_RTree_Children[8786];
    real_T mb_RTree_Children[8782];
    real_T nb_RTree_Children[8778];
    real_T ob_RTree_Children[8774];
    real_T pb_RTree_Children[8770];
    real_T qb_RTree_Children[8766];
    real_T rb_RTree_Children[8762];
    real_T sb_RTree_Children[8758];
    real_T tb_RTree_Children[8750];
    real_T ub_RTree_Children[8746];
    real_T vb_RTree_Children[8734];
    real_T wb_RTree_Children[8730];
    real_T xb_RTree_Children[8726];
    real_T yb_RTree_Children[8718];
    real_T ac_RTree_Children[8714];
    real_T bc_RTree_Children[8690];
    real_T cc_RTree_Children[8686];
    real_T dc_RTree_Children[8650];
    real_T RTree_CutVar[4503];
    real_T RTree_CutPoint[4503];
    real_T RTree_NodeMean[4503];
    real_T b_RTree_CutVar[4493];
    real_T b_RTree_CutPoint[4493];
    real_T b_RTree_NodeMean[4493];
    real_T c_RTree_CutVar[4491];
    real_T c_RTree_CutPoint[4491];
    real_T c_RTree_NodeMean[4491];
    real_T d_RTree_CutVar[4485];
    real_T d_RTree_CutPoint[4485];
    real_T d_RTree_NodeMean[4485];
    real_T e_RTree_CutVar[4483];
    real_T e_RTree_CutPoint[4483];
    real_T e_RTree_NodeMean[4483];
    real_T f_RTree_CutVar[4477];
    real_T f_RTree_CutPoint[4477];
    real_T f_RTree_NodeMean[4477];
    real_T g_RTree_CutVar[4475];
    real_T g_RTree_CutPoint[4475];
    real_T g_RTree_NodeMean[4475];
    real_T h_RTree_CutVar[4471];
    real_T h_RTree_CutPoint[4471];
    real_T h_RTree_NodeMean[4471];
    real_T i_RTree_CutVar[4467];
    real_T i_RTree_CutPoint[4467];
    real_T i_RTree_NodeMean[4467];
    real_T j_RTree_CutVar[4463];
    real_T j_RTree_CutPoint[4463];
    real_T j_RTree_NodeMean[4463];
    real_T k_RTree_CutVar[4461];
    real_T k_RTree_CutPoint[4461];
    real_T k_RTree_NodeMean[4461];
    real_T l_RTree_CutVar[4459];
    real_T l_RTree_CutPoint[4459];
    real_T l_RTree_NodeMean[4459];
    real_T m_RTree_CutVar[4455];
    real_T m_RTree_CutPoint[4455];
    real_T m_RTree_NodeMean[4455];
    real_T n_RTree_CutVar[4445];
    real_T n_RTree_CutPoint[4445];
    real_T n_RTree_NodeMean[4445];
    real_T o_RTree_CutVar[4443];
    real_T o_RTree_CutPoint[4443];
    real_T o_RTree_NodeMean[4443];
    real_T p_RTree_CutVar[4441];
    real_T p_RTree_CutPoint[4441];
    real_T p_RTree_NodeMean[4441];
    real_T q_RTree_CutVar[4439];
    real_T q_RTree_CutPoint[4439];
    real_T q_RTree_NodeMean[4439];
    real_T r_RTree_CutVar[4435];
    real_T r_RTree_CutPoint[4435];
    real_T r_RTree_NodeMean[4435];
    real_T s_RTree_CutVar[4433];
    real_T s_RTree_CutPoint[4433];
    real_T s_RTree_NodeMean[4433];
    real_T t_RTree_CutVar[4431];
    real_T t_RTree_CutPoint[4431];
    real_T t_RTree_NodeMean[4431];
    real_T u_RTree_CutVar[4427];
    real_T u_RTree_CutPoint[4427];
    real_T u_RTree_NodeMean[4427];
    real_T v_RTree_CutVar[4425];
    real_T v_RTree_CutPoint[4425];
    real_T v_RTree_NodeMean[4425];
    real_T w_RTree_CutVar[4423];
    real_T w_RTree_CutPoint[4423];
    real_T w_RTree_NodeMean[4423];
    real_T x_RTree_CutVar[4421];
    real_T x_RTree_CutPoint[4421];
    real_T x_RTree_NodeMean[4421];
    real_T y_RTree_CutVar[4419];
    real_T y_RTree_CutPoint[4419];
    real_T y_RTree_NodeMean[4419];
    real_T ab_RTree_CutVar[4415];
    real_T ab_RTree_CutPoint[4415];
    real_T ab_RTree_NodeMean[4415];
    real_T bb_RTree_CutVar[4413];
    real_T bb_RTree_CutPoint[4413];
    real_T bb_RTree_NodeMean[4413];
    real_T cb_RTree_CutVar[4411];
    real_T cb_RTree_CutPoint[4411];
    real_T cb_RTree_NodeMean[4411];
    real_T db_RTree_CutVar[4409];
    real_T db_RTree_CutPoint[4409];
    real_T db_RTree_NodeMean[4409];
    real_T eb_RTree_CutVar[4407];
    real_T eb_RTree_CutPoint[4407];
    real_T eb_RTree_NodeMean[4407];
    real_T fb_RTree_CutVar[4405];
    real_T fb_RTree_CutPoint[4405];
    real_T fb_RTree_NodeMean[4405];
    real_T gb_RTree_CutVar[4403];
    real_T gb_RTree_CutPoint[4403];
    real_T gb_RTree_NodeMean[4403];
    real_T hb_RTree_CutVar[4401];
    real_T hb_RTree_CutPoint[4401];
    real_T hb_RTree_NodeMean[4401];
    real_T ib_RTree_CutVar[4399];
    real_T ib_RTree_CutPoint[4399];
    real_T ib_RTree_NodeMean[4399];
    real_T jb_RTree_CutVar[4397];
    real_T jb_RTree_CutPoint[4397];
    real_T jb_RTree_NodeMean[4397];
    real_T kb_RTree_CutVar[4395];
    real_T kb_RTree_CutPoint[4395];
    real_T kb_RTree_NodeMean[4395];
    real_T lb_RTree_CutVar[4393];
    real_T lb_RTree_CutPoint[4393];
    real_T lb_RTree_NodeMean[4393];
    real_T mb_RTree_CutVar[4391];
    real_T mb_RTree_CutPoint[4391];
    real_T mb_RTree_NodeMean[4391];
    real_T nb_RTree_CutVar[4389];
    real_T nb_RTree_CutPoint[4389];
    real_T nb_RTree_NodeMean[4389];
    real_T ob_RTree_CutVar[4387];
    real_T ob_RTree_CutPoint[4387];
    real_T ob_RTree_NodeMean[4387];
    real_T pb_RTree_CutVar[4385];
    real_T pb_RTree_CutPoint[4385];
    real_T pb_RTree_NodeMean[4385];
    real_T qb_RTree_CutVar[4383];
    real_T qb_RTree_CutPoint[4383];
    real_T qb_RTree_NodeMean[4383];
    real_T rb_RTree_CutVar[4381];
    real_T rb_RTree_CutPoint[4381];
    real_T rb_RTree_NodeMean[4381];
    real_T sb_RTree_CutVar[4379];
    real_T sb_RTree_CutPoint[4379];
    real_T sb_RTree_NodeMean[4379];
    real_T tb_RTree_CutVar[4375];
    real_T tb_RTree_CutPoint[4375];
    real_T tb_RTree_NodeMean[4375];
    real_T ub_RTree_CutVar[4373];
    real_T ub_RTree_CutPoint[4373];
    real_T ub_RTree_NodeMean[4373];
    real_T vb_RTree_CutVar[4367];
    real_T vb_RTree_CutPoint[4367];
    real_T vb_RTree_NodeMean[4367];
    real_T wb_RTree_CutVar[4365];
    real_T wb_RTree_CutPoint[4365];
    real_T wb_RTree_NodeMean[4365];
    real_T xb_RTree_CutVar[4363];
    real_T xb_RTree_CutPoint[4363];
    real_T xb_RTree_NodeMean[4363];
    real_T yb_RTree_CutVar[4359];
    real_T yb_RTree_CutPoint[4359];
    real_T yb_RTree_NodeMean[4359];
    real_T ac_RTree_CutVar[4357];
    real_T ac_RTree_CutPoint[4357];
    real_T ac_RTree_NodeMean[4357];
    real_T bc_RTree_CutVar[4345];
    real_T bc_RTree_CutPoint[4345];
    real_T bc_RTree_NodeMean[4345];
    real_T cc_RTree_CutVar[4343];
  } f0;
} predictRF_Y1StackData;

#endif                                 /*typedef_predictRF_Y1StackData*/
#endif

/* End of code generation (predictRF_Y1_types.h) */
