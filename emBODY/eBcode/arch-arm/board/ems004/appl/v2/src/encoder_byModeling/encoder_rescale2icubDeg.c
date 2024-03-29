/*
 * Non-Degree Granting Education License -- for use at non-degree
 * granting, nonprofit, education, and research organizations only. Not
 * for commercial or industrial use.
 *
 * File: encoder_rescale2icubDeg.c
 *
 * Code generated for Simulink model 'encoder_rescale2icubDeg'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Fri Apr  5 10:51:26 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "encoder_rescale2icubDeg.h"
#include <math.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include <string.h>

/* Model step function */
void encoder_rescale2icubDeg_step(RT_MODEL_encoder_rescale2icub_T *const
  encoder_rescale2icubDeg_M, ExtU_encoder_rescale2icubDeg_T
  *encoder_rescale2icubDeg_U, ExtY_encoder_rescale2icubDeg_T
  *encoder_rescale2icubDeg_Y)
{
  real_T tmp;
  int32_T tmp_0;
  int32_T tmp_1;

  /* Switch: '<Root>/Switch' incorporates:
   *  Constant: '<Root>/const_to_deg'
   *  Constant: '<Root>/const_to_icubDeg'
   */
  if (encoder_rescale2icubDeg_U->is_in_iCubDeg) {
    tmp_0 = 65535;
  } else {
    tmp_0 = 360;
  }

  /* Abs: '<Root>/Abs' */
  if (encoder_rescale2icubDeg_U->resolution < 0) {
    tmp_1 = -encoder_rescale2icubDeg_U->resolution;
  } else {
    tmp_1 = encoder_rescale2icubDeg_U->resolution;
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion' incorporates:
   *  Abs: '<Root>/Abs'
   *  Product: '<Root>/Divide'
   *  Switch: '<Root>/Switch'
   */
  tmp = floor((real_T)tmp_0 / (real_T)tmp_1 * (real_T)
              encoder_rescale2icubDeg_U->raw_value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 4.294967296E+9);
  }

  /* Outport: '<Root>/out' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   */
  encoder_rescale2icubDeg_Y->out = tmp < 0.0 ? -(int32_T)(uint32_T)-tmp :
    (int32_T)(uint32_T)tmp;
  UNUSED_PARAMETER(encoder_rescale2icubDeg_M);
}

/* Model initialize function */
void encoder_rescale2icubDeg_initialize(RT_MODEL_encoder_rescale2icub_T *const
  encoder_rescale2icubDeg_M, ExtU_encoder_rescale2icubDeg_T
  *encoder_rescale2icubDeg_U, ExtY_encoder_rescale2icubDeg_T
  *encoder_rescale2icubDeg_Y)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(encoder_rescale2icubDeg_M, (NULL));

  /* external inputs */
  (void)memset(encoder_rescale2icubDeg_U, 0, sizeof
               (ExtU_encoder_rescale2icubDeg_T));

  /* external outputs */
  encoder_rescale2icubDeg_Y->out = 0;
  UNUSED_PARAMETER(encoder_rescale2icubDeg_M);
}

/* Model terminate function */
void encoder_rescale2icubDeg_terminate(RT_MODEL_encoder_rescale2icub_T *const
  encoder_rescale2icubDeg_M)
{
  /* (no terminate code required) */
  UNUSED_PARAMETER(encoder_rescale2icubDeg_M);
}

void pippo()
{
    static int count=0;
    count ++;
}
/*
 * File trailer for generated code.
 *
 * [EOF]
 */
