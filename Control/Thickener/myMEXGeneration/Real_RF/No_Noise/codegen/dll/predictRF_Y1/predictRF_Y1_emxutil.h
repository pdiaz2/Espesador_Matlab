/*
 * File: predictRF_Y1_emxutil.h
 *
 * MATLAB Coder version            : 3.3
 * C/C++ source code generated on  : 30-Jul-2018 16:28:19
 */

#ifndef PREDICTRF_Y1_EMXUTIL_H
#define PREDICTRF_Y1_EMXUTIL_H

/* Include Files */
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "predictRF_Y1_types.h"

/* Function Declarations */
#ifdef __cplusplus

extern "C" {

#endif

  extern void emxEnsureCapacity(emxArray__common *emxArray, int oldNumel,
    unsigned int elementSize);
  extern void emxFree_real_T(emxArray_real_T **pEmxArray);
  extern void emxInit_real_T(emxArray_real_T **pEmxArray, int numDimensions);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for predictRF_Y1_emxutil.h
 *
 * [EOF]
 */
