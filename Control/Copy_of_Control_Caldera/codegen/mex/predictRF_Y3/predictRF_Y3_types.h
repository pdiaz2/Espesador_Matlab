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
    real_T RTree_Children[2826];
    real_T b_RTree_Children[2802];
    real_T c_RTree_Children[2774];
    real_T d_RTree_Children[2762];
    real_T e_RTree_Children[2754];
    real_T f_RTree_Children[2718];
    real_T g_RTree_Children[2706];
    real_T h_RTree_Children[2702];
    real_T i_RTree_Children[2686];
    real_T j_RTree_Children[2674];
    real_T k_RTree_Children[2670];
    real_T l_RTree_Children[2654];
    real_T m_RTree_Children[2646];
    real_T n_RTree_Children[2642];
    real_T o_RTree_Children[2638];
    real_T p_RTree_Children[2634];
    real_T q_RTree_Children[2630];
    real_T r_RTree_Children[2622];
    real_T s_RTree_Children[2614];
    real_T t_RTree_Children[2610];
    real_T u_RTree_Children[2606];
    real_T v_RTree_Children[2602];
    real_T w_RTree_Children[2598];
    real_T x_RTree_Children[2594];
    real_T y_RTree_Children[2590];
    real_T ab_RTree_Children[2586];
    real_T bb_RTree_Children[2582];
    real_T cb_RTree_Children[2578];
    real_T db_RTree_Children[2574];
    real_T eb_RTree_Children[2566];
    real_T fb_RTree_Children[2562];
    real_T gb_RTree_Children[2558];
    real_T hb_RTree_Children[2550];
    real_T ib_RTree_Children[2546];
    real_T jb_RTree_Children[2542];
    real_T kb_RTree_Children[2538];
    real_T lb_RTree_Children[2534];
    real_T mb_RTree_Children[2530];
    real_T nb_RTree_Children[2526];
    real_T ob_RTree_Children[2522];
    real_T pb_RTree_Children[2518];
    real_T qb_RTree_Children[2510];
    real_T rb_RTree_Children[2498];
    real_T sb_RTree_Children[2494];
    real_T tb_RTree_Children[2490];
    real_T ub_RTree_Children[2486];
    real_T vb_RTree_Children[2482];
    real_T wb_RTree_Children[2478];
    real_T xb_RTree_Children[2474];
    real_T yb_RTree_Children[2470];
    real_T ac_RTree_Children[2466];
    real_T bc_RTree_Children[2458];
    real_T cc_RTree_Children[2454];
    real_T dc_RTree_Children[2450];
    real_T ec_RTree_Children[2446];
    real_T fc_RTree_Children[2438];
    real_T gc_RTree_Children[2422];
    real_T hc_RTree_Children[2406];
    real_T ic_RTree_Children[2402];
    real_T jc_RTree_Children[2386];
    real_T RTree_CutVar[1413];
    real_T RTree_CutPoint[1413];
    real_T RTree_NodeMean[1413];
    real_T b_RTree_CutVar[1401];
    real_T b_RTree_CutPoint[1401];
    real_T b_RTree_NodeMean[1401];
    real_T c_RTree_CutVar[1387];
    real_T c_RTree_CutPoint[1387];
    real_T c_RTree_NodeMean[1387];
    real_T d_RTree_CutVar[1381];
    real_T d_RTree_CutPoint[1381];
    real_T d_RTree_NodeMean[1381];
    real_T e_RTree_CutVar[1377];
    real_T e_RTree_CutPoint[1377];
    real_T e_RTree_NodeMean[1377];
    real_T f_RTree_CutVar[1359];
    real_T f_RTree_CutPoint[1359];
    real_T f_RTree_NodeMean[1359];
    real_T g_RTree_CutVar[1353];
    real_T g_RTree_CutPoint[1353];
    real_T g_RTree_NodeMean[1353];
    real_T h_RTree_CutVar[1351];
    real_T h_RTree_CutPoint[1351];
    real_T h_RTree_NodeMean[1351];
    real_T i_RTree_CutVar[1343];
    real_T i_RTree_CutPoint[1343];
    real_T i_RTree_NodeMean[1343];
    real_T j_RTree_CutVar[1337];
    real_T j_RTree_CutPoint[1337];
    real_T j_RTree_NodeMean[1337];
    real_T k_RTree_CutVar[1335];
    real_T k_RTree_CutPoint[1335];
    real_T k_RTree_NodeMean[1335];
    real_T l_RTree_CutVar[1327];
    real_T l_RTree_CutPoint[1327];
    real_T l_RTree_NodeMean[1327];
    real_T m_RTree_CutVar[1323];
    real_T m_RTree_CutPoint[1323];
    real_T m_RTree_NodeMean[1323];
    real_T n_RTree_CutVar[1321];
    real_T n_RTree_CutPoint[1321];
    real_T n_RTree_NodeMean[1321];
    real_T o_RTree_CutVar[1319];
    real_T o_RTree_CutPoint[1319];
    real_T o_RTree_NodeMean[1319];
    real_T p_RTree_CutVar[1317];
    real_T p_RTree_CutPoint[1317];
    real_T p_RTree_NodeMean[1317];
    real_T q_RTree_CutVar[1315];
    real_T q_RTree_CutPoint[1315];
    real_T q_RTree_NodeMean[1315];
    real_T r_RTree_CutVar[1311];
    real_T r_RTree_CutPoint[1311];
    real_T r_RTree_NodeMean[1311];
    real_T s_RTree_CutVar[1307];
    real_T s_RTree_CutPoint[1307];
    real_T s_RTree_NodeMean[1307];
    real_T t_RTree_CutVar[1305];
    real_T t_RTree_CutPoint[1305];
    real_T t_RTree_NodeMean[1305];
    real_T u_RTree_CutVar[1303];
    real_T u_RTree_CutPoint[1303];
    real_T u_RTree_NodeMean[1303];
    real_T v_RTree_CutVar[1301];
    real_T v_RTree_CutPoint[1301];
    real_T v_RTree_NodeMean[1301];
    real_T w_RTree_CutVar[1299];
    real_T w_RTree_CutPoint[1299];
    real_T w_RTree_NodeMean[1299];
    real_T x_RTree_CutVar[1297];
    real_T x_RTree_CutPoint[1297];
    real_T x_RTree_NodeMean[1297];
    real_T y_RTree_CutVar[1295];
    real_T y_RTree_CutPoint[1295];
    real_T y_RTree_NodeMean[1295];
    real_T ab_RTree_CutVar[1293];
    real_T ab_RTree_CutPoint[1293];
    real_T ab_RTree_NodeMean[1293];
    real_T bb_RTree_CutVar[1291];
    real_T bb_RTree_CutPoint[1291];
    real_T bb_RTree_NodeMean[1291];
    real_T cb_RTree_CutVar[1289];
    real_T cb_RTree_CutPoint[1289];
    real_T cb_RTree_NodeMean[1289];
    real_T db_RTree_CutVar[1287];
    real_T db_RTree_CutPoint[1287];
    real_T db_RTree_NodeMean[1287];
    real_T eb_RTree_CutVar[1283];
    real_T eb_RTree_CutPoint[1283];
    real_T eb_RTree_NodeMean[1283];
    real_T fb_RTree_CutVar[1281];
    real_T fb_RTree_CutPoint[1281];
    real_T fb_RTree_NodeMean[1281];
    real_T gb_RTree_CutVar[1279];
    real_T gb_RTree_CutPoint[1279];
    real_T gb_RTree_NodeMean[1279];
    real_T hb_RTree_CutVar[1275];
    real_T hb_RTree_CutPoint[1275];
    real_T hb_RTree_NodeMean[1275];
    real_T ib_RTree_CutVar[1273];
    real_T ib_RTree_CutPoint[1273];
    real_T ib_RTree_NodeMean[1273];
    real_T jb_RTree_CutVar[1271];
    real_T jb_RTree_CutPoint[1271];
    real_T jb_RTree_NodeMean[1271];
    real_T kb_RTree_CutVar[1269];
    real_T kb_RTree_CutPoint[1269];
    real_T kb_RTree_NodeMean[1269];
    real_T lb_RTree_CutVar[1267];
    real_T lb_RTree_CutPoint[1267];
    real_T lb_RTree_NodeMean[1267];
    real_T mb_RTree_CutVar[1265];
    real_T mb_RTree_CutPoint[1265];
    real_T mb_RTree_NodeMean[1265];
    real_T nb_RTree_CutVar[1263];
    real_T nb_RTree_CutPoint[1263];
    real_T nb_RTree_NodeMean[1263];
    real_T ob_RTree_CutVar[1261];
    real_T ob_RTree_CutPoint[1261];
    real_T ob_RTree_NodeMean[1261];
    real_T pb_RTree_CutVar[1259];
    real_T pb_RTree_CutPoint[1259];
    real_T pb_RTree_NodeMean[1259];
    real_T qb_RTree_CutVar[1255];
    real_T qb_RTree_CutPoint[1255];
    real_T qb_RTree_NodeMean[1255];
    real_T rb_RTree_CutVar[1249];
    real_T rb_RTree_CutPoint[1249];
    real_T rb_RTree_NodeMean[1249];
    real_T sb_RTree_CutVar[1247];
    real_T sb_RTree_CutPoint[1247];
    real_T sb_RTree_NodeMean[1247];
    real_T tb_RTree_CutVar[1245];
    real_T tb_RTree_CutPoint[1245];
    real_T tb_RTree_NodeMean[1245];
    real_T ub_RTree_CutVar[1243];
    real_T ub_RTree_CutPoint[1243];
    real_T ub_RTree_NodeMean[1243];
    real_T vb_RTree_CutVar[1241];
    real_T vb_RTree_CutPoint[1241];
    real_T vb_RTree_NodeMean[1241];
    real_T wb_RTree_CutVar[1239];
    real_T wb_RTree_CutPoint[1239];
    real_T wb_RTree_NodeMean[1239];
    real_T xb_RTree_CutVar[1237];
    real_T xb_RTree_CutPoint[1237];
    real_T xb_RTree_NodeMean[1237];
    real_T yb_RTree_CutVar[1235];
    real_T yb_RTree_CutPoint[1235];
    real_T yb_RTree_NodeMean[1235];
    real_T ac_RTree_CutVar[1233];
    real_T ac_RTree_CutPoint[1233];
    real_T ac_RTree_NodeMean[1233];
    real_T bc_RTree_CutVar[1229];
    real_T bc_RTree_CutPoint[1229];
    real_T bc_RTree_NodeMean[1229];
    real_T cc_RTree_CutVar[1227];
    real_T cc_RTree_CutPoint[1227];
    real_T cc_RTree_NodeMean[1227];
    real_T dc_RTree_CutVar[1225];
  } f0;
} predictRF_Y3StackData;

#endif                                 /*typedef_predictRF_Y3StackData*/
#endif

/* End of code generation (predictRF_Y3_types.h) */
