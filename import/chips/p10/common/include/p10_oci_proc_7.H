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


//>> [TP_TPBR_PBA_PBAO_BCDE_PBADR]
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
//<< [TP_TPBR_PBA_PBAO_BCDE_PBADR]
// oci_proc/reg00010.H

//>> [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPETSEL]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPETSEL = 0xc0010000ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPETSEL_WATCHDOG_SEL = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPETSEL_WATCHDOG_SEL_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPETSEL_FIT_SEL = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPETSEL_FIT_SEL_LEN = 4;
//<< [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPETSEL]
// oci_proc/reg00010.H

//>> [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGBL]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGBL = 0xc0010158ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGBL_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGBL_SGB_INFO_LOWER_PART1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGBL_SGB_INFO_LOWER_PART1_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGBL_SGB_INFO_LOWER_PART2 = 31;
//<< [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGBL]
// oci_proc/reg00010.H

//>> [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGBU]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGBU = 0xc0010150ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGBU_SGB_INFO_UPPER = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGBU_SGB_INFO_UPPER_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISGBU]
// oci_proc/reg00010.H

//>> [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXILR]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXILR = 0xc0020188ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXILR_OCB_OCI_GPEXIDBGINF_LR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXILR_OCB_OCI_GPEXIDBGINF_LR_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXILR]
// oci_proc/reg00010.H

//>> [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICACL]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICACL = 0xc0030168ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING = 3;
// ERROR Duplicate Dial         static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1 = 4;
// ERROR Duplicate Dial         static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1_LEN = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2 = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2_LEN = 3;
//<< [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICACL]
// oci_proc/reg00010.H

//>> [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICACU]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICACU = 0xc0030160ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICACU_ICACHE_INFO_UPPER = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICACU_ICACHE_INFO_UPPER_LEN = 27;
//<< [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIICACU]
// oci_proc/reg00010.H

//>> [TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA2]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA2 = 0xc0064110ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA2_8 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA2_8_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA2_9 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA2_9_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA2_10 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA2_10_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA2_11 = 48;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA2_11_LEN = 16;
//<< [TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA2]
// oci_proc/reg00010.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR3]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR3 = 0xc00611e0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR3_REGION = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR3_REGION_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR3_BASE = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR3_BASE_LEN = 7;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR3]
// oci_proc/reg00010.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCCFLG2]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG2_RW = 0xc0060590ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG2_WO_CLEAR = 0xc0060598ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG2_WO_OR = 0xc00605a0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG2_OCB_OCI_OCCFLG2_OCC_FLAGS = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG2_OCB_OCI_OCCFLG2_OCC_FLAGS_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCCFLG2]
// oci_proc/reg00010.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SCTRL10]
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
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SCTRL10]
// oci_proc/reg00010.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SRD1A]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD1A = 0xc0063948ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD1A_OCB_OCI_O2SRD1A_O2S_RDATA_1A = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD1A_OCB_OCI_O2SRD1A_O2S_RDATA_1A_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SRD1A]
// oci_proc/reg00010.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OPITASV1]
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
//<< [TP_TPCHIP_OCC_OCI_OCB_OPITASV1]
// oci_proc/reg00010.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "oci_proc/reg00010.H"
#endif
#endif
