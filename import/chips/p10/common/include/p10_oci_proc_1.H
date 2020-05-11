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


//>> [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR = 0xc00100a0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_IR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_IR_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_EDR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_EDR_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR]
// oci_proc/reg00002.H

//>> [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL = 0xc0020168ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING = 3;
// ERROR Duplicate Dial         static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1 = 4;
// ERROR Duplicate Dial         static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1_LEN = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2 = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2_LEN = 3;
//<< [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL]
// oci_proc/reg00002.H

//>> [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU = 0xc0020160ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU_ICACHE_INFO_UPPER = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU_ICACHE_INFO_UPPER_LEN = 27;
//<< [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU]
// oci_proc/reg00002.H

//>> [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR = 0xc0030120ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR]
// oci_proc/reg00002.H

//>> [TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3 = 0xc0064118ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_2 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_2_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_3 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_3_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_4 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_4_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_5 = 48;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_5_LEN = 16;
//<< [TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3]
// oci_proc/reg00002.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2 = 0xc0061160ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_REGION = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_REGION_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_BASE = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_BASE_LEN = 7;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2]
// oci_proc/reg00002.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCCFLG3]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_RW = 0xc00605a8ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_CLEAR = 0xc00605b0ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_OR = 0xc00605b8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_OCB_OCI_OCCFLG3_OCC_FLAGS = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_OCB_OCI_OCCFLG3_OCC_FLAGS_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCCFLG3]
// oci_proc/reg00002.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OIRR0A]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR0A_RW = 0xc0060200ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_CLEAR = 0xc0060208ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_OR = 0xc0060210ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR0A_OCB_OCI_OIRR0A_INTERRUPT_ROUTE_0_A = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR0A_OCB_OCI_OIRR0A_INTERRUPT_ROUTE_0_A_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_OIRR0A]
// oci_proc/reg00002.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11]
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
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11]
// oci_proc/reg00002.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SST2A]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST2A = 0xc0063a30ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ONGOING_2A = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_1_4 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_1_4_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST2A_WRITE_WHILE_BRIDGE_BUSY_ERR_2A = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_6 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST2A_FSM_ERR_2A = 7;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SST2A]
// oci_proc/reg00002.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OPITASV0]
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
//<< [TP_TPCHIP_OCC_OCI_OCB_OPITASV0]
// oci_proc/reg00002.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "oci_proc/reg00002.H"
#endif
#endif
