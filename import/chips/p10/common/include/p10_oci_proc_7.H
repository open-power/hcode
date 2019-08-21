/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_oci_proc_7.H $            */
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

#ifndef __p10_oci_proc_7_H_
#define __p10_oci_proc_7_H_


#ifndef __PPE_HCODE__
namespace scomt
{
namespace oci_proc
{
#endif


static const uint32_t TP_TPBR_PBA_PBAO_BCDE_PBADR = 0xc0040098ull;

static const uint32_t TP_TPBR_PBA_PBAO_BCDE_PBADR_RESERVED_0_1 = 0;
static const uint32_t TP_TPBR_PBA_PBAO_BCDE_PBADR_RESERVED_0_1_LEN = 2;
static const uint32_t TP_TPBR_PBA_PBAO_BCDE_PBADR_PB_OFFSET = 2;
static const uint32_t TP_TPBR_PBA_PBAO_BCDE_PBADR_PB_OFFSET_LEN = 23;
static const uint32_t TP_TPBR_PBA_PBAO_BCDE_PBADR_RESERVED_25_26 = 25;
static const uint32_t TP_TPBR_PBA_PBAO_BCDE_PBADR_RESERVED_25_26_LEN = 2;
static const uint32_t TP_TPBR_PBA_PBAO_BCDE_PBADR_EXTADDR = 27;
static const uint32_t TP_TPBR_PBA_PBAO_BCDE_PBADR_EXTADDR_LEN = 14;
static const uint32_t TP_TPBR_PBA_PBAO_BCDE_PBADR_RESERVED_41_42 = 41;
static const uint32_t TP_TPBR_PBA_PBAO_BCDE_PBADR_RESERVED_41_42_LEN = 2;
// oci_proc/reg00010.H

static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDSTAT = 0xc0040190ull;

static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDSTAT_IN_PROGRESS = 0;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDSTAT_ERROR = 1;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDSTAT_PHASE_STATUS = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDSTAT_PHASE_STATUS_LEN = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDSTAT_CNT_STATUS = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDSTAT_CNT_STATUS_LEN = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDSTAT_RETRY_COUNT = 8;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISNDSTAT_RETRY_COUNT_LEN = 8;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCAC = 0xc00000d0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCAC_TAG_ADDR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCAC_TAG_ADDR_LEN = 27;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCAC_ERR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCAC_POPULATE_PENDING = 35;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCAC_VALID = 36;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCAC_VALID_LEN = 4;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR10 = 0xc0000250ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10_LEN = 32;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR7 = 0xc0000238ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR7_OCB_OCI_GPEXIVDR6_GPR7 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR7_OCB_OCI_GPEXIVDR6_GPR7_LEN = 32;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIB = 0xc00000b0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIB_ADDR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIB_ADDR_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIB_R_NW = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIB_BUSY = 33;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING = 34;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIB_RSP_INFO = 49;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIB_RSP_INFO_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIB_RESET_PENDING = 61;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIB_IFETCH_PENDING = 62;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIB_DATAOP_PENDING = 63;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR6 = 0xc0000418ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR6_6 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR6_6_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR6_7 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR6_7_LEN = 32;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPETSEL = 0xc0010000ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPETSEL_WATCHDOG_SEL = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPETSEL_WATCHDOG_SEL_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPETSEL_FIT_SEL = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPETSEL_FIT_SEL_LEN = 4;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGBL = 0xc0010158ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGBL_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING = 3;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGBU = 0xc0010150ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGBU_SGB_INFO_UPPER = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGBU_SGB_INFO_UPPER_LEN = 32;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR8 = 0xc0020240ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR8_OCB_OCI_GPEXIVDR8_GPR8 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR8_OCB_OCI_GPEXIVDR8_GPR8_LEN = 32;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXILR = 0xc0020188ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXILR_OCB_OCI_GPEXIDBGINF_LR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXILR_OCB_OCI_GPEXIDBGINF_LR_LEN = 32;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR13 = 0xc0030258ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_LEN = 32;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR3 = 0xc0030218ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR3_OCB_OCI_GPEXIVDR2_GPR3 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR3_OCB_OCI_GPEXIVDR2_GPR3_LEN = 32;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICACL = 0xc0030168ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING = 3;
// ERROR Duplicate Dial         static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1 = 4;
// ERROR Duplicate Dial         static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1_LEN = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2 = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2_LEN = 3;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICACU = 0xc0030160ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICACU_ICACHE_INFO_UPPER = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICACU_ICACHE_INFO_UPPER_LEN = 27;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR2 = 0xc0030408ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR2_2 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR2_2_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR2_3 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR2_3_LEN = 32;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA2 = 0xc0064110ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA2_8 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA2_8_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA2_9 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA2_9_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA2_10 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA2_10_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA2_11 = 48;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA2_11_LEN = 16;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL10 = 0xc0063810ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL10_O2S_BRIDGE_ENABLE_0_A = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL10_O2S_BRIDGE_ENABLE_0_B = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL10_RESERVED_2_3 = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL10_RESERVED_2_3_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL10_O2S_CLOCK_DIVIDER_0 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL10_O2S_CLOCK_DIVIDER_0_LEN = 10;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL10_O2SCTRL10_RESERVED_14_16 = 14;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL10_O2SCTRL10_RESERVED_14_16_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL10_O2S_NR_OF_FRAMES_0 = 17;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL10_RESERVED_18_19 = 18;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL10_RESERVED_18_19_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL10_SLAVE_DATA_SAMPLE_DELAY = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL10_SLAVE_DATA_SAMPLE_DELAY_LEN = 7;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD1A = 0xc0063948ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD1A_OCB_OCI_O2SRD1A_O2S_RDATA_1A = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD1A_OCB_OCI_O2SRD1A_O2S_RDATA_1A_LEN = 32;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR3 = 0xc00611e0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR3_REGION = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR3_REGION_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR3_BASE = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR3_BASE_LEN = 7;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG2_RW = 0xc0060590ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG2_WO_CLEAR = 0xc0060598ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG2_WO_OR = 0xc00605a0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG2_OCB_OCI_OCCFLG2_OCC_FLAGS = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG2_OCB_OCI_OCCFLG2_OCC_FLAGS_LEN = 32;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ONISR0 = 0xc0060300ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ONISR0_INTERRUPT_NONCRIT_STATUS_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ONISR0_INTERRUPT_NONCRIT_STATUS_0_LEN = 32;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5 = 0xc0062028ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5_OCB_OCI_OPIT0Q5RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5_OCB_OCI_OPIT0Q5RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6RR = 0xc0062830ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6RR_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q6RR_OCB_OCI_OPIT0Q6RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q6RR = 0xc0062870ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q6RR_OCB_OCI_OPIT1Q6RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q6RR_OCB_OCI_OPIT1Q6RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6RR = 0xc00628b0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6RR_OCB_OCI_OPIT2Q6RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q6RR_OCB_OCI_OPIT2Q6RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q1 = 0xc00620c8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q1_OCB_OCI_OPIT3Q1RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q1_OCB_OCI_OPIT3Q1RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q6RR = 0xc00628f0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q6RR_OCB_OCI_OPIT3Q6RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q6RR_OCB_OCI_OPIT3Q6RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6RR = 0xc0062930ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6RR_OCB_OCI_OPIT4Q6RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6RR_OCB_OCI_OPIT4Q6RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q7 = 0xc0062138ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q7_OCB_OCI_OPIT4Q7RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q7_OCB_OCI_OPIT4Q7RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q6RR = 0xc0062970ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q6RR_OCB_OCI_OPIT5Q6RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q6RR_OCB_OCI_OPIT5Q6RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q6RR = 0xc00629b0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q6RR_OCB_OCI_OPIT6Q6RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q6RR_OCB_OCI_OPIT6Q6RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q3 = 0xc00621d8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q3_OCB_OCI_OPIT7Q3RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q3_OCB_OCI_OPIT7Q3RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6RR = 0xc00629f0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6RR_OCB_OCI_OPIT7Q6RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q6RR_OCB_OCI_OPIT7Q6RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C10 = 0xc0062250ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C10_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C10_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C10_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C10_PAYLOAD_LEN = 17;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C1RR = 0xc0062a08ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C1RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C1RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C1RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C1RR_PAYLOAD_LEN = 17;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C27 = 0xc00622d8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C27_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C27_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C27_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C27_PAYLOAD_LEN = 17;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C9 = 0xc0062248ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C9_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C9_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C9_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C9_PAYLOAD_LEN = 17;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C16 = 0xc0062380ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C16_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C16_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C16_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C16_PAYLOAD_LEN = 17;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C19RR = 0xc0062b98ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C19RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C19RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C19RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C19RR_PAYLOAD_LEN = 17;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C1RR = 0xc0062b08ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C1RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C1RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C1RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C1RR_PAYLOAD_LEN = 17;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C21 = 0xc00623a8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C21_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C21_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C21_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C21_PAYLOAD_LEN = 17;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C7 = 0xc0062338ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C7_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C7_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C7_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C7_PAYLOAD_LEN = 17;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1 = 0xc0062408ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1_0_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1_1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1_1_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1_2 = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1_2_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1_3 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1_3_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1_4 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1_4_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1_5 = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1_5_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1_6 = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1_6_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1_7 = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV1_7_LEN = 4;
// oci_proc/reg00010.H

static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRCHSW = 0xc0050040ull;

static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRCHSW_WRFSM_DLY_DIS = 0;
static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRCHSW_ALLOW1_RD = 1;
static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRCHSW_ALLOW1_WR = 2;
static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRCHSW_ALLOW1_RDWR = 3;
static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRCHSW_OCI_PARCHK_DIS = 4;
static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRCHSW_TANK_RDDATA_PARCHK_DIS = 5;
static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRCHSW_SPARE_6 = 6;
static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRCHSW_VAL_BE_ADDR_CHK_DIS = 7;
static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRCHSW_SO_SPARE = 8;
static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRCHSW_SO_SPARE_LEN = 2;
// oci_proc/reg00010.H

#ifndef __PPE_HCODE__
}
}
#include "oci_proc/reg00010.H"
#endif
#endif
