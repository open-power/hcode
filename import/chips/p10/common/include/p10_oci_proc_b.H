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

#include "proc_scomt.H"

#ifndef __p10_oci_proc_b_H_
#define __p10_oci_proc_b_H_


namespace scomt
{
namespace oci_proc
{


static const uint32_t TP_TPBR_PBA_PBAO_BCUE_CTL = 0xc00400a8ull;

static const uint32_t TP_TPBR_PBA_PBAO_BCUE_CTL_OP = 0;
static const uint32_t TP_TPBR_PBA_PBAO_BCUE_CTL_ART = 1;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5 = 0xc0000228ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5_LEN = 32;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4 = 0xc0000410ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5_LEN = 32;
// oci_proc/reg00013.H

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
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_RESERVED12_15 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_RESERVED12_15_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_FIR_TRIGGER = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_SPARE = 17;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_SPARE_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_DATA_SEL = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_DATA_SEL_LEN = 4;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13 = 0xc0010258ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_LEN = 32;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL = 0xc0010168ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_SIB_PIB_IFETCH_PENDING = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_MEM_IFETCH_PENDING = 3;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU = 0xc0010160ull;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG = 0xc0010098ull;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR = 0xc0020100ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR_LEN = 3;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10 = 0xc0020250ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10_LEN = 32;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC = 0xc00200c8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_SIB_PIB_IFETCH_PENDING = 34;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_MEM_IFETCH_PENDING = 35;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR = 0xc0020080ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_OXIXCR_XCR = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_OXIXCR_XCR_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_XICTR_CTR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_XICTR_CTR_LEN = 32;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0 = 0xc0030028ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR_LEN = 27;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE = 44;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE_LEN = 15;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO = 0xc00300a8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR_LEN = 30;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1 = 0xc0030208ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1_LEN = 32;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML = 0xc0030148ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_BUSY = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_IMPRECISE_ERROR_PENDING = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_BYTE_ENABLE = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_BYTE_ENABLE_LEN = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_LINE_MODE = 11;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_ERROR = 17;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_ERROR_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_IFETCH_PENDING = 30;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_DATAOP_PENDING = 31;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU = 0xc0030140ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR_LEN = 32;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB = 0xc00300c0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING = 35;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0 = 0xc0030180ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0_OCB_OCI_GPEXIDBGINF_SRR0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0_OCB_OCI_GPEXIDBGINF_SRR0_LEN = 30;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0 = 0xc0030400ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1_LEN = 32;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR = 0xc0030108ull;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0 = 0xc0064100ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_0_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_1 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_1_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_2 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_2_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_3 = 48;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_3_LEN = 16;
// oci_proc/reg00013.H

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
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST2B = 0xc0063ab0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST2B__ONGOING_2B = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_1_4 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_1_4_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST2B__WRITE_WHILE_BRIDGE_BUSY_ERR_2B = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_6 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST2B__FSM_ERR_2B = 7;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1 = 0xc00610e0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_REGION = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_REGION_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_BASE = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_BASE_LEN = 7;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_RW = 0xc0060560ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR = 0xc0060568ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR = 0xc0060570ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_OCB_OCI_OCCFLG0_OCC_FLAGS = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_OCB_OCI_OCCFLG0_OCC_FLAGS_LEN = 32;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OHTMCR = 0xc0060418ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN_LEN = 11;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC = 23;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0 = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1 = 25;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2 = 26;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3 = 27;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE = 31;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR0B_RW = 0xc0060220ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_CLEAR = 0xc0060228ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_OR = 0xc0060230ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR0B_OCB_OCI_OIRR0B_INTERRUPT_ROUTE_0_B = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR0B_OCB_OCI_OIRR0B_INTERRUPT_ROUTE_0_B_LEN = 32;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR = 0xc0062810ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7 = 0xc0062038ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR = 0xc0062850ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR = 0xc0062890ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR = 0xc00628d0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3 = 0xc00620d8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR = 0xc0062910ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5 = 0xc0062128ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR = 0xc0062950ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR = 0xc0062990ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR_OCB_OCI_OPIT6Q2RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR_OCB_OCI_OPIT6Q2RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1 = 0xc00621c8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR = 0xc00629d0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C12 = 0xc0062260ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_PAYLOAD_LEN = 17;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C25 = 0xc00622c8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_PAYLOAD_LEN = 17;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR = 0xc0062ae0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_PAYLOAD_LEN = 17;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR = 0xc0062a28ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_PAYLOAD_LEN = 17;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C14 = 0xc0062370ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_PAYLOAD_LEN = 17;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C23 = 0xc00623b8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_PAYLOAD_LEN = 17;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C5 = 0xc0062328ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_PAYLOAD_LEN = 17;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR = 0xc0062b28ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_PAYLOAD_LEN = 17;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR = 0xc0062c08ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_0_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_1_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_2 = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_2_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_3 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_3_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_4 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_4_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_5 = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_5_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_6 = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_6_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_7 = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_7_LEN = 4;
// oci_proc/reg00013.H

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
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3RR = 0xc0062c38ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3RR_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3RR_0_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3RR_1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3RR_1_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3RR_2 = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3RR_2_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3RR_3 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3RR_3_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3RR_4 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3RR_4_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3RR_5 = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3RR_5_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3RR_6 = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3RR_6_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3RR_7 = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3RR_7_LEN = 4;
// oci_proc/reg00014.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITDSV = 0xc0062460ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITDSV_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITDSV_0_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITDSV_1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITDSV_1_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITDSV_2 = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITDSV_2_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITDSV_3 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITDSV_3_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITDSV_4 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITDSV_4_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITDSV_5 = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITDSV_5_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITDSV_6 = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITDSV_6_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITDSV_7 = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITDSV_7_LEN = 4;
// oci_proc/reg00014.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OTR1 = 0xc0060808ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OTR1_TIMEOUT_1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OTR1_CONTROL_1 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OTR1_AUTO_RELOAD_1 = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OTR1_SPARE_1 = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OTR1_SPARE_1_LEN = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OTR1_TIMER_1 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OTR1_TIMER_1_LEN = 16;
// oci_proc/reg00014.H

}
}
#include "oci_proc/reg00013.H"
#include "oci_proc/reg00014.H"
#endif
