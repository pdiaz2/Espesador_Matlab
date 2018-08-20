/*
 * predictRF_Y1_B100_na6_nb6_1408_types.h
 *
 * Code generation for function 'predictRF_Y1_B100_na6_nb6_1408'
 *
 */

#ifndef PREDICTRF_Y1_B100_NA6_NB6_1408_TYPES_H
#define PREDICTRF_Y1_B100_NA6_NB6_1408_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_d_predictRF_Y1_B100_na6_nb6_140
#define typedef_d_predictRF_Y1_B100_na6_nb6_140

typedef struct {
  struct {
    real_T RTree_Children[986];
    real_T b_RTree_Children[970];
    real_T c_RTree_Children[966];
    real_T d_RTree_Children[962];
    real_T e_RTree_Children[958];
    real_T f_RTree_Children[954];
    real_T g_RTree_Children[950];
    real_T h_RTree_Children[946];
    real_T i_RTree_Children[942];
    real_T j_RTree_Children[938];
    real_T k_RTree_Children[934];
    real_T l_RTree_Children[930];
    real_T m_RTree_Children[926];
    real_T n_RTree_Children[922];
    real_T o_RTree_Children[918];
    real_T p_RTree_Children[914];
    real_T q_RTree_Children[910];
    real_T r_RTree_Children[906];
    real_T s_RTree_Children[902];
    real_T t_RTree_Children[898];
    real_T u_RTree_Children[894];
    real_T v_RTree_Children[882];
    real_T w_RTree_Children[878];
    real_T RTree_CutVar[493];
    real_T RTree_CutPoint[493];
    real_T RTree_NodeMean[493];
    real_T b_RTree_CutVar[485];
    real_T b_RTree_CutPoint[485];
    real_T b_RTree_NodeMean[485];
    real_T c_RTree_CutVar[483];
    real_T c_RTree_CutPoint[483];
    real_T c_RTree_NodeMean[483];
    real_T d_RTree_CutVar[481];
    real_T d_RTree_CutPoint[481];
    real_T d_RTree_NodeMean[481];
    real_T e_RTree_CutVar[479];
    real_T e_RTree_CutPoint[479];
    real_T e_RTree_NodeMean[479];
  } f0;
} d_predictRF_Y1_B100_na6_nb6_140;

#endif                                 /*typedef_d_predictRF_Y1_B100_na6_nb6_140*/

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

/* End of code generation (predictRF_Y1_B100_na6_nb6_1408_types.h) */
