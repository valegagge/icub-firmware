/*
 * Non-Degree Granting Education License -- for use at non-degree
 * granting, nonprofit, education, and research organizations only. Not
 * for commercial or industrial use.
 *
 * File: encoder_reader_aksim2_complete_model_types.h
 *
 * Code generated for Simulink model 'encoder_reader_aksim2_complete_model'.
 *
 * Model version                  : 2.86
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Wed May  8 15:20:38 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef encoder_reader_aksim2_complete_model_types_h_
#define encoder_reader_aksim2_complete_model_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_hal_result_enum_t_
#define DEFINED_TYPEDEF_FOR_hal_result_enum_t_

typedef int16_T hal_result_enum_t;

/* enum hal_result_enum_t */
#define hal_res_OK                     ((hal_result_enum_t)0)    /* Default value */
#define hal_res_NOK_generic            ((hal_result_enum_t)-1)
#endif

#ifndef DEFINED_TYPEDEF_FOR_aksim2_error_type_
#define DEFINED_TYPEDEF_FOR_aksim2_error_type_

typedef int8_T aksim2_error_type;

/* enum aksim2_error_type */
#define aksim2_error_none              ((aksim2_error_type)6)    /* Default value */
#define aksim2_error_crc               ((aksim2_error_type)1)
#define aksim2_error_invalid_data      ((aksim2_error_type)2)
#define aksim2_error_close_to_limit    ((aksim2_error_type)4)
#endif

#ifndef DEFINED_TYPEDEF_FOR_encoder_error_type_t_
#define DEFINED_TYPEDEF_FOR_encoder_error_type_t_

typedef int8_T encoder_error_type_t;

/* enum encoder_error_type_t */
#define encoder_error_none             ((encoder_error_type_t)0) /* Default value */
#define encoder_error_hal              ((encoder_error_type_t)1)
#define encoder_error_crc              ((encoder_error_type_t)2)
#define encoder_error_invalid_data     ((encoder_error_type_t)3)
#define encoder_error_close_to_limit   ((encoder_error_type_t)4)
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_encoder_reader_aksim2_T RT_MODEL_encoder_reader_aksim_T;

#endif                       /* encoder_reader_aksim2_complete_model_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
