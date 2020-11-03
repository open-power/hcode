/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_oci_proc_8.H $            */
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

#ifndef __p10_oci_proc_8_H_
#define __p10_oci_proc_8_H_


#ifndef __PPE_HCODE__
namespace scomt
{
namespace oci_proc
{
#endif


//>> [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGPRO]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGPRO = 0xc00000a8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGPRO_XSR_HS = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGPRO_XSR_HC = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGPRO_XSR_HC_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGPRO_XSR_HCP = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGPRO_XSR_RIP = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGPRO_XSR_SIP = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGPRO_XSR_TRAP = 7;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGPRO_XSR_IAC = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGPRO_XSR_SIB = 9;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGPRO_XSR_SIB_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGPRO_XSR_RDAC = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGPRO_XSR_WDAC = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGPRO_XSR_WS = 14;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGPRO_XSR_TRH = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGPRO_XSR_SMS = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGPRO_XSR_SMS_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGPRO_XSR_LP = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGPRO_XSR_EP = 21;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGPRO_XSR_PTR = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGPRO_XSR_ST = 25;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGPRO_XSR_MFE = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGPRO_XSR_MCS = 29;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGPRO_XSR_MCS_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR_LEN = 30;
//<< [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGPRO]
// oci_proc/reg00011.H

//>> [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXCR]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXCR = 0xc0000080ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXCR_OXIXCR_XCR = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXCR_OXIXCR_XCR_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXCR_XICTR_CTR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXCR_XICTR_CTR_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXCR]
// oci_proc/reg00011.H

//>> [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXSR]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXSR = 0xc0010108ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXSR_HS = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXSR_HC = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXSR_HC_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXSR_HCP = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXSR_RIP = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXSR_SIP = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXSR_TRAP = 7;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXSR_IAC = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXSR_SIB = 9;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXSR_SIB_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXSR_RDAC = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXSR_WDAC = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXSR_WS = 14;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXSR_TRH = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXSR_SMS = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXSR_SMS_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXSR_LP = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXSR_EP = 21;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXSR_PTR = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXSR_ST = 25;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXSR_MFE = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXSR_MCS = 29;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXSR_MCS_LEN = 3;
//<< [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXSR]
// oci_proc/reg00011.H

//>> [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMDBG]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMDBG = 0xc0020098ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMDBG_XSR_HS = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMDBG_XSR_HC = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMDBG_XSR_HC_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMDBG_XSR_HCP = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMDBG_XSR_RIP = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMDBG_XSR_SIP = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMDBG_XSR_TRAP = 7;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMDBG_XSR_IAC = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMDBG_XSR_SIB = 9;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMDBG_XSR_SIB_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMDBG_XSR_RDAC = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMDBG_XSR_WDAC = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMDBG_XSR_WS = 14;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMDBG_XSR_TRH = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMDBG_XSR_SMS = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMDBG_XSR_SMS_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMDBG_XSR_LP = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMDBG_XSR_EP = 21;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMDBG_XSR_PTR = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMDBG_XSR_ST = 25;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMDBG_XSR_MFE = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMDBG_XSR_MCS = 29;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMDBG_XSR_MCS_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMDBG_SPRG0 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMDBG_SPRG0_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMDBG]
// oci_proc/reg00011.H

//>> [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEDBG]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEDBG = 0xc0030010ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEDBG_EN_DBG = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEDBG_HALT_ON_XSTOP = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEDBG_HALT_ON_TRIG = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEDBG_EN_COVERAGE_MODE = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEDBG_EN_INTR_ADDR = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEDBG_EN_TRACE_EXTRA = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEDBG_EN_TRACE_STALL = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEDBG_EN_WAIT_CYCLES = 7;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEDBG_EN_FULL_SPEED = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEDBG_DIS_FLOW_CHANGE = 9;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEDBG_TRACE_MODE_SEL = 10;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEDBG_TRACE_MODE_SEL_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEDBG_EN_MARK_TRACE = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEDBG_EN_EE_TRACE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEDBG_RESERVED14_15 = 14;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEDBG_RESERVED14_15_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEDBG_FIR_TRIGGER = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEDBG_SPARE = 17;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEDBG_SPARE_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEDBG_TRACE_DATA_SEL = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEDBG_TRACE_DATA_SEL_LEN = 4;
//<< [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEDBG]
// oci_proc/reg00011.H

//>> [TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA7]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA7 = 0xc0064138ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA7_28 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA7_28_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA7_29 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA7_29_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA7_30 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA7_30_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA7_31 = 48;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA7_31_LEN = 16;
//<< [TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA7]
// oci_proc/reg00011.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SCTRL22]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL22 = 0xc0063a18ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL22_OCB_OCI_O2SCTRL22_O2S_INTER_FRAME_DELAY_2 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL22_OCB_OCI_O2SCTRL22_O2S_INTER_FRAME_DELAY_2_LEN = 16;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SCTRL22]
// oci_proc/reg00011.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SST1B]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST1B = 0xc00639b0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST1B_ONGOING_1B = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST1B_ST1B_RESERVED_1_4 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST1B_ST1B_RESERVED_1_4_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST1B_WRITE_WHILE_BRIDGE_BUSY_ERR_1B = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST1B_ST1B_RESERVED_6 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST1B_FSM_ERR_1B = 7;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SST1B]
// oci_proc/reg00011.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCBSHBR0]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHBR0 = 0xc0061018ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHBR0_OCI_REGION = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHBR0_OCI_REGION_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHBR0_START = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHBR0_START_LEN = 26;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCBSHBR0]
// oci_proc/reg00011.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCBSHCS1]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS1 = 0xc00610a0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS1_PUSH_FULL = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS1_PUSH_EMPTY = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS1_SPARE = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS1_SPARE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS1_PUSH_INTR_ACTION_0_1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS1_PUSH_INTR_ACTION_0_1_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS1_PUSH_LENGTH = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS1_PUSH_LENGTH_LEN = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS1_PUSH_WRITE_PTR = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS1_PUSH_WRITE_PTR_LEN = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS1_PUSH_READ_PTR = 21;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS1_PUSH_READ_PTR_LEN = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS1_PUSH_ENABLE = 31;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCBSHCS1]
// oci_proc/reg00011.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OTBR]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OTBR = 0xc00604f8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OTBR_OCB_OCI_OTBR_TIMEBASE = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OTBR_OCB_OCI_OTBR_TIMEBASE_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_OTBR]
// oci_proc/reg00011.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "oci_proc/reg00011.H"
#endif
#endif
