/*
 * CompactRegressionTree.c
 *
 * Code generation for function 'CompactRegressionTree'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "predictRF_Y3.h"
#include "CompactRegressionTree.h"
#include "predictRF_Y3_emxutil.h"

/* Variable Definitions */
static emlrtRSInfo k_emlrtRSI = { 146, /* lineNo */
  "CompactRegressionTree",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\CompactRegressionTree.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 189, /* lineNo */
  "CompactRegressionTree",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\CompactRegressionTree.m"/* pathName */
};

static emlrtRTEInfo c_emlrtRTEI = { 101,/* lineNo */
  32,                                  /* colNo */
  "CompactRegressionTree",             /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\CompactRegressionTree.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 101,/* lineNo */
  24,                                  /* colNo */
  "CompactRegressionTree",             /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\CompactRegressionTree.m"/* pName */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  157,                                 /* lineNo */
  17,                                  /* colNo */
  "CompactRegressionTree",             /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\CompactRegressionTree.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { 1,     /* iFirst */
  12,                                  /* iLast */
  38,                                  /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { 1,   /* iFirst */
  12,                                  /* iLast */
  35,                                  /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { 1,   /* iFirst */
  1289,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { 1,   /* iFirst */
  1291,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { 1,   /* iFirst */
  1297,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { 1,   /* iFirst */
  1247,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { 1,   /* iFirst */
  1281,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { 1,   /* iFirst */
  1275,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { 1,   /* iFirst */
  1271,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { 1,   /* iFirst */
  1305,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { 1,   /* iFirst */
  1235,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { 1,   /* iFirst */
  1301,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { 1,   /* iFirst */
  1377,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { 1,   /* iFirst */
  1413,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { 1,   /* iFirst */
  1287,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { 1,   /* iFirst */
  1319,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { 1,   /* iFirst */
  1351,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { 1,   /* iFirst */
  1337,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { 1,   /* iFirst */
  1263,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { 1,   /* iFirst */
  1293,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { 1,   /* iFirst */
  1237,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { 1,   /* iFirst */
  1201,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { 1,   /* iFirst */
  1267,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { 1,  /* iFirst */
  1259,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { 1,  /* iFirst */
  1279,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { 1,  /* iFirst */
  1307,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { 1,  /* iFirst */
  1327,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { 1,  /* iFirst */
  1239,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { 1,  /* iFirst */
  1269,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { 1,  /* iFirst */
  1223,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { 1,  /* iFirst */
  1303,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { 1,  /* iFirst */
  1249,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { 1,  /* iFirst */
  1335,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { 1,  /* iFirst */
  1211,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { 1,  /* iFirst */
  1299,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { 1,  /* iFirst */
  1401,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { 1,  /* iFirst */
  1261,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { 1,  /* iFirst */
  1255,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { 1,  /* iFirst */
  1315,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { 1,  /* iFirst */
  1359,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { 1,  /* iFirst */
  1311,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { 1,  /* iFirst */
  1229,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { 1,  /* iFirst */
  1273,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { 1,  /* iFirst */
  1225,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { 1,  /* iFirst */
  1241,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { 1,  /* iFirst */
  1203,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { 1,  /* iFirst */
  1343,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { 1,  /* iFirst */
  1387,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { 1,  /* iFirst */
  1321,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { 1,  /* iFirst */
  1227,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { 1,  /* iFirst */
  1265,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { 1,  /* iFirst */
  1219,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { 1,  /* iFirst */
  1295,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { 1,  /* iFirst */
  1245,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { 1,  /* iFirst */
  1317,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { 1,  /* iFirst */
  1283,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { 1,  /* iFirst */
  1381,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { 1,  /* iFirst */
  1353,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { 1,  /* iFirst */
  1193,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { 1,  /* iFirst */
  1243,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { 1,  /* iFirst */
  1323,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { 1,  /* iFirst */
  1233,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1289], const real_T obj_Children[2578], const real_T obj_CutPoint
  [1289], const real_T obj_NodeMean[1289], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i1;
  int32_T loop_ub;
  int32_T i2;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r1;
  emxArray_real_T *r2;
  int32_T iv302[1];
  int32_T iv303[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i1 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i1, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i1 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i1, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      node->data[i1] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i1 = X->size[0];
      i2 = loop_ub + 1;
      if (!((i2 >= 1) && (i2 <= i1))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i1 = (int32_T)m;
        if (!((i1 >= 1) && (i1 <= 1289))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, 1289, &d_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i1 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i1 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i1 >= 1) && (i1 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i1 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i1 >= 1) && (i1 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i1 = node->size[0];
      i2 = 1 + loop_ub;
      if (!((i2 >= 1) && (i2 <= i1))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &e_emlrtBCI, &b_st);
      }

      node->data[i2 - 1] = m;
    }

    i1 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i1, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      Yfit->data[i1] = 0.0;
    }

    emxInit_int32_T(sp, &r1, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i1 = r1->size[0];
    r1->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r1, i1, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      r1->data[i1] = i1;
    }

    emxInit_real_T(sp, &r2, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i1 = r2->size[0];
    r2->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r2, i1, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      r2->data[i1] = obj_NodeMean[(int32_T)node->data[i1] - 1];
    }

    i1 = node->size[0];
    iv302[0] = r1->size[0];
    iv303[0] = i1;
    emlrtSubAssignSizeCheckR2012b(iv302, 1, iv303, 1, &b_emlrtECI, sp);
    loop_ub = r2->size[0];
    emxFree_real_T(&node);
    for (i1 = 0; i1 < loop_ub; i1++) {
      Yfit->data[r1->data[i1]] = r2->data[i1];
    }

    emxFree_real_T(&r2);
    emxFree_int32_T(&r1);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void ab_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1239], const real_T obj_Children[2478], const real_T obj_CutPoint
  [1239], const real_T obj_NodeMean[1239], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i51;
  int32_T loop_ub;
  int32_T i52;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r51;
  emxArray_real_T *r52;
  int32_T iv352[1];
  int32_T iv353[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i51 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i51, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i51 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i51, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i51 = 0; i51 < loop_ub; i51++) {
      node->data[i51] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i51 = X->size[0];
      i52 = loop_ub + 1;
      if (!((i52 >= 1) && (i52 <= i51))) {
        emlrtDynamicBoundsCheckR2012b(i52, 1, i51, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i51 = (int32_T)m;
        if (!((i51 >= 1) && (i51 <= 1239))) {
          emlrtDynamicBoundsCheckR2012b(i51, 1, 1239, &eb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i51 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i51 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i51 >= 1) && (i51 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i51, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i51 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i51 >= 1) && (i51 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i51, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i51 = node->size[0];
      i52 = 1 + loop_ub;
      if (!((i52 >= 1) && (i52 <= i51))) {
        emlrtDynamicBoundsCheckR2012b(i52, 1, i51, &e_emlrtBCI, &b_st);
      }

      node->data[i52 - 1] = m;
    }

    i51 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i51, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i51 = 0; i51 < loop_ub; i51++) {
      Yfit->data[i51] = 0.0;
    }

    emxInit_int32_T(sp, &r51, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i51 = r51->size[0];
    r51->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r51, i51, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i51 = 0; i51 < loop_ub; i51++) {
      r51->data[i51] = i51;
    }

    emxInit_real_T(sp, &r52, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i51 = r52->size[0];
    r52->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r52, i51, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i51 = 0; i51 < loop_ub; i51++) {
      r52->data[i51] = obj_NodeMean[(int32_T)node->data[i51] - 1];
    }

    i51 = node->size[0];
    iv352[0] = r51->size[0];
    iv353[0] = i51;
    emlrtSubAssignSizeCheckR2012b(iv352, 1, iv353, 1, &b_emlrtECI, sp);
    loop_ub = r52->size[0];
    emxFree_real_T(&node);
    for (i51 = 0; i51 < loop_ub; i51++) {
      Yfit->data[r51->data[i51]] = r52->data[i51];
    }

    emxFree_real_T(&r52);
    emxFree_int32_T(&r51);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void ac_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1295], const real_T obj_Children[2590], const real_T obj_CutPoint
  [1295], const real_T obj_NodeMean[1295], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i101;
  int32_T loop_ub;
  int32_T i102;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r101;
  emxArray_real_T *r102;
  int32_T iv402[1];
  int32_T iv403[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i101 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i101, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i101 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i101, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i101 = 0; i101 < loop_ub; i101++) {
      node->data[i101] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i101 = X->size[0];
      i102 = loop_ub + 1;
      if (!((i102 >= 1) && (i102 <= i101))) {
        emlrtDynamicBoundsCheckR2012b(i102, 1, i101, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i101 = (int32_T)m;
        if (!((i101 >= 1) && (i101 <= 1295))) {
          emlrtDynamicBoundsCheckR2012b(i101, 1, 1295, &ec_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i101 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i101 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i101 >= 1) && (i101 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i101, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i101 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i101 >= 1) && (i101 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i101, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i101 = node->size[0];
      i102 = 1 + loop_ub;
      if (!((i102 >= 1) && (i102 <= i101))) {
        emlrtDynamicBoundsCheckR2012b(i102, 1, i101, &e_emlrtBCI, &b_st);
      }

      node->data[i102 - 1] = m;
    }

    i101 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i101, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i101 = 0; i101 < loop_ub; i101++) {
      Yfit->data[i101] = 0.0;
    }

    emxInit_int32_T(sp, &r101, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i101 = r101->size[0];
    r101->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r101, i101, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i101 = 0; i101 < loop_ub; i101++) {
      r101->data[i101] = i101;
    }

    emxInit_real_T(sp, &r102, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i101 = r102->size[0];
    r102->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r102, i101, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i101 = 0; i101 < loop_ub; i101++) {
      r102->data[i101] = obj_NodeMean[(int32_T)node->data[i101] - 1];
    }

    i101 = node->size[0];
    iv402[0] = r101->size[0];
    iv403[0] = i101;
    emlrtSubAssignSizeCheckR2012b(iv402, 1, iv403, 1, &b_emlrtECI, sp);
    loop_ub = r102->size[0];
    emxFree_real_T(&node);
    for (i101 = 0; i101 < loop_ub; i101++) {
      Yfit->data[r101->data[i101]] = r102->data[i101];
    }

    emxFree_real_T(&r102);
    emxFree_int32_T(&r101);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void b_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1291], const real_T obj_Children[2582], const real_T obj_CutPoint
  [1291], const real_T obj_NodeMean[1291], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i3;
  int32_T loop_ub;
  int32_T i4;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r3;
  emxArray_real_T *r4;
  int32_T iv304[1];
  int32_T iv305[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i3 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i3, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i3 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i3, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i3 = 0; i3 < loop_ub; i3++) {
      node->data[i3] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i3 = X->size[0];
      i4 = loop_ub + 1;
      if (!((i4 >= 1) && (i4 <= i3))) {
        emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i3 = (int32_T)m;
        if (!((i3 >= 1) && (i3 <= 1291))) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, 1291, &f_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i3 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i3 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i3 >= 1) && (i3 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i3 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i3 >= 1) && (i3 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i3, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i3 = node->size[0];
      i4 = 1 + loop_ub;
      if (!((i4 >= 1) && (i4 <= i3))) {
        emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &e_emlrtBCI, &b_st);
      }

      node->data[i4 - 1] = m;
    }

    i3 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i3, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i3 = 0; i3 < loop_ub; i3++) {
      Yfit->data[i3] = 0.0;
    }

    emxInit_int32_T(sp, &r3, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i3 = r3->size[0];
    r3->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r3, i3, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i3 = 0; i3 < loop_ub; i3++) {
      r3->data[i3] = i3;
    }

    emxInit_real_T(sp, &r4, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i3 = r4->size[0];
    r4->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r4, i3, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i3 = 0; i3 < loop_ub; i3++) {
      r4->data[i3] = obj_NodeMean[(int32_T)node->data[i3] - 1];
    }

    i3 = node->size[0];
    iv304[0] = r3->size[0];
    iv305[0] = i3;
    emlrtSubAssignSizeCheckR2012b(iv304, 1, iv305, 1, &b_emlrtECI, sp);
    loop_ub = r4->size[0];
    emxFree_real_T(&node);
    for (i3 = 0; i3 < loop_ub; i3++) {
      Yfit->data[r3->data[i3]] = r4->data[i3];
    }

    emxFree_real_T(&r4);
    emxFree_int32_T(&r3);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void bb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1269], const real_T obj_Children[2538], const real_T obj_CutPoint
  [1269], const real_T obj_NodeMean[1269], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i53;
  int32_T loop_ub;
  int32_T i54;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r53;
  emxArray_real_T *r54;
  int32_T iv354[1];
  int32_T iv355[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i53 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i53, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i53 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i53, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i53 = 0; i53 < loop_ub; i53++) {
      node->data[i53] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i53 = X->size[0];
      i54 = loop_ub + 1;
      if (!((i54 >= 1) && (i54 <= i53))) {
        emlrtDynamicBoundsCheckR2012b(i54, 1, i53, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i53 = (int32_T)m;
        if (!((i53 >= 1) && (i53 <= 1269))) {
          emlrtDynamicBoundsCheckR2012b(i53, 1, 1269, &fb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i53 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i53 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i53 >= 1) && (i53 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i53, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i53 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i53 >= 1) && (i53 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i53, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i53 = node->size[0];
      i54 = 1 + loop_ub;
      if (!((i54 >= 1) && (i54 <= i53))) {
        emlrtDynamicBoundsCheckR2012b(i54, 1, i53, &e_emlrtBCI, &b_st);
      }

      node->data[i54 - 1] = m;
    }

    i53 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i53, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i53 = 0; i53 < loop_ub; i53++) {
      Yfit->data[i53] = 0.0;
    }

    emxInit_int32_T(sp, &r53, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i53 = r53->size[0];
    r53->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r53, i53, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i53 = 0; i53 < loop_ub; i53++) {
      r53->data[i53] = i53;
    }

    emxInit_real_T(sp, &r54, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i53 = r54->size[0];
    r54->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r54, i53, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i53 = 0; i53 < loop_ub; i53++) {
      r54->data[i53] = obj_NodeMean[(int32_T)node->data[i53] - 1];
    }

    i53 = node->size[0];
    iv354[0] = r53->size[0];
    iv355[0] = i53;
    emlrtSubAssignSizeCheckR2012b(iv354, 1, iv355, 1, &b_emlrtECI, sp);
    loop_ub = r54->size[0];
    emxFree_real_T(&node);
    for (i53 = 0; i53 < loop_ub; i53++) {
      Yfit->data[r53->data[i53]] = r54->data[i53];
    }

    emxFree_real_T(&r54);
    emxFree_int32_T(&r53);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void bc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1245], const real_T obj_Children[2490], const real_T obj_CutPoint
  [1245], const real_T obj_NodeMean[1245], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i103;
  int32_T loop_ub;
  int32_T i104;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r103;
  emxArray_real_T *r104;
  int32_T iv404[1];
  int32_T iv405[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i103 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i103, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i103 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i103, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i103 = 0; i103 < loop_ub; i103++) {
      node->data[i103] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i103 = X->size[0];
      i104 = loop_ub + 1;
      if (!((i104 >= 1) && (i104 <= i103))) {
        emlrtDynamicBoundsCheckR2012b(i104, 1, i103, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i103 = (int32_T)m;
        if (!((i103 >= 1) && (i103 <= 1245))) {
          emlrtDynamicBoundsCheckR2012b(i103, 1, 1245, &fc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i103 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i103 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i103 >= 1) && (i103 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i103, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i103 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i103 >= 1) && (i103 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i103, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i103 = node->size[0];
      i104 = 1 + loop_ub;
      if (!((i104 >= 1) && (i104 <= i103))) {
        emlrtDynamicBoundsCheckR2012b(i104, 1, i103, &e_emlrtBCI, &b_st);
      }

      node->data[i104 - 1] = m;
    }

    i103 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i103, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i103 = 0; i103 < loop_ub; i103++) {
      Yfit->data[i103] = 0.0;
    }

    emxInit_int32_T(sp, &r103, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i103 = r103->size[0];
    r103->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r103, i103, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i103 = 0; i103 < loop_ub; i103++) {
      r103->data[i103] = i103;
    }

    emxInit_real_T(sp, &r104, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i103 = r104->size[0];
    r104->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r104, i103, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i103 = 0; i103 < loop_ub; i103++) {
      r104->data[i103] = obj_NodeMean[(int32_T)node->data[i103] - 1];
    }

    i103 = node->size[0];
    iv404[0] = r103->size[0];
    iv405[0] = i103;
    emlrtSubAssignSizeCheckR2012b(iv404, 1, iv405, 1, &b_emlrtECI, sp);
    loop_ub = r104->size[0];
    emxFree_real_T(&node);
    for (i103 = 0; i103 < loop_ub; i103++) {
      Yfit->data[r103->data[i103]] = r104->data[i103];
    }

    emxFree_real_T(&r104);
    emxFree_int32_T(&r103);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void c_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1297], const real_T obj_Children[2594], const real_T obj_CutPoint
  [1297], const real_T obj_NodeMean[1297], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i5;
  int32_T loop_ub;
  int32_T i6;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r5;
  emxArray_real_T *r6;
  int32_T iv306[1];
  int32_T iv307[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i5 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i5, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i5 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i5, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i5 = 0; i5 < loop_ub; i5++) {
      node->data[i5] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i5 = X->size[0];
      i6 = loop_ub + 1;
      if (!((i6 >= 1) && (i6 <= i5))) {
        emlrtDynamicBoundsCheckR2012b(i6, 1, i5, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i5 = (int32_T)m;
        if (!((i5 >= 1) && (i5 <= 1297))) {
          emlrtDynamicBoundsCheckR2012b(i5, 1, 1297, &g_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i5 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i5 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i5 >= 1) && (i5 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i5 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i5 >= 1) && (i5 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i5, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i5 = node->size[0];
      i6 = 1 + loop_ub;
      if (!((i6 >= 1) && (i6 <= i5))) {
        emlrtDynamicBoundsCheckR2012b(i6, 1, i5, &e_emlrtBCI, &b_st);
      }

      node->data[i6 - 1] = m;
    }

    i5 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i5, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i5 = 0; i5 < loop_ub; i5++) {
      Yfit->data[i5] = 0.0;
    }

    emxInit_int32_T(sp, &r5, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i5 = r5->size[0];
    r5->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r5, i5, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i5 = 0; i5 < loop_ub; i5++) {
      r5->data[i5] = i5;
    }

    emxInit_real_T(sp, &r6, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i5 = r6->size[0];
    r6->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r6, i5, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i5 = 0; i5 < loop_ub; i5++) {
      r6->data[i5] = obj_NodeMean[(int32_T)node->data[i5] - 1];
    }

    i5 = node->size[0];
    iv306[0] = r5->size[0];
    iv307[0] = i5;
    emlrtSubAssignSizeCheckR2012b(iv306, 1, iv307, 1, &b_emlrtECI, sp);
    loop_ub = r6->size[0];
    emxFree_real_T(&node);
    for (i5 = 0; i5 < loop_ub; i5++) {
      Yfit->data[r5->data[i5]] = r6->data[i5];
    }

    emxFree_real_T(&r6);
    emxFree_int32_T(&r5);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void cb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1223], const real_T obj_Children[2446], const real_T obj_CutPoint
  [1223], const real_T obj_NodeMean[1223], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i55;
  int32_T loop_ub;
  int32_T i56;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r55;
  emxArray_real_T *r56;
  int32_T iv356[1];
  int32_T iv357[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i55 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i55, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i55 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i55, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i55 = 0; i55 < loop_ub; i55++) {
      node->data[i55] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i55 = X->size[0];
      i56 = loop_ub + 1;
      if (!((i56 >= 1) && (i56 <= i55))) {
        emlrtDynamicBoundsCheckR2012b(i56, 1, i55, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i55 = (int32_T)m;
        if (!((i55 >= 1) && (i55 <= 1223))) {
          emlrtDynamicBoundsCheckR2012b(i55, 1, 1223, &gb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i55 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i55 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i55 >= 1) && (i55 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i55, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i55 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i55 >= 1) && (i55 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i55, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i55 = node->size[0];
      i56 = 1 + loop_ub;
      if (!((i56 >= 1) && (i56 <= i55))) {
        emlrtDynamicBoundsCheckR2012b(i56, 1, i55, &e_emlrtBCI, &b_st);
      }

      node->data[i56 - 1] = m;
    }

    i55 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i55, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i55 = 0; i55 < loop_ub; i55++) {
      Yfit->data[i55] = 0.0;
    }

    emxInit_int32_T(sp, &r55, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i55 = r55->size[0];
    r55->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r55, i55, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i55 = 0; i55 < loop_ub; i55++) {
      r55->data[i55] = i55;
    }

    emxInit_real_T(sp, &r56, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i55 = r56->size[0];
    r56->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r56, i55, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i55 = 0; i55 < loop_ub; i55++) {
      r56->data[i55] = obj_NodeMean[(int32_T)node->data[i55] - 1];
    }

    i55 = node->size[0];
    iv356[0] = r55->size[0];
    iv357[0] = i55;
    emlrtSubAssignSizeCheckR2012b(iv356, 1, iv357, 1, &b_emlrtECI, sp);
    loop_ub = r56->size[0];
    emxFree_real_T(&node);
    for (i55 = 0; i55 < loop_ub; i55++) {
      Yfit->data[r55->data[i55]] = r56->data[i55];
    }

    emxFree_real_T(&r56);
    emxFree_int32_T(&r55);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void cc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1317], const real_T obj_Children[2634], const real_T obj_CutPoint
  [1317], const real_T obj_NodeMean[1317], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i105;
  int32_T loop_ub;
  int32_T i106;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r105;
  emxArray_real_T *r106;
  int32_T iv406[1];
  int32_T iv407[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i105 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i105, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i105 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i105, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i105 = 0; i105 < loop_ub; i105++) {
      node->data[i105] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i105 = X->size[0];
      i106 = loop_ub + 1;
      if (!((i106 >= 1) && (i106 <= i105))) {
        emlrtDynamicBoundsCheckR2012b(i106, 1, i105, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i105 = (int32_T)m;
        if (!((i105 >= 1) && (i105 <= 1317))) {
          emlrtDynamicBoundsCheckR2012b(i105, 1, 1317, &gc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i105 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i105 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i105 >= 1) && (i105 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i105, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i105 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i105 >= 1) && (i105 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i105, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i105 = node->size[0];
      i106 = 1 + loop_ub;
      if (!((i106 >= 1) && (i106 <= i105))) {
        emlrtDynamicBoundsCheckR2012b(i106, 1, i105, &e_emlrtBCI, &b_st);
      }

      node->data[i106 - 1] = m;
    }

    i105 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i105, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i105 = 0; i105 < loop_ub; i105++) {
      Yfit->data[i105] = 0.0;
    }

    emxInit_int32_T(sp, &r105, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i105 = r105->size[0];
    r105->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r105, i105, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i105 = 0; i105 < loop_ub; i105++) {
      r105->data[i105] = i105;
    }

    emxInit_real_T(sp, &r106, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i105 = r106->size[0];
    r106->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r106, i105, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i105 = 0; i105 < loop_ub; i105++) {
      r106->data[i105] = obj_NodeMean[(int32_T)node->data[i105] - 1];
    }

    i105 = node->size[0];
    iv406[0] = r105->size[0];
    iv407[0] = i105;
    emlrtSubAssignSizeCheckR2012b(iv406, 1, iv407, 1, &b_emlrtECI, sp);
    loop_ub = r106->size[0];
    emxFree_real_T(&node);
    for (i105 = 0; i105 < loop_ub; i105++) {
      Yfit->data[r105->data[i105]] = r106->data[i105];
    }

    emxFree_real_T(&r106);
    emxFree_int32_T(&r105);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void d_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1247], const real_T obj_Children[2494], const real_T obj_CutPoint
  [1247], const real_T obj_NodeMean[1247], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i7;
  int32_T loop_ub;
  int32_T i8;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r7;
  emxArray_real_T *r8;
  int32_T iv308[1];
  int32_T iv309[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i7 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i7, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i7 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i7, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i7 = 0; i7 < loop_ub; i7++) {
      node->data[i7] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i7 = X->size[0];
      i8 = loop_ub + 1;
      if (!((i8 >= 1) && (i8 <= i7))) {
        emlrtDynamicBoundsCheckR2012b(i8, 1, i7, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i7 = (int32_T)m;
        if (!((i7 >= 1) && (i7 <= 1247))) {
          emlrtDynamicBoundsCheckR2012b(i7, 1, 1247, &h_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i7 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i7 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i7 >= 1) && (i7 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i7, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i7 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i7 >= 1) && (i7 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i7, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i7 = node->size[0];
      i8 = 1 + loop_ub;
      if (!((i8 >= 1) && (i8 <= i7))) {
        emlrtDynamicBoundsCheckR2012b(i8, 1, i7, &e_emlrtBCI, &b_st);
      }

      node->data[i8 - 1] = m;
    }

    i7 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i7, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i7 = 0; i7 < loop_ub; i7++) {
      Yfit->data[i7] = 0.0;
    }

    emxInit_int32_T(sp, &r7, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i7 = r7->size[0];
    r7->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r7, i7, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i7 = 0; i7 < loop_ub; i7++) {
      r7->data[i7] = i7;
    }

    emxInit_real_T(sp, &r8, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i7 = r8->size[0];
    r8->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r8, i7, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i7 = 0; i7 < loop_ub; i7++) {
      r8->data[i7] = obj_NodeMean[(int32_T)node->data[i7] - 1];
    }

    i7 = node->size[0];
    iv308[0] = r7->size[0];
    iv309[0] = i7;
    emlrtSubAssignSizeCheckR2012b(iv308, 1, iv309, 1, &b_emlrtECI, sp);
    loop_ub = r8->size[0];
    emxFree_real_T(&node);
    for (i7 = 0; i7 < loop_ub; i7++) {
      Yfit->data[r7->data[i7]] = r8->data[i7];
    }

    emxFree_real_T(&r8);
    emxFree_int32_T(&r7);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void db_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1303], const real_T obj_Children[2606], const real_T obj_CutPoint
  [1303], const real_T obj_NodeMean[1303], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i57;
  int32_T loop_ub;
  int32_T i58;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r57;
  emxArray_real_T *r58;
  int32_T iv358[1];
  int32_T iv359[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i57 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i57, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i57 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i57, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i57 = 0; i57 < loop_ub; i57++) {
      node->data[i57] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i57 = X->size[0];
      i58 = loop_ub + 1;
      if (!((i58 >= 1) && (i58 <= i57))) {
        emlrtDynamicBoundsCheckR2012b(i58, 1, i57, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i57 = (int32_T)m;
        if (!((i57 >= 1) && (i57 <= 1303))) {
          emlrtDynamicBoundsCheckR2012b(i57, 1, 1303, &hb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i57 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i57 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i57 >= 1) && (i57 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i57, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i57 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i57 >= 1) && (i57 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i57, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i57 = node->size[0];
      i58 = 1 + loop_ub;
      if (!((i58 >= 1) && (i58 <= i57))) {
        emlrtDynamicBoundsCheckR2012b(i58, 1, i57, &e_emlrtBCI, &b_st);
      }

      node->data[i58 - 1] = m;
    }

    i57 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i57, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i57 = 0; i57 < loop_ub; i57++) {
      Yfit->data[i57] = 0.0;
    }

    emxInit_int32_T(sp, &r57, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i57 = r57->size[0];
    r57->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r57, i57, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i57 = 0; i57 < loop_ub; i57++) {
      r57->data[i57] = i57;
    }

    emxInit_real_T(sp, &r58, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i57 = r58->size[0];
    r58->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r58, i57, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i57 = 0; i57 < loop_ub; i57++) {
      r58->data[i57] = obj_NodeMean[(int32_T)node->data[i57] - 1];
    }

    i57 = node->size[0];
    iv358[0] = r57->size[0];
    iv359[0] = i57;
    emlrtSubAssignSizeCheckR2012b(iv358, 1, iv359, 1, &b_emlrtECI, sp);
    loop_ub = r58->size[0];
    emxFree_real_T(&node);
    for (i57 = 0; i57 < loop_ub; i57++) {
      Yfit->data[r57->data[i57]] = r58->data[i57];
    }

    emxFree_real_T(&r58);
    emxFree_int32_T(&r57);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void dc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1283], const real_T obj_Children[2566], const real_T obj_CutPoint
  [1283], const real_T obj_NodeMean[1283], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i107;
  int32_T loop_ub;
  int32_T i108;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r107;
  emxArray_real_T *r108;
  int32_T iv408[1];
  int32_T iv409[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i107 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i107, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i107 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i107, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i107 = 0; i107 < loop_ub; i107++) {
      node->data[i107] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i107 = X->size[0];
      i108 = loop_ub + 1;
      if (!((i108 >= 1) && (i108 <= i107))) {
        emlrtDynamicBoundsCheckR2012b(i108, 1, i107, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i107 = (int32_T)m;
        if (!((i107 >= 1) && (i107 <= 1283))) {
          emlrtDynamicBoundsCheckR2012b(i107, 1, 1283, &hc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i107 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i107 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i107 >= 1) && (i107 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i107, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i107 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i107 >= 1) && (i107 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i107, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i107 = node->size[0];
      i108 = 1 + loop_ub;
      if (!((i108 >= 1) && (i108 <= i107))) {
        emlrtDynamicBoundsCheckR2012b(i108, 1, i107, &e_emlrtBCI, &b_st);
      }

      node->data[i108 - 1] = m;
    }

    i107 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i107, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i107 = 0; i107 < loop_ub; i107++) {
      Yfit->data[i107] = 0.0;
    }

    emxInit_int32_T(sp, &r107, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i107 = r107->size[0];
    r107->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r107, i107, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i107 = 0; i107 < loop_ub; i107++) {
      r107->data[i107] = i107;
    }

    emxInit_real_T(sp, &r108, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i107 = r108->size[0];
    r108->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r108, i107, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i107 = 0; i107 < loop_ub; i107++) {
      r108->data[i107] = obj_NodeMean[(int32_T)node->data[i107] - 1];
    }

    i107 = node->size[0];
    iv408[0] = r107->size[0];
    iv409[0] = i107;
    emlrtSubAssignSizeCheckR2012b(iv408, 1, iv409, 1, &b_emlrtECI, sp);
    loop_ub = r108->size[0];
    emxFree_real_T(&node);
    for (i107 = 0; i107 < loop_ub; i107++) {
      Yfit->data[r107->data[i107]] = r108->data[i107];
    }

    emxFree_real_T(&r108);
    emxFree_int32_T(&r107);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void e_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1281], const real_T obj_Children[2562], const real_T obj_CutPoint
  [1281], const real_T obj_NodeMean[1281], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i9;
  int32_T loop_ub;
  int32_T i10;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r9;
  emxArray_real_T *r10;
  int32_T iv310[1];
  int32_T iv311[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i9 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i9, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i9 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i9, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i9 = 0; i9 < loop_ub; i9++) {
      node->data[i9] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i9 = X->size[0];
      i10 = loop_ub + 1;
      if (!((i10 >= 1) && (i10 <= i9))) {
        emlrtDynamicBoundsCheckR2012b(i10, 1, i9, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i9 = (int32_T)m;
        if (!((i9 >= 1) && (i9 <= 1281))) {
          emlrtDynamicBoundsCheckR2012b(i9, 1, 1281, &i_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i9 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i9 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i9 >= 1) && (i9 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i9, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i9 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i9 >= 1) && (i9 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i9, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i9 = node->size[0];
      i10 = 1 + loop_ub;
      if (!((i10 >= 1) && (i10 <= i9))) {
        emlrtDynamicBoundsCheckR2012b(i10, 1, i9, &e_emlrtBCI, &b_st);
      }

      node->data[i10 - 1] = m;
    }

    i9 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i9, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i9 = 0; i9 < loop_ub; i9++) {
      Yfit->data[i9] = 0.0;
    }

    emxInit_int32_T(sp, &r9, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i9 = r9->size[0];
    r9->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r9, i9, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i9 = 0; i9 < loop_ub; i9++) {
      r9->data[i9] = i9;
    }

    emxInit_real_T(sp, &r10, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i9 = r10->size[0];
    r10->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r10, i9, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i9 = 0; i9 < loop_ub; i9++) {
      r10->data[i9] = obj_NodeMean[(int32_T)node->data[i9] - 1];
    }

    i9 = node->size[0];
    iv310[0] = r9->size[0];
    iv311[0] = i9;
    emlrtSubAssignSizeCheckR2012b(iv310, 1, iv311, 1, &b_emlrtECI, sp);
    loop_ub = r10->size[0];
    emxFree_real_T(&node);
    for (i9 = 0; i9 < loop_ub; i9++) {
      Yfit->data[r9->data[i9]] = r10->data[i9];
    }

    emxFree_real_T(&r10);
    emxFree_int32_T(&r9);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void eb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1249], const real_T obj_Children[2498], const real_T obj_CutPoint
  [1249], const real_T obj_NodeMean[1249], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i59;
  int32_T loop_ub;
  int32_T i60;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r59;
  emxArray_real_T *r60;
  int32_T iv360[1];
  int32_T iv361[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i59 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i59, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i59 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i59, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i59 = 0; i59 < loop_ub; i59++) {
      node->data[i59] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i59 = X->size[0];
      i60 = loop_ub + 1;
      if (!((i60 >= 1) && (i60 <= i59))) {
        emlrtDynamicBoundsCheckR2012b(i60, 1, i59, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i59 = (int32_T)m;
        if (!((i59 >= 1) && (i59 <= 1249))) {
          emlrtDynamicBoundsCheckR2012b(i59, 1, 1249, &ib_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i59 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i59 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i59 >= 1) && (i59 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i59, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i59 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i59 >= 1) && (i59 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i59, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i59 = node->size[0];
      i60 = 1 + loop_ub;
      if (!((i60 >= 1) && (i60 <= i59))) {
        emlrtDynamicBoundsCheckR2012b(i60, 1, i59, &e_emlrtBCI, &b_st);
      }

      node->data[i60 - 1] = m;
    }

    i59 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i59, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i59 = 0; i59 < loop_ub; i59++) {
      Yfit->data[i59] = 0.0;
    }

    emxInit_int32_T(sp, &r59, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i59 = r59->size[0];
    r59->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r59, i59, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i59 = 0; i59 < loop_ub; i59++) {
      r59->data[i59] = i59;
    }

    emxInit_real_T(sp, &r60, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i59 = r60->size[0];
    r60->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r60, i59, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i59 = 0; i59 < loop_ub; i59++) {
      r60->data[i59] = obj_NodeMean[(int32_T)node->data[i59] - 1];
    }

    i59 = node->size[0];
    iv360[0] = r59->size[0];
    iv361[0] = i59;
    emlrtSubAssignSizeCheckR2012b(iv360, 1, iv361, 1, &b_emlrtECI, sp);
    loop_ub = r60->size[0];
    emxFree_real_T(&node);
    for (i59 = 0; i59 < loop_ub; i59++) {
      Yfit->data[r59->data[i59]] = r60->data[i59];
    }

    emxFree_real_T(&r60);
    emxFree_int32_T(&r59);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void ec_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1381], const real_T obj_Children[2762], const real_T obj_CutPoint
  [1381], const real_T obj_NodeMean[1381], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i109;
  int32_T loop_ub;
  int32_T i110;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r109;
  emxArray_real_T *r110;
  int32_T iv410[1];
  int32_T iv411[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i109 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i109, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i109 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i109, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i109 = 0; i109 < loop_ub; i109++) {
      node->data[i109] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i109 = X->size[0];
      i110 = loop_ub + 1;
      if (!((i110 >= 1) && (i110 <= i109))) {
        emlrtDynamicBoundsCheckR2012b(i110, 1, i109, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i109 = (int32_T)m;
        if (!((i109 >= 1) && (i109 <= 1381))) {
          emlrtDynamicBoundsCheckR2012b(i109, 1, 1381, &ic_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i109 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i109 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i109 >= 1) && (i109 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i109, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i109 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i109 >= 1) && (i109 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i109, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i109 = node->size[0];
      i110 = 1 + loop_ub;
      if (!((i110 >= 1) && (i110 <= i109))) {
        emlrtDynamicBoundsCheckR2012b(i110, 1, i109, &e_emlrtBCI, &b_st);
      }

      node->data[i110 - 1] = m;
    }

    i109 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i109, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i109 = 0; i109 < loop_ub; i109++) {
      Yfit->data[i109] = 0.0;
    }

    emxInit_int32_T(sp, &r109, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i109 = r109->size[0];
    r109->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r109, i109, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i109 = 0; i109 < loop_ub; i109++) {
      r109->data[i109] = i109;
    }

    emxInit_real_T(sp, &r110, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i109 = r110->size[0];
    r110->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r110, i109, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i109 = 0; i109 < loop_ub; i109++) {
      r110->data[i109] = obj_NodeMean[(int32_T)node->data[i109] - 1];
    }

    i109 = node->size[0];
    iv410[0] = r109->size[0];
    iv411[0] = i109;
    emlrtSubAssignSizeCheckR2012b(iv410, 1, iv411, 1, &b_emlrtECI, sp);
    loop_ub = r110->size[0];
    emxFree_real_T(&node);
    for (i109 = 0; i109 < loop_ub; i109++) {
      Yfit->data[r109->data[i109]] = r110->data[i109];
    }

    emxFree_real_T(&r110);
    emxFree_int32_T(&r109);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void f_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1275], const real_T obj_Children[2550], const real_T obj_CutPoint
  [1275], const real_T obj_NodeMean[1275], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i11;
  int32_T loop_ub;
  int32_T i12;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r11;
  emxArray_real_T *r12;
  int32_T iv312[1];
  int32_T iv313[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i11 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i11, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i11 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i11, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i11 = 0; i11 < loop_ub; i11++) {
      node->data[i11] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i11 = X->size[0];
      i12 = loop_ub + 1;
      if (!((i12 >= 1) && (i12 <= i11))) {
        emlrtDynamicBoundsCheckR2012b(i12, 1, i11, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i11 = (int32_T)m;
        if (!((i11 >= 1) && (i11 <= 1275))) {
          emlrtDynamicBoundsCheckR2012b(i11, 1, 1275, &j_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i11 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i11 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i11 >= 1) && (i11 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i11, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i11 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i11 >= 1) && (i11 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i11, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i11 = node->size[0];
      i12 = 1 + loop_ub;
      if (!((i12 >= 1) && (i12 <= i11))) {
        emlrtDynamicBoundsCheckR2012b(i12, 1, i11, &e_emlrtBCI, &b_st);
      }

      node->data[i12 - 1] = m;
    }

    i11 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i11, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i11 = 0; i11 < loop_ub; i11++) {
      Yfit->data[i11] = 0.0;
    }

    emxInit_int32_T(sp, &r11, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i11 = r11->size[0];
    r11->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r11, i11, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i11 = 0; i11 < loop_ub; i11++) {
      r11->data[i11] = i11;
    }

    emxInit_real_T(sp, &r12, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i11 = r12->size[0];
    r12->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r12, i11, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i11 = 0; i11 < loop_ub; i11++) {
      r12->data[i11] = obj_NodeMean[(int32_T)node->data[i11] - 1];
    }

    i11 = node->size[0];
    iv312[0] = r11->size[0];
    iv313[0] = i11;
    emlrtSubAssignSizeCheckR2012b(iv312, 1, iv313, 1, &b_emlrtECI, sp);
    loop_ub = r12->size[0];
    emxFree_real_T(&node);
    for (i11 = 0; i11 < loop_ub; i11++) {
      Yfit->data[r11->data[i11]] = r12->data[i11];
    }

    emxFree_real_T(&r12);
    emxFree_int32_T(&r11);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void fb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1335], const real_T obj_Children[2670], const real_T obj_CutPoint
  [1335], const real_T obj_NodeMean[1335], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i61;
  int32_T loop_ub;
  int32_T i62;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r61;
  emxArray_real_T *r62;
  int32_T iv362[1];
  int32_T iv363[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i61 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i61, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i61 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i61, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i61 = 0; i61 < loop_ub; i61++) {
      node->data[i61] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i61 = X->size[0];
      i62 = loop_ub + 1;
      if (!((i62 >= 1) && (i62 <= i61))) {
        emlrtDynamicBoundsCheckR2012b(i62, 1, i61, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i61 = (int32_T)m;
        if (!((i61 >= 1) && (i61 <= 1335))) {
          emlrtDynamicBoundsCheckR2012b(i61, 1, 1335, &jb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i61 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i61 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i61 >= 1) && (i61 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i61, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i61 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i61 >= 1) && (i61 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i61, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i61 = node->size[0];
      i62 = 1 + loop_ub;
      if (!((i62 >= 1) && (i62 <= i61))) {
        emlrtDynamicBoundsCheckR2012b(i62, 1, i61, &e_emlrtBCI, &b_st);
      }

      node->data[i62 - 1] = m;
    }

    i61 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i61, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i61 = 0; i61 < loop_ub; i61++) {
      Yfit->data[i61] = 0.0;
    }

    emxInit_int32_T(sp, &r61, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i61 = r61->size[0];
    r61->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r61, i61, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i61 = 0; i61 < loop_ub; i61++) {
      r61->data[i61] = i61;
    }

    emxInit_real_T(sp, &r62, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i61 = r62->size[0];
    r62->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r62, i61, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i61 = 0; i61 < loop_ub; i61++) {
      r62->data[i61] = obj_NodeMean[(int32_T)node->data[i61] - 1];
    }

    i61 = node->size[0];
    iv362[0] = r61->size[0];
    iv363[0] = i61;
    emlrtSubAssignSizeCheckR2012b(iv362, 1, iv363, 1, &b_emlrtECI, sp);
    loop_ub = r62->size[0];
    emxFree_real_T(&node);
    for (i61 = 0; i61 < loop_ub; i61++) {
      Yfit->data[r61->data[i61]] = r62->data[i61];
    }

    emxFree_real_T(&r62);
    emxFree_int32_T(&r61);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void fc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1353], const real_T obj_Children[2706], const real_T obj_CutPoint
  [1353], const real_T obj_NodeMean[1353], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i111;
  int32_T loop_ub;
  int32_T i112;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r111;
  emxArray_real_T *r112;
  int32_T iv412[1];
  int32_T iv413[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i111 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i111, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i111 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i111, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i111 = 0; i111 < loop_ub; i111++) {
      node->data[i111] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i111 = X->size[0];
      i112 = loop_ub + 1;
      if (!((i112 >= 1) && (i112 <= i111))) {
        emlrtDynamicBoundsCheckR2012b(i112, 1, i111, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i111 = (int32_T)m;
        if (!((i111 >= 1) && (i111 <= 1353))) {
          emlrtDynamicBoundsCheckR2012b(i111, 1, 1353, &jc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i111 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i111 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i111 >= 1) && (i111 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i111, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i111 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i111 >= 1) && (i111 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i111, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i111 = node->size[0];
      i112 = 1 + loop_ub;
      if (!((i112 >= 1) && (i112 <= i111))) {
        emlrtDynamicBoundsCheckR2012b(i112, 1, i111, &e_emlrtBCI, &b_st);
      }

      node->data[i112 - 1] = m;
    }

    i111 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i111, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i111 = 0; i111 < loop_ub; i111++) {
      Yfit->data[i111] = 0.0;
    }

    emxInit_int32_T(sp, &r111, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i111 = r111->size[0];
    r111->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r111, i111, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i111 = 0; i111 < loop_ub; i111++) {
      r111->data[i111] = i111;
    }

    emxInit_real_T(sp, &r112, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i111 = r112->size[0];
    r112->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r112, i111, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i111 = 0; i111 < loop_ub; i111++) {
      r112->data[i111] = obj_NodeMean[(int32_T)node->data[i111] - 1];
    }

    i111 = node->size[0];
    iv412[0] = r111->size[0];
    iv413[0] = i111;
    emlrtSubAssignSizeCheckR2012b(iv412, 1, iv413, 1, &b_emlrtECI, sp);
    loop_ub = r112->size[0];
    emxFree_real_T(&node);
    for (i111 = 0; i111 < loop_ub; i111++) {
      Yfit->data[r111->data[i111]] = r112->data[i111];
    }

    emxFree_real_T(&r112);
    emxFree_int32_T(&r111);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void g_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1271], const real_T obj_Children[2542], const real_T obj_CutPoint
  [1271], const real_T obj_NodeMean[1271], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i13;
  int32_T loop_ub;
  int32_T i14;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r13;
  emxArray_real_T *r14;
  int32_T iv314[1];
  int32_T iv315[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i13 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i13, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i13 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i13, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i13 = 0; i13 < loop_ub; i13++) {
      node->data[i13] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i13 = X->size[0];
      i14 = loop_ub + 1;
      if (!((i14 >= 1) && (i14 <= i13))) {
        emlrtDynamicBoundsCheckR2012b(i14, 1, i13, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i13 = (int32_T)m;
        if (!((i13 >= 1) && (i13 <= 1271))) {
          emlrtDynamicBoundsCheckR2012b(i13, 1, 1271, &k_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i13 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i13 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i13 >= 1) && (i13 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i13, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i13 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i13 >= 1) && (i13 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i13, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i13 = node->size[0];
      i14 = 1 + loop_ub;
      if (!((i14 >= 1) && (i14 <= i13))) {
        emlrtDynamicBoundsCheckR2012b(i14, 1, i13, &e_emlrtBCI, &b_st);
      }

      node->data[i14 - 1] = m;
    }

    i13 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i13, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i13 = 0; i13 < loop_ub; i13++) {
      Yfit->data[i13] = 0.0;
    }

    emxInit_int32_T(sp, &r13, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i13 = r13->size[0];
    r13->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r13, i13, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i13 = 0; i13 < loop_ub; i13++) {
      r13->data[i13] = i13;
    }

    emxInit_real_T(sp, &r14, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i13 = r14->size[0];
    r14->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r14, i13, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i13 = 0; i13 < loop_ub; i13++) {
      r14->data[i13] = obj_NodeMean[(int32_T)node->data[i13] - 1];
    }

    i13 = node->size[0];
    iv314[0] = r13->size[0];
    iv315[0] = i13;
    emlrtSubAssignSizeCheckR2012b(iv314, 1, iv315, 1, &b_emlrtECI, sp);
    loop_ub = r14->size[0];
    emxFree_real_T(&node);
    for (i13 = 0; i13 < loop_ub; i13++) {
      Yfit->data[r13->data[i13]] = r14->data[i13];
    }

    emxFree_real_T(&r14);
    emxFree_int32_T(&r13);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void gb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1211], const real_T obj_Children[2422], const real_T obj_CutPoint
  [1211], const real_T obj_NodeMean[1211], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i63;
  int32_T loop_ub;
  int32_T i64;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r63;
  emxArray_real_T *r64;
  int32_T iv364[1];
  int32_T iv365[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i63 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i63, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i63 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i63, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i63 = 0; i63 < loop_ub; i63++) {
      node->data[i63] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i63 = X->size[0];
      i64 = loop_ub + 1;
      if (!((i64 >= 1) && (i64 <= i63))) {
        emlrtDynamicBoundsCheckR2012b(i64, 1, i63, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i63 = (int32_T)m;
        if (!((i63 >= 1) && (i63 <= 1211))) {
          emlrtDynamicBoundsCheckR2012b(i63, 1, 1211, &kb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i63 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i63 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i63 >= 1) && (i63 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i63, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i63 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i63 >= 1) && (i63 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i63, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i63 = node->size[0];
      i64 = 1 + loop_ub;
      if (!((i64 >= 1) && (i64 <= i63))) {
        emlrtDynamicBoundsCheckR2012b(i64, 1, i63, &e_emlrtBCI, &b_st);
      }

      node->data[i64 - 1] = m;
    }

    i63 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i63, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i63 = 0; i63 < loop_ub; i63++) {
      Yfit->data[i63] = 0.0;
    }

    emxInit_int32_T(sp, &r63, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i63 = r63->size[0];
    r63->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r63, i63, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i63 = 0; i63 < loop_ub; i63++) {
      r63->data[i63] = i63;
    }

    emxInit_real_T(sp, &r64, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i63 = r64->size[0];
    r64->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r64, i63, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i63 = 0; i63 < loop_ub; i63++) {
      r64->data[i63] = obj_NodeMean[(int32_T)node->data[i63] - 1];
    }

    i63 = node->size[0];
    iv364[0] = r63->size[0];
    iv365[0] = i63;
    emlrtSubAssignSizeCheckR2012b(iv364, 1, iv365, 1, &b_emlrtECI, sp);
    loop_ub = r64->size[0];
    emxFree_real_T(&node);
    for (i63 = 0; i63 < loop_ub; i63++) {
      Yfit->data[r63->data[i63]] = r64->data[i63];
    }

    emxFree_real_T(&r64);
    emxFree_int32_T(&r63);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void gc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1193], const real_T obj_Children[2386], const real_T obj_CutPoint
  [1193], const real_T obj_NodeMean[1193], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i113;
  int32_T loop_ub;
  int32_T i114;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r113;
  emxArray_real_T *r114;
  int32_T iv414[1];
  int32_T iv415[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i113 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i113, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i113 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i113, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i113 = 0; i113 < loop_ub; i113++) {
      node->data[i113] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i113 = X->size[0];
      i114 = loop_ub + 1;
      if (!((i114 >= 1) && (i114 <= i113))) {
        emlrtDynamicBoundsCheckR2012b(i114, 1, i113, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i113 = (int32_T)m;
        if (!((i113 >= 1) && (i113 <= 1193))) {
          emlrtDynamicBoundsCheckR2012b(i113, 1, 1193, &kc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i113 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i113 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i113 >= 1) && (i113 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i113, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i113 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i113 >= 1) && (i113 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i113, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i113 = node->size[0];
      i114 = 1 + loop_ub;
      if (!((i114 >= 1) && (i114 <= i113))) {
        emlrtDynamicBoundsCheckR2012b(i114, 1, i113, &e_emlrtBCI, &b_st);
      }

      node->data[i114 - 1] = m;
    }

    i113 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i113, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i113 = 0; i113 < loop_ub; i113++) {
      Yfit->data[i113] = 0.0;
    }

    emxInit_int32_T(sp, &r113, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i113 = r113->size[0];
    r113->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r113, i113, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i113 = 0; i113 < loop_ub; i113++) {
      r113->data[i113] = i113;
    }

    emxInit_real_T(sp, &r114, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i113 = r114->size[0];
    r114->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r114, i113, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i113 = 0; i113 < loop_ub; i113++) {
      r114->data[i113] = obj_NodeMean[(int32_T)node->data[i113] - 1];
    }

    i113 = node->size[0];
    iv414[0] = r113->size[0];
    iv415[0] = i113;
    emlrtSubAssignSizeCheckR2012b(iv414, 1, iv415, 1, &b_emlrtECI, sp);
    loop_ub = r114->size[0];
    emxFree_real_T(&node);
    for (i113 = 0; i113 < loop_ub; i113++) {
      Yfit->data[r113->data[i113]] = r114->data[i113];
    }

    emxFree_real_T(&r114);
    emxFree_int32_T(&r113);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void h_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1305], const real_T obj_Children[2610], const real_T obj_CutPoint
  [1305], const real_T obj_NodeMean[1305], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i15;
  int32_T loop_ub;
  int32_T i16;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r15;
  emxArray_real_T *r16;
  int32_T iv316[1];
  int32_T iv317[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i15 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i15, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i15 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i15, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i15 = 0; i15 < loop_ub; i15++) {
      node->data[i15] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i15 = X->size[0];
      i16 = loop_ub + 1;
      if (!((i16 >= 1) && (i16 <= i15))) {
        emlrtDynamicBoundsCheckR2012b(i16, 1, i15, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i15 = (int32_T)m;
        if (!((i15 >= 1) && (i15 <= 1305))) {
          emlrtDynamicBoundsCheckR2012b(i15, 1, 1305, &l_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i15 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i15 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i15 >= 1) && (i15 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i15, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i15 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i15 >= 1) && (i15 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i15, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i15 = node->size[0];
      i16 = 1 + loop_ub;
      if (!((i16 >= 1) && (i16 <= i15))) {
        emlrtDynamicBoundsCheckR2012b(i16, 1, i15, &e_emlrtBCI, &b_st);
      }

      node->data[i16 - 1] = m;
    }

    i15 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i15, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i15 = 0; i15 < loop_ub; i15++) {
      Yfit->data[i15] = 0.0;
    }

    emxInit_int32_T(sp, &r15, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i15 = r15->size[0];
    r15->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r15, i15, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i15 = 0; i15 < loop_ub; i15++) {
      r15->data[i15] = i15;
    }

    emxInit_real_T(sp, &r16, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i15 = r16->size[0];
    r16->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r16, i15, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i15 = 0; i15 < loop_ub; i15++) {
      r16->data[i15] = obj_NodeMean[(int32_T)node->data[i15] - 1];
    }

    i15 = node->size[0];
    iv316[0] = r15->size[0];
    iv317[0] = i15;
    emlrtSubAssignSizeCheckR2012b(iv316, 1, iv317, 1, &b_emlrtECI, sp);
    loop_ub = r16->size[0];
    emxFree_real_T(&node);
    for (i15 = 0; i15 < loop_ub; i15++) {
      Yfit->data[r15->data[i15]] = r16->data[i15];
    }

    emxFree_real_T(&r16);
    emxFree_int32_T(&r15);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void hb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1299], const real_T obj_Children[2598], const real_T obj_CutPoint
  [1299], const real_T obj_NodeMean[1299], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i65;
  int32_T loop_ub;
  int32_T i66;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r65;
  emxArray_real_T *r66;
  int32_T iv366[1];
  int32_T iv367[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i65 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i65, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i65 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i65, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i65 = 0; i65 < loop_ub; i65++) {
      node->data[i65] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i65 = X->size[0];
      i66 = loop_ub + 1;
      if (!((i66 >= 1) && (i66 <= i65))) {
        emlrtDynamicBoundsCheckR2012b(i66, 1, i65, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i65 = (int32_T)m;
        if (!((i65 >= 1) && (i65 <= 1299))) {
          emlrtDynamicBoundsCheckR2012b(i65, 1, 1299, &lb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i65 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i65 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i65 >= 1) && (i65 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i65, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i65 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i65 >= 1) && (i65 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i65, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i65 = node->size[0];
      i66 = 1 + loop_ub;
      if (!((i66 >= 1) && (i66 <= i65))) {
        emlrtDynamicBoundsCheckR2012b(i66, 1, i65, &e_emlrtBCI, &b_st);
      }

      node->data[i66 - 1] = m;
    }

    i65 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i65, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i65 = 0; i65 < loop_ub; i65++) {
      Yfit->data[i65] = 0.0;
    }

    emxInit_int32_T(sp, &r65, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i65 = r65->size[0];
    r65->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r65, i65, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i65 = 0; i65 < loop_ub; i65++) {
      r65->data[i65] = i65;
    }

    emxInit_real_T(sp, &r66, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i65 = r66->size[0];
    r66->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r66, i65, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i65 = 0; i65 < loop_ub; i65++) {
      r66->data[i65] = obj_NodeMean[(int32_T)node->data[i65] - 1];
    }

    i65 = node->size[0];
    iv366[0] = r65->size[0];
    iv367[0] = i65;
    emlrtSubAssignSizeCheckR2012b(iv366, 1, iv367, 1, &b_emlrtECI, sp);
    loop_ub = r66->size[0];
    emxFree_real_T(&node);
    for (i65 = 0; i65 < loop_ub; i65++) {
      Yfit->data[r65->data[i65]] = r66->data[i65];
    }

    emxFree_real_T(&r66);
    emxFree_int32_T(&r65);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void hc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1243], const real_T obj_Children[2486], const real_T obj_CutPoint
  [1243], const real_T obj_NodeMean[1243], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i115;
  int32_T loop_ub;
  int32_T i116;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r115;
  emxArray_real_T *r116;
  int32_T iv416[1];
  int32_T iv417[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i115 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i115, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i115 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i115, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i115 = 0; i115 < loop_ub; i115++) {
      node->data[i115] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i115 = X->size[0];
      i116 = loop_ub + 1;
      if (!((i116 >= 1) && (i116 <= i115))) {
        emlrtDynamicBoundsCheckR2012b(i116, 1, i115, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i115 = (int32_T)m;
        if (!((i115 >= 1) && (i115 <= 1243))) {
          emlrtDynamicBoundsCheckR2012b(i115, 1, 1243, &lc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i115 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i115 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i115 >= 1) && (i115 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i115, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i115 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i115 >= 1) && (i115 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i115, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i115 = node->size[0];
      i116 = 1 + loop_ub;
      if (!((i116 >= 1) && (i116 <= i115))) {
        emlrtDynamicBoundsCheckR2012b(i116, 1, i115, &e_emlrtBCI, &b_st);
      }

      node->data[i116 - 1] = m;
    }

    i115 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i115, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i115 = 0; i115 < loop_ub; i115++) {
      Yfit->data[i115] = 0.0;
    }

    emxInit_int32_T(sp, &r115, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i115 = r115->size[0];
    r115->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r115, i115, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i115 = 0; i115 < loop_ub; i115++) {
      r115->data[i115] = i115;
    }

    emxInit_real_T(sp, &r116, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i115 = r116->size[0];
    r116->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r116, i115, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i115 = 0; i115 < loop_ub; i115++) {
      r116->data[i115] = obj_NodeMean[(int32_T)node->data[i115] - 1];
    }

    i115 = node->size[0];
    iv416[0] = r115->size[0];
    iv417[0] = i115;
    emlrtSubAssignSizeCheckR2012b(iv416, 1, iv417, 1, &b_emlrtECI, sp);
    loop_ub = r116->size[0];
    emxFree_real_T(&node);
    for (i115 = 0; i115 < loop_ub; i115++) {
      Yfit->data[r115->data[i115]] = r116->data[i115];
    }

    emxFree_real_T(&r116);
    emxFree_int32_T(&r115);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void i_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1235], const real_T obj_Children[2470], const real_T obj_CutPoint
  [1235], const real_T obj_NodeMean[1235], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i17;
  int32_T loop_ub;
  int32_T i18;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r17;
  emxArray_real_T *r18;
  int32_T iv318[1];
  int32_T iv319[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i17 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i17, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i17 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i17, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i17 = 0; i17 < loop_ub; i17++) {
      node->data[i17] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i17 = X->size[0];
      i18 = loop_ub + 1;
      if (!((i18 >= 1) && (i18 <= i17))) {
        emlrtDynamicBoundsCheckR2012b(i18, 1, i17, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i17 = (int32_T)m;
        if (!((i17 >= 1) && (i17 <= 1235))) {
          emlrtDynamicBoundsCheckR2012b(i17, 1, 1235, &m_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i17 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i17 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i17 >= 1) && (i17 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i17, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i17 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i17 >= 1) && (i17 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i17, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i17 = node->size[0];
      i18 = 1 + loop_ub;
      if (!((i18 >= 1) && (i18 <= i17))) {
        emlrtDynamicBoundsCheckR2012b(i18, 1, i17, &e_emlrtBCI, &b_st);
      }

      node->data[i18 - 1] = m;
    }

    i17 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i17, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i17 = 0; i17 < loop_ub; i17++) {
      Yfit->data[i17] = 0.0;
    }

    emxInit_int32_T(sp, &r17, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i17 = r17->size[0];
    r17->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r17, i17, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i17 = 0; i17 < loop_ub; i17++) {
      r17->data[i17] = i17;
    }

    emxInit_real_T(sp, &r18, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i17 = r18->size[0];
    r18->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r18, i17, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i17 = 0; i17 < loop_ub; i17++) {
      r18->data[i17] = obj_NodeMean[(int32_T)node->data[i17] - 1];
    }

    i17 = node->size[0];
    iv318[0] = r17->size[0];
    iv319[0] = i17;
    emlrtSubAssignSizeCheckR2012b(iv318, 1, iv319, 1, &b_emlrtECI, sp);
    loop_ub = r18->size[0];
    emxFree_real_T(&node);
    for (i17 = 0; i17 < loop_ub; i17++) {
      Yfit->data[r17->data[i17]] = r18->data[i17];
    }

    emxFree_real_T(&r18);
    emxFree_int32_T(&r17);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void ib_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1401], const real_T obj_Children[2802], const real_T obj_CutPoint
  [1401], const real_T obj_NodeMean[1401], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i67;
  int32_T loop_ub;
  int32_T i68;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r67;
  emxArray_real_T *r68;
  int32_T iv368[1];
  int32_T iv369[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i67 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i67, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i67 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i67, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i67 = 0; i67 < loop_ub; i67++) {
      node->data[i67] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i67 = X->size[0];
      i68 = loop_ub + 1;
      if (!((i68 >= 1) && (i68 <= i67))) {
        emlrtDynamicBoundsCheckR2012b(i68, 1, i67, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i67 = (int32_T)m;
        if (!((i67 >= 1) && (i67 <= 1401))) {
          emlrtDynamicBoundsCheckR2012b(i67, 1, 1401, &mb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i67 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i67 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i67 >= 1) && (i67 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i67, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i67 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i67 >= 1) && (i67 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i67, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i67 = node->size[0];
      i68 = 1 + loop_ub;
      if (!((i68 >= 1) && (i68 <= i67))) {
        emlrtDynamicBoundsCheckR2012b(i68, 1, i67, &e_emlrtBCI, &b_st);
      }

      node->data[i68 - 1] = m;
    }

    i67 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i67, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i67 = 0; i67 < loop_ub; i67++) {
      Yfit->data[i67] = 0.0;
    }

    emxInit_int32_T(sp, &r67, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i67 = r67->size[0];
    r67->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r67, i67, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i67 = 0; i67 < loop_ub; i67++) {
      r67->data[i67] = i67;
    }

    emxInit_real_T(sp, &r68, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i67 = r68->size[0];
    r68->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r68, i67, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i67 = 0; i67 < loop_ub; i67++) {
      r68->data[i67] = obj_NodeMean[(int32_T)node->data[i67] - 1];
    }

    i67 = node->size[0];
    iv368[0] = r67->size[0];
    iv369[0] = i67;
    emlrtSubAssignSizeCheckR2012b(iv368, 1, iv369, 1, &b_emlrtECI, sp);
    loop_ub = r68->size[0];
    emxFree_real_T(&node);
    for (i67 = 0; i67 < loop_ub; i67++) {
      Yfit->data[r67->data[i67]] = r68->data[i67];
    }

    emxFree_real_T(&r68);
    emxFree_int32_T(&r67);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void ic_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1323], const real_T obj_Children[2646], const real_T obj_CutPoint
  [1323], const real_T obj_NodeMean[1323], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i117;
  int32_T loop_ub;
  int32_T i118;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r117;
  emxArray_real_T *r118;
  int32_T iv418[1];
  int32_T iv419[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i117 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i117, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i117 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i117, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i117 = 0; i117 < loop_ub; i117++) {
      node->data[i117] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i117 = X->size[0];
      i118 = loop_ub + 1;
      if (!((i118 >= 1) && (i118 <= i117))) {
        emlrtDynamicBoundsCheckR2012b(i118, 1, i117, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i117 = (int32_T)m;
        if (!((i117 >= 1) && (i117 <= 1323))) {
          emlrtDynamicBoundsCheckR2012b(i117, 1, 1323, &mc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i117 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i117 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i117 >= 1) && (i117 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i117, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i117 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i117 >= 1) && (i117 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i117, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i117 = node->size[0];
      i118 = 1 + loop_ub;
      if (!((i118 >= 1) && (i118 <= i117))) {
        emlrtDynamicBoundsCheckR2012b(i118, 1, i117, &e_emlrtBCI, &b_st);
      }

      node->data[i118 - 1] = m;
    }

    i117 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i117, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i117 = 0; i117 < loop_ub; i117++) {
      Yfit->data[i117] = 0.0;
    }

    emxInit_int32_T(sp, &r117, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i117 = r117->size[0];
    r117->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r117, i117, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i117 = 0; i117 < loop_ub; i117++) {
      r117->data[i117] = i117;
    }

    emxInit_real_T(sp, &r118, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i117 = r118->size[0];
    r118->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r118, i117, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i117 = 0; i117 < loop_ub; i117++) {
      r118->data[i117] = obj_NodeMean[(int32_T)node->data[i117] - 1];
    }

    i117 = node->size[0];
    iv418[0] = r117->size[0];
    iv419[0] = i117;
    emlrtSubAssignSizeCheckR2012b(iv418, 1, iv419, 1, &b_emlrtECI, sp);
    loop_ub = r118->size[0];
    emxFree_real_T(&node);
    for (i117 = 0; i117 < loop_ub; i117++) {
      Yfit->data[r117->data[i117]] = r118->data[i117];
    }

    emxFree_real_T(&r118);
    emxFree_int32_T(&r117);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void j_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1301], const real_T obj_Children[2602], const real_T obj_CutPoint
  [1301], const real_T obj_NodeMean[1301], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i19;
  int32_T loop_ub;
  int32_T i20;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r19;
  emxArray_real_T *r20;
  int32_T iv320[1];
  int32_T iv321[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i19 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i19, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i19 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i19, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i19 = 0; i19 < loop_ub; i19++) {
      node->data[i19] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i19 = X->size[0];
      i20 = loop_ub + 1;
      if (!((i20 >= 1) && (i20 <= i19))) {
        emlrtDynamicBoundsCheckR2012b(i20, 1, i19, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i19 = (int32_T)m;
        if (!((i19 >= 1) && (i19 <= 1301))) {
          emlrtDynamicBoundsCheckR2012b(i19, 1, 1301, &n_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i19 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i19 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i19 >= 1) && (i19 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i19, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i19 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i19 >= 1) && (i19 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i19, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i19 = node->size[0];
      i20 = 1 + loop_ub;
      if (!((i20 >= 1) && (i20 <= i19))) {
        emlrtDynamicBoundsCheckR2012b(i20, 1, i19, &e_emlrtBCI, &b_st);
      }

      node->data[i20 - 1] = m;
    }

    i19 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i19, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i19 = 0; i19 < loop_ub; i19++) {
      Yfit->data[i19] = 0.0;
    }

    emxInit_int32_T(sp, &r19, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i19 = r19->size[0];
    r19->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r19, i19, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i19 = 0; i19 < loop_ub; i19++) {
      r19->data[i19] = i19;
    }

    emxInit_real_T(sp, &r20, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i19 = r20->size[0];
    r20->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r20, i19, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i19 = 0; i19 < loop_ub; i19++) {
      r20->data[i19] = obj_NodeMean[(int32_T)node->data[i19] - 1];
    }

    i19 = node->size[0];
    iv320[0] = r19->size[0];
    iv321[0] = i19;
    emlrtSubAssignSizeCheckR2012b(iv320, 1, iv321, 1, &b_emlrtECI, sp);
    loop_ub = r20->size[0];
    emxFree_real_T(&node);
    for (i19 = 0; i19 < loop_ub; i19++) {
      Yfit->data[r19->data[i19]] = r20->data[i19];
    }

    emxFree_real_T(&r20);
    emxFree_int32_T(&r19);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void jb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1261], const real_T obj_Children[2522], const real_T obj_CutPoint
  [1261], const real_T obj_NodeMean[1261], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i69;
  int32_T loop_ub;
  int32_T i70;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r69;
  emxArray_real_T *r70;
  int32_T iv370[1];
  int32_T iv371[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i69 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i69, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i69 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i69, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i69 = 0; i69 < loop_ub; i69++) {
      node->data[i69] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i69 = X->size[0];
      i70 = loop_ub + 1;
      if (!((i70 >= 1) && (i70 <= i69))) {
        emlrtDynamicBoundsCheckR2012b(i70, 1, i69, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i69 = (int32_T)m;
        if (!((i69 >= 1) && (i69 <= 1261))) {
          emlrtDynamicBoundsCheckR2012b(i69, 1, 1261, &nb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i69 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i69 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i69 >= 1) && (i69 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i69, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i69 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i69 >= 1) && (i69 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i69, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i69 = node->size[0];
      i70 = 1 + loop_ub;
      if (!((i70 >= 1) && (i70 <= i69))) {
        emlrtDynamicBoundsCheckR2012b(i70, 1, i69, &e_emlrtBCI, &b_st);
      }

      node->data[i70 - 1] = m;
    }

    i69 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i69, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i69 = 0; i69 < loop_ub; i69++) {
      Yfit->data[i69] = 0.0;
    }

    emxInit_int32_T(sp, &r69, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i69 = r69->size[0];
    r69->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r69, i69, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i69 = 0; i69 < loop_ub; i69++) {
      r69->data[i69] = i69;
    }

    emxInit_real_T(sp, &r70, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i69 = r70->size[0];
    r70->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r70, i69, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i69 = 0; i69 < loop_ub; i69++) {
      r70->data[i69] = obj_NodeMean[(int32_T)node->data[i69] - 1];
    }

    i69 = node->size[0];
    iv370[0] = r69->size[0];
    iv371[0] = i69;
    emlrtSubAssignSizeCheckR2012b(iv370, 1, iv371, 1, &b_emlrtECI, sp);
    loop_ub = r70->size[0];
    emxFree_real_T(&node);
    for (i69 = 0; i69 < loop_ub; i69++) {
      Yfit->data[r69->data[i69]] = r70->data[i69];
    }

    emxFree_real_T(&r70);
    emxFree_int32_T(&r69);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void jc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1233], const real_T obj_Children[2466], const real_T obj_CutPoint
  [1233], const real_T obj_NodeMean[1233], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i119;
  int32_T loop_ub;
  int32_T i120;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r119;
  emxArray_real_T *r120;
  int32_T iv420[1];
  int32_T iv421[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i119 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i119, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i119 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i119, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i119 = 0; i119 < loop_ub; i119++) {
      node->data[i119] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i119 = X->size[0];
      i120 = loop_ub + 1;
      if (!((i120 >= 1) && (i120 <= i119))) {
        emlrtDynamicBoundsCheckR2012b(i120, 1, i119, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i119 = (int32_T)m;
        if (!((i119 >= 1) && (i119 <= 1233))) {
          emlrtDynamicBoundsCheckR2012b(i119, 1, 1233, &nc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i119 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i119 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i119 >= 1) && (i119 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i119, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i119 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i119 >= 1) && (i119 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i119, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i119 = node->size[0];
      i120 = 1 + loop_ub;
      if (!((i120 >= 1) && (i120 <= i119))) {
        emlrtDynamicBoundsCheckR2012b(i120, 1, i119, &e_emlrtBCI, &b_st);
      }

      node->data[i120 - 1] = m;
    }

    i119 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i119, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i119 = 0; i119 < loop_ub; i119++) {
      Yfit->data[i119] = 0.0;
    }

    emxInit_int32_T(sp, &r119, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i119 = r119->size[0];
    r119->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r119, i119, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i119 = 0; i119 < loop_ub; i119++) {
      r119->data[i119] = i119;
    }

    emxInit_real_T(sp, &r120, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i119 = r120->size[0];
    r120->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r120, i119, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i119 = 0; i119 < loop_ub; i119++) {
      r120->data[i119] = obj_NodeMean[(int32_T)node->data[i119] - 1];
    }

    i119 = node->size[0];
    iv420[0] = r119->size[0];
    iv421[0] = i119;
    emlrtSubAssignSizeCheckR2012b(iv420, 1, iv421, 1, &b_emlrtECI, sp);
    loop_ub = r120->size[0];
    emxFree_real_T(&node);
    for (i119 = 0; i119 < loop_ub; i119++) {
      Yfit->data[r119->data[i119]] = r120->data[i119];
    }

    emxFree_real_T(&r120);
    emxFree_int32_T(&r119);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void k_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1377], const real_T obj_Children[2754], const real_T obj_CutPoint
  [1377], const real_T obj_NodeMean[1377], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i21;
  int32_T loop_ub;
  int32_T i22;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r21;
  emxArray_real_T *r22;
  int32_T iv322[1];
  int32_T iv323[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i21 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i21, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i21 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i21, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i21 = 0; i21 < loop_ub; i21++) {
      node->data[i21] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i21 = X->size[0];
      i22 = loop_ub + 1;
      if (!((i22 >= 1) && (i22 <= i21))) {
        emlrtDynamicBoundsCheckR2012b(i22, 1, i21, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i21 = (int32_T)m;
        if (!((i21 >= 1) && (i21 <= 1377))) {
          emlrtDynamicBoundsCheckR2012b(i21, 1, 1377, &o_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i21 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i21 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i21 >= 1) && (i21 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i21, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i21 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i21 >= 1) && (i21 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i21, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i21 = node->size[0];
      i22 = 1 + loop_ub;
      if (!((i22 >= 1) && (i22 <= i21))) {
        emlrtDynamicBoundsCheckR2012b(i22, 1, i21, &e_emlrtBCI, &b_st);
      }

      node->data[i22 - 1] = m;
    }

    i21 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i21, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i21 = 0; i21 < loop_ub; i21++) {
      Yfit->data[i21] = 0.0;
    }

    emxInit_int32_T(sp, &r21, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i21 = r21->size[0];
    r21->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r21, i21, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i21 = 0; i21 < loop_ub; i21++) {
      r21->data[i21] = i21;
    }

    emxInit_real_T(sp, &r22, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i21 = r22->size[0];
    r22->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r22, i21, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i21 = 0; i21 < loop_ub; i21++) {
      r22->data[i21] = obj_NodeMean[(int32_T)node->data[i21] - 1];
    }

    i21 = node->size[0];
    iv322[0] = r21->size[0];
    iv323[0] = i21;
    emlrtSubAssignSizeCheckR2012b(iv322, 1, iv323, 1, &b_emlrtECI, sp);
    loop_ub = r22->size[0];
    emxFree_real_T(&node);
    for (i21 = 0; i21 < loop_ub; i21++) {
      Yfit->data[r21->data[i21]] = r22->data[i21];
    }

    emxFree_real_T(&r22);
    emxFree_int32_T(&r21);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void kb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1255], const real_T obj_Children[2510], const real_T obj_CutPoint
  [1255], const real_T obj_NodeMean[1255], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i71;
  int32_T loop_ub;
  int32_T i72;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r71;
  emxArray_real_T *r72;
  int32_T iv372[1];
  int32_T iv373[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i71 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i71, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i71 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i71, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i71 = 0; i71 < loop_ub; i71++) {
      node->data[i71] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i71 = X->size[0];
      i72 = loop_ub + 1;
      if (!((i72 >= 1) && (i72 <= i71))) {
        emlrtDynamicBoundsCheckR2012b(i72, 1, i71, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i71 = (int32_T)m;
        if (!((i71 >= 1) && (i71 <= 1255))) {
          emlrtDynamicBoundsCheckR2012b(i71, 1, 1255, &ob_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i71 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i71 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i71 >= 1) && (i71 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i71, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i71 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i71 >= 1) && (i71 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i71, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i71 = node->size[0];
      i72 = 1 + loop_ub;
      if (!((i72 >= 1) && (i72 <= i71))) {
        emlrtDynamicBoundsCheckR2012b(i72, 1, i71, &e_emlrtBCI, &b_st);
      }

      node->data[i72 - 1] = m;
    }

    i71 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i71, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i71 = 0; i71 < loop_ub; i71++) {
      Yfit->data[i71] = 0.0;
    }

    emxInit_int32_T(sp, &r71, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i71 = r71->size[0];
    r71->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r71, i71, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i71 = 0; i71 < loop_ub; i71++) {
      r71->data[i71] = i71;
    }

    emxInit_real_T(sp, &r72, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i71 = r72->size[0];
    r72->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r72, i71, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i71 = 0; i71 < loop_ub; i71++) {
      r72->data[i71] = obj_NodeMean[(int32_T)node->data[i71] - 1];
    }

    i71 = node->size[0];
    iv372[0] = r71->size[0];
    iv373[0] = i71;
    emlrtSubAssignSizeCheckR2012b(iv372, 1, iv373, 1, &b_emlrtECI, sp);
    loop_ub = r72->size[0];
    emxFree_real_T(&node);
    for (i71 = 0; i71 < loop_ub; i71++) {
      Yfit->data[r71->data[i71]] = r72->data[i71];
    }

    emxFree_real_T(&r72);
    emxFree_int32_T(&r71);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void l_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1413], const real_T obj_Children[2826], const real_T obj_CutPoint
  [1413], const real_T obj_NodeMean[1413], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i23;
  int32_T loop_ub;
  int32_T i24;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r23;
  emxArray_real_T *r24;
  int32_T iv324[1];
  int32_T iv325[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i23 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i23, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i23 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i23, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i23 = 0; i23 < loop_ub; i23++) {
      node->data[i23] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i23 = X->size[0];
      i24 = loop_ub + 1;
      if (!((i24 >= 1) && (i24 <= i23))) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i23 = (int32_T)m;
        if (!((i23 >= 1) && (i23 <= 1413))) {
          emlrtDynamicBoundsCheckR2012b(i23, 1, 1413, &p_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i23 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i23 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i23 >= 1) && (i23 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i23, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i23 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i23 >= 1) && (i23 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i23, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i23 = node->size[0];
      i24 = 1 + loop_ub;
      if (!((i24 >= 1) && (i24 <= i23))) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &e_emlrtBCI, &b_st);
      }

      node->data[i24 - 1] = m;
    }

    i23 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i23, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i23 = 0; i23 < loop_ub; i23++) {
      Yfit->data[i23] = 0.0;
    }

    emxInit_int32_T(sp, &r23, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i23 = r23->size[0];
    r23->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r23, i23, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i23 = 0; i23 < loop_ub; i23++) {
      r23->data[i23] = i23;
    }

    emxInit_real_T(sp, &r24, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i23 = r24->size[0];
    r24->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r24, i23, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i23 = 0; i23 < loop_ub; i23++) {
      r24->data[i23] = obj_NodeMean[(int32_T)node->data[i23] - 1];
    }

    i23 = node->size[0];
    iv324[0] = r23->size[0];
    iv325[0] = i23;
    emlrtSubAssignSizeCheckR2012b(iv324, 1, iv325, 1, &b_emlrtECI, sp);
    loop_ub = r24->size[0];
    emxFree_real_T(&node);
    for (i23 = 0; i23 < loop_ub; i23++) {
      Yfit->data[r23->data[i23]] = r24->data[i23];
    }

    emxFree_real_T(&r24);
    emxFree_int32_T(&r23);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void lb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1315], const real_T obj_Children[2630], const real_T obj_CutPoint
  [1315], const real_T obj_NodeMean[1315], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i73;
  int32_T loop_ub;
  int32_T i74;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r73;
  emxArray_real_T *r74;
  int32_T iv374[1];
  int32_T iv375[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i73 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i73, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i73 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i73, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i73 = 0; i73 < loop_ub; i73++) {
      node->data[i73] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i73 = X->size[0];
      i74 = loop_ub + 1;
      if (!((i74 >= 1) && (i74 <= i73))) {
        emlrtDynamicBoundsCheckR2012b(i74, 1, i73, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i73 = (int32_T)m;
        if (!((i73 >= 1) && (i73 <= 1315))) {
          emlrtDynamicBoundsCheckR2012b(i73, 1, 1315, &pb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i73 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i73 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i73 >= 1) && (i73 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i73, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i73 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i73 >= 1) && (i73 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i73, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i73 = node->size[0];
      i74 = 1 + loop_ub;
      if (!((i74 >= 1) && (i74 <= i73))) {
        emlrtDynamicBoundsCheckR2012b(i74, 1, i73, &e_emlrtBCI, &b_st);
      }

      node->data[i74 - 1] = m;
    }

    i73 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i73, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i73 = 0; i73 < loop_ub; i73++) {
      Yfit->data[i73] = 0.0;
    }

    emxInit_int32_T(sp, &r73, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i73 = r73->size[0];
    r73->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r73, i73, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i73 = 0; i73 < loop_ub; i73++) {
      r73->data[i73] = i73;
    }

    emxInit_real_T(sp, &r74, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i73 = r74->size[0];
    r74->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r74, i73, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i73 = 0; i73 < loop_ub; i73++) {
      r74->data[i73] = obj_NodeMean[(int32_T)node->data[i73] - 1];
    }

    i73 = node->size[0];
    iv374[0] = r73->size[0];
    iv375[0] = i73;
    emlrtSubAssignSizeCheckR2012b(iv374, 1, iv375, 1, &b_emlrtECI, sp);
    loop_ub = r74->size[0];
    emxFree_real_T(&node);
    for (i73 = 0; i73 < loop_ub; i73++) {
      Yfit->data[r73->data[i73]] = r74->data[i73];
    }

    emxFree_real_T(&r74);
    emxFree_int32_T(&r73);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void m_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1287], const real_T obj_Children[2574], const real_T obj_CutPoint
  [1287], const real_T obj_NodeMean[1287], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i25;
  int32_T loop_ub;
  int32_T i26;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r25;
  emxArray_real_T *r26;
  int32_T iv326[1];
  int32_T iv327[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i25 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i25, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i25 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i25, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i25 = 0; i25 < loop_ub; i25++) {
      node->data[i25] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i25 = X->size[0];
      i26 = loop_ub + 1;
      if (!((i26 >= 1) && (i26 <= i25))) {
        emlrtDynamicBoundsCheckR2012b(i26, 1, i25, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i25 = (int32_T)m;
        if (!((i25 >= 1) && (i25 <= 1287))) {
          emlrtDynamicBoundsCheckR2012b(i25, 1, 1287, &q_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i25 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i25 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i25 >= 1) && (i25 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i25, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i25 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i25 >= 1) && (i25 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i25, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i25 = node->size[0];
      i26 = 1 + loop_ub;
      if (!((i26 >= 1) && (i26 <= i25))) {
        emlrtDynamicBoundsCheckR2012b(i26, 1, i25, &e_emlrtBCI, &b_st);
      }

      node->data[i26 - 1] = m;
    }

    i25 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i25, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i25 = 0; i25 < loop_ub; i25++) {
      Yfit->data[i25] = 0.0;
    }

    emxInit_int32_T(sp, &r25, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i25 = r25->size[0];
    r25->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r25, i25, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i25 = 0; i25 < loop_ub; i25++) {
      r25->data[i25] = i25;
    }

    emxInit_real_T(sp, &r26, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i25 = r26->size[0];
    r26->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r26, i25, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i25 = 0; i25 < loop_ub; i25++) {
      r26->data[i25] = obj_NodeMean[(int32_T)node->data[i25] - 1];
    }

    i25 = node->size[0];
    iv326[0] = r25->size[0];
    iv327[0] = i25;
    emlrtSubAssignSizeCheckR2012b(iv326, 1, iv327, 1, &b_emlrtECI, sp);
    loop_ub = r26->size[0];
    emxFree_real_T(&node);
    for (i25 = 0; i25 < loop_ub; i25++) {
      Yfit->data[r25->data[i25]] = r26->data[i25];
    }

    emxFree_real_T(&r26);
    emxFree_int32_T(&r25);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void mb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1359], const real_T obj_Children[2718], const real_T obj_CutPoint
  [1359], const real_T obj_NodeMean[1359], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i75;
  int32_T loop_ub;
  int32_T i76;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r75;
  emxArray_real_T *r76;
  int32_T iv376[1];
  int32_T iv377[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i75 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i75, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i75 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i75, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i75 = 0; i75 < loop_ub; i75++) {
      node->data[i75] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i75 = X->size[0];
      i76 = loop_ub + 1;
      if (!((i76 >= 1) && (i76 <= i75))) {
        emlrtDynamicBoundsCheckR2012b(i76, 1, i75, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i75 = (int32_T)m;
        if (!((i75 >= 1) && (i75 <= 1359))) {
          emlrtDynamicBoundsCheckR2012b(i75, 1, 1359, &qb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i75 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i75 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i75 >= 1) && (i75 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i75, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i75 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i75 >= 1) && (i75 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i75, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i75 = node->size[0];
      i76 = 1 + loop_ub;
      if (!((i76 >= 1) && (i76 <= i75))) {
        emlrtDynamicBoundsCheckR2012b(i76, 1, i75, &e_emlrtBCI, &b_st);
      }

      node->data[i76 - 1] = m;
    }

    i75 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i75, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i75 = 0; i75 < loop_ub; i75++) {
      Yfit->data[i75] = 0.0;
    }

    emxInit_int32_T(sp, &r75, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i75 = r75->size[0];
    r75->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r75, i75, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i75 = 0; i75 < loop_ub; i75++) {
      r75->data[i75] = i75;
    }

    emxInit_real_T(sp, &r76, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i75 = r76->size[0];
    r76->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r76, i75, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i75 = 0; i75 < loop_ub; i75++) {
      r76->data[i75] = obj_NodeMean[(int32_T)node->data[i75] - 1];
    }

    i75 = node->size[0];
    iv376[0] = r75->size[0];
    iv377[0] = i75;
    emlrtSubAssignSizeCheckR2012b(iv376, 1, iv377, 1, &b_emlrtECI, sp);
    loop_ub = r76->size[0];
    emxFree_real_T(&node);
    for (i75 = 0; i75 < loop_ub; i75++) {
      Yfit->data[r75->data[i75]] = r76->data[i75];
    }

    emxFree_real_T(&r76);
    emxFree_int32_T(&r75);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void n_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1319], const real_T obj_Children[2638], const real_T obj_CutPoint
  [1319], const real_T obj_NodeMean[1319], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i27;
  int32_T loop_ub;
  int32_T i28;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r27;
  emxArray_real_T *r28;
  int32_T iv328[1];
  int32_T iv329[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i27 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i27, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i27 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i27, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i27 = 0; i27 < loop_ub; i27++) {
      node->data[i27] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i27 = X->size[0];
      i28 = loop_ub + 1;
      if (!((i28 >= 1) && (i28 <= i27))) {
        emlrtDynamicBoundsCheckR2012b(i28, 1, i27, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i27 = (int32_T)m;
        if (!((i27 >= 1) && (i27 <= 1319))) {
          emlrtDynamicBoundsCheckR2012b(i27, 1, 1319, &r_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i27 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i27 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i27 >= 1) && (i27 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i27, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i27 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i27 >= 1) && (i27 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i27, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i27 = node->size[0];
      i28 = 1 + loop_ub;
      if (!((i28 >= 1) && (i28 <= i27))) {
        emlrtDynamicBoundsCheckR2012b(i28, 1, i27, &e_emlrtBCI, &b_st);
      }

      node->data[i28 - 1] = m;
    }

    i27 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i27, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i27 = 0; i27 < loop_ub; i27++) {
      Yfit->data[i27] = 0.0;
    }

    emxInit_int32_T(sp, &r27, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i27 = r27->size[0];
    r27->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r27, i27, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i27 = 0; i27 < loop_ub; i27++) {
      r27->data[i27] = i27;
    }

    emxInit_real_T(sp, &r28, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i27 = r28->size[0];
    r28->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r28, i27, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i27 = 0; i27 < loop_ub; i27++) {
      r28->data[i27] = obj_NodeMean[(int32_T)node->data[i27] - 1];
    }

    i27 = node->size[0];
    iv328[0] = r27->size[0];
    iv329[0] = i27;
    emlrtSubAssignSizeCheckR2012b(iv328, 1, iv329, 1, &b_emlrtECI, sp);
    loop_ub = r28->size[0];
    emxFree_real_T(&node);
    for (i27 = 0; i27 < loop_ub; i27++) {
      Yfit->data[r27->data[i27]] = r28->data[i27];
    }

    emxFree_real_T(&r28);
    emxFree_int32_T(&r27);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void nb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1311], const real_T obj_Children[2622], const real_T obj_CutPoint
  [1311], const real_T obj_NodeMean[1311], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i77;
  int32_T loop_ub;
  int32_T i78;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r77;
  emxArray_real_T *r78;
  int32_T iv378[1];
  int32_T iv379[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i77 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i77, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i77 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i77, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i77 = 0; i77 < loop_ub; i77++) {
      node->data[i77] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i77 = X->size[0];
      i78 = loop_ub + 1;
      if (!((i78 >= 1) && (i78 <= i77))) {
        emlrtDynamicBoundsCheckR2012b(i78, 1, i77, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i77 = (int32_T)m;
        if (!((i77 >= 1) && (i77 <= 1311))) {
          emlrtDynamicBoundsCheckR2012b(i77, 1, 1311, &rb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i77 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i77 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i77 >= 1) && (i77 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i77, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i77 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i77 >= 1) && (i77 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i77, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i77 = node->size[0];
      i78 = 1 + loop_ub;
      if (!((i78 >= 1) && (i78 <= i77))) {
        emlrtDynamicBoundsCheckR2012b(i78, 1, i77, &e_emlrtBCI, &b_st);
      }

      node->data[i78 - 1] = m;
    }

    i77 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i77, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i77 = 0; i77 < loop_ub; i77++) {
      Yfit->data[i77] = 0.0;
    }

    emxInit_int32_T(sp, &r77, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i77 = r77->size[0];
    r77->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r77, i77, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i77 = 0; i77 < loop_ub; i77++) {
      r77->data[i77] = i77;
    }

    emxInit_real_T(sp, &r78, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i77 = r78->size[0];
    r78->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r78, i77, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i77 = 0; i77 < loop_ub; i77++) {
      r78->data[i77] = obj_NodeMean[(int32_T)node->data[i77] - 1];
    }

    i77 = node->size[0];
    iv378[0] = r77->size[0];
    iv379[0] = i77;
    emlrtSubAssignSizeCheckR2012b(iv378, 1, iv379, 1, &b_emlrtECI, sp);
    loop_ub = r78->size[0];
    emxFree_real_T(&node);
    for (i77 = 0; i77 < loop_ub; i77++) {
      Yfit->data[r77->data[i77]] = r78->data[i77];
    }

    emxFree_real_T(&r78);
    emxFree_int32_T(&r77);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void o_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1351], const real_T obj_Children[2702], const real_T obj_CutPoint
  [1351], const real_T obj_NodeMean[1351], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i29;
  int32_T loop_ub;
  int32_T i30;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r29;
  emxArray_real_T *r30;
  int32_T iv330[1];
  int32_T iv331[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i29 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i29, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i29 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i29, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i29 = 0; i29 < loop_ub; i29++) {
      node->data[i29] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i29 = X->size[0];
      i30 = loop_ub + 1;
      if (!((i30 >= 1) && (i30 <= i29))) {
        emlrtDynamicBoundsCheckR2012b(i30, 1, i29, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i29 = (int32_T)m;
        if (!((i29 >= 1) && (i29 <= 1351))) {
          emlrtDynamicBoundsCheckR2012b(i29, 1, 1351, &s_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i29 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i29 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i29 >= 1) && (i29 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i29, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i29 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i29 >= 1) && (i29 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i29, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i29 = node->size[0];
      i30 = 1 + loop_ub;
      if (!((i30 >= 1) && (i30 <= i29))) {
        emlrtDynamicBoundsCheckR2012b(i30, 1, i29, &e_emlrtBCI, &b_st);
      }

      node->data[i30 - 1] = m;
    }

    i29 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i29, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i29 = 0; i29 < loop_ub; i29++) {
      Yfit->data[i29] = 0.0;
    }

    emxInit_int32_T(sp, &r29, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i29 = r29->size[0];
    r29->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r29, i29, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i29 = 0; i29 < loop_ub; i29++) {
      r29->data[i29] = i29;
    }

    emxInit_real_T(sp, &r30, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i29 = r30->size[0];
    r30->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r30, i29, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i29 = 0; i29 < loop_ub; i29++) {
      r30->data[i29] = obj_NodeMean[(int32_T)node->data[i29] - 1];
    }

    i29 = node->size[0];
    iv330[0] = r29->size[0];
    iv331[0] = i29;
    emlrtSubAssignSizeCheckR2012b(iv330, 1, iv331, 1, &b_emlrtECI, sp);
    loop_ub = r30->size[0];
    emxFree_real_T(&node);
    for (i29 = 0; i29 < loop_ub; i29++) {
      Yfit->data[r29->data[i29]] = r30->data[i29];
    }

    emxFree_real_T(&r30);
    emxFree_int32_T(&r29);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void ob_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1229], const real_T obj_Children[2458], const real_T obj_CutPoint
  [1229], const real_T obj_NodeMean[1229], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i79;
  int32_T loop_ub;
  int32_T i80;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r79;
  emxArray_real_T *r80;
  int32_T iv380[1];
  int32_T iv381[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i79 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i79, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i79 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i79, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i79 = 0; i79 < loop_ub; i79++) {
      node->data[i79] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i79 = X->size[0];
      i80 = loop_ub + 1;
      if (!((i80 >= 1) && (i80 <= i79))) {
        emlrtDynamicBoundsCheckR2012b(i80, 1, i79, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i79 = (int32_T)m;
        if (!((i79 >= 1) && (i79 <= 1229))) {
          emlrtDynamicBoundsCheckR2012b(i79, 1, 1229, &sb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i79 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i79 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i79 >= 1) && (i79 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i79, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i79 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i79 >= 1) && (i79 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i79, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i79 = node->size[0];
      i80 = 1 + loop_ub;
      if (!((i80 >= 1) && (i80 <= i79))) {
        emlrtDynamicBoundsCheckR2012b(i80, 1, i79, &e_emlrtBCI, &b_st);
      }

      node->data[i80 - 1] = m;
    }

    i79 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i79, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i79 = 0; i79 < loop_ub; i79++) {
      Yfit->data[i79] = 0.0;
    }

    emxInit_int32_T(sp, &r79, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i79 = r79->size[0];
    r79->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r79, i79, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i79 = 0; i79 < loop_ub; i79++) {
      r79->data[i79] = i79;
    }

    emxInit_real_T(sp, &r80, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i79 = r80->size[0];
    r80->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r80, i79, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i79 = 0; i79 < loop_ub; i79++) {
      r80->data[i79] = obj_NodeMean[(int32_T)node->data[i79] - 1];
    }

    i79 = node->size[0];
    iv380[0] = r79->size[0];
    iv381[0] = i79;
    emlrtSubAssignSizeCheckR2012b(iv380, 1, iv381, 1, &b_emlrtECI, sp);
    loop_ub = r80->size[0];
    emxFree_real_T(&node);
    for (i79 = 0; i79 < loop_ub; i79++) {
      Yfit->data[r79->data[i79]] = r80->data[i79];
    }

    emxFree_real_T(&r80);
    emxFree_int32_T(&r79);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void p_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1337], const real_T obj_Children[2674], const real_T obj_CutPoint
  [1337], const real_T obj_NodeMean[1337], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i31;
  int32_T loop_ub;
  int32_T i32;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r31;
  emxArray_real_T *r32;
  int32_T iv332[1];
  int32_T iv333[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i31 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i31, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i31 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i31, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i31 = 0; i31 < loop_ub; i31++) {
      node->data[i31] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i31 = X->size[0];
      i32 = loop_ub + 1;
      if (!((i32 >= 1) && (i32 <= i31))) {
        emlrtDynamicBoundsCheckR2012b(i32, 1, i31, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i31 = (int32_T)m;
        if (!((i31 >= 1) && (i31 <= 1337))) {
          emlrtDynamicBoundsCheckR2012b(i31, 1, 1337, &t_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i31 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i31 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i31 >= 1) && (i31 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i31, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i31 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i31 >= 1) && (i31 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i31, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i31 = node->size[0];
      i32 = 1 + loop_ub;
      if (!((i32 >= 1) && (i32 <= i31))) {
        emlrtDynamicBoundsCheckR2012b(i32, 1, i31, &e_emlrtBCI, &b_st);
      }

      node->data[i32 - 1] = m;
    }

    i31 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i31, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i31 = 0; i31 < loop_ub; i31++) {
      Yfit->data[i31] = 0.0;
    }

    emxInit_int32_T(sp, &r31, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i31 = r31->size[0];
    r31->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r31, i31, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i31 = 0; i31 < loop_ub; i31++) {
      r31->data[i31] = i31;
    }

    emxInit_real_T(sp, &r32, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i31 = r32->size[0];
    r32->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r32, i31, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i31 = 0; i31 < loop_ub; i31++) {
      r32->data[i31] = obj_NodeMean[(int32_T)node->data[i31] - 1];
    }

    i31 = node->size[0];
    iv332[0] = r31->size[0];
    iv333[0] = i31;
    emlrtSubAssignSizeCheckR2012b(iv332, 1, iv333, 1, &b_emlrtECI, sp);
    loop_ub = r32->size[0];
    emxFree_real_T(&node);
    for (i31 = 0; i31 < loop_ub; i31++) {
      Yfit->data[r31->data[i31]] = r32->data[i31];
    }

    emxFree_real_T(&r32);
    emxFree_int32_T(&r31);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void pb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1273], const real_T obj_Children[2546], const real_T obj_CutPoint
  [1273], const real_T obj_NodeMean[1273], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i81;
  int32_T loop_ub;
  int32_T i82;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r81;
  emxArray_real_T *r82;
  int32_T iv382[1];
  int32_T iv383[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i81 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i81, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i81 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i81, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i81 = 0; i81 < loop_ub; i81++) {
      node->data[i81] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i81 = X->size[0];
      i82 = loop_ub + 1;
      if (!((i82 >= 1) && (i82 <= i81))) {
        emlrtDynamicBoundsCheckR2012b(i82, 1, i81, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i81 = (int32_T)m;
        if (!((i81 >= 1) && (i81 <= 1273))) {
          emlrtDynamicBoundsCheckR2012b(i81, 1, 1273, &tb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i81 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i81 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i81 >= 1) && (i81 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i81, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i81 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i81 >= 1) && (i81 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i81, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i81 = node->size[0];
      i82 = 1 + loop_ub;
      if (!((i82 >= 1) && (i82 <= i81))) {
        emlrtDynamicBoundsCheckR2012b(i82, 1, i81, &e_emlrtBCI, &b_st);
      }

      node->data[i82 - 1] = m;
    }

    i81 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i81, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i81 = 0; i81 < loop_ub; i81++) {
      Yfit->data[i81] = 0.0;
    }

    emxInit_int32_T(sp, &r81, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i81 = r81->size[0];
    r81->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r81, i81, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i81 = 0; i81 < loop_ub; i81++) {
      r81->data[i81] = i81;
    }

    emxInit_real_T(sp, &r82, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i81 = r82->size[0];
    r82->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r82, i81, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i81 = 0; i81 < loop_ub; i81++) {
      r82->data[i81] = obj_NodeMean[(int32_T)node->data[i81] - 1];
    }

    i81 = node->size[0];
    iv382[0] = r81->size[0];
    iv383[0] = i81;
    emlrtSubAssignSizeCheckR2012b(iv382, 1, iv383, 1, &b_emlrtECI, sp);
    loop_ub = r82->size[0];
    emxFree_real_T(&node);
    for (i81 = 0; i81 < loop_ub; i81++) {
      Yfit->data[r81->data[i81]] = r82->data[i81];
    }

    emxFree_real_T(&r82);
    emxFree_int32_T(&r81);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void q_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1263], const real_T obj_Children[2526], const real_T obj_CutPoint
  [1263], const real_T obj_NodeMean[1263], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i33;
  int32_T loop_ub;
  int32_T i34;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r33;
  emxArray_real_T *r34;
  int32_T iv334[1];
  int32_T iv335[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i33 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i33, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i33 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i33, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i33 = 0; i33 < loop_ub; i33++) {
      node->data[i33] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i33 = X->size[0];
      i34 = loop_ub + 1;
      if (!((i34 >= 1) && (i34 <= i33))) {
        emlrtDynamicBoundsCheckR2012b(i34, 1, i33, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i33 = (int32_T)m;
        if (!((i33 >= 1) && (i33 <= 1263))) {
          emlrtDynamicBoundsCheckR2012b(i33, 1, 1263, &u_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i33 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i33 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i33 >= 1) && (i33 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i33, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i33 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i33 >= 1) && (i33 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i33, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i33 = node->size[0];
      i34 = 1 + loop_ub;
      if (!((i34 >= 1) && (i34 <= i33))) {
        emlrtDynamicBoundsCheckR2012b(i34, 1, i33, &e_emlrtBCI, &b_st);
      }

      node->data[i34 - 1] = m;
    }

    i33 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i33, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i33 = 0; i33 < loop_ub; i33++) {
      Yfit->data[i33] = 0.0;
    }

    emxInit_int32_T(sp, &r33, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i33 = r33->size[0];
    r33->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r33, i33, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i33 = 0; i33 < loop_ub; i33++) {
      r33->data[i33] = i33;
    }

    emxInit_real_T(sp, &r34, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i33 = r34->size[0];
    r34->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r34, i33, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i33 = 0; i33 < loop_ub; i33++) {
      r34->data[i33] = obj_NodeMean[(int32_T)node->data[i33] - 1];
    }

    i33 = node->size[0];
    iv334[0] = r33->size[0];
    iv335[0] = i33;
    emlrtSubAssignSizeCheckR2012b(iv334, 1, iv335, 1, &b_emlrtECI, sp);
    loop_ub = r34->size[0];
    emxFree_real_T(&node);
    for (i33 = 0; i33 < loop_ub; i33++) {
      Yfit->data[r33->data[i33]] = r34->data[i33];
    }

    emxFree_real_T(&r34);
    emxFree_int32_T(&r33);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void qb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1225], const real_T obj_Children[2450], const real_T obj_CutPoint
  [1225], const real_T obj_NodeMean[1225], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i83;
  int32_T loop_ub;
  int32_T i84;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r83;
  emxArray_real_T *r84;
  int32_T iv384[1];
  int32_T iv385[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i83 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i83, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i83 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i83, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i83 = 0; i83 < loop_ub; i83++) {
      node->data[i83] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i83 = X->size[0];
      i84 = loop_ub + 1;
      if (!((i84 >= 1) && (i84 <= i83))) {
        emlrtDynamicBoundsCheckR2012b(i84, 1, i83, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i83 = (int32_T)m;
        if (!((i83 >= 1) && (i83 <= 1225))) {
          emlrtDynamicBoundsCheckR2012b(i83, 1, 1225, &ub_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i83 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i83 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i83 >= 1) && (i83 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i83, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i83 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i83 >= 1) && (i83 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i83, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i83 = node->size[0];
      i84 = 1 + loop_ub;
      if (!((i84 >= 1) && (i84 <= i83))) {
        emlrtDynamicBoundsCheckR2012b(i84, 1, i83, &e_emlrtBCI, &b_st);
      }

      node->data[i84 - 1] = m;
    }

    i83 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i83, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i83 = 0; i83 < loop_ub; i83++) {
      Yfit->data[i83] = 0.0;
    }

    emxInit_int32_T(sp, &r83, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i83 = r83->size[0];
    r83->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r83, i83, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i83 = 0; i83 < loop_ub; i83++) {
      r83->data[i83] = i83;
    }

    emxInit_real_T(sp, &r84, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i83 = r84->size[0];
    r84->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r84, i83, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i83 = 0; i83 < loop_ub; i83++) {
      r84->data[i83] = obj_NodeMean[(int32_T)node->data[i83] - 1];
    }

    i83 = node->size[0];
    iv384[0] = r83->size[0];
    iv385[0] = i83;
    emlrtSubAssignSizeCheckR2012b(iv384, 1, iv385, 1, &b_emlrtECI, sp);
    loop_ub = r84->size[0];
    emxFree_real_T(&node);
    for (i83 = 0; i83 < loop_ub; i83++) {
      Yfit->data[r83->data[i83]] = r84->data[i83];
    }

    emxFree_real_T(&r84);
    emxFree_int32_T(&r83);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void r_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1293], const real_T obj_Children[2586], const real_T obj_CutPoint
  [1293], const real_T obj_NodeMean[1293], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i35;
  int32_T loop_ub;
  int32_T i36;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r35;
  emxArray_real_T *r36;
  int32_T iv336[1];
  int32_T iv337[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i35 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i35, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i35 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i35, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i35 = 0; i35 < loop_ub; i35++) {
      node->data[i35] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i35 = X->size[0];
      i36 = loop_ub + 1;
      if (!((i36 >= 1) && (i36 <= i35))) {
        emlrtDynamicBoundsCheckR2012b(i36, 1, i35, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i35 = (int32_T)m;
        if (!((i35 >= 1) && (i35 <= 1293))) {
          emlrtDynamicBoundsCheckR2012b(i35, 1, 1293, &v_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i35 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i35 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i35 >= 1) && (i35 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i35, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i35 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i35 >= 1) && (i35 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i35, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i35 = node->size[0];
      i36 = 1 + loop_ub;
      if (!((i36 >= 1) && (i36 <= i35))) {
        emlrtDynamicBoundsCheckR2012b(i36, 1, i35, &e_emlrtBCI, &b_st);
      }

      node->data[i36 - 1] = m;
    }

    i35 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i35, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i35 = 0; i35 < loop_ub; i35++) {
      Yfit->data[i35] = 0.0;
    }

    emxInit_int32_T(sp, &r35, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i35 = r35->size[0];
    r35->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r35, i35, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i35 = 0; i35 < loop_ub; i35++) {
      r35->data[i35] = i35;
    }

    emxInit_real_T(sp, &r36, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i35 = r36->size[0];
    r36->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r36, i35, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i35 = 0; i35 < loop_ub; i35++) {
      r36->data[i35] = obj_NodeMean[(int32_T)node->data[i35] - 1];
    }

    i35 = node->size[0];
    iv336[0] = r35->size[0];
    iv337[0] = i35;
    emlrtSubAssignSizeCheckR2012b(iv336, 1, iv337, 1, &b_emlrtECI, sp);
    loop_ub = r36->size[0];
    emxFree_real_T(&node);
    for (i35 = 0; i35 < loop_ub; i35++) {
      Yfit->data[r35->data[i35]] = r36->data[i35];
    }

    emxFree_real_T(&r36);
    emxFree_int32_T(&r35);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void rb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1241], const real_T obj_Children[2482], const real_T obj_CutPoint
  [1241], const real_T obj_NodeMean[1241], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i85;
  int32_T loop_ub;
  int32_T i86;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r85;
  emxArray_real_T *r86;
  int32_T iv386[1];
  int32_T iv387[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i85 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i85, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i85 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i85, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i85 = 0; i85 < loop_ub; i85++) {
      node->data[i85] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i85 = X->size[0];
      i86 = loop_ub + 1;
      if (!((i86 >= 1) && (i86 <= i85))) {
        emlrtDynamicBoundsCheckR2012b(i86, 1, i85, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i85 = (int32_T)m;
        if (!((i85 >= 1) && (i85 <= 1241))) {
          emlrtDynamicBoundsCheckR2012b(i85, 1, 1241, &vb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i85 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i85 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i85 >= 1) && (i85 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i85, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i85 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i85 >= 1) && (i85 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i85, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i85 = node->size[0];
      i86 = 1 + loop_ub;
      if (!((i86 >= 1) && (i86 <= i85))) {
        emlrtDynamicBoundsCheckR2012b(i86, 1, i85, &e_emlrtBCI, &b_st);
      }

      node->data[i86 - 1] = m;
    }

    i85 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i85, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i85 = 0; i85 < loop_ub; i85++) {
      Yfit->data[i85] = 0.0;
    }

    emxInit_int32_T(sp, &r85, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i85 = r85->size[0];
    r85->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r85, i85, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i85 = 0; i85 < loop_ub; i85++) {
      r85->data[i85] = i85;
    }

    emxInit_real_T(sp, &r86, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i85 = r86->size[0];
    r86->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r86, i85, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i85 = 0; i85 < loop_ub; i85++) {
      r86->data[i85] = obj_NodeMean[(int32_T)node->data[i85] - 1];
    }

    i85 = node->size[0];
    iv386[0] = r85->size[0];
    iv387[0] = i85;
    emlrtSubAssignSizeCheckR2012b(iv386, 1, iv387, 1, &b_emlrtECI, sp);
    loop_ub = r86->size[0];
    emxFree_real_T(&node);
    for (i85 = 0; i85 < loop_ub; i85++) {
      Yfit->data[r85->data[i85]] = r86->data[i85];
    }

    emxFree_real_T(&r86);
    emxFree_int32_T(&r85);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void s_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1237], const real_T obj_Children[2474], const real_T obj_CutPoint
  [1237], const real_T obj_NodeMean[1237], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i37;
  int32_T loop_ub;
  int32_T i38;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r37;
  emxArray_real_T *r38;
  int32_T iv338[1];
  int32_T iv339[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i37 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i37, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i37 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i37, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i37 = 0; i37 < loop_ub; i37++) {
      node->data[i37] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i37 = X->size[0];
      i38 = loop_ub + 1;
      if (!((i38 >= 1) && (i38 <= i37))) {
        emlrtDynamicBoundsCheckR2012b(i38, 1, i37, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i37 = (int32_T)m;
        if (!((i37 >= 1) && (i37 <= 1237))) {
          emlrtDynamicBoundsCheckR2012b(i37, 1, 1237, &w_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i37 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i37 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i37 >= 1) && (i37 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i37, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i37 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i37 >= 1) && (i37 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i37, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i37 = node->size[0];
      i38 = 1 + loop_ub;
      if (!((i38 >= 1) && (i38 <= i37))) {
        emlrtDynamicBoundsCheckR2012b(i38, 1, i37, &e_emlrtBCI, &b_st);
      }

      node->data[i38 - 1] = m;
    }

    i37 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i37, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i37 = 0; i37 < loop_ub; i37++) {
      Yfit->data[i37] = 0.0;
    }

    emxInit_int32_T(sp, &r37, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i37 = r37->size[0];
    r37->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r37, i37, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i37 = 0; i37 < loop_ub; i37++) {
      r37->data[i37] = i37;
    }

    emxInit_real_T(sp, &r38, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i37 = r38->size[0];
    r38->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r38, i37, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i37 = 0; i37 < loop_ub; i37++) {
      r38->data[i37] = obj_NodeMean[(int32_T)node->data[i37] - 1];
    }

    i37 = node->size[0];
    iv338[0] = r37->size[0];
    iv339[0] = i37;
    emlrtSubAssignSizeCheckR2012b(iv338, 1, iv339, 1, &b_emlrtECI, sp);
    loop_ub = r38->size[0];
    emxFree_real_T(&node);
    for (i37 = 0; i37 < loop_ub; i37++) {
      Yfit->data[r37->data[i37]] = r38->data[i37];
    }

    emxFree_real_T(&r38);
    emxFree_int32_T(&r37);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void sb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1203], const real_T obj_Children[2406], const real_T obj_CutPoint
  [1203], const real_T obj_NodeMean[1203], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i87;
  int32_T loop_ub;
  int32_T i88;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r87;
  emxArray_real_T *r88;
  int32_T iv388[1];
  int32_T iv389[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i87 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i87, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i87 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i87, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i87 = 0; i87 < loop_ub; i87++) {
      node->data[i87] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i87 = X->size[0];
      i88 = loop_ub + 1;
      if (!((i88 >= 1) && (i88 <= i87))) {
        emlrtDynamicBoundsCheckR2012b(i88, 1, i87, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i87 = (int32_T)m;
        if (!((i87 >= 1) && (i87 <= 1203))) {
          emlrtDynamicBoundsCheckR2012b(i87, 1, 1203, &wb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i87 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i87 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i87 >= 1) && (i87 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i87, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i87 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i87 >= 1) && (i87 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i87, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i87 = node->size[0];
      i88 = 1 + loop_ub;
      if (!((i88 >= 1) && (i88 <= i87))) {
        emlrtDynamicBoundsCheckR2012b(i88, 1, i87, &e_emlrtBCI, &b_st);
      }

      node->data[i88 - 1] = m;
    }

    i87 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i87, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i87 = 0; i87 < loop_ub; i87++) {
      Yfit->data[i87] = 0.0;
    }

    emxInit_int32_T(sp, &r87, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i87 = r87->size[0];
    r87->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r87, i87, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i87 = 0; i87 < loop_ub; i87++) {
      r87->data[i87] = i87;
    }

    emxInit_real_T(sp, &r88, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i87 = r88->size[0];
    r88->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r88, i87, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i87 = 0; i87 < loop_ub; i87++) {
      r88->data[i87] = obj_NodeMean[(int32_T)node->data[i87] - 1];
    }

    i87 = node->size[0];
    iv388[0] = r87->size[0];
    iv389[0] = i87;
    emlrtSubAssignSizeCheckR2012b(iv388, 1, iv389, 1, &b_emlrtECI, sp);
    loop_ub = r88->size[0];
    emxFree_real_T(&node);
    for (i87 = 0; i87 < loop_ub; i87++) {
      Yfit->data[r87->data[i87]] = r88->data[i87];
    }

    emxFree_real_T(&r88);
    emxFree_int32_T(&r87);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void t_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1201], const real_T obj_Children[2402], const real_T obj_CutPoint
  [1201], const real_T obj_NodeMean[1201], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i39;
  int32_T loop_ub;
  int32_T i40;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r39;
  emxArray_real_T *r40;
  int32_T iv340[1];
  int32_T iv341[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i39 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i39, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i39 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i39, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i39 = 0; i39 < loop_ub; i39++) {
      node->data[i39] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i39 = X->size[0];
      i40 = loop_ub + 1;
      if (!((i40 >= 1) && (i40 <= i39))) {
        emlrtDynamicBoundsCheckR2012b(i40, 1, i39, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i39 = (int32_T)m;
        if (!((i39 >= 1) && (i39 <= 1201))) {
          emlrtDynamicBoundsCheckR2012b(i39, 1, 1201, &x_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i39 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i39 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i39 >= 1) && (i39 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i39, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i39 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i39 >= 1) && (i39 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i39, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i39 = node->size[0];
      i40 = 1 + loop_ub;
      if (!((i40 >= 1) && (i40 <= i39))) {
        emlrtDynamicBoundsCheckR2012b(i40, 1, i39, &e_emlrtBCI, &b_st);
      }

      node->data[i40 - 1] = m;
    }

    i39 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i39, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i39 = 0; i39 < loop_ub; i39++) {
      Yfit->data[i39] = 0.0;
    }

    emxInit_int32_T(sp, &r39, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i39 = r39->size[0];
    r39->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r39, i39, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i39 = 0; i39 < loop_ub; i39++) {
      r39->data[i39] = i39;
    }

    emxInit_real_T(sp, &r40, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i39 = r40->size[0];
    r40->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r40, i39, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i39 = 0; i39 < loop_ub; i39++) {
      r40->data[i39] = obj_NodeMean[(int32_T)node->data[i39] - 1];
    }

    i39 = node->size[0];
    iv340[0] = r39->size[0];
    iv341[0] = i39;
    emlrtSubAssignSizeCheckR2012b(iv340, 1, iv341, 1, &b_emlrtECI, sp);
    loop_ub = r40->size[0];
    emxFree_real_T(&node);
    for (i39 = 0; i39 < loop_ub; i39++) {
      Yfit->data[r39->data[i39]] = r40->data[i39];
    }

    emxFree_real_T(&r40);
    emxFree_int32_T(&r39);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void tb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1343], const real_T obj_Children[2686], const real_T obj_CutPoint
  [1343], const real_T obj_NodeMean[1343], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i89;
  int32_T loop_ub;
  int32_T i90;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r89;
  emxArray_real_T *r90;
  int32_T iv390[1];
  int32_T iv391[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i89 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i89, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i89 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i89, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i89 = 0; i89 < loop_ub; i89++) {
      node->data[i89] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i89 = X->size[0];
      i90 = loop_ub + 1;
      if (!((i90 >= 1) && (i90 <= i89))) {
        emlrtDynamicBoundsCheckR2012b(i90, 1, i89, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i89 = (int32_T)m;
        if (!((i89 >= 1) && (i89 <= 1343))) {
          emlrtDynamicBoundsCheckR2012b(i89, 1, 1343, &xb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i89 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i89 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i89 >= 1) && (i89 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i89, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i89 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i89 >= 1) && (i89 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i89, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i89 = node->size[0];
      i90 = 1 + loop_ub;
      if (!((i90 >= 1) && (i90 <= i89))) {
        emlrtDynamicBoundsCheckR2012b(i90, 1, i89, &e_emlrtBCI, &b_st);
      }

      node->data[i90 - 1] = m;
    }

    i89 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i89, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i89 = 0; i89 < loop_ub; i89++) {
      Yfit->data[i89] = 0.0;
    }

    emxInit_int32_T(sp, &r89, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i89 = r89->size[0];
    r89->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r89, i89, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i89 = 0; i89 < loop_ub; i89++) {
      r89->data[i89] = i89;
    }

    emxInit_real_T(sp, &r90, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i89 = r90->size[0];
    r90->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r90, i89, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i89 = 0; i89 < loop_ub; i89++) {
      r90->data[i89] = obj_NodeMean[(int32_T)node->data[i89] - 1];
    }

    i89 = node->size[0];
    iv390[0] = r89->size[0];
    iv391[0] = i89;
    emlrtSubAssignSizeCheckR2012b(iv390, 1, iv391, 1, &b_emlrtECI, sp);
    loop_ub = r90->size[0];
    emxFree_real_T(&node);
    for (i89 = 0; i89 < loop_ub; i89++) {
      Yfit->data[r89->data[i89]] = r90->data[i89];
    }

    emxFree_real_T(&r90);
    emxFree_int32_T(&r89);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void u_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1267], const real_T obj_Children[2534], const real_T obj_CutPoint
  [1267], const real_T obj_NodeMean[1267], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i41;
  int32_T loop_ub;
  int32_T i42;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r41;
  emxArray_real_T *r42;
  int32_T iv342[1];
  int32_T iv343[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i41 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i41, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i41 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i41, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i41 = 0; i41 < loop_ub; i41++) {
      node->data[i41] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i41 = X->size[0];
      i42 = loop_ub + 1;
      if (!((i42 >= 1) && (i42 <= i41))) {
        emlrtDynamicBoundsCheckR2012b(i42, 1, i41, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i41 = (int32_T)m;
        if (!((i41 >= 1) && (i41 <= 1267))) {
          emlrtDynamicBoundsCheckR2012b(i41, 1, 1267, &y_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i41 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i41 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i41 >= 1) && (i41 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i41, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i41 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i41 >= 1) && (i41 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i41, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i41 = node->size[0];
      i42 = 1 + loop_ub;
      if (!((i42 >= 1) && (i42 <= i41))) {
        emlrtDynamicBoundsCheckR2012b(i42, 1, i41, &e_emlrtBCI, &b_st);
      }

      node->data[i42 - 1] = m;
    }

    i41 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i41, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i41 = 0; i41 < loop_ub; i41++) {
      Yfit->data[i41] = 0.0;
    }

    emxInit_int32_T(sp, &r41, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i41 = r41->size[0];
    r41->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r41, i41, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i41 = 0; i41 < loop_ub; i41++) {
      r41->data[i41] = i41;
    }

    emxInit_real_T(sp, &r42, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i41 = r42->size[0];
    r42->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r42, i41, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i41 = 0; i41 < loop_ub; i41++) {
      r42->data[i41] = obj_NodeMean[(int32_T)node->data[i41] - 1];
    }

    i41 = node->size[0];
    iv342[0] = r41->size[0];
    iv343[0] = i41;
    emlrtSubAssignSizeCheckR2012b(iv342, 1, iv343, 1, &b_emlrtECI, sp);
    loop_ub = r42->size[0];
    emxFree_real_T(&node);
    for (i41 = 0; i41 < loop_ub; i41++) {
      Yfit->data[r41->data[i41]] = r42->data[i41];
    }

    emxFree_real_T(&r42);
    emxFree_int32_T(&r41);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void ub_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1387], const real_T obj_Children[2774], const real_T obj_CutPoint
  [1387], const real_T obj_NodeMean[1387], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i91;
  int32_T loop_ub;
  int32_T i92;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r91;
  emxArray_real_T *r92;
  int32_T iv392[1];
  int32_T iv393[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i91 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i91, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i91 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i91, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i91 = 0; i91 < loop_ub; i91++) {
      node->data[i91] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i91 = X->size[0];
      i92 = loop_ub + 1;
      if (!((i92 >= 1) && (i92 <= i91))) {
        emlrtDynamicBoundsCheckR2012b(i92, 1, i91, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i91 = (int32_T)m;
        if (!((i91 >= 1) && (i91 <= 1387))) {
          emlrtDynamicBoundsCheckR2012b(i91, 1, 1387, &yb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i91 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i91 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i91 >= 1) && (i91 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i91, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i91 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i91 >= 1) && (i91 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i91, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i91 = node->size[0];
      i92 = 1 + loop_ub;
      if (!((i92 >= 1) && (i92 <= i91))) {
        emlrtDynamicBoundsCheckR2012b(i92, 1, i91, &e_emlrtBCI, &b_st);
      }

      node->data[i92 - 1] = m;
    }

    i91 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i91, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i91 = 0; i91 < loop_ub; i91++) {
      Yfit->data[i91] = 0.0;
    }

    emxInit_int32_T(sp, &r91, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i91 = r91->size[0];
    r91->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r91, i91, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i91 = 0; i91 < loop_ub; i91++) {
      r91->data[i91] = i91;
    }

    emxInit_real_T(sp, &r92, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i91 = r92->size[0];
    r92->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r92, i91, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i91 = 0; i91 < loop_ub; i91++) {
      r92->data[i91] = obj_NodeMean[(int32_T)node->data[i91] - 1];
    }

    i91 = node->size[0];
    iv392[0] = r91->size[0];
    iv393[0] = i91;
    emlrtSubAssignSizeCheckR2012b(iv392, 1, iv393, 1, &b_emlrtECI, sp);
    loop_ub = r92->size[0];
    emxFree_real_T(&node);
    for (i91 = 0; i91 < loop_ub; i91++) {
      Yfit->data[r91->data[i91]] = r92->data[i91];
    }

    emxFree_real_T(&r92);
    emxFree_int32_T(&r91);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void v_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1259], const real_T obj_Children[2518], const real_T obj_CutPoint
  [1259], const real_T obj_NodeMean[1259], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i43;
  int32_T loop_ub;
  int32_T i44;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r43;
  emxArray_real_T *r44;
  int32_T iv344[1];
  int32_T iv345[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i43 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i43, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i43 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i43, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i43 = 0; i43 < loop_ub; i43++) {
      node->data[i43] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i43 = X->size[0];
      i44 = loop_ub + 1;
      if (!((i44 >= 1) && (i44 <= i43))) {
        emlrtDynamicBoundsCheckR2012b(i44, 1, i43, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i43 = (int32_T)m;
        if (!((i43 >= 1) && (i43 <= 1259))) {
          emlrtDynamicBoundsCheckR2012b(i43, 1, 1259, &ab_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i43 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i43 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i43 >= 1) && (i43 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i43, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i43 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i43 >= 1) && (i43 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i43, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i43 = node->size[0];
      i44 = 1 + loop_ub;
      if (!((i44 >= 1) && (i44 <= i43))) {
        emlrtDynamicBoundsCheckR2012b(i44, 1, i43, &e_emlrtBCI, &b_st);
      }

      node->data[i44 - 1] = m;
    }

    i43 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i43, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i43 = 0; i43 < loop_ub; i43++) {
      Yfit->data[i43] = 0.0;
    }

    emxInit_int32_T(sp, &r43, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i43 = r43->size[0];
    r43->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r43, i43, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i43 = 0; i43 < loop_ub; i43++) {
      r43->data[i43] = i43;
    }

    emxInit_real_T(sp, &r44, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i43 = r44->size[0];
    r44->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r44, i43, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i43 = 0; i43 < loop_ub; i43++) {
      r44->data[i43] = obj_NodeMean[(int32_T)node->data[i43] - 1];
    }

    i43 = node->size[0];
    iv344[0] = r43->size[0];
    iv345[0] = i43;
    emlrtSubAssignSizeCheckR2012b(iv344, 1, iv345, 1, &b_emlrtECI, sp);
    loop_ub = r44->size[0];
    emxFree_real_T(&node);
    for (i43 = 0; i43 < loop_ub; i43++) {
      Yfit->data[r43->data[i43]] = r44->data[i43];
    }

    emxFree_real_T(&r44);
    emxFree_int32_T(&r43);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void vb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1321], const real_T obj_Children[2642], const real_T obj_CutPoint
  [1321], const real_T obj_NodeMean[1321], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i93;
  int32_T loop_ub;
  int32_T i94;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r93;
  emxArray_real_T *r94;
  int32_T iv394[1];
  int32_T iv395[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i93 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i93, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i93 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i93, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i93 = 0; i93 < loop_ub; i93++) {
      node->data[i93] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i93 = X->size[0];
      i94 = loop_ub + 1;
      if (!((i94 >= 1) && (i94 <= i93))) {
        emlrtDynamicBoundsCheckR2012b(i94, 1, i93, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i93 = (int32_T)m;
        if (!((i93 >= 1) && (i93 <= 1321))) {
          emlrtDynamicBoundsCheckR2012b(i93, 1, 1321, &ac_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i93 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i93 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i93 >= 1) && (i93 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i93, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i93 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i93 >= 1) && (i93 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i93, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i93 = node->size[0];
      i94 = 1 + loop_ub;
      if (!((i94 >= 1) && (i94 <= i93))) {
        emlrtDynamicBoundsCheckR2012b(i94, 1, i93, &e_emlrtBCI, &b_st);
      }

      node->data[i94 - 1] = m;
    }

    i93 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i93, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i93 = 0; i93 < loop_ub; i93++) {
      Yfit->data[i93] = 0.0;
    }

    emxInit_int32_T(sp, &r93, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i93 = r93->size[0];
    r93->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r93, i93, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i93 = 0; i93 < loop_ub; i93++) {
      r93->data[i93] = i93;
    }

    emxInit_real_T(sp, &r94, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i93 = r94->size[0];
    r94->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r94, i93, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i93 = 0; i93 < loop_ub; i93++) {
      r94->data[i93] = obj_NodeMean[(int32_T)node->data[i93] - 1];
    }

    i93 = node->size[0];
    iv394[0] = r93->size[0];
    iv395[0] = i93;
    emlrtSubAssignSizeCheckR2012b(iv394, 1, iv395, 1, &b_emlrtECI, sp);
    loop_ub = r94->size[0];
    emxFree_real_T(&node);
    for (i93 = 0; i93 < loop_ub; i93++) {
      Yfit->data[r93->data[i93]] = r94->data[i93];
    }

    emxFree_real_T(&r94);
    emxFree_int32_T(&r93);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void w_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1279], const real_T obj_Children[2558], const real_T obj_CutPoint
  [1279], const real_T obj_NodeMean[1279], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i45;
  int32_T loop_ub;
  int32_T i46;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r45;
  emxArray_real_T *r46;
  int32_T iv346[1];
  int32_T iv347[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i45 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i45, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i45 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i45, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i45 = 0; i45 < loop_ub; i45++) {
      node->data[i45] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i45 = X->size[0];
      i46 = loop_ub + 1;
      if (!((i46 >= 1) && (i46 <= i45))) {
        emlrtDynamicBoundsCheckR2012b(i46, 1, i45, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i45 = (int32_T)m;
        if (!((i45 >= 1) && (i45 <= 1279))) {
          emlrtDynamicBoundsCheckR2012b(i45, 1, 1279, &bb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i45 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i45 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i45 >= 1) && (i45 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i45, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i45 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i45 >= 1) && (i45 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i45, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i45 = node->size[0];
      i46 = 1 + loop_ub;
      if (!((i46 >= 1) && (i46 <= i45))) {
        emlrtDynamicBoundsCheckR2012b(i46, 1, i45, &e_emlrtBCI, &b_st);
      }

      node->data[i46 - 1] = m;
    }

    i45 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i45, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i45 = 0; i45 < loop_ub; i45++) {
      Yfit->data[i45] = 0.0;
    }

    emxInit_int32_T(sp, &r45, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i45 = r45->size[0];
    r45->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r45, i45, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i45 = 0; i45 < loop_ub; i45++) {
      r45->data[i45] = i45;
    }

    emxInit_real_T(sp, &r46, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i45 = r46->size[0];
    r46->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r46, i45, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i45 = 0; i45 < loop_ub; i45++) {
      r46->data[i45] = obj_NodeMean[(int32_T)node->data[i45] - 1];
    }

    i45 = node->size[0];
    iv346[0] = r45->size[0];
    iv347[0] = i45;
    emlrtSubAssignSizeCheckR2012b(iv346, 1, iv347, 1, &b_emlrtECI, sp);
    loop_ub = r46->size[0];
    emxFree_real_T(&node);
    for (i45 = 0; i45 < loop_ub; i45++) {
      Yfit->data[r45->data[i45]] = r46->data[i45];
    }

    emxFree_real_T(&r46);
    emxFree_int32_T(&r45);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void wb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1227], const real_T obj_Children[2454], const real_T obj_CutPoint
  [1227], const real_T obj_NodeMean[1227], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i95;
  int32_T loop_ub;
  int32_T i96;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r95;
  emxArray_real_T *r96;
  int32_T iv396[1];
  int32_T iv397[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i95 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i95, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i95 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i95, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i95 = 0; i95 < loop_ub; i95++) {
      node->data[i95] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i95 = X->size[0];
      i96 = loop_ub + 1;
      if (!((i96 >= 1) && (i96 <= i95))) {
        emlrtDynamicBoundsCheckR2012b(i96, 1, i95, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i95 = (int32_T)m;
        if (!((i95 >= 1) && (i95 <= 1227))) {
          emlrtDynamicBoundsCheckR2012b(i95, 1, 1227, &bc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i95 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i95 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i95 >= 1) && (i95 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i95, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i95 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i95 >= 1) && (i95 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i95, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i95 = node->size[0];
      i96 = 1 + loop_ub;
      if (!((i96 >= 1) && (i96 <= i95))) {
        emlrtDynamicBoundsCheckR2012b(i96, 1, i95, &e_emlrtBCI, &b_st);
      }

      node->data[i96 - 1] = m;
    }

    i95 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i95, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i95 = 0; i95 < loop_ub; i95++) {
      Yfit->data[i95] = 0.0;
    }

    emxInit_int32_T(sp, &r95, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i95 = r95->size[0];
    r95->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r95, i95, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i95 = 0; i95 < loop_ub; i95++) {
      r95->data[i95] = i95;
    }

    emxInit_real_T(sp, &r96, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i95 = r96->size[0];
    r96->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r96, i95, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i95 = 0; i95 < loop_ub; i95++) {
      r96->data[i95] = obj_NodeMean[(int32_T)node->data[i95] - 1];
    }

    i95 = node->size[0];
    iv396[0] = r95->size[0];
    iv397[0] = i95;
    emlrtSubAssignSizeCheckR2012b(iv396, 1, iv397, 1, &b_emlrtECI, sp);
    loop_ub = r96->size[0];
    emxFree_real_T(&node);
    for (i95 = 0; i95 < loop_ub; i95++) {
      Yfit->data[r95->data[i95]] = r96->data[i95];
    }

    emxFree_real_T(&r96);
    emxFree_int32_T(&r95);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void x_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1307], const real_T obj_Children[2614], const real_T obj_CutPoint
  [1307], const real_T obj_NodeMean[1307], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i47;
  int32_T loop_ub;
  int32_T i48;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r47;
  emxArray_real_T *r48;
  int32_T iv348[1];
  int32_T iv349[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i47 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i47, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i47 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i47, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i47 = 0; i47 < loop_ub; i47++) {
      node->data[i47] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i47 = X->size[0];
      i48 = loop_ub + 1;
      if (!((i48 >= 1) && (i48 <= i47))) {
        emlrtDynamicBoundsCheckR2012b(i48, 1, i47, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i47 = (int32_T)m;
        if (!((i47 >= 1) && (i47 <= 1307))) {
          emlrtDynamicBoundsCheckR2012b(i47, 1, 1307, &cb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i47 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i47 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i47 >= 1) && (i47 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i47, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i47 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i47 >= 1) && (i47 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i47, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i47 = node->size[0];
      i48 = 1 + loop_ub;
      if (!((i48 >= 1) && (i48 <= i47))) {
        emlrtDynamicBoundsCheckR2012b(i48, 1, i47, &e_emlrtBCI, &b_st);
      }

      node->data[i48 - 1] = m;
    }

    i47 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i47, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i47 = 0; i47 < loop_ub; i47++) {
      Yfit->data[i47] = 0.0;
    }

    emxInit_int32_T(sp, &r47, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i47 = r47->size[0];
    r47->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r47, i47, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i47 = 0; i47 < loop_ub; i47++) {
      r47->data[i47] = i47;
    }

    emxInit_real_T(sp, &r48, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i47 = r48->size[0];
    r48->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r48, i47, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i47 = 0; i47 < loop_ub; i47++) {
      r48->data[i47] = obj_NodeMean[(int32_T)node->data[i47] - 1];
    }

    i47 = node->size[0];
    iv348[0] = r47->size[0];
    iv349[0] = i47;
    emlrtSubAssignSizeCheckR2012b(iv348, 1, iv349, 1, &b_emlrtECI, sp);
    loop_ub = r48->size[0];
    emxFree_real_T(&node);
    for (i47 = 0; i47 < loop_ub; i47++) {
      Yfit->data[r47->data[i47]] = r48->data[i47];
    }

    emxFree_real_T(&r48);
    emxFree_int32_T(&r47);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void xb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1265], const real_T obj_Children[2530], const real_T obj_CutPoint
  [1265], const real_T obj_NodeMean[1265], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i97;
  int32_T loop_ub;
  int32_T i98;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r97;
  emxArray_real_T *r98;
  int32_T iv398[1];
  int32_T iv399[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i97 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i97, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i97 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i97, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i97 = 0; i97 < loop_ub; i97++) {
      node->data[i97] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i97 = X->size[0];
      i98 = loop_ub + 1;
      if (!((i98 >= 1) && (i98 <= i97))) {
        emlrtDynamicBoundsCheckR2012b(i98, 1, i97, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i97 = (int32_T)m;
        if (!((i97 >= 1) && (i97 <= 1265))) {
          emlrtDynamicBoundsCheckR2012b(i97, 1, 1265, &cc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i97 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i97 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i97 >= 1) && (i97 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i97, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i97 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i97 >= 1) && (i97 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i97, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i97 = node->size[0];
      i98 = 1 + loop_ub;
      if (!((i98 >= 1) && (i98 <= i97))) {
        emlrtDynamicBoundsCheckR2012b(i98, 1, i97, &e_emlrtBCI, &b_st);
      }

      node->data[i98 - 1] = m;
    }

    i97 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i97, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i97 = 0; i97 < loop_ub; i97++) {
      Yfit->data[i97] = 0.0;
    }

    emxInit_int32_T(sp, &r97, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i97 = r97->size[0];
    r97->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r97, i97, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i97 = 0; i97 < loop_ub; i97++) {
      r97->data[i97] = i97;
    }

    emxInit_real_T(sp, &r98, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i97 = r98->size[0];
    r98->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r98, i97, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i97 = 0; i97 < loop_ub; i97++) {
      r98->data[i97] = obj_NodeMean[(int32_T)node->data[i97] - 1];
    }

    i97 = node->size[0];
    iv398[0] = r97->size[0];
    iv399[0] = i97;
    emlrtSubAssignSizeCheckR2012b(iv398, 1, iv399, 1, &b_emlrtECI, sp);
    loop_ub = r98->size[0];
    emxFree_real_T(&node);
    for (i97 = 0; i97 < loop_ub; i97++) {
      Yfit->data[r97->data[i97]] = r98->data[i97];
    }

    emxFree_real_T(&r98);
    emxFree_int32_T(&r97);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void y_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[1327], const real_T obj_Children[2654], const real_T obj_CutPoint
  [1327], const real_T obj_NodeMean[1327], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i49;
  int32_T loop_ub;
  int32_T i50;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r49;
  emxArray_real_T *r50;
  int32_T iv350[1];
  int32_T iv351[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i49 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i49, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i49 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i49, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i49 = 0; i49 < loop_ub; i49++) {
      node->data[i49] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i49 = X->size[0];
      i50 = loop_ub + 1;
      if (!((i50 >= 1) && (i50 <= i49))) {
        emlrtDynamicBoundsCheckR2012b(i50, 1, i49, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i49 = (int32_T)m;
        if (!((i49 >= 1) && (i49 <= 1327))) {
          emlrtDynamicBoundsCheckR2012b(i49, 1, 1327, &db_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i49 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i49 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i49 >= 1) && (i49 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i49, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i49 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i49 >= 1) && (i49 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i49, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i49 = node->size[0];
      i50 = 1 + loop_ub;
      if (!((i50 >= 1) && (i50 <= i49))) {
        emlrtDynamicBoundsCheckR2012b(i50, 1, i49, &e_emlrtBCI, &b_st);
      }

      node->data[i50 - 1] = m;
    }

    i49 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i49, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i49 = 0; i49 < loop_ub; i49++) {
      Yfit->data[i49] = 0.0;
    }

    emxInit_int32_T(sp, &r49, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i49 = r49->size[0];
    r49->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r49, i49, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i49 = 0; i49 < loop_ub; i49++) {
      r49->data[i49] = i49;
    }

    emxInit_real_T(sp, &r50, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i49 = r50->size[0];
    r50->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r50, i49, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i49 = 0; i49 < loop_ub; i49++) {
      r50->data[i49] = obj_NodeMean[(int32_T)node->data[i49] - 1];
    }

    i49 = node->size[0];
    iv350[0] = r49->size[0];
    iv351[0] = i49;
    emlrtSubAssignSizeCheckR2012b(iv350, 1, iv351, 1, &b_emlrtECI, sp);
    loop_ub = r50->size[0];
    emxFree_real_T(&node);
    for (i49 = 0; i49 < loop_ub; i49++) {
      Yfit->data[r49->data[i49]] = r50->data[i49];
    }

    emxFree_real_T(&r50);
    emxFree_int32_T(&r49);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void yb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[1219], const real_T obj_Children[2438], const real_T obj_CutPoint
  [1219], const real_T obj_NodeMean[1219], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i99;
  int32_T loop_ub;
  int32_T i100;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r99;
  emxArray_real_T *r100;
  int32_T iv400[1];
  int32_T iv401[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i99 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i99, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i99 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i99, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i99 = 0; i99 < loop_ub; i99++) {
      node->data[i99] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i99 = X->size[0];
      i100 = loop_ub + 1;
      if (!((i100 >= 1) && (i100 <= i99))) {
        emlrtDynamicBoundsCheckR2012b(i100, 1, i99, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i99 = (int32_T)m;
        if (!((i99 >= 1) && (i99 <= 1219))) {
          emlrtDynamicBoundsCheckR2012b(i99, 1, 1219, &dc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i99 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i99 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i99 >= 1) && (i99 <= 12))) {
            emlrtDynamicBoundsCheckR2012b(i99, 1, 12, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i99 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i99 >= 1) && (i99 <= 12))) {
              emlrtDynamicBoundsCheckR2012b(i99, 1, 12, &emlrtBCI, &b_st);
            }

            if (X->data[loop_ub + X->size[0] * ((int32_T)obj_CutVar[(int32_T)m -
                 1] - 1)] < obj_CutPoint[(int32_T)m - 1]) {
              m = obj_Children[((int32_T)m - 1) << 1];
            } else {
              m = obj_Children[1 + (((int32_T)m - 1) << 1)];
            }
          }
        }
      } while (exitg1 == 0);

      i99 = node->size[0];
      i100 = 1 + loop_ub;
      if (!((i100 >= 1) && (i100 <= i99))) {
        emlrtDynamicBoundsCheckR2012b(i100, 1, i99, &e_emlrtBCI, &b_st);
      }

      node->data[i100 - 1] = m;
    }

    i99 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i99, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i99 = 0; i99 < loop_ub; i99++) {
      Yfit->data[i99] = 0.0;
    }

    emxInit_int32_T(sp, &r99, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i99 = r99->size[0];
    r99->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r99, i99, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i99 = 0; i99 < loop_ub; i99++) {
      r99->data[i99] = i99;
    }

    emxInit_real_T(sp, &r100, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i99 = r100->size[0];
    r100->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r100, i99, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i99 = 0; i99 < loop_ub; i99++) {
      r100->data[i99] = obj_NodeMean[(int32_T)node->data[i99] - 1];
    }

    i99 = node->size[0];
    iv400[0] = r99->size[0];
    iv401[0] = i99;
    emlrtSubAssignSizeCheckR2012b(iv400, 1, iv401, 1, &b_emlrtECI, sp);
    loop_ub = r100->size[0];
    emxFree_real_T(&node);
    for (i99 = 0; i99 < loop_ub; i99++) {
      Yfit->data[r99->data[i99]] = r100->data[i99];
    }

    emxFree_real_T(&r100);
    emxFree_int32_T(&r99);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (CompactRegressionTree.c) */
