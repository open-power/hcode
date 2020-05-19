/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_c_6_unused.H $       */
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

#ifndef __p10_scom_c_6_H_UNUSED__
#define __p10_scom_c_6_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace c
{
#endif


//>> [EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3]
static const uint64_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3 = 0x20020603ull;

static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_48 = 0;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_49 = 1;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_50 = 2;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_51 = 3;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_52 = 4;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_53 = 5;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_54 = 6;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_55 = 7;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_56 = 8;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_57 = 9;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_58 = 10;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_59 = 11;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_60 = 12;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_61 = 13;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_62 = 14;
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_63 = 15;
//<< [EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3]
// c/reg00006.H

//>> [EC_PC_COMMON_SPR_V0_HMER]
static const uint64_t EC_PC_COMMON_SPR_V0_HMER_RW_WAND = 0x20020492ull;
static const uint64_t EC_PC_COMMON_SPR_V0_HMER_WO_OR = 0x2002048eull;

static const uint32_t EC_PC_COMMON_SPR_V0_HMER_V0_HMER_MALFUNCTION_ALERT = 0;
static const uint32_t EC_PC_COMMON_SPR_V0_HMER_SPARE_1 = 1;
static const uint32_t EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_DONE = 2;
static const uint32_t EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SUSPEND_MODE = 3;
static const uint32_t EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFAC_ERR = 4;
static const uint32_t EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFX_ERR = 5;
static const uint32_t EC_PC_COMMON_SPR_V0_HMER_SPARE_6 = 6;
static const uint32_t EC_PC_COMMON_SPR_V0_HMER_SPARE_7 = 7;
static const uint32_t EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_FAIL = 8;
static const uint32_t EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_DONE = 9;
static const uint32_t EC_PC_COMMON_SPR_V0_HMER_SPARE_10 = 10;
static const uint32_t EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_AGAIN = 11;
static const uint32_t EC_PC_COMMON_SPR_V0_HMER_SPARE_12 = 12;
static const uint32_t EC_PC_COMMON_SPR_V0_HMER_SPARE_13 = 13;
static const uint32_t EC_PC_COMMON_SPR_V0_HMER_SPARE_14 = 14;
static const uint32_t EC_PC_COMMON_SPR_V0_HMER_SPARE_15 = 15;
static const uint32_t EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SCOM_FIR_HMI = 16;
static const uint32_t EC_PC_COMMON_SPR_V0_HMER_V0_HMER_THD_WAKE_BLOCKED_TM_SUSPEND = 17;
static const uint32_t EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TRIG_FIR_HMI = 18;
static const uint32_t EC_PC_COMMON_SPR_V0_HMER_SPARE_19 = 19;
static const uint32_t EC_PC_COMMON_SPR_V0_HMER_SPARE_20 = 20;
static const uint32_t EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_STATUS = 21;
static const uint32_t EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_STATUS_LEN = 3;
//<< [EC_PC_COMMON_SPR_V0_HMER]
// c/reg00006.H

//>> [EC_PC_FIR_ERR_INJ]
static const uint64_t EC_PC_FIR_ERR_INJ = 0x2002044dull;

static const uint32_t EC_PC_FIR_ERR_INJ_ERR_INJ_TO_LSU = 0;
static const uint32_t EC_PC_FIR_ERR_INJ_ERR_INJ_TO_IFU = 1;
static const uint32_t EC_PC_FIR_ERR_INJ_ERR_INJ_TO_ISU = 2;
static const uint32_t EC_PC_FIR_ERR_INJ_ERR_INJ_TO_VSU = 3;
static const uint32_t EC_PC_FIR_ERR_INJ_ERR_INJ_TO_PC = 4;
static const uint32_t EC_PC_FIR_ERR_INJ_ERR_INJ_TO_MMU = 5;
static const uint32_t EC_PC_FIR_ERR_INJ_ERROR_PULSE_OR_LEVEL = 6;
static const uint32_t EC_PC_FIR_ERR_INJ_CLEAR_STICKY_LEVEL = 7;
static const uint32_t EC_PC_FIR_ERR_INJ_ERR_INJ_SCOM_WRITE = 8;
static const uint32_t EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER = 9;
static const uint32_t EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER1 = 10;
static const uint32_t EC_PC_FIR_ERR_INJ_ERR_INJ_TOD_TAP = 11;
static const uint32_t EC_PC_FIR_ERR_INJ_ERR_INJ_BLOCK = 12;
static const uint32_t EC_PC_FIR_ERR_INJ_ERR_INJ_BLOCK_LEN = 2;
static const uint32_t EC_PC_FIR_ERR_INJ_ERR_INJ_DELAY_AFTER_BLOCK = 14;
static const uint32_t EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK = 15;
static const uint32_t EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK_EXTEND = 16;
static const uint32_t EC_PC_FIR_ERR_INJ_ERR_INJ_TAP_SEL = 17;
static const uint32_t EC_PC_FIR_ERR_INJ_ERR_INJ_TAP_SEL_LEN = 4;
static const uint32_t EC_PC_FIR_ERR_INJ_ERR_INJ_HYP_BLOCK = 21;
static const uint32_t EC_PC_FIR_ERR_INJ_ERR_INJ_HYP_BLOCK_LEN = 3;
//<< [EC_PC_FIR_ERR_INJ]
// c/reg00006.H

//>> [EC_PC_TRACE1_TR_TR0_CONFIG_4]
static const uint64_t EC_PC_TRACE1_TR_TR0_CONFIG_4 = 0x20020a47ull;

static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_4_A = 0;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_4_A_LEN = 24;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_4_B = 24;
static const uint32_t EC_PC_TRACE1_TR_TR0_CONFIG_4_B_LEN = 24;
//<< [EC_PC_TRACE1_TR_TR0_CONFIG_4]
// c/reg00006.H

//>> [EC_PC_TRACE2_TR_TR0_CONFIG]
static const uint64_t EC_PC_TRACE2_TR_TR0_CONFIG = 0x20020a82ull;

static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_STORE_ON_TRIG_MODE = 0;
static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_WRITE_ON_RUN_MODE = 1;
static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_EXTEND_TRIG_MODE = 2;
static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_EXTEND_TRIG_MODE_LEN = 8;
static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_BANK_MODE = 10;
static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_ENH_TRACE_MODE = 11;
static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL = 12;
static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN = 2;
static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_SELECT_CONTROL = 14;
static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_SELECT_CONTROL_LEN = 4;
static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF = 18;
static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STATUS = 19;
static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STICKY = 20;
static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT = 21;
static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS = 22;
static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT = 23;
static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT = 24;
//<< [EC_PC_TRACE2_TR_TR0_CONFIG]
// c/reg00006.H

//>> [L2TRA_TR0_CONFIG_2]
static const uint64_t L2TRA_TR0_CONFIG_2 = 0x20020045ull;

static const uint32_t L2TRA_TR0_CONFIG_2_A = 0;
static const uint32_t L2TRA_TR0_CONFIG_2_A_LEN = 24;
static const uint32_t L2TRA_TR0_CONFIG_2_B = 24;
static const uint32_t L2TRA_TR0_CONFIG_2_B_LEN = 24;
//<< [L2TRA_TR0_CONFIG_2]
// c/reg00006.H

//>> [NC_NCMISC_NCSCOMS_NCU_MODE_REG2]
static const uint64_t NC_NCMISC_NCSCOMS_NCU_MODE_REG2 = 0x2001064bull;

static const uint32_t NC_NCMISC_NCSCOMS_NCU_MODE_REG2_HANG_POLL_PULSE_DIV = 0;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_MODE_REG2_HANG_POLL_PULSE_DIV_LEN = 4;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_CP_DATA_POLL_PULSE_DIV = 4;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_CP_DATA_POLL_PULSE_DIV_LEN = 4;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_SNOOP_DATA_POLL_PULSE_DIV = 8;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_SNOOP_DATA_POLL_PULSE_DIV_LEN = 10;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG1_HANG_POLL_PULSE_DIV = 18;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG1_HANG_POLL_PULSE_DIV_LEN = 4;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG2_HANG_POLL_PULSE_DIV = 22;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG2_HANG_POLL_PULSE_DIV_LEN = 4;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_TLB_DATA_POLL_PULSE_DIV = 26;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_TLB_DATA_POLL_PULSE_DIV_LEN = 10;
//<< [NC_NCMISC_NCSCOMS_NCU_MODE_REG2]
// c/reg00006.H

//>> [WRITE_PROTECT_RINGS_REG]
static const uint64_t WRITE_PROTECT_RINGS_REG = 0x20010006ull;

static const uint32_t WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS = 0;
static const uint32_t WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS_LEN = 32;
//<< [WRITE_PROTECT_RINGS_REG]
// c/reg00006.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "c/reg00006_unused.H"
#endif
#endif
