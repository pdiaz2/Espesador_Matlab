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

static emlrtRTEInfo b_emlrtRTEI = { 101,/* lineNo */
  32,                                  /* colNo */
  "CompactRegressionTree",             /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\CompactRegressionTree.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 101,/* lineNo */
  24,                                  /* colNo */
  "CompactRegressionTree",             /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\CompactRegressionTree.m"/* pName */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  157,                                 /* lineNo */
  17,                                  /* colNo */
  "CompactRegressionTree",             /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\CompactRegressionTree.m"/* pName */
};

static emlrtBCInfo b_emlrtBCI = { 1,   /* iFirst */
  10,                                  /* iLast */
  38,                                  /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { 1,   /* iFirst */
  10,                                  /* iLast */
  35,                                  /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { 1,   /* iFirst */
  4633,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { 1,   /* iFirst */
  4619,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { 1,   /* iFirst */
  4789,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { 1,   /* iFirst */
  4567,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { 1,   /* iFirst */
  4577,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { 1,   /* iFirst */
  4637,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { 1,   /* iFirst */
  4435,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { 1,   /* iFirst */
  4795,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { 1,   /* iFirst */
  4703,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { 1,   /* iFirst */
  4691,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { 1,   /* iFirst */
  4665,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { 1,   /* iFirst */
  4713,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { 1,   /* iFirst */
  4685,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { 1,   /* iFirst */
  4605,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { 1,   /* iFirst */
  4681,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { 1,   /* iFirst */
  4697,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { 1,   /* iFirst */
  4815,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { 1,   /* iFirst */
  4783,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { 1,   /* iFirst */
  4393,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { 1,   /* iFirst */
  4735,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { 1,  /* iFirst */
  4645,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { 1,  /* iFirst */
  4663,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { 1,  /* iFirst */
  4759,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { 1,  /* iFirst */
  4717,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { 1,  /* iFirst */
  4617,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { 1,  /* iFirst */
  4659,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { 1,  /* iFirst */
  4625,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { 1,  /* iFirst */
  4639,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { 1,  /* iFirst */
  4677,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { 1,  /* iFirst */
  4575,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { 1,  /* iFirst */
  4563,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { 1,  /* iFirst */
  4549,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { 1,  /* iFirst */
  4447,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { 1,  /* iFirst */
  4709,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { 1,  /* iFirst */
  4785,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { 1,  /* iFirst */
  4597,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { 1,  /* iFirst */
  4683,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { 1,  /* iFirst */
  4589,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { 1,  /* iFirst */
  4505,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { 1,  /* iFirst */
  4569,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { 1,  /* iFirst */
  4631,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { 1,  /* iFirst */
  4603,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { 1,  /* iFirst */
  4723,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { 1,  /* iFirst */
  4693,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { 1,  /* iFirst */
  4725,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { 1,  /* iFirst */
  4653,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { 1,  /* iFirst */
  4647,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { 1,  /* iFirst */
  4781,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { 1,  /* iFirst */
  4511,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { 1,  /* iFirst */
  3915,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { 1,  /* iFirst */
  4629,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { 1,  /* iFirst */
  4613,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { 1,  /* iFirst */
  4669,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { 1,  /* iFirst */
  4535,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { 1,  /* iFirst */
  4741,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { 1,  /* iFirst */
  4621,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { 1,  /* iFirst */
  4583,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { 1,  /* iFirst */
  4661,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { 1,  /* iFirst */
  4545,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { 1,  /* iFirst */
  4707,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { 1,  /* iFirst */
  4615,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { 1,  /* iFirst */
  4477,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { 1,  /* iFirst */
  4465,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { 1,  /* iFirst */
  4887,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { 1,  /* iFirst */
  4635,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { 1,  /* iFirst */
  4543,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { 1,  /* iFirst */
  4565,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { 1,  /* iFirst */
  4481,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { 1,  /* iFirst */
  4673,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { 1,  /* iFirst */
  4679,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { 1,  /* iFirst */
  4443,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { 1,  /* iFirst */
  4749,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { 1,  /* iFirst */
  4591,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { 1,  /* iFirst */
  4555,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { 1,  /* iFirst */
  4509,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4633], const real_T obj_Children[9266], const real_T obj_CutPoint
  [4633], const real_T obj_NodeMean[4633], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i0;
  int32_T loop_ub;
  int32_T i1;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r0;
  emxArray_real_T *r1;
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
    i0 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i0, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i0 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i0, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      node->data[i0] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i0 = X->size[0];
      i1 = loop_ub + 1;
      if (!((i1 >= 1) && (i1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i0 = (int32_T)m;
        if (!((i0 >= 1) && (i0 <= 4633))) {
          emlrtDynamicBoundsCheckR2012b(i0, 1, 4633, &e_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i0 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i0 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i0 >= 1) && (i0 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i0, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i0 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i0 >= 1) && (i0 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i0, 1, 10, &b_emlrtBCI, &b_st);
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

      i0 = node->size[0];
      i1 = 1 + loop_ub;
      if (!((i1 >= 1) && (i1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &f_emlrtBCI, &b_st);
      }

      node->data[i1 - 1] = m;
    }

    i0 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i0, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      Yfit->data[i0] = 0.0;
    }

    emxInit_int32_T(sp, &r0, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i0 = r0->size[0];
    r0->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r0, i0, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i0 = 0; i0 < loop_ub; i0++) {
      r0->data[i0] = i0;
    }

    emxInit_real_T(sp, &r1, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i0 = r1->size[0];
    r1->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r1, i0, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i0 = 0; i0 < loop_ub; i0++) {
      r1->data[i0] = obj_NodeMean[(int32_T)node->data[i0] - 1];
    }

    i0 = node->size[0];
    iv302[0] = r0->size[0];
    iv303[0] = i0;
    emlrtSubAssignSizeCheckR2012b(iv302, 1, iv303, 1, &emlrtECI, sp);
    loop_ub = r1->size[0];
    emxFree_real_T(&node);
    for (i0 = 0; i0 < loop_ub; i0++) {
      Yfit->data[r0->data[i0]] = r1->data[i0];
    }

    emxFree_real_T(&r1);
    emxFree_int32_T(&r0);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void ab_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4659], const real_T obj_Children[9318], const real_T obj_CutPoint
  [4659], const real_T obj_NodeMean[4659], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i50;
  int32_T loop_ub;
  int32_T i51;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r50;
  emxArray_real_T *r51;
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
    i50 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i50, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i50 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i50, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i50 = 0; i50 < loop_ub; i50++) {
      node->data[i50] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i50 = X->size[0];
      i51 = loop_ub + 1;
      if (!((i51 >= 1) && (i51 <= i50))) {
        emlrtDynamicBoundsCheckR2012b(i51, 1, i50, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i50 = (int32_T)m;
        if (!((i50 >= 1) && (i50 <= 4659))) {
          emlrtDynamicBoundsCheckR2012b(i50, 1, 4659, &fb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i50 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i50 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i50 >= 1) && (i50 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i50, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i50 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i50 >= 1) && (i50 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i50, 1, 10, &b_emlrtBCI, &b_st);
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

      i50 = node->size[0];
      i51 = 1 + loop_ub;
      if (!((i51 >= 1) && (i51 <= i50))) {
        emlrtDynamicBoundsCheckR2012b(i51, 1, i50, &f_emlrtBCI, &b_st);
      }

      node->data[i51 - 1] = m;
    }

    i50 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i50, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i50 = 0; i50 < loop_ub; i50++) {
      Yfit->data[i50] = 0.0;
    }

    emxInit_int32_T(sp, &r50, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i50 = r50->size[0];
    r50->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r50, i50, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i50 = 0; i50 < loop_ub; i50++) {
      r50->data[i50] = i50;
    }

    emxInit_real_T(sp, &r51, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i50 = r51->size[0];
    r51->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r51, i50, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i50 = 0; i50 < loop_ub; i50++) {
      r51->data[i50] = obj_NodeMean[(int32_T)node->data[i50] - 1];
    }

    i50 = node->size[0];
    iv352[0] = r50->size[0];
    iv353[0] = i50;
    emlrtSubAssignSizeCheckR2012b(iv352, 1, iv353, 1, &emlrtECI, sp);
    loop_ub = r51->size[0];
    emxFree_real_T(&node);
    for (i50 = 0; i50 < loop_ub; i50++) {
      Yfit->data[r50->data[i50]] = r51->data[i50];
    }

    emxFree_real_T(&r51);
    emxFree_int32_T(&r50);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void ac_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4629], const real_T obj_Children[9258], const real_T obj_CutPoint
  [4629], const real_T obj_NodeMean[4629], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i100;
  int32_T loop_ub;
  int32_T i101;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r100;
  emxArray_real_T *r101;
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
    i100 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i100, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i100 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i100, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i100 = 0; i100 < loop_ub; i100++) {
      node->data[i100] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i100 = X->size[0];
      i101 = loop_ub + 1;
      if (!((i101 >= 1) && (i101 <= i100))) {
        emlrtDynamicBoundsCheckR2012b(i101, 1, i100, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i100 = (int32_T)m;
        if (!((i100 >= 1) && (i100 <= 4629))) {
          emlrtDynamicBoundsCheckR2012b(i100, 1, 4629, &fc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i100 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i100 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i100 >= 1) && (i100 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i100, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i100 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i100 >= 1) && (i100 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i100, 1, 10, &b_emlrtBCI, &b_st);
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

      i100 = node->size[0];
      i101 = 1 + loop_ub;
      if (!((i101 >= 1) && (i101 <= i100))) {
        emlrtDynamicBoundsCheckR2012b(i101, 1, i100, &f_emlrtBCI, &b_st);
      }

      node->data[i101 - 1] = m;
    }

    i100 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i100, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i100 = 0; i100 < loop_ub; i100++) {
      Yfit->data[i100] = 0.0;
    }

    emxInit_int32_T(sp, &r100, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i100 = r100->size[0];
    r100->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r100, i100, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i100 = 0; i100 < loop_ub; i100++) {
      r100->data[i100] = i100;
    }

    emxInit_real_T(sp, &r101, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i100 = r101->size[0];
    r101->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r101, i100, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i100 = 0; i100 < loop_ub; i100++) {
      r101->data[i100] = obj_NodeMean[(int32_T)node->data[i100] - 1];
    }

    i100 = node->size[0];
    iv402[0] = r100->size[0];
    iv403[0] = i100;
    emlrtSubAssignSizeCheckR2012b(iv402, 1, iv403, 1, &emlrtECI, sp);
    loop_ub = r101->size[0];
    emxFree_real_T(&node);
    for (i100 = 0; i100 < loop_ub; i100++) {
      Yfit->data[r100->data[i100]] = r101->data[i100];
    }

    emxFree_real_T(&r101);
    emxFree_int32_T(&r100);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void b_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4619], const real_T obj_Children[9238], const real_T obj_CutPoint
  [4619], const real_T obj_NodeMean[4619], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i2;
  int32_T loop_ub;
  int32_T i3;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r2;
  emxArray_real_T *r3;
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
    i2 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i2, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i2 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i2, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i2 = 0; i2 < loop_ub; i2++) {
      node->data[i2] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i2 = X->size[0];
      i3 = loop_ub + 1;
      if (!((i3 >= 1) && (i3 <= i2))) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i2 = (int32_T)m;
        if (!((i2 >= 1) && (i2 <= 4619))) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, 4619, &g_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i2 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i2 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i2 >= 1) && (i2 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i2 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i2 >= 1) && (i2 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, 10, &b_emlrtBCI, &b_st);
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

      i2 = node->size[0];
      i3 = 1 + loop_ub;
      if (!((i3 >= 1) && (i3 <= i2))) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &f_emlrtBCI, &b_st);
      }

      node->data[i3 - 1] = m;
    }

    i2 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i2, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i2 = 0; i2 < loop_ub; i2++) {
      Yfit->data[i2] = 0.0;
    }

    emxInit_int32_T(sp, &r2, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i2 = r2->size[0];
    r2->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r2, i2, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i2 = 0; i2 < loop_ub; i2++) {
      r2->data[i2] = i2;
    }

    emxInit_real_T(sp, &r3, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i2 = r3->size[0];
    r3->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r3, i2, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i2 = 0; i2 < loop_ub; i2++) {
      r3->data[i2] = obj_NodeMean[(int32_T)node->data[i2] - 1];
    }

    i2 = node->size[0];
    iv304[0] = r2->size[0];
    iv305[0] = i2;
    emlrtSubAssignSizeCheckR2012b(iv304, 1, iv305, 1, &emlrtECI, sp);
    loop_ub = r3->size[0];
    emxFree_real_T(&node);
    for (i2 = 0; i2 < loop_ub; i2++) {
      Yfit->data[r2->data[i2]] = r3->data[i2];
    }

    emxFree_real_T(&r3);
    emxFree_int32_T(&r2);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void bb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4625], const real_T obj_Children[9250], const real_T obj_CutPoint
  [4625], const real_T obj_NodeMean[4625], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i52;
  int32_T loop_ub;
  int32_T i53;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r52;
  emxArray_real_T *r53;
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
    i52 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i52, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i52 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i52, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i52 = 0; i52 < loop_ub; i52++) {
      node->data[i52] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i52 = X->size[0];
      i53 = loop_ub + 1;
      if (!((i53 >= 1) && (i53 <= i52))) {
        emlrtDynamicBoundsCheckR2012b(i53, 1, i52, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i52 = (int32_T)m;
        if (!((i52 >= 1) && (i52 <= 4625))) {
          emlrtDynamicBoundsCheckR2012b(i52, 1, 4625, &gb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i52 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i52 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i52 >= 1) && (i52 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i52, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i52 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i52 >= 1) && (i52 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i52, 1, 10, &b_emlrtBCI, &b_st);
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

      i52 = node->size[0];
      i53 = 1 + loop_ub;
      if (!((i53 >= 1) && (i53 <= i52))) {
        emlrtDynamicBoundsCheckR2012b(i53, 1, i52, &f_emlrtBCI, &b_st);
      }

      node->data[i53 - 1] = m;
    }

    i52 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i52, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i52 = 0; i52 < loop_ub; i52++) {
      Yfit->data[i52] = 0.0;
    }

    emxInit_int32_T(sp, &r52, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i52 = r52->size[0];
    r52->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r52, i52, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i52 = 0; i52 < loop_ub; i52++) {
      r52->data[i52] = i52;
    }

    emxInit_real_T(sp, &r53, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i52 = r53->size[0];
    r53->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r53, i52, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i52 = 0; i52 < loop_ub; i52++) {
      r53->data[i52] = obj_NodeMean[(int32_T)node->data[i52] - 1];
    }

    i52 = node->size[0];
    iv354[0] = r52->size[0];
    iv355[0] = i52;
    emlrtSubAssignSizeCheckR2012b(iv354, 1, iv355, 1, &emlrtECI, sp);
    loop_ub = r53->size[0];
    emxFree_real_T(&node);
    for (i52 = 0; i52 < loop_ub; i52++) {
      Yfit->data[r52->data[i52]] = r53->data[i52];
    }

    emxFree_real_T(&r53);
    emxFree_int32_T(&r52);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void bc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4613], const real_T obj_Children[9226], const real_T obj_CutPoint
  [4613], const real_T obj_NodeMean[4613], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i102;
  int32_T loop_ub;
  int32_T i103;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r102;
  emxArray_real_T *r103;
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
    i102 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i102, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i102 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i102, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i102 = 0; i102 < loop_ub; i102++) {
      node->data[i102] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i102 = X->size[0];
      i103 = loop_ub + 1;
      if (!((i103 >= 1) && (i103 <= i102))) {
        emlrtDynamicBoundsCheckR2012b(i103, 1, i102, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i102 = (int32_T)m;
        if (!((i102 >= 1) && (i102 <= 4613))) {
          emlrtDynamicBoundsCheckR2012b(i102, 1, 4613, &gc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i102 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i102 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i102 >= 1) && (i102 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i102, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i102 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i102 >= 1) && (i102 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i102, 1, 10, &b_emlrtBCI, &b_st);
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

      i102 = node->size[0];
      i103 = 1 + loop_ub;
      if (!((i103 >= 1) && (i103 <= i102))) {
        emlrtDynamicBoundsCheckR2012b(i103, 1, i102, &f_emlrtBCI, &b_st);
      }

      node->data[i103 - 1] = m;
    }

    i102 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i102, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i102 = 0; i102 < loop_ub; i102++) {
      Yfit->data[i102] = 0.0;
    }

    emxInit_int32_T(sp, &r102, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i102 = r102->size[0];
    r102->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r102, i102, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i102 = 0; i102 < loop_ub; i102++) {
      r102->data[i102] = i102;
    }

    emxInit_real_T(sp, &r103, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i102 = r103->size[0];
    r103->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r103, i102, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i102 = 0; i102 < loop_ub; i102++) {
      r103->data[i102] = obj_NodeMean[(int32_T)node->data[i102] - 1];
    }

    i102 = node->size[0];
    iv404[0] = r102->size[0];
    iv405[0] = i102;
    emlrtSubAssignSizeCheckR2012b(iv404, 1, iv405, 1, &emlrtECI, sp);
    loop_ub = r103->size[0];
    emxFree_real_T(&node);
    for (i102 = 0; i102 < loop_ub; i102++) {
      Yfit->data[r102->data[i102]] = r103->data[i102];
    }

    emxFree_real_T(&r103);
    emxFree_int32_T(&r102);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void c_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4789], const real_T obj_Children[9578], const real_T obj_CutPoint
  [4789], const real_T obj_NodeMean[4789], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i4;
  int32_T loop_ub;
  int32_T i5;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r4;
  emxArray_real_T *r5;
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
    i4 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i4, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i4 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i4, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i4 = 0; i4 < loop_ub; i4++) {
      node->data[i4] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i4 = X->size[0];
      i5 = loop_ub + 1;
      if (!((i5 >= 1) && (i5 <= i4))) {
        emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i4 = (int32_T)m;
        if (!((i4 >= 1) && (i4 <= 4789))) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, 4789, &h_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i4 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i4 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i4 >= 1) && (i4 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i4 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i4 >= 1) && (i4 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i4, 1, 10, &b_emlrtBCI, &b_st);
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

      i4 = node->size[0];
      i5 = 1 + loop_ub;
      if (!((i5 >= 1) && (i5 <= i4))) {
        emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &f_emlrtBCI, &b_st);
      }

      node->data[i5 - 1] = m;
    }

    i4 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i4, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i4 = 0; i4 < loop_ub; i4++) {
      Yfit->data[i4] = 0.0;
    }

    emxInit_int32_T(sp, &r4, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i4 = r4->size[0];
    r4->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r4, i4, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i4 = 0; i4 < loop_ub; i4++) {
      r4->data[i4] = i4;
    }

    emxInit_real_T(sp, &r5, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i4 = r5->size[0];
    r5->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r5, i4, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i4 = 0; i4 < loop_ub; i4++) {
      r5->data[i4] = obj_NodeMean[(int32_T)node->data[i4] - 1];
    }

    i4 = node->size[0];
    iv306[0] = r4->size[0];
    iv307[0] = i4;
    emlrtSubAssignSizeCheckR2012b(iv306, 1, iv307, 1, &emlrtECI, sp);
    loop_ub = r5->size[0];
    emxFree_real_T(&node);
    for (i4 = 0; i4 < loop_ub; i4++) {
      Yfit->data[r4->data[i4]] = r5->data[i4];
    }

    emxFree_real_T(&r5);
    emxFree_int32_T(&r4);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void cb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4639], const real_T obj_Children[9278], const real_T obj_CutPoint
  [4639], const real_T obj_NodeMean[4639], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i54;
  int32_T loop_ub;
  int32_T i55;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r54;
  emxArray_real_T *r55;
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
    i54 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i54, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i54 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i54, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i54 = 0; i54 < loop_ub; i54++) {
      node->data[i54] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i54 = X->size[0];
      i55 = loop_ub + 1;
      if (!((i55 >= 1) && (i55 <= i54))) {
        emlrtDynamicBoundsCheckR2012b(i55, 1, i54, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i54 = (int32_T)m;
        if (!((i54 >= 1) && (i54 <= 4639))) {
          emlrtDynamicBoundsCheckR2012b(i54, 1, 4639, &hb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i54 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i54 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i54 >= 1) && (i54 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i54, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i54 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i54 >= 1) && (i54 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i54, 1, 10, &b_emlrtBCI, &b_st);
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

      i54 = node->size[0];
      i55 = 1 + loop_ub;
      if (!((i55 >= 1) && (i55 <= i54))) {
        emlrtDynamicBoundsCheckR2012b(i55, 1, i54, &f_emlrtBCI, &b_st);
      }

      node->data[i55 - 1] = m;
    }

    i54 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i54, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i54 = 0; i54 < loop_ub; i54++) {
      Yfit->data[i54] = 0.0;
    }

    emxInit_int32_T(sp, &r54, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i54 = r54->size[0];
    r54->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r54, i54, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i54 = 0; i54 < loop_ub; i54++) {
      r54->data[i54] = i54;
    }

    emxInit_real_T(sp, &r55, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i54 = r55->size[0];
    r55->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r55, i54, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i54 = 0; i54 < loop_ub; i54++) {
      r55->data[i54] = obj_NodeMean[(int32_T)node->data[i54] - 1];
    }

    i54 = node->size[0];
    iv356[0] = r54->size[0];
    iv357[0] = i54;
    emlrtSubAssignSizeCheckR2012b(iv356, 1, iv357, 1, &emlrtECI, sp);
    loop_ub = r55->size[0];
    emxFree_real_T(&node);
    for (i54 = 0; i54 < loop_ub; i54++) {
      Yfit->data[r54->data[i54]] = r55->data[i54];
    }

    emxFree_real_T(&r55);
    emxFree_int32_T(&r54);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void cc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4669], const real_T obj_Children[9338], const real_T obj_CutPoint
  [4669], const real_T obj_NodeMean[4669], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i104;
  int32_T loop_ub;
  int32_T i105;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r104;
  emxArray_real_T *r105;
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
    i104 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i104, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i104 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i104, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i104 = 0; i104 < loop_ub; i104++) {
      node->data[i104] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i104 = X->size[0];
      i105 = loop_ub + 1;
      if (!((i105 >= 1) && (i105 <= i104))) {
        emlrtDynamicBoundsCheckR2012b(i105, 1, i104, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i104 = (int32_T)m;
        if (!((i104 >= 1) && (i104 <= 4669))) {
          emlrtDynamicBoundsCheckR2012b(i104, 1, 4669, &hc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i104 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i104 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i104 >= 1) && (i104 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i104, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i104 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i104 >= 1) && (i104 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i104, 1, 10, &b_emlrtBCI, &b_st);
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

      i104 = node->size[0];
      i105 = 1 + loop_ub;
      if (!((i105 >= 1) && (i105 <= i104))) {
        emlrtDynamicBoundsCheckR2012b(i105, 1, i104, &f_emlrtBCI, &b_st);
      }

      node->data[i105 - 1] = m;
    }

    i104 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i104, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i104 = 0; i104 < loop_ub; i104++) {
      Yfit->data[i104] = 0.0;
    }

    emxInit_int32_T(sp, &r104, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i104 = r104->size[0];
    r104->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r104, i104, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i104 = 0; i104 < loop_ub; i104++) {
      r104->data[i104] = i104;
    }

    emxInit_real_T(sp, &r105, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i104 = r105->size[0];
    r105->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r105, i104, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i104 = 0; i104 < loop_ub; i104++) {
      r105->data[i104] = obj_NodeMean[(int32_T)node->data[i104] - 1];
    }

    i104 = node->size[0];
    iv406[0] = r104->size[0];
    iv407[0] = i104;
    emlrtSubAssignSizeCheckR2012b(iv406, 1, iv407, 1, &emlrtECI, sp);
    loop_ub = r105->size[0];
    emxFree_real_T(&node);
    for (i104 = 0; i104 < loop_ub; i104++) {
      Yfit->data[r104->data[i104]] = r105->data[i104];
    }

    emxFree_real_T(&r105);
    emxFree_int32_T(&r104);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void d_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4567], const real_T obj_Children[9134], const real_T obj_CutPoint
  [4567], const real_T obj_NodeMean[4567], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i6;
  int32_T loop_ub;
  int32_T i7;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r6;
  emxArray_real_T *r7;
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
    i6 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i6, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i6 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i6, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i6 = 0; i6 < loop_ub; i6++) {
      node->data[i6] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i6 = X->size[0];
      i7 = loop_ub + 1;
      if (!((i7 >= 1) && (i7 <= i6))) {
        emlrtDynamicBoundsCheckR2012b(i7, 1, i6, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i6 = (int32_T)m;
        if (!((i6 >= 1) && (i6 <= 4567))) {
          emlrtDynamicBoundsCheckR2012b(i6, 1, 4567, &i_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i6 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i6 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i6 >= 1) && (i6 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i6 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i6 >= 1) && (i6 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i6, 1, 10, &b_emlrtBCI, &b_st);
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

      i6 = node->size[0];
      i7 = 1 + loop_ub;
      if (!((i7 >= 1) && (i7 <= i6))) {
        emlrtDynamicBoundsCheckR2012b(i7, 1, i6, &f_emlrtBCI, &b_st);
      }

      node->data[i7 - 1] = m;
    }

    i6 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i6, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i6 = 0; i6 < loop_ub; i6++) {
      Yfit->data[i6] = 0.0;
    }

    emxInit_int32_T(sp, &r6, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i6 = r6->size[0];
    r6->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r6, i6, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i6 = 0; i6 < loop_ub; i6++) {
      r6->data[i6] = i6;
    }

    emxInit_real_T(sp, &r7, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i6 = r7->size[0];
    r7->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r7, i6, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i6 = 0; i6 < loop_ub; i6++) {
      r7->data[i6] = obj_NodeMean[(int32_T)node->data[i6] - 1];
    }

    i6 = node->size[0];
    iv308[0] = r6->size[0];
    iv309[0] = i6;
    emlrtSubAssignSizeCheckR2012b(iv308, 1, iv309, 1, &emlrtECI, sp);
    loop_ub = r7->size[0];
    emxFree_real_T(&node);
    for (i6 = 0; i6 < loop_ub; i6++) {
      Yfit->data[r6->data[i6]] = r7->data[i6];
    }

    emxFree_real_T(&r7);
    emxFree_int32_T(&r6);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void db_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4677], const real_T obj_Children[9354], const real_T obj_CutPoint
  [4677], const real_T obj_NodeMean[4677], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i56;
  int32_T loop_ub;
  int32_T i57;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r56;
  emxArray_real_T *r57;
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
    i56 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i56, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i56 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i56, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i56 = 0; i56 < loop_ub; i56++) {
      node->data[i56] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i56 = X->size[0];
      i57 = loop_ub + 1;
      if (!((i57 >= 1) && (i57 <= i56))) {
        emlrtDynamicBoundsCheckR2012b(i57, 1, i56, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i56 = (int32_T)m;
        if (!((i56 >= 1) && (i56 <= 4677))) {
          emlrtDynamicBoundsCheckR2012b(i56, 1, 4677, &ib_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i56 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i56 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i56 >= 1) && (i56 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i56, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i56 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i56 >= 1) && (i56 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i56, 1, 10, &b_emlrtBCI, &b_st);
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

      i56 = node->size[0];
      i57 = 1 + loop_ub;
      if (!((i57 >= 1) && (i57 <= i56))) {
        emlrtDynamicBoundsCheckR2012b(i57, 1, i56, &f_emlrtBCI, &b_st);
      }

      node->data[i57 - 1] = m;
    }

    i56 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i56, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i56 = 0; i56 < loop_ub; i56++) {
      Yfit->data[i56] = 0.0;
    }

    emxInit_int32_T(sp, &r56, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i56 = r56->size[0];
    r56->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r56, i56, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i56 = 0; i56 < loop_ub; i56++) {
      r56->data[i56] = i56;
    }

    emxInit_real_T(sp, &r57, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i56 = r57->size[0];
    r57->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r57, i56, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i56 = 0; i56 < loop_ub; i56++) {
      r57->data[i56] = obj_NodeMean[(int32_T)node->data[i56] - 1];
    }

    i56 = node->size[0];
    iv358[0] = r56->size[0];
    iv359[0] = i56;
    emlrtSubAssignSizeCheckR2012b(iv358, 1, iv359, 1, &emlrtECI, sp);
    loop_ub = r57->size[0];
    emxFree_real_T(&node);
    for (i56 = 0; i56 < loop_ub; i56++) {
      Yfit->data[r56->data[i56]] = r57->data[i56];
    }

    emxFree_real_T(&r57);
    emxFree_int32_T(&r56);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void dc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4535], const real_T obj_Children[9070], const real_T obj_CutPoint
  [4535], const real_T obj_NodeMean[4535], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i106;
  int32_T loop_ub;
  int32_T i107;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r106;
  emxArray_real_T *r107;
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
    i106 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i106, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i106 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i106, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i106 = 0; i106 < loop_ub; i106++) {
      node->data[i106] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i106 = X->size[0];
      i107 = loop_ub + 1;
      if (!((i107 >= 1) && (i107 <= i106))) {
        emlrtDynamicBoundsCheckR2012b(i107, 1, i106, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i106 = (int32_T)m;
        if (!((i106 >= 1) && (i106 <= 4535))) {
          emlrtDynamicBoundsCheckR2012b(i106, 1, 4535, &ic_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i106 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i106 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i106 >= 1) && (i106 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i106, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i106 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i106 >= 1) && (i106 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i106, 1, 10, &b_emlrtBCI, &b_st);
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

      i106 = node->size[0];
      i107 = 1 + loop_ub;
      if (!((i107 >= 1) && (i107 <= i106))) {
        emlrtDynamicBoundsCheckR2012b(i107, 1, i106, &f_emlrtBCI, &b_st);
      }

      node->data[i107 - 1] = m;
    }

    i106 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i106, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i106 = 0; i106 < loop_ub; i106++) {
      Yfit->data[i106] = 0.0;
    }

    emxInit_int32_T(sp, &r106, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i106 = r106->size[0];
    r106->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r106, i106, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i106 = 0; i106 < loop_ub; i106++) {
      r106->data[i106] = i106;
    }

    emxInit_real_T(sp, &r107, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i106 = r107->size[0];
    r107->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r107, i106, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i106 = 0; i106 < loop_ub; i106++) {
      r107->data[i106] = obj_NodeMean[(int32_T)node->data[i106] - 1];
    }

    i106 = node->size[0];
    iv408[0] = r106->size[0];
    iv409[0] = i106;
    emlrtSubAssignSizeCheckR2012b(iv408, 1, iv409, 1, &emlrtECI, sp);
    loop_ub = r107->size[0];
    emxFree_real_T(&node);
    for (i106 = 0; i106 < loop_ub; i106++) {
      Yfit->data[r106->data[i106]] = r107->data[i106];
    }

    emxFree_real_T(&r107);
    emxFree_int32_T(&r106);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void e_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4577], const real_T obj_Children[9154], const real_T obj_CutPoint
  [4577], const real_T obj_NodeMean[4577], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i8;
  int32_T loop_ub;
  int32_T i9;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r8;
  emxArray_real_T *r9;
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
    i8 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i8, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i8 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i8, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i8 = 0; i8 < loop_ub; i8++) {
      node->data[i8] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i8 = X->size[0];
      i9 = loop_ub + 1;
      if (!((i9 >= 1) && (i9 <= i8))) {
        emlrtDynamicBoundsCheckR2012b(i9, 1, i8, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i8 = (int32_T)m;
        if (!((i8 >= 1) && (i8 <= 4577))) {
          emlrtDynamicBoundsCheckR2012b(i8, 1, 4577, &j_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i8 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i8 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i8 >= 1) && (i8 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i8, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i8 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i8 >= 1) && (i8 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i8, 1, 10, &b_emlrtBCI, &b_st);
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

      i8 = node->size[0];
      i9 = 1 + loop_ub;
      if (!((i9 >= 1) && (i9 <= i8))) {
        emlrtDynamicBoundsCheckR2012b(i9, 1, i8, &f_emlrtBCI, &b_st);
      }

      node->data[i9 - 1] = m;
    }

    i8 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i8, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i8 = 0; i8 < loop_ub; i8++) {
      Yfit->data[i8] = 0.0;
    }

    emxInit_int32_T(sp, &r8, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i8 = r8->size[0];
    r8->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r8, i8, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i8 = 0; i8 < loop_ub; i8++) {
      r8->data[i8] = i8;
    }

    emxInit_real_T(sp, &r9, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i8 = r9->size[0];
    r9->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r9, i8, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i8 = 0; i8 < loop_ub; i8++) {
      r9->data[i8] = obj_NodeMean[(int32_T)node->data[i8] - 1];
    }

    i8 = node->size[0];
    iv310[0] = r8->size[0];
    iv311[0] = i8;
    emlrtSubAssignSizeCheckR2012b(iv310, 1, iv311, 1, &emlrtECI, sp);
    loop_ub = r9->size[0];
    emxFree_real_T(&node);
    for (i8 = 0; i8 < loop_ub; i8++) {
      Yfit->data[r8->data[i8]] = r9->data[i8];
    }

    emxFree_real_T(&r9);
    emxFree_int32_T(&r8);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void eb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4575], const real_T obj_Children[9150], const real_T obj_CutPoint
  [4575], const real_T obj_NodeMean[4575], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i58;
  int32_T loop_ub;
  int32_T i59;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r58;
  emxArray_real_T *r59;
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
    i58 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i58, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i58 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i58, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i58 = 0; i58 < loop_ub; i58++) {
      node->data[i58] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i58 = X->size[0];
      i59 = loop_ub + 1;
      if (!((i59 >= 1) && (i59 <= i58))) {
        emlrtDynamicBoundsCheckR2012b(i59, 1, i58, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i58 = (int32_T)m;
        if (!((i58 >= 1) && (i58 <= 4575))) {
          emlrtDynamicBoundsCheckR2012b(i58, 1, 4575, &jb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i58 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i58 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i58 >= 1) && (i58 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i58, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i58 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i58 >= 1) && (i58 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i58, 1, 10, &b_emlrtBCI, &b_st);
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

      i58 = node->size[0];
      i59 = 1 + loop_ub;
      if (!((i59 >= 1) && (i59 <= i58))) {
        emlrtDynamicBoundsCheckR2012b(i59, 1, i58, &f_emlrtBCI, &b_st);
      }

      node->data[i59 - 1] = m;
    }

    i58 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i58, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i58 = 0; i58 < loop_ub; i58++) {
      Yfit->data[i58] = 0.0;
    }

    emxInit_int32_T(sp, &r58, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i58 = r58->size[0];
    r58->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r58, i58, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i58 = 0; i58 < loop_ub; i58++) {
      r58->data[i58] = i58;
    }

    emxInit_real_T(sp, &r59, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i58 = r59->size[0];
    r59->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r59, i58, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i58 = 0; i58 < loop_ub; i58++) {
      r59->data[i58] = obj_NodeMean[(int32_T)node->data[i58] - 1];
    }

    i58 = node->size[0];
    iv360[0] = r58->size[0];
    iv361[0] = i58;
    emlrtSubAssignSizeCheckR2012b(iv360, 1, iv361, 1, &emlrtECI, sp);
    loop_ub = r59->size[0];
    emxFree_real_T(&node);
    for (i58 = 0; i58 < loop_ub; i58++) {
      Yfit->data[r58->data[i58]] = r59->data[i58];
    }

    emxFree_real_T(&r59);
    emxFree_int32_T(&r58);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void ec_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4741], const real_T obj_Children[9482], const real_T obj_CutPoint
  [4741], const real_T obj_NodeMean[4741], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i108;
  int32_T loop_ub;
  int32_T i109;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r108;
  emxArray_real_T *r109;
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
    i108 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i108, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i108 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i108, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i108 = 0; i108 < loop_ub; i108++) {
      node->data[i108] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i108 = X->size[0];
      i109 = loop_ub + 1;
      if (!((i109 >= 1) && (i109 <= i108))) {
        emlrtDynamicBoundsCheckR2012b(i109, 1, i108, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i108 = (int32_T)m;
        if (!((i108 >= 1) && (i108 <= 4741))) {
          emlrtDynamicBoundsCheckR2012b(i108, 1, 4741, &jc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i108 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i108 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i108 >= 1) && (i108 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i108, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i108 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i108 >= 1) && (i108 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i108, 1, 10, &b_emlrtBCI, &b_st);
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

      i108 = node->size[0];
      i109 = 1 + loop_ub;
      if (!((i109 >= 1) && (i109 <= i108))) {
        emlrtDynamicBoundsCheckR2012b(i109, 1, i108, &f_emlrtBCI, &b_st);
      }

      node->data[i109 - 1] = m;
    }

    i108 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i108, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i108 = 0; i108 < loop_ub; i108++) {
      Yfit->data[i108] = 0.0;
    }

    emxInit_int32_T(sp, &r108, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i108 = r108->size[0];
    r108->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r108, i108, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i108 = 0; i108 < loop_ub; i108++) {
      r108->data[i108] = i108;
    }

    emxInit_real_T(sp, &r109, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i108 = r109->size[0];
    r109->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r109, i108, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i108 = 0; i108 < loop_ub; i108++) {
      r109->data[i108] = obj_NodeMean[(int32_T)node->data[i108] - 1];
    }

    i108 = node->size[0];
    iv410[0] = r108->size[0];
    iv411[0] = i108;
    emlrtSubAssignSizeCheckR2012b(iv410, 1, iv411, 1, &emlrtECI, sp);
    loop_ub = r109->size[0];
    emxFree_real_T(&node);
    for (i108 = 0; i108 < loop_ub; i108++) {
      Yfit->data[r108->data[i108]] = r109->data[i108];
    }

    emxFree_real_T(&r109);
    emxFree_int32_T(&r108);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void f_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4637], const real_T obj_Children[9274], const real_T obj_CutPoint
  [4637], const real_T obj_NodeMean[4637], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i10;
  int32_T loop_ub;
  int32_T i11;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r10;
  emxArray_real_T *r11;
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
    i10 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i10, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i10 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i10, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i10 = 0; i10 < loop_ub; i10++) {
      node->data[i10] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i10 = X->size[0];
      i11 = loop_ub + 1;
      if (!((i11 >= 1) && (i11 <= i10))) {
        emlrtDynamicBoundsCheckR2012b(i11, 1, i10, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i10 = (int32_T)m;
        if (!((i10 >= 1) && (i10 <= 4637))) {
          emlrtDynamicBoundsCheckR2012b(i10, 1, 4637, &k_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i10 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i10 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i10 >= 1) && (i10 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i10, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i10 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i10 >= 1) && (i10 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i10, 1, 10, &b_emlrtBCI, &b_st);
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

      i10 = node->size[0];
      i11 = 1 + loop_ub;
      if (!((i11 >= 1) && (i11 <= i10))) {
        emlrtDynamicBoundsCheckR2012b(i11, 1, i10, &f_emlrtBCI, &b_st);
      }

      node->data[i11 - 1] = m;
    }

    i10 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i10, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i10 = 0; i10 < loop_ub; i10++) {
      Yfit->data[i10] = 0.0;
    }

    emxInit_int32_T(sp, &r10, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i10 = r10->size[0];
    r10->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r10, i10, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i10 = 0; i10 < loop_ub; i10++) {
      r10->data[i10] = i10;
    }

    emxInit_real_T(sp, &r11, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i10 = r11->size[0];
    r11->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r11, i10, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i10 = 0; i10 < loop_ub; i10++) {
      r11->data[i10] = obj_NodeMean[(int32_T)node->data[i10] - 1];
    }

    i10 = node->size[0];
    iv312[0] = r10->size[0];
    iv313[0] = i10;
    emlrtSubAssignSizeCheckR2012b(iv312, 1, iv313, 1, &emlrtECI, sp);
    loop_ub = r11->size[0];
    emxFree_real_T(&node);
    for (i10 = 0; i10 < loop_ub; i10++) {
      Yfit->data[r10->data[i10]] = r11->data[i10];
    }

    emxFree_real_T(&r11);
    emxFree_int32_T(&r10);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void fb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4563], const real_T obj_Children[9126], const real_T obj_CutPoint
  [4563], const real_T obj_NodeMean[4563], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i60;
  int32_T loop_ub;
  int32_T i61;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r60;
  emxArray_real_T *r61;
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
    i60 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i60, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i60 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i60, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i60 = 0; i60 < loop_ub; i60++) {
      node->data[i60] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i60 = X->size[0];
      i61 = loop_ub + 1;
      if (!((i61 >= 1) && (i61 <= i60))) {
        emlrtDynamicBoundsCheckR2012b(i61, 1, i60, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i60 = (int32_T)m;
        if (!((i60 >= 1) && (i60 <= 4563))) {
          emlrtDynamicBoundsCheckR2012b(i60, 1, 4563, &kb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i60 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i60 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i60 >= 1) && (i60 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i60, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i60 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i60 >= 1) && (i60 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i60, 1, 10, &b_emlrtBCI, &b_st);
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

      i60 = node->size[0];
      i61 = 1 + loop_ub;
      if (!((i61 >= 1) && (i61 <= i60))) {
        emlrtDynamicBoundsCheckR2012b(i61, 1, i60, &f_emlrtBCI, &b_st);
      }

      node->data[i61 - 1] = m;
    }

    i60 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i60, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i60 = 0; i60 < loop_ub; i60++) {
      Yfit->data[i60] = 0.0;
    }

    emxInit_int32_T(sp, &r60, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i60 = r60->size[0];
    r60->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r60, i60, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i60 = 0; i60 < loop_ub; i60++) {
      r60->data[i60] = i60;
    }

    emxInit_real_T(sp, &r61, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i60 = r61->size[0];
    r61->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r61, i60, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i60 = 0; i60 < loop_ub; i60++) {
      r61->data[i60] = obj_NodeMean[(int32_T)node->data[i60] - 1];
    }

    i60 = node->size[0];
    iv362[0] = r60->size[0];
    iv363[0] = i60;
    emlrtSubAssignSizeCheckR2012b(iv362, 1, iv363, 1, &emlrtECI, sp);
    loop_ub = r61->size[0];
    emxFree_real_T(&node);
    for (i60 = 0; i60 < loop_ub; i60++) {
      Yfit->data[r60->data[i60]] = r61->data[i60];
    }

    emxFree_real_T(&r61);
    emxFree_int32_T(&r60);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void fc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4621], const real_T obj_Children[9242], const real_T obj_CutPoint
  [4621], const real_T obj_NodeMean[4621], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i110;
  int32_T loop_ub;
  int32_T i111;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r110;
  emxArray_real_T *r111;
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
    i110 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i110, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i110 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i110, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i110 = 0; i110 < loop_ub; i110++) {
      node->data[i110] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i110 = X->size[0];
      i111 = loop_ub + 1;
      if (!((i111 >= 1) && (i111 <= i110))) {
        emlrtDynamicBoundsCheckR2012b(i111, 1, i110, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i110 = (int32_T)m;
        if (!((i110 >= 1) && (i110 <= 4621))) {
          emlrtDynamicBoundsCheckR2012b(i110, 1, 4621, &kc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i110 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i110 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i110 >= 1) && (i110 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i110, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i110 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i110 >= 1) && (i110 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i110, 1, 10, &b_emlrtBCI, &b_st);
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

      i110 = node->size[0];
      i111 = 1 + loop_ub;
      if (!((i111 >= 1) && (i111 <= i110))) {
        emlrtDynamicBoundsCheckR2012b(i111, 1, i110, &f_emlrtBCI, &b_st);
      }

      node->data[i111 - 1] = m;
    }

    i110 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i110, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i110 = 0; i110 < loop_ub; i110++) {
      Yfit->data[i110] = 0.0;
    }

    emxInit_int32_T(sp, &r110, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i110 = r110->size[0];
    r110->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r110, i110, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i110 = 0; i110 < loop_ub; i110++) {
      r110->data[i110] = i110;
    }

    emxInit_real_T(sp, &r111, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i110 = r111->size[0];
    r111->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r111, i110, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i110 = 0; i110 < loop_ub; i110++) {
      r111->data[i110] = obj_NodeMean[(int32_T)node->data[i110] - 1];
    }

    i110 = node->size[0];
    iv412[0] = r110->size[0];
    iv413[0] = i110;
    emlrtSubAssignSizeCheckR2012b(iv412, 1, iv413, 1, &emlrtECI, sp);
    loop_ub = r111->size[0];
    emxFree_real_T(&node);
    for (i110 = 0; i110 < loop_ub; i110++) {
      Yfit->data[r110->data[i110]] = r111->data[i110];
    }

    emxFree_real_T(&r111);
    emxFree_int32_T(&r110);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void g_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4435], const real_T obj_Children[8870], const real_T obj_CutPoint
  [4435], const real_T obj_NodeMean[4435], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i12;
  int32_T loop_ub;
  int32_T i13;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r12;
  emxArray_real_T *r13;
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
    i12 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i12, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i12 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i12, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i12 = 0; i12 < loop_ub; i12++) {
      node->data[i12] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i12 = X->size[0];
      i13 = loop_ub + 1;
      if (!((i13 >= 1) && (i13 <= i12))) {
        emlrtDynamicBoundsCheckR2012b(i13, 1, i12, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i12 = (int32_T)m;
        if (!((i12 >= 1) && (i12 <= 4435))) {
          emlrtDynamicBoundsCheckR2012b(i12, 1, 4435, &l_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i12 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i12 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i12 >= 1) && (i12 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i12, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i12 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i12 >= 1) && (i12 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i12, 1, 10, &b_emlrtBCI, &b_st);
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

      i12 = node->size[0];
      i13 = 1 + loop_ub;
      if (!((i13 >= 1) && (i13 <= i12))) {
        emlrtDynamicBoundsCheckR2012b(i13, 1, i12, &f_emlrtBCI, &b_st);
      }

      node->data[i13 - 1] = m;
    }

    i12 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i12, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i12 = 0; i12 < loop_ub; i12++) {
      Yfit->data[i12] = 0.0;
    }

    emxInit_int32_T(sp, &r12, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i12 = r12->size[0];
    r12->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r12, i12, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i12 = 0; i12 < loop_ub; i12++) {
      r12->data[i12] = i12;
    }

    emxInit_real_T(sp, &r13, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i12 = r13->size[0];
    r13->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r13, i12, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i12 = 0; i12 < loop_ub; i12++) {
      r13->data[i12] = obj_NodeMean[(int32_T)node->data[i12] - 1];
    }

    i12 = node->size[0];
    iv314[0] = r12->size[0];
    iv315[0] = i12;
    emlrtSubAssignSizeCheckR2012b(iv314, 1, iv315, 1, &emlrtECI, sp);
    loop_ub = r13->size[0];
    emxFree_real_T(&node);
    for (i12 = 0; i12 < loop_ub; i12++) {
      Yfit->data[r12->data[i12]] = r13->data[i12];
    }

    emxFree_real_T(&r13);
    emxFree_int32_T(&r12);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void gb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4549], const real_T obj_Children[9098], const real_T obj_CutPoint
  [4549], const real_T obj_NodeMean[4549], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i62;
  int32_T loop_ub;
  int32_T i63;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r62;
  emxArray_real_T *r63;
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
    i62 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i62, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i62 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i62, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i62 = 0; i62 < loop_ub; i62++) {
      node->data[i62] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i62 = X->size[0];
      i63 = loop_ub + 1;
      if (!((i63 >= 1) && (i63 <= i62))) {
        emlrtDynamicBoundsCheckR2012b(i63, 1, i62, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i62 = (int32_T)m;
        if (!((i62 >= 1) && (i62 <= 4549))) {
          emlrtDynamicBoundsCheckR2012b(i62, 1, 4549, &lb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i62 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i62 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i62 >= 1) && (i62 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i62, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i62 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i62 >= 1) && (i62 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i62, 1, 10, &b_emlrtBCI, &b_st);
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

      i62 = node->size[0];
      i63 = 1 + loop_ub;
      if (!((i63 >= 1) && (i63 <= i62))) {
        emlrtDynamicBoundsCheckR2012b(i63, 1, i62, &f_emlrtBCI, &b_st);
      }

      node->data[i63 - 1] = m;
    }

    i62 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i62, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i62 = 0; i62 < loop_ub; i62++) {
      Yfit->data[i62] = 0.0;
    }

    emxInit_int32_T(sp, &r62, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i62 = r62->size[0];
    r62->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r62, i62, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i62 = 0; i62 < loop_ub; i62++) {
      r62->data[i62] = i62;
    }

    emxInit_real_T(sp, &r63, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i62 = r63->size[0];
    r63->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r63, i62, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i62 = 0; i62 < loop_ub; i62++) {
      r63->data[i62] = obj_NodeMean[(int32_T)node->data[i62] - 1];
    }

    i62 = node->size[0];
    iv364[0] = r62->size[0];
    iv365[0] = i62;
    emlrtSubAssignSizeCheckR2012b(iv364, 1, iv365, 1, &emlrtECI, sp);
    loop_ub = r63->size[0];
    emxFree_real_T(&node);
    for (i62 = 0; i62 < loop_ub; i62++) {
      Yfit->data[r62->data[i62]] = r63->data[i62];
    }

    emxFree_real_T(&r63);
    emxFree_int32_T(&r62);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void gc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4583], const real_T obj_Children[9166], const real_T obj_CutPoint
  [4583], const real_T obj_NodeMean[4583], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i112;
  int32_T loop_ub;
  int32_T i113;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r112;
  emxArray_real_T *r113;
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
    i112 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i112, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i112 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i112, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i112 = 0; i112 < loop_ub; i112++) {
      node->data[i112] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i112 = X->size[0];
      i113 = loop_ub + 1;
      if (!((i113 >= 1) && (i113 <= i112))) {
        emlrtDynamicBoundsCheckR2012b(i113, 1, i112, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i112 = (int32_T)m;
        if (!((i112 >= 1) && (i112 <= 4583))) {
          emlrtDynamicBoundsCheckR2012b(i112, 1, 4583, &lc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i112 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i112 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i112 >= 1) && (i112 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i112, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i112 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i112 >= 1) && (i112 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i112, 1, 10, &b_emlrtBCI, &b_st);
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

      i112 = node->size[0];
      i113 = 1 + loop_ub;
      if (!((i113 >= 1) && (i113 <= i112))) {
        emlrtDynamicBoundsCheckR2012b(i113, 1, i112, &f_emlrtBCI, &b_st);
      }

      node->data[i113 - 1] = m;
    }

    i112 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i112, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i112 = 0; i112 < loop_ub; i112++) {
      Yfit->data[i112] = 0.0;
    }

    emxInit_int32_T(sp, &r112, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i112 = r112->size[0];
    r112->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r112, i112, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i112 = 0; i112 < loop_ub; i112++) {
      r112->data[i112] = i112;
    }

    emxInit_real_T(sp, &r113, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i112 = r113->size[0];
    r113->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r113, i112, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i112 = 0; i112 < loop_ub; i112++) {
      r113->data[i112] = obj_NodeMean[(int32_T)node->data[i112] - 1];
    }

    i112 = node->size[0];
    iv414[0] = r112->size[0];
    iv415[0] = i112;
    emlrtSubAssignSizeCheckR2012b(iv414, 1, iv415, 1, &emlrtECI, sp);
    loop_ub = r113->size[0];
    emxFree_real_T(&node);
    for (i112 = 0; i112 < loop_ub; i112++) {
      Yfit->data[r112->data[i112]] = r113->data[i112];
    }

    emxFree_real_T(&r113);
    emxFree_int32_T(&r112);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void h_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4795], const real_T obj_Children[9590], const real_T obj_CutPoint
  [4795], const real_T obj_NodeMean[4795], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i14;
  int32_T loop_ub;
  int32_T i15;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r14;
  emxArray_real_T *r15;
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
    i14 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i14, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i14 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i14, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i14 = 0; i14 < loop_ub; i14++) {
      node->data[i14] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i14 = X->size[0];
      i15 = loop_ub + 1;
      if (!((i15 >= 1) && (i15 <= i14))) {
        emlrtDynamicBoundsCheckR2012b(i15, 1, i14, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i14 = (int32_T)m;
        if (!((i14 >= 1) && (i14 <= 4795))) {
          emlrtDynamicBoundsCheckR2012b(i14, 1, 4795, &m_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i14 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i14 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i14 >= 1) && (i14 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i14, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i14 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i14 >= 1) && (i14 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i14, 1, 10, &b_emlrtBCI, &b_st);
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

      i14 = node->size[0];
      i15 = 1 + loop_ub;
      if (!((i15 >= 1) && (i15 <= i14))) {
        emlrtDynamicBoundsCheckR2012b(i15, 1, i14, &f_emlrtBCI, &b_st);
      }

      node->data[i15 - 1] = m;
    }

    i14 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i14, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i14 = 0; i14 < loop_ub; i14++) {
      Yfit->data[i14] = 0.0;
    }

    emxInit_int32_T(sp, &r14, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i14 = r14->size[0];
    r14->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r14, i14, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i14 = 0; i14 < loop_ub; i14++) {
      r14->data[i14] = i14;
    }

    emxInit_real_T(sp, &r15, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i14 = r15->size[0];
    r15->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r15, i14, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i14 = 0; i14 < loop_ub; i14++) {
      r15->data[i14] = obj_NodeMean[(int32_T)node->data[i14] - 1];
    }

    i14 = node->size[0];
    iv316[0] = r14->size[0];
    iv317[0] = i14;
    emlrtSubAssignSizeCheckR2012b(iv316, 1, iv317, 1, &emlrtECI, sp);
    loop_ub = r15->size[0];
    emxFree_real_T(&node);
    for (i14 = 0; i14 < loop_ub; i14++) {
      Yfit->data[r14->data[i14]] = r15->data[i14];
    }

    emxFree_real_T(&r15);
    emxFree_int32_T(&r14);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void hb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4447], const real_T obj_Children[8894], const real_T obj_CutPoint
  [4447], const real_T obj_NodeMean[4447], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i64;
  int32_T loop_ub;
  int32_T i65;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r64;
  emxArray_real_T *r65;
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
    i64 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i64, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i64 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i64, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i64 = 0; i64 < loop_ub; i64++) {
      node->data[i64] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i64 = X->size[0];
      i65 = loop_ub + 1;
      if (!((i65 >= 1) && (i65 <= i64))) {
        emlrtDynamicBoundsCheckR2012b(i65, 1, i64, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i64 = (int32_T)m;
        if (!((i64 >= 1) && (i64 <= 4447))) {
          emlrtDynamicBoundsCheckR2012b(i64, 1, 4447, &mb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i64 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i64 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i64 >= 1) && (i64 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i64, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i64 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i64 >= 1) && (i64 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i64, 1, 10, &b_emlrtBCI, &b_st);
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

      i64 = node->size[0];
      i65 = 1 + loop_ub;
      if (!((i65 >= 1) && (i65 <= i64))) {
        emlrtDynamicBoundsCheckR2012b(i65, 1, i64, &f_emlrtBCI, &b_st);
      }

      node->data[i65 - 1] = m;
    }

    i64 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i64, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i64 = 0; i64 < loop_ub; i64++) {
      Yfit->data[i64] = 0.0;
    }

    emxInit_int32_T(sp, &r64, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i64 = r64->size[0];
    r64->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r64, i64, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i64 = 0; i64 < loop_ub; i64++) {
      r64->data[i64] = i64;
    }

    emxInit_real_T(sp, &r65, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i64 = r65->size[0];
    r65->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r65, i64, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i64 = 0; i64 < loop_ub; i64++) {
      r65->data[i64] = obj_NodeMean[(int32_T)node->data[i64] - 1];
    }

    i64 = node->size[0];
    iv366[0] = r64->size[0];
    iv367[0] = i64;
    emlrtSubAssignSizeCheckR2012b(iv366, 1, iv367, 1, &emlrtECI, sp);
    loop_ub = r65->size[0];
    emxFree_real_T(&node);
    for (i64 = 0; i64 < loop_ub; i64++) {
      Yfit->data[r64->data[i64]] = r65->data[i64];
    }

    emxFree_real_T(&r65);
    emxFree_int32_T(&r64);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void hc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4661], const real_T obj_Children[9322], const real_T obj_CutPoint
  [4661], const real_T obj_NodeMean[4661], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i114;
  int32_T loop_ub;
  int32_T i115;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r114;
  emxArray_real_T *r115;
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
    i114 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i114, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i114 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i114, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i114 = 0; i114 < loop_ub; i114++) {
      node->data[i114] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i114 = X->size[0];
      i115 = loop_ub + 1;
      if (!((i115 >= 1) && (i115 <= i114))) {
        emlrtDynamicBoundsCheckR2012b(i115, 1, i114, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i114 = (int32_T)m;
        if (!((i114 >= 1) && (i114 <= 4661))) {
          emlrtDynamicBoundsCheckR2012b(i114, 1, 4661, &mc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i114 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i114 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i114 >= 1) && (i114 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i114, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i114 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i114 >= 1) && (i114 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i114, 1, 10, &b_emlrtBCI, &b_st);
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

      i114 = node->size[0];
      i115 = 1 + loop_ub;
      if (!((i115 >= 1) && (i115 <= i114))) {
        emlrtDynamicBoundsCheckR2012b(i115, 1, i114, &f_emlrtBCI, &b_st);
      }

      node->data[i115 - 1] = m;
    }

    i114 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i114, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i114 = 0; i114 < loop_ub; i114++) {
      Yfit->data[i114] = 0.0;
    }

    emxInit_int32_T(sp, &r114, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i114 = r114->size[0];
    r114->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r114, i114, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i114 = 0; i114 < loop_ub; i114++) {
      r114->data[i114] = i114;
    }

    emxInit_real_T(sp, &r115, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i114 = r115->size[0];
    r115->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r115, i114, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i114 = 0; i114 < loop_ub; i114++) {
      r115->data[i114] = obj_NodeMean[(int32_T)node->data[i114] - 1];
    }

    i114 = node->size[0];
    iv416[0] = r114->size[0];
    iv417[0] = i114;
    emlrtSubAssignSizeCheckR2012b(iv416, 1, iv417, 1, &emlrtECI, sp);
    loop_ub = r115->size[0];
    emxFree_real_T(&node);
    for (i114 = 0; i114 < loop_ub; i114++) {
      Yfit->data[r114->data[i114]] = r115->data[i114];
    }

    emxFree_real_T(&r115);
    emxFree_int32_T(&r114);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void i_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4703], const real_T obj_Children[9406], const real_T obj_CutPoint
  [4703], const real_T obj_NodeMean[4703], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i16;
  int32_T loop_ub;
  int32_T i17;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r16;
  emxArray_real_T *r17;
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
    i16 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i16, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i16 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i16, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i16 = 0; i16 < loop_ub; i16++) {
      node->data[i16] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i16 = X->size[0];
      i17 = loop_ub + 1;
      if (!((i17 >= 1) && (i17 <= i16))) {
        emlrtDynamicBoundsCheckR2012b(i17, 1, i16, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i16 = (int32_T)m;
        if (!((i16 >= 1) && (i16 <= 4703))) {
          emlrtDynamicBoundsCheckR2012b(i16, 1, 4703, &n_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i16 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i16 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i16 >= 1) && (i16 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i16, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i16 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i16 >= 1) && (i16 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i16, 1, 10, &b_emlrtBCI, &b_st);
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

      i16 = node->size[0];
      i17 = 1 + loop_ub;
      if (!((i17 >= 1) && (i17 <= i16))) {
        emlrtDynamicBoundsCheckR2012b(i17, 1, i16, &f_emlrtBCI, &b_st);
      }

      node->data[i17 - 1] = m;
    }

    i16 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i16, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i16 = 0; i16 < loop_ub; i16++) {
      Yfit->data[i16] = 0.0;
    }

    emxInit_int32_T(sp, &r16, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i16 = r16->size[0];
    r16->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r16, i16, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i16 = 0; i16 < loop_ub; i16++) {
      r16->data[i16] = i16;
    }

    emxInit_real_T(sp, &r17, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i16 = r17->size[0];
    r17->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r17, i16, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i16 = 0; i16 < loop_ub; i16++) {
      r17->data[i16] = obj_NodeMean[(int32_T)node->data[i16] - 1];
    }

    i16 = node->size[0];
    iv318[0] = r16->size[0];
    iv319[0] = i16;
    emlrtSubAssignSizeCheckR2012b(iv318, 1, iv319, 1, &emlrtECI, sp);
    loop_ub = r17->size[0];
    emxFree_real_T(&node);
    for (i16 = 0; i16 < loop_ub; i16++) {
      Yfit->data[r16->data[i16]] = r17->data[i16];
    }

    emxFree_real_T(&r17);
    emxFree_int32_T(&r16);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void ib_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4709], const real_T obj_Children[9418], const real_T obj_CutPoint
  [4709], const real_T obj_NodeMean[4709], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i66;
  int32_T loop_ub;
  int32_T i67;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r66;
  emxArray_real_T *r67;
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
    i66 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i66, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i66 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i66, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i66 = 0; i66 < loop_ub; i66++) {
      node->data[i66] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i66 = X->size[0];
      i67 = loop_ub + 1;
      if (!((i67 >= 1) && (i67 <= i66))) {
        emlrtDynamicBoundsCheckR2012b(i67, 1, i66, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i66 = (int32_T)m;
        if (!((i66 >= 1) && (i66 <= 4709))) {
          emlrtDynamicBoundsCheckR2012b(i66, 1, 4709, &nb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i66 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i66 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i66 >= 1) && (i66 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i66, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i66 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i66 >= 1) && (i66 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i66, 1, 10, &b_emlrtBCI, &b_st);
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

      i66 = node->size[0];
      i67 = 1 + loop_ub;
      if (!((i67 >= 1) && (i67 <= i66))) {
        emlrtDynamicBoundsCheckR2012b(i67, 1, i66, &f_emlrtBCI, &b_st);
      }

      node->data[i67 - 1] = m;
    }

    i66 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i66, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i66 = 0; i66 < loop_ub; i66++) {
      Yfit->data[i66] = 0.0;
    }

    emxInit_int32_T(sp, &r66, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i66 = r66->size[0];
    r66->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r66, i66, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i66 = 0; i66 < loop_ub; i66++) {
      r66->data[i66] = i66;
    }

    emxInit_real_T(sp, &r67, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i66 = r67->size[0];
    r67->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r67, i66, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i66 = 0; i66 < loop_ub; i66++) {
      r67->data[i66] = obj_NodeMean[(int32_T)node->data[i66] - 1];
    }

    i66 = node->size[0];
    iv368[0] = r66->size[0];
    iv369[0] = i66;
    emlrtSubAssignSizeCheckR2012b(iv368, 1, iv369, 1, &emlrtECI, sp);
    loop_ub = r67->size[0];
    emxFree_real_T(&node);
    for (i66 = 0; i66 < loop_ub; i66++) {
      Yfit->data[r66->data[i66]] = r67->data[i66];
    }

    emxFree_real_T(&r67);
    emxFree_int32_T(&r66);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void ic_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4545], const real_T obj_Children[9090], const real_T obj_CutPoint
  [4545], const real_T obj_NodeMean[4545], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i116;
  int32_T loop_ub;
  int32_T i117;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r116;
  emxArray_real_T *r117;
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
    i116 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i116, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i116 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i116, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i116 = 0; i116 < loop_ub; i116++) {
      node->data[i116] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i116 = X->size[0];
      i117 = loop_ub + 1;
      if (!((i117 >= 1) && (i117 <= i116))) {
        emlrtDynamicBoundsCheckR2012b(i117, 1, i116, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i116 = (int32_T)m;
        if (!((i116 >= 1) && (i116 <= 4545))) {
          emlrtDynamicBoundsCheckR2012b(i116, 1, 4545, &nc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i116 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i116 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i116 >= 1) && (i116 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i116, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i116 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i116 >= 1) && (i116 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i116, 1, 10, &b_emlrtBCI, &b_st);
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

      i116 = node->size[0];
      i117 = 1 + loop_ub;
      if (!((i117 >= 1) && (i117 <= i116))) {
        emlrtDynamicBoundsCheckR2012b(i117, 1, i116, &f_emlrtBCI, &b_st);
      }

      node->data[i117 - 1] = m;
    }

    i116 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i116, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i116 = 0; i116 < loop_ub; i116++) {
      Yfit->data[i116] = 0.0;
    }

    emxInit_int32_T(sp, &r116, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i116 = r116->size[0];
    r116->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r116, i116, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i116 = 0; i116 < loop_ub; i116++) {
      r116->data[i116] = i116;
    }

    emxInit_real_T(sp, &r117, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i116 = r117->size[0];
    r117->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r117, i116, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i116 = 0; i116 < loop_ub; i116++) {
      r117->data[i116] = obj_NodeMean[(int32_T)node->data[i116] - 1];
    }

    i116 = node->size[0];
    iv418[0] = r116->size[0];
    iv419[0] = i116;
    emlrtSubAssignSizeCheckR2012b(iv418, 1, iv419, 1, &emlrtECI, sp);
    loop_ub = r117->size[0];
    emxFree_real_T(&node);
    for (i116 = 0; i116 < loop_ub; i116++) {
      Yfit->data[r116->data[i116]] = r117->data[i116];
    }

    emxFree_real_T(&r117);
    emxFree_int32_T(&r116);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void j_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4691], const real_T obj_Children[9382], const real_T obj_CutPoint
  [4691], const real_T obj_NodeMean[4691], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i18;
  int32_T loop_ub;
  int32_T i19;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r18;
  emxArray_real_T *r19;
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
    i18 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i18, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i18 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i18, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i18 = 0; i18 < loop_ub; i18++) {
      node->data[i18] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i18 = X->size[0];
      i19 = loop_ub + 1;
      if (!((i19 >= 1) && (i19 <= i18))) {
        emlrtDynamicBoundsCheckR2012b(i19, 1, i18, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i18 = (int32_T)m;
        if (!((i18 >= 1) && (i18 <= 4691))) {
          emlrtDynamicBoundsCheckR2012b(i18, 1, 4691, &o_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i18 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i18 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i18 >= 1) && (i18 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i18, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i18 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i18 >= 1) && (i18 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i18, 1, 10, &b_emlrtBCI, &b_st);
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

      i18 = node->size[0];
      i19 = 1 + loop_ub;
      if (!((i19 >= 1) && (i19 <= i18))) {
        emlrtDynamicBoundsCheckR2012b(i19, 1, i18, &f_emlrtBCI, &b_st);
      }

      node->data[i19 - 1] = m;
    }

    i18 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i18, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i18 = 0; i18 < loop_ub; i18++) {
      Yfit->data[i18] = 0.0;
    }

    emxInit_int32_T(sp, &r18, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i18 = r18->size[0];
    r18->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r18, i18, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i18 = 0; i18 < loop_ub; i18++) {
      r18->data[i18] = i18;
    }

    emxInit_real_T(sp, &r19, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i18 = r19->size[0];
    r19->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r19, i18, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i18 = 0; i18 < loop_ub; i18++) {
      r19->data[i18] = obj_NodeMean[(int32_T)node->data[i18] - 1];
    }

    i18 = node->size[0];
    iv320[0] = r18->size[0];
    iv321[0] = i18;
    emlrtSubAssignSizeCheckR2012b(iv320, 1, iv321, 1, &emlrtECI, sp);
    loop_ub = r19->size[0];
    emxFree_real_T(&node);
    for (i18 = 0; i18 < loop_ub; i18++) {
      Yfit->data[r18->data[i18]] = r19->data[i18];
    }

    emxFree_real_T(&r19);
    emxFree_int32_T(&r18);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void jb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4785], const real_T obj_Children[9570], const real_T obj_CutPoint
  [4785], const real_T obj_NodeMean[4785], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i68;
  int32_T loop_ub;
  int32_T i69;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r68;
  emxArray_real_T *r69;
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
    i68 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i68, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i68 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i68, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i68 = 0; i68 < loop_ub; i68++) {
      node->data[i68] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i68 = X->size[0];
      i69 = loop_ub + 1;
      if (!((i69 >= 1) && (i69 <= i68))) {
        emlrtDynamicBoundsCheckR2012b(i69, 1, i68, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i68 = (int32_T)m;
        if (!((i68 >= 1) && (i68 <= 4785))) {
          emlrtDynamicBoundsCheckR2012b(i68, 1, 4785, &ob_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i68 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i68 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i68 >= 1) && (i68 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i68, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i68 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i68 >= 1) && (i68 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i68, 1, 10, &b_emlrtBCI, &b_st);
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

      i68 = node->size[0];
      i69 = 1 + loop_ub;
      if (!((i69 >= 1) && (i69 <= i68))) {
        emlrtDynamicBoundsCheckR2012b(i69, 1, i68, &f_emlrtBCI, &b_st);
      }

      node->data[i69 - 1] = m;
    }

    i68 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i68, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i68 = 0; i68 < loop_ub; i68++) {
      Yfit->data[i68] = 0.0;
    }

    emxInit_int32_T(sp, &r68, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i68 = r68->size[0];
    r68->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r68, i68, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i68 = 0; i68 < loop_ub; i68++) {
      r68->data[i68] = i68;
    }

    emxInit_real_T(sp, &r69, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i68 = r69->size[0];
    r69->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r69, i68, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i68 = 0; i68 < loop_ub; i68++) {
      r69->data[i68] = obj_NodeMean[(int32_T)node->data[i68] - 1];
    }

    i68 = node->size[0];
    iv370[0] = r68->size[0];
    iv371[0] = i68;
    emlrtSubAssignSizeCheckR2012b(iv370, 1, iv371, 1, &emlrtECI, sp);
    loop_ub = r69->size[0];
    emxFree_real_T(&node);
    for (i68 = 0; i68 < loop_ub; i68++) {
      Yfit->data[r68->data[i68]] = r69->data[i68];
    }

    emxFree_real_T(&r69);
    emxFree_int32_T(&r68);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void jc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4707], const real_T obj_Children[9414], const real_T obj_CutPoint
  [4707], const real_T obj_NodeMean[4707], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i118;
  int32_T loop_ub;
  int32_T i119;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r118;
  emxArray_real_T *r119;
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
    i118 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i118, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i118 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i118, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i118 = 0; i118 < loop_ub; i118++) {
      node->data[i118] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i118 = X->size[0];
      i119 = loop_ub + 1;
      if (!((i119 >= 1) && (i119 <= i118))) {
        emlrtDynamicBoundsCheckR2012b(i119, 1, i118, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i118 = (int32_T)m;
        if (!((i118 >= 1) && (i118 <= 4707))) {
          emlrtDynamicBoundsCheckR2012b(i118, 1, 4707, &oc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i118 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i118 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i118 >= 1) && (i118 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i118, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i118 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i118 >= 1) && (i118 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i118, 1, 10, &b_emlrtBCI, &b_st);
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

      i118 = node->size[0];
      i119 = 1 + loop_ub;
      if (!((i119 >= 1) && (i119 <= i118))) {
        emlrtDynamicBoundsCheckR2012b(i119, 1, i118, &f_emlrtBCI, &b_st);
      }

      node->data[i119 - 1] = m;
    }

    i118 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i118, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i118 = 0; i118 < loop_ub; i118++) {
      Yfit->data[i118] = 0.0;
    }

    emxInit_int32_T(sp, &r118, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i118 = r118->size[0];
    r118->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r118, i118, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i118 = 0; i118 < loop_ub; i118++) {
      r118->data[i118] = i118;
    }

    emxInit_real_T(sp, &r119, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i118 = r119->size[0];
    r119->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r119, i118, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i118 = 0; i118 < loop_ub; i118++) {
      r119->data[i118] = obj_NodeMean[(int32_T)node->data[i118] - 1];
    }

    i118 = node->size[0];
    iv420[0] = r118->size[0];
    iv421[0] = i118;
    emlrtSubAssignSizeCheckR2012b(iv420, 1, iv421, 1, &emlrtECI, sp);
    loop_ub = r119->size[0];
    emxFree_real_T(&node);
    for (i118 = 0; i118 < loop_ub; i118++) {
      Yfit->data[r118->data[i118]] = r119->data[i118];
    }

    emxFree_real_T(&r119);
    emxFree_int32_T(&r118);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void k_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4665], const real_T obj_Children[9330], const real_T obj_CutPoint
  [4665], const real_T obj_NodeMean[4665], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i20;
  int32_T loop_ub;
  int32_T i21;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r20;
  emxArray_real_T *r21;
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
    i20 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i20, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i20 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i20, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i20 = 0; i20 < loop_ub; i20++) {
      node->data[i20] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i20 = X->size[0];
      i21 = loop_ub + 1;
      if (!((i21 >= 1) && (i21 <= i20))) {
        emlrtDynamicBoundsCheckR2012b(i21, 1, i20, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i20 = (int32_T)m;
        if (!((i20 >= 1) && (i20 <= 4665))) {
          emlrtDynamicBoundsCheckR2012b(i20, 1, 4665, &p_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i20 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i20 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i20 >= 1) && (i20 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i20, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i20 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i20 >= 1) && (i20 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i20, 1, 10, &b_emlrtBCI, &b_st);
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

      i20 = node->size[0];
      i21 = 1 + loop_ub;
      if (!((i21 >= 1) && (i21 <= i20))) {
        emlrtDynamicBoundsCheckR2012b(i21, 1, i20, &f_emlrtBCI, &b_st);
      }

      node->data[i21 - 1] = m;
    }

    i20 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i20, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i20 = 0; i20 < loop_ub; i20++) {
      Yfit->data[i20] = 0.0;
    }

    emxInit_int32_T(sp, &r20, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i20 = r20->size[0];
    r20->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r20, i20, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i20 = 0; i20 < loop_ub; i20++) {
      r20->data[i20] = i20;
    }

    emxInit_real_T(sp, &r21, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i20 = r21->size[0];
    r21->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r21, i20, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i20 = 0; i20 < loop_ub; i20++) {
      r21->data[i20] = obj_NodeMean[(int32_T)node->data[i20] - 1];
    }

    i20 = node->size[0];
    iv322[0] = r20->size[0];
    iv323[0] = i20;
    emlrtSubAssignSizeCheckR2012b(iv322, 1, iv323, 1, &emlrtECI, sp);
    loop_ub = r21->size[0];
    emxFree_real_T(&node);
    for (i20 = 0; i20 < loop_ub; i20++) {
      Yfit->data[r20->data[i20]] = r21->data[i20];
    }

    emxFree_real_T(&r21);
    emxFree_int32_T(&r20);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void kb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4597], const real_T obj_Children[9194], const real_T obj_CutPoint
  [4597], const real_T obj_NodeMean[4597], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i70;
  int32_T loop_ub;
  int32_T i71;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r70;
  emxArray_real_T *r71;
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
    i70 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i70, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i70 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i70, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i70 = 0; i70 < loop_ub; i70++) {
      node->data[i70] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i70 = X->size[0];
      i71 = loop_ub + 1;
      if (!((i71 >= 1) && (i71 <= i70))) {
        emlrtDynamicBoundsCheckR2012b(i71, 1, i70, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i70 = (int32_T)m;
        if (!((i70 >= 1) && (i70 <= 4597))) {
          emlrtDynamicBoundsCheckR2012b(i70, 1, 4597, &pb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i70 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i70 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i70 >= 1) && (i70 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i70, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i70 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i70 >= 1) && (i70 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i70, 1, 10, &b_emlrtBCI, &b_st);
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

      i70 = node->size[0];
      i71 = 1 + loop_ub;
      if (!((i71 >= 1) && (i71 <= i70))) {
        emlrtDynamicBoundsCheckR2012b(i71, 1, i70, &f_emlrtBCI, &b_st);
      }

      node->data[i71 - 1] = m;
    }

    i70 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i70, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i70 = 0; i70 < loop_ub; i70++) {
      Yfit->data[i70] = 0.0;
    }

    emxInit_int32_T(sp, &r70, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i70 = r70->size[0];
    r70->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r70, i70, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i70 = 0; i70 < loop_ub; i70++) {
      r70->data[i70] = i70;
    }

    emxInit_real_T(sp, &r71, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i70 = r71->size[0];
    r71->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r71, i70, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i70 = 0; i70 < loop_ub; i70++) {
      r71->data[i70] = obj_NodeMean[(int32_T)node->data[i70] - 1];
    }

    i70 = node->size[0];
    iv372[0] = r70->size[0];
    iv373[0] = i70;
    emlrtSubAssignSizeCheckR2012b(iv372, 1, iv373, 1, &emlrtECI, sp);
    loop_ub = r71->size[0];
    emxFree_real_T(&node);
    for (i70 = 0; i70 < loop_ub; i70++) {
      Yfit->data[r70->data[i70]] = r71->data[i70];
    }

    emxFree_real_T(&r71);
    emxFree_int32_T(&r70);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void kc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4615], const real_T obj_Children[9230], const real_T obj_CutPoint
  [4615], const real_T obj_NodeMean[4615], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i120;
  int32_T loop_ub;
  int32_T i121;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r120;
  emxArray_real_T *r121;
  int32_T iv422[1];
  int32_T iv423[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i120 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i120, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i120 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i120, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i120 = 0; i120 < loop_ub; i120++) {
      node->data[i120] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i120 = X->size[0];
      i121 = loop_ub + 1;
      if (!((i121 >= 1) && (i121 <= i120))) {
        emlrtDynamicBoundsCheckR2012b(i121, 1, i120, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i120 = (int32_T)m;
        if (!((i120 >= 1) && (i120 <= 4615))) {
          emlrtDynamicBoundsCheckR2012b(i120, 1, 4615, &pc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i120 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i120 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i120 >= 1) && (i120 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i120, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i120 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i120 >= 1) && (i120 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i120, 1, 10, &b_emlrtBCI, &b_st);
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

      i120 = node->size[0];
      i121 = 1 + loop_ub;
      if (!((i121 >= 1) && (i121 <= i120))) {
        emlrtDynamicBoundsCheckR2012b(i121, 1, i120, &f_emlrtBCI, &b_st);
      }

      node->data[i121 - 1] = m;
    }

    i120 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i120, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i120 = 0; i120 < loop_ub; i120++) {
      Yfit->data[i120] = 0.0;
    }

    emxInit_int32_T(sp, &r120, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i120 = r120->size[0];
    r120->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r120, i120, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i120 = 0; i120 < loop_ub; i120++) {
      r120->data[i120] = i120;
    }

    emxInit_real_T(sp, &r121, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i120 = r121->size[0];
    r121->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r121, i120, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i120 = 0; i120 < loop_ub; i120++) {
      r121->data[i120] = obj_NodeMean[(int32_T)node->data[i120] - 1];
    }

    i120 = node->size[0];
    iv422[0] = r120->size[0];
    iv423[0] = i120;
    emlrtSubAssignSizeCheckR2012b(iv422, 1, iv423, 1, &emlrtECI, sp);
    loop_ub = r121->size[0];
    emxFree_real_T(&node);
    for (i120 = 0; i120 < loop_ub; i120++) {
      Yfit->data[r120->data[i120]] = r121->data[i120];
    }

    emxFree_real_T(&r121);
    emxFree_int32_T(&r120);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void l_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4713], const real_T obj_Children[9426], const real_T obj_CutPoint
  [4713], const real_T obj_NodeMean[4713], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i22;
  int32_T loop_ub;
  int32_T i23;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r22;
  emxArray_real_T *r23;
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
    i22 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i22, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i22 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i22, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i22 = 0; i22 < loop_ub; i22++) {
      node->data[i22] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i22 = X->size[0];
      i23 = loop_ub + 1;
      if (!((i23 >= 1) && (i23 <= i22))) {
        emlrtDynamicBoundsCheckR2012b(i23, 1, i22, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i22 = (int32_T)m;
        if (!((i22 >= 1) && (i22 <= 4713))) {
          emlrtDynamicBoundsCheckR2012b(i22, 1, 4713, &q_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i22 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i22 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i22 >= 1) && (i22 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i22, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i22 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i22 >= 1) && (i22 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i22, 1, 10, &b_emlrtBCI, &b_st);
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

      i22 = node->size[0];
      i23 = 1 + loop_ub;
      if (!((i23 >= 1) && (i23 <= i22))) {
        emlrtDynamicBoundsCheckR2012b(i23, 1, i22, &f_emlrtBCI, &b_st);
      }

      node->data[i23 - 1] = m;
    }

    i22 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i22, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i22 = 0; i22 < loop_ub; i22++) {
      Yfit->data[i22] = 0.0;
    }

    emxInit_int32_T(sp, &r22, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i22 = r22->size[0];
    r22->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r22, i22, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i22 = 0; i22 < loop_ub; i22++) {
      r22->data[i22] = i22;
    }

    emxInit_real_T(sp, &r23, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i22 = r23->size[0];
    r23->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r23, i22, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i22 = 0; i22 < loop_ub; i22++) {
      r23->data[i22] = obj_NodeMean[(int32_T)node->data[i22] - 1];
    }

    i22 = node->size[0];
    iv324[0] = r22->size[0];
    iv325[0] = i22;
    emlrtSubAssignSizeCheckR2012b(iv324, 1, iv325, 1, &emlrtECI, sp);
    loop_ub = r23->size[0];
    emxFree_real_T(&node);
    for (i22 = 0; i22 < loop_ub; i22++) {
      Yfit->data[r22->data[i22]] = r23->data[i22];
    }

    emxFree_real_T(&r23);
    emxFree_int32_T(&r22);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void lb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4683], const real_T obj_Children[9366], const real_T obj_CutPoint
  [4683], const real_T obj_NodeMean[4683], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i72;
  int32_T loop_ub;
  int32_T i73;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r72;
  emxArray_real_T *r73;
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
    i72 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i72, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i72 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i72, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i72 = 0; i72 < loop_ub; i72++) {
      node->data[i72] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i72 = X->size[0];
      i73 = loop_ub + 1;
      if (!((i73 >= 1) && (i73 <= i72))) {
        emlrtDynamicBoundsCheckR2012b(i73, 1, i72, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i72 = (int32_T)m;
        if (!((i72 >= 1) && (i72 <= 4683))) {
          emlrtDynamicBoundsCheckR2012b(i72, 1, 4683, &qb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i72 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i72 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i72 >= 1) && (i72 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i72, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i72 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i72 >= 1) && (i72 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i72, 1, 10, &b_emlrtBCI, &b_st);
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

      i72 = node->size[0];
      i73 = 1 + loop_ub;
      if (!((i73 >= 1) && (i73 <= i72))) {
        emlrtDynamicBoundsCheckR2012b(i73, 1, i72, &f_emlrtBCI, &b_st);
      }

      node->data[i73 - 1] = m;
    }

    i72 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i72, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i72 = 0; i72 < loop_ub; i72++) {
      Yfit->data[i72] = 0.0;
    }

    emxInit_int32_T(sp, &r72, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i72 = r72->size[0];
    r72->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r72, i72, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i72 = 0; i72 < loop_ub; i72++) {
      r72->data[i72] = i72;
    }

    emxInit_real_T(sp, &r73, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i72 = r73->size[0];
    r73->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r73, i72, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i72 = 0; i72 < loop_ub; i72++) {
      r73->data[i72] = obj_NodeMean[(int32_T)node->data[i72] - 1];
    }

    i72 = node->size[0];
    iv374[0] = r72->size[0];
    iv375[0] = i72;
    emlrtSubAssignSizeCheckR2012b(iv374, 1, iv375, 1, &emlrtECI, sp);
    loop_ub = r73->size[0];
    emxFree_real_T(&node);
    for (i72 = 0; i72 < loop_ub; i72++) {
      Yfit->data[r72->data[i72]] = r73->data[i72];
    }

    emxFree_real_T(&r73);
    emxFree_int32_T(&r72);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void lc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4477], const real_T obj_Children[8954], const real_T obj_CutPoint
  [4477], const real_T obj_NodeMean[4477], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i122;
  int32_T loop_ub;
  int32_T i123;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r122;
  emxArray_real_T *r123;
  int32_T iv424[1];
  int32_T iv425[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i122 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i122, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i122 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i122, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i122 = 0; i122 < loop_ub; i122++) {
      node->data[i122] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i122 = X->size[0];
      i123 = loop_ub + 1;
      if (!((i123 >= 1) && (i123 <= i122))) {
        emlrtDynamicBoundsCheckR2012b(i123, 1, i122, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i122 = (int32_T)m;
        if (!((i122 >= 1) && (i122 <= 4477))) {
          emlrtDynamicBoundsCheckR2012b(i122, 1, 4477, &qc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i122 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i122 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i122 >= 1) && (i122 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i122, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i122 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i122 >= 1) && (i122 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i122, 1, 10, &b_emlrtBCI, &b_st);
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

      i122 = node->size[0];
      i123 = 1 + loop_ub;
      if (!((i123 >= 1) && (i123 <= i122))) {
        emlrtDynamicBoundsCheckR2012b(i123, 1, i122, &f_emlrtBCI, &b_st);
      }

      node->data[i123 - 1] = m;
    }

    i122 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i122, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i122 = 0; i122 < loop_ub; i122++) {
      Yfit->data[i122] = 0.0;
    }

    emxInit_int32_T(sp, &r122, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i122 = r122->size[0];
    r122->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r122, i122, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i122 = 0; i122 < loop_ub; i122++) {
      r122->data[i122] = i122;
    }

    emxInit_real_T(sp, &r123, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i122 = r123->size[0];
    r123->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r123, i122, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i122 = 0; i122 < loop_ub; i122++) {
      r123->data[i122] = obj_NodeMean[(int32_T)node->data[i122] - 1];
    }

    i122 = node->size[0];
    iv424[0] = r122->size[0];
    iv425[0] = i122;
    emlrtSubAssignSizeCheckR2012b(iv424, 1, iv425, 1, &emlrtECI, sp);
    loop_ub = r123->size[0];
    emxFree_real_T(&node);
    for (i122 = 0; i122 < loop_ub; i122++) {
      Yfit->data[r122->data[i122]] = r123->data[i122];
    }

    emxFree_real_T(&r123);
    emxFree_int32_T(&r122);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void m_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4685], const real_T obj_Children[9370], const real_T obj_CutPoint
  [4685], const real_T obj_NodeMean[4685], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i24;
  int32_T loop_ub;
  int32_T i25;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r24;
  emxArray_real_T *r25;
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
    i24 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i24, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i24 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i24, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i24 = 0; i24 < loop_ub; i24++) {
      node->data[i24] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i24 = X->size[0];
      i25 = loop_ub + 1;
      if (!((i25 >= 1) && (i25 <= i24))) {
        emlrtDynamicBoundsCheckR2012b(i25, 1, i24, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i24 = (int32_T)m;
        if (!((i24 >= 1) && (i24 <= 4685))) {
          emlrtDynamicBoundsCheckR2012b(i24, 1, 4685, &r_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i24 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i24 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i24 >= 1) && (i24 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i24, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i24 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i24 >= 1) && (i24 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i24, 1, 10, &b_emlrtBCI, &b_st);
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

      i24 = node->size[0];
      i25 = 1 + loop_ub;
      if (!((i25 >= 1) && (i25 <= i24))) {
        emlrtDynamicBoundsCheckR2012b(i25, 1, i24, &f_emlrtBCI, &b_st);
      }

      node->data[i25 - 1] = m;
    }

    i24 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i24, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i24 = 0; i24 < loop_ub; i24++) {
      Yfit->data[i24] = 0.0;
    }

    emxInit_int32_T(sp, &r24, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i24 = r24->size[0];
    r24->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r24, i24, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i24 = 0; i24 < loop_ub; i24++) {
      r24->data[i24] = i24;
    }

    emxInit_real_T(sp, &r25, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i24 = r25->size[0];
    r25->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r25, i24, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i24 = 0; i24 < loop_ub; i24++) {
      r25->data[i24] = obj_NodeMean[(int32_T)node->data[i24] - 1];
    }

    i24 = node->size[0];
    iv326[0] = r24->size[0];
    iv327[0] = i24;
    emlrtSubAssignSizeCheckR2012b(iv326, 1, iv327, 1, &emlrtECI, sp);
    loop_ub = r25->size[0];
    emxFree_real_T(&node);
    for (i24 = 0; i24 < loop_ub; i24++) {
      Yfit->data[r24->data[i24]] = r25->data[i24];
    }

    emxFree_real_T(&r25);
    emxFree_int32_T(&r24);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void mb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4589], const real_T obj_Children[9178], const real_T obj_CutPoint
  [4589], const real_T obj_NodeMean[4589], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i74;
  int32_T loop_ub;
  int32_T i75;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r74;
  emxArray_real_T *r75;
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
    i74 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i74, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i74 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i74, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i74 = 0; i74 < loop_ub; i74++) {
      node->data[i74] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i74 = X->size[0];
      i75 = loop_ub + 1;
      if (!((i75 >= 1) && (i75 <= i74))) {
        emlrtDynamicBoundsCheckR2012b(i75, 1, i74, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i74 = (int32_T)m;
        if (!((i74 >= 1) && (i74 <= 4589))) {
          emlrtDynamicBoundsCheckR2012b(i74, 1, 4589, &rb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i74 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i74 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i74 >= 1) && (i74 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i74, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i74 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i74 >= 1) && (i74 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i74, 1, 10, &b_emlrtBCI, &b_st);
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

      i74 = node->size[0];
      i75 = 1 + loop_ub;
      if (!((i75 >= 1) && (i75 <= i74))) {
        emlrtDynamicBoundsCheckR2012b(i75, 1, i74, &f_emlrtBCI, &b_st);
      }

      node->data[i75 - 1] = m;
    }

    i74 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i74, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i74 = 0; i74 < loop_ub; i74++) {
      Yfit->data[i74] = 0.0;
    }

    emxInit_int32_T(sp, &r74, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i74 = r74->size[0];
    r74->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r74, i74, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i74 = 0; i74 < loop_ub; i74++) {
      r74->data[i74] = i74;
    }

    emxInit_real_T(sp, &r75, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i74 = r75->size[0];
    r75->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r75, i74, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i74 = 0; i74 < loop_ub; i74++) {
      r75->data[i74] = obj_NodeMean[(int32_T)node->data[i74] - 1];
    }

    i74 = node->size[0];
    iv376[0] = r74->size[0];
    iv377[0] = i74;
    emlrtSubAssignSizeCheckR2012b(iv376, 1, iv377, 1, &emlrtECI, sp);
    loop_ub = r75->size[0];
    emxFree_real_T(&node);
    for (i74 = 0; i74 < loop_ub; i74++) {
      Yfit->data[r74->data[i74]] = r75->data[i74];
    }

    emxFree_real_T(&r75);
    emxFree_int32_T(&r74);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void mc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4465], const real_T obj_Children[8930], const real_T obj_CutPoint
  [4465], const real_T obj_NodeMean[4465], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i124;
  int32_T loop_ub;
  int32_T i125;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r124;
  emxArray_real_T *r125;
  int32_T iv426[1];
  int32_T iv427[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i124 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i124, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i124 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i124, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i124 = 0; i124 < loop_ub; i124++) {
      node->data[i124] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i124 = X->size[0];
      i125 = loop_ub + 1;
      if (!((i125 >= 1) && (i125 <= i124))) {
        emlrtDynamicBoundsCheckR2012b(i125, 1, i124, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i124 = (int32_T)m;
        if (!((i124 >= 1) && (i124 <= 4465))) {
          emlrtDynamicBoundsCheckR2012b(i124, 1, 4465, &rc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i124 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i124 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i124 >= 1) && (i124 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i124, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i124 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i124 >= 1) && (i124 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i124, 1, 10, &b_emlrtBCI, &b_st);
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

      i124 = node->size[0];
      i125 = 1 + loop_ub;
      if (!((i125 >= 1) && (i125 <= i124))) {
        emlrtDynamicBoundsCheckR2012b(i125, 1, i124, &f_emlrtBCI, &b_st);
      }

      node->data[i125 - 1] = m;
    }

    i124 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i124, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i124 = 0; i124 < loop_ub; i124++) {
      Yfit->data[i124] = 0.0;
    }

    emxInit_int32_T(sp, &r124, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i124 = r124->size[0];
    r124->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r124, i124, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i124 = 0; i124 < loop_ub; i124++) {
      r124->data[i124] = i124;
    }

    emxInit_real_T(sp, &r125, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i124 = r125->size[0];
    r125->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r125, i124, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i124 = 0; i124 < loop_ub; i124++) {
      r125->data[i124] = obj_NodeMean[(int32_T)node->data[i124] - 1];
    }

    i124 = node->size[0];
    iv426[0] = r124->size[0];
    iv427[0] = i124;
    emlrtSubAssignSizeCheckR2012b(iv426, 1, iv427, 1, &emlrtECI, sp);
    loop_ub = r125->size[0];
    emxFree_real_T(&node);
    for (i124 = 0; i124 < loop_ub; i124++) {
      Yfit->data[r124->data[i124]] = r125->data[i124];
    }

    emxFree_real_T(&r125);
    emxFree_int32_T(&r124);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void n_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4605], const real_T obj_Children[9210], const real_T obj_CutPoint
  [4605], const real_T obj_NodeMean[4605], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i26;
  int32_T loop_ub;
  int32_T i27;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r26;
  emxArray_real_T *r27;
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
    i26 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i26, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i26 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i26, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i26 = 0; i26 < loop_ub; i26++) {
      node->data[i26] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i26 = X->size[0];
      i27 = loop_ub + 1;
      if (!((i27 >= 1) && (i27 <= i26))) {
        emlrtDynamicBoundsCheckR2012b(i27, 1, i26, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i26 = (int32_T)m;
        if (!((i26 >= 1) && (i26 <= 4605))) {
          emlrtDynamicBoundsCheckR2012b(i26, 1, 4605, &s_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i26 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i26 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i26 >= 1) && (i26 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i26, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i26 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i26 >= 1) && (i26 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i26, 1, 10, &b_emlrtBCI, &b_st);
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

      i26 = node->size[0];
      i27 = 1 + loop_ub;
      if (!((i27 >= 1) && (i27 <= i26))) {
        emlrtDynamicBoundsCheckR2012b(i27, 1, i26, &f_emlrtBCI, &b_st);
      }

      node->data[i27 - 1] = m;
    }

    i26 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i26, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i26 = 0; i26 < loop_ub; i26++) {
      Yfit->data[i26] = 0.0;
    }

    emxInit_int32_T(sp, &r26, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i26 = r26->size[0];
    r26->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r26, i26, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i26 = 0; i26 < loop_ub; i26++) {
      r26->data[i26] = i26;
    }

    emxInit_real_T(sp, &r27, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i26 = r27->size[0];
    r27->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r27, i26, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i26 = 0; i26 < loop_ub; i26++) {
      r27->data[i26] = obj_NodeMean[(int32_T)node->data[i26] - 1];
    }

    i26 = node->size[0];
    iv328[0] = r26->size[0];
    iv329[0] = i26;
    emlrtSubAssignSizeCheckR2012b(iv328, 1, iv329, 1, &emlrtECI, sp);
    loop_ub = r27->size[0];
    emxFree_real_T(&node);
    for (i26 = 0; i26 < loop_ub; i26++) {
      Yfit->data[r26->data[i26]] = r27->data[i26];
    }

    emxFree_real_T(&r27);
    emxFree_int32_T(&r26);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void nb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4505], const real_T obj_Children[9010], const real_T obj_CutPoint
  [4505], const real_T obj_NodeMean[4505], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i76;
  int32_T loop_ub;
  int32_T i77;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r76;
  emxArray_real_T *r77;
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
    i76 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i76, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i76 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i76, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i76 = 0; i76 < loop_ub; i76++) {
      node->data[i76] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i76 = X->size[0];
      i77 = loop_ub + 1;
      if (!((i77 >= 1) && (i77 <= i76))) {
        emlrtDynamicBoundsCheckR2012b(i77, 1, i76, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i76 = (int32_T)m;
        if (!((i76 >= 1) && (i76 <= 4505))) {
          emlrtDynamicBoundsCheckR2012b(i76, 1, 4505, &sb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i76 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i76 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i76 >= 1) && (i76 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i76, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i76 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i76 >= 1) && (i76 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i76, 1, 10, &b_emlrtBCI, &b_st);
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

      i76 = node->size[0];
      i77 = 1 + loop_ub;
      if (!((i77 >= 1) && (i77 <= i76))) {
        emlrtDynamicBoundsCheckR2012b(i77, 1, i76, &f_emlrtBCI, &b_st);
      }

      node->data[i77 - 1] = m;
    }

    i76 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i76, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i76 = 0; i76 < loop_ub; i76++) {
      Yfit->data[i76] = 0.0;
    }

    emxInit_int32_T(sp, &r76, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i76 = r76->size[0];
    r76->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r76, i76, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i76 = 0; i76 < loop_ub; i76++) {
      r76->data[i76] = i76;
    }

    emxInit_real_T(sp, &r77, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i76 = r77->size[0];
    r77->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r77, i76, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i76 = 0; i76 < loop_ub; i76++) {
      r77->data[i76] = obj_NodeMean[(int32_T)node->data[i76] - 1];
    }

    i76 = node->size[0];
    iv378[0] = r76->size[0];
    iv379[0] = i76;
    emlrtSubAssignSizeCheckR2012b(iv378, 1, iv379, 1, &emlrtECI, sp);
    loop_ub = r77->size[0];
    emxFree_real_T(&node);
    for (i76 = 0; i76 < loop_ub; i76++) {
      Yfit->data[r76->data[i76]] = r77->data[i76];
    }

    emxFree_real_T(&r77);
    emxFree_int32_T(&r76);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void nc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4887], const real_T obj_Children[9774], const real_T obj_CutPoint
  [4887], const real_T obj_NodeMean[4887], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i126;
  int32_T loop_ub;
  int32_T i127;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r126;
  emxArray_real_T *r127;
  int32_T iv428[1];
  int32_T iv429[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i126 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i126, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i126 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i126, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i126 = 0; i126 < loop_ub; i126++) {
      node->data[i126] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i126 = X->size[0];
      i127 = loop_ub + 1;
      if (!((i127 >= 1) && (i127 <= i126))) {
        emlrtDynamicBoundsCheckR2012b(i127, 1, i126, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i126 = (int32_T)m;
        if (!((i126 >= 1) && (i126 <= 4887))) {
          emlrtDynamicBoundsCheckR2012b(i126, 1, 4887, &sc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i126 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i126 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i126 >= 1) && (i126 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i126, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i126 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i126 >= 1) && (i126 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i126, 1, 10, &b_emlrtBCI, &b_st);
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

      i126 = node->size[0];
      i127 = 1 + loop_ub;
      if (!((i127 >= 1) && (i127 <= i126))) {
        emlrtDynamicBoundsCheckR2012b(i127, 1, i126, &f_emlrtBCI, &b_st);
      }

      node->data[i127 - 1] = m;
    }

    i126 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i126, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i126 = 0; i126 < loop_ub; i126++) {
      Yfit->data[i126] = 0.0;
    }

    emxInit_int32_T(sp, &r126, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i126 = r126->size[0];
    r126->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r126, i126, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i126 = 0; i126 < loop_ub; i126++) {
      r126->data[i126] = i126;
    }

    emxInit_real_T(sp, &r127, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i126 = r127->size[0];
    r127->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r127, i126, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i126 = 0; i126 < loop_ub; i126++) {
      r127->data[i126] = obj_NodeMean[(int32_T)node->data[i126] - 1];
    }

    i126 = node->size[0];
    iv428[0] = r126->size[0];
    iv429[0] = i126;
    emlrtSubAssignSizeCheckR2012b(iv428, 1, iv429, 1, &emlrtECI, sp);
    loop_ub = r127->size[0];
    emxFree_real_T(&node);
    for (i126 = 0; i126 < loop_ub; i126++) {
      Yfit->data[r126->data[i126]] = r127->data[i126];
    }

    emxFree_real_T(&r127);
    emxFree_int32_T(&r126);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void o_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4681], const real_T obj_Children[9362], const real_T obj_CutPoint
  [4681], const real_T obj_NodeMean[4681], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i28;
  int32_T loop_ub;
  int32_T i29;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r28;
  emxArray_real_T *r29;
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
    i28 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i28, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i28 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i28, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i28 = 0; i28 < loop_ub; i28++) {
      node->data[i28] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i28 = X->size[0];
      i29 = loop_ub + 1;
      if (!((i29 >= 1) && (i29 <= i28))) {
        emlrtDynamicBoundsCheckR2012b(i29, 1, i28, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i28 = (int32_T)m;
        if (!((i28 >= 1) && (i28 <= 4681))) {
          emlrtDynamicBoundsCheckR2012b(i28, 1, 4681, &t_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i28 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i28 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i28 >= 1) && (i28 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i28, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i28 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i28 >= 1) && (i28 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i28, 1, 10, &b_emlrtBCI, &b_st);
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

      i28 = node->size[0];
      i29 = 1 + loop_ub;
      if (!((i29 >= 1) && (i29 <= i28))) {
        emlrtDynamicBoundsCheckR2012b(i29, 1, i28, &f_emlrtBCI, &b_st);
      }

      node->data[i29 - 1] = m;
    }

    i28 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i28, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i28 = 0; i28 < loop_ub; i28++) {
      Yfit->data[i28] = 0.0;
    }

    emxInit_int32_T(sp, &r28, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i28 = r28->size[0];
    r28->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r28, i28, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i28 = 0; i28 < loop_ub; i28++) {
      r28->data[i28] = i28;
    }

    emxInit_real_T(sp, &r29, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i28 = r29->size[0];
    r29->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r29, i28, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i28 = 0; i28 < loop_ub; i28++) {
      r29->data[i28] = obj_NodeMean[(int32_T)node->data[i28] - 1];
    }

    i28 = node->size[0];
    iv330[0] = r28->size[0];
    iv331[0] = i28;
    emlrtSubAssignSizeCheckR2012b(iv330, 1, iv331, 1, &emlrtECI, sp);
    loop_ub = r29->size[0];
    emxFree_real_T(&node);
    for (i28 = 0; i28 < loop_ub; i28++) {
      Yfit->data[r28->data[i28]] = r29->data[i28];
    }

    emxFree_real_T(&r29);
    emxFree_int32_T(&r28);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void ob_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4569], const real_T obj_Children[9138], const real_T obj_CutPoint
  [4569], const real_T obj_NodeMean[4569], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i78;
  int32_T loop_ub;
  int32_T i79;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r78;
  emxArray_real_T *r79;
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
    i78 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i78, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i78 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i78, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i78 = 0; i78 < loop_ub; i78++) {
      node->data[i78] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i78 = X->size[0];
      i79 = loop_ub + 1;
      if (!((i79 >= 1) && (i79 <= i78))) {
        emlrtDynamicBoundsCheckR2012b(i79, 1, i78, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i78 = (int32_T)m;
        if (!((i78 >= 1) && (i78 <= 4569))) {
          emlrtDynamicBoundsCheckR2012b(i78, 1, 4569, &tb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i78 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i78 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i78 >= 1) && (i78 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i78, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i78 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i78 >= 1) && (i78 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i78, 1, 10, &b_emlrtBCI, &b_st);
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

      i78 = node->size[0];
      i79 = 1 + loop_ub;
      if (!((i79 >= 1) && (i79 <= i78))) {
        emlrtDynamicBoundsCheckR2012b(i79, 1, i78, &f_emlrtBCI, &b_st);
      }

      node->data[i79 - 1] = m;
    }

    i78 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i78, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i78 = 0; i78 < loop_ub; i78++) {
      Yfit->data[i78] = 0.0;
    }

    emxInit_int32_T(sp, &r78, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i78 = r78->size[0];
    r78->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r78, i78, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i78 = 0; i78 < loop_ub; i78++) {
      r78->data[i78] = i78;
    }

    emxInit_real_T(sp, &r79, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i78 = r79->size[0];
    r79->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r79, i78, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i78 = 0; i78 < loop_ub; i78++) {
      r79->data[i78] = obj_NodeMean[(int32_T)node->data[i78] - 1];
    }

    i78 = node->size[0];
    iv380[0] = r78->size[0];
    iv381[0] = i78;
    emlrtSubAssignSizeCheckR2012b(iv380, 1, iv381, 1, &emlrtECI, sp);
    loop_ub = r79->size[0];
    emxFree_real_T(&node);
    for (i78 = 0; i78 < loop_ub; i78++) {
      Yfit->data[r78->data[i78]] = r79->data[i78];
    }

    emxFree_real_T(&r79);
    emxFree_int32_T(&r78);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void oc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4635], const real_T obj_Children[9270], const real_T obj_CutPoint
  [4635], const real_T obj_NodeMean[4635], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i128;
  int32_T loop_ub;
  int32_T i129;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r128;
  emxArray_real_T *r129;
  int32_T iv430[1];
  int32_T iv431[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i128 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i128, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i128 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i128, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i128 = 0; i128 < loop_ub; i128++) {
      node->data[i128] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i128 = X->size[0];
      i129 = loop_ub + 1;
      if (!((i129 >= 1) && (i129 <= i128))) {
        emlrtDynamicBoundsCheckR2012b(i129, 1, i128, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i128 = (int32_T)m;
        if (!((i128 >= 1) && (i128 <= 4635))) {
          emlrtDynamicBoundsCheckR2012b(i128, 1, 4635, &tc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i128 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i128 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i128 >= 1) && (i128 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i128, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i128 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i128 >= 1) && (i128 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i128, 1, 10, &b_emlrtBCI, &b_st);
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

      i128 = node->size[0];
      i129 = 1 + loop_ub;
      if (!((i129 >= 1) && (i129 <= i128))) {
        emlrtDynamicBoundsCheckR2012b(i129, 1, i128, &f_emlrtBCI, &b_st);
      }

      node->data[i129 - 1] = m;
    }

    i128 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i128, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i128 = 0; i128 < loop_ub; i128++) {
      Yfit->data[i128] = 0.0;
    }

    emxInit_int32_T(sp, &r128, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i128 = r128->size[0];
    r128->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r128, i128, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i128 = 0; i128 < loop_ub; i128++) {
      r128->data[i128] = i128;
    }

    emxInit_real_T(sp, &r129, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i128 = r129->size[0];
    r129->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r129, i128, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i128 = 0; i128 < loop_ub; i128++) {
      r129->data[i128] = obj_NodeMean[(int32_T)node->data[i128] - 1];
    }

    i128 = node->size[0];
    iv430[0] = r128->size[0];
    iv431[0] = i128;
    emlrtSubAssignSizeCheckR2012b(iv430, 1, iv431, 1, &emlrtECI, sp);
    loop_ub = r129->size[0];
    emxFree_real_T(&node);
    for (i128 = 0; i128 < loop_ub; i128++) {
      Yfit->data[r128->data[i128]] = r129->data[i128];
    }

    emxFree_real_T(&r129);
    emxFree_int32_T(&r128);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void p_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4697], const real_T obj_Children[9394], const real_T obj_CutPoint
  [4697], const real_T obj_NodeMean[4697], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i30;
  int32_T loop_ub;
  int32_T i31;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r30;
  emxArray_real_T *r31;
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
    i30 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i30, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i30 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i30, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i30 = 0; i30 < loop_ub; i30++) {
      node->data[i30] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i30 = X->size[0];
      i31 = loop_ub + 1;
      if (!((i31 >= 1) && (i31 <= i30))) {
        emlrtDynamicBoundsCheckR2012b(i31, 1, i30, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i30 = (int32_T)m;
        if (!((i30 >= 1) && (i30 <= 4697))) {
          emlrtDynamicBoundsCheckR2012b(i30, 1, 4697, &u_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i30 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i30 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i30 >= 1) && (i30 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i30, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i30 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i30 >= 1) && (i30 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i30, 1, 10, &b_emlrtBCI, &b_st);
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

      i30 = node->size[0];
      i31 = 1 + loop_ub;
      if (!((i31 >= 1) && (i31 <= i30))) {
        emlrtDynamicBoundsCheckR2012b(i31, 1, i30, &f_emlrtBCI, &b_st);
      }

      node->data[i31 - 1] = m;
    }

    i30 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i30, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i30 = 0; i30 < loop_ub; i30++) {
      Yfit->data[i30] = 0.0;
    }

    emxInit_int32_T(sp, &r30, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i30 = r30->size[0];
    r30->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r30, i30, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i30 = 0; i30 < loop_ub; i30++) {
      r30->data[i30] = i30;
    }

    emxInit_real_T(sp, &r31, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i30 = r31->size[0];
    r31->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r31, i30, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i30 = 0; i30 < loop_ub; i30++) {
      r31->data[i30] = obj_NodeMean[(int32_T)node->data[i30] - 1];
    }

    i30 = node->size[0];
    iv332[0] = r30->size[0];
    iv333[0] = i30;
    emlrtSubAssignSizeCheckR2012b(iv332, 1, iv333, 1, &emlrtECI, sp);
    loop_ub = r31->size[0];
    emxFree_real_T(&node);
    for (i30 = 0; i30 < loop_ub; i30++) {
      Yfit->data[r30->data[i30]] = r31->data[i30];
    }

    emxFree_real_T(&r31);
    emxFree_int32_T(&r30);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void pb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4631], const real_T obj_Children[9262], const real_T obj_CutPoint
  [4631], const real_T obj_NodeMean[4631], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i80;
  int32_T loop_ub;
  int32_T i81;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r80;
  emxArray_real_T *r81;
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
    i80 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i80, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i80 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i80, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i80 = 0; i80 < loop_ub; i80++) {
      node->data[i80] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i80 = X->size[0];
      i81 = loop_ub + 1;
      if (!((i81 >= 1) && (i81 <= i80))) {
        emlrtDynamicBoundsCheckR2012b(i81, 1, i80, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i80 = (int32_T)m;
        if (!((i80 >= 1) && (i80 <= 4631))) {
          emlrtDynamicBoundsCheckR2012b(i80, 1, 4631, &ub_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i80 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i80 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i80 >= 1) && (i80 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i80, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i80 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i80 >= 1) && (i80 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i80, 1, 10, &b_emlrtBCI, &b_st);
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

      i80 = node->size[0];
      i81 = 1 + loop_ub;
      if (!((i81 >= 1) && (i81 <= i80))) {
        emlrtDynamicBoundsCheckR2012b(i81, 1, i80, &f_emlrtBCI, &b_st);
      }

      node->data[i81 - 1] = m;
    }

    i80 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i80, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i80 = 0; i80 < loop_ub; i80++) {
      Yfit->data[i80] = 0.0;
    }

    emxInit_int32_T(sp, &r80, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i80 = r80->size[0];
    r80->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r80, i80, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i80 = 0; i80 < loop_ub; i80++) {
      r80->data[i80] = i80;
    }

    emxInit_real_T(sp, &r81, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i80 = r81->size[0];
    r81->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r81, i80, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i80 = 0; i80 < loop_ub; i80++) {
      r81->data[i80] = obj_NodeMean[(int32_T)node->data[i80] - 1];
    }

    i80 = node->size[0];
    iv382[0] = r80->size[0];
    iv383[0] = i80;
    emlrtSubAssignSizeCheckR2012b(iv382, 1, iv383, 1, &emlrtECI, sp);
    loop_ub = r81->size[0];
    emxFree_real_T(&node);
    for (i80 = 0; i80 < loop_ub; i80++) {
      Yfit->data[r80->data[i80]] = r81->data[i80];
    }

    emxFree_real_T(&r81);
    emxFree_int32_T(&r80);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void pc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4543], const real_T obj_Children[9086], const real_T obj_CutPoint
  [4543], const real_T obj_NodeMean[4543], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i130;
  int32_T loop_ub;
  int32_T i131;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r130;
  emxArray_real_T *r131;
  int32_T iv432[1];
  int32_T iv433[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i130 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i130, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i130 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i130, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i130 = 0; i130 < loop_ub; i130++) {
      node->data[i130] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i130 = X->size[0];
      i131 = loop_ub + 1;
      if (!((i131 >= 1) && (i131 <= i130))) {
        emlrtDynamicBoundsCheckR2012b(i131, 1, i130, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i130 = (int32_T)m;
        if (!((i130 >= 1) && (i130 <= 4543))) {
          emlrtDynamicBoundsCheckR2012b(i130, 1, 4543, &uc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i130 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i130 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i130 >= 1) && (i130 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i130, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i130 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i130 >= 1) && (i130 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i130, 1, 10, &b_emlrtBCI, &b_st);
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

      i130 = node->size[0];
      i131 = 1 + loop_ub;
      if (!((i131 >= 1) && (i131 <= i130))) {
        emlrtDynamicBoundsCheckR2012b(i131, 1, i130, &f_emlrtBCI, &b_st);
      }

      node->data[i131 - 1] = m;
    }

    i130 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i130, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i130 = 0; i130 < loop_ub; i130++) {
      Yfit->data[i130] = 0.0;
    }

    emxInit_int32_T(sp, &r130, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i130 = r130->size[0];
    r130->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r130, i130, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i130 = 0; i130 < loop_ub; i130++) {
      r130->data[i130] = i130;
    }

    emxInit_real_T(sp, &r131, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i130 = r131->size[0];
    r131->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r131, i130, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i130 = 0; i130 < loop_ub; i130++) {
      r131->data[i130] = obj_NodeMean[(int32_T)node->data[i130] - 1];
    }

    i130 = node->size[0];
    iv432[0] = r130->size[0];
    iv433[0] = i130;
    emlrtSubAssignSizeCheckR2012b(iv432, 1, iv433, 1, &emlrtECI, sp);
    loop_ub = r131->size[0];
    emxFree_real_T(&node);
    for (i130 = 0; i130 < loop_ub; i130++) {
      Yfit->data[r130->data[i130]] = r131->data[i130];
    }

    emxFree_real_T(&r131);
    emxFree_int32_T(&r130);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void q_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4815], const real_T obj_Children[9630], const real_T obj_CutPoint
  [4815], const real_T obj_NodeMean[4815], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i32;
  int32_T loop_ub;
  int32_T i33;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r32;
  emxArray_real_T *r33;
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
    i32 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i32, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i32 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i32, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i32 = 0; i32 < loop_ub; i32++) {
      node->data[i32] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i32 = X->size[0];
      i33 = loop_ub + 1;
      if (!((i33 >= 1) && (i33 <= i32))) {
        emlrtDynamicBoundsCheckR2012b(i33, 1, i32, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i32 = (int32_T)m;
        if (!((i32 >= 1) && (i32 <= 4815))) {
          emlrtDynamicBoundsCheckR2012b(i32, 1, 4815, &v_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i32 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i32 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i32 >= 1) && (i32 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i32, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i32 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i32 >= 1) && (i32 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i32, 1, 10, &b_emlrtBCI, &b_st);
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

      i32 = node->size[0];
      i33 = 1 + loop_ub;
      if (!((i33 >= 1) && (i33 <= i32))) {
        emlrtDynamicBoundsCheckR2012b(i33, 1, i32, &f_emlrtBCI, &b_st);
      }

      node->data[i33 - 1] = m;
    }

    i32 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i32, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i32 = 0; i32 < loop_ub; i32++) {
      Yfit->data[i32] = 0.0;
    }

    emxInit_int32_T(sp, &r32, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i32 = r32->size[0];
    r32->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r32, i32, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i32 = 0; i32 < loop_ub; i32++) {
      r32->data[i32] = i32;
    }

    emxInit_real_T(sp, &r33, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i32 = r33->size[0];
    r33->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r33, i32, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i32 = 0; i32 < loop_ub; i32++) {
      r33->data[i32] = obj_NodeMean[(int32_T)node->data[i32] - 1];
    }

    i32 = node->size[0];
    iv334[0] = r32->size[0];
    iv335[0] = i32;
    emlrtSubAssignSizeCheckR2012b(iv334, 1, iv335, 1, &emlrtECI, sp);
    loop_ub = r33->size[0];
    emxFree_real_T(&node);
    for (i32 = 0; i32 < loop_ub; i32++) {
      Yfit->data[r32->data[i32]] = r33->data[i32];
    }

    emxFree_real_T(&r33);
    emxFree_int32_T(&r32);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void qb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4603], const real_T obj_Children[9206], const real_T obj_CutPoint
  [4603], const real_T obj_NodeMean[4603], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i82;
  int32_T loop_ub;
  int32_T i83;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r82;
  emxArray_real_T *r83;
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
    i82 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i82, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i82 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i82, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i82 = 0; i82 < loop_ub; i82++) {
      node->data[i82] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i82 = X->size[0];
      i83 = loop_ub + 1;
      if (!((i83 >= 1) && (i83 <= i82))) {
        emlrtDynamicBoundsCheckR2012b(i83, 1, i82, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i82 = (int32_T)m;
        if (!((i82 >= 1) && (i82 <= 4603))) {
          emlrtDynamicBoundsCheckR2012b(i82, 1, 4603, &vb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i82 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i82 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i82 >= 1) && (i82 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i82, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i82 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i82 >= 1) && (i82 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i82, 1, 10, &b_emlrtBCI, &b_st);
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

      i82 = node->size[0];
      i83 = 1 + loop_ub;
      if (!((i83 >= 1) && (i83 <= i82))) {
        emlrtDynamicBoundsCheckR2012b(i83, 1, i82, &f_emlrtBCI, &b_st);
      }

      node->data[i83 - 1] = m;
    }

    i82 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i82, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i82 = 0; i82 < loop_ub; i82++) {
      Yfit->data[i82] = 0.0;
    }

    emxInit_int32_T(sp, &r82, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i82 = r82->size[0];
    r82->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r82, i82, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i82 = 0; i82 < loop_ub; i82++) {
      r82->data[i82] = i82;
    }

    emxInit_real_T(sp, &r83, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i82 = r83->size[0];
    r83->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r83, i82, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i82 = 0; i82 < loop_ub; i82++) {
      r83->data[i82] = obj_NodeMean[(int32_T)node->data[i82] - 1];
    }

    i82 = node->size[0];
    iv384[0] = r82->size[0];
    iv385[0] = i82;
    emlrtSubAssignSizeCheckR2012b(iv384, 1, iv385, 1, &emlrtECI, sp);
    loop_ub = r83->size[0];
    emxFree_real_T(&node);
    for (i82 = 0; i82 < loop_ub; i82++) {
      Yfit->data[r82->data[i82]] = r83->data[i82];
    }

    emxFree_real_T(&r83);
    emxFree_int32_T(&r82);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void qc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4565], const real_T obj_Children[9130], const real_T obj_CutPoint
  [4565], const real_T obj_NodeMean[4565], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i132;
  int32_T loop_ub;
  int32_T i133;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r132;
  emxArray_real_T *r133;
  int32_T iv434[1];
  int32_T iv435[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i132 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i132, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i132 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i132, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i132 = 0; i132 < loop_ub; i132++) {
      node->data[i132] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i132 = X->size[0];
      i133 = loop_ub + 1;
      if (!((i133 >= 1) && (i133 <= i132))) {
        emlrtDynamicBoundsCheckR2012b(i133, 1, i132, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i132 = (int32_T)m;
        if (!((i132 >= 1) && (i132 <= 4565))) {
          emlrtDynamicBoundsCheckR2012b(i132, 1, 4565, &vc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i132 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i132 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i132 >= 1) && (i132 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i132, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i132 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i132 >= 1) && (i132 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i132, 1, 10, &b_emlrtBCI, &b_st);
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

      i132 = node->size[0];
      i133 = 1 + loop_ub;
      if (!((i133 >= 1) && (i133 <= i132))) {
        emlrtDynamicBoundsCheckR2012b(i133, 1, i132, &f_emlrtBCI, &b_st);
      }

      node->data[i133 - 1] = m;
    }

    i132 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i132, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i132 = 0; i132 < loop_ub; i132++) {
      Yfit->data[i132] = 0.0;
    }

    emxInit_int32_T(sp, &r132, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i132 = r132->size[0];
    r132->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r132, i132, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i132 = 0; i132 < loop_ub; i132++) {
      r132->data[i132] = i132;
    }

    emxInit_real_T(sp, &r133, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i132 = r133->size[0];
    r133->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r133, i132, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i132 = 0; i132 < loop_ub; i132++) {
      r133->data[i132] = obj_NodeMean[(int32_T)node->data[i132] - 1];
    }

    i132 = node->size[0];
    iv434[0] = r132->size[0];
    iv435[0] = i132;
    emlrtSubAssignSizeCheckR2012b(iv434, 1, iv435, 1, &emlrtECI, sp);
    loop_ub = r133->size[0];
    emxFree_real_T(&node);
    for (i132 = 0; i132 < loop_ub; i132++) {
      Yfit->data[r132->data[i132]] = r133->data[i132];
    }

    emxFree_real_T(&r133);
    emxFree_int32_T(&r132);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void r_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4783], const real_T obj_Children[9566], const real_T obj_CutPoint
  [4783], const real_T obj_NodeMean[4783], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i34;
  int32_T loop_ub;
  int32_T i35;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r34;
  emxArray_real_T *r35;
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
    i34 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i34, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i34 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i34, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i34 = 0; i34 < loop_ub; i34++) {
      node->data[i34] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i34 = X->size[0];
      i35 = loop_ub + 1;
      if (!((i35 >= 1) && (i35 <= i34))) {
        emlrtDynamicBoundsCheckR2012b(i35, 1, i34, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i34 = (int32_T)m;
        if (!((i34 >= 1) && (i34 <= 4783))) {
          emlrtDynamicBoundsCheckR2012b(i34, 1, 4783, &w_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i34 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i34 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i34 >= 1) && (i34 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i34, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i34 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i34 >= 1) && (i34 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i34, 1, 10, &b_emlrtBCI, &b_st);
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

      i34 = node->size[0];
      i35 = 1 + loop_ub;
      if (!((i35 >= 1) && (i35 <= i34))) {
        emlrtDynamicBoundsCheckR2012b(i35, 1, i34, &f_emlrtBCI, &b_st);
      }

      node->data[i35 - 1] = m;
    }

    i34 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i34, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i34 = 0; i34 < loop_ub; i34++) {
      Yfit->data[i34] = 0.0;
    }

    emxInit_int32_T(sp, &r34, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i34 = r34->size[0];
    r34->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r34, i34, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i34 = 0; i34 < loop_ub; i34++) {
      r34->data[i34] = i34;
    }

    emxInit_real_T(sp, &r35, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i34 = r35->size[0];
    r35->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r35, i34, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i34 = 0; i34 < loop_ub; i34++) {
      r35->data[i34] = obj_NodeMean[(int32_T)node->data[i34] - 1];
    }

    i34 = node->size[0];
    iv336[0] = r34->size[0];
    iv337[0] = i34;
    emlrtSubAssignSizeCheckR2012b(iv336, 1, iv337, 1, &emlrtECI, sp);
    loop_ub = r35->size[0];
    emxFree_real_T(&node);
    for (i34 = 0; i34 < loop_ub; i34++) {
      Yfit->data[r34->data[i34]] = r35->data[i34];
    }

    emxFree_real_T(&r35);
    emxFree_int32_T(&r34);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void rb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4723], const real_T obj_Children[9446], const real_T obj_CutPoint
  [4723], const real_T obj_NodeMean[4723], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i84;
  int32_T loop_ub;
  int32_T i85;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r84;
  emxArray_real_T *r85;
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
    i84 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i84, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i84 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i84, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i84 = 0; i84 < loop_ub; i84++) {
      node->data[i84] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i84 = X->size[0];
      i85 = loop_ub + 1;
      if (!((i85 >= 1) && (i85 <= i84))) {
        emlrtDynamicBoundsCheckR2012b(i85, 1, i84, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i84 = (int32_T)m;
        if (!((i84 >= 1) && (i84 <= 4723))) {
          emlrtDynamicBoundsCheckR2012b(i84, 1, 4723, &wb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i84 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i84 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i84 >= 1) && (i84 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i84, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i84 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i84 >= 1) && (i84 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i84, 1, 10, &b_emlrtBCI, &b_st);
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

      i84 = node->size[0];
      i85 = 1 + loop_ub;
      if (!((i85 >= 1) && (i85 <= i84))) {
        emlrtDynamicBoundsCheckR2012b(i85, 1, i84, &f_emlrtBCI, &b_st);
      }

      node->data[i85 - 1] = m;
    }

    i84 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i84, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i84 = 0; i84 < loop_ub; i84++) {
      Yfit->data[i84] = 0.0;
    }

    emxInit_int32_T(sp, &r84, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i84 = r84->size[0];
    r84->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r84, i84, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i84 = 0; i84 < loop_ub; i84++) {
      r84->data[i84] = i84;
    }

    emxInit_real_T(sp, &r85, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i84 = r85->size[0];
    r85->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r85, i84, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i84 = 0; i84 < loop_ub; i84++) {
      r85->data[i84] = obj_NodeMean[(int32_T)node->data[i84] - 1];
    }

    i84 = node->size[0];
    iv386[0] = r84->size[0];
    iv387[0] = i84;
    emlrtSubAssignSizeCheckR2012b(iv386, 1, iv387, 1, &emlrtECI, sp);
    loop_ub = r85->size[0];
    emxFree_real_T(&node);
    for (i84 = 0; i84 < loop_ub; i84++) {
      Yfit->data[r84->data[i84]] = r85->data[i84];
    }

    emxFree_real_T(&r85);
    emxFree_int32_T(&r84);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void rc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4481], const real_T obj_Children[8962], const real_T obj_CutPoint
  [4481], const real_T obj_NodeMean[4481], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i134;
  int32_T loop_ub;
  int32_T i135;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r134;
  emxArray_real_T *r135;
  int32_T iv436[1];
  int32_T iv437[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i134 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i134, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i134 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i134, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i134 = 0; i134 < loop_ub; i134++) {
      node->data[i134] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i134 = X->size[0];
      i135 = loop_ub + 1;
      if (!((i135 >= 1) && (i135 <= i134))) {
        emlrtDynamicBoundsCheckR2012b(i135, 1, i134, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i134 = (int32_T)m;
        if (!((i134 >= 1) && (i134 <= 4481))) {
          emlrtDynamicBoundsCheckR2012b(i134, 1, 4481, &wc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i134 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i134 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i134 >= 1) && (i134 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i134, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i134 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i134 >= 1) && (i134 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i134, 1, 10, &b_emlrtBCI, &b_st);
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

      i134 = node->size[0];
      i135 = 1 + loop_ub;
      if (!((i135 >= 1) && (i135 <= i134))) {
        emlrtDynamicBoundsCheckR2012b(i135, 1, i134, &f_emlrtBCI, &b_st);
      }

      node->data[i135 - 1] = m;
    }

    i134 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i134, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i134 = 0; i134 < loop_ub; i134++) {
      Yfit->data[i134] = 0.0;
    }

    emxInit_int32_T(sp, &r134, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i134 = r134->size[0];
    r134->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r134, i134, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i134 = 0; i134 < loop_ub; i134++) {
      r134->data[i134] = i134;
    }

    emxInit_real_T(sp, &r135, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i134 = r135->size[0];
    r135->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r135, i134, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i134 = 0; i134 < loop_ub; i134++) {
      r135->data[i134] = obj_NodeMean[(int32_T)node->data[i134] - 1];
    }

    i134 = node->size[0];
    iv436[0] = r134->size[0];
    iv437[0] = i134;
    emlrtSubAssignSizeCheckR2012b(iv436, 1, iv437, 1, &emlrtECI, sp);
    loop_ub = r135->size[0];
    emxFree_real_T(&node);
    for (i134 = 0; i134 < loop_ub; i134++) {
      Yfit->data[r134->data[i134]] = r135->data[i134];
    }

    emxFree_real_T(&r135);
    emxFree_int32_T(&r134);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void s_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4393], const real_T obj_Children[8786], const real_T obj_CutPoint
  [4393], const real_T obj_NodeMean[4393], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i36;
  int32_T loop_ub;
  int32_T i37;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r36;
  emxArray_real_T *r37;
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
    i36 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i36, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i36 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i36, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i36 = 0; i36 < loop_ub; i36++) {
      node->data[i36] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i36 = X->size[0];
      i37 = loop_ub + 1;
      if (!((i37 >= 1) && (i37 <= i36))) {
        emlrtDynamicBoundsCheckR2012b(i37, 1, i36, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i36 = (int32_T)m;
        if (!((i36 >= 1) && (i36 <= 4393))) {
          emlrtDynamicBoundsCheckR2012b(i36, 1, 4393, &x_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i36 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i36 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i36 >= 1) && (i36 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i36, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i36 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i36 >= 1) && (i36 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i36, 1, 10, &b_emlrtBCI, &b_st);
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

      i36 = node->size[0];
      i37 = 1 + loop_ub;
      if (!((i37 >= 1) && (i37 <= i36))) {
        emlrtDynamicBoundsCheckR2012b(i37, 1, i36, &f_emlrtBCI, &b_st);
      }

      node->data[i37 - 1] = m;
    }

    i36 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i36, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i36 = 0; i36 < loop_ub; i36++) {
      Yfit->data[i36] = 0.0;
    }

    emxInit_int32_T(sp, &r36, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i36 = r36->size[0];
    r36->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r36, i36, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i36 = 0; i36 < loop_ub; i36++) {
      r36->data[i36] = i36;
    }

    emxInit_real_T(sp, &r37, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i36 = r37->size[0];
    r37->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r37, i36, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i36 = 0; i36 < loop_ub; i36++) {
      r37->data[i36] = obj_NodeMean[(int32_T)node->data[i36] - 1];
    }

    i36 = node->size[0];
    iv338[0] = r36->size[0];
    iv339[0] = i36;
    emlrtSubAssignSizeCheckR2012b(iv338, 1, iv339, 1, &emlrtECI, sp);
    loop_ub = r37->size[0];
    emxFree_real_T(&node);
    for (i36 = 0; i36 < loop_ub; i36++) {
      Yfit->data[r36->data[i36]] = r37->data[i36];
    }

    emxFree_real_T(&r37);
    emxFree_int32_T(&r36);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void sb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4693], const real_T obj_Children[9386], const real_T obj_CutPoint
  [4693], const real_T obj_NodeMean[4693], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i86;
  int32_T loop_ub;
  int32_T i87;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r86;
  emxArray_real_T *r87;
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
    i86 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i86, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i86 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i86, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i86 = 0; i86 < loop_ub; i86++) {
      node->data[i86] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i86 = X->size[0];
      i87 = loop_ub + 1;
      if (!((i87 >= 1) && (i87 <= i86))) {
        emlrtDynamicBoundsCheckR2012b(i87, 1, i86, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i86 = (int32_T)m;
        if (!((i86 >= 1) && (i86 <= 4693))) {
          emlrtDynamicBoundsCheckR2012b(i86, 1, 4693, &xb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i86 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i86 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i86 >= 1) && (i86 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i86, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i86 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i86 >= 1) && (i86 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i86, 1, 10, &b_emlrtBCI, &b_st);
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

      i86 = node->size[0];
      i87 = 1 + loop_ub;
      if (!((i87 >= 1) && (i87 <= i86))) {
        emlrtDynamicBoundsCheckR2012b(i87, 1, i86, &f_emlrtBCI, &b_st);
      }

      node->data[i87 - 1] = m;
    }

    i86 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i86, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i86 = 0; i86 < loop_ub; i86++) {
      Yfit->data[i86] = 0.0;
    }

    emxInit_int32_T(sp, &r86, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i86 = r86->size[0];
    r86->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r86, i86, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i86 = 0; i86 < loop_ub; i86++) {
      r86->data[i86] = i86;
    }

    emxInit_real_T(sp, &r87, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i86 = r87->size[0];
    r87->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r87, i86, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i86 = 0; i86 < loop_ub; i86++) {
      r87->data[i86] = obj_NodeMean[(int32_T)node->data[i86] - 1];
    }

    i86 = node->size[0];
    iv388[0] = r86->size[0];
    iv389[0] = i86;
    emlrtSubAssignSizeCheckR2012b(iv388, 1, iv389, 1, &emlrtECI, sp);
    loop_ub = r87->size[0];
    emxFree_real_T(&node);
    for (i86 = 0; i86 < loop_ub; i86++) {
      Yfit->data[r86->data[i86]] = r87->data[i86];
    }

    emxFree_real_T(&r87);
    emxFree_int32_T(&r86);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void sc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4673], const real_T obj_Children[9346], const real_T obj_CutPoint
  [4673], const real_T obj_NodeMean[4673], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i136;
  int32_T loop_ub;
  int32_T i137;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r136;
  emxArray_real_T *r137;
  int32_T iv438[1];
  int32_T iv439[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i136 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i136, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i136 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i136, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i136 = 0; i136 < loop_ub; i136++) {
      node->data[i136] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i136 = X->size[0];
      i137 = loop_ub + 1;
      if (!((i137 >= 1) && (i137 <= i136))) {
        emlrtDynamicBoundsCheckR2012b(i137, 1, i136, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i136 = (int32_T)m;
        if (!((i136 >= 1) && (i136 <= 4673))) {
          emlrtDynamicBoundsCheckR2012b(i136, 1, 4673, &xc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i136 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i136 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i136 >= 1) && (i136 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i136, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i136 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i136 >= 1) && (i136 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i136, 1, 10, &b_emlrtBCI, &b_st);
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

      i136 = node->size[0];
      i137 = 1 + loop_ub;
      if (!((i137 >= 1) && (i137 <= i136))) {
        emlrtDynamicBoundsCheckR2012b(i137, 1, i136, &f_emlrtBCI, &b_st);
      }

      node->data[i137 - 1] = m;
    }

    i136 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i136, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i136 = 0; i136 < loop_ub; i136++) {
      Yfit->data[i136] = 0.0;
    }

    emxInit_int32_T(sp, &r136, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i136 = r136->size[0];
    r136->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r136, i136, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i136 = 0; i136 < loop_ub; i136++) {
      r136->data[i136] = i136;
    }

    emxInit_real_T(sp, &r137, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i136 = r137->size[0];
    r137->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r137, i136, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i136 = 0; i136 < loop_ub; i136++) {
      r137->data[i136] = obj_NodeMean[(int32_T)node->data[i136] - 1];
    }

    i136 = node->size[0];
    iv438[0] = r136->size[0];
    iv439[0] = i136;
    emlrtSubAssignSizeCheckR2012b(iv438, 1, iv439, 1, &emlrtECI, sp);
    loop_ub = r137->size[0];
    emxFree_real_T(&node);
    for (i136 = 0; i136 < loop_ub; i136++) {
      Yfit->data[r136->data[i136]] = r137->data[i136];
    }

    emxFree_real_T(&r137);
    emxFree_int32_T(&r136);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void t_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4735], const real_T obj_Children[9470], const real_T obj_CutPoint
  [4735], const real_T obj_NodeMean[4735], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i38;
  int32_T loop_ub;
  int32_T i39;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r38;
  emxArray_real_T *r39;
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
    i38 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i38, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i38 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i38, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i38 = 0; i38 < loop_ub; i38++) {
      node->data[i38] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i38 = X->size[0];
      i39 = loop_ub + 1;
      if (!((i39 >= 1) && (i39 <= i38))) {
        emlrtDynamicBoundsCheckR2012b(i39, 1, i38, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i38 = (int32_T)m;
        if (!((i38 >= 1) && (i38 <= 4735))) {
          emlrtDynamicBoundsCheckR2012b(i38, 1, 4735, &y_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i38 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i38 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i38 >= 1) && (i38 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i38, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i38 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i38 >= 1) && (i38 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i38, 1, 10, &b_emlrtBCI, &b_st);
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

      i38 = node->size[0];
      i39 = 1 + loop_ub;
      if (!((i39 >= 1) && (i39 <= i38))) {
        emlrtDynamicBoundsCheckR2012b(i39, 1, i38, &f_emlrtBCI, &b_st);
      }

      node->data[i39 - 1] = m;
    }

    i38 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i38, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i38 = 0; i38 < loop_ub; i38++) {
      Yfit->data[i38] = 0.0;
    }

    emxInit_int32_T(sp, &r38, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i38 = r38->size[0];
    r38->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r38, i38, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i38 = 0; i38 < loop_ub; i38++) {
      r38->data[i38] = i38;
    }

    emxInit_real_T(sp, &r39, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i38 = r39->size[0];
    r39->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r39, i38, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i38 = 0; i38 < loop_ub; i38++) {
      r39->data[i38] = obj_NodeMean[(int32_T)node->data[i38] - 1];
    }

    i38 = node->size[0];
    iv340[0] = r38->size[0];
    iv341[0] = i38;
    emlrtSubAssignSizeCheckR2012b(iv340, 1, iv341, 1, &emlrtECI, sp);
    loop_ub = r39->size[0];
    emxFree_real_T(&node);
    for (i38 = 0; i38 < loop_ub; i38++) {
      Yfit->data[r38->data[i38]] = r39->data[i38];
    }

    emxFree_real_T(&r39);
    emxFree_int32_T(&r38);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void tb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4725], const real_T obj_Children[9450], const real_T obj_CutPoint
  [4725], const real_T obj_NodeMean[4725], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i88;
  int32_T loop_ub;
  int32_T i89;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r88;
  emxArray_real_T *r89;
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
    i88 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i88, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i88 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i88, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i88 = 0; i88 < loop_ub; i88++) {
      node->data[i88] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i88 = X->size[0];
      i89 = loop_ub + 1;
      if (!((i89 >= 1) && (i89 <= i88))) {
        emlrtDynamicBoundsCheckR2012b(i89, 1, i88, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i88 = (int32_T)m;
        if (!((i88 >= 1) && (i88 <= 4725))) {
          emlrtDynamicBoundsCheckR2012b(i88, 1, 4725, &yb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i88 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i88 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i88 >= 1) && (i88 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i88, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i88 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i88 >= 1) && (i88 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i88, 1, 10, &b_emlrtBCI, &b_st);
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

      i88 = node->size[0];
      i89 = 1 + loop_ub;
      if (!((i89 >= 1) && (i89 <= i88))) {
        emlrtDynamicBoundsCheckR2012b(i89, 1, i88, &f_emlrtBCI, &b_st);
      }

      node->data[i89 - 1] = m;
    }

    i88 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i88, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i88 = 0; i88 < loop_ub; i88++) {
      Yfit->data[i88] = 0.0;
    }

    emxInit_int32_T(sp, &r88, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i88 = r88->size[0];
    r88->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r88, i88, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i88 = 0; i88 < loop_ub; i88++) {
      r88->data[i88] = i88;
    }

    emxInit_real_T(sp, &r89, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i88 = r89->size[0];
    r89->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r89, i88, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i88 = 0; i88 < loop_ub; i88++) {
      r89->data[i88] = obj_NodeMean[(int32_T)node->data[i88] - 1];
    }

    i88 = node->size[0];
    iv390[0] = r88->size[0];
    iv391[0] = i88;
    emlrtSubAssignSizeCheckR2012b(iv390, 1, iv391, 1, &emlrtECI, sp);
    loop_ub = r89->size[0];
    emxFree_real_T(&node);
    for (i88 = 0; i88 < loop_ub; i88++) {
      Yfit->data[r88->data[i88]] = r89->data[i88];
    }

    emxFree_real_T(&r89);
    emxFree_int32_T(&r88);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void tc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4679], const real_T obj_Children[9358], const real_T obj_CutPoint
  [4679], const real_T obj_NodeMean[4679], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i138;
  int32_T loop_ub;
  int32_T i139;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r138;
  emxArray_real_T *r139;
  int32_T iv440[1];
  int32_T iv441[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i138 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i138, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i138 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i138, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i138 = 0; i138 < loop_ub; i138++) {
      node->data[i138] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i138 = X->size[0];
      i139 = loop_ub + 1;
      if (!((i139 >= 1) && (i139 <= i138))) {
        emlrtDynamicBoundsCheckR2012b(i139, 1, i138, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i138 = (int32_T)m;
        if (!((i138 >= 1) && (i138 <= 4679))) {
          emlrtDynamicBoundsCheckR2012b(i138, 1, 4679, &yc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i138 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i138 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i138 >= 1) && (i138 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i138, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i138 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i138 >= 1) && (i138 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i138, 1, 10, &b_emlrtBCI, &b_st);
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

      i138 = node->size[0];
      i139 = 1 + loop_ub;
      if (!((i139 >= 1) && (i139 <= i138))) {
        emlrtDynamicBoundsCheckR2012b(i139, 1, i138, &f_emlrtBCI, &b_st);
      }

      node->data[i139 - 1] = m;
    }

    i138 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i138, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i138 = 0; i138 < loop_ub; i138++) {
      Yfit->data[i138] = 0.0;
    }

    emxInit_int32_T(sp, &r138, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i138 = r138->size[0];
    r138->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r138, i138, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i138 = 0; i138 < loop_ub; i138++) {
      r138->data[i138] = i138;
    }

    emxInit_real_T(sp, &r139, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i138 = r139->size[0];
    r139->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r139, i138, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i138 = 0; i138 < loop_ub; i138++) {
      r139->data[i138] = obj_NodeMean[(int32_T)node->data[i138] - 1];
    }

    i138 = node->size[0];
    iv440[0] = r138->size[0];
    iv441[0] = i138;
    emlrtSubAssignSizeCheckR2012b(iv440, 1, iv441, 1, &emlrtECI, sp);
    loop_ub = r139->size[0];
    emxFree_real_T(&node);
    for (i138 = 0; i138 < loop_ub; i138++) {
      Yfit->data[r138->data[i138]] = r139->data[i138];
    }

    emxFree_real_T(&r139);
    emxFree_int32_T(&r138);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void u_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4645], const real_T obj_Children[9290], const real_T obj_CutPoint
  [4645], const real_T obj_NodeMean[4645], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i40;
  int32_T loop_ub;
  int32_T i41;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r40;
  emxArray_real_T *r41;
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
    i40 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i40, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i40 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i40, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i40 = 0; i40 < loop_ub; i40++) {
      node->data[i40] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i40 = X->size[0];
      i41 = loop_ub + 1;
      if (!((i41 >= 1) && (i41 <= i40))) {
        emlrtDynamicBoundsCheckR2012b(i41, 1, i40, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i40 = (int32_T)m;
        if (!((i40 >= 1) && (i40 <= 4645))) {
          emlrtDynamicBoundsCheckR2012b(i40, 1, 4645, &ab_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i40 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i40 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i40 >= 1) && (i40 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i40, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i40 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i40 >= 1) && (i40 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i40, 1, 10, &b_emlrtBCI, &b_st);
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

      i40 = node->size[0];
      i41 = 1 + loop_ub;
      if (!((i41 >= 1) && (i41 <= i40))) {
        emlrtDynamicBoundsCheckR2012b(i41, 1, i40, &f_emlrtBCI, &b_st);
      }

      node->data[i41 - 1] = m;
    }

    i40 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i40, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i40 = 0; i40 < loop_ub; i40++) {
      Yfit->data[i40] = 0.0;
    }

    emxInit_int32_T(sp, &r40, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i40 = r40->size[0];
    r40->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r40, i40, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i40 = 0; i40 < loop_ub; i40++) {
      r40->data[i40] = i40;
    }

    emxInit_real_T(sp, &r41, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i40 = r41->size[0];
    r41->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r41, i40, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i40 = 0; i40 < loop_ub; i40++) {
      r41->data[i40] = obj_NodeMean[(int32_T)node->data[i40] - 1];
    }

    i40 = node->size[0];
    iv342[0] = r40->size[0];
    iv343[0] = i40;
    emlrtSubAssignSizeCheckR2012b(iv342, 1, iv343, 1, &emlrtECI, sp);
    loop_ub = r41->size[0];
    emxFree_real_T(&node);
    for (i40 = 0; i40 < loop_ub; i40++) {
      Yfit->data[r40->data[i40]] = r41->data[i40];
    }

    emxFree_real_T(&r41);
    emxFree_int32_T(&r40);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void ub_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4653], const real_T obj_Children[9306], const real_T obj_CutPoint
  [4653], const real_T obj_NodeMean[4653], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i90;
  int32_T loop_ub;
  int32_T i91;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r90;
  emxArray_real_T *r91;
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
    i90 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i90, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i90 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i90, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i90 = 0; i90 < loop_ub; i90++) {
      node->data[i90] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i90 = X->size[0];
      i91 = loop_ub + 1;
      if (!((i91 >= 1) && (i91 <= i90))) {
        emlrtDynamicBoundsCheckR2012b(i91, 1, i90, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i90 = (int32_T)m;
        if (!((i90 >= 1) && (i90 <= 4653))) {
          emlrtDynamicBoundsCheckR2012b(i90, 1, 4653, &ac_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i90 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i90 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i90 >= 1) && (i90 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i90, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i90 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i90 >= 1) && (i90 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i90, 1, 10, &b_emlrtBCI, &b_st);
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

      i90 = node->size[0];
      i91 = 1 + loop_ub;
      if (!((i91 >= 1) && (i91 <= i90))) {
        emlrtDynamicBoundsCheckR2012b(i91, 1, i90, &f_emlrtBCI, &b_st);
      }

      node->data[i91 - 1] = m;
    }

    i90 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i90, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i90 = 0; i90 < loop_ub; i90++) {
      Yfit->data[i90] = 0.0;
    }

    emxInit_int32_T(sp, &r90, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i90 = r90->size[0];
    r90->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r90, i90, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i90 = 0; i90 < loop_ub; i90++) {
      r90->data[i90] = i90;
    }

    emxInit_real_T(sp, &r91, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i90 = r91->size[0];
    r91->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r91, i90, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i90 = 0; i90 < loop_ub; i90++) {
      r91->data[i90] = obj_NodeMean[(int32_T)node->data[i90] - 1];
    }

    i90 = node->size[0];
    iv392[0] = r90->size[0];
    iv393[0] = i90;
    emlrtSubAssignSizeCheckR2012b(iv392, 1, iv393, 1, &emlrtECI, sp);
    loop_ub = r91->size[0];
    emxFree_real_T(&node);
    for (i90 = 0; i90 < loop_ub; i90++) {
      Yfit->data[r90->data[i90]] = r91->data[i90];
    }

    emxFree_real_T(&r91);
    emxFree_int32_T(&r90);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void uc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4443], const real_T obj_Children[8886], const real_T obj_CutPoint
  [4443], const real_T obj_NodeMean[4443], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i140;
  int32_T loop_ub;
  int32_T i141;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r140;
  emxArray_real_T *r141;
  int32_T iv442[1];
  int32_T iv443[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i140 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i140, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i140 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i140, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i140 = 0; i140 < loop_ub; i140++) {
      node->data[i140] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i140 = X->size[0];
      i141 = loop_ub + 1;
      if (!((i141 >= 1) && (i141 <= i140))) {
        emlrtDynamicBoundsCheckR2012b(i141, 1, i140, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i140 = (int32_T)m;
        if (!((i140 >= 1) && (i140 <= 4443))) {
          emlrtDynamicBoundsCheckR2012b(i140, 1, 4443, &ad_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i140 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i140 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i140 >= 1) && (i140 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i140, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i140 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i140 >= 1) && (i140 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i140, 1, 10, &b_emlrtBCI, &b_st);
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

      i140 = node->size[0];
      i141 = 1 + loop_ub;
      if (!((i141 >= 1) && (i141 <= i140))) {
        emlrtDynamicBoundsCheckR2012b(i141, 1, i140, &f_emlrtBCI, &b_st);
      }

      node->data[i141 - 1] = m;
    }

    i140 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i140, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i140 = 0; i140 < loop_ub; i140++) {
      Yfit->data[i140] = 0.0;
    }

    emxInit_int32_T(sp, &r140, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i140 = r140->size[0];
    r140->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r140, i140, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i140 = 0; i140 < loop_ub; i140++) {
      r140->data[i140] = i140;
    }

    emxInit_real_T(sp, &r141, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i140 = r141->size[0];
    r141->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r141, i140, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i140 = 0; i140 < loop_ub; i140++) {
      r141->data[i140] = obj_NodeMean[(int32_T)node->data[i140] - 1];
    }

    i140 = node->size[0];
    iv442[0] = r140->size[0];
    iv443[0] = i140;
    emlrtSubAssignSizeCheckR2012b(iv442, 1, iv443, 1, &emlrtECI, sp);
    loop_ub = r141->size[0];
    emxFree_real_T(&node);
    for (i140 = 0; i140 < loop_ub; i140++) {
      Yfit->data[r140->data[i140]] = r141->data[i140];
    }

    emxFree_real_T(&r141);
    emxFree_int32_T(&r140);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void v_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4663], const real_T obj_Children[9326], const real_T obj_CutPoint
  [4663], const real_T obj_NodeMean[4663], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i42;
  int32_T loop_ub;
  int32_T i43;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r42;
  emxArray_real_T *r43;
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
    i42 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i42, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i42 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i42, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i42 = 0; i42 < loop_ub; i42++) {
      node->data[i42] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i42 = X->size[0];
      i43 = loop_ub + 1;
      if (!((i43 >= 1) && (i43 <= i42))) {
        emlrtDynamicBoundsCheckR2012b(i43, 1, i42, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i42 = (int32_T)m;
        if (!((i42 >= 1) && (i42 <= 4663))) {
          emlrtDynamicBoundsCheckR2012b(i42, 1, 4663, &bb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i42 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i42 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i42 >= 1) && (i42 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i42, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i42 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i42 >= 1) && (i42 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i42, 1, 10, &b_emlrtBCI, &b_st);
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

      i42 = node->size[0];
      i43 = 1 + loop_ub;
      if (!((i43 >= 1) && (i43 <= i42))) {
        emlrtDynamicBoundsCheckR2012b(i43, 1, i42, &f_emlrtBCI, &b_st);
      }

      node->data[i43 - 1] = m;
    }

    i42 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i42, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i42 = 0; i42 < loop_ub; i42++) {
      Yfit->data[i42] = 0.0;
    }

    emxInit_int32_T(sp, &r42, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i42 = r42->size[0];
    r42->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r42, i42, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i42 = 0; i42 < loop_ub; i42++) {
      r42->data[i42] = i42;
    }

    emxInit_real_T(sp, &r43, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i42 = r43->size[0];
    r43->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r43, i42, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i42 = 0; i42 < loop_ub; i42++) {
      r43->data[i42] = obj_NodeMean[(int32_T)node->data[i42] - 1];
    }

    i42 = node->size[0];
    iv344[0] = r42->size[0];
    iv345[0] = i42;
    emlrtSubAssignSizeCheckR2012b(iv344, 1, iv345, 1, &emlrtECI, sp);
    loop_ub = r43->size[0];
    emxFree_real_T(&node);
    for (i42 = 0; i42 < loop_ub; i42++) {
      Yfit->data[r42->data[i42]] = r43->data[i42];
    }

    emxFree_real_T(&r43);
    emxFree_int32_T(&r42);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void vb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4647], const real_T obj_Children[9294], const real_T obj_CutPoint
  [4647], const real_T obj_NodeMean[4647], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i92;
  int32_T loop_ub;
  int32_T i93;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r92;
  emxArray_real_T *r93;
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
    i92 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i92, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i92 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i92, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i92 = 0; i92 < loop_ub; i92++) {
      node->data[i92] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i92 = X->size[0];
      i93 = loop_ub + 1;
      if (!((i93 >= 1) && (i93 <= i92))) {
        emlrtDynamicBoundsCheckR2012b(i93, 1, i92, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i92 = (int32_T)m;
        if (!((i92 >= 1) && (i92 <= 4647))) {
          emlrtDynamicBoundsCheckR2012b(i92, 1, 4647, &bc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i92 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i92 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i92 >= 1) && (i92 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i92, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i92 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i92 >= 1) && (i92 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i92, 1, 10, &b_emlrtBCI, &b_st);
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

      i92 = node->size[0];
      i93 = 1 + loop_ub;
      if (!((i93 >= 1) && (i93 <= i92))) {
        emlrtDynamicBoundsCheckR2012b(i93, 1, i92, &f_emlrtBCI, &b_st);
      }

      node->data[i93 - 1] = m;
    }

    i92 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i92, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i92 = 0; i92 < loop_ub; i92++) {
      Yfit->data[i92] = 0.0;
    }

    emxInit_int32_T(sp, &r92, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i92 = r92->size[0];
    r92->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r92, i92, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i92 = 0; i92 < loop_ub; i92++) {
      r92->data[i92] = i92;
    }

    emxInit_real_T(sp, &r93, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i92 = r93->size[0];
    r93->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r93, i92, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i92 = 0; i92 < loop_ub; i92++) {
      r93->data[i92] = obj_NodeMean[(int32_T)node->data[i92] - 1];
    }

    i92 = node->size[0];
    iv394[0] = r92->size[0];
    iv395[0] = i92;
    emlrtSubAssignSizeCheckR2012b(iv394, 1, iv395, 1, &emlrtECI, sp);
    loop_ub = r93->size[0];
    emxFree_real_T(&node);
    for (i92 = 0; i92 < loop_ub; i92++) {
      Yfit->data[r92->data[i92]] = r93->data[i92];
    }

    emxFree_real_T(&r93);
    emxFree_int32_T(&r92);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void vc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4749], const real_T obj_Children[9498], const real_T obj_CutPoint
  [4749], const real_T obj_NodeMean[4749], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i142;
  int32_T loop_ub;
  int32_T i143;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r142;
  emxArray_real_T *r143;
  int32_T iv444[1];
  int32_T iv445[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i142 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i142, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i142 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i142, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i142 = 0; i142 < loop_ub; i142++) {
      node->data[i142] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i142 = X->size[0];
      i143 = loop_ub + 1;
      if (!((i143 >= 1) && (i143 <= i142))) {
        emlrtDynamicBoundsCheckR2012b(i143, 1, i142, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i142 = (int32_T)m;
        if (!((i142 >= 1) && (i142 <= 4749))) {
          emlrtDynamicBoundsCheckR2012b(i142, 1, 4749, &bd_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i142 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i142 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i142 >= 1) && (i142 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i142, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i142 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i142 >= 1) && (i142 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i142, 1, 10, &b_emlrtBCI, &b_st);
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

      i142 = node->size[0];
      i143 = 1 + loop_ub;
      if (!((i143 >= 1) && (i143 <= i142))) {
        emlrtDynamicBoundsCheckR2012b(i143, 1, i142, &f_emlrtBCI, &b_st);
      }

      node->data[i143 - 1] = m;
    }

    i142 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i142, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i142 = 0; i142 < loop_ub; i142++) {
      Yfit->data[i142] = 0.0;
    }

    emxInit_int32_T(sp, &r142, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i142 = r142->size[0];
    r142->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r142, i142, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i142 = 0; i142 < loop_ub; i142++) {
      r142->data[i142] = i142;
    }

    emxInit_real_T(sp, &r143, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i142 = r143->size[0];
    r143->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r143, i142, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i142 = 0; i142 < loop_ub; i142++) {
      r143->data[i142] = obj_NodeMean[(int32_T)node->data[i142] - 1];
    }

    i142 = node->size[0];
    iv444[0] = r142->size[0];
    iv445[0] = i142;
    emlrtSubAssignSizeCheckR2012b(iv444, 1, iv445, 1, &emlrtECI, sp);
    loop_ub = r143->size[0];
    emxFree_real_T(&node);
    for (i142 = 0; i142 < loop_ub; i142++) {
      Yfit->data[r142->data[i142]] = r143->data[i142];
    }

    emxFree_real_T(&r143);
    emxFree_int32_T(&r142);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void w_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4759], const real_T obj_Children[9518], const real_T obj_CutPoint
  [4759], const real_T obj_NodeMean[4759], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i44;
  int32_T loop_ub;
  int32_T i45;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r44;
  emxArray_real_T *r45;
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
    i44 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i44, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i44 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i44, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i44 = 0; i44 < loop_ub; i44++) {
      node->data[i44] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i44 = X->size[0];
      i45 = loop_ub + 1;
      if (!((i45 >= 1) && (i45 <= i44))) {
        emlrtDynamicBoundsCheckR2012b(i45, 1, i44, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i44 = (int32_T)m;
        if (!((i44 >= 1) && (i44 <= 4759))) {
          emlrtDynamicBoundsCheckR2012b(i44, 1, 4759, &cb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i44 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i44 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i44 >= 1) && (i44 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i44, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i44 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i44 >= 1) && (i44 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i44, 1, 10, &b_emlrtBCI, &b_st);
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

      i44 = node->size[0];
      i45 = 1 + loop_ub;
      if (!((i45 >= 1) && (i45 <= i44))) {
        emlrtDynamicBoundsCheckR2012b(i45, 1, i44, &f_emlrtBCI, &b_st);
      }

      node->data[i45 - 1] = m;
    }

    i44 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i44, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i44 = 0; i44 < loop_ub; i44++) {
      Yfit->data[i44] = 0.0;
    }

    emxInit_int32_T(sp, &r44, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i44 = r44->size[0];
    r44->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r44, i44, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i44 = 0; i44 < loop_ub; i44++) {
      r44->data[i44] = i44;
    }

    emxInit_real_T(sp, &r45, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i44 = r45->size[0];
    r45->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r45, i44, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i44 = 0; i44 < loop_ub; i44++) {
      r45->data[i44] = obj_NodeMean[(int32_T)node->data[i44] - 1];
    }

    i44 = node->size[0];
    iv346[0] = r44->size[0];
    iv347[0] = i44;
    emlrtSubAssignSizeCheckR2012b(iv346, 1, iv347, 1, &emlrtECI, sp);
    loop_ub = r45->size[0];
    emxFree_real_T(&node);
    for (i44 = 0; i44 < loop_ub; i44++) {
      Yfit->data[r44->data[i44]] = r45->data[i44];
    }

    emxFree_real_T(&r45);
    emxFree_int32_T(&r44);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void wb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4781], const real_T obj_Children[9562], const real_T obj_CutPoint
  [4781], const real_T obj_NodeMean[4781], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i94;
  int32_T loop_ub;
  int32_T i95;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r94;
  emxArray_real_T *r95;
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
    i94 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i94, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i94 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i94, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i94 = 0; i94 < loop_ub; i94++) {
      node->data[i94] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i94 = X->size[0];
      i95 = loop_ub + 1;
      if (!((i95 >= 1) && (i95 <= i94))) {
        emlrtDynamicBoundsCheckR2012b(i95, 1, i94, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i94 = (int32_T)m;
        if (!((i94 >= 1) && (i94 <= 4781))) {
          emlrtDynamicBoundsCheckR2012b(i94, 1, 4781, &cc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i94 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i94 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i94 >= 1) && (i94 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i94, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i94 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i94 >= 1) && (i94 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i94, 1, 10, &b_emlrtBCI, &b_st);
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

      i94 = node->size[0];
      i95 = 1 + loop_ub;
      if (!((i95 >= 1) && (i95 <= i94))) {
        emlrtDynamicBoundsCheckR2012b(i95, 1, i94, &f_emlrtBCI, &b_st);
      }

      node->data[i95 - 1] = m;
    }

    i94 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i94, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i94 = 0; i94 < loop_ub; i94++) {
      Yfit->data[i94] = 0.0;
    }

    emxInit_int32_T(sp, &r94, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i94 = r94->size[0];
    r94->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r94, i94, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i94 = 0; i94 < loop_ub; i94++) {
      r94->data[i94] = i94;
    }

    emxInit_real_T(sp, &r95, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i94 = r95->size[0];
    r95->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r95, i94, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i94 = 0; i94 < loop_ub; i94++) {
      r95->data[i94] = obj_NodeMean[(int32_T)node->data[i94] - 1];
    }

    i94 = node->size[0];
    iv396[0] = r94->size[0];
    iv397[0] = i94;
    emlrtSubAssignSizeCheckR2012b(iv396, 1, iv397, 1, &emlrtECI, sp);
    loop_ub = r95->size[0];
    emxFree_real_T(&node);
    for (i94 = 0; i94 < loop_ub; i94++) {
      Yfit->data[r94->data[i94]] = r95->data[i94];
    }

    emxFree_real_T(&r95);
    emxFree_int32_T(&r94);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void wc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4591], const real_T obj_Children[9182], const real_T obj_CutPoint
  [4591], const real_T obj_NodeMean[4591], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i144;
  int32_T loop_ub;
  int32_T i145;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r144;
  emxArray_real_T *r145;
  int32_T iv446[1];
  int32_T iv447[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i144 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i144, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i144 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i144, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i144 = 0; i144 < loop_ub; i144++) {
      node->data[i144] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i144 = X->size[0];
      i145 = loop_ub + 1;
      if (!((i145 >= 1) && (i145 <= i144))) {
        emlrtDynamicBoundsCheckR2012b(i145, 1, i144, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i144 = (int32_T)m;
        if (!((i144 >= 1) && (i144 <= 4591))) {
          emlrtDynamicBoundsCheckR2012b(i144, 1, 4591, &cd_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i144 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i144 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i144 >= 1) && (i144 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i144, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i144 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i144 >= 1) && (i144 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i144, 1, 10, &b_emlrtBCI, &b_st);
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

      i144 = node->size[0];
      i145 = 1 + loop_ub;
      if (!((i145 >= 1) && (i145 <= i144))) {
        emlrtDynamicBoundsCheckR2012b(i145, 1, i144, &f_emlrtBCI, &b_st);
      }

      node->data[i145 - 1] = m;
    }

    i144 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i144, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i144 = 0; i144 < loop_ub; i144++) {
      Yfit->data[i144] = 0.0;
    }

    emxInit_int32_T(sp, &r144, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i144 = r144->size[0];
    r144->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r144, i144, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i144 = 0; i144 < loop_ub; i144++) {
      r144->data[i144] = i144;
    }

    emxInit_real_T(sp, &r145, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i144 = r145->size[0];
    r145->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r145, i144, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i144 = 0; i144 < loop_ub; i144++) {
      r145->data[i144] = obj_NodeMean[(int32_T)node->data[i144] - 1];
    }

    i144 = node->size[0];
    iv446[0] = r144->size[0];
    iv447[0] = i144;
    emlrtSubAssignSizeCheckR2012b(iv446, 1, iv447, 1, &emlrtECI, sp);
    loop_ub = r145->size[0];
    emxFree_real_T(&node);
    for (i144 = 0; i144 < loop_ub; i144++) {
      Yfit->data[r144->data[i144]] = r145->data[i144];
    }

    emxFree_real_T(&r145);
    emxFree_int32_T(&r144);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void x_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4717], const real_T obj_Children[9434], const real_T obj_CutPoint
  [4717], const real_T obj_NodeMean[4717], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i46;
  int32_T loop_ub;
  int32_T i47;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r46;
  emxArray_real_T *r47;
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
    i46 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i46, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i46 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i46, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i46 = 0; i46 < loop_ub; i46++) {
      node->data[i46] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i46 = X->size[0];
      i47 = loop_ub + 1;
      if (!((i47 >= 1) && (i47 <= i46))) {
        emlrtDynamicBoundsCheckR2012b(i47, 1, i46, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i46 = (int32_T)m;
        if (!((i46 >= 1) && (i46 <= 4717))) {
          emlrtDynamicBoundsCheckR2012b(i46, 1, 4717, &db_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i46 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i46 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i46 >= 1) && (i46 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i46, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i46 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i46 >= 1) && (i46 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i46, 1, 10, &b_emlrtBCI, &b_st);
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

      i46 = node->size[0];
      i47 = 1 + loop_ub;
      if (!((i47 >= 1) && (i47 <= i46))) {
        emlrtDynamicBoundsCheckR2012b(i47, 1, i46, &f_emlrtBCI, &b_st);
      }

      node->data[i47 - 1] = m;
    }

    i46 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i46, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i46 = 0; i46 < loop_ub; i46++) {
      Yfit->data[i46] = 0.0;
    }

    emxInit_int32_T(sp, &r46, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i46 = r46->size[0];
    r46->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r46, i46, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i46 = 0; i46 < loop_ub; i46++) {
      r46->data[i46] = i46;
    }

    emxInit_real_T(sp, &r47, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i46 = r47->size[0];
    r47->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r47, i46, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i46 = 0; i46 < loop_ub; i46++) {
      r47->data[i46] = obj_NodeMean[(int32_T)node->data[i46] - 1];
    }

    i46 = node->size[0];
    iv348[0] = r46->size[0];
    iv349[0] = i46;
    emlrtSubAssignSizeCheckR2012b(iv348, 1, iv349, 1, &emlrtECI, sp);
    loop_ub = r47->size[0];
    emxFree_real_T(&node);
    for (i46 = 0; i46 < loop_ub; i46++) {
      Yfit->data[r46->data[i46]] = r47->data[i46];
    }

    emxFree_real_T(&r47);
    emxFree_int32_T(&r46);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void xb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4511], const real_T obj_Children[9022], const real_T obj_CutPoint
  [4511], const real_T obj_NodeMean[4511], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i96;
  int32_T loop_ub;
  int32_T i97;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r96;
  emxArray_real_T *r97;
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
    i96 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i96, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i96 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i96, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i96 = 0; i96 < loop_ub; i96++) {
      node->data[i96] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i96 = X->size[0];
      i97 = loop_ub + 1;
      if (!((i97 >= 1) && (i97 <= i96))) {
        emlrtDynamicBoundsCheckR2012b(i97, 1, i96, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i96 = (int32_T)m;
        if (!((i96 >= 1) && (i96 <= 4511))) {
          emlrtDynamicBoundsCheckR2012b(i96, 1, 4511, &dc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i96 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i96 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i96 >= 1) && (i96 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i96, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i96 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i96 >= 1) && (i96 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i96, 1, 10, &b_emlrtBCI, &b_st);
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

      i96 = node->size[0];
      i97 = 1 + loop_ub;
      if (!((i97 >= 1) && (i97 <= i96))) {
        emlrtDynamicBoundsCheckR2012b(i97, 1, i96, &f_emlrtBCI, &b_st);
      }

      node->data[i97 - 1] = m;
    }

    i96 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i96, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i96 = 0; i96 < loop_ub; i96++) {
      Yfit->data[i96] = 0.0;
    }

    emxInit_int32_T(sp, &r96, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i96 = r96->size[0];
    r96->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r96, i96, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i96 = 0; i96 < loop_ub; i96++) {
      r96->data[i96] = i96;
    }

    emxInit_real_T(sp, &r97, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i96 = r97->size[0];
    r97->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r97, i96, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i96 = 0; i96 < loop_ub; i96++) {
      r97->data[i96] = obj_NodeMean[(int32_T)node->data[i96] - 1];
    }

    i96 = node->size[0];
    iv398[0] = r96->size[0];
    iv399[0] = i96;
    emlrtSubAssignSizeCheckR2012b(iv398, 1, iv399, 1, &emlrtECI, sp);
    loop_ub = r97->size[0];
    emxFree_real_T(&node);
    for (i96 = 0; i96 < loop_ub; i96++) {
      Yfit->data[r96->data[i96]] = r97->data[i96];
    }

    emxFree_real_T(&r97);
    emxFree_int32_T(&r96);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void xc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4555], const real_T obj_Children[9110], const real_T obj_CutPoint
  [4555], const real_T obj_NodeMean[4555], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i146;
  int32_T loop_ub;
  int32_T i147;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r146;
  emxArray_real_T *r147;
  int32_T iv448[1];
  int32_T iv449[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i146 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i146, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i146 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i146, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i146 = 0; i146 < loop_ub; i146++) {
      node->data[i146] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i146 = X->size[0];
      i147 = loop_ub + 1;
      if (!((i147 >= 1) && (i147 <= i146))) {
        emlrtDynamicBoundsCheckR2012b(i147, 1, i146, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i146 = (int32_T)m;
        if (!((i146 >= 1) && (i146 <= 4555))) {
          emlrtDynamicBoundsCheckR2012b(i146, 1, 4555, &dd_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i146 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i146 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i146 >= 1) && (i146 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i146, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i146 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i146 >= 1) && (i146 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i146, 1, 10, &b_emlrtBCI, &b_st);
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

      i146 = node->size[0];
      i147 = 1 + loop_ub;
      if (!((i147 >= 1) && (i147 <= i146))) {
        emlrtDynamicBoundsCheckR2012b(i147, 1, i146, &f_emlrtBCI, &b_st);
      }

      node->data[i147 - 1] = m;
    }

    i146 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i146, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i146 = 0; i146 < loop_ub; i146++) {
      Yfit->data[i146] = 0.0;
    }

    emxInit_int32_T(sp, &r146, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i146 = r146->size[0];
    r146->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r146, i146, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i146 = 0; i146 < loop_ub; i146++) {
      r146->data[i146] = i146;
    }

    emxInit_real_T(sp, &r147, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i146 = r147->size[0];
    r147->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r147, i146, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i146 = 0; i146 < loop_ub; i146++) {
      r147->data[i146] = obj_NodeMean[(int32_T)node->data[i146] - 1];
    }

    i146 = node->size[0];
    iv448[0] = r146->size[0];
    iv449[0] = i146;
    emlrtSubAssignSizeCheckR2012b(iv448, 1, iv449, 1, &emlrtECI, sp);
    loop_ub = r147->size[0];
    emxFree_real_T(&node);
    for (i146 = 0; i146 < loop_ub; i146++) {
      Yfit->data[r146->data[i146]] = r147->data[i146];
    }

    emxFree_real_T(&r147);
    emxFree_int32_T(&r146);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void y_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4617], const real_T obj_Children[9234], const real_T obj_CutPoint
  [4617], const real_T obj_NodeMean[4617], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i48;
  int32_T loop_ub;
  int32_T i49;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r48;
  emxArray_real_T *r49;
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
    i48 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i48, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i48 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i48, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i48 = 0; i48 < loop_ub; i48++) {
      node->data[i48] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i48 = X->size[0];
      i49 = loop_ub + 1;
      if (!((i49 >= 1) && (i49 <= i48))) {
        emlrtDynamicBoundsCheckR2012b(i49, 1, i48, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i48 = (int32_T)m;
        if (!((i48 >= 1) && (i48 <= 4617))) {
          emlrtDynamicBoundsCheckR2012b(i48, 1, 4617, &eb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i48 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i48 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i48 >= 1) && (i48 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i48, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i48 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i48 >= 1) && (i48 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i48, 1, 10, &b_emlrtBCI, &b_st);
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

      i48 = node->size[0];
      i49 = 1 + loop_ub;
      if (!((i49 >= 1) && (i49 <= i48))) {
        emlrtDynamicBoundsCheckR2012b(i49, 1, i48, &f_emlrtBCI, &b_st);
      }

      node->data[i49 - 1] = m;
    }

    i48 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i48, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i48 = 0; i48 < loop_ub; i48++) {
      Yfit->data[i48] = 0.0;
    }

    emxInit_int32_T(sp, &r48, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i48 = r48->size[0];
    r48->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r48, i48, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i48 = 0; i48 < loop_ub; i48++) {
      r48->data[i48] = i48;
    }

    emxInit_real_T(sp, &r49, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i48 = r49->size[0];
    r49->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r49, i48, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i48 = 0; i48 < loop_ub; i48++) {
      r49->data[i48] = obj_NodeMean[(int32_T)node->data[i48] - 1];
    }

    i48 = node->size[0];
    iv350[0] = r48->size[0];
    iv351[0] = i48;
    emlrtSubAssignSizeCheckR2012b(iv350, 1, iv351, 1, &emlrtECI, sp);
    loop_ub = r49->size[0];
    emxFree_real_T(&node);
    for (i48 = 0; i48 < loop_ub; i48++) {
      Yfit->data[r48->data[i48]] = r49->data[i48];
    }

    emxFree_real_T(&r49);
    emxFree_int32_T(&r48);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void yb_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[3915], const real_T obj_Children[7830], const real_T obj_CutPoint
  [3915], const real_T obj_NodeMean[3915], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i98;
  int32_T loop_ub;
  int32_T i99;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r98;
  emxArray_real_T *r99;
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
    i98 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i98, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i98 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i98, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i98 = 0; i98 < loop_ub; i98++) {
      node->data[i98] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i98 = X->size[0];
      i99 = loop_ub + 1;
      if (!((i99 >= 1) && (i99 <= i98))) {
        emlrtDynamicBoundsCheckR2012b(i99, 1, i98, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i98 = (int32_T)m;
        if (!((i98 >= 1) && (i98 <= 3915))) {
          emlrtDynamicBoundsCheckR2012b(i98, 1, 3915, &ec_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i98 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i98 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i98 >= 1) && (i98 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i98, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i98 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i98 >= 1) && (i98 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i98, 1, 10, &b_emlrtBCI, &b_st);
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

      i98 = node->size[0];
      i99 = 1 + loop_ub;
      if (!((i99 >= 1) && (i99 <= i98))) {
        emlrtDynamicBoundsCheckR2012b(i99, 1, i98, &f_emlrtBCI, &b_st);
      }

      node->data[i99 - 1] = m;
    }

    i98 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i98, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i98 = 0; i98 < loop_ub; i98++) {
      Yfit->data[i98] = 0.0;
    }

    emxInit_int32_T(sp, &r98, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i98 = r98->size[0];
    r98->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r98, i98, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i98 = 0; i98 < loop_ub; i98++) {
      r98->data[i98] = i98;
    }

    emxInit_real_T(sp, &r99, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i98 = r99->size[0];
    r99->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r99, i98, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i98 = 0; i98 < loop_ub; i98++) {
      r99->data[i98] = obj_NodeMean[(int32_T)node->data[i98] - 1];
    }

    i98 = node->size[0];
    iv400[0] = r98->size[0];
    iv401[0] = i98;
    emlrtSubAssignSizeCheckR2012b(iv400, 1, iv401, 1, &emlrtECI, sp);
    loop_ub = r99->size[0];
    emxFree_real_T(&node);
    for (i98 = 0; i98 < loop_ub; i98++) {
      Yfit->data[r98->data[i98]] = r99->data[i98];
    }

    emxFree_real_T(&r99);
    emxFree_int32_T(&r98);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void yc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4509], const real_T obj_Children[9018], const real_T obj_CutPoint
  [4509], const real_T obj_NodeMean[4509], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i148;
  int32_T loop_ub;
  int32_T i149;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r148;
  emxArray_real_T *r149;
  int32_T iv450[1];
  int32_T iv451[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (X->size[0] == 0) {
    i148 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i148, sizeof(real_T),
                      &b_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &c_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i148 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i148, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = X->size[0];
    for (i148 = 0; i148 < loop_ub; i148++) {
      node->data[i148] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i148 = X->size[0];
      i149 = loop_ub + 1;
      if (!((i149 >= 1) && (i149 <= i148))) {
        emlrtDynamicBoundsCheckR2012b(i149, 1, i148, &d_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i148 = (int32_T)m;
        if (!((i148 >= 1) && (i148 <= 4509))) {
          emlrtDynamicBoundsCheckR2012b(i148, 1, 4509, &ed_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i148 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i148 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i148 >= 1) && (i148 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i148, 1, 10, &c_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i148 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i148 >= 1) && (i148 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i148, 1, 10, &b_emlrtBCI, &b_st);
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

      i148 = node->size[0];
      i149 = 1 + loop_ub;
      if (!((i149 >= 1) && (i149 <= i148))) {
        emlrtDynamicBoundsCheckR2012b(i149, 1, i148, &f_emlrtBCI, &b_st);
      }

      node->data[i149 - 1] = m;
    }

    i148 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i148, sizeof(real_T),
                      &b_emlrtRTEI);
    loop_ub = node->size[0];
    for (i148 = 0; i148 < loop_ub; i148++) {
      Yfit->data[i148] = 0.0;
    }

    emxInit_int32_T(sp, &r148, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i148 = r148->size[0];
    r148->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r148, i148, sizeof(int32_T),
                      &b_emlrtRTEI);
    for (i148 = 0; i148 < loop_ub; i148++) {
      r148->data[i148] = i148;
    }

    emxInit_real_T(sp, &r149, 1, &b_emlrtRTEI, true);
    loop_ub = node->size[0];
    i148 = r149->size[0];
    r149->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r149, i148, sizeof(real_T),
                      &b_emlrtRTEI);
    for (i148 = 0; i148 < loop_ub; i148++) {
      r149->data[i148] = obj_NodeMean[(int32_T)node->data[i148] - 1];
    }

    i148 = node->size[0];
    iv450[0] = r148->size[0];
    iv451[0] = i148;
    emlrtSubAssignSizeCheckR2012b(iv450, 1, iv451, 1, &emlrtECI, sp);
    loop_ub = r149->size[0];
    emxFree_real_T(&node);
    for (i148 = 0; i148 < loop_ub; i148++) {
      Yfit->data[r148->data[i148]] = r149->data[i148];
    }

    emxFree_real_T(&r149);
    emxFree_int32_T(&r148);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (CompactRegressionTree.c) */
