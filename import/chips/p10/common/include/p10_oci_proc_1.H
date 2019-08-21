/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_oci_proc_1.H $            */
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

#ifndef __p10_oci_proc_1_H_
#define __p10_oci_proc_1_H_


#ifndef __PPE_HCODE__
namespace scomt
{
namespace oci_proc
{
#endif


static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDTX = 0xc0040180ull;

static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_SCOPE = 0;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_SCOPE_LEN = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_QID = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_TYPE = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_RESERVATION = 5;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_6_7 = 6;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_6_7_LEN = 2;
// ERROR Duplicate Dial         static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_6_7 = 6;
// ERROR Duplicate Dial         static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_6_7_LEN = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_GROUPID = 8;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_GROUPID_LEN = 4;
// ERROR Duplicate Dial         static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_GROUPID = 8;
// ERROR Duplicate Dial         static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_GROUPID_LEN = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CHIPID = 12;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CHIPID_LEN = 3;
// ERROR Duplicate Dial         static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CHIPID = 12;
// ERROR Duplicate Dial         static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CHIPID_LEN = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_15 = 15;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDTX_VG_TARGE = 16;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDTX_VG_TARGE_LEN = 16;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_STOP = 59;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CNT = 60;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CNT_LEN = 4;
// ERROR Duplicate Dial         static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CNT = 60;
// ERROR Duplicate Dial         static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CNT_LEN = 4;
// oci_proc/reg00002.H

static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDTX = 0xc0040100ull;

static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_SCOPE = 0;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_SCOPE_LEN = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_QID = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_TYPE = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_RESERVATION = 5;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_6_7 = 6;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_6_7_LEN = 2;
// ERROR Duplicate Dial         static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_6_7 = 6;
// ERROR Duplicate Dial         static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_6_7_LEN = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_GROUPID = 8;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_GROUPID_LEN = 4;
// ERROR Duplicate Dial         static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_GROUPID = 8;
// ERROR Duplicate Dial         static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_GROUPID_LEN = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CHIPID = 12;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CHIPID_LEN = 3;
// ERROR Duplicate Dial         static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CHIPID = 12;
// ERROR Duplicate Dial         static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CHIPID_LEN = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_15 = 15;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDTX_VG_TARGE = 16;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDTX_VG_TARGE_LEN = 16;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_STOP = 59;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CNT = 60;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CNT_LEN = 4;
// ERROR Duplicate Dial         static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CNT = 60;
// ERROR Duplicate Dial         static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CNT_LEN = 4;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6 = 0xc0000230ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6_LEN = 32;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10 = 0xc0010250ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10_LEN = 32;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM = 0xc00100b8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ADDR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ADDR_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_R_NW = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BUSY = 33;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING = 34;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BYTE_ENABLE = 35;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BYTE_ENABLE_LEN = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_LINE_MODE = 43;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ERROR = 49;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ERROR_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IFETCH_PENDING = 62;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_DATAOP_PENDING = 63;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR = 0xc00100a0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_IR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_IR_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_EDR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_EDR_LEN = 32;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13 = 0xc0020258ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_LEN = 32;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9 = 0xc0020248ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9_LEN = 32;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL = 0xc0020168ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING = 3;
// ERROR Duplicate Dial         static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1 = 4;
// ERROR Duplicate Dial         static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1_LEN = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2 = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2_LEN = 3;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU = 0xc0020160ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU_ICACHE_INFO_UPPER = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU_ICACHE_INFO_UPPER_LEN = 27;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8 = 0xc0020420ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_8 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_8_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_9 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_9_LEN = 32;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2 = 0xc0030210ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2_OCB_OCI_GPEXIVDR2_GPR2 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2_OCB_OCI_GPEXIVDR2_GPR2_LEN = 32;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR = 0xc0030120ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR_LEN = 32;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX = 0xc0030428ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_0_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_3 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_3_LEN = 32;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3 = 0xc0064118ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_2 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_2_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_3 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_3_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_4 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_4_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_5 = 48;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_5_LEN = 16;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11 = 0xc0063910ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_A = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_B = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_2_3 = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_2_3_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_CLOCK_DIVIDER_1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_CLOCK_DIVIDER_1_LEN = 10;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2SCTRL11_RESERVED_14_16 = 14;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2SCTRL11_RESERVED_14_16_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_NR_OF_FRAMES_1 = 17;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_18_19 = 18;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_18_19_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_SLAVE_DATA_SAMPLE_DELAY = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_SLAVE_DATA_SAMPLE_DELAY_LEN = 7;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST2A = 0xc0063a30ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ONGOING_2A = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_1_4 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_1_4_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST2A_WRITE_WHILE_BRIDGE_BUSY_ERR_2A = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_6 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST2A_FSM_ERR_2A = 7;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2 = 0xc0061160ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_REGION = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_REGION_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_BASE = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_BASE_LEN = 7;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_RW = 0xc00605a8ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_CLEAR = 0xc00605b0ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_OR = 0xc00605b8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_OCB_OCI_OCCFLG3_OCC_FLAGS = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_OCB_OCI_OCCFLG3_OCC_FLAGS_LEN = 32;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR0A_RW = 0xc0060200ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_CLEAR = 0xc0060208ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_OR = 0xc0060210ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR0A_OCB_OCI_OIRR0A_INTERRUPT_ROUTE_0_A = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR0A_OCB_OCI_OIRR0A_INTERRUPT_ROUTE_0_A_LEN = 32;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ONISR1 = 0xc0060380ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ONISR1_INTERRUPT_NONCRIT_STATUS_1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ONISR1_INTERRUPT_NONCRIT_STATUS_1_LEN = 32;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4 = 0xc0062020ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4_OCB_OCI_OPIT0Q4RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4_OCB_OCI_OPIT0Q4RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO = 0xc00630c0ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR = 0xc00630c8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_1 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_2 = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_3 = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_4 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_5 = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_6 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_7 = 7;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0 = 0xc00620c0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6 = 0xc0062130ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6_OCB_OCI_OPIT4Q6RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6_OCB_OCI_OPIT4Q6RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2 = 0xc00621d0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C11 = 0xc0062258ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_PAYLOAD_LEN = 17;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR = 0xc0062a70ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_PAYLOAD_LEN = 17;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C26 = 0xc00622d0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_PAYLOAD_LEN = 17;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR = 0xc0062ad0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_PAYLOAD_LEN = 17;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR = 0xc0062af8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_PAYLOAD_LEN = 17;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C8 = 0xc0062240ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_PAYLOAD_LEN = 17;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR = 0xc0062b68ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_PAYLOAD_LEN = 17;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C17 = 0xc0062388ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_PAYLOAD_LEN = 17;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C20 = 0xc00623a0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_PAYLOAD_LEN = 17;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR = 0xc0062ba8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_PAYLOAD_LEN = 17;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C6 = 0xc0062330ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_PAYLOAD_LEN = 17;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0 = 0xc0062400ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0_0_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0_1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0_1_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0_2 = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0_2_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0_3 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0_3_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0_4 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0_4_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0_5 = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0_5_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0_6 = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0_6_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0_7 = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0_7_LEN = 4;
// oci_proc/reg00002.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO = 0xc0063440ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART = 0xc0063448ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_1 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_2 = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_3 = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_4 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_5 = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_6 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_7 = 7;
// oci_proc/reg00002.H

#ifndef __PPE_HCODE__
}
}
#include "oci_proc/reg00002.H"
#endif
#endif
