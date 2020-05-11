/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_oci_proc_b.H $            */
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

#ifndef __p10_oci_proc_b_H_
#define __p10_oci_proc_b_H_


#ifndef __PPE_HCODE__
namespace scomt
{
namespace oci_proc
{
#endif


//>> [TP_TPBR_PBA_PBAO_BCUE_CTL]
static const uint32_t TP_TPBR_PBA_PBAO_BCUE_CTL = 0xc00400a8ull;

static const uint32_t TP_TPBR_PBA_PBAO_BCUE_CTL_OP = 0;
static const uint32_t TP_TPBR_PBA_PBAO_BCUE_CTL_ART = 1;
//<< [TP_TPBR_PBA_PBAO_BCUE_CTL]
// oci_proc/reg00014.H

//>> [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG = 0xc0010010ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_DBG = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_XSTOP = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_TRIG = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_COVERAGE_MODE = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_INTR_ADDR = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_EXTRA = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_STALL = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_WAIT_CYCLES = 7;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_FULL_SPEED = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_DIS_FLOW_CHANGE = 9;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_MODE_SEL = 10;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_MODE_SEL_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_MARK_TRACE = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_EE_TRACE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_RESERVED14_15 = 14;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_RESERVED14_15_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_FIR_TRIGGER = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_SPARE = 17;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_SPARE_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_DATA_SEL = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_DATA_SEL_LEN = 4;
//<< [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG]
// oci_proc/reg00014.H

//>> [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL = 0xc0010168ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING = 3;
// ERROR Duplicate Dial         static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1 = 4;
// ERROR Duplicate Dial         static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1_LEN = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2 = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2_LEN = 3;
//<< [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL]
// oci_proc/reg00014.H

//>> [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU = 0xc0010160ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU_ICACHE_INFO_UPPER = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU_ICACHE_INFO_UPPER_LEN = 27;
//<< [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU]
// oci_proc/reg00014.H

//>> [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG = 0xc0010098ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HS = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HC = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HC_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HCP = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RIP = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIP = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRAP = 7;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_IAC = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIB = 9;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIB_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RDAC = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WDAC = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WS = 14;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRH = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SMS = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SMS_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_LP = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_EP = 21;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_PTR = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_ST = 25;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MFE = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MCS = 29;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MCS_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_SPRG0 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_SPRG0_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG]
// oci_proc/reg00014.H

//>> [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR = 0xc0020080ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_OXIXCR_XCR = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_OXIXCR_XCR_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_XICTR_CTR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_XICTR_CTR_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR]
// oci_proc/reg00014.H

//>> [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO = 0xc00300a8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HS = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HC = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HC_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HCP = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RIP = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIP = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRAP = 7;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_IAC = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIB = 9;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIB_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RDAC = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WDAC = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WS = 14;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRH = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SMS = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SMS_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_LP = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_EP = 21;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_PTR = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_ST = 25;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MFE = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MCS = 29;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MCS_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR_LEN = 30;
//<< [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO]
// oci_proc/reg00014.H

//>> [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0 = 0xc0030180ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0_OCB_OCI_GPEXIDBGINF_SRR0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0_OCB_OCI_GPEXIDBGINF_SRR0_LEN = 30;
//<< [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0]
// oci_proc/reg00014.H

//>> [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR = 0xc0030108ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HS = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HC = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HC_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HCP = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RIP = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIP = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRAP = 7;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_IAC = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIB = 9;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIB_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RDAC = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WDAC = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WS = 14;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRH = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SMS = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SMS_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_LP = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_EP = 21;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_PTR = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_ST = 25;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MFE = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MCS = 29;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MCS_LEN = 3;
//<< [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR]
// oci_proc/reg00014.H

//>> [TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0 = 0xc0064100ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_0_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_1 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_1_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_2 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_2_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_3 = 48;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_3_LEN = 16;
//<< [TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0]
// oci_proc/reg00014.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1 = 0xc00610e0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_REGION = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_REGION_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_BASE = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_BASE_LEN = 7;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1]
// oci_proc/reg00014.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCCFLG0]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_RW = 0xc0060560ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR = 0xc0060568ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR = 0xc0060570ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_OCB_OCI_OCCFLG0_OCC_FLAGS = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_OCB_OCI_OCCFLG0_OCC_FLAGS_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCCFLG0]
// oci_proc/reg00014.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OIRR0B]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR0B_RW = 0xc0060220ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_CLEAR = 0xc0060228ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_OR = 0xc0060230ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR0B_OCB_OCI_OIRR0B_INTERRUPT_ROUTE_0_B = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR0B_OCB_OCI_OIRR0B_INTERRUPT_ROUTE_0_B_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_OIRR0B]
// oci_proc/reg00014.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OTR1]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OTR1 = 0xc0060808ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OTR1_TIMEOUT_1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OTR1_CONTROL_1 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OTR1_AUTO_RELOAD_1 = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OTR1_SPARE_1 = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OTR1_SPARE_1_LEN = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OTR1_TIMER_1 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OTR1_TIMER_1_LEN = 16;
//<< [TP_TPCHIP_OCC_OCI_OCB_OTR1]
// oci_proc/reg00015.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12 = 0xc0063a10ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_A = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_B = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_2_3 = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_2_3_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_CLOCK_DIVIDER_2 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_CLOCK_DIVIDER_2_LEN = 10;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2SCTRL12_RESERVED_14_16 = 14;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2SCTRL12_RESERVED_14_16_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_NR_OF_FRAMES_2 = 17;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_18_19 = 18;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_18_19_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_SLAVE_DATA_SAMPLE_DELAY = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_SLAVE_DATA_SAMPLE_DELAY_LEN = 7;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12]
// oci_proc/reg00014.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SST2B]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST2B = 0xc0063ab0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ONGOING_2B = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_1_4 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_1_4_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST2B_WRITE_WHILE_BRIDGE_BUSY_ERR_2B = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_6 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST2B_FSM_ERR_2B = 7;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SST2B]
// oci_proc/reg00014.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OPITASV3]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3 = 0xc0062418ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3_0_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3_1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3_1_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3_2 = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3_2_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3_3 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3_3_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3_4 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3_4_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3_5 = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3_5_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3_6 = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3_6_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3_7 = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3_7_LEN = 4;
//<< [TP_TPCHIP_OCC_OCI_OCB_OPITASV3]
// oci_proc/reg00014.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "oci_proc/reg00014.H"
#include "oci_proc/reg00015.H"
#endif
#endif
