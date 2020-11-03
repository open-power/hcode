/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_c_2_unused.H $       */
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

#ifndef __p10_scom_c_2_H_UNUSED__
#define __p10_scom_c_2_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace c
{
#endif


//>> [EC_LS_LSU_HOLD_OUT_REG10]
static const uint64_t EC_LS_LSU_HOLD_OUT_REG10 = 0x200206caull;

static const uint32_t EC_LS_LSU_HOLD_OUT_REG10_EXES0_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT = 0;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG10_EXES1_FLSP1_HYPV_TRAP_DETECT_AND_NTC_ERR_HOLD_OUT = 1;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG10_SRQD_RTYPE_MISMATCH_ERR_HOLD_OUT = 2;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG10_SRQD_STEAL_OP_DURING_RECONFIG_ERR_HOLD_OUT = 3;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG10_SRQD_TM_DISCARD_STORAGE_OVERFLOW_ERR_HOLD_OUT = 4;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG10_SRQD_TM_HWSYNC_OVERFLOW_ERR_HOLD_OUT = 5;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG10_SRQD_UNEXPECTED_NTCACK_ERR_HOLD_OUT = 5; // p10:20,
// ERROR Duplicate Dial         static const uint32_t EC_LS_LSU_HOLD_OUT_REG10_SRQD_UNEXPECTED_NTCACK_ERR_HOLD_OUT = 6;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG10_SRQD_UNEXPECTED_SYNCACK_ERR_HOLD_OUT = 6; // p10:20,
// ERROR Duplicate Dial         static const uint32_t EC_LS_LSU_HOLD_OUT_REG10_SRQD_UNEXPECTED_SYNCACK_ERR_HOLD_OUT = 7;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG10_SRQD_PASTE_EXCEPTION_DURING_RECONFIG_ERR_HOLD_OUT = 7; // p10:20,
// ERROR Duplicate Dial         static const uint32_t EC_LS_LSU_HOLD_OUT_REG10_SRQD_PASTE_EXCEPTION_DURING_RECONFIG_ERR_HOLD_OUT = 8;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG10_SRQD_SNOOPTLBIE_RECEIVED_WITH_IN_PROGRESS_ERR_HOLD_OUT = 8; // p10:20,
// ERROR Duplicate Dial         static const uint32_t EC_LS_LSU_HOLD_OUT_REG10_SRQD_SNOOPTLBIE_RECEIVED_WITH_IN_PROGRESS_ERR_HOLD_OUT = 9;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG10_SRQD_PTEUPDATE_RECEIVED_WITH_IN_PROGRESS_ERR_HOLD_OUT = 9; // p10:20,
// ERROR Duplicate Dial         static const uint32_t EC_LS_LSU_HOLD_OUT_REG10_SRQD_PTEUPDATE_RECEIVED_WITH_IN_PROGRESS_ERR_HOLD_OUT = 10;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG10_LD0_ACC_LLQ_RF_PERR_NRECOV_CORECHKSTOP_HOLD_OUT = 10; // p10:20,
// ERROR Duplicate Dial         static const uint32_t EC_LS_LSU_HOLD_OUT_REG10_LD0_ACC_LLQ_RF_PERR_NRECOV_CORECHKSTOP_HOLD_OUT = 11;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG10_LD1_ACC_LLQ_RF_PERR_NRECOV_CORECHKSTOP_HOLD_OUT = 11; // p10:20,
// ERROR Duplicate Dial         static const uint32_t EC_LS_LSU_HOLD_OUT_REG10_LD1_ACC_LLQ_RF_PERR_NRECOV_CORECHKSTOP_HOLD_OUT = 12;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG10_LD0_ACC_LLQ_RF_PERR_NRECOV_SYSCHKSTOP_HOLD_OUT = 12; // p10:20,
// ERROR Duplicate Dial         static const uint32_t EC_LS_LSU_HOLD_OUT_REG10_LD0_ACC_LLQ_RF_PERR_NRECOV_SYSCHKSTOP_HOLD_OUT = 13;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG10_LD1_ACC_LLQ_RF_PERR_NRECOV_SYSCHKSTOP_HOLD_OUT = 13; // p10:20,
// ERROR Duplicate Dial         static const uint32_t EC_LS_LSU_HOLD_OUT_REG10_LD1_ACC_LLQ_RF_PERR_NRECOV_SYSCHKSTOP_HOLD_OUT = 14;
//<< [EC_LS_LSU_HOLD_OUT_REG10]
// c/reg00002.H

//>> [EC_LS_LSU_HOLD_OUT_REG6]
static const uint64_t EC_LS_LSU_HOLD_OUT_REG6 = 0x200206c6ull;

static const uint32_t EC_LS_LSU_HOLD_OUT_REG6_MQ_RC4_RLD_INV_RD_ERROR_HOLD_OUT = 0;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG6_MQ_RC7_RLD_SAME_SCTR_TWICE_ERROR_HOLD_OUT = 1;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG6_MQ_RC6_SSP_RLD_SNP_BTW_BEATS_ERROR_HOLD_OUT = 2;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG6_MQ_KILLED_CDF_FOR_CI_LOAD_ERROR_HOLD_OUT = 3;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG6_MQ_MP4_3_IEQ1_FETCHES_SAME_TID_ERROR_HOLD_OUT = 4;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG6_GC0_OVERFLOW_ERR_HOLD_OUT = 5;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG6_GC0_ENTRY_NO_LONGER_UNALIGN_ERR_HOLD_OUT = 6;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG6_GC0_UA_RIGHT_W_NO_LEFT_ERR_HOLD_OUT = 7;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG6_GC0_OP_BOTH_UA_LEFT_AND_RIGHT_ERR_HOLD_OUT = 8;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG6_GC1_OVERFLOW_ERR_HOLD_OUT = 9;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG6_GC1_ENTRY_NO_LONGER_UNALIGN_ERR_HOLD_OUT = 10;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG6_GC1_UA_RIGHT_W_NO_LEFT_ERR_HOLD_OUT = 11;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG6_GC1_OP_BOTH_UA_LEFT_AND_RIGHT_ERR_HOLD_OUT = 12;
//<< [EC_LS_LSU_HOLD_OUT_REG6]
// c/reg00002.H

//>> [EC_PC_SCR4]
static const uint64_t EC_PC_SCR4 = 0x2002048aull;
//<< [EC_PC_SCR4]
// c/reg00002.H

//>> [EC_PC_TOD_SYNC010]
static const uint64_t EC_PC_TOD_SYNC010 = 0x200204a3ull;

static const uint32_t EC_PC_TOD_SYNC010_TOD = 0;
static const uint32_t EC_PC_TOD_SYNC010_TOD_LEN = 53;
static const uint32_t EC_PC_TOD_SYNC010_CHIP_TOD_STATUS = 60;
static const uint32_t EC_PC_TOD_SYNC010_CHIP_TOD_STATUS_LEN = 4;
//<< [EC_PC_TOD_SYNC010]
// c/reg00002.H

//>> [EC_PC_TOD_SYNC101]
static const uint64_t EC_PC_TOD_SYNC101 = 0x200204a3ull;

static const uint32_t EC_PC_TOD_SYNC101_TOD = 0;
static const uint32_t EC_PC_TOD_SYNC101_TOD_LEN = 50;
static const uint32_t EC_PC_TOD_SYNC101_CHIP_TOD_STATUS = 60;
static const uint32_t EC_PC_TOD_SYNC101_CHIP_TOD_STATUS_LEN = 4;
//<< [EC_PC_TOD_SYNC101]
// c/reg00002.H

//>> [EC_PC_TRACE1_TR_TR0_TRACE_LO_DATA_REG]
static const uint64_t EC_PC_TRACE1_TR_TR0_TRACE_LO_DATA_REG = 0x20020a41ull;

static const uint32_t EC_PC_TRACE1_TR_TR0_TRACE_LO_DATA_REG_LO_DATA = 0;
static const uint32_t EC_PC_TRACE1_TR_TR0_TRACE_LO_DATA_REG_LO_DATA_LEN = 32;
static const uint32_t EC_PC_TRACE1_TR_TR0_TRACE_LO_DATA_REG_ADDRESS = 32;
static const uint32_t EC_PC_TRACE1_TR_TR0_TRACE_LO_DATA_REG_ADDRESS_LEN = 10;
static const uint32_t EC_PC_TRACE1_TR_TR0_TRACE_LO_DATA_REG_LAST_BANK = 42;
static const uint32_t EC_PC_TRACE1_TR_TR0_TRACE_LO_DATA_REG_LAST_BANK_LEN = 9;
static const uint32_t EC_PC_TRACE1_TR_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID = 51;
static const uint32_t EC_PC_TRACE1_TR_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN = 52;
static const uint32_t EC_PC_TRACE1_TR_TR0_TRACE_LO_DATA_REG_RUNNING = 53;
static const uint32_t EC_PC_TRACE1_TR_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS = 54;
static const uint32_t EC_PC_TRACE1_TR_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN = 10;
//<< [EC_PC_TRACE1_TR_TR0_TRACE_LO_DATA_REG]
// c/reg00002.H

//>> [L2TRA_TR1_CONFIG_2]
static const uint64_t L2TRA_TR1_CONFIG_2 = 0x20020085ull;

static const uint32_t L2TRA_TR1_CONFIG_2_A = 0;
static const uint32_t L2TRA_TR1_CONFIG_2_A_LEN = 24;
static const uint32_t L2TRA_TR1_CONFIG_2_B = 24;
static const uint32_t L2TRA_TR1_CONFIG_2_B_LEN = 24;
//<< [L2TRA_TR1_CONFIG_2]
// c/reg00002.H

//>> [L2TRA_TR1_TRACE_HI_DATA_REG]
static const uint64_t L2TRA_TR1_TRACE_HI_DATA_REG = 0x20020080ull;

static const uint32_t L2TRA_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA = 0;
static const uint32_t L2TRA_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN = 64;
//<< [L2TRA_TR1_TRACE_HI_DATA_REG]
// c/reg00002.H

//>> [L2_L2MISC_L2CERRS_ERR_RPT0]
static const uint64_t L2_L2MISC_L2CERRS_ERR_RPT0 = 0x20020012ull;

static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_RCCO_FSM_PARITY_ERR = 0;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_NCCTL_RLD_BARRIER_ERR = 1;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_NCCTL_SNP_ERR = 2;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_NCCTL_TLBIE_ACK_ERR = 3;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_NCCTL_SYNC_ERR = 4;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_NCCTL_VSYNC_ERR = 5;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_TMCTL_TIDX_TEND_LDST_SEQ_ERR = 6;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_RVCTL_ERR = 7;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_SRCTL0_BAD_HPC_ERR = 8;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_SRCTL1_BAD_HPC_ERR = 9;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_SRCTL2_BAD_HPC_ERR = 10;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_SRCTL3_BAD_HPC_ERR = 11;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_PBARB_FSM_REQ_OVERFLOW_ERR = 12;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_PBARB_TRASHMODE_PB_REQ_ERR = 13;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_L3PF_MACH_DONE_ERR = 14;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_RCMD0_TTAG_PERR = 15;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_RCMD1_TTAG_PERR = 16;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_RCMD2_TTAG_PERR = 17;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_RCMD3_TTAG_PERR = 18;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_CR0_TTAG_PERR = 19;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_CR0_ATAG_PERR = 20;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_CR1_TTAG_PERR = 21;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_CR1_ATAG_PERR = 22;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_CR2_TTAG_PERR = 23;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_CR2_ATAG_PERR = 24;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_CR3_TTAG_PERR = 25;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_CR3_ATAG_PERR = 26;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_RCMD0_ADDR_PERR = 27;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_RCMD1_ADDR_PERR = 28;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_RCMD2_ADDR_PERR = 29;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_RCMD3_ADDR_PERR = 30;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_9_PEC_PHASE3_TIMEOUT = 31;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_9_PEC_PHASE4_SAME_ERR = 32;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_9_PEC_PHASE4_RCCO_DISP_FAIL = 33;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_9_PEC_PHASE5_TIMEOUT = 34;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_B01_BOTH_ACTIVE = 35;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_PHANTOM_B01_REQ = 36;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_RC_UNEXP_F2_DATA_ERR = 37;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_RC_UNEXP_PURG_HIT_ERR = 38;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_RCX_UNEXP_IDLE_PBL3_DATA_ERR = 39;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_RCX_UNEXP_IDLE_PB_CRESP_ERR = 40;
static const uint32_t L2_L2MISC_L2CERRS_ERR_RPT0_14_COX_UNEXP_IDLE_PB_CRESP_ERR = 41;
//<< [L2_L2MISC_L2CERRS_ERR_RPT0]
// c/reg00002.H

//>> [L2_L2MISC_L2CERRS_MODE_REG1]
static const uint64_t L2_L2MISC_L2CERRS_MODE_REG1 = 0x2002000bull;

static const uint32_t L2_L2MISC_L2CERRS_MODE_REG1_CFG_ECCCK_CE_UE_SUE_ERR_DET_DIS = 0;
static const uint32_t L2_L2MISC_L2CERRS_MODE_REG1_CFG_ECCCK_UE_SUE_DET_DIS = 1;
static const uint32_t L2_L2MISC_L2CERRS_MODE_REG1_CFG_DYN_TRACE_MODE = 2;
static const uint32_t L2_L2MISC_L2CERRS_MODE_REG1_CFG_DYN_TRACE_MODE_LEN = 2;
static const uint32_t L2_L2MISC_L2CERRS_MODE_REG1_HANG_POLL_PULSE_DIV = 4;
static const uint32_t L2_L2MISC_L2CERRS_MODE_REG1_HANG_POLL_PULSE_DIV_LEN = 4;
static const uint32_t L2_L2MISC_L2CERRS_MODE_REG1_DATA_POLL_PULSE_DIV = 8;
static const uint32_t L2_L2MISC_L2CERRS_MODE_REG1_DATA_POLL_PULSE_DIV_LEN = 4;
static const uint32_t L2_L2MISC_L2CERRS_MODE_REG1_MODE_REG1_SPARE1 = 12;
static const uint32_t L2_L2MISC_L2CERRS_MODE_REG1_MODE_REG1_SPARE1_LEN = 4;
static const uint32_t L2_L2MISC_L2CERRS_MODE_REG1_PM_SMT_MODE_ROTATION_EN = 16;
static const uint32_t L2_L2MISC_L2CERRS_MODE_REG1_MODE_REG1_SPARE2 = 17;
static const uint32_t L2_L2MISC_L2CERRS_MODE_REG1_MODE_REG1_SPARE2_LEN = 3;
static const uint32_t L2_L2MISC_L2CERRS_MODE_REG1_PM_TID_ROTATE_PLS_RATE = 20;
static const uint32_t L2_L2MISC_L2CERRS_MODE_REG1_PM_TID_ROTATE_PLS_RATE_LEN = 3;
static const uint32_t L2_L2MISC_L2CERRS_MODE_REG1_CFG_MASTER_RTY_BACKOFF_EN = 23;
static const uint32_t L2_L2MISC_L2CERRS_MODE_REG1_MODE_REG1_SPARE3 = 24;
static const uint32_t L2_L2MISC_L2CERRS_MODE_REG1_PM_L23_EVENT_TID_SEL_EN = 25;
static const uint32_t L2_L2MISC_L2CERRS_MODE_REG1_PM_L23_EVENT_TID_SEL_NUM = 26;
static const uint32_t L2_L2MISC_L2CERRS_MODE_REG1_PM_L23_EVENT_TID_SEL_NUM_LEN = 2;
//<< [L2_L2MISC_L2CERRS_MODE_REG1]
// c/reg00002.H

//>> [NC_NCMISC_NCSCOMS_NCU_SPEC_BAR_REG]
static const uint64_t NC_NCMISC_NCSCOMS_NCU_SPEC_BAR_REG = 0x20010650ull;

static const uint32_t NC_NCMISC_NCSCOMS_NCU_SPEC_BAR_REG_EN = 0;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_SPEC_BAR_REG_256K = 1;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_SPEC_BAR_REG_ADDR = 12;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_SPEC_BAR_REG_ADDR_LEN = 38;
//<< [NC_NCMISC_NCSCOMS_NCU_SPEC_BAR_REG]
// c/reg00002.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "c/reg00002_unused.H"
#endif
#endif
