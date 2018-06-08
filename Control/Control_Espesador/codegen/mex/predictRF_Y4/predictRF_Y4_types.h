/*
 * predictRF_Y4_types.h
 *
 * Code generation for function 'predictRF_Y4'
 *
 */

#ifndef PREDICTRF_Y4_TYPES_H
#define PREDICTRF_Y4_TYPES_H

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

#ifndef typedef_predictRF_Y4StackData
#define typedef_predictRF_Y4StackData

typedef struct {
  struct {
    real_T RTree_Children[934];
    real_T b_RTree_Children[898];
    real_T c_RTree_Children[890];
    real_T d_RTree_Children[886];
    real_T e_RTree_Children[878];
    real_T f_RTree_Children[874];
    real_T g_RTree_Children[870];
    real_T h_RTree_Children[866];
    real_T i_RTree_Children[862];
    real_T j_RTree_Children[858];
    real_T k_RTree_Children[854];
    real_T l_RTree_Children[850];
    real_T m_RTree_Children[846];
    real_T n_RTree_Children[842];
    real_T o_RTree_Children[838];
    real_T p_RTree_Children[834];
    real_T q_RTree_Children[830];
    real_T r_RTree_Children[822];
    real_T s_RTree_Children[814];
    real_T t_RTree_Children[806];
    real_T u_RTree_Children[798];
    real_T RTree_CutVar[467];
    real_T RTree_CutPoint[467];
    real_T RTree_NodeMean[467];
    real_T b_RTree_CutVar[449];
    real_T b_RTree_CutPoint[449];
  } f0;
} predictRF_Y4StackData;

#endif                                 /*typedef_predictRF_Y4StackData*/
#endif

/* End of code generation (predictRF_Y4_types.h) */
