/*
 * predictRF_Y3_B100_na6_nb6_1408_types.h
 *
 * Code generation for function 'predictRF_Y3_B100_na6_nb6_1408'
 *
 */

#ifndef PREDICTRF_Y3_B100_NA6_NB6_1408_TYPES_H
#define PREDICTRF_Y3_B100_NA6_NB6_1408_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_d_predictRF_Y3_B100_na6_nb6_140
#define typedef_d_predictRF_Y3_B100_na6_nb6_140

typedef struct {
  struct {
    real_T RTree_Children[774];
    real_T b_RTree_Children[766];
    real_T c_RTree_Children[762];
    real_T d_RTree_Children[758];
    real_T e_RTree_Children[754];
    real_T f_RTree_Children[750];
    real_T g_RTree_Children[746];
    real_T h_RTree_Children[742];
    real_T i_RTree_Children[738];
    real_T j_RTree_Children[734];
    real_T k_RTree_Children[730];
    real_T l_RTree_Children[726];
    real_T m_RTree_Children[722];
    real_T n_RTree_Children[718];
    real_T o_RTree_Children[714];
    real_T p_RTree_Children[710];
    real_T q_RTree_Children[706];
    real_T r_RTree_Children[698];
    real_T s_RTree_Children[694];
    real_T t_RTree_Children[690];
    real_T u_RTree_Children[686];
    real_T v_RTree_Children[682];
    real_T w_RTree_Children[678];
    real_T x_RTree_Children[674];
    real_T y_RTree_Children[670];
    real_T ab_RTree_Children[666];
    real_T bb_RTree_Children[654];
    real_T RTree_CutVar[387];
    real_T RTree_CutPoint[387];
    real_T RTree_NodeMean[387];
    real_T b_RTree_CutVar[383];
    real_T b_RTree_CutPoint[383];
    real_T b_RTree_NodeMean[383];
    real_T c_RTree_CutVar[381];
    real_T c_RTree_CutPoint[381];
    real_T c_RTree_NodeMean[381];
    real_T d_RTree_CutVar[379];
    real_T d_RTree_CutPoint[379];
  } f0;
} d_predictRF_Y3_B100_na6_nb6_140;

#endif                                 /*typedef_d_predictRF_Y3_B100_na6_nb6_140*/

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
#endif

/* End of code generation (predictRF_Y3_B100_na6_nb6_1408_types.h) */
