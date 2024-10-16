//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// File: AMC_BLDC.cpp
//
// Code generated for Simulink model 'AMC_BLDC'.
//
// Model version                  : 3.268
// Simulink Coder version         : 9.6 (R2021b) 14-May-2021
// C/C++ source code generated on : Fri Feb 25 14:13:31 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-M
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "AMC_BLDC.h"
#include "AMC_BLDC_private.h"

// Exported block parameters
ConfigurationParameters InitConfParams = {
  {
    0.0F,
    0.0F,
    false,
    7U,
    1.0F,
    2.0F,
    500.0F,
    0.0F,
    0U,
    0.0F,
    0.0F,
    24.0F,
    24.0F
  },

  {
    EstimationVelocityModes_MovingAverage
  },

  {
    0.0F,
    0.0F,
    0.0F,
    0.0F,
    0.0F,
    0.0F,
    0.0F,
    0.0F
  },

  {
    0.0F,
    0.0F,
    0.0F,
    0.0F,
    0.0F,
    0.0F,
    0.0F,
    0.0F
  },

  {
    0.0F,
    0.0F,
    0.0F,
    0.0F,
    0.0F,
    0.0F,
    0.0F,
    0.0F
  },

  {
    1.0F,
    359.0F,
    0.0F,
    360.0F,
    0.0F,
    0.0F,
    100.0F,
    10U,
    2.0F,
    5.0F,
    10.0F,
    32000U
  }
} ;                                    // Variable: InitConfParams
                                          //  Referenced by: '<S7>/SupervisorFSM_RX'


real32_T CAN_ANGLE_DEG2ICUB = 182.044449F;// Variable: CAN_ANGLE_DEG2ICUB
                                             //  Referenced by: '<S6>/CAN_Encoder'
                                             //  2^16/360

uint8_T CAN_ID_AMC = 3U;               // Variable: CAN_ID_AMC
                                          //  Referenced by:
                                          //    '<S6>/CAN_Decoder'
                                          //    '<S6>/CAN_Encoder'
                                          //  4 bits defining the ID of the AMC_BLDC board.

namespace amc_bldc_codegen
{
  // Model step function for TID0
  void AMC_BLDC::step0()         // Sample time: [1.1428571428571438E-6s, 0.0s]
  {
    // (no output/update code required)
  }

  // Model step function for TID1
  void AMC_BLDC::step_FOC()        // Sample time: [3.65714285714286E-5s, 0.0s]
  {
    FOCSlowInputs rtb_BusConversion_InsertedFor_F;
    int8_T wrBufIdx;

    // RateTransition generated from: '<Root>/Adapter2'
    rtw_mutex_lock();
    AMC_BLDC_DW.RTBInsertedForAdapter_Inserte_p =
      AMC_BLDC_DW.RTBInsertedForAdapter_Insert_hj;
    rtw_mutex_unlock();

    // BusCreator generated from: '<Root>/FOC' incorporates:
    //   RateTransition generated from: '<Root>/Adapter2'

    rtb_BusConversion_InsertedFor_F.flags =
      AMC_BLDC_DW.RTBInsertedForAdapter_Inserte_l[AMC_BLDC_DW.RTBInsertedForAdapter_Inserte_p];

    // RateTransition generated from: '<Root>/Adapter2'
    rtw_mutex_lock();
    AMC_BLDC_DW.RTBInsertedForAdapter_Insert_m3 =
      AMC_BLDC_DW.RTBInsertedForAdapter_Insert_mp;
    rtw_mutex_unlock();

    // BusCreator generated from: '<Root>/FOC' incorporates:
    //   RateTransition generated from: '<Root>/Adapter2'

    rtb_BusConversion_InsertedFor_F.configurationparameters =
      AMC_BLDC_DW.RTBInsertedForAdapter_InsertedF[AMC_BLDC_DW.RTBInsertedForAdapter_Insert_m3];

    // RateTransition generated from: '<Root>/Adapter2'
    rtw_mutex_lock();
    AMC_BLDC_DW.RTBInsertedForAdapter_Insert_ko =
      AMC_BLDC_DW.RTBInsertedForAdapter_Insert_b2;
    rtw_mutex_unlock();

    // BusCreator generated from: '<Root>/FOC' incorporates:
    //   RateTransition generated from: '<Root>/Adapter2'

    rtb_BusConversion_InsertedFor_F.estimateddata =
      AMC_BLDC_DW.RTBInsertedForAdapter_Inserte_k[AMC_BLDC_DW.RTBInsertedForAdapter_Insert_ko];

    // RateTransition generated from: '<Root>/Adapter2'
    rtw_mutex_lock();
    AMC_BLDC_DW.RTBInsertedForAdapter_Insert_mb =
      AMC_BLDC_DW.RTBInsertedForAdapter_Insert_jj;
    rtw_mutex_unlock();

    // BusCreator generated from: '<Root>/FOC' incorporates:
    //   RateTransition generated from: '<Root>/Adapter2'

    rtb_BusConversion_InsertedFor_F.targets =
      AMC_BLDC_DW.RTBInsertedForAdapter_Inserte_m[AMC_BLDC_DW.RTBInsertedForAdapter_Insert_mb];

    // RateTransition generated from: '<Root>/Adapter2'
    rtw_mutex_lock();
    AMC_BLDC_DW.RTBInsertedForAdapter_Insert_bw =
      AMC_BLDC_DW.RTBInsertedForAdapter_Insert_p5;
    rtw_mutex_unlock();

    // BusCreator generated from: '<Root>/FOC' incorporates:
    //   RateTransition generated from: '<Root>/Adapter2'

    rtb_BusConversion_InsertedFor_F.controlouteroutputs =
      AMC_BLDC_DW.RTBInsertedForAdapter_Inserte_i[AMC_BLDC_DW.RTBInsertedForAdapter_Insert_bw];

    // ModelReference: '<Root>/FOC' incorporates:
    //   Inport: '<Root>/SensorsData'
    //   Outport: '<Root>/ControlOutputs'

    FOCMDLOBJ2.step(&AMC_BLDC_U.SensorsData_p, &rtb_BusConversion_InsertedFor_F,
                    &AMC_BLDC_Y.ControlOutputs_p);

    // RateTransition generated from: '<Root>/Adapter1' incorporates:
    //   Outport: '<Root>/ControlOutputs'

    rtw_mutex_lock();
    wrBufIdx = static_cast<int8_T>(AMC_BLDC_DW.RTBInsertedForAdapter_Insert_js +
      1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }

    if (wrBufIdx == AMC_BLDC_DW.RTBInsertedForAdapter_Inserte_a) {
      wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
      if (wrBufIdx == 3) {
        wrBufIdx = 0;
      }
    }

    rtw_mutex_unlock();
    switch (wrBufIdx) {
     case 0:
      AMC_BLDC_DW.RTBInsertedForAdapter_Inserte_d = AMC_BLDC_Y.ControlOutputs_p;
      break;

     case 1:
      AMC_BLDC_DW.RTBInsertedForAdapter_Insert_j2 = AMC_BLDC_Y.ControlOutputs_p;
      break;

     case 2:
      AMC_BLDC_DW.RTBInsertedForAdapter_Inserte_o = AMC_BLDC_Y.ControlOutputs_p;
      break;
    }

    AMC_BLDC_DW.RTBInsertedForAdapter_Insert_js = wrBufIdx;

    // End of RateTransition generated from: '<Root>/Adapter1'

    // RateTransition generated from: '<Root>/Adapter3' incorporates:
    //   Inport: '<Root>/SensorsData'

    rtw_mutex_lock();
    wrBufIdx = static_cast<int8_T>(AMC_BLDC_DW.RTBInsertedForAdapter_Inserte_g +
      1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }

    if (wrBufIdx == AMC_BLDC_DW.RTBInsertedForAdapter_Insert_pa) {
      wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
      if (wrBufIdx == 3) {
        wrBufIdx = 0;
      }
    }

    rtw_mutex_unlock();
    switch (wrBufIdx) {
     case 0:
      AMC_BLDC_DW.RTBInsertedForAdapter_Inserte_e = AMC_BLDC_U.SensorsData_p;
      break;

     case 1:
      AMC_BLDC_DW.RTBInsertedForAdapter_Inserte_c = AMC_BLDC_U.SensorsData_p;
      break;

     case 2:
      AMC_BLDC_DW.RTBInsertedForAdapter_Inserte_j = AMC_BLDC_U.SensorsData_p;
      break;
    }

    AMC_BLDC_DW.RTBInsertedForAdapter_Inserte_g = wrBufIdx;

    // End of RateTransition generated from: '<Root>/Adapter3'
  }

  // Model step function for TID2
  void AMC_BLDC::step_Time()           // Sample time: [0.001s, 0.0s]
  {
    // local block i/o variables
    ControlOuterOutputs rtb_OuterControl;
    ConfigurationParameters *rtb_ZOHBlockInsertedForAdapte_0;
    int8_T wrBufIdx;

    // UnitDelay generated from: '<Root>/Adapter'
    rtb_ZOHBlockInsertedForAdapte_0 =
      &AMC_BLDC_DW.ZOHBlockInsertedForAdapter_Inse;

    // RateTransition generated from: '<Root>/Adapter3'
    rtw_mutex_lock();
    AMC_BLDC_DW.RTBInsertedForAdapter_Insert_pa =
      AMC_BLDC_DW.RTBInsertedForAdapter_Inserte_g;
    rtw_mutex_unlock();
    switch (AMC_BLDC_DW.RTBInsertedForAdapter_Insert_pa) {
     case 0:
      // RateTransition generated from: '<Root>/Adapter3'
      AMC_BLDC_B.RTBInsertedForAdapter_InsertedF =
        AMC_BLDC_DW.RTBInsertedForAdapter_Inserte_e;
      break;

     case 1:
      // RateTransition generated from: '<Root>/Adapter3'
      AMC_BLDC_B.RTBInsertedForAdapter_InsertedF =
        AMC_BLDC_DW.RTBInsertedForAdapter_Inserte_c;
      break;

     case 2:
      // RateTransition generated from: '<Root>/Adapter3'
      AMC_BLDC_B.RTBInsertedForAdapter_InsertedF =
        AMC_BLDC_DW.RTBInsertedForAdapter_Inserte_j;
      break;
    }

    // End of RateTransition generated from: '<Root>/Adapter3'

    // ModelReference: '<S5>/Estimation_Velocity' incorporates:
    //   Outport: '<Root>/EstimatedData'

    Estimation_VelocityMDLOBJ1.step(AMC_BLDC_B.RTBInsertedForAdapter_InsertedF,
      rtb_ZOHBlockInsertedForAdapte_0[0], AMC_BLDC_Y.EstimatedData_p);

    // ModelReference: '<S6>/CAN_Decoder' incorporates:
    //   Inport: '<Root>/PacketsRx'

    AMC_BLDC_B.CAN_Decoder_o1 = CAN_DecoderMDLOBJ2.step(AMC_BLDC_U.PacketsRx,
      AMC_BLDC_B.CAN_Decoder_o2, AMC_BLDC_B.CAN_Decoder_o3);

    // RateTransition generated from: '<Root>/Adapter1'
    rtw_mutex_lock();
    AMC_BLDC_DW.RTBInsertedForAdapter_Inserte_a =
      AMC_BLDC_DW.RTBInsertedForAdapter_Insert_js;
    rtw_mutex_unlock();
    switch (AMC_BLDC_DW.RTBInsertedForAdapter_Inserte_a) {
     case 0:
      // RateTransition generated from: '<Root>/Adapter1'
      AMC_BLDC_B.RTBInsertedForAdapter_Inserte_a =
        AMC_BLDC_DW.RTBInsertedForAdapter_Inserte_d;
      break;

     case 1:
      // RateTransition generated from: '<Root>/Adapter1'
      AMC_BLDC_B.RTBInsertedForAdapter_Inserte_a =
        AMC_BLDC_DW.RTBInsertedForAdapter_Insert_j2;
      break;

     case 2:
      // RateTransition generated from: '<Root>/Adapter1'
      AMC_BLDC_B.RTBInsertedForAdapter_Inserte_a =
        AMC_BLDC_DW.RTBInsertedForAdapter_Inserte_o;
      break;
    }

    // End of RateTransition generated from: '<Root>/Adapter1'

    // ModelReference: '<S7>/SupervisorFSM_RX' incorporates:
    //   Inport: '<Root>/ExternalFlags'
    //   Outport: '<Root>/ConfigurationParameters'
    //   Outport: '<Root>/EstimatedData'
    //   Outport: '<Root>/Flags'

    SupervisorFSM_RXMDLOBJ6.step(AMC_BLDC_B.CAN_Decoder_o2,
      AMC_BLDC_B.CAN_Decoder_o1, AMC_BLDC_B.CAN_Decoder_o3,
      AMC_BLDC_Y.EstimatedData_p, AMC_BLDC_B.RTBInsertedForAdapter_InsertedF,
      AMC_BLDC_B.RTBInsertedForAdapter_Inserte_a, AMC_BLDC_U.ExternalFlags_p,
      AMC_BLDC_B.Targets_n, AMC_BLDC_Y.ConfigurationParameters_p,
      AMC_BLDC_Y.Flags_p);

    // ModelReference: '<S7>/SupervisorFSM_TX' incorporates:
    //   Outport: '<Root>/ConfigurationParameters'
    //   Outport: '<Root>/EstimatedData'
    //   Outport: '<Root>/Flags'

    SupervisorFSM_TXMDLOBJ7.step(AMC_BLDC_Y.Flags_p,
      AMC_BLDC_B.RTBInsertedForAdapter_InsertedF, AMC_BLDC_Y.EstimatedData_p,
      AMC_BLDC_B.RTBInsertedForAdapter_Inserte_a,
      AMC_BLDC_Y.ConfigurationParameters_p, AMC_BLDC_B.MessagesTx,
      AMC_BLDC_B.SupervisorFSM_TX_o2);

    // ModelReference: '<S6>/CAN_Encoder' incorporates:
    //   Outport: '<Root>/PacketsTx'

    CAN_EncoderMDLOBJ4.step(AMC_BLDC_B.MessagesTx,
      AMC_BLDC_B.SupervisorFSM_TX_o2, AMC_BLDC_Y.PacketsTx);

    // ModelReference: '<Root>/OuterControl' incorporates:
    //   Outport: '<Root>/ConfigurationParameters'
    //   Outport: '<Root>/EstimatedData'
    //   Outport: '<Root>/Flags'

    OuterControlMDLOBJ5.step(AMC_BLDC_Y.Flags_p,
      AMC_BLDC_Y.ConfigurationParameters_p, AMC_BLDC_B.Targets_n,
      AMC_BLDC_B.RTBInsertedForAdapter_InsertedF, AMC_BLDC_Y.EstimatedData_p,
      rtb_OuterControl);

    // RateTransition generated from: '<Root>/Adapter2'
    rtw_mutex_lock();
    wrBufIdx = static_cast<int8_T>(AMC_BLDC_DW.RTBInsertedForAdapter_Insert_p5 +
      1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }

    if (wrBufIdx == AMC_BLDC_DW.RTBInsertedForAdapter_Insert_bw) {
      wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
      if (wrBufIdx == 3) {
        wrBufIdx = 0;
      }
    }

    rtw_mutex_unlock();
    AMC_BLDC_DW.RTBInsertedForAdapter_Inserte_i[wrBufIdx] = rtb_OuterControl;
    AMC_BLDC_DW.RTBInsertedForAdapter_Insert_p5 = wrBufIdx;

    // RateTransition generated from: '<Root>/Adapter2' incorporates:
    //   Outport: '<Root>/Flags'

    rtw_mutex_lock();
    wrBufIdx = static_cast<int8_T>(AMC_BLDC_DW.RTBInsertedForAdapter_Insert_hj +
      1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }

    if (wrBufIdx == AMC_BLDC_DW.RTBInsertedForAdapter_Inserte_p) {
      wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
      if (wrBufIdx == 3) {
        wrBufIdx = 0;
      }
    }

    rtw_mutex_unlock();
    AMC_BLDC_DW.RTBInsertedForAdapter_Inserte_l[wrBufIdx] = AMC_BLDC_Y.Flags_p;
    AMC_BLDC_DW.RTBInsertedForAdapter_Insert_hj = wrBufIdx;

    // RateTransition generated from: '<Root>/Adapter2' incorporates:
    //   Outport: '<Root>/ConfigurationParameters'

    rtw_mutex_lock();
    wrBufIdx = static_cast<int8_T>(AMC_BLDC_DW.RTBInsertedForAdapter_Insert_mp +
      1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }

    if (wrBufIdx == AMC_BLDC_DW.RTBInsertedForAdapter_Insert_m3) {
      wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
      if (wrBufIdx == 3) {
        wrBufIdx = 0;
      }
    }

    rtw_mutex_unlock();
    AMC_BLDC_DW.RTBInsertedForAdapter_InsertedF[wrBufIdx] =
      AMC_BLDC_Y.ConfigurationParameters_p;
    AMC_BLDC_DW.RTBInsertedForAdapter_Insert_mp = wrBufIdx;

    // RateTransition generated from: '<Root>/Adapter2'
    rtw_mutex_lock();
    wrBufIdx = static_cast<int8_T>(AMC_BLDC_DW.RTBInsertedForAdapter_Insert_jj +
      1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }

    if (wrBufIdx == AMC_BLDC_DW.RTBInsertedForAdapter_Insert_mb) {
      wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
      if (wrBufIdx == 3) {
        wrBufIdx = 0;
      }
    }

    rtw_mutex_unlock();
    AMC_BLDC_DW.RTBInsertedForAdapter_Inserte_m[wrBufIdx] = AMC_BLDC_B.Targets_n;
    AMC_BLDC_DW.RTBInsertedForAdapter_Insert_jj = wrBufIdx;

    // RateTransition generated from: '<Root>/Adapter2' incorporates:
    //   Outport: '<Root>/EstimatedData'

    rtw_mutex_lock();
    wrBufIdx = static_cast<int8_T>(AMC_BLDC_DW.RTBInsertedForAdapter_Insert_b2 +
      1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }

    if (wrBufIdx == AMC_BLDC_DW.RTBInsertedForAdapter_Insert_ko) {
      wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
      if (wrBufIdx == 3) {
        wrBufIdx = 0;
      }
    }

    rtw_mutex_unlock();
    AMC_BLDC_DW.RTBInsertedForAdapter_Inserte_k[wrBufIdx] =
      AMC_BLDC_Y.EstimatedData_p;
    AMC_BLDC_DW.RTBInsertedForAdapter_Insert_b2 = wrBufIdx;

    // Update for UnitDelay generated from: '<Root>/Adapter' incorporates:
    //   Outport: '<Root>/ConfigurationParameters'

    AMC_BLDC_DW.ZOHBlockInsertedForAdapter_Inse =
      AMC_BLDC_Y.ConfigurationParameters_p;
  }

  // Model initialize function
  void AMC_BLDC::initialize()
  {
    // Model Initialize function for ModelReference Block: '<S5>/Estimation_Velocity' 

    // Set error status pointer for ModelReference Block: '<S5>/Estimation_Velocity' 
    Estimation_VelocityMDLOBJ1.setErrorStatusPointer(rtmGetErrorStatusPointer
      ((&AMC_BLDC_M)));
    Estimation_VelocityMDLOBJ1.initialize();

    // Model Initialize function for ModelReference Block: '<Root>/FOC'

    // Set error status pointer for ModelReference Block: '<Root>/FOC'
    FOCMDLOBJ2.setErrorStatusPointer(rtmGetErrorStatusPointer((&AMC_BLDC_M)));
    FOCMDLOBJ2.initialize();

    // Model Initialize function for ModelReference Block: '<S6>/CAN_Decoder'

    // Set error status pointer for ModelReference Block: '<S6>/CAN_Decoder'
    CAN_DecoderMDLOBJ2.setErrorStatusPointer(rtmGetErrorStatusPointer
      ((&AMC_BLDC_M)));

    // Model Initialize function for ModelReference Block: '<S6>/CAN_Encoder'

    // Set error status pointer for ModelReference Block: '<S6>/CAN_Encoder'
    CAN_EncoderMDLOBJ4.setErrorStatusPointer(rtmGetErrorStatusPointer
      ((&AMC_BLDC_M)));

    // Model Initialize function for ModelReference Block: '<Root>/OuterControl' 

    // Set error status pointer for ModelReference Block: '<Root>/OuterControl'
    OuterControlMDLOBJ5.setErrorStatusPointer(rtmGetErrorStatusPointer
      ((&AMC_BLDC_M)));
    OuterControlMDLOBJ5.initialize();

    // Model Initialize function for ModelReference Block: '<S7>/SupervisorFSM_RX' 

    // Set error status pointer for ModelReference Block: '<S7>/SupervisorFSM_RX' 
    SupervisorFSM_RXMDLOBJ6.setErrorStatusPointer(rtmGetErrorStatusPointer
      ((&AMC_BLDC_M)));

    // Model Initialize function for ModelReference Block: '<S7>/SupervisorFSM_TX' 

    // Set error status pointer for ModelReference Block: '<S7>/SupervisorFSM_TX' 
    SupervisorFSM_TXMDLOBJ7.setErrorStatusPointer(rtmGetErrorStatusPointer
      ((&AMC_BLDC_M)));

    // Start for RateTransition generated from: '<Root>/Adapter2'
    rtw_mutex_init();

    // Start for RateTransition generated from: '<Root>/Adapter2'
    rtw_mutex_init();

    // Start for RateTransition generated from: '<Root>/Adapter2'
    rtw_mutex_init();

    // Start for RateTransition generated from: '<Root>/Adapter2'
    rtw_mutex_init();

    // Start for RateTransition generated from: '<Root>/Adapter2'
    rtw_mutex_init();

    // Start for RateTransition generated from: '<Root>/Adapter1'
    rtw_mutex_init();

    // Start for RateTransition generated from: '<Root>/Adapter3'
    rtw_mutex_init();

    // SystemInitialize for ModelReference: '<S5>/Estimation_Velocity'
    Estimation_VelocityMDLOBJ1.init();

    // SystemInitialize for ModelReference: '<Root>/FOC'
    FOCMDLOBJ2.init();

    // SystemInitialize for ModelReference: '<S6>/CAN_Decoder'
    CAN_DecoderMDLOBJ2.init();

    // SystemInitialize for ModelReference: '<Root>/OuterControl'
    OuterControlMDLOBJ5.init();

    // SystemInitialize for ModelReference: '<S7>/SupervisorFSM_RX' incorporates:
    //   Outport: '<Root>/ConfigurationParameters'
    //   Outport: '<Root>/Flags'

    SupervisorFSM_RXMDLOBJ6.init(&AMC_BLDC_Y.Flags_p, &AMC_BLDC_B.Targets_n,
      &AMC_BLDC_Y.ConfigurationParameters_p);

    // SystemInitialize for ModelReference: '<S7>/SupervisorFSM_TX'
    SupervisorFSM_TXMDLOBJ7.init(&AMC_BLDC_B.MessagesTx,
      &AMC_BLDC_B.SupervisorFSM_TX_o2);
  }

  // Model terminate function
  void AMC_BLDC::terminate()
  {
    // Terminate for RateTransition generated from: '<Root>/Adapter2'
    rtw_mutex_destroy();

    // Terminate for RateTransition generated from: '<Root>/Adapter2'
    rtw_mutex_destroy();

    // Terminate for RateTransition generated from: '<Root>/Adapter2'
    rtw_mutex_destroy();

    // Terminate for RateTransition generated from: '<Root>/Adapter2'
    rtw_mutex_destroy();

    // Terminate for RateTransition generated from: '<Root>/Adapter2'
    rtw_mutex_destroy();

    // Terminate for RateTransition generated from: '<Root>/Adapter1'
    rtw_mutex_destroy();

    // Terminate for RateTransition generated from: '<Root>/Adapter3'
    rtw_mutex_destroy();
  }

  // Constructor
  AMC_BLDC::AMC_BLDC() :
    AMC_BLDC_U(),
    AMC_BLDC_Y(),
    AMC_BLDC_B(),
    AMC_BLDC_DW(),
    AMC_BLDC_M()
  {
    // Currently there is no constructor body generated.
  }

  // Destructor
  AMC_BLDC::~AMC_BLDC()
  {
    // Currently there is no destructor body generated.
  }

  // Real-Time Model get method
  amc_bldc_codegen::AMC_BLDC::RT_MODEL_AMC_BLDC_T * AMC_BLDC::getRTM()
  {
    return (&AMC_BLDC_M);
  }
}

//
// File trailer for generated code.
//
// [EOF]
//
