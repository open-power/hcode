/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_oci_proc_9.H $            */
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

#ifndef __p10_oci_proc_9_H_
#define __p10_oci_proc_9_H_


#ifndef __PPE_HCODE__
namespace scomt
{
namespace oci_proc
{
#endif


static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPESWPR0 = 0xc0000028ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPESWPR0_BAR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPESWPR0_BAR_LEN = 27;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPESWPR0_SIZE = 44;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPESWPR0_SIZE_LEN = 15;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISGB = 0xc00000c0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISGB_STORE_ADDRESS = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISGB_STORE_ADDRESS_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING = 35;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISGB_SGB_BYTE_VALID = 36;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISGB_SGB_BYTE_VALID_LEN = 4;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXSR = 0xc0000108ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXSR_HS = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXSR_HC = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXSR_HC_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXSR_HCP = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXSR_RIP = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXSR_SIP = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXSR_TRAP = 7;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXSR_IAC = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXSR_SIB = 9;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXSR_SIB_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXSR_RDAC = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXSR_WDAC = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXSR_WS = 14;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXSR_TRH = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXSR_SMS = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXSR_SMS_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXSR_LP = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXSR_EP = 21;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXSR_PTR = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXSR_ST = 25;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXSR_MFE = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXSR_MCS = 29;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXSR_MCS_LEN = 3;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEIVPR = 0xc0010008ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEIVPR_OCB_OCI_GPEIVPR_IVPR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEIVPR_OCB_OCI_GPEIVPR_IVPR_LEN = 23;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEMACR = 0xc0010020ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEMACR_MEM_LOW_PRIORITY = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEMACR_MEM_LOW_PRIORITY_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEMACR_MEM_HIGH_PRIORITY = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEMACR_MEM_HIGH_PRIORITY_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEMACR_LOCAL_LOW_PRIORITY = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEMACR_LOCAL_LOW_PRIORITY_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEMACR_LOCAL_HIGH_PRIORITY = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEMACR_LOCAL_HIGH_PRIORITY_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEMACR_SRAM_LOW_PRIORITY = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEMACR_SRAM_LOW_PRIORITY_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEMACR_SRAM_HIGH_PRIORITY = 10;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEMACR_SRAM_HIGH_PRIORITY_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEMACR_WRITE_PROTECT_ENABLE = 12;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR6 = 0xc0010230ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6_LEN = 32;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR30 = 0xc0010438ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR30_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR30_0_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR30_1 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR30_1_LEN = 32;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXCR = 0xc0010080ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXCR_OXIXCR_XCR = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXCR_OXIXCR_XCR_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXCR_XICTR_CTR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXCR_XICTR_CTR_LEN = 32;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEDBG = 0xc0020010ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEDBG_EN_DBG = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEDBG_HALT_ON_XSTOP = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEDBG_HALT_ON_TRIG = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEDBG_EN_COVERAGE_MODE = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEDBG_EN_INTR_ADDR = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEDBG_EN_TRACE_EXTRA = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEDBG_EN_TRACE_STALL = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEDBG_EN_WAIT_CYCLES = 7;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEDBG_EN_FULL_SPEED = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEDBG_DIS_FLOW_CHANGE = 9;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEDBG_TRACE_MODE_SEL = 10;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEDBG_TRACE_MODE_SEL_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEDBG_RESERVED12_15 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEDBG_RESERVED12_15_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEDBG_FIR_TRIGGER = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEDBG_SPARE = 17;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEDBG_SPARE_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEDBG_TRACE_DATA_SEL = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEDBG_TRACE_DATA_SEL_LEN = 4;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR2 = 0xc0020210ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR2_OCB_OCI_GPEXIVDR2_GPR2 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR2_OCB_OCI_GPEXIVDR2_GPR2_LEN = 32;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR30 = 0xc0020270ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30_LEN = 32;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISPRG0 = 0xc0020110ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISPRG0_SPRG0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISPRG0_SPRG0_LEN = 32;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDRX = 0xc0020428ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDRX_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDRX_0_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDRX_3 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDRX_3_LEN = 32;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR31 = 0xc0030278ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31_LEN = 32;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR9 = 0xc0030248ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9_LEN = 32;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR8 = 0xc0030420ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR8_8 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR8_8_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR8_9 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR8_9_LEN = 32;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CMD = 0xc0064020ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CMD_OCB_OCI_ADC_CMD_HWCTRL_START_SAMPLING = 0;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST0B = 0xc00638b0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST0B_ONGOING_0B = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST0B_ST0B_RESERVED_1_4 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST0B_ST0B_RESERVED_1_4_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST0B_WRITE_WHILE_BRIDGE_BUSY_ERR_0B = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST0B_ST0B_RESERVED_6 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST0B_FSM_ERR_0B = 7;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR2 = 0xc0061140ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR2_LINEAR_WINDOW_ENABLE = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR2_SPARE_0 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR2_SPARE_0_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR2_LINEAR_WINDOW_BAR = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR2_LINEAR_WINDOW_BAR_LEN = 17;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR2_LINEAR_WINDOW_MASK = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR2_LINEAR_WINDOW_MASK_LEN = 12;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR2 = 0xc0061150ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR2_LINEAR_WINDOW_SCRESP = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR2_LINEAR_WINDOW_SCRESP_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR2_SPARE0 = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR2_SPARE0_LEN = 5;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLBR1 = 0xc0061080ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLBR1_OCI_REGION = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLBR1_OCI_REGION_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLBR1_START = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLBR1_START_LEN = 26;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS0 = 0xc0061008ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS0_PULL_FULL = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS0_PULL_EMPTY = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS0_SPARE = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS0_SPARE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS0_PULL_INTR_ACTION_0_1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS0_PULL_INTR_ACTION_0_1_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS0_PULL_LENGTH = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS0_PULL_LENGTH_LEN = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS0_PULL_WRITE_PTR = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS0_PULL_WRITE_PTR_LEN = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS0_PULL_READ_PTR = 21;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS0_PULL_READ_PTR_LEN = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS0_PULL_ENABLE = 31;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSTAT = 0xc0060430ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSTAT_ADCFSM_ONGOING = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSTAT_SPARE_1 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSTAT_PMC_O2S_0A_ONGOING = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSTAT_PMC_O2S_0B_ONGOING = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSTAT_PMC_O2S_1A_ONGOING = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSTAT_PMC_O2S_1B_ONGOING = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSTAT_PMC_O2S_2A_ONGOING = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSTAT_PMC_O2S_2B_ONGOING = 7;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSTAT_AVS_SLAVE0 = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSTAT_AVS_SLAVE1 = 9;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSTAT_AVS_SLAVE2 = 10;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSTAT_SPARE_11 = 11;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSTAT_DERP0_ONGOING = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSTAT_DERP1_ONGOING = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSTAT_DERP2_ONGOING = 14;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSTAT_DERP3_ONGOING = 15;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS0_RW = 0xc0060500ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS0_WO_CLEAR = 0xc0060508ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS0_WO_OR = 0xc0060510ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS0_OCB_OCI_OCCS0_OCC_SCRATCH_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS0_OCB_OCI_OCCS0_OCC_SCRATCH_0_LEN = 32;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OITR0_RW = 0xc0060040ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OITR0_WO_CLEAR = 0xc0060048ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OITR0_WO_OR = 0xc0060050ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OITR0_OCB_OCI_OITR0_INTERRUPT_TYPE_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OITR0_OCB_OCI_OITR0_INTERRUPT_TYPE_0_LEN = 32;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4RR = 0xc0062820ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4RR_OCB_OCI_OPIT0Q4RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4RR_OCB_OCI_OPIT0Q4RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q1 = 0xc0062048ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q1_OCB_OCI_OPIT1Q1RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q1_OCB_OCI_OPIT1Q1RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q4RR = 0xc0062860ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q4RR_OCB_OCI_OPIT1Q4RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q4RR_OCB_OCI_OPIT1Q4RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q4RR = 0xc00628a0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q4RR_OCB_OCI_OPIT2Q4RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q4RR_OCB_OCI_OPIT2Q4RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5 = 0xc00620a8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5_OCB_OCI_OPIT2Q5RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5_OCB_OCI_OPIT2Q5RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4RR = 0xc00628e0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4RR_OCB_OCI_OPIT3Q4RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4RR_OCB_OCI_OPIT3Q4RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4RR = 0xc0062920ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4RR_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q4RR_OCB_OCI_OPIT4Q4RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q3 = 0xc0062158ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q3_OCB_OCI_OPIT5Q3RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q3_OCB_OCI_OPIT5Q3RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q4RR = 0xc0062960ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q4RR_OCB_OCI_OPIT5Q4RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q4RR_OCB_OCI_OPIT5Q4RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4RR = 0xc00629a0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4RR_OCB_OCI_OPIT6Q4RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q4RR_OCB_OCI_OPIT6Q4RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q7 = 0xc00621b8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q7_OCB_OCI_OPIT6Q7RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q7_OCB_OCI_OPIT6Q7RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q4RR = 0xc00629e0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q4RR_OCB_OCI_OPIT7Q4RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q4RR_OCB_OCI_OPIT7Q4RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C3 = 0xc0062218ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C3_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C3_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C3_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C3_PAYLOAD_LEN = 17;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C3RR = 0xc0062a18ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C3RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C3RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C3RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C3RR_PAYLOAD_LEN = 17;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C29RR = 0xc0062be8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C29RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C29RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C29RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C29RR_PAYLOAD_LEN = 17;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C3RR = 0xc0062b18ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C3RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C3RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C3RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C3RR_PAYLOAD_LEN = 17;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1 = 0xc0062428ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1_0_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1_1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1_1_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1_2 = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1_2_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1_3 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1_3_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1_4 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1_4_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1_5 = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1_5_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1_6 = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1_6_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1_7 = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1_7_LEN = 4;
// oci_proc/reg00012.H

static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRBV2 = 0xc0050030ull;

static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRBV2_SRAM_SRBV2_BOOT_VECTOR_WORD2 = 0;
static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRBV2_SRAM_SRBV2_BOOT_VECTOR_WORD2_LEN = 32;
// oci_proc/reg00012.H

#ifndef __PPE_HCODE__
}
}
#include "oci_proc/reg00012.H"
#endif
#endif
