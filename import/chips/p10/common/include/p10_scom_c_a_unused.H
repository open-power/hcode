/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_c_a_unused.H $       */
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

#ifndef __p10_scom_c_a_H_UNUSED__
#define __p10_scom_c_a_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace c
{
#endif


//>> [EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1]
static const uint64_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1 = 0x20020601ull;

static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1_16 = 0;
static const uint32_t P10_20_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1_IFDCTL_IBUF_PERR_HOLD_OUT_6 = 0; // p10:20,
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1_17 = 1;
static const uint32_t P10_20_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1_IFDCTL_IBUF_PERR_HOLD_OUT_7 = 1; // p10:20,
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1_18 = 2;
static const uint32_t P10_20_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1_IFBSC_MFSPR_LOG_CRIT_P_HOLD_OUT = 2; // p10:20,
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1_19 = 3;
static const uint32_t P10_20_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1_IFBSC_MFSPR_LOG_NONCRIT_P_HOLD_OUT = 3; // p10:20,
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1_20 = 4;
static const uint32_t P10_20_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1_IFBSC_MFSPR_RFILE_CRIT_P_HOLD_OUT = 4; // p10:20,
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1_21 = 5;
static const uint32_t P10_20_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1_IFBSC_MFSPR_RFILE_NONCRIT_P_HOLD_OUT = 5; // p10:20,
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1_22 = 6;
static const uint32_t P10_20_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1_IFFAC_COMP_RFILE_HOLD_OUT = 6; // p10:20,
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1_23 = 7;
static const uint32_t P10_20_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1_IFFAC_S0_NIA_P_HOLD_OUT = 7; // p10:20,
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1_24 = 8;
static const uint32_t P10_20_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1_IFFAC_RFILE_HOLD_OUT = 8; // p10:20,
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1_25 = 9;
static const uint32_t P10_20_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1_IFFAC_REFETCH_OUTOFRANGE_HOLD_OUT = 9; // p10:20,
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1_26 = 10;
static const uint32_t P10_20_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1_IFFAC_EAT_TAIL_BEYOND_HEAD_HOLD_OUT = 10; // p10:20,
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1_27 = 11;
static const uint32_t P10_20_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1_IFFMSR_MSR_DATA_PERR_HOLD_OUT = 11; // p10:20,
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1_28 = 12;
static const uint32_t P10_20_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1_IFFRC_ISU_REFETCH_P_HOLD_OUT = 12; // p10:20,
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1_29 = 13;
static const uint32_t P10_20_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1_IFFRC_REFETCH_EAT_P_HOLD_OUT = 13; // p10:20,
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1_30 = 14;
static const uint32_t P10_20_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1_IFBSC_SPR_PARITY_HOLD_OUT = 14; // p10:20,
static const uint32_t EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1_31 = 15;
static const uint32_t P10_20_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1_HFSCR_FSCR_PARITY_HOLD_OUT = 15; // p10:20,
//<< [EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT1]
// c/reg00010.H

//>> [EC_PC_FIR_CORE_SYS]
static const uint64_t EC_PC_FIR_CORE_SYS = 0x2002044aull;

static const uint32_t EC_PC_FIR_CORE_SYS_CORE_SYS_ENABLE = 1;
//<< [EC_PC_FIR_CORE_SYS]
// c/reg00010.H

//>> [EC_PC_TRACE2_TR_TR0_TRACE_LO_DATA_REG]
static const uint64_t EC_PC_TRACE2_TR_TR0_TRACE_LO_DATA_REG = 0x20020a81ull;

static const uint32_t EC_PC_TRACE2_TR_TR0_TRACE_LO_DATA_REG_LO_DATA = 0;
static const uint32_t EC_PC_TRACE2_TR_TR0_TRACE_LO_DATA_REG_LO_DATA_LEN = 32;
static const uint32_t EC_PC_TRACE2_TR_TR0_TRACE_LO_DATA_REG_ADDRESS = 32;
static const uint32_t EC_PC_TRACE2_TR_TR0_TRACE_LO_DATA_REG_ADDRESS_LEN = 10;
static const uint32_t EC_PC_TRACE2_TR_TR0_TRACE_LO_DATA_REG_LAST_BANK = 42;
static const uint32_t EC_PC_TRACE2_TR_TR0_TRACE_LO_DATA_REG_LAST_BANK_LEN = 9;
static const uint32_t EC_PC_TRACE2_TR_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID = 51;
static const uint32_t EC_PC_TRACE2_TR_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN = 52;
static const uint32_t EC_PC_TRACE2_TR_TR0_TRACE_LO_DATA_REG_RUNNING = 53;
static const uint32_t EC_PC_TRACE2_TR_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS = 54;
static const uint32_t EC_PC_TRACE2_TR_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN = 10;
//<< [EC_PC_TRACE2_TR_TR0_TRACE_LO_DATA_REG]
// c/reg00010.H

//>> [L2TRA_TR0_CONFIG_0]
static const uint64_t L2TRA_TR0_CONFIG_0 = 0x20020043ull;

static const uint32_t L2TRA_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63 = 0;
static const uint32_t L2TRA_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN = 64;
//<< [L2TRA_TR0_CONFIG_0]
// c/reg00010.H

//>> [L2TRA_TR0_TRACE_HI_DATA_REG]
static const uint64_t L2TRA_TR0_TRACE_HI_DATA_REG = 0x20020040ull;

static const uint32_t L2TRA_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA = 0;
static const uint32_t L2TRA_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN = 64;
//<< [L2TRA_TR0_TRACE_HI_DATA_REG]
// c/reg00010.H

//>> [L2TRA_TR1_CONFIG_9]
static const uint64_t L2TRA_TR1_CONFIG_9 = 0x20020089ull;

static const uint32_t L2TRA_TR1_CONFIG_9_DISABLE_COMPRESSION = 0;
static const uint32_t L2TRA_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK = 1;
static const uint32_t L2TRA_TR1_CONFIG_9_MATCHA_MUXSEL = 2;
static const uint32_t L2TRA_TR1_CONFIG_9_MATCHA_MUXSEL_LEN = 2;
static const uint32_t L2TRA_TR1_CONFIG_9_MATCHB_MUXSEL = 4;
static const uint32_t L2TRA_TR1_CONFIG_9_MATCHB_MUXSEL_LEN = 2;
static const uint32_t L2TRA_TR1_CONFIG_9_MATCHC_MUXSEL = 6;
static const uint32_t L2TRA_TR1_CONFIG_9_MATCHC_MUXSEL_LEN = 2;
static const uint32_t L2TRA_TR1_CONFIG_9_MATCHD_MUXSEL = 8;
static const uint32_t L2TRA_TR1_CONFIG_9_MATCHD_MUXSEL_LEN = 2;
static const uint32_t L2TRA_TR1_CONFIG_9_TRIG0_OR_MASK = 10;
static const uint32_t L2TRA_TR1_CONFIG_9_TRIG0_OR_MASK_LEN = 4;
static const uint32_t L2TRA_TR1_CONFIG_9_TRIG0_AND_MASK = 14;
static const uint32_t L2TRA_TR1_CONFIG_9_TRIG0_AND_MASK_LEN = 4;
static const uint32_t L2TRA_TR1_CONFIG_9_TRIG1_OR_MASK = 18;
static const uint32_t L2TRA_TR1_CONFIG_9_TRIG1_OR_MASK_LEN = 4;
static const uint32_t L2TRA_TR1_CONFIG_9_TRIG1_AND_MASK = 22;
static const uint32_t L2TRA_TR1_CONFIG_9_TRIG1_AND_MASK_LEN = 4;
static const uint32_t L2TRA_TR1_CONFIG_9_TRIG0_NOT_MODE = 26;
static const uint32_t L2TRA_TR1_CONFIG_9_TRIG1_NOT_MODE = 27;
static const uint32_t L2TRA_TR1_CONFIG_9_MATCH_NOT_MODE = 28;
static const uint32_t L2TRA_TR1_CONFIG_9_MATCH_NOT_MODE_LEN = 4;
static const uint32_t L2TRA_TR1_CONFIG_9_ERROR_CMP_MASK = 32;
static const uint32_t L2TRA_TR1_CONFIG_9_ERROR_CMP_PATTERN = 33;
static const uint32_t L2TRA_TR1_CONFIG_9_TRIG0_ERR_CMP = 34;
static const uint32_t L2TRA_TR1_CONFIG_9_TRIG1_ERR_CMP = 35;
static const uint32_t L2TRA_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES = 36;
static const uint32_t L2TRA_TR1_CONFIG_9_SPARE_LT = 37;
//<< [L2TRA_TR1_CONFIG_9]
// c/reg00010.H

//>> [L2_L2MISC_L2CERRS_FIR_ACTION0_REG]
static const uint64_t L2_L2MISC_L2CERRS_FIR_ACTION0_REG = 0x20020006ull;

static const uint32_t L2_L2MISC_L2CERRS_FIR_ACTION0_REG_FIR_ACTION0 = 0;
static const uint32_t L2_L2MISC_L2CERRS_FIR_ACTION0_REG_FIR_ACTION0_LEN = 40;
//<< [L2_L2MISC_L2CERRS_FIR_ACTION0_REG]
// c/reg00010.H

//>> [L2_L2MISC_L2CERRS_FIR_ACTION1_REG]
static const uint64_t L2_L2MISC_L2CERRS_FIR_ACTION1_REG = 0x20020007ull;

static const uint32_t L2_L2MISC_L2CERRS_FIR_ACTION1_REG_FIR_ACTION1 = 0;
static const uint32_t L2_L2MISC_L2CERRS_FIR_ACTION1_REG_FIR_ACTION1_LEN = 40;
//<< [L2_L2MISC_L2CERRS_FIR_ACTION1_REG]
// c/reg00010.H

//>> [L3_MISC_L3CERRS_LRU_VIC_ALLOC_REG]
static const uint64_t L3_MISC_L3CERRS_LRU_VIC_ALLOC_REG = 0x20010611ull;

static const uint32_t L3_MISC_L3CERRS_LRU_VIC_ALLOC_REG_SEGR_COLUMN_CFG = 0;
static const uint32_t L3_MISC_L3CERRS_LRU_VIC_ALLOC_REG_SEGR_COLUMN_CFG_LEN = 16;
static const uint32_t L3_MISC_L3CERRS_LRU_VIC_ALLOC_REG_ALLOC_MD_CFG = 16;
static const uint32_t L3_MISC_L3CERRS_LRU_VIC_ALLOC_REG_ALLOC_MD_CFG_LEN = 2;
//<< [L3_MISC_L3CERRS_LRU_VIC_ALLOC_REG]
// c/reg00010.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "c/reg00010_unused.H"
#endif
#endif
