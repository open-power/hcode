/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_c_7_unused.H $       */
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

#ifndef __p10_scom_c_7_H_UNUSED__
#define __p10_scom_c_7_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace c
{
#endif


//>> [CPMS_CERRMSK]
static const uint64_t CPMS_CERRMSK = 0x200e0e14ull;

static const uint32_t CPMS_CERRMSK_PFET_SEQ_ERR_MASK = 0;
static const uint32_t CPMS_CERRMSK_DDS_ERR_MASK = 1;
static const uint32_t CPMS_CERRMSK_CLK_SYNC_ERR_MASK = 2;
static const uint32_t CPMS_CERRMSK_DPT_ACCESS_MASK = 3;
static const uint32_t CPMS_CERRMSK_PROXY_MASK = 4;
static const uint32_t CPMS_CERRMSK_FTC_EVENT_MASK = 5;
static const uint32_t CPMS_CERRMSK_FTC_EVENT_MASK_LEN = 3;
static const uint32_t CPMS_CERRMSK_PITCH_MASK = 8;
//<< [CPMS_CERRMSK]
// c/reg00007.H

//>> [EC_LS_LSU_HOLD_OUT_REG0]
static const uint64_t EC_LS_LSU_HOLD_OUT_REG0 = 0x200206c0ull;

static const uint32_t EC_LS_LSU_HOLD_OUT_REG0_0 = 0;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG0_1 = 1;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG0_2 = 2;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG0_3 = 3;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG0_4 = 4;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG0_5 = 5;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG0_6 = 6;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG0_7 = 7;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG0_8 = 8;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG0_9 = 9;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG0_10 = 10;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG0_11 = 11;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG0_12 = 12;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG0_13 = 13;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG0_14 = 14;
static const uint32_t EC_LS_LSU_HOLD_OUT_REG0_15 = 15;
//<< [EC_LS_LSU_HOLD_OUT_REG0]
// c/reg00007.H

//>> [EC_PC_SCR2]
static const uint64_t EC_PC_SCR2 = 0x20020488ull;
//<< [EC_PC_SCR2]
// c/reg00007.H

//>> [EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG]
static const uint64_t EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG = 0x20020a40ull;

static const uint32_t EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA = 0;
static const uint32_t EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN = 64;
//<< [EC_PC_TRACE1_TR_TR0_TRACE_HI_DATA_REG]
// c/reg00007.H

//>> [EC_PC_TRACE2_TR_TR0_CONFIG_0]
static const uint64_t EC_PC_TRACE2_TR_TR0_CONFIG_0 = 0x20020a83ull;

static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63 = 0;
static const uint32_t EC_PC_TRACE2_TR_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN = 64;
//<< [EC_PC_TRACE2_TR_TR0_CONFIG_0]
// c/reg00007.H

//>> [EC_SD_SDP_SDCR_UNIT_HOLD_OUT1]
static const uint64_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT1 = 0x20020641ull;

static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_1 = 0;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_2 = 1;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_3 = 2;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_4 = 3;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XM_ERR_HOLD_OUT_5 = 4;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_0 = 5;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_1 = 6;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_2 = 7;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_3 = 8;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_4 = 9;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_XS_ERR_HOLD_OUT_5 = 10;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_0 = 11;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_1 = 12;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_2 = 13;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_3 = 14;
static const uint32_t EC_SD_SDP_SDCR_UNIT_HOLD_OUT1_S_ERR_HOLD_OUT_4 = 15;
//<< [EC_SD_SDP_SDCR_UNIT_HOLD_OUT1]
// c/reg00007.H

//>> [L2TRA_TR1_TRACE_LO_DATA_REG]
static const uint64_t L2TRA_TR1_TRACE_LO_DATA_REG = 0x20020081ull;

static const uint32_t L2TRA_TR1_TRACE_LO_DATA_REG_LO_DATA = 0;
static const uint32_t L2TRA_TR1_TRACE_LO_DATA_REG_LO_DATA_LEN = 32;
static const uint32_t L2TRA_TR1_TRACE_LO_DATA_REG_ADDRESS = 32;
static const uint32_t L2TRA_TR1_TRACE_LO_DATA_REG_ADDRESS_LEN = 10;
static const uint32_t L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK = 42;
static const uint32_t L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_LEN = 9;
static const uint32_t L2TRA_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID = 51;
static const uint32_t L2TRA_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN = 52;
static const uint32_t L2TRA_TR1_TRACE_LO_DATA_REG_RUNNING = 53;
static const uint32_t L2TRA_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS = 54;
static const uint32_t L2TRA_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN = 10;
//<< [L2TRA_TR1_TRACE_LO_DATA_REG]
// c/reg00007.H

//>> [L2TRA_TR1_CONFIG_4]
static const uint64_t L2TRA_TR1_CONFIG_4 = 0x20020087ull;

static const uint32_t L2TRA_TR1_CONFIG_4_A = 0;
static const uint32_t L2TRA_TR1_CONFIG_4_A_LEN = 24;
static const uint32_t L2TRA_TR1_CONFIG_4_B = 24;
static const uint32_t L2TRA_TR1_CONFIG_4_B_LEN = 24;
//<< [L2TRA_TR1_CONFIG_4]
// c/reg00007.H

//>> [NC_NCMISC_NCSCOMS_NCU_STATUS_REG]
static const uint64_t NC_NCMISC_NCSCOMS_NCU_STATUS_REG = 0x2001064full;

static const uint32_t NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE0_REQ_ACTIVE = 0;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE1_REQ_ACTIVE = 1;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_STATUS_REG_CORE_OR_SNP_REQ_ACTIVE = 2;
static const uint32_t NC_NCMISC_NCSCOMS_NCU_STATUS_REG_ANY_REQ_ACTIVE = 3;
//<< [NC_NCMISC_NCSCOMS_NCU_STATUS_REG]
// c/reg00007.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "c/reg00007_unused.H"
#endif
#endif
