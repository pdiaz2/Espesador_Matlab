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
  10,                                  /* iLast */
  38,                                  /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { 1,   /* iFirst */
  10,                                  /* iLast */
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
  4633,                                /* iLast */
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
  4619,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { 1,   /* iFirst */
  4789,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { 1,   /* iFirst */
  4567,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { 1,   /* iFirst */
  4577,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { 1,   /* iFirst */
  4637,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { 1,   /* iFirst */
  4435,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { 1,   /* iFirst */
  4795,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { 1,   /* iFirst */
  4703,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { 1,   /* iFirst */
  4691,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { 1,   /* iFirst */
  4665,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { 1,   /* iFirst */
  4713,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { 1,   /* iFirst */
  4685,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { 1,   /* iFirst */
  4605,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { 1,   /* iFirst */
  4681,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { 1,   /* iFirst */
  4697,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { 1,   /* iFirst */
  4815,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { 1,   /* iFirst */
  4783,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { 1,   /* iFirst */
  4393,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { 1,   /* iFirst */
  4735,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { 1,   /* iFirst */
  4645,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { 1,  /* iFirst */
  4663,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { 1,  /* iFirst */
  4759,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { 1,  /* iFirst */
  4717,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { 1,  /* iFirst */
  4617,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { 1,  /* iFirst */
  4659,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { 1,  /* iFirst */
  4625,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { 1,  /* iFirst */
  4639,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { 1,  /* iFirst */
  4677,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { 1,  /* iFirst */
  4575,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { 1,  /* iFirst */
  4563,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { 1,  /* iFirst */
  4549,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { 1,  /* iFirst */
  4447,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { 1,  /* iFirst */
  4709,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { 1,  /* iFirst */
  4785,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { 1,  /* iFirst */
  4597,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { 1,  /* iFirst */
  4683,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { 1,  /* iFirst */
  4589,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { 1,  /* iFirst */
  4505,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { 1,  /* iFirst */
  4569,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { 1,  /* iFirst */
  4631,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { 1,  /* iFirst */
  4603,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { 1,  /* iFirst */
  4723,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { 1,  /* iFirst */
  4693,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { 1,  /* iFirst */
  4725,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { 1,  /* iFirst */
  4653,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { 1,  /* iFirst */
  4647,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { 1,  /* iFirst */
  4781,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { 1,  /* iFirst */
  4511,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { 1,  /* iFirst */
  3915,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { 1,  /* iFirst */
  4629,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { 1,  /* iFirst */
  4613,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { 1,  /* iFirst */
  4669,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { 1,  /* iFirst */
  4535,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { 1,  /* iFirst */
  4741,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { 1,  /* iFirst */
  4621,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { 1,  /* iFirst */
  4583,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { 1,  /* iFirst */
  4661,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { 1,  /* iFirst */
  4545,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { 1,  /* iFirst */
  4707,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { 1,  /* iFirst */
  4615,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { 1,  /* iFirst */
  4477,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { 1,  /* iFirst */
  4465,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { 1,  /* iFirst */
  4887,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { 1,  /* iFirst */
  4635,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { 1,  /* iFirst */
  4543,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { 1,  /* iFirst */
  4565,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { 1,  /* iFirst */
  4481,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { 1,  /* iFirst */
  4673,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { 1,  /* iFirst */
  4679,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { 1,  /* iFirst */
  4443,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { 1,  /* iFirst */
  4749,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { 1,  /* iFirst */
  4591,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { 1,  /* iFirst */
  4555,                                /* iLast */
  28,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "findNode",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\stats\\classreg\\+classreg\\+learning\\+coder\\+treeutils\\findNode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { 1,  /* iFirst */
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
        if (!((i1 >= 1) && (i1 <= 4633))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, 4633, &d_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i1 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i1 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i1 >= 1) && (i1 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i1 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i1 >= 1) && (i1 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4659], const real_T obj_Children[9318], const real_T obj_CutPoint
  [4659], const real_T obj_NodeMean[4659], const emxArray_real_T *X,
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
        if (!((i51 >= 1) && (i51 <= 4659))) {
          emlrtDynamicBoundsCheckR2012b(i51, 1, 4659, &eb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i51 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i51 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i51 >= 1) && (i51 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i51, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i51 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i51 >= 1) && (i51 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i51, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4629], const real_T obj_Children[9258], const real_T obj_CutPoint
  [4629], const real_T obj_NodeMean[4629], const emxArray_real_T *X,
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
        if (!((i101 >= 1) && (i101 <= 4629))) {
          emlrtDynamicBoundsCheckR2012b(i101, 1, 4629, &ec_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i101 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i101 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i101 >= 1) && (i101 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i101, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i101 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i101 >= 1) && (i101 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i101, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4619], const real_T obj_Children[9238], const real_T obj_CutPoint
  [4619], const real_T obj_NodeMean[4619], const emxArray_real_T *X,
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
        if (!((i3 >= 1) && (i3 <= 4619))) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, 4619, &f_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i3 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i3 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i3 >= 1) && (i3 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i3 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i3 >= 1) && (i3 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i3, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4625], const real_T obj_Children[9250], const real_T obj_CutPoint
  [4625], const real_T obj_NodeMean[4625], const emxArray_real_T *X,
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
        if (!((i53 >= 1) && (i53 <= 4625))) {
          emlrtDynamicBoundsCheckR2012b(i53, 1, 4625, &fb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i53 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i53 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i53 >= 1) && (i53 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i53, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i53 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i53 >= 1) && (i53 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i53, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4613], const real_T obj_Children[9226], const real_T obj_CutPoint
  [4613], const real_T obj_NodeMean[4613], const emxArray_real_T *X,
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
        if (!((i103 >= 1) && (i103 <= 4613))) {
          emlrtDynamicBoundsCheckR2012b(i103, 1, 4613, &fc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i103 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i103 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i103 >= 1) && (i103 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i103, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i103 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i103 >= 1) && (i103 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i103, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4789], const real_T obj_Children[9578], const real_T obj_CutPoint
  [4789], const real_T obj_NodeMean[4789], const emxArray_real_T *X,
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
        if (!((i5 >= 1) && (i5 <= 4789))) {
          emlrtDynamicBoundsCheckR2012b(i5, 1, 4789, &g_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i5 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i5 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i5 >= 1) && (i5 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i5 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i5 >= 1) && (i5 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i5, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4639], const real_T obj_Children[9278], const real_T obj_CutPoint
  [4639], const real_T obj_NodeMean[4639], const emxArray_real_T *X,
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
        if (!((i55 >= 1) && (i55 <= 4639))) {
          emlrtDynamicBoundsCheckR2012b(i55, 1, 4639, &gb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i55 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i55 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i55 >= 1) && (i55 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i55, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i55 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i55 >= 1) && (i55 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i55, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4669], const real_T obj_Children[9338], const real_T obj_CutPoint
  [4669], const real_T obj_NodeMean[4669], const emxArray_real_T *X,
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
        if (!((i105 >= 1) && (i105 <= 4669))) {
          emlrtDynamicBoundsCheckR2012b(i105, 1, 4669, &gc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i105 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i105 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i105 >= 1) && (i105 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i105, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i105 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i105 >= 1) && (i105 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i105, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4567], const real_T obj_Children[9134], const real_T obj_CutPoint
  [4567], const real_T obj_NodeMean[4567], const emxArray_real_T *X,
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
        if (!((i7 >= 1) && (i7 <= 4567))) {
          emlrtDynamicBoundsCheckR2012b(i7, 1, 4567, &h_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i7 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i7 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i7 >= 1) && (i7 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i7, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i7 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i7 >= 1) && (i7 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i7, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4677], const real_T obj_Children[9354], const real_T obj_CutPoint
  [4677], const real_T obj_NodeMean[4677], const emxArray_real_T *X,
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
        if (!((i57 >= 1) && (i57 <= 4677))) {
          emlrtDynamicBoundsCheckR2012b(i57, 1, 4677, &hb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i57 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i57 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i57 >= 1) && (i57 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i57, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i57 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i57 >= 1) && (i57 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i57, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4535], const real_T obj_Children[9070], const real_T obj_CutPoint
  [4535], const real_T obj_NodeMean[4535], const emxArray_real_T *X,
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
        if (!((i107 >= 1) && (i107 <= 4535))) {
          emlrtDynamicBoundsCheckR2012b(i107, 1, 4535, &hc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i107 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i107 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i107 >= 1) && (i107 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i107, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i107 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i107 >= 1) && (i107 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i107, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4577], const real_T obj_Children[9154], const real_T obj_CutPoint
  [4577], const real_T obj_NodeMean[4577], const emxArray_real_T *X,
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
        if (!((i9 >= 1) && (i9 <= 4577))) {
          emlrtDynamicBoundsCheckR2012b(i9, 1, 4577, &i_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i9 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i9 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i9 >= 1) && (i9 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i9, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i9 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i9 >= 1) && (i9 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i9, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4575], const real_T obj_Children[9150], const real_T obj_CutPoint
  [4575], const real_T obj_NodeMean[4575], const emxArray_real_T *X,
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
        if (!((i59 >= 1) && (i59 <= 4575))) {
          emlrtDynamicBoundsCheckR2012b(i59, 1, 4575, &ib_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i59 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i59 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i59 >= 1) && (i59 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i59, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i59 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i59 >= 1) && (i59 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i59, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4741], const real_T obj_Children[9482], const real_T obj_CutPoint
  [4741], const real_T obj_NodeMean[4741], const emxArray_real_T *X,
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
        if (!((i109 >= 1) && (i109 <= 4741))) {
          emlrtDynamicBoundsCheckR2012b(i109, 1, 4741, &ic_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i109 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i109 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i109 >= 1) && (i109 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i109, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i109 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i109 >= 1) && (i109 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i109, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4637], const real_T obj_Children[9274], const real_T obj_CutPoint
  [4637], const real_T obj_NodeMean[4637], const emxArray_real_T *X,
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
        if (!((i11 >= 1) && (i11 <= 4637))) {
          emlrtDynamicBoundsCheckR2012b(i11, 1, 4637, &j_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i11 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i11 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i11 >= 1) && (i11 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i11, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i11 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i11 >= 1) && (i11 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i11, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4563], const real_T obj_Children[9126], const real_T obj_CutPoint
  [4563], const real_T obj_NodeMean[4563], const emxArray_real_T *X,
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
        if (!((i61 >= 1) && (i61 <= 4563))) {
          emlrtDynamicBoundsCheckR2012b(i61, 1, 4563, &jb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i61 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i61 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i61 >= 1) && (i61 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i61, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i61 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i61 >= 1) && (i61 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i61, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4621], const real_T obj_Children[9242], const real_T obj_CutPoint
  [4621], const real_T obj_NodeMean[4621], const emxArray_real_T *X,
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
        if (!((i111 >= 1) && (i111 <= 4621))) {
          emlrtDynamicBoundsCheckR2012b(i111, 1, 4621, &jc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i111 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i111 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i111 >= 1) && (i111 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i111, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i111 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i111 >= 1) && (i111 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i111, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4435], const real_T obj_Children[8870], const real_T obj_CutPoint
  [4435], const real_T obj_NodeMean[4435], const emxArray_real_T *X,
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
        if (!((i13 >= 1) && (i13 <= 4435))) {
          emlrtDynamicBoundsCheckR2012b(i13, 1, 4435, &k_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i13 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i13 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i13 >= 1) && (i13 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i13, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i13 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i13 >= 1) && (i13 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i13, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4549], const real_T obj_Children[9098], const real_T obj_CutPoint
  [4549], const real_T obj_NodeMean[4549], const emxArray_real_T *X,
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
        if (!((i63 >= 1) && (i63 <= 4549))) {
          emlrtDynamicBoundsCheckR2012b(i63, 1, 4549, &kb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i63 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i63 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i63 >= 1) && (i63 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i63, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i63 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i63 >= 1) && (i63 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i63, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4583], const real_T obj_Children[9166], const real_T obj_CutPoint
  [4583], const real_T obj_NodeMean[4583], const emxArray_real_T *X,
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
        if (!((i113 >= 1) && (i113 <= 4583))) {
          emlrtDynamicBoundsCheckR2012b(i113, 1, 4583, &kc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i113 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i113 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i113 >= 1) && (i113 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i113, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i113 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i113 >= 1) && (i113 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i113, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4795], const real_T obj_Children[9590], const real_T obj_CutPoint
  [4795], const real_T obj_NodeMean[4795], const emxArray_real_T *X,
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
        if (!((i15 >= 1) && (i15 <= 4795))) {
          emlrtDynamicBoundsCheckR2012b(i15, 1, 4795, &l_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i15 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i15 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i15 >= 1) && (i15 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i15, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i15 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i15 >= 1) && (i15 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i15, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4447], const real_T obj_Children[8894], const real_T obj_CutPoint
  [4447], const real_T obj_NodeMean[4447], const emxArray_real_T *X,
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
        if (!((i65 >= 1) && (i65 <= 4447))) {
          emlrtDynamicBoundsCheckR2012b(i65, 1, 4447, &lb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i65 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i65 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i65 >= 1) && (i65 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i65, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i65 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i65 >= 1) && (i65 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i65, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4661], const real_T obj_Children[9322], const real_T obj_CutPoint
  [4661], const real_T obj_NodeMean[4661], const emxArray_real_T *X,
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
        if (!((i115 >= 1) && (i115 <= 4661))) {
          emlrtDynamicBoundsCheckR2012b(i115, 1, 4661, &lc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i115 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i115 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i115 >= 1) && (i115 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i115, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i115 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i115 >= 1) && (i115 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i115, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4703], const real_T obj_Children[9406], const real_T obj_CutPoint
  [4703], const real_T obj_NodeMean[4703], const emxArray_real_T *X,
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
        if (!((i17 >= 1) && (i17 <= 4703))) {
          emlrtDynamicBoundsCheckR2012b(i17, 1, 4703, &m_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i17 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i17 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i17 >= 1) && (i17 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i17, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i17 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i17 >= 1) && (i17 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i17, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4709], const real_T obj_Children[9418], const real_T obj_CutPoint
  [4709], const real_T obj_NodeMean[4709], const emxArray_real_T *X,
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
        if (!((i67 >= 1) && (i67 <= 4709))) {
          emlrtDynamicBoundsCheckR2012b(i67, 1, 4709, &mb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i67 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i67 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i67 >= 1) && (i67 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i67, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i67 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i67 >= 1) && (i67 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i67, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4545], const real_T obj_Children[9090], const real_T obj_CutPoint
  [4545], const real_T obj_NodeMean[4545], const emxArray_real_T *X,
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
        if (!((i117 >= 1) && (i117 <= 4545))) {
          emlrtDynamicBoundsCheckR2012b(i117, 1, 4545, &mc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i117 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i117 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i117 >= 1) && (i117 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i117, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i117 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i117 >= 1) && (i117 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i117, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4691], const real_T obj_Children[9382], const real_T obj_CutPoint
  [4691], const real_T obj_NodeMean[4691], const emxArray_real_T *X,
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
        if (!((i19 >= 1) && (i19 <= 4691))) {
          emlrtDynamicBoundsCheckR2012b(i19, 1, 4691, &n_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i19 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i19 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i19 >= 1) && (i19 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i19, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i19 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i19 >= 1) && (i19 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i19, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4785], const real_T obj_Children[9570], const real_T obj_CutPoint
  [4785], const real_T obj_NodeMean[4785], const emxArray_real_T *X,
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
        if (!((i69 >= 1) && (i69 <= 4785))) {
          emlrtDynamicBoundsCheckR2012b(i69, 1, 4785, &nb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i69 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i69 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i69 >= 1) && (i69 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i69, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i69 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i69 >= 1) && (i69 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i69, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4707], const real_T obj_Children[9414], const real_T obj_CutPoint
  [4707], const real_T obj_NodeMean[4707], const emxArray_real_T *X,
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
        if (!((i119 >= 1) && (i119 <= 4707))) {
          emlrtDynamicBoundsCheckR2012b(i119, 1, 4707, &nc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i119 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i119 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i119 >= 1) && (i119 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i119, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i119 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i119 >= 1) && (i119 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i119, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4665], const real_T obj_Children[9330], const real_T obj_CutPoint
  [4665], const real_T obj_NodeMean[4665], const emxArray_real_T *X,
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
        if (!((i21 >= 1) && (i21 <= 4665))) {
          emlrtDynamicBoundsCheckR2012b(i21, 1, 4665, &o_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i21 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i21 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i21 >= 1) && (i21 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i21, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i21 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i21 >= 1) && (i21 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i21, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4597], const real_T obj_Children[9194], const real_T obj_CutPoint
  [4597], const real_T obj_NodeMean[4597], const emxArray_real_T *X,
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
        if (!((i71 >= 1) && (i71 <= 4597))) {
          emlrtDynamicBoundsCheckR2012b(i71, 1, 4597, &ob_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i71 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i71 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i71 >= 1) && (i71 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i71, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i71 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i71 >= 1) && (i71 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i71, 1, 10, &emlrtBCI, &b_st);
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

void kc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4615], const real_T obj_Children[9230], const real_T obj_CutPoint
  [4615], const real_T obj_NodeMean[4615], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i121;
  int32_T loop_ub;
  int32_T i122;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r121;
  emxArray_real_T *r122;
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
    i121 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i121, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i121 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i121, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i121 = 0; i121 < loop_ub; i121++) {
      node->data[i121] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i121 = X->size[0];
      i122 = loop_ub + 1;
      if (!((i122 >= 1) && (i122 <= i121))) {
        emlrtDynamicBoundsCheckR2012b(i122, 1, i121, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i121 = (int32_T)m;
        if (!((i121 >= 1) && (i121 <= 4615))) {
          emlrtDynamicBoundsCheckR2012b(i121, 1, 4615, &oc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i121 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i121 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i121 >= 1) && (i121 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i121, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i121 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i121 >= 1) && (i121 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i121, 1, 10, &emlrtBCI, &b_st);
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

      i121 = node->size[0];
      i122 = 1 + loop_ub;
      if (!((i122 >= 1) && (i122 <= i121))) {
        emlrtDynamicBoundsCheckR2012b(i122, 1, i121, &e_emlrtBCI, &b_st);
      }

      node->data[i122 - 1] = m;
    }

    i121 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i121, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i121 = 0; i121 < loop_ub; i121++) {
      Yfit->data[i121] = 0.0;
    }

    emxInit_int32_T(sp, &r121, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i121 = r121->size[0];
    r121->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r121, i121, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i121 = 0; i121 < loop_ub; i121++) {
      r121->data[i121] = i121;
    }

    emxInit_real_T(sp, &r122, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i121 = r122->size[0];
    r122->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r122, i121, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i121 = 0; i121 < loop_ub; i121++) {
      r122->data[i121] = obj_NodeMean[(int32_T)node->data[i121] - 1];
    }

    i121 = node->size[0];
    iv422[0] = r121->size[0];
    iv423[0] = i121;
    emlrtSubAssignSizeCheckR2012b(iv422, 1, iv423, 1, &b_emlrtECI, sp);
    loop_ub = r122->size[0];
    emxFree_real_T(&node);
    for (i121 = 0; i121 < loop_ub; i121++) {
      Yfit->data[r121->data[i121]] = r122->data[i121];
    }

    emxFree_real_T(&r122);
    emxFree_int32_T(&r121);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void l_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4713], const real_T obj_Children[9426], const real_T obj_CutPoint
  [4713], const real_T obj_NodeMean[4713], const emxArray_real_T *X,
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
        if (!((i23 >= 1) && (i23 <= 4713))) {
          emlrtDynamicBoundsCheckR2012b(i23, 1, 4713, &p_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i23 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i23 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i23 >= 1) && (i23 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i23, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i23 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i23 >= 1) && (i23 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i23, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4683], const real_T obj_Children[9366], const real_T obj_CutPoint
  [4683], const real_T obj_NodeMean[4683], const emxArray_real_T *X,
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
        if (!((i73 >= 1) && (i73 <= 4683))) {
          emlrtDynamicBoundsCheckR2012b(i73, 1, 4683, &pb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i73 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i73 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i73 >= 1) && (i73 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i73, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i73 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i73 >= 1) && (i73 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i73, 1, 10, &emlrtBCI, &b_st);
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

void lc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4477], const real_T obj_Children[8954], const real_T obj_CutPoint
  [4477], const real_T obj_NodeMean[4477], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i123;
  int32_T loop_ub;
  int32_T i124;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r123;
  emxArray_real_T *r124;
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
    i123 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i123, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i123 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i123, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i123 = 0; i123 < loop_ub; i123++) {
      node->data[i123] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i123 = X->size[0];
      i124 = loop_ub + 1;
      if (!((i124 >= 1) && (i124 <= i123))) {
        emlrtDynamicBoundsCheckR2012b(i124, 1, i123, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i123 = (int32_T)m;
        if (!((i123 >= 1) && (i123 <= 4477))) {
          emlrtDynamicBoundsCheckR2012b(i123, 1, 4477, &pc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i123 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i123 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i123 >= 1) && (i123 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i123, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i123 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i123 >= 1) && (i123 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i123, 1, 10, &emlrtBCI, &b_st);
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

      i123 = node->size[0];
      i124 = 1 + loop_ub;
      if (!((i124 >= 1) && (i124 <= i123))) {
        emlrtDynamicBoundsCheckR2012b(i124, 1, i123, &e_emlrtBCI, &b_st);
      }

      node->data[i124 - 1] = m;
    }

    i123 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i123, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i123 = 0; i123 < loop_ub; i123++) {
      Yfit->data[i123] = 0.0;
    }

    emxInit_int32_T(sp, &r123, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i123 = r123->size[0];
    r123->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r123, i123, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i123 = 0; i123 < loop_ub; i123++) {
      r123->data[i123] = i123;
    }

    emxInit_real_T(sp, &r124, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i123 = r124->size[0];
    r124->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r124, i123, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i123 = 0; i123 < loop_ub; i123++) {
      r124->data[i123] = obj_NodeMean[(int32_T)node->data[i123] - 1];
    }

    i123 = node->size[0];
    iv424[0] = r123->size[0];
    iv425[0] = i123;
    emlrtSubAssignSizeCheckR2012b(iv424, 1, iv425, 1, &b_emlrtECI, sp);
    loop_ub = r124->size[0];
    emxFree_real_T(&node);
    for (i123 = 0; i123 < loop_ub; i123++) {
      Yfit->data[r123->data[i123]] = r124->data[i123];
    }

    emxFree_real_T(&r124);
    emxFree_int32_T(&r123);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void m_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4685], const real_T obj_Children[9370], const real_T obj_CutPoint
  [4685], const real_T obj_NodeMean[4685], const emxArray_real_T *X,
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
        if (!((i25 >= 1) && (i25 <= 4685))) {
          emlrtDynamicBoundsCheckR2012b(i25, 1, 4685, &q_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i25 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i25 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i25 >= 1) && (i25 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i25, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i25 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i25 >= 1) && (i25 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i25, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4589], const real_T obj_Children[9178], const real_T obj_CutPoint
  [4589], const real_T obj_NodeMean[4589], const emxArray_real_T *X,
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
        if (!((i75 >= 1) && (i75 <= 4589))) {
          emlrtDynamicBoundsCheckR2012b(i75, 1, 4589, &qb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i75 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i75 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i75 >= 1) && (i75 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i75, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i75 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i75 >= 1) && (i75 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i75, 1, 10, &emlrtBCI, &b_st);
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

void mc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4465], const real_T obj_Children[8930], const real_T obj_CutPoint
  [4465], const real_T obj_NodeMean[4465], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i125;
  int32_T loop_ub;
  int32_T i126;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r125;
  emxArray_real_T *r126;
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
    i125 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i125, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i125 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i125, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i125 = 0; i125 < loop_ub; i125++) {
      node->data[i125] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i125 = X->size[0];
      i126 = loop_ub + 1;
      if (!((i126 >= 1) && (i126 <= i125))) {
        emlrtDynamicBoundsCheckR2012b(i126, 1, i125, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i125 = (int32_T)m;
        if (!((i125 >= 1) && (i125 <= 4465))) {
          emlrtDynamicBoundsCheckR2012b(i125, 1, 4465, &qc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i125 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i125 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i125 >= 1) && (i125 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i125, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i125 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i125 >= 1) && (i125 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i125, 1, 10, &emlrtBCI, &b_st);
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

      i125 = node->size[0];
      i126 = 1 + loop_ub;
      if (!((i126 >= 1) && (i126 <= i125))) {
        emlrtDynamicBoundsCheckR2012b(i126, 1, i125, &e_emlrtBCI, &b_st);
      }

      node->data[i126 - 1] = m;
    }

    i125 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i125, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i125 = 0; i125 < loop_ub; i125++) {
      Yfit->data[i125] = 0.0;
    }

    emxInit_int32_T(sp, &r125, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i125 = r125->size[0];
    r125->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r125, i125, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i125 = 0; i125 < loop_ub; i125++) {
      r125->data[i125] = i125;
    }

    emxInit_real_T(sp, &r126, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i125 = r126->size[0];
    r126->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r126, i125, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i125 = 0; i125 < loop_ub; i125++) {
      r126->data[i125] = obj_NodeMean[(int32_T)node->data[i125] - 1];
    }

    i125 = node->size[0];
    iv426[0] = r125->size[0];
    iv427[0] = i125;
    emlrtSubAssignSizeCheckR2012b(iv426, 1, iv427, 1, &b_emlrtECI, sp);
    loop_ub = r126->size[0];
    emxFree_real_T(&node);
    for (i125 = 0; i125 < loop_ub; i125++) {
      Yfit->data[r125->data[i125]] = r126->data[i125];
    }

    emxFree_real_T(&r126);
    emxFree_int32_T(&r125);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void n_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4605], const real_T obj_Children[9210], const real_T obj_CutPoint
  [4605], const real_T obj_NodeMean[4605], const emxArray_real_T *X,
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
        if (!((i27 >= 1) && (i27 <= 4605))) {
          emlrtDynamicBoundsCheckR2012b(i27, 1, 4605, &r_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i27 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i27 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i27 >= 1) && (i27 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i27, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i27 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i27 >= 1) && (i27 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i27, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4505], const real_T obj_Children[9010], const real_T obj_CutPoint
  [4505], const real_T obj_NodeMean[4505], const emxArray_real_T *X,
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
        if (!((i77 >= 1) && (i77 <= 4505))) {
          emlrtDynamicBoundsCheckR2012b(i77, 1, 4505, &rb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i77 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i77 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i77 >= 1) && (i77 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i77, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i77 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i77 >= 1) && (i77 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i77, 1, 10, &emlrtBCI, &b_st);
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

void nc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4887], const real_T obj_Children[9774], const real_T obj_CutPoint
  [4887], const real_T obj_NodeMean[4887], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i127;
  int32_T loop_ub;
  int32_T i128;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r127;
  emxArray_real_T *r128;
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
    i127 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i127, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i127 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i127, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i127 = 0; i127 < loop_ub; i127++) {
      node->data[i127] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i127 = X->size[0];
      i128 = loop_ub + 1;
      if (!((i128 >= 1) && (i128 <= i127))) {
        emlrtDynamicBoundsCheckR2012b(i128, 1, i127, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i127 = (int32_T)m;
        if (!((i127 >= 1) && (i127 <= 4887))) {
          emlrtDynamicBoundsCheckR2012b(i127, 1, 4887, &rc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i127 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i127 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i127 >= 1) && (i127 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i127, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i127 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i127 >= 1) && (i127 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i127, 1, 10, &emlrtBCI, &b_st);
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

      i127 = node->size[0];
      i128 = 1 + loop_ub;
      if (!((i128 >= 1) && (i128 <= i127))) {
        emlrtDynamicBoundsCheckR2012b(i128, 1, i127, &e_emlrtBCI, &b_st);
      }

      node->data[i128 - 1] = m;
    }

    i127 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i127, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i127 = 0; i127 < loop_ub; i127++) {
      Yfit->data[i127] = 0.0;
    }

    emxInit_int32_T(sp, &r127, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i127 = r127->size[0];
    r127->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r127, i127, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i127 = 0; i127 < loop_ub; i127++) {
      r127->data[i127] = i127;
    }

    emxInit_real_T(sp, &r128, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i127 = r128->size[0];
    r128->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r128, i127, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i127 = 0; i127 < loop_ub; i127++) {
      r128->data[i127] = obj_NodeMean[(int32_T)node->data[i127] - 1];
    }

    i127 = node->size[0];
    iv428[0] = r127->size[0];
    iv429[0] = i127;
    emlrtSubAssignSizeCheckR2012b(iv428, 1, iv429, 1, &b_emlrtECI, sp);
    loop_ub = r128->size[0];
    emxFree_real_T(&node);
    for (i127 = 0; i127 < loop_ub; i127++) {
      Yfit->data[r127->data[i127]] = r128->data[i127];
    }

    emxFree_real_T(&r128);
    emxFree_int32_T(&r127);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void o_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4681], const real_T obj_Children[9362], const real_T obj_CutPoint
  [4681], const real_T obj_NodeMean[4681], const emxArray_real_T *X,
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
        if (!((i29 >= 1) && (i29 <= 4681))) {
          emlrtDynamicBoundsCheckR2012b(i29, 1, 4681, &s_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i29 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i29 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i29 >= 1) && (i29 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i29, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i29 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i29 >= 1) && (i29 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i29, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4569], const real_T obj_Children[9138], const real_T obj_CutPoint
  [4569], const real_T obj_NodeMean[4569], const emxArray_real_T *X,
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
        if (!((i79 >= 1) && (i79 <= 4569))) {
          emlrtDynamicBoundsCheckR2012b(i79, 1, 4569, &sb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i79 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i79 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i79 >= 1) && (i79 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i79, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i79 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i79 >= 1) && (i79 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i79, 1, 10, &emlrtBCI, &b_st);
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

void oc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4635], const real_T obj_Children[9270], const real_T obj_CutPoint
  [4635], const real_T obj_NodeMean[4635], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i129;
  int32_T loop_ub;
  int32_T i130;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r129;
  emxArray_real_T *r130;
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
    i129 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i129, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i129 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i129, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i129 = 0; i129 < loop_ub; i129++) {
      node->data[i129] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i129 = X->size[0];
      i130 = loop_ub + 1;
      if (!((i130 >= 1) && (i130 <= i129))) {
        emlrtDynamicBoundsCheckR2012b(i130, 1, i129, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i129 = (int32_T)m;
        if (!((i129 >= 1) && (i129 <= 4635))) {
          emlrtDynamicBoundsCheckR2012b(i129, 1, 4635, &sc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i129 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i129 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i129 >= 1) && (i129 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i129, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i129 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i129 >= 1) && (i129 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i129, 1, 10, &emlrtBCI, &b_st);
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

      i129 = node->size[0];
      i130 = 1 + loop_ub;
      if (!((i130 >= 1) && (i130 <= i129))) {
        emlrtDynamicBoundsCheckR2012b(i130, 1, i129, &e_emlrtBCI, &b_st);
      }

      node->data[i130 - 1] = m;
    }

    i129 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i129, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i129 = 0; i129 < loop_ub; i129++) {
      Yfit->data[i129] = 0.0;
    }

    emxInit_int32_T(sp, &r129, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i129 = r129->size[0];
    r129->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r129, i129, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i129 = 0; i129 < loop_ub; i129++) {
      r129->data[i129] = i129;
    }

    emxInit_real_T(sp, &r130, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i129 = r130->size[0];
    r130->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r130, i129, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i129 = 0; i129 < loop_ub; i129++) {
      r130->data[i129] = obj_NodeMean[(int32_T)node->data[i129] - 1];
    }

    i129 = node->size[0];
    iv430[0] = r129->size[0];
    iv431[0] = i129;
    emlrtSubAssignSizeCheckR2012b(iv430, 1, iv431, 1, &b_emlrtECI, sp);
    loop_ub = r130->size[0];
    emxFree_real_T(&node);
    for (i129 = 0; i129 < loop_ub; i129++) {
      Yfit->data[r129->data[i129]] = r130->data[i129];
    }

    emxFree_real_T(&r130);
    emxFree_int32_T(&r129);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void p_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4697], const real_T obj_Children[9394], const real_T obj_CutPoint
  [4697], const real_T obj_NodeMean[4697], const emxArray_real_T *X,
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
        if (!((i31 >= 1) && (i31 <= 4697))) {
          emlrtDynamicBoundsCheckR2012b(i31, 1, 4697, &t_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i31 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i31 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i31 >= 1) && (i31 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i31, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i31 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i31 >= 1) && (i31 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i31, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4631], const real_T obj_Children[9262], const real_T obj_CutPoint
  [4631], const real_T obj_NodeMean[4631], const emxArray_real_T *X,
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
        if (!((i81 >= 1) && (i81 <= 4631))) {
          emlrtDynamicBoundsCheckR2012b(i81, 1, 4631, &tb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i81 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i81 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i81 >= 1) && (i81 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i81, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i81 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i81 >= 1) && (i81 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i81, 1, 10, &emlrtBCI, &b_st);
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

void pc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4543], const real_T obj_Children[9086], const real_T obj_CutPoint
  [4543], const real_T obj_NodeMean[4543], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i131;
  int32_T loop_ub;
  int32_T i132;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r131;
  emxArray_real_T *r132;
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
    i131 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i131, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i131 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i131, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i131 = 0; i131 < loop_ub; i131++) {
      node->data[i131] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i131 = X->size[0];
      i132 = loop_ub + 1;
      if (!((i132 >= 1) && (i132 <= i131))) {
        emlrtDynamicBoundsCheckR2012b(i132, 1, i131, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i131 = (int32_T)m;
        if (!((i131 >= 1) && (i131 <= 4543))) {
          emlrtDynamicBoundsCheckR2012b(i131, 1, 4543, &tc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i131 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i131 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i131 >= 1) && (i131 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i131, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i131 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i131 >= 1) && (i131 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i131, 1, 10, &emlrtBCI, &b_st);
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

      i131 = node->size[0];
      i132 = 1 + loop_ub;
      if (!((i132 >= 1) && (i132 <= i131))) {
        emlrtDynamicBoundsCheckR2012b(i132, 1, i131, &e_emlrtBCI, &b_st);
      }

      node->data[i132 - 1] = m;
    }

    i131 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i131, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i131 = 0; i131 < loop_ub; i131++) {
      Yfit->data[i131] = 0.0;
    }

    emxInit_int32_T(sp, &r131, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i131 = r131->size[0];
    r131->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r131, i131, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i131 = 0; i131 < loop_ub; i131++) {
      r131->data[i131] = i131;
    }

    emxInit_real_T(sp, &r132, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i131 = r132->size[0];
    r132->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r132, i131, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i131 = 0; i131 < loop_ub; i131++) {
      r132->data[i131] = obj_NodeMean[(int32_T)node->data[i131] - 1];
    }

    i131 = node->size[0];
    iv432[0] = r131->size[0];
    iv433[0] = i131;
    emlrtSubAssignSizeCheckR2012b(iv432, 1, iv433, 1, &b_emlrtECI, sp);
    loop_ub = r132->size[0];
    emxFree_real_T(&node);
    for (i131 = 0; i131 < loop_ub; i131++) {
      Yfit->data[r131->data[i131]] = r132->data[i131];
    }

    emxFree_real_T(&r132);
    emxFree_int32_T(&r131);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void q_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4815], const real_T obj_Children[9630], const real_T obj_CutPoint
  [4815], const real_T obj_NodeMean[4815], const emxArray_real_T *X,
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
        if (!((i33 >= 1) && (i33 <= 4815))) {
          emlrtDynamicBoundsCheckR2012b(i33, 1, 4815, &u_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i33 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i33 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i33 >= 1) && (i33 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i33, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i33 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i33 >= 1) && (i33 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i33, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4603], const real_T obj_Children[9206], const real_T obj_CutPoint
  [4603], const real_T obj_NodeMean[4603], const emxArray_real_T *X,
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
        if (!((i83 >= 1) && (i83 <= 4603))) {
          emlrtDynamicBoundsCheckR2012b(i83, 1, 4603, &ub_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i83 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i83 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i83 >= 1) && (i83 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i83, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i83 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i83 >= 1) && (i83 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i83, 1, 10, &emlrtBCI, &b_st);
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

void qc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4565], const real_T obj_Children[9130], const real_T obj_CutPoint
  [4565], const real_T obj_NodeMean[4565], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i133;
  int32_T loop_ub;
  int32_T i134;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r133;
  emxArray_real_T *r134;
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
    i133 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i133, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i133 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i133, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i133 = 0; i133 < loop_ub; i133++) {
      node->data[i133] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i133 = X->size[0];
      i134 = loop_ub + 1;
      if (!((i134 >= 1) && (i134 <= i133))) {
        emlrtDynamicBoundsCheckR2012b(i134, 1, i133, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i133 = (int32_T)m;
        if (!((i133 >= 1) && (i133 <= 4565))) {
          emlrtDynamicBoundsCheckR2012b(i133, 1, 4565, &uc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i133 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i133 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i133 >= 1) && (i133 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i133, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i133 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i133 >= 1) && (i133 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i133, 1, 10, &emlrtBCI, &b_st);
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

      i133 = node->size[0];
      i134 = 1 + loop_ub;
      if (!((i134 >= 1) && (i134 <= i133))) {
        emlrtDynamicBoundsCheckR2012b(i134, 1, i133, &e_emlrtBCI, &b_st);
      }

      node->data[i134 - 1] = m;
    }

    i133 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i133, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i133 = 0; i133 < loop_ub; i133++) {
      Yfit->data[i133] = 0.0;
    }

    emxInit_int32_T(sp, &r133, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i133 = r133->size[0];
    r133->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r133, i133, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i133 = 0; i133 < loop_ub; i133++) {
      r133->data[i133] = i133;
    }

    emxInit_real_T(sp, &r134, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i133 = r134->size[0];
    r134->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r134, i133, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i133 = 0; i133 < loop_ub; i133++) {
      r134->data[i133] = obj_NodeMean[(int32_T)node->data[i133] - 1];
    }

    i133 = node->size[0];
    iv434[0] = r133->size[0];
    iv435[0] = i133;
    emlrtSubAssignSizeCheckR2012b(iv434, 1, iv435, 1, &b_emlrtECI, sp);
    loop_ub = r134->size[0];
    emxFree_real_T(&node);
    for (i133 = 0; i133 < loop_ub; i133++) {
      Yfit->data[r133->data[i133]] = r134->data[i133];
    }

    emxFree_real_T(&r134);
    emxFree_int32_T(&r133);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void r_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4783], const real_T obj_Children[9566], const real_T obj_CutPoint
  [4783], const real_T obj_NodeMean[4783], const emxArray_real_T *X,
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
        if (!((i35 >= 1) && (i35 <= 4783))) {
          emlrtDynamicBoundsCheckR2012b(i35, 1, 4783, &v_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i35 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i35 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i35 >= 1) && (i35 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i35, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i35 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i35 >= 1) && (i35 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i35, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4723], const real_T obj_Children[9446], const real_T obj_CutPoint
  [4723], const real_T obj_NodeMean[4723], const emxArray_real_T *X,
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
        if (!((i85 >= 1) && (i85 <= 4723))) {
          emlrtDynamicBoundsCheckR2012b(i85, 1, 4723, &vb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i85 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i85 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i85 >= 1) && (i85 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i85, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i85 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i85 >= 1) && (i85 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i85, 1, 10, &emlrtBCI, &b_st);
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

void rc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4481], const real_T obj_Children[8962], const real_T obj_CutPoint
  [4481], const real_T obj_NodeMean[4481], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i135;
  int32_T loop_ub;
  int32_T i136;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r135;
  emxArray_real_T *r136;
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
    i135 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i135, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i135 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i135, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i135 = 0; i135 < loop_ub; i135++) {
      node->data[i135] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i135 = X->size[0];
      i136 = loop_ub + 1;
      if (!((i136 >= 1) && (i136 <= i135))) {
        emlrtDynamicBoundsCheckR2012b(i136, 1, i135, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i135 = (int32_T)m;
        if (!((i135 >= 1) && (i135 <= 4481))) {
          emlrtDynamicBoundsCheckR2012b(i135, 1, 4481, &vc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i135 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i135 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i135 >= 1) && (i135 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i135, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i135 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i135 >= 1) && (i135 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i135, 1, 10, &emlrtBCI, &b_st);
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

      i135 = node->size[0];
      i136 = 1 + loop_ub;
      if (!((i136 >= 1) && (i136 <= i135))) {
        emlrtDynamicBoundsCheckR2012b(i136, 1, i135, &e_emlrtBCI, &b_st);
      }

      node->data[i136 - 1] = m;
    }

    i135 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i135, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i135 = 0; i135 < loop_ub; i135++) {
      Yfit->data[i135] = 0.0;
    }

    emxInit_int32_T(sp, &r135, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i135 = r135->size[0];
    r135->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r135, i135, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i135 = 0; i135 < loop_ub; i135++) {
      r135->data[i135] = i135;
    }

    emxInit_real_T(sp, &r136, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i135 = r136->size[0];
    r136->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r136, i135, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i135 = 0; i135 < loop_ub; i135++) {
      r136->data[i135] = obj_NodeMean[(int32_T)node->data[i135] - 1];
    }

    i135 = node->size[0];
    iv436[0] = r135->size[0];
    iv437[0] = i135;
    emlrtSubAssignSizeCheckR2012b(iv436, 1, iv437, 1, &b_emlrtECI, sp);
    loop_ub = r136->size[0];
    emxFree_real_T(&node);
    for (i135 = 0; i135 < loop_ub; i135++) {
      Yfit->data[r135->data[i135]] = r136->data[i135];
    }

    emxFree_real_T(&r136);
    emxFree_int32_T(&r135);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void s_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4393], const real_T obj_Children[8786], const real_T obj_CutPoint
  [4393], const real_T obj_NodeMean[4393], const emxArray_real_T *X,
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
        if (!((i37 >= 1) && (i37 <= 4393))) {
          emlrtDynamicBoundsCheckR2012b(i37, 1, 4393, &w_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i37 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i37 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i37 >= 1) && (i37 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i37, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i37 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i37 >= 1) && (i37 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i37, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4693], const real_T obj_Children[9386], const real_T obj_CutPoint
  [4693], const real_T obj_NodeMean[4693], const emxArray_real_T *X,
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
        if (!((i87 >= 1) && (i87 <= 4693))) {
          emlrtDynamicBoundsCheckR2012b(i87, 1, 4693, &wb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i87 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i87 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i87 >= 1) && (i87 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i87, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i87 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i87 >= 1) && (i87 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i87, 1, 10, &emlrtBCI, &b_st);
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

void sc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4673], const real_T obj_Children[9346], const real_T obj_CutPoint
  [4673], const real_T obj_NodeMean[4673], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i137;
  int32_T loop_ub;
  int32_T i138;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r137;
  emxArray_real_T *r138;
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
    i137 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i137, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i137 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i137, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i137 = 0; i137 < loop_ub; i137++) {
      node->data[i137] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i137 = X->size[0];
      i138 = loop_ub + 1;
      if (!((i138 >= 1) && (i138 <= i137))) {
        emlrtDynamicBoundsCheckR2012b(i138, 1, i137, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i137 = (int32_T)m;
        if (!((i137 >= 1) && (i137 <= 4673))) {
          emlrtDynamicBoundsCheckR2012b(i137, 1, 4673, &wc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i137 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i137 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i137 >= 1) && (i137 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i137, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i137 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i137 >= 1) && (i137 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i137, 1, 10, &emlrtBCI, &b_st);
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

      i137 = node->size[0];
      i138 = 1 + loop_ub;
      if (!((i138 >= 1) && (i138 <= i137))) {
        emlrtDynamicBoundsCheckR2012b(i138, 1, i137, &e_emlrtBCI, &b_st);
      }

      node->data[i138 - 1] = m;
    }

    i137 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i137, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i137 = 0; i137 < loop_ub; i137++) {
      Yfit->data[i137] = 0.0;
    }

    emxInit_int32_T(sp, &r137, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i137 = r137->size[0];
    r137->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r137, i137, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i137 = 0; i137 < loop_ub; i137++) {
      r137->data[i137] = i137;
    }

    emxInit_real_T(sp, &r138, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i137 = r138->size[0];
    r138->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r138, i137, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i137 = 0; i137 < loop_ub; i137++) {
      r138->data[i137] = obj_NodeMean[(int32_T)node->data[i137] - 1];
    }

    i137 = node->size[0];
    iv438[0] = r137->size[0];
    iv439[0] = i137;
    emlrtSubAssignSizeCheckR2012b(iv438, 1, iv439, 1, &b_emlrtECI, sp);
    loop_ub = r138->size[0];
    emxFree_real_T(&node);
    for (i137 = 0; i137 < loop_ub; i137++) {
      Yfit->data[r137->data[i137]] = r138->data[i137];
    }

    emxFree_real_T(&r138);
    emxFree_int32_T(&r137);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void t_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4735], const real_T obj_Children[9470], const real_T obj_CutPoint
  [4735], const real_T obj_NodeMean[4735], const emxArray_real_T *X,
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
        if (!((i39 >= 1) && (i39 <= 4735))) {
          emlrtDynamicBoundsCheckR2012b(i39, 1, 4735, &x_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i39 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i39 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i39 >= 1) && (i39 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i39, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i39 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i39 >= 1) && (i39 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i39, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4725], const real_T obj_Children[9450], const real_T obj_CutPoint
  [4725], const real_T obj_NodeMean[4725], const emxArray_real_T *X,
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
        if (!((i89 >= 1) && (i89 <= 4725))) {
          emlrtDynamicBoundsCheckR2012b(i89, 1, 4725, &xb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i89 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i89 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i89 >= 1) && (i89 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i89, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i89 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i89 >= 1) && (i89 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i89, 1, 10, &emlrtBCI, &b_st);
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

void tc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4679], const real_T obj_Children[9358], const real_T obj_CutPoint
  [4679], const real_T obj_NodeMean[4679], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i139;
  int32_T loop_ub;
  int32_T i140;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r139;
  emxArray_real_T *r140;
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
    i139 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i139, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i139 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i139, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i139 = 0; i139 < loop_ub; i139++) {
      node->data[i139] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i139 = X->size[0];
      i140 = loop_ub + 1;
      if (!((i140 >= 1) && (i140 <= i139))) {
        emlrtDynamicBoundsCheckR2012b(i140, 1, i139, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i139 = (int32_T)m;
        if (!((i139 >= 1) && (i139 <= 4679))) {
          emlrtDynamicBoundsCheckR2012b(i139, 1, 4679, &xc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i139 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i139 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i139 >= 1) && (i139 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i139, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i139 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i139 >= 1) && (i139 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i139, 1, 10, &emlrtBCI, &b_st);
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

      i139 = node->size[0];
      i140 = 1 + loop_ub;
      if (!((i140 >= 1) && (i140 <= i139))) {
        emlrtDynamicBoundsCheckR2012b(i140, 1, i139, &e_emlrtBCI, &b_st);
      }

      node->data[i140 - 1] = m;
    }

    i139 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i139, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i139 = 0; i139 < loop_ub; i139++) {
      Yfit->data[i139] = 0.0;
    }

    emxInit_int32_T(sp, &r139, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i139 = r139->size[0];
    r139->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r139, i139, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i139 = 0; i139 < loop_ub; i139++) {
      r139->data[i139] = i139;
    }

    emxInit_real_T(sp, &r140, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i139 = r140->size[0];
    r140->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r140, i139, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i139 = 0; i139 < loop_ub; i139++) {
      r140->data[i139] = obj_NodeMean[(int32_T)node->data[i139] - 1];
    }

    i139 = node->size[0];
    iv440[0] = r139->size[0];
    iv441[0] = i139;
    emlrtSubAssignSizeCheckR2012b(iv440, 1, iv441, 1, &b_emlrtECI, sp);
    loop_ub = r140->size[0];
    emxFree_real_T(&node);
    for (i139 = 0; i139 < loop_ub; i139++) {
      Yfit->data[r139->data[i139]] = r140->data[i139];
    }

    emxFree_real_T(&r140);
    emxFree_int32_T(&r139);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void u_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4645], const real_T obj_Children[9290], const real_T obj_CutPoint
  [4645], const real_T obj_NodeMean[4645], const emxArray_real_T *X,
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
        if (!((i41 >= 1) && (i41 <= 4645))) {
          emlrtDynamicBoundsCheckR2012b(i41, 1, 4645, &y_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i41 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i41 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i41 >= 1) && (i41 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i41, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i41 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i41 >= 1) && (i41 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i41, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4653], const real_T obj_Children[9306], const real_T obj_CutPoint
  [4653], const real_T obj_NodeMean[4653], const emxArray_real_T *X,
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
        if (!((i91 >= 1) && (i91 <= 4653))) {
          emlrtDynamicBoundsCheckR2012b(i91, 1, 4653, &yb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i91 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i91 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i91 >= 1) && (i91 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i91, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i91 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i91 >= 1) && (i91 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i91, 1, 10, &emlrtBCI, &b_st);
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

void uc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4443], const real_T obj_Children[8886], const real_T obj_CutPoint
  [4443], const real_T obj_NodeMean[4443], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i141;
  int32_T loop_ub;
  int32_T i142;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r141;
  emxArray_real_T *r142;
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
    i141 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i141, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i141 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i141, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i141 = 0; i141 < loop_ub; i141++) {
      node->data[i141] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i141 = X->size[0];
      i142 = loop_ub + 1;
      if (!((i142 >= 1) && (i142 <= i141))) {
        emlrtDynamicBoundsCheckR2012b(i142, 1, i141, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i141 = (int32_T)m;
        if (!((i141 >= 1) && (i141 <= 4443))) {
          emlrtDynamicBoundsCheckR2012b(i141, 1, 4443, &yc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i141 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i141 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i141 >= 1) && (i141 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i141, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i141 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i141 >= 1) && (i141 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i141, 1, 10, &emlrtBCI, &b_st);
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

      i141 = node->size[0];
      i142 = 1 + loop_ub;
      if (!((i142 >= 1) && (i142 <= i141))) {
        emlrtDynamicBoundsCheckR2012b(i142, 1, i141, &e_emlrtBCI, &b_st);
      }

      node->data[i142 - 1] = m;
    }

    i141 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i141, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i141 = 0; i141 < loop_ub; i141++) {
      Yfit->data[i141] = 0.0;
    }

    emxInit_int32_T(sp, &r141, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i141 = r141->size[0];
    r141->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r141, i141, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i141 = 0; i141 < loop_ub; i141++) {
      r141->data[i141] = i141;
    }

    emxInit_real_T(sp, &r142, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i141 = r142->size[0];
    r142->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r142, i141, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i141 = 0; i141 < loop_ub; i141++) {
      r142->data[i141] = obj_NodeMean[(int32_T)node->data[i141] - 1];
    }

    i141 = node->size[0];
    iv442[0] = r141->size[0];
    iv443[0] = i141;
    emlrtSubAssignSizeCheckR2012b(iv442, 1, iv443, 1, &b_emlrtECI, sp);
    loop_ub = r142->size[0];
    emxFree_real_T(&node);
    for (i141 = 0; i141 < loop_ub; i141++) {
      Yfit->data[r141->data[i141]] = r142->data[i141];
    }

    emxFree_real_T(&r142);
    emxFree_int32_T(&r141);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void v_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4663], const real_T obj_Children[9326], const real_T obj_CutPoint
  [4663], const real_T obj_NodeMean[4663], const emxArray_real_T *X,
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
        if (!((i43 >= 1) && (i43 <= 4663))) {
          emlrtDynamicBoundsCheckR2012b(i43, 1, 4663, &ab_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i43 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i43 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i43 >= 1) && (i43 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i43, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i43 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i43 >= 1) && (i43 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i43, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4647], const real_T obj_Children[9294], const real_T obj_CutPoint
  [4647], const real_T obj_NodeMean[4647], const emxArray_real_T *X,
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
        if (!((i93 >= 1) && (i93 <= 4647))) {
          emlrtDynamicBoundsCheckR2012b(i93, 1, 4647, &ac_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i93 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i93 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i93 >= 1) && (i93 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i93, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i93 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i93 >= 1) && (i93 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i93, 1, 10, &emlrtBCI, &b_st);
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

void vc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4749], const real_T obj_Children[9498], const real_T obj_CutPoint
  [4749], const real_T obj_NodeMean[4749], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i143;
  int32_T loop_ub;
  int32_T i144;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r143;
  emxArray_real_T *r144;
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
    i143 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i143, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i143 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i143, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i143 = 0; i143 < loop_ub; i143++) {
      node->data[i143] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i143 = X->size[0];
      i144 = loop_ub + 1;
      if (!((i144 >= 1) && (i144 <= i143))) {
        emlrtDynamicBoundsCheckR2012b(i144, 1, i143, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i143 = (int32_T)m;
        if (!((i143 >= 1) && (i143 <= 4749))) {
          emlrtDynamicBoundsCheckR2012b(i143, 1, 4749, &ad_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i143 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i143 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i143 >= 1) && (i143 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i143, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i143 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i143 >= 1) && (i143 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i143, 1, 10, &emlrtBCI, &b_st);
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

      i143 = node->size[0];
      i144 = 1 + loop_ub;
      if (!((i144 >= 1) && (i144 <= i143))) {
        emlrtDynamicBoundsCheckR2012b(i144, 1, i143, &e_emlrtBCI, &b_st);
      }

      node->data[i144 - 1] = m;
    }

    i143 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i143, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i143 = 0; i143 < loop_ub; i143++) {
      Yfit->data[i143] = 0.0;
    }

    emxInit_int32_T(sp, &r143, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i143 = r143->size[0];
    r143->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r143, i143, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i143 = 0; i143 < loop_ub; i143++) {
      r143->data[i143] = i143;
    }

    emxInit_real_T(sp, &r144, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i143 = r144->size[0];
    r144->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r144, i143, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i143 = 0; i143 < loop_ub; i143++) {
      r144->data[i143] = obj_NodeMean[(int32_T)node->data[i143] - 1];
    }

    i143 = node->size[0];
    iv444[0] = r143->size[0];
    iv445[0] = i143;
    emlrtSubAssignSizeCheckR2012b(iv444, 1, iv445, 1, &b_emlrtECI, sp);
    loop_ub = r144->size[0];
    emxFree_real_T(&node);
    for (i143 = 0; i143 < loop_ub; i143++) {
      Yfit->data[r143->data[i143]] = r144->data[i143];
    }

    emxFree_real_T(&r144);
    emxFree_int32_T(&r143);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void w_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4759], const real_T obj_Children[9518], const real_T obj_CutPoint
  [4759], const real_T obj_NodeMean[4759], const emxArray_real_T *X,
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
        if (!((i45 >= 1) && (i45 <= 4759))) {
          emlrtDynamicBoundsCheckR2012b(i45, 1, 4759, &bb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i45 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i45 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i45 >= 1) && (i45 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i45, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i45 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i45 >= 1) && (i45 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i45, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4781], const real_T obj_Children[9562], const real_T obj_CutPoint
  [4781], const real_T obj_NodeMean[4781], const emxArray_real_T *X,
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
        if (!((i95 >= 1) && (i95 <= 4781))) {
          emlrtDynamicBoundsCheckR2012b(i95, 1, 4781, &bc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i95 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i95 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i95 >= 1) && (i95 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i95, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i95 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i95 >= 1) && (i95 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i95, 1, 10, &emlrtBCI, &b_st);
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

void wc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4591], const real_T obj_Children[9182], const real_T obj_CutPoint
  [4591], const real_T obj_NodeMean[4591], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i145;
  int32_T loop_ub;
  int32_T i146;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r145;
  emxArray_real_T *r146;
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
    i145 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i145, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i145 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i145, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i145 = 0; i145 < loop_ub; i145++) {
      node->data[i145] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i145 = X->size[0];
      i146 = loop_ub + 1;
      if (!((i146 >= 1) && (i146 <= i145))) {
        emlrtDynamicBoundsCheckR2012b(i146, 1, i145, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i145 = (int32_T)m;
        if (!((i145 >= 1) && (i145 <= 4591))) {
          emlrtDynamicBoundsCheckR2012b(i145, 1, 4591, &bd_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i145 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i145 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i145 >= 1) && (i145 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i145, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i145 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i145 >= 1) && (i145 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i145, 1, 10, &emlrtBCI, &b_st);
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

      i145 = node->size[0];
      i146 = 1 + loop_ub;
      if (!((i146 >= 1) && (i146 <= i145))) {
        emlrtDynamicBoundsCheckR2012b(i146, 1, i145, &e_emlrtBCI, &b_st);
      }

      node->data[i146 - 1] = m;
    }

    i145 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i145, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i145 = 0; i145 < loop_ub; i145++) {
      Yfit->data[i145] = 0.0;
    }

    emxInit_int32_T(sp, &r145, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i145 = r145->size[0];
    r145->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r145, i145, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i145 = 0; i145 < loop_ub; i145++) {
      r145->data[i145] = i145;
    }

    emxInit_real_T(sp, &r146, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i145 = r146->size[0];
    r146->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r146, i145, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i145 = 0; i145 < loop_ub; i145++) {
      r146->data[i145] = obj_NodeMean[(int32_T)node->data[i145] - 1];
    }

    i145 = node->size[0];
    iv446[0] = r145->size[0];
    iv447[0] = i145;
    emlrtSubAssignSizeCheckR2012b(iv446, 1, iv447, 1, &b_emlrtECI, sp);
    loop_ub = r146->size[0];
    emxFree_real_T(&node);
    for (i145 = 0; i145 < loop_ub; i145++) {
      Yfit->data[r145->data[i145]] = r146->data[i145];
    }

    emxFree_real_T(&r146);
    emxFree_int32_T(&r145);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void x_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4717], const real_T obj_Children[9434], const real_T obj_CutPoint
  [4717], const real_T obj_NodeMean[4717], const emxArray_real_T *X,
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
        if (!((i47 >= 1) && (i47 <= 4717))) {
          emlrtDynamicBoundsCheckR2012b(i47, 1, 4717, &cb_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i47 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i47 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i47 >= 1) && (i47 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i47, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i47 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i47 >= 1) && (i47 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i47, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[4511], const real_T obj_Children[9022], const real_T obj_CutPoint
  [4511], const real_T obj_NodeMean[4511], const emxArray_real_T *X,
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
        if (!((i97 >= 1) && (i97 <= 4511))) {
          emlrtDynamicBoundsCheckR2012b(i97, 1, 4511, &cc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i97 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i97 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i97 >= 1) && (i97 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i97, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i97 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i97 >= 1) && (i97 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i97, 1, 10, &emlrtBCI, &b_st);
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

void xc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4555], const real_T obj_Children[9110], const real_T obj_CutPoint
  [4555], const real_T obj_NodeMean[4555], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i147;
  int32_T loop_ub;
  int32_T i148;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r147;
  emxArray_real_T *r148;
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
    i147 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i147, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i147 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i147, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i147 = 0; i147 < loop_ub; i147++) {
      node->data[i147] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i147 = X->size[0];
      i148 = loop_ub + 1;
      if (!((i148 >= 1) && (i148 <= i147))) {
        emlrtDynamicBoundsCheckR2012b(i148, 1, i147, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i147 = (int32_T)m;
        if (!((i147 >= 1) && (i147 <= 4555))) {
          emlrtDynamicBoundsCheckR2012b(i147, 1, 4555, &cd_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i147 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i147 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i147 >= 1) && (i147 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i147, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i147 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i147 >= 1) && (i147 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i147, 1, 10, &emlrtBCI, &b_st);
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

      i147 = node->size[0];
      i148 = 1 + loop_ub;
      if (!((i148 >= 1) && (i148 <= i147))) {
        emlrtDynamicBoundsCheckR2012b(i148, 1, i147, &e_emlrtBCI, &b_st);
      }

      node->data[i148 - 1] = m;
    }

    i147 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i147, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i147 = 0; i147 < loop_ub; i147++) {
      Yfit->data[i147] = 0.0;
    }

    emxInit_int32_T(sp, &r147, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i147 = r147->size[0];
    r147->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r147, i147, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i147 = 0; i147 < loop_ub; i147++) {
      r147->data[i147] = i147;
    }

    emxInit_real_T(sp, &r148, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i147 = r148->size[0];
    r148->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r148, i147, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i147 = 0; i147 < loop_ub; i147++) {
      r148->data[i147] = obj_NodeMean[(int32_T)node->data[i147] - 1];
    }

    i147 = node->size[0];
    iv448[0] = r147->size[0];
    iv449[0] = i147;
    emlrtSubAssignSizeCheckR2012b(iv448, 1, iv449, 1, &b_emlrtECI, sp);
    loop_ub = r148->size[0];
    emxFree_real_T(&node);
    for (i147 = 0; i147 < loop_ub; i147++) {
      Yfit->data[r147->data[i147]] = r148->data[i147];
    }

    emxFree_real_T(&r148);
    emxFree_int32_T(&r147);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void y_CompactRegressionTree_predict(const emlrtStack *sp, const real_T
  obj_CutVar[4617], const real_T obj_Children[9234], const real_T obj_CutPoint
  [4617], const real_T obj_NodeMean[4617], const emxArray_real_T *X,
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
        if (!((i49 >= 1) && (i49 <= 4617))) {
          emlrtDynamicBoundsCheckR2012b(i49, 1, 4617, &db_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i49 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i49 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i49 >= 1) && (i49 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i49, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i49 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i49 >= 1) && (i49 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i49, 1, 10, &emlrtBCI, &b_st);
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
  obj_CutVar[3915], const real_T obj_Children[7830], const real_T obj_CutPoint
  [3915], const real_T obj_NodeMean[3915], const emxArray_real_T *X,
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
        if (!((i99 >= 1) && (i99 <= 3915))) {
          emlrtDynamicBoundsCheckR2012b(i99, 1, 3915, &dc_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i99 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i99 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i99 >= 1) && (i99 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i99, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i99 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i99 >= 1) && (i99 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i99, 1, 10, &emlrtBCI, &b_st);
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

void yc_CompactRegressionTree_predic(const emlrtStack *sp, const real_T
  obj_CutVar[4509], const real_T obj_Children[9018], const real_T obj_CutPoint
  [4509], const real_T obj_NodeMean[4509], const emxArray_real_T *X,
  emxArray_real_T *Yfit)
{
  emxArray_real_T *node;
  int32_T i149;
  int32_T loop_ub;
  int32_T i150;
  real_T m;
  int32_T exitg1;
  emxArray_int32_T *r149;
  emxArray_real_T *r150;
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
    i149 = Yfit->size[0];
    Yfit->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i149, sizeof(real_T),
                      &c_emlrtRTEI);
  } else {
    emxInit_real_T(sp, &node, 1, &d_emlrtRTEI, true);
    st.site = &k_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    i149 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)node, i149, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = X->size[0];
    for (i149 = 0; i149 < loop_ub; i149++) {
      node->data[i149] = 1.0;
    }

    for (loop_ub = 0; loop_ub < X->size[0]; loop_ub++) {
      i149 = X->size[0];
      i150 = loop_ub + 1;
      if (!((i150 >= 1) && (i150 <= i149))) {
        emlrtDynamicBoundsCheckR2012b(i150, 1, i149, &c_emlrtBCI, &b_st);
      }

      m = 1.0;
      do {
        exitg1 = 0;
        i149 = (int32_T)m;
        if (!((i149 >= 1) && (i149 <= 4509))) {
          emlrtDynamicBoundsCheckR2012b(i149, 1, 4509, &dd_emlrtBCI, &b_st);
        }

        if (obj_CutVar[i149 - 1] == 0.0) {
          exitg1 = 1;
        } else {
          i149 = (int32_T)obj_CutVar[(int32_T)m - 1];
          if (!((i149 >= 1) && (i149 <= 10))) {
            emlrtDynamicBoundsCheckR2012b(i149, 1, 10, &b_emlrtBCI, &b_st);
          }

          if (muDoubleScalarIsNaN(X->data[loop_ub + X->size[0] * ((int32_T)
                obj_CutVar[(int32_T)m - 1] - 1)])) {
            exitg1 = 1;
          } else {
            i149 = (int32_T)obj_CutVar[(int32_T)m - 1];
            if (!((i149 >= 1) && (i149 <= 10))) {
              emlrtDynamicBoundsCheckR2012b(i149, 1, 10, &emlrtBCI, &b_st);
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

      i149 = node->size[0];
      i150 = 1 + loop_ub;
      if (!((i150 >= 1) && (i150 <= i149))) {
        emlrtDynamicBoundsCheckR2012b(i150, 1, i149, &e_emlrtBCI, &b_st);
      }

      node->data[i150 - 1] = m;
    }

    i149 = Yfit->size[0];
    Yfit->size[0] = node->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)Yfit, i149, sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = node->size[0];
    for (i149 = 0; i149 < loop_ub; i149++) {
      Yfit->data[i149] = 0.0;
    }

    emxInit_int32_T(sp, &r149, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i149 = r149->size[0];
    r149->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r149, i149, sizeof(int32_T),
                      &c_emlrtRTEI);
    for (i149 = 0; i149 < loop_ub; i149++) {
      r149->data[i149] = i149;
    }

    emxInit_real_T(sp, &r150, 1, &c_emlrtRTEI, true);
    loop_ub = node->size[0];
    i149 = r150->size[0];
    r150->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)r150, i149, sizeof(real_T),
                      &c_emlrtRTEI);
    for (i149 = 0; i149 < loop_ub; i149++) {
      r150->data[i149] = obj_NodeMean[(int32_T)node->data[i149] - 1];
    }

    i149 = node->size[0];
    iv450[0] = r149->size[0];
    iv451[0] = i149;
    emlrtSubAssignSizeCheckR2012b(iv450, 1, iv451, 1, &b_emlrtECI, sp);
    loop_ub = r150->size[0];
    emxFree_real_T(&node);
    for (i149 = 0; i149 < loop_ub; i149++) {
      Yfit->data[r149->data[i149]] = r150->data[i149];
    }

    emxFree_real_T(&r150);
    emxFree_int32_T(&r149);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (CompactRegressionTree.c) */
