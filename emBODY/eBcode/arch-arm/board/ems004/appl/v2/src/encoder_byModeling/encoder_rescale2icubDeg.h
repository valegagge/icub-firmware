/*
 * Non-Degree Granting Education License -- for use at non-degree
 * granting, nonprofit, education, and research organizations only. Not
 * for commercial or industrial use.
 *
 * File: encoder_rescale2icubDeg.h
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

#ifndef RTW_HEADER_encoder_rescale2icubDeg_h_
#define RTW_HEADER_encoder_rescale2icubDeg_h_
#ifndef encoder_rescale2icubDeg_COMMON_INCLUDES_
#define encoder_rescale2icubDeg_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                            /* encoder_rescale2icubDeg_COMMON_INCLUDES_ */

#include "encoder_rescale2icubDeg_types.h"
#include "rt_defines.h"
#include <stddef.h>
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  int32_T resolution;                  /* '<Root>/resolution' */
  int32_T raw_value;                   /* '<Root>/raw_value' */
  boolean_T is_in_iCubDeg;             /* '<Root>/is_in_iCubDeg' */
} ExtU_encoder_rescale2icubDeg_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  int32_T out;                         /* '<Root>/out' */
} ExtY_encoder_rescale2icubDeg_T;

/* Real-time Model Data Structure */
struct tag_RTM_encoder_rescale2icubD_T {
  const char_T * volatile errorStatus;
};

void pippo();

/* Model entry point functions */
extern void encoder_rescale2icubDeg_initialize(RT_MODEL_encoder_rescale2icub_T *
  const encoder_rescale2icubDeg_M, ExtU_encoder_rescale2icubDeg_T
  *encoder_rescale2icubDeg_U, ExtY_encoder_rescale2icubDeg_T
  *encoder_rescale2icubDeg_Y);
extern void encoder_rescale2icubDeg_step(RT_MODEL_encoder_rescale2icub_T *const
  encoder_rescale2icubDeg_M, ExtU_encoder_rescale2icubDeg_T
  *encoder_rescale2icubDeg_U, ExtY_encoder_rescale2icubDeg_T
  *encoder_rescale2icubDeg_Y);
extern void encoder_rescale2icubDeg_terminate(RT_MODEL_encoder_rescale2icub_T *
  const encoder_rescale2icubDeg_M);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Constant' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'encoder_rescale2icubDeg'
 */
#endif                               /* RTW_HEADER_encoder_rescale2icubDeg_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
