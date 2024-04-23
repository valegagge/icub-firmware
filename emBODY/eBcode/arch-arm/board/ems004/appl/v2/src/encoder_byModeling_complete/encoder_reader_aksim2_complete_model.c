/*
 * Non-Degree Granting Education License -- for use at non-degree
 * granting, nonprofit, education, and research organizations only. Not
 * for commercial or industrial use.
 *
 * File: encoder_reader_aksim2_complete_model.c
 *
 * Code generated for Simulink model 'encoder_reader_aksim2_complete_model'.
 *
 * Model version                  : 2.77
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Tue Apr 23 16:40:35 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "encoder_reader_aksim2_complete_model.h"
#include "rtwtypes.h"
#include "encoder_reader_aksim2_complete_model_types.h"
#include <string.h>

/* Model step function */
void encoder_reader_aksim2_complete_model_step(RT_MODEL_encoder_reader_aksim_T *
  const encoder_reader_aksim2_comple_M, ExtU_encoder_reader_aksim2_co_T
  *encoder_reader_aksim2_complet_U, ExtY_encoder_reader_aksim2_co_T
  *encoder_reader_aksim2_complet_Y)
{
  B_encoder_reader_aksim2_compl_T *encoder_reader_aksim2_complet_B =
    encoder_reader_aksim2_comple_M->blockIO;
  int32_T tmp;
  int32_T tmp_0;
  int8_T rtb_convert_from_aksim_diagnost;
  int8_T s8_iter;

  /* If: '<S1>/If1' incorporates:
   *  DataTypeConversion: '<S1>/Data Type Conversion'
   */
  if ((int8_T)encoder_reader_aksim2_complet_U->hal_result == 0) {
    /* Outputs for IfAction SubSystem: '<S1>/If hal ok Action Subsystem1' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* DataTypeConversion: '<S4>/convert_from_aksim_diagnostic_to_int' */
    rtb_convert_from_aksim_diagnost =
      encoder_reader_aksim2_complet_U->diagnostic;

    /* Outputs for Iterator SubSystem: '<S4>/For Iterator Subsystem' incorporates:
     *  ForIterator: '<S8>/For Iterator'
     */
    for (s8_iter = 0; s8_iter < 3; s8_iter++) {
      /* If: '<S8>/If' incorporates:
       *  ArithShift: '<S8>/Shift Arithmetic'
       *  Constant: '<S8>/Constant'
       *  S-Function (sfix_bitop): '<S8>/Bitwise NOR'
       */
      if ((1 << s8_iter & rtb_convert_from_aksim_diagnost) ==
          rtb_convert_from_aksim_diagnost) {
        /* Outputs for IfAction SubSystem: '<S8>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S11>/Action Port'
         */
        /* SignalConversion generated from: '<S11>/Input1' */
        encoder_reader_aksim2_complet_B->Input1 =
          rtb_convert_from_aksim_diagnost;

        /* End of Outputs for SubSystem: '<S8>/If Action Subsystem1' */
      }

      /* End of If: '<S8>/If' */
    }

    /* End of Outputs for SubSystem: '<S4>/For Iterator Subsystem' */

    /* SwitchCase: '<S4>/Switch Case aksim error' */
    switch (encoder_reader_aksim2_complet_B->Input1) {
     case 4:
      /* Outputs for IfAction SubSystem: '<S4>/Close_to_limit_error_sw_case Action Subsystem' incorporates:
       *  ActionPort: '<S7>/Action Port'
       */
      /* Merge: '<S1>/merge_for_error_type' incorporates:
       *  Constant: '<S7>/const_close_to_limit'
       *  SignalConversion generated from: '<S7>/Output'
       */
      encoder_reader_aksim2_complet_Y->error_type = encoder_error_close_to_limit;

      /* End of Outputs for SubSystem: '<S4>/Close_to_limit_error_sw_case Action Subsystem' */
      break;

     case 2:
      /* Outputs for IfAction SubSystem: '<S4>/Invalid_data_error_sw_case Action Subsystem' incorporates:
       *  ActionPort: '<S9>/Action Port'
       */
      /* Merge: '<S1>/merge_for_error_type' incorporates:
       *  Constant: '<S9>/const_invalid_data_error'
       *  SignalConversion generated from: '<S9>/Out1'
       */
      encoder_reader_aksim2_complet_Y->error_type = encoder_error_invalid_data;

      /* End of Outputs for SubSystem: '<S4>/Invalid_data_error_sw_case Action Subsystem' */
      break;

     case 1:
      /* Outputs for IfAction SubSystem: '<S4>/CRC_error_sw_case Action Subsystem' incorporates:
       *  ActionPort: '<S6>/Action Port'
       */
      /* Merge: '<S1>/merge_for_error_type' incorporates:
       *  Constant: '<S6>/const_crc_error'
       *  SignalConversion generated from: '<S6>/Out1'
       */
      encoder_reader_aksim2_complet_Y->error_type = encoder_error_crc;

      /* End of Outputs for SubSystem: '<S4>/CRC_error_sw_case Action Subsystem' */
      break;

     default:
      /* Outputs for IfAction SubSystem: '<S4>/No_error _sw_case Action Subsystem' incorporates:
       *  ActionPort: '<S10>/Action Port'
       */
      /* Merge: '<S1>/merge_for_error_type' incorporates:
       *  Constant: '<S10>/akism_error_none'
       *  SignalConversion generated from: '<S10>/Out1'
       */
      encoder_reader_aksim2_complet_Y->error_type = encoder_error_none;

      /* End of Outputs for SubSystem: '<S4>/No_error _sw_case Action Subsystem' */
      break;
    }

    /* End of SwitchCase: '<S4>/Switch Case aksim error' */
    /* End of Outputs for SubSystem: '<S1>/If hal ok Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/halError else Action Subsystem' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    /* Merge: '<S1>/merge_for_error_type' incorporates:
     *  Constant: '<S5>/Constant'
     *  SignalConversion generated from: '<S5>/error_type_aksim2_hal_error_not_connected'
     */
    encoder_reader_aksim2_complet_Y->error_type = encoder_error_hal;

    /* End of Outputs for SubSystem: '<S1>/halError else Action Subsystem' */
  }

  /* End of If: '<S1>/If1' */

  /* If: '<S1>/If data valid' */
  if (encoder_reader_aksim2_complet_Y->error_type ==
      encoder_reader_aksim2_co_ConstB.DataTypeConversion3) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem no error' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* Switch: '<S3>/Switch' incorporates:
     *  Constant: '<S3>/const_to_deg'
     *  Constant: '<S3>/const_to_icubDeg'
     */
    if (encoder_reader_aksim2_complet_U->is_in_iCubDeg) {
      tmp = 65535;
    } else {
      tmp = 360;
    }

    /* Abs: '<S3>/Abs' */
    if (encoder_reader_aksim2_complet_U->resolution < 0) {
      tmp_0 = -encoder_reader_aksim2_complet_U->resolution;
    } else {
      tmp_0 = encoder_reader_aksim2_complet_U->resolution;
    }

    /* Outport: '<Root>/position_out' incorporates:
     *  Abs: '<S3>/Abs'
     *  Product: '<S3>/Divide'
     *  Switch: '<S3>/Switch'
     */
    encoder_reader_aksim2_complet_Y->position_out = (real_T)tmp / (real_T)tmp_0 *
      (real_T)encoder_reader_aksim2_complet_U->raw_value;

    /* Outport: '<Root>/is_aksim2_position_valid' incorporates:
     *  Constant: '<S3>/Constant'
     *  SignalConversion generated from: '<S3>/is_aksim2_position_valid'
     */
    encoder_reader_aksim2_complet_Y->is_aksim2_position_valid = true;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem no error' */
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem error' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Outport: '<Root>/is_aksim2_position_valid' incorporates:
     *  Constant: '<S2>/Constant'
     *  SignalConversion generated from: '<S2>/is_aksim2_position_valid'
     */
    encoder_reader_aksim2_complet_Y->is_aksim2_position_valid = false;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem error' */
  }

  /* End of If: '<S1>/If data valid' */
}

/* Model initialize function */
void encoder_reader_aksim2_complete_model_initialize
  (RT_MODEL_encoder_reader_aksim_T *const encoder_reader_aksim2_comple_M,
   ExtU_encoder_reader_aksim2_co_T *encoder_reader_aksim2_complet_U,
   ExtY_encoder_reader_aksim2_co_T *encoder_reader_aksim2_complet_Y)
{
  B_encoder_reader_aksim2_compl_T *encoder_reader_aksim2_complet_B =
    encoder_reader_aksim2_comple_M->blockIO;

  /* Registration code */

  /* block I/O */
  (void) memset(((void *) encoder_reader_aksim2_complet_B), 0,
                sizeof(B_encoder_reader_aksim2_compl_T));

  /* external inputs */
  (void)memset(encoder_reader_aksim2_complet_U, 0, sizeof
               (ExtU_encoder_reader_aksim2_co_T));

  /* external outputs */
  (void)memset(encoder_reader_aksim2_complet_Y, 0, sizeof
               (ExtY_encoder_reader_aksim2_co_T));
}

/* Model terminate function */
void encoder_reader_aksim2_complete_model_terminate
  (RT_MODEL_encoder_reader_aksim_T *const encoder_reader_aksim2_comple_M)
{
  /* (no terminate code required) */
  UNUSED_PARAMETER(encoder_reader_aksim2_comple_M);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
