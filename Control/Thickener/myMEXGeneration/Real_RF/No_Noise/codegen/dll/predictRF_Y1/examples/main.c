/*
 * File: main.c
 *
 * MATLAB Coder version            : 3.3
 * C/C++ source code generated on  : 30-Jul-2018 16:28:19
 */

/*************************************************************************/
/* This automatically generated example C main file shows how to call    */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/
/* Include Files */
#include "rt_nonfinite.h"
#include "predictRF_Y1.h"
#include "main.h"
#include "predictRF_Y1_terminate.h"
#include "predictRF_Y1_emxAPI.h"
#include "predictRF_Y1_initialize.h"

/* Function Declarations */
static emxArray_real_T *argInit_Unboundedx10_real_T(void);
static double argInit_real_T(void);
static void main_predictRF_Y1(void);

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : emxArray_real_T *
 */
static emxArray_real_T *argInit_Unboundedx10_real_T(void)
{
  emxArray_real_T *result;
  static int iv300[2] = { 2, 10 };

  int idx0;
  int idx1;

  /* Set the size of the array.
     Change this size to the value that the application requires. */
  result = emxCreateND_real_T(2, iv300);

  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < result->size[0U]; idx0++) {
    for (idx1 = 0; idx1 < 10; idx1++) {
      /* Set the value of the array element.
         Change this value to the value that the application requires. */
      result->data[idx0 + result->size[0] * idx1] = argInit_real_T();
    }
  }

  return result;
}

/*
 * Arguments    : void
 * Return Type  : double
 */
static double argInit_real_T(void)
{
  return 0.0;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
static void main_predictRF_Y1(void)
{
  emxArray_real_T *Y;
  emxArray_real_T *X;
  emxInitArray_real_T(&Y, 1);

  /* Initialize function 'predictRF_Y1' input arguments. */
  /* Initialize function input argument 'X'. */
  X = argInit_Unboundedx10_real_T();

  /* Call the entry-point 'predictRF_Y1'. */
  predictRF_Y1(X, argInit_real_T(), argInit_real_T(), Y);
  emxDestroyArray_real_T(Y);
  emxDestroyArray_real_T(X);
}

/*
 * Arguments    : int argc
 *                const char * const argv[]
 * Return Type  : int
 */
int main(int argc, const char * const argv[])
{
  (void)argc;
  (void)argv;

  /* Initialize the application.
     You do not need to do this more than one time. */
  predictRF_Y1_initialize();

  /* Invoke the entry-point functions.
     You can call entry-point functions multiple times. */
  main_predictRF_Y1();

  /* Terminate the application.
     You do not need to do this more than one time. */
  predictRF_Y1_terminate();
  return 0;
}

/*
 * File trailer for main.c
 *
 * [EOF]
 */
