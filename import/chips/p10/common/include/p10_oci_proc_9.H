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


//>> [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXSR]
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
//<< [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXSR]
// oci_proc/reg00012.H

//>> [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEIVPR]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEIVPR = 0xc0010008ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEIVPR_OCB_OCI_GPEIVPR_IVPR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEIVPR_OCB_OCI_GPEIVPR_IVPR_LEN = 23;
//<< [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEIVPR]
// oci_proc/reg00012.H

//>> [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEMACR]
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
//<< [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEMACR]
// oci_proc/reg00012.H

//>> [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEDBG]
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
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEDBG_EN_MARK_TRACE = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEDBG_EN_EE_TRACE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEDBG_RESERVED14_15 = 14;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEDBG_RESERVED14_15_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEDBG_FIR_TRIGGER = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEDBG_SPARE = 17;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEDBG_SPARE_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEDBG_TRACE_DATA_SEL = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEDBG_TRACE_DATA_SEL_LEN = 4;
//<< [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEDBG]
// oci_proc/reg00012.H

//>> [TP_TPCHIP_OCC_OCI_OCB_ADC_CMD]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CMD = 0xc0064020ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CMD_OCB_OCI_ADC_CMD_HWCTRL_START_SAMPLING = 0;
//<< [TP_TPCHIP_OCC_OCI_OCB_ADC_CMD]
// oci_proc/reg00012.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCBLWCR2]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR2 = 0xc0061140ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR2_LINEAR_WINDOW_ENABLE = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR2_SPARE_0 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR2_SPARE_0_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR2_LINEAR_WINDOW_BAR = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR2_LINEAR_WINDOW_BAR_LEN = 17;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR2_LINEAR_WINDOW_MASK = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR2_LINEAR_WINDOW_MASK_LEN = 12;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCBLWCR2]
// oci_proc/reg00012.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCBLWSR2]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR2 = 0xc0061150ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR2_LINEAR_WINDOW_SCRESP = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR2_LINEAR_WINDOW_SCRESP_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR2_SPARE0 = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR2_SPARE0_LEN = 5;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCBLWSR2]
// oci_proc/reg00012.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCBSLBR1]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLBR1 = 0xc0061080ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLBR1_OCI_REGION = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLBR1_OCI_REGION_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLBR1_START = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLBR1_START_LEN = 26;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCBSLBR1]
// oci_proc/reg00012.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCBSLCS0]
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
//<< [TP_TPCHIP_OCC_OCI_OCB_OCBSLCS0]
// oci_proc/reg00012.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCCS0]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS0_RW = 0xc0060500ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS0_WO_CLEAR = 0xc0060508ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS0_WO_OR = 0xc0060510ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS0_OCB_OCI_OCCS0_OCC_SCRATCH_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS0_OCB_OCI_OCCS0_OCC_SCRATCH_0_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCCS0]
// oci_proc/reg00012.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OITR0]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OITR0_RW = 0xc0060040ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OITR0_WO_CLEAR = 0xc0060048ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OITR0_WO_OR = 0xc0060050ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OITR0_OCB_OCI_OITR0_INTERRUPT_TYPE_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OITR0_OCB_OCI_OITR0_INTERRUPT_TYPE_0_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_OITR0]
// oci_proc/reg00012.H

//>> [TP_TPCHIP_OCC_SRAM_CTL_SRBV2]
static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRBV2 = 0xc0050030ull;

static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRBV2_SRAM_SRBV2_BOOT_VECTOR_WORD2 = 0;
static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRBV2_SRAM_SRBV2_BOOT_VECTOR_WORD2_LEN = 32;
//<< [TP_TPCHIP_OCC_SRAM_CTL_SRBV2]
// oci_proc/reg00012.H

//>> [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXCR]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXCR = 0xc0010080ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXCR_OXIXCR_XCR = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXCR_OXIXCR_XCR_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXCR_XICTR_CTR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXCR_XICTR_CTR_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXCR]
// oci_proc/reg00012.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SST0B]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST0B = 0xc00638b0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST0B_ONGOING_0B = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST0B_ST0B_RESERVED_1_4 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST0B_ST0B_RESERVED_1_4_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST0B_WRITE_WHILE_BRIDGE_BUSY_ERR_0B = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST0B_ST0B_RESERVED_6 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST0B_FSM_ERR_0B = 7;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SST0B]
// oci_proc/reg00012.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "oci_proc/reg00012.H"
#endif
#endif
