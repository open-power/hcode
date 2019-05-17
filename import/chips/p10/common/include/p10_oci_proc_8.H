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

#include "proc_scomt.H"

#ifndef __p10_oci_proc_8_H_
#define __p10_oci_proc_8_H_


namespace scomt
{
namespace oci_proc
{


static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGPRO = 0xc00000a8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR_LEN = 30;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR2 = 0xc0000210ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR2_OCB_OCI_GPEXIVDR2_GPR2 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR2_OCB_OCI_GPEXIVDR2_GPR2_LEN = 32;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMGA = 0xc0000090ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMGA_OCB_OCI_GPEXIRAMEDR_IR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMGA_OCB_OCI_GPEXIRAMEDR_IR_LEN = 32;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX = 0xc0000428ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_0_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_3 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDRX_3_LEN = 32;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXCR = 0xc0000080ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXCR_OXIXCR_XCR = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXCR_OXIXCR_XCR_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXCR_XICTR_CTR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIXCR_XICTR_CTR_LEN = 32;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0 = 0xc0010028ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_BAR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_BAR_LEN = 27;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_SIZE = 44;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR0_SIZE_LEN = 15;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9 = 0xc0010248ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9_LEN = 32;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB = 0xc00100c0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING = 35;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8 = 0xc0010420ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_8 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_8_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_9 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR8_9_LEN = 32;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIXSR = 0xc0010108ull;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMDBG = 0xc0020098ull;
// oci_proc/reg00010.H

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
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEDBG_RESERVED12_15 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEDBG_RESERVED12_15_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEDBG_FIR_TRIGGER = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEDBG_SPARE = 17;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEDBG_SPARE_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEDBG_TRACE_DATA_SEL = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEDBG_TRACE_DATA_SEL_LEN = 4;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6 = 0xc0030230ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6_LEN = 32;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA7 = 0xc0064138ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA7_28 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA7_28_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA7_29 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA7_29_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA7_30 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA7_30_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA7_31 = 48;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA7_31_LEN = 16;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DORP2 = 0xc0060c28ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DORP2_QUOTIENT = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DORP2_QUOTIENT_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DORP2_REMAINDER = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DORP2_REMAINDER_LEN = 32;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL22 = 0xc0063a18ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL22_OCB_OCI_O2SCTRL22_O2S_INTER_FRAME_DELAY_2 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL22_OCB_OCI_O2SCTRL22_O2S_INTER_FRAME_DELAY_2_LEN = 16;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST1B = 0xc00639b0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST1B__ONGOING_1B = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST1B_ST1B_RESERVED_1_4 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST1B_ST1B_RESERVED_1_4_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST1B__WRITE_WHILE_BRIDGE_BUSY_ERR_1B = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST1B_ST1B_RESERVED_6 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST1B__FSM_ERR_1B = 7;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHBR0 = 0xc0061018ull;
// oci_proc/reg00010.H

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
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHI2 = 0xc0061128ull;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLI0 = 0xc0061010ull;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_RW = 0xc0060608ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_CLEAR = 0xc0060610ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_WO_OR = 0xc0060618ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_OCB_OCI_OCCFLG7_OCC_FLAGS = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG7_OCB_OCI_OCCFLG7_OCC_FLAGS_LEN = 32;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0 = 0xc0062000ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4 = 0xc00620e0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4_OCB_OCI_OPIT3Q4RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q4_OCB_OCI_OPIT3Q4RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_RO = 0xc0063100ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_WO_CLEAR = 0xc0063108ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_1 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_2 = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_3 = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_4 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_5 = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_6 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4PRA_7 = 7;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2 = 0xc0062110ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6 = 0xc00621f0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6_OCB_OCI_OPIT7Q6RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6_OCB_OCI_OPIT7Q6RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C15 = 0xc0062278ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C15_PAYLOAD_LEN = 17;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR = 0xc0062a88ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C17RR_PAYLOAD_LEN = 17;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C22 = 0xc00622b0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C22_PAYLOAD_LEN = 17;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR = 0xc0062ac8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C25RR_PAYLOAD_LEN = 17;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR = 0xc0062a40ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C8RR_PAYLOAD_LEN = 17;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR = 0xc0062b50ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C10RR_PAYLOAD_LEN = 17;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C13 = 0xc0062368ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C13_PAYLOAD_LEN = 17;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C2 = 0xc0062310ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C2_PAYLOAD_LEN = 17;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR = 0xc0062bb0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C22RR_PAYLOAD_LEN = 17;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C24 = 0xc00623c0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C24_PAYLOAD_LEN = 17;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR = 0xc0062b40ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C8RR_PAYLOAD_LEN = 17;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO = 0xc0063460ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_RO_CLRPART = 0xc0063468ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_1 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_2 = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_3 = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_4 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_5 = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_6 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITDPRC_7 = 7;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OTBR = 0xc00604f8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OTBR_OCB_OCI_OTBR_TIMEBASE = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OTBR_OCB_OCI_OTBR_TIMEBASE_LEN = 32;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT = 0xc0063c10ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_UE = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_ECC_CE = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RESERVED_2_3 = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RESERVED_2_3_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ONGOING = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ONGOING = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECTED = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_ACK_DETECTED = 7;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECT_COUNT = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_PING_DETECT_COUNT_LEN = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ECC = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_TX_ECC_LEN = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ECC = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_INTERCHIP_RX_ECC_LEN = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_SEND_STATE_MACHINE = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_SEND_STATE_MACHINE_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RECV_STATE_MACHINE = 36;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_RECV_STATE_MACHINE_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_MST_STATE_MACHINE = 40;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_MST_STATE_MACHINE_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_SLV_STATE_MACHINE = 44;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICSTAT_PING_SLV_STATE_MACHINE_LEN = 4;
// oci_proc/reg00010.H

}
}
#include "oci_proc/reg00010.H"
#endif
