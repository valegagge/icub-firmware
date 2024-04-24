/*
 * Non-Degree Granting Education License -- for use at non-degree
 * granting, nonprofit, education, and research organizations only. Not
 * for commercial or industrial use.
 *
 * File: encoder_reader_aksim2_complete_model.h
 *
 * Code generated for Simulink model 'encoder_reader_aksim2_complete_model'.
 *
 * Model version                  : 2.81
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Wed Apr 24 17:23:07 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef encoder_reader_aksim2_complete_model_h_
#define encoder_reader_aksim2_complete_model_h_
#ifndef encoder_reader_aksim2_complete_model_COMMON_INCLUDES_
#define encoder_reader_aksim2_complete_model_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif               /* encoder_reader_aksim2_complete_model_COMMON_INCLUDES_ */

#include "encoder_reader_aksim2_complete_model_types.h"
#include "rt_defines.h"
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Invariant block signals (default storage) */
typedef struct {
  const int8_T DataTypeConversion3;    /* '<S1>/Data Type Conversion3' */
  const int8_T convert_from_aksim_error_to;
                                    /* '<S4>/convert_from_aksim_error_to_int' */
} ConstB_encoder_reader_aksim2__T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  int32_T resolution;                  /* '<Root>/resolution' */
  int32_T raw_value;                   /* '<Root>/raw_value' */
  boolean_T is_in_iCubDeg;             /* '<Root>/is_in_iCubDeg' */
  hal_result_enum_t hal_result;        /* '<Root>/hal_result' */
  aksim2_error_type diagnostic;        /* '<Root>/diagnostic' */
} ExtU_encoder_reader_aksim2_co_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T is_aksim2_position_valid;  /* '<Root>/is_aksim2_position_valid' */
  encoder_error_type_t error_type;     /* '<Root>/error_type' */
  real_T position_out;                 /* '<Root>/position_out' */
} ExtY_encoder_reader_aksim2_co_T;

/* Real-time Model Data Structure */
struct tag_RTM_encoder_reader_aksim2_T {
  const char_T * volatile errorStatus;
};

extern const ConstB_encoder_reader_aksim2__T encoder_reader_aksim2_co_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void encoder_reader_aksim2_complete_model_initialize
  (RT_MODEL_encoder_reader_aksim_T *const encoder_reader_aksim2_comple_M,
   ExtU_encoder_reader_aksim2_co_T *encoder_reader_aksim2_complet_U,
   ExtY_encoder_reader_aksim2_co_T *encoder_reader_aksim2_complet_Y);
extern void encoder_reader_aksim2_complete_model_step
  (RT_MODEL_encoder_reader_aksim_T *const encoder_reader_aksim2_comple_M,
   ExtU_encoder_reader_aksim2_co_T *encoder_reader_aksim2_complet_U,
   ExtY_encoder_reader_aksim2_co_T *encoder_reader_aksim2_complet_Y);
extern void encoder_reader_aksim2_complete_model_terminate
  (RT_MODEL_encoder_reader_aksim_T *const encoder_reader_aksim2_comple_M);

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
 * '<Root>' : 'encoder_reader_aksim2_complete_model'
 * '<S1>'   : 'encoder_reader_aksim2_complete_model/Aksim2Model'
 * '<S2>'   : 'encoder_reader_aksim2_complete_model/Aksim2Model/If Action Subsystem error'
 * '<S3>'   : 'encoder_reader_aksim2_complete_model/Aksim2Model/If Action Subsystem no error'
 * '<S4>'   : 'encoder_reader_aksim2_complete_model/Aksim2Model/If hal ok Action Subsystem1'
 * '<S5>'   : 'encoder_reader_aksim2_complete_model/Aksim2Model/halError else Action Subsystem'
 * '<S6>'   : 'encoder_reader_aksim2_complete_model/Aksim2Model/If hal ok Action Subsystem1/CRC_error _sw_if Action Subsystem'
 * '<S7>'   : 'encoder_reader_aksim2_complete_model/Aksim2Model/If hal ok Action Subsystem1/Close_Inv_None_error _sw_if Action Subsystem'
 * '<S8>'   : 'encoder_reader_aksim2_complete_model/Aksim2Model/If hal ok Action Subsystem1/Close_Inv_None_error _sw_if Action Subsystem/Close_to_limit_error_sw_case Action Subsystem'
 * '<S9>'   : 'encoder_reader_aksim2_complete_model/Aksim2Model/If hal ok Action Subsystem1/Close_Inv_None_error _sw_if Action Subsystem/Invalid_data_error_sw_case Action Subsystem'
 * '<S10>'  : 'encoder_reader_aksim2_complete_model/Aksim2Model/If hal ok Action Subsystem1/Close_Inv_None_error _sw_if Action Subsystem/No_error _sw_case Action Subsystem'
 */
#endif                             /* encoder_reader_aksim2_complete_model_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
