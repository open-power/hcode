/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_eq_7_unused.H $      */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2020                                                    */
/* [+] International Business Machines Corp.                              */
/*                                                                        */
/*                                                                        */
/* Licensed under the Apache License, Version 2.0 (the "License");        */
/* you may not use this file except in compliance with the License.       */
/* You may obtain a copy of the License at                                */
/*                                                                        */
/*     http://www.apache.org/licenses/LICENSE-2.0                         */
/*                                                                        */
/* Unless required by applicable law or agreed to in writing, software    */
/* distributed under the License is distributed on an "AS IS" BASIS,      */
/* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or        */
/* implied. See the License for the specific language governing           */
/* permissions and limitations under the License.                         */
/*                                                                        */
/* IBM_PROLOG_END_TAG                                                     */

#ifndef __PPE_HCODE__
    #include "proc_scomt.H"
#endif

#ifndef __p10_scom_eq_7_H_UNUSED__
#define __p10_scom_eq_7_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace eq
{
#endif


//>> [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]
static const uint64_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE = 0x20018323ull;
//<< [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]
// eq/reg00007.H

//>> [CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT]
static const uint64_t CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT = 0x20014318ull;

static const uint32_t CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL = 0;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL = 1;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL_LEN = 7;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL = 8;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL = 9;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL_LEN = 7;
//<< [CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT]
// eq/reg00007.H

//>> [CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE]
static const uint64_t CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE = 0x20014312ull;

static const uint32_t CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA = 0;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL = 1;
//<< [CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE]
// eq/reg00007.H

//>> [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE]
static const uint64_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE = 0x20014327ull;

static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE = 0;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE = 4;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE_LEN = 4;
//<< [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE]
// eq/reg00007.H

//>> [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC]
static const uint64_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC = 0x2001432eull;

static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT = 0;
//<< [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC]
// eq/reg00007.H

//>> [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS]
static const uint64_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS = 0x2001232dull;

static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT = 0;
//<< [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS]
// eq/reg00007.H

//>> [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE]
static const uint64_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE = 0x20012331ull;

static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE = 0;
static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE = 1;
//<< [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE]
// eq/reg00007.H

//>> [CLK_ADJ_03_DCADJ_WRAP_SET_DEC]
static const uint64_t CLK_ADJ_03_DCADJ_WRAP_SET_DEC = 0x20011310ull;

static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC_VALUE = 0;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC_VALUE_LEN = 8;
//<< [CLK_ADJ_03_DCADJ_WRAP_SET_DEC]
// eq/reg00007.H

//>> [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]
static const uint64_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE = 0x20011323ull;
//<< [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]
// eq/reg00007.H

//>> [EPS_FIR_LOCAL_WOF]
static const uint64_t EPS_FIR_LOCAL_WOF = 0x20040108ull;

static const uint32_t EPS_FIR_LOCAL_WOF_00 = 0;
static const uint32_t EPS_FIR_LOCAL_WOF_01 = 1;
static const uint32_t EPS_FIR_LOCAL_WOF_02 = 2;
static const uint32_t EPS_FIR_LOCAL_WOF_03 = 3;
static const uint32_t EPS_FIR_LOCAL_WOF_04 = 4;
static const uint32_t EPS_FIR_LOCAL_WOF_05 = 5;
static const uint32_t EPS_FIR_LOCAL_WOF_06 = 6;
static const uint32_t EPS_FIR_LOCAL_WOF_07 = 7;
static const uint32_t EPS_FIR_LOCAL_WOF_08 = 8;
static const uint32_t EPS_FIR_LOCAL_WOF_09 = 9;
static const uint32_t EPS_FIR_LOCAL_WOF_10 = 10;
static const uint32_t EPS_FIR_LOCAL_WOF_11 = 11;
static const uint32_t EPS_FIR_LOCAL_WOF_12 = 12;
static const uint32_t EPS_FIR_LOCAL_WOF_13 = 13;
static const uint32_t EPS_FIR_LOCAL_WOF_14 = 14;
static const uint32_t EPS_FIR_LOCAL_WOF_15 = 15;
static const uint32_t EPS_FIR_LOCAL_WOF_16 = 16;
static const uint32_t EPS_FIR_LOCAL_WOF_17 = 17;
static const uint32_t EPS_FIR_LOCAL_WOF_18 = 18;
static const uint32_t EPS_FIR_LOCAL_WOF_19 = 19;
static const uint32_t EPS_FIR_LOCAL_WOF_20 = 20;
static const uint32_t EPS_FIR_LOCAL_WOF_21 = 21;
static const uint32_t EPS_FIR_LOCAL_WOF_22 = 22;
static const uint32_t EPS_FIR_LOCAL_WOF_23 = 23;
static const uint32_t EPS_FIR_LOCAL_WOF_24 = 24;
static const uint32_t EPS_FIR_LOCAL_WOF_25 = 25;
static const uint32_t EPS_FIR_LOCAL_WOF_26 = 26;
static const uint32_t EPS_FIR_LOCAL_WOF_27 = 27;
static const uint32_t EPS_FIR_LOCAL_WOF_28 = 28;
static const uint32_t EPS_FIR_LOCAL_WOF_29 = 29;
static const uint32_t EPS_FIR_LOCAL_WOF_30 = 30;
static const uint32_t EPS_FIR_LOCAL_WOF_31 = 31;
static const uint32_t EPS_FIR_LOCAL_WOF_32 = 32;
static const uint32_t EPS_FIR_LOCAL_WOF_33 = 33;
static const uint32_t EPS_FIR_LOCAL_WOF_34 = 34;
static const uint32_t EPS_FIR_LOCAL_WOF_35 = 35;
static const uint32_t EPS_FIR_LOCAL_WOF_36 = 36;
static const uint32_t EPS_FIR_LOCAL_WOF_37 = 37;
static const uint32_t EPS_FIR_LOCAL_WOF_38 = 38;
static const uint32_t EPS_FIR_LOCAL_WOF_39 = 39;
static const uint32_t EPS_FIR_LOCAL_WOF_40 = 40;
static const uint32_t EPS_FIR_LOCAL_WOF_41 = 41;
static const uint32_t EPS_FIR_LOCAL_WOF_42 = 42;
static const uint32_t EPS_FIR_LOCAL_WOF_43 = 43;
static const uint32_t EPS_FIR_LOCAL_WOF_44 = 44;
static const uint32_t EPS_FIR_LOCAL_WOF_45 = 45;
static const uint32_t EPS_FIR_LOCAL_WOF_46 = 46;
static const uint32_t EPS_FIR_LOCAL_WOF_47 = 47;
static const uint32_t EPS_FIR_LOCAL_WOF_48 = 48;
static const uint32_t EPS_FIR_LOCAL_WOF_49 = 49;
static const uint32_t EPS_FIR_LOCAL_WOF_50 = 50;
static const uint32_t EPS_FIR_LOCAL_WOF_51 = 51;
static const uint32_t EPS_FIR_LOCAL_WOF_52 = 52;
static const uint32_t EPS_FIR_LOCAL_WOF_53 = 53;
static const uint32_t EPS_FIR_LOCAL_WOF_54 = 54;
static const uint32_t EPS_FIR_LOCAL_WOF_55 = 55;
static const uint32_t EPS_FIR_LOCAL_WOF_56 = 56;
static const uint32_t EPS_FIR_LOCAL_WOF_57 = 57;
static const uint32_t EPS_FIR_LOCAL_WOF_58 = 58;
static const uint32_t EPS_FIR_LOCAL_WOF_59 = 59;
static const uint32_t EPS_FIR_LOCAL_WOF_60 = 60;
static const uint32_t EPS_FIR_LOCAL_WOF_61 = 61;
static const uint32_t EPS_FIR_LOCAL_WOF_62 = 62;
static const uint32_t EPS_FIR_LOCAL_WOF_63 = 63;
//<< [EPS_FIR_LOCAL_WOF]
// eq/reg00007.H

//>> [EPS_THERM_WSUB2_SKITTER_DATA0]
static const uint64_t EPS_THERM_WSUB2_SKITTER_DATA0 = 0x20050039ull;
//<< [EPS_THERM_WSUB2_SKITTER_DATA0]
// eq/reg00007.H

//>> [EPS_THERM_WSUB2_SKITTER_MODE_REG]
static const uint64_t EPS_THERM_WSUB2_SKITTER_MODE_REG = 0x20050030ull;

static const uint32_t EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE = 0;
static const uint32_t EPS_THERM_WSUB2_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS = 1;
static const uint32_t EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL = 4;
static const uint32_t EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL_LEN = 2;
static const uint32_t EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL = 6;
static const uint32_t EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL_LEN = 2;
static const uint32_t EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS = 8;
static const uint32_t EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS_LEN = 2;
static const uint32_t EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER = 44;
static const uint32_t EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_DATA_V_LT = 45;
//<< [EPS_THERM_WSUB2_SKITTER_MODE_REG]
// eq/reg00007.H

//>> [EPS_THERM_WSUB_SKITTER_CLKSRC_REG]
static const uint64_t EPS_THERM_WSUB_SKITTER_CLKSRC_REG = 0x20050016ull;

static const uint32_t EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC = 0;
static const uint32_t EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC_LEN = 3;
static const uint32_t EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT = 36;
static const uint32_t EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT_LEN = 2;
//<< [EPS_THERM_WSUB_SKITTER_CLKSRC_REG]
// eq/reg00007.H

//>> [HANG_PULSE_6_REG]
static const uint64_t HANG_PULSE_6_REG = 0x200f0026ull;

static const uint32_t HANG_PULSE_6_REG_HANG_PULSE_REG_6 = 0;
static const uint32_t HANG_PULSE_6_REG_HANG_PULSE_REG_6_LEN = 6;
static const uint32_t HANG_PULSE_6_REG_SUPPRESS_HANG_6 = 6;
//<< [HANG_PULSE_6_REG]
// eq/reg00007.H

//>> [HOSTATTN_INTERRUPT_REG]
static const uint64_t HOSTATTN_INTERRUPT_REG = 0x200f002bull;

static const uint32_t HOSTATTN_INTERRUPT_REG_TYPE4 = 0;
//<< [HOSTATTN_INTERRUPT_REG]
// eq/reg00007.H

//>> [L3TRA0_TR1_CONFIG_3]
static const uint64_t L3TRA0_TR1_CONFIG_3 = 0x20018226ull;

static const uint32_t L3TRA0_TR1_CONFIG_3_C = 0;
static const uint32_t L3TRA0_TR1_CONFIG_3_C_LEN = 24;
static const uint32_t L3TRA0_TR1_CONFIG_3_D = 24;
static const uint32_t L3TRA0_TR1_CONFIG_3_D_LEN = 24;
//<< [L3TRA0_TR1_CONFIG_3]
// eq/reg00007.H

//>> [L3TRA0_TR1_TRACE_LO_DATA_REG]
static const uint64_t L3TRA0_TR1_TRACE_LO_DATA_REG = 0x20018221ull;

static const uint32_t L3TRA0_TR1_TRACE_LO_DATA_REG_LO_DATA = 0;
static const uint32_t L3TRA0_TR1_TRACE_LO_DATA_REG_LO_DATA_LEN = 32;
static const uint32_t L3TRA0_TR1_TRACE_LO_DATA_REG_ADDRESS = 32;
static const uint32_t L3TRA0_TR1_TRACE_LO_DATA_REG_ADDRESS_LEN = 10;
static const uint32_t L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK = 42;
static const uint32_t L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_LEN = 9;
static const uint32_t L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID = 51;
static const uint32_t L3TRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN = 52;
static const uint32_t L3TRA0_TR1_TRACE_LO_DATA_REG_RUNNING = 53;
static const uint32_t L3TRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS = 54;
static const uint32_t L3TRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN = 10;
//<< [L3TRA0_TR1_TRACE_LO_DATA_REG]
// eq/reg00007.H

//>> [L3TRA1_TR0_CONFIG_5]
static const uint64_t L3TRA1_TR0_CONFIG_5 = 0x20018248ull;

static const uint32_t L3TRA1_TR0_CONFIG_5_C = 0;
static const uint32_t L3TRA1_TR0_CONFIG_5_C_LEN = 24;
static const uint32_t L3TRA1_TR0_CONFIG_5_D = 24;
static const uint32_t L3TRA1_TR0_CONFIG_5_D_LEN = 24;
//<< [L3TRA1_TR0_CONFIG_5]
// eq/reg00007.H

//>> [L3TRA2_TR0_CONFIG_2]
static const uint64_t L3TRA2_TR0_CONFIG_2 = 0x20018285ull;

static const uint32_t L3TRA2_TR0_CONFIG_2_A = 0;
static const uint32_t L3TRA2_TR0_CONFIG_2_A_LEN = 24;
static const uint32_t L3TRA2_TR0_CONFIG_2_B = 24;
static const uint32_t L3TRA2_TR0_CONFIG_2_B_LEN = 24;
//<< [L3TRA2_TR0_CONFIG_2]
// eq/reg00007.H

//>> [L3TRA3_TR0_TRACE_HI_DATA_REG]
static const uint64_t L3TRA3_TR0_TRACE_HI_DATA_REG = 0x200182c0ull;

static const uint32_t L3TRA3_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA = 0;
static const uint32_t L3TRA3_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN = 64;
//<< [L3TRA3_TR0_TRACE_HI_DATA_REG]
// eq/reg00007.H

//>> [L3TRA3_TR1_CONFIG_4]
static const uint64_t L3TRA3_TR1_CONFIG_4 = 0x200182e7ull;

static const uint32_t L3TRA3_TR1_CONFIG_4_A = 0;
static const uint32_t L3TRA3_TR1_CONFIG_4_A_LEN = 24;
static const uint32_t L3TRA3_TR1_CONFIG_4_B = 24;
static const uint32_t L3TRA3_TR1_CONFIG_4_B_LEN = 24;
//<< [L3TRA3_TR1_CONFIG_4]
// eq/reg00007.H

//>> [QMETRA0_TR0_CONFIG_3]
static const uint64_t QMETRA0_TR0_CONFIG_3 = 0x20018406ull;

static const uint32_t QMETRA0_TR0_CONFIG_3_C = 0;
static const uint32_t QMETRA0_TR0_CONFIG_3_C_LEN = 24;
static const uint32_t QMETRA0_TR0_CONFIG_3_D = 24;
static const uint32_t QMETRA0_TR0_CONFIG_3_D_LEN = 24;
//<< [QMETRA0_TR0_CONFIG_3]
// eq/reg00007.H

//>> [RECOV_UNMASKED]
static const uint64_t RECOV_UNMASKED = 0x20040011ull;

static const uint32_t RECOV_UNMASKED_IN = 1;
static const uint32_t RECOV_UNMASKED_IN_LEN = 53;
//<< [RECOV_UNMASKED]
// eq/reg00007.H

//>> [SCAN_UPDATEDR]
static const uint64_t SCAN_UPDATEDR = 0x2003a000ull;

static const uint32_t SCAN_UPDATEDR_SCAN_UPDATEDR_REG = 0;
static const uint32_t SCAN_UPDATEDR_SCAN_UPDATEDR_REG_LEN = 32;
//<< [SCAN_UPDATEDR]
// eq/reg00007.H

//>> [SPATTN_UNMASKED]
static const uint64_t SPATTN_UNMASKED = 0x20040012ull;

static const uint32_t SPATTN_UNMASKED_IN = 1;
static const uint32_t SPATTN_UNMASKED_IN_LEN = 35;
//<< [SPATTN_UNMASKED]
// eq/reg00007.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "eq/reg00007_unused.H"
#endif
#endif
