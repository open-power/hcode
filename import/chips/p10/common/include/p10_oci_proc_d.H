/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_oci_proc_d.H $            */
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

#ifndef __p10_oci_proc_d_H_
#define __p10_oci_proc_d_H_


#ifndef __PPE_HCODE__
namespace scomt
{
namespace oci_proc
{
#endif


//>> [TP_TPBR_PBA_PBAO_BCUE_SET]
static const uint32_t TP_TPBR_PBA_PBAO_BCUE_SET = 0xc00400b0ull;

static const uint32_t TP_TPBR_PBA_PBAO_BCUE_SET_RESERVED_0_1 = 0;
static const uint32_t TP_TPBR_PBA_PBAO_BCUE_SET_RESERVED_0_1_LEN = 2;
static const uint32_t TP_TPBR_PBA_PBAO_BCUE_SET_COPY_LENGTH = 2;
static const uint32_t TP_TPBR_PBA_PBAO_BCUE_SET_COPY_LENGTH_LEN = 6;
//<< [TP_TPBR_PBA_PBAO_BCUE_SET]
// oci_proc/reg00017.H

//>> [TP_TPBR_PBA_PBAO_PBAMODE]
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE = 0xc0040000ull;

static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_0_3 = 0;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_0_3_LEN = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_DIS_REARB = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_DIS_MSTID_MATCH_PREF_INV = 5;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_RDPIPE = 6;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_WRPIPE = 7;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_EN_MARKER_ACK = 8;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_9 = 9;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_EN_SECOND_WRBUF = 10;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_DIS_REREQUEST_TO = 11;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_12_13 = 12;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_12_13_LEN = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_14_15 = 14;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_14_15_LEN = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_PBA_REGION = 16;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_PBA_REGION_LEN = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_OCI_MARKER_SPACE = 18;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_OCI_MARKER_SPACE_LEN = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_BCDE_OCITRANS = 21;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_BCDE_OCITRANS_LEN = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_BCUE_OCITRANS = 23;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_BCUE_OCITRANS_LEN = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_RD_PIPE = 25;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_WR_PIPE = 26;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_EN_SLV_FAIRNESS = 27;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_EN_EVENT_COUNT = 28;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_29 = 29;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_SLV_EVENT_MUX = 30;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_SLV_EVENT_MUX_LEN = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_ENABLE_DEBUG_BUS = 32;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_PB_NOT_OCI = 33;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_OCI_MODE = 34;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_OCI_MODE_LEN = 5;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_39 = 39;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_FAIRNESS_MASK = 40;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_FAIRNESS_MASK_LEN = 5;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_REREQ_HANG_DIV = 45;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_REREQ_HANG_DIV_LEN = 5;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_50_63 = 50;
static const uint32_t TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_50_63_LEN = 14;
//<< [TP_TPBR_PBA_PBAO_PBAMODE]
// oci_proc/reg00017.H

//>> [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL = 0xc0000168ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING = 3;
// ERROR Duplicate Dial         static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1 = 4;
// ERROR Duplicate Dial         static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1_LEN = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2 = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2_LEN = 3;
//<< [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL]
// oci_proc/reg00017.H

//>> [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU = 0xc0000160ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU_ICACHE_INFO_UPPER = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU_ICACHE_INFO_UPPER_LEN = 27;
//<< [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU]
// oci_proc/reg00017.H

//>> [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR = 0xc0020008ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR_OCB_OCI_GPEIVPR_IVPR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR_OCB_OCI_GPEIVPR_IVPR_LEN = 23;
//<< [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR]
// oci_proc/reg00017.H

//>> [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR = 0xc0020020ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_LOW_PRIORITY = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_LOW_PRIORITY_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_HIGH_PRIORITY = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_HIGH_PRIORITY_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_LOW_PRIORITY = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_LOW_PRIORITY_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_HIGH_PRIORITY = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_HIGH_PRIORITY_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_LOW_PRIORITY = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_LOW_PRIORITY_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_HIGH_PRIORITY = 10;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_HIGH_PRIORITY_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_WRITE_PROTECT_ENABLE = 12;
//<< [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR]
// oci_proc/reg00017.H

//>> [TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1 = 0xc0064108ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_4 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_4_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_5 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_5_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_6 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_6_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_7 = 48;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_7_LEN = 16;
//<< [TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1]
// oci_proc/reg00017.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0 = 0xc0061060ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_REGION = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_REGION_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_BASE = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_BASE_LEN = 7;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0]
// oci_proc/reg00017.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCCFLG1]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_RW = 0xc0060578ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_CLEAR = 0xc0060580ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_OR = 0xc0060588ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_OCB_OCI_OCCFLG1_OCC_FLAGS = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_OCB_OCI_OCCFLG1_OCC_FLAGS_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCCFLG1]
// oci_proc/reg00017.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OIRR0C]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR0C_RW = 0xc0060240ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_CLEAR = 0xc0060248ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_OR = 0xc0060250ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR0C_OCB_OCI_OIRR0C_INTERRUPT_ROUTE_0_C = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR0C_OCB_OCI_OIRR0C_INTERRUPT_ROUTE_0_C_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_OIRR0C]
// oci_proc/reg00017.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OTR0]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OTR0 = 0xc0060800ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMEOUT_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OTR0_CONTROL_0 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OTR0_AUTO_RELOAD_0 = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OTR0_SPARE_0 = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OTR0_SPARE_0_LEN = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMER_0 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMER_0_LEN = 16;
//<< [TP_TPCHIP_OCC_OCI_OCB_OTR0]
// oci_proc/reg00017.H

//>> [TP_TPCHIP_OCC_OCI_OCB_P2S_100NS]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_100NS = 0xc0064140ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_100NS_OCB_OCI_P2S_100NS = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_100NS_OCB_OCI_P2S_100NS_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_P2S_100NS]
// oci_proc/reg00017.H

//>> [TP_TPCHIP_OCC_OCI_OCB_P2S_CMD]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CMD = 0xc0064220ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CMD_OCB_OCI_P2S_CMD_START_COMMAND = 0;
//<< [TP_TPCHIP_OCC_OCI_OCB_P2S_CMD]
// oci_proc/reg00017.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SRD1B]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD1B = 0xc00639c8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD1B_OCB_OCI_O2SRD1B_O2S_RDATA_1B = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD1B_OCB_OCI_O2SRD1B_O2S_RDATA_1B_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SRD1B]
// oci_proc/reg00017.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OPITASV2]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2 = 0xc0062410ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2_0_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2_1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2_1_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2_2 = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2_2_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2_3 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2_3_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2_4 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2_4_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2_5 = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2_5_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2_6 = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2_6_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2_7 = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2_7_LEN = 4;
//<< [TP_TPCHIP_OCC_OCI_OCB_OPITASV2]
// oci_proc/reg00017.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "oci_proc/reg00017.H"
#endif
#endif
