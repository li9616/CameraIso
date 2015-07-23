/*
 * Project Name: USB3_Iso_10bint_3_0.cyfx
 * Time : 01/09/2015 12:42:32
 * Device Type: FX3
 * Project Type: GPIF2
 *
 *
 *
 *
 * This is a generated file and should not be modified
 * This file need to be included only once in the firmware
 * This file is generated by Gpif2 designer tool version - 1.0.1174.2
 * 
 */

#ifndef _INCLUDED_CYFXGPIF2CONFIG_USB2_
#define _INCLUDED_CYFXGPIF2CONFIG_USB2_
#include "cyu3types.h"
#include "cyu3gpif.h"

/* Summary
   Number of states in the state machine
 */
#define CY_NUMBER_OF_STATES_USB2 31

/* Summary
   Mapping of user defined state names to state indices
 */
#define START_USB2 0
#define STATE0 1
#define STATE1 2
#define STATE2 4
#define STATE3 5
#define STATE4 6
#define STATE5 9
#define STATE6 10
#define STATE7 11
#define STATE8 8
#define STATE9 13
#define STATE10 15
#define STATE11 17
#define STATE12 16
#define STATE13 19
#define STATE14 21
#define STATE15 22
#define STATE16 20
#define STATE17 24
#define STATE19 26
#define STATE26 25
#define STATE25 23
#define STATE18 3
#define STATE21 28
#define STATE20 27
#define STATE23 12
#define STATE24 14
#define STATE22 18
#define STATE27 7
#define STATE28 30
#define STATE29 29


/* Summary
   Initial value of early outputs from the state machine.
 */
#define ALPHA_START_USB2 0x0


/* Summary
   Transition function values used in the state machine.
 */
uint16_t CyFxGpifTransition_usb2[]  = {
    0x0000, 0x5555, 0xAAAA, 0x1111, 0x4444, 0x3333, 0xCCCC, 0x8888, 0x2222
};

/* Summary
   Table containing the transition information for various states. 
   This table has to be stored in the WAVEFORM Registers.
   This array consists of non-replicated waveform descriptors and acts as a 
   waveform table. 
 */
CyU3PGpifWaveData CyFxGpifWavedata_usb2[]  = {
    {{0x1E738101,0x00000000,0x80000000},{0x00000000,0x00000000,0x00000000}},
    {{0x7E700102,0x00000000,0xC00000A8},{0x00000000,0x00000000,0x00000000}},
    {{0x1E738003,0x00000000,0xC0000000},{0x00000000,0x00000000,0x00000000}},
    {{0x8E72401A,0x0000000E,0xC0400004},{0x00000000,0x00000000,0x00000000}},
    {{0x1E700106,0x0000000C,0x80000000},{0x1E700106,0x0000000C,0x80000000}},
    {{0x1E739404,0x20000004,0x80400040},{0x1E700106,0x0000000C,0x80000000}},
    {{0x00000008,0x00000000,0x80000100},{0x3E728009,0x00000008,0x80000000}},
    {{0x2E73801E,0x00000100,0xC0000000},{0x00000000,0x00000000,0x00000000}},
    {{0x00000000,0x00000000,0x00000000},{0x00000000,0x00000000,0x00000000}},
    {{0x2E70200A,0x0000000A,0xC0000020},{0x1E70010B,0x0000000C,0xC00000A0}},
    {{0x7E72600C,0x00000100,0x80400010},{0x00000008,0x00000000,0x80000100}},
    {{0x0000000D,0x00000000,0x80000100},{0x7E72600E,0x00000100,0x80400010}},
    {{0x1E739404,0x20000004,0x80400040},{0x00000000,0x00000000,0x00000000}},
    {{0x1E73940F,0x24000004,0x80400040},{0x00000000,0x00000000,0x00000000}},
    {{0x2E702010,0x0000000A,0x80000000},{0x2E702010,0x0000000A,0x80000000}},
    {{0x3E728013,0x00000008,0x80000000},{0x00000014,0x00000000,0x80000100}},
    {{0x1E73940F,0x24000004,0x80400040},{0x2E702010,0x0000000A,0x80000000}},
    {{0x2E73801D,0x00000100,0xC0000000},{0x00000000,0x00000000,0x00000000}},
    {{0x1E700115,0x0000000C,0xC0000020},{0x1E700116,0x0000000C,0xC00000A0}},
    {{0x00000014,0x00000000,0x80000100},{0x7E726017,0x00000100,0x80400010}},
    {{0x00000018,0x00000000,0x80000100},{0x7E726019,0x00000100,0x80400010}},
    {{0x1E738003,0x00000000,0xC0000000},{0x2E73801B,0x00000000,0xC0000020}},
    {{0x7E72601C,0x00000100,0x80400010},{0x00000000,0x00000000,0x00000000}},
    {{0x2E738005,0x00000102,0xC0400000},{0x2E738007,0x00000000,0xC0000080}},
    {{0x2E738011,0x00000102,0xC0400000},{0x2E738012,0x00000000,0xC0000080}}
};

/* Summary
   Table that maps state indices to the descriptor table indices.
 */
uint8_t CyFxGpifWavedataPosition_usb2[]  = {
    0,1,2,3,4,5,6,7,8,9,10,11,12,8,13,14,15,16,17,18,8,19,20,13,8,12,21,22,12,12,13,8,
    8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
    8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
    8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
    0,1,2,3,23,5,6,7,8,9,10,11,12,8,13,24,15,16,17,18,8,19,20,13,8,12,21,22,12,12,13
};

/* Summary
   GPIF II configuration register values.
 */
uint32_t CyFxGpifRegValue_usb2[]  = {
    0x80008300,  /*  CY_U3P_PIB_GPIF_CONFIG */
    0x00000067,  /*  CY_U3P_PIB_GPIF_BUS_CONFIG */
    0x00000001,  /*  CY_U3P_PIB_GPIF_BUS_CONFIG2 */
    0x00000046,  /*  CY_U3P_PIB_GPIF_AD_CONFIG */
    0x00000000,  /*  CY_U3P_PIB_GPIF_STATUS */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INTR */
    0x00000002,  /*  CY_U3P_PIB_GPIF_INTR_MASK */
    0x00000082,  /*  CY_U3P_PIB_GPIF_SERIAL_IN_CONFIG */
    0x00000782,  /*  CY_U3P_PIB_GPIF_SERIAL_OUT_CONFIG */
    0x00000440,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_DIRECTION */
    0x0000FFFC,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_DEFAULT */
    0x00000028,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_POLARITY */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_TOGGLE */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000001,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000003,  /*  CY_U3P_PIB_GPIF_CTRL_COUNT_CONFIG */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_COUNT_RESET */
    0x00000078,  /*  CY_U3P_PIB_GPIF_CTRL_COUNT_LIMIT */
    0x00000109,  /*  CY_U3P_PIB_GPIF_ADDR_COUNT_CONFIG */
    0x00000000,  /*  CY_U3P_PIB_GPIF_ADDR_COUNT_RESET */
    0x0000027F,  /*  CY_U3P_PIB_GPIF_ADDR_COUNT_LIMIT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_STATE_COUNT_CONFIG */
    0x0000FFFF,  /*  CY_U3P_PIB_GPIF_STATE_COUNT_LIMIT */
    0x00000109,  /*  CY_U3P_PIB_GPIF_DATA_COUNT_CONFIG */
    0x00000000,  /*  CY_U3P_PIB_GPIF_DATA_COUNT_RESET */
    0x000005B7,  /*  CY_U3P_PIB_GPIF_DATA_COUNT_LIMIT 5F2*/
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_COMP_VALUE */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_COMP_MASK */
    0x00000000,  /*  CY_U3P_PIB_GPIF_DATA_COMP_VALUE */
    0x00000000,  /*  CY_U3P_PIB_GPIF_DATA_COMP_MASK */
    0x00000000,  /*  CY_U3P_PIB_GPIF_ADDR_COMP_VALUE */
    0x00000000,  /*  CY_U3P_PIB_GPIF_ADDR_COMP_MASK */
    0x00000000,  /*  CY_U3P_PIB_GPIF_DATA_CTRL */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INGRESS_DATA */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INGRESS_DATA */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INGRESS_DATA */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INGRESS_DATA */
    0x00000000,  /*  CY_U3P_PIB_GPIF_EGRESS_DATA */
    0x00000000,  /*  CY_U3P_PIB_GPIF_EGRESS_DATA */
    0x00000000,  /*  CY_U3P_PIB_GPIF_EGRESS_DATA */
    0x00000000,  /*  CY_U3P_PIB_GPIF_EGRESS_DATA */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INGRESS_ADDRESS */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INGRESS_ADDRESS */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INGRESS_ADDRESS */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INGRESS_ADDRESS */
    0x00000000,  /*  CY_U3P_PIB_GPIF_EGRESS_ADDRESS */
    0x00000000,  /*  CY_U3P_PIB_GPIF_EGRESS_ADDRESS */
    0x00000000,  /*  CY_U3P_PIB_GPIF_EGRESS_ADDRESS */
    0x00000000,  /*  CY_U3P_PIB_GPIF_EGRESS_ADDRESS */
    0x80010400,  /*  CY_U3P_PIB_GPIF_THREAD_CONFIG */
    0x80010401,  /*  CY_U3P_PIB_GPIF_THREAD_CONFIG */
    0x80010402,  /*  CY_U3P_PIB_GPIF_THREAD_CONFIG */
    0x80010403,  /*  CY_U3P_PIB_GPIF_THREAD_CONFIG */
    0x00000000,  /*  CY_U3P_PIB_GPIF_LAMBDA_STAT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_ALPHA_STAT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_BETA_STAT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_WAVEFORM_CTRL_STAT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_WAVEFORM_SWITCH */
    0x00000000,  /*  CY_U3P_PIB_GPIF_WAVEFORM_SWITCH_TIMEOUT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CRC_CONFIG */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CRC_DATA */
    0xFFFFFFC1  /*  CY_U3P_PIB_GPIF_BETA_DEASSERT */
};

/* Summary
   This structure holds all the configuration inputs for the GPIF II. 
 */
const CyU3PGpifConfig_t CyFxGpifConfig_usb2  = {
    (uint16_t)(sizeof(CyFxGpifWavedataPosition_usb2)/sizeof(uint8_t)),
    CyFxGpifWavedata_usb2,
    CyFxGpifWavedataPosition_usb2,
    (uint16_t)(sizeof(CyFxGpifTransition_usb2)/sizeof(uint16_t)),
    CyFxGpifTransition_usb2,
    (uint16_t)(sizeof(CyFxGpifRegValue_usb2)/sizeof(uint32_t)),
    CyFxGpifRegValue_usb2
};

#endif   /* _INCLUDED_CYFXGPIF2CONFIG_ */
