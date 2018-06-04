/*
 * predictRF_Y2_types.h
 *
 * Code generation for function 'predictRF_Y2'
 *
 */

#ifndef PREDICTRF_Y2_TYPES_H
#define PREDICTRF_Y2_TYPES_H

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

#ifndef typedef_predictRF_Y2StackData
#define typedef_predictRF_Y2StackData

typedef struct {
  struct {
    real_T RTree_Children[1526];
    real_T b_RTree_Children[1514];
    real_T c_RTree_Children[1510];
    real_T d_RTree_Children[1506];
    real_T e_RTree_Children[1502];
    real_T f_RTree_Children[1498];
    real_T g_RTree_Children[1494];
    real_T h_RTree_Children[1486];
    real_T i_RTree_Children[1482];
    real_T j_RTree_Children[1474];
    real_T k_RTree_Children[1470];
    real_T l_RTree_Children[1466];
    real_T m_RTree_Children[1462];
    real_T n_RTree_Children[1458];
    real_T o_RTree_Children[1454];
    real_T p_RTree_Children[1450];
    real_T q_RTree_Children[1446];
    real_T r_RTree_Children[1442];
    real_T s_RTree_Children[1438];
    real_T t_RTree_Children[1434];
    real_T u_RTree_Children[1430];
    real_T v_RTree_Children[1426];
    real_T w_RTree_Children[1422];
    real_T x_RTree_Children[1418];
    real_T y_RTree_Children[1414];
    real_T ab_RTree_Children[1410];
    real_T bb_RTree_Children[1406];
    real_T cb_RTree_Children[1402];
    real_T db_RTree_Children[1398];
    real_T eb_RTree_Children[1394];
    real_T fb_RTree_Children[1390];
    real_T gb_RTree_Children[1382];
    real_T hb_RTree_Children[1378];
    real_T ib_RTree_Children[1374];
    real_T jb_RTree_Children[1370];
    real_T kb_RTree_Children[1366];
    real_T lb_RTree_Children[1358];
    real_T mb_RTree_Children[1350];
    real_T nb_RTree_Children[1330];
    real_T RTree_CutVar[763];
    real_T RTree_CutPoint[763];
    real_T RTree_NodeMean[763];
    real_T b_RTree_CutVar[757];
    real_T b_RTree_CutPoint[757];
    real_T b_RTree_NodeMean[757];
    real_T c_RTree_CutVar[755];
    real_T c_RTree_CutPoint[755];
    real_T c_RTree_NodeMean[755];
    real_T d_RTree_CutVar[753];
    real_T d_RTree_CutPoint[753];
    real_T d_RTree_NodeMean[753];
    real_T e_RTree_CutVar[751];
    real_T e_RTree_CutPoint[751];
    real_T e_RTree_NodeMean[751];
    real_T f_RTree_CutVar[749];
    real_T f_RTree_CutPoint[749];
    real_T f_RTree_NodeMean[749];
    real_T g_RTree_CutVar[747];
    real_T g_RTree_CutPoint[747];
    real_T g_RTree_NodeMean[747];
    real_T h_RTree_CutVar[743];
    real_T h_RTree_CutPoint[743];
    real_T h_RTree_NodeMean[743];
    real_T i_RTree_CutVar[741];
    real_T i_RTree_CutPoint[741];
    real_T i_RTree_NodeMean[741];
    real_T j_RTree_CutVar[737];
    real_T j_RTree_CutPoint[737];
    real_T j_RTree_NodeMean[737];
    real_T k_RTree_CutVar[735];
    real_T k_RTree_CutPoint[735];
    real_T k_RTree_NodeMean[735];
    real_T l_RTree_CutVar[733];
    real_T l_RTree_CutPoint[733];
    real_T l_RTree_NodeMean[733];
    real_T m_RTree_CutVar[731];
    real_T m_RTree_CutPoint[731];
    real_T m_RTree_NodeMean[731];
    real_T n_RTree_CutVar[729];
    real_T n_RTree_CutPoint[729];
    real_T n_RTree_NodeMean[729];
    real_T o_RTree_CutVar[727];
    real_T o_RTree_CutPoint[727];
    real_T o_RTree_NodeMean[727];
    real_T p_RTree_CutVar[725];
    real_T p_RTree_CutPoint[725];
    real_T p_RTree_NodeMean[725];
    real_T q_RTree_CutVar[723];
    real_T q_RTree_CutPoint[723];
    real_T q_RTree_NodeMean[723];
    real_T r_RTree_CutVar[721];
    real_T r_RTree_CutPoint[721];
    real_T r_RTree_NodeMean[721];
    real_T s_RTree_CutVar[719];
    real_T s_RTree_CutPoint[719];
    real_T s_RTree_NodeMean[719];
    real_T t_RTree_CutVar[717];
    real_T t_RTree_CutPoint[717];
    real_T t_RTree_NodeMean[717];
    real_T u_RTree_CutVar[715];
    real_T u_RTree_CutPoint[715];
    real_T u_RTree_NodeMean[715];
    real_T v_RTree_CutVar[713];
    real_T v_RTree_CutPoint[713];
    real_T v_RTree_NodeMean[713];
    real_T w_RTree_CutVar[711];
    real_T w_RTree_CutPoint[711];
    real_T w_RTree_NodeMean[711];
    real_T x_RTree_CutVar[709];
    real_T x_RTree_CutPoint[709];
    real_T x_RTree_NodeMean[709];
    real_T y_RTree_CutVar[707];
    real_T y_RTree_CutPoint[707];
    real_T y_RTree_NodeMean[707];
    real_T ab_RTree_CutVar[705];
    real_T ab_RTree_CutPoint[705];
    real_T ab_RTree_NodeMean[705];
    real_T bb_RTree_CutVar[703];
    real_T bb_RTree_CutPoint[703];
    real_T bb_RTree_NodeMean[703];
  } f0;
} predictRF_Y2StackData;

#endif                                 /*typedef_predictRF_Y2StackData*/
#endif

/* End of code generation (predictRF_Y2_types.h) */
