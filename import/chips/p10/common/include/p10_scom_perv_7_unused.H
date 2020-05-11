/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_perv_7_unused.H $    */
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

#ifndef __p10_scom_perv_7_H_UNUSED__
#define __p10_scom_perv_7_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace perv
{
#endif


//>> [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]
static const uint64_t CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE = 0x00018323ull;
//<< [CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]
// perv/reg00014.H

//>> [CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT]
static const uint64_t CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT = 0x00014318ull;

static const uint32_t CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL = 0;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL = 1;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL_LEN = 7;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL = 8;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL = 9;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL_LEN = 7;
//<< [CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT]
// perv/reg00014.H

//>> [CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE]
static const uint64_t CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE = 0x00014312ull;

static const uint32_t CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA = 0;
static const uint32_t CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL = 1;
//<< [CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE]
// perv/reg00014.H

//>> [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE]
static const uint64_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE = 0x00014327ull;

static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE = 0;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE = 4;
static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE_LEN = 4;
//<< [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE]
// perv/reg00014.H

//>> [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC]
static const uint64_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC = 0x0001432eull;

static const uint32_t CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT = 0;
//<< [CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC]
// perv/reg00014.H

//>> [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS]
static const uint64_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS = 0x0001232dull;

static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT = 0;
//<< [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS]
// perv/reg00014.H

//>> [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE]
static const uint64_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE = 0x00012331ull;

static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE = 0;
static const uint32_t CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE = 1;
//<< [CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE]
// perv/reg00014.H

//>> [CLK_ADJ_03_DCADJ_WRAP_SET_DEC]
static const uint64_t CLK_ADJ_03_DCADJ_WRAP_SET_DEC = 0x00011310ull;

static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC_VALUE = 0;
static const uint32_t CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC_VALUE_LEN = 8;
//<< [CLK_ADJ_03_DCADJ_WRAP_SET_DEC]
// perv/reg00014.H

//>> [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]
static const uint64_t CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE = 0x00011323ull;
//<< [CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]
// perv/reg00014.H

//>> [EPS_FIR_LOCAL_WOF]
static const uint64_t EPS_FIR_LOCAL_WOF = 0x00040108ull;

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
// perv/reg00014.H

//>> [FSXCOMP_FSXLOG_I2CDEVICEID_REGISTER]
static const uint64_t FSXCOMP_FSXLOG_I2CDEVICEID_REGISTER = 0x00050190ull;

static const uint32_t FSXCOMP_FSXLOG_I2CDEVICEID_REGISTER_I2C_DEVICEID_REGISTER = 0;
static const uint32_t FSXCOMP_FSXLOG_I2CDEVICEID_REGISTER_I2C_DEVICEID_REGISTER_LEN = 32;
//<< [FSXCOMP_FSXLOG_I2CDEVICEID_REGISTER]
// perv/reg00014.H

//>> [QMETRA0_TR0_CONFIG_3]
static const uint64_t QMETRA0_TR0_CONFIG_3 = 0x00018406ull;

static const uint32_t QMETRA0_TR0_CONFIG_3_C = 0;
static const uint32_t QMETRA0_TR0_CONFIG_3_C_LEN = 24;
static const uint32_t QMETRA0_TR0_CONFIG_3_D = 24;
static const uint32_t QMETRA0_TR0_CONFIG_3_D_LEN = 24;
//<< [QMETRA0_TR0_CONFIG_3]
// perv/reg00014.H

//>> [EPS_THERM_WSUB_SKITTER_CLKSRC_REG]
static const uint64_t EPS_THERM_WSUB_SKITTER_CLKSRC_REG = 0x00050016ull;

static const uint32_t EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC = 0;
static const uint32_t EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC_LEN = 3;
static const uint32_t EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT = 36;
static const uint32_t EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT_LEN = 2;
//<< [EPS_THERM_WSUB_SKITTER_CLKSRC_REG]
// perv/reg00014.H

//>> [EPS_THERM_WSUB2_SKITTER_DATA0]
static const uint64_t EPS_THERM_WSUB2_SKITTER_DATA0 = 0x00050039ull;
//<< [EPS_THERM_WSUB2_SKITTER_DATA0]
// perv/reg00014.H

//>> [EPS_THERM_WSUB2_SKITTER_MODE_REG]
static const uint64_t EPS_THERM_WSUB2_SKITTER_MODE_REG = 0x00050030ull;

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
// perv/reg00014.H

//>> [FSXCOMP_FSXLOG_M1A_DATA_AREA_14]
//ERRCODE: // The addresses of this register do not all translate to the same targets.

static const uint32_t FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI = 0x0000284eull;
static const uint32_t FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI_BYTE = 0x00002938ull;
static const uint32_t FSXCOMP_FSXLOG_M1A_DATA_AREA_14_RW = 0x0005004eull;

static const uint32_t FSXCOMP_FSXLOG_M1A_DATA_AREA_14_MDA_M1A_DATA_AREA_14 = 0;
static const uint32_t FSXCOMP_FSXLOG_M1A_DATA_AREA_14_MDA_M1A_DATA_AREA_14_LEN = 32;
//<< [FSXCOMP_FSXLOG_M1A_DATA_AREA_14]
// perv/reg00014.H

//>> [FSXCOMP_FSXLOG_M1A_DATA_AREA_3]
//ERRCODE: // The addresses of this register do not all translate to the same targets.

static const uint32_t FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI = 0x00002843ull;
static const uint32_t FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI_BYTE = 0x0000290cull;
static const uint32_t FSXCOMP_FSXLOG_M1A_DATA_AREA_3_RW = 0x00050043ull;

static const uint32_t FSXCOMP_FSXLOG_M1A_DATA_AREA_3_MDA_M1A_DATA_AREA_3 = 0;
static const uint32_t FSXCOMP_FSXLOG_M1A_DATA_AREA_3_MDA_M1A_DATA_AREA_3_LEN = 32;
//<< [FSXCOMP_FSXLOG_M1A_DATA_AREA_3]
// perv/reg00014.H

//>> [FSXCOMP_FSXLOG_M1B_DATA_AREA_9]
//ERRCODE: // The addresses of this register do not all translate to the same targets.

static const uint32_t FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI = 0x00002889ull;
static const uint32_t FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI_BYTE = 0x00002a24ull;
static const uint32_t FSXCOMP_FSXLOG_M1B_DATA_AREA_9_RO = 0x00050089ull;

static const uint32_t FSXCOMP_FSXLOG_M1B_DATA_AREA_9_MDA_M1B_DATA_AREA_9 = 0;
static const uint32_t FSXCOMP_FSXLOG_M1B_DATA_AREA_9_MDA_M1B_DATA_AREA_9_LEN = 32;
//<< [FSXCOMP_FSXLOG_M1B_DATA_AREA_9]
// perv/reg00014.H

//>> [FSXCOMP_FSXLOG_M2A_DATA_AREA_10]
//ERRCODE: // The addresses of this register do not all translate to the same targets.

static const uint32_t FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI = 0x000028caull;
static const uint32_t FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI_BYTE = 0x00002b28ull;
static const uint32_t FSXCOMP_FSXLOG_M2A_DATA_AREA_10_RW = 0x000500caull;

static const uint32_t FSXCOMP_FSXLOG_M2A_DATA_AREA_10_MDA_M2A_DATA_AREA_10 = 0;
static const uint32_t FSXCOMP_FSXLOG_M2A_DATA_AREA_10_MDA_M2A_DATA_AREA_10_LEN = 32;
//<< [FSXCOMP_FSXLOG_M2A_DATA_AREA_10]
// perv/reg00014.H

//>> [FSXCOMP_FSXLOG_M2B_DATA_AREA_5]
//ERRCODE: // The addresses of this register do not all translate to the same targets.

static const uint32_t FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI = 0x00002905ull;
static const uint32_t FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI_BYTE = 0x00002c14ull;
static const uint32_t FSXCOMP_FSXLOG_M2B_DATA_AREA_5_RO = 0x00050105ull;

static const uint32_t FSXCOMP_FSXLOG_M2B_DATA_AREA_5_MDA_M2B_DATA_AREA_5 = 0;
static const uint32_t FSXCOMP_FSXLOG_M2B_DATA_AREA_5_MDA_M2B_DATA_AREA_5_LEN = 32;
//<< [FSXCOMP_FSXLOG_M2B_DATA_AREA_5]
// perv/reg00014.H

//>> [FSXCOMP_FSXLOG_PERV_CTRL1_SET]
//ERRCODE: // The addresses of this register do not all translate to the same targets.

static const uint32_t FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI = 0x0000292bull;
static const uint32_t FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE = 0x00002cacull;
static const uint32_t FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR = 0x0005012bull;

static const uint32_t FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_0_RESERVED = 0;
static const uint32_t FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_DCC_BYPASS_EN_DC = 1;
static const uint32_t FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_PDLY_BYPASS_EN_DC = 2;
static const uint32_t FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_3_15_RESERVED = 3;
static const uint32_t FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_3_15_RESERVED_LEN = 13;
static const uint32_t FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_SEC_BUF_DRV_STRENGTH_DC = 16;
static const uint32_t FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_SEC_BUF_DRV_STRENGTH_DC_LEN = 4;
static const uint32_t FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_20_31_RESERVED = 20;
static const uint32_t FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_20_31_RESERVED_LEN = 12;
//<< [FSXCOMP_FSXLOG_PERV_CTRL1_SET]
// perv/reg00014.H

//>> [HANG_PULSE_6_REG]
static const uint64_t HANG_PULSE_6_REG = 0x000f0026ull;

static const uint32_t HANG_PULSE_6_REG_HANG_PULSE_REG_6 = 0;
static const uint32_t HANG_PULSE_6_REG_HANG_PULSE_REG_6_LEN = 6;
static const uint32_t HANG_PULSE_6_REG_SUPPRESS_HANG_6 = 6;
//<< [HANG_PULSE_6_REG]
// perv/reg00014.H

//>> [HOSTATTN_INTERRUPT_REG]
static const uint64_t HOSTATTN_INTERRUPT_REG = 0x000f002bull;

static const uint32_t HOSTATTN_INTERRUPT_REG_TYPE4 = 0;
//<< [HOSTATTN_INTERRUPT_REG]
// perv/reg00014.H

//>> [L3TRA0_TR1_TRACE_LO_DATA_REG]
static const uint64_t L3TRA0_TR1_TRACE_LO_DATA_REG = 0x00018221ull;

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
// perv/reg00014.H

//>> [L3TRA0_TR1_CONFIG_3]
static const uint64_t L3TRA0_TR1_CONFIG_3 = 0x00018226ull;

static const uint32_t L3TRA0_TR1_CONFIG_3_C = 0;
static const uint32_t L3TRA0_TR1_CONFIG_3_C_LEN = 24;
static const uint32_t L3TRA0_TR1_CONFIG_3_D = 24;
static const uint32_t L3TRA0_TR1_CONFIG_3_D_LEN = 24;
//<< [L3TRA0_TR1_CONFIG_3]
// perv/reg00014.H

//>> [L3TRA1_TR0_CONFIG_5]
static const uint64_t L3TRA1_TR0_CONFIG_5 = 0x00018248ull;

static const uint32_t L3TRA1_TR0_CONFIG_5_C = 0;
static const uint32_t L3TRA1_TR0_CONFIG_5_C_LEN = 24;
static const uint32_t L3TRA1_TR0_CONFIG_5_D = 24;
static const uint32_t L3TRA1_TR0_CONFIG_5_D_LEN = 24;
//<< [L3TRA1_TR0_CONFIG_5]
// perv/reg00014.H

//>> [L3TRA2_TR0_CONFIG_2]
static const uint64_t L3TRA2_TR0_CONFIG_2 = 0x00018285ull;

static const uint32_t L3TRA2_TR0_CONFIG_2_A = 0;
static const uint32_t L3TRA2_TR0_CONFIG_2_A_LEN = 24;
static const uint32_t L3TRA2_TR0_CONFIG_2_B = 24;
static const uint32_t L3TRA2_TR0_CONFIG_2_B_LEN = 24;
//<< [L3TRA2_TR0_CONFIG_2]
// perv/reg00014.H

//>> [L3TRA3_TR0_TRACE_HI_DATA_REG]
static const uint64_t L3TRA3_TR0_TRACE_HI_DATA_REG = 0x000182c0ull;

static const uint32_t L3TRA3_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA = 0;
static const uint32_t L3TRA3_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN = 64;
//<< [L3TRA3_TR0_TRACE_HI_DATA_REG]
// perv/reg00014.H

//>> [L3TRA3_TR1_CONFIG_4]
static const uint64_t L3TRA3_TR1_CONFIG_4 = 0x000182e7ull;

static const uint32_t L3TRA3_TR1_CONFIG_4_A = 0;
static const uint32_t L3TRA3_TR1_CONFIG_4_A_LEN = 24;
static const uint32_t L3TRA3_TR1_CONFIG_4_B = 24;
static const uint32_t L3TRA3_TR1_CONFIG_4_B_LEN = 24;
//<< [L3TRA3_TR1_CONFIG_4]
// perv/reg00014.H

//>> [OTPC_M_MEASURE_REG3]
static const uint64_t OTPC_M_MEASURE_REG3 = 0x00010013ull;

static const uint32_t OTPC_M_MEASURE_REG3_SEEPROM_MEASUREMENT3_DATA = 0;
static const uint32_t OTPC_M_MEASURE_REG3_SEEPROM_MEASUREMENT3_DATA_LEN = 64;
//<< [OTPC_M_MEASURE_REG3]
// perv/reg00014.H

//>> [OTPC_M_RESET_REGISTER]
static const uint64_t OTPC_M_RESET_REGISTER = 0x00010001ull;

static const uint32_t OTPC_M_RESET_REGISTER_CHICKEN_SWITCH = 0;
//<< [OTPC_M_RESET_REGISTER]
// perv/reg00014.H

//>> [RECOV_UNMASKED]
static const uint64_t RECOV_UNMASKED = 0x00040011ull;

static const uint32_t RECOV_UNMASKED_IN = 1;
static const uint32_t RECOV_UNMASKED_IN_LEN = 53;
//<< [RECOV_UNMASKED]
// perv/reg00014.H

//>> [REC_ERR_MST4_REG0]
static const uint64_t REC_ERR_MST4_REG0 = 0x000f0050ull;

static const uint32_t REC_ERR_MST4_REG0_MASTER_MST4_RESPONSE_BIT = 0;
static const uint32_t REC_ERR_MST4_REG0_MASTER_MST4_ERROR_CODE = 1;
static const uint32_t REC_ERR_MST4_REG0_MASTER_MST4_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST4_REG0_SLAVE1_MST4_RESPONSE_BIT = 4;
static const uint32_t REC_ERR_MST4_REG0_SLAVE1_MST4_ERROR_CODE = 5;
static const uint32_t REC_ERR_MST4_REG0_SLAVE1_MST4_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST4_REG0_SLAVE2_MST4_RESPONSE_BIT = 8;
static const uint32_t REC_ERR_MST4_REG0_SLAVE2_MST4_ERROR_CODE = 9;
static const uint32_t REC_ERR_MST4_REG0_SLAVE2_MST4_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST4_REG0_SLAVE3_MST4_RESPONSE_BIT = 12;
static const uint32_t REC_ERR_MST4_REG0_SLAVE3_MST4_ERROR_CODE = 13;
static const uint32_t REC_ERR_MST4_REG0_SLAVE3_MST4_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST4_REG0_SLAVE4_MST4_RESPONSE_BIT = 16;
static const uint32_t REC_ERR_MST4_REG0_SLAVE4_MST4_ERROR_CODE = 17;
static const uint32_t REC_ERR_MST4_REG0_SLAVE4_MST4_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST4_REG0_SLAVE5_MST4_RESPONSE_BIT = 20;
static const uint32_t REC_ERR_MST4_REG0_SLAVE5_MST4_ERROR_CODE = 21;
static const uint32_t REC_ERR_MST4_REG0_SLAVE5_MST4_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST4_REG0_SLAVE6_MST4_RESPONSE_BIT = 24;
static const uint32_t REC_ERR_MST4_REG0_SLAVE6_MST4_ERROR_CODE = 25;
static const uint32_t REC_ERR_MST4_REG0_SLAVE6_MST4_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST4_REG0_SLAVE7_MST4_RESPONSE_BIT = 28;
static const uint32_t REC_ERR_MST4_REG0_SLAVE7_MST4_ERROR_CODE = 29;
static const uint32_t REC_ERR_MST4_REG0_SLAVE7_MST4_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST4_REG0_SLAVE8_MST4_RESPONSE_BIT = 32;
static const uint32_t REC_ERR_MST4_REG0_SLAVE8_MST4_ERROR_CODE = 33;
static const uint32_t REC_ERR_MST4_REG0_SLAVE8_MST4_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST4_REG0_SLAVE9_MST4_RESPONSE_BIT = 36;
static const uint32_t REC_ERR_MST4_REG0_SLAVE9_MST4_ERROR_CODE = 37;
static const uint32_t REC_ERR_MST4_REG0_SLAVE9_MST4_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST4_REG0_SLAVE10_MST4_RESPONSE_BIT = 40;
static const uint32_t REC_ERR_MST4_REG0_SLAVE10_MST4_ERROR_CODE = 41;
static const uint32_t REC_ERR_MST4_REG0_SLAVE10_MST4_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST4_REG0_SLAVE11_MST4_RESPONSE_BIT = 44;
static const uint32_t REC_ERR_MST4_REG0_SLAVE11_MST4_ERROR_CODE = 45;
static const uint32_t REC_ERR_MST4_REG0_SLAVE11_MST4_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST4_REG0_SLAVE12_MST4_RESPONSE_BIT = 48;
static const uint32_t REC_ERR_MST4_REG0_SLAVE12_MST4_ERROR_CODE = 49;
static const uint32_t REC_ERR_MST4_REG0_SLAVE12_MST4_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST4_REG0_SLAVE13_MST4_RESPONSE_BIT = 52;
static const uint32_t REC_ERR_MST4_REG0_SLAVE13_MST4_ERROR_CODE = 53;
static const uint32_t REC_ERR_MST4_REG0_SLAVE13_MST4_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST4_REG0_SLAVE14_MST4_RESPONSE_BIT = 56;
static const uint32_t REC_ERR_MST4_REG0_SLAVE14_MST4_ERROR_CODE = 57;
static const uint32_t REC_ERR_MST4_REG0_SLAVE14_MST4_ERROR_CODE_LEN = 3;
static const uint32_t REC_ERR_MST4_REG0_SLAVE15_MST4_RESPONSE_BIT = 60;
static const uint32_t REC_ERR_MST4_REG0_SLAVE15_MST4_ERROR_CODE = 61;
static const uint32_t REC_ERR_MST4_REG0_SLAVE15_MST4_ERROR_CODE_LEN = 3;
//<< [REC_ERR_MST4_REG0]
// perv/reg00014.H

//>> [SCAN_UPDATEDR]
static const uint64_t SCAN_UPDATEDR = 0x0003a000ull;

static const uint32_t SCAN_UPDATEDR_SCAN_UPDATEDR_REG = 0;
static const uint32_t SCAN_UPDATEDR_SCAN_UPDATEDR_REG_LEN = 32;
//<< [SCAN_UPDATEDR]
// perv/reg00014.H

//>> [SINGLE_OTP_ROM_OTPROM_REG10]
static const uint64_t SINGLE_OTP_ROM_OTPROM_REG10 = 0x0001800aull;

static const uint32_t SINGLE_OTP_ROM_OTPROM_REG10_REGISTER10 = 0;
static const uint32_t SINGLE_OTP_ROM_OTPROM_REG10_REGISTER10_LEN = 64;
//<< [SINGLE_OTP_ROM_OTPROM_REG10]
// perv/reg00014.H

//>> [SINGLE_OTP_ROM_OTPROM_REG101]
static const uint64_t SINGLE_OTP_ROM_OTPROM_REG101 = 0x00018065ull;

static const uint32_t SINGLE_OTP_ROM_OTPROM_REG101_REGISTER101 = 0;
static const uint32_t SINGLE_OTP_ROM_OTPROM_REG101_REGISTER101_LEN = 64;
//<< [SINGLE_OTP_ROM_OTPROM_REG101]
// perv/reg00014.H

//>> [SINGLE_OTP_ROM_OTPROM_REG27]
static const uint64_t SINGLE_OTP_ROM_OTPROM_REG27 = 0x0001801bull;

static const uint32_t SINGLE_OTP_ROM_OTPROM_REG27_REGISTER27 = 0;
static const uint32_t SINGLE_OTP_ROM_OTPROM_REG27_REGISTER27_LEN = 64;
//<< [SINGLE_OTP_ROM_OTPROM_REG27]
// perv/reg00014.H

//>> [SINGLE_OTP_ROM_OTPROM_REG38]
static const uint64_t SINGLE_OTP_ROM_OTPROM_REG38 = 0x00018026ull;

static const uint32_t SINGLE_OTP_ROM_OTPROM_REG38_REGISTER38 = 0;
static const uint32_t SINGLE_OTP_ROM_OTPROM_REG38_REGISTER38_LEN = 64;
//<< [SINGLE_OTP_ROM_OTPROM_REG38]
// perv/reg00015.H

//>> [SINGLE_OTP_ROM_OTPROM_REG46]
static const uint64_t SINGLE_OTP_ROM_OTPROM_REG46 = 0x0001802eull;

static const uint32_t SINGLE_OTP_ROM_OTPROM_REG46_REGISTER46 = 0;
static const uint32_t SINGLE_OTP_ROM_OTPROM_REG46_REGISTER46_LEN = 64;
//<< [SINGLE_OTP_ROM_OTPROM_REG46]
// perv/reg00015.H

//>> [SINGLE_OTP_ROM_OTPROM_REG59]
static const uint64_t SINGLE_OTP_ROM_OTPROM_REG59 = 0x0001803bull;

static const uint32_t SINGLE_OTP_ROM_OTPROM_REG59_REGISTER59 = 0;
static const uint32_t SINGLE_OTP_ROM_OTPROM_REG59_REGISTER59_LEN = 64;
//<< [SINGLE_OTP_ROM_OTPROM_REG59]
// perv/reg00015.H

//>> [SINGLE_OTP_ROM_OTPROM_REG71]
static const uint64_t SINGLE_OTP_ROM_OTPROM_REG71 = 0x00018047ull;

static const uint32_t SINGLE_OTP_ROM_OTPROM_REG71_REGISTER71 = 0;
static const uint32_t SINGLE_OTP_ROM_OTPROM_REG71_REGISTER71_LEN = 64;
//<< [SINGLE_OTP_ROM_OTPROM_REG71]
// perv/reg00015.H

//>> [SINGLE_OTP_ROM_OTPROM_REG84]
static const uint64_t SINGLE_OTP_ROM_OTPROM_REG84 = 0x00018054ull;

static const uint32_t SINGLE_OTP_ROM_OTPROM_REG84_REGISTER84 = 0;
static const uint32_t SINGLE_OTP_ROM_OTPROM_REG84_REGISTER84_LEN = 64;
//<< [SINGLE_OTP_ROM_OTPROM_REG84]
// perv/reg00015.H

//>> [SPATTN_UNMASKED]
static const uint64_t SPATTN_UNMASKED = 0x00040012ull;

static const uint32_t SPATTN_UNMASKED_IN = 1;
static const uint32_t SPATTN_UNMASKED_IN_LEN = 35;
//<< [SPATTN_UNMASKED]
// perv/reg00015.H

//>> [TRA0_TR1_CONFIG_3]
static const uint64_t TRA0_TR1_CONFIG_3 = 0x00010446ull;

static const uint32_t TRA0_TR1_CONFIG_3_C = 0;
static const uint32_t TRA0_TR1_CONFIG_3_C_LEN = 24;
static const uint32_t TRA0_TR1_CONFIG_3_D = 24;
static const uint32_t TRA0_TR1_CONFIG_3_D_LEN = 24;
//<< [TRA0_TR1_CONFIG_3]
// perv/reg00015.H

//>> [TRA1_TR0_CONFIG_5]
static const uint64_t TRA1_TR0_CONFIG_5 = 0x00010488ull;

static const uint32_t TRA1_TR0_CONFIG_5_C = 0;
static const uint32_t TRA1_TR0_CONFIG_5_C_LEN = 24;
static const uint32_t TRA1_TR0_CONFIG_5_D = 24;
static const uint32_t TRA1_TR0_CONFIG_5_D_LEN = 24;
//<< [TRA1_TR0_CONFIG_5]
// perv/reg00015.H

//>> [TRA2_TR0_CONFIG_2]
static const uint64_t TRA2_TR0_CONFIG_2 = 0x00010505ull;

static const uint32_t TRA2_TR0_CONFIG_2_A = 0;
static const uint32_t TRA2_TR0_CONFIG_2_A_LEN = 24;
static const uint32_t TRA2_TR0_CONFIG_2_B = 24;
static const uint32_t TRA2_TR0_CONFIG_2_B_LEN = 24;
//<< [TRA2_TR0_CONFIG_2]
// perv/reg00015.H

//>> [TRA3_TR1_CONFIG_4]
static const uint64_t TRA3_TR1_CONFIG_4 = 0x000105c7ull;

static const uint32_t TRA3_TR1_CONFIG_4_A = 0;
static const uint32_t TRA3_TR1_CONFIG_4_A_LEN = 24;
static const uint32_t TRA3_TR1_CONFIG_4_B = 24;
static const uint32_t TRA3_TR1_CONFIG_4_B_LEN = 24;
//<< [TRA3_TR1_CONFIG_4]
// perv/reg00015.H

//>> [TRA4_TR0_TRACE_LO_DATA_REG]
static const uint64_t TRA4_TR0_TRACE_LO_DATA_REG = 0x00010601ull;

static const uint32_t TRA4_TR0_TRACE_LO_DATA_REG_LO_DATA = 0;
static const uint32_t TRA4_TR0_TRACE_LO_DATA_REG_LO_DATA_LEN = 32;
static const uint32_t TRA4_TR0_TRACE_LO_DATA_REG_ADDRESS = 32;
static const uint32_t TRA4_TR0_TRACE_LO_DATA_REG_ADDRESS_LEN = 10;
static const uint32_t TRA4_TR0_TRACE_LO_DATA_REG_LAST_BANK = 42;
static const uint32_t TRA4_TR0_TRACE_LO_DATA_REG_LAST_BANK_LEN = 9;
static const uint32_t TRA4_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID = 51;
static const uint32_t TRA4_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN = 52;
static const uint32_t TRA4_TR0_TRACE_LO_DATA_REG_RUNNING = 53;
static const uint32_t TRA4_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS = 54;
static const uint32_t TRA4_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN = 10;
//<< [TRA4_TR0_TRACE_LO_DATA_REG]
// perv/reg00015.H

//>> [TRA4_TR1_CONFIG_5]
static const uint64_t TRA4_TR1_CONFIG_5 = 0x00010648ull;

static const uint32_t TRA4_TR1_CONFIG_5_C = 0;
static const uint32_t TRA4_TR1_CONFIG_5_C_LEN = 24;
static const uint32_t TRA4_TR1_CONFIG_5_D = 24;
static const uint32_t TRA4_TR1_CONFIG_5_D_LEN = 24;
//<< [TRA4_TR1_CONFIG_5]
// perv/reg00015.H

//>> [TRA5_TR0_CONFIG_3]
static const uint64_t TRA5_TR0_CONFIG_3 = 0x00010686ull;

static const uint32_t TRA5_TR0_CONFIG_3_C = 0;
static const uint32_t TRA5_TR0_CONFIG_3_C_LEN = 24;
static const uint32_t TRA5_TR0_CONFIG_3_D = 24;
static const uint32_t TRA5_TR0_CONFIG_3_D_LEN = 24;
//<< [TRA5_TR0_CONFIG_3]
// perv/reg00015.H

//>> [TRA6_TR0_CONFIG_4]
static const uint64_t TRA6_TR0_CONFIG_4 = 0x00010707ull;

static const uint32_t TRA6_TR0_CONFIG_4_A = 0;
static const uint32_t TRA6_TR0_CONFIG_4_A_LEN = 24;
static const uint32_t TRA6_TR0_CONFIG_4_B = 24;
static const uint32_t TRA6_TR0_CONFIG_4_B_LEN = 24;
//<< [TRA6_TR0_CONFIG_4]
// perv/reg00015.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "perv/reg00014_unused.H"
#include "perv/reg00015_unused.H"
#endif
#endif
