/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_oci_proc_2.H $            */
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

#ifndef __p10_oci_proc_2_H_
#define __p10_oci_proc_2_H_


#ifndef __PPE_HCODE__
namespace scomt
{
namespace oci_proc
{
#endif


static const uint32_t TP_TPBR_PBA_PBAO_BCUE_PBADR = 0xc00400c0ull;

static const uint32_t TP_TPBR_PBA_PBAO_BCUE_PBADR_RESERVED_0_1 = 0;
static const uint32_t TP_TPBR_PBA_PBAO_BCUE_PBADR_RESERVED_0_1_LEN = 2;
static const uint32_t TP_TPBR_PBA_PBAO_BCUE_PBADR_PB_OFFSET = 2;
static const uint32_t TP_TPBR_PBA_PBAO_BCUE_PBADR_PB_OFFSET_LEN = 23;
static const uint32_t TP_TPBR_PBA_PBAO_BCUE_PBADR_RESERVED_25_26 = 25;
static const uint32_t TP_TPBR_PBA_PBAO_BCUE_PBADR_RESERVED_25_26_LEN = 2;
static const uint32_t TP_TPBR_PBA_PBAO_BCUE_PBADR_EXTADDR = 27;
static const uint32_t TP_TPBR_PBA_PBAO_BCUE_PBADR_EXTADDR_LEN = 14;
static const uint32_t TP_TPBR_PBA_PBAO_BCUE_PBADR_RESERVED_41_42 = 41;
static const uint32_t TP_TPBR_PBA_PBAO_BCUE_PBADR_RESERVED_41_42_LEN = 2;
// oci_proc/reg00003.H

static const uint32_t TP_TPBR_PBA_PBAO_PBAXRCVSTAT = 0xc0040120ull;

static const uint32_t TP_TPBR_PBA_PBAO_PBAXRCVSTAT_IN_PROGRESS = 0;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXRCVSTAT_ERROR = 1;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXRCVSTAT_WRITE_IN_PROGRESS = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXRCVSTAT_RESERVATION_SET = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXRCVSTAT_CAPTURE = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXRCVSTAT_CAPTURE_LEN = 16;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR1 = 0xc0000208ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1_LEN = 32;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIMEML = 0xc0000148ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIMEML_BUSY = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIMEML_IMPRECISE_ERROR_PENDING = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIMEML_BYTE_ENABLE = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIMEML_BYTE_ENABLE_LEN = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIMEML_LINE_MODE = 11;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIMEML_ERROR = 17;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIMEML_ERROR_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIMEML_IFETCH_PENDING = 30;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIMEML_DATAOP_PENDING = 31;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIMEMU = 0xc0000140ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR_LEN = 32;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISRR0 = 0xc0000180ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISRR0_OCB_OCI_GPEXIDBGINF_SRR0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISRR0_OCB_OCI_GPEXIDBGINF_SRR0_LEN = 30;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR0 = 0xc0000400ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR0_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR0_0_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR0_1 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR0_1_LEN = 32;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEOXIXCR = 0xc0010100ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR_LEN = 3;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICAC = 0xc00100c8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICAC_ICACHE_TAG_ADDR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICAC_ICACHE_TAG_ADDR_LEN = 27;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICAC_ICACHE_ERR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING = 34;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING = 35;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICAC_ICACHE_VALID = 36;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICAC_ICACHE_VALID_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICAC_ICACHE_LINE2_VALID = 40;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICAC_ICACHE_LINE2_VALID_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICAC_ICACHE_LINE_PTR = 45;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICAC_ICACHE_LINE2_ERR = 46;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING = 47;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIR = 0xc0020120ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR_LEN = 32;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMEDR = 0xc00200a0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMEDR_IR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMEDR_IR_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMEDR_EDR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMEDR_EDR_LEN = 32;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR5 = 0xc0030228ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5_LEN = 32;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEM = 0xc00300b8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEM_ADDR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEM_ADDR_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEM_R_NW = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEM_BUSY = 33;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING = 34;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEM_BYTE_ENABLE = 35;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEM_BYTE_ENABLE_LEN = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEM_LINE_MODE = 43;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEM_ERROR = 49;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEM_ERROR_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEM_IFETCH_PENDING = 62;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEM_DATAOP_PENDING = 63;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMGA = 0xc0030090ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMGA_OCB_OCI_GPEXIRAMEDR_IR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMGA_OCB_OCI_GPEXIRAMEDR_IR_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMGA_SPRG0 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMGA_SPRG0_LEN = 32;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR4 = 0xc0030410ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR4_4 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR4_4_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR4_5 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR4_5_LEN = 32;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR0 = 0xc0064000ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR0_FRAME_SIZE = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR0_FRAME_SIZE_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR0_OUT_COUNT = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR0_OUT_COUNT_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR0_IN_DELAY = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR0_IN_DELAY_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR0_IN_COUNT = 18;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR0_IN_COUNT_LEN = 6;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA4 = 0xc0064120ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA4_6 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA4_6_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA4_7 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA4_7_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA4_8 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA4_8_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA4_9 = 48;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA4_9_LEN = 16;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DORP1 = 0xc0060c18ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DORP1_QUOTIENT = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DORP1_QUOTIENT_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DORP1_REMAINDER = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DORP1_REMAINDER_LEN = 32;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G0ISR1 = 0xc00603a0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G0ISR1_INTERRUPT_GPE0_STATUS_1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G0ISR1_INTERRUPT_GPE0_STATUS_1_LEN = 32;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G1ISR1 = 0xc00603a8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G1ISR1_INTERRUPT_GPE1_STATUS_1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G1ISR1_INTERRUPT_GPE1_STATUS_1_LEN = 32;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G2ISR1 = 0xc00603b0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G2ISR1_INTERRUPT_GPE2_STATUS_1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G2ISR1_INTERRUPT_GPE2_STATUS_1_LEN = 32;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G3ISR1 = 0xc00603b8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G3ISR1_INTERRUPT_GPE3_STATUS_1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G3ISR1_INTERRUPT_GPE3_STATUS_1_LEN = 32;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL21 = 0xc0063918ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL21_OCB_OCI_O2SCTRL21_O2S_INTER_FRAME_DELAY_1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL21_OCB_OCI_O2SCTRL21_O2S_INTER_FRAME_DELAY_1_LEN = 16;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS0 = 0xc0063808ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS0_OUT_COUNT2_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS0_OUT_COUNT2_0_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS0_IN_DELAY2_0 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS0_IN_DELAY2_0_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS0_IN_COUNT2_0 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS0_IN_COUNT2_0_LEN = 6;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST1A = 0xc0063930ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST1A_ONGOING_1A = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST1A_ST1A_RESERVED_1_4 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST1A_ST1A_RESERVED_1_4_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST1A_WRITE_WHILE_BRIDGE_BUSY_ERR_1A = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST1A_ST1A_RESERVED_6 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST1A_FSM_ERR_1A = 7;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHBR3 = 0xc0061198ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHBR3_OCI_REGION = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHBR3_OCI_REGION_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHBR3_START = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHBR3_START_LEN = 26;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS2 = 0xc0061120ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS2_PUSH_FULL = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS2_PUSH_EMPTY = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS2_SPARE = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS2_SPARE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS2_PUSH_INTR_ACTION_0_1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS2_PUSH_INTR_ACTION_0_1_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS2_PUSH_LENGTH = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS2_PUSH_LENGTH_LEN = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS2_PUSH_WRITE_PTR = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS2_PUSH_WRITE_PTR_LEN = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS2_PUSH_READ_PTR = 21;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS2_PUSH_READ_PTR_LEN = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS2_PUSH_ENABLE = 31;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHI1 = 0xc00610a8ull;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLI3 = 0xc0061190ull;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG4_RW = 0xc00605c0ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG4_WO_CLEAR = 0xc00605c8ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG4_WO_OR = 0xc00605d0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG4_OCB_OCI_OCCFLG4_OCC_FLAGS = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG4_OCB_OCI_OCCFLG4_OCC_FLAGS_LEN = 32;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCMISC = 0xc0060400ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCMISC_WO_CLEAR = 0xc0060408ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCMISC_WO_OR = 0xc0060410ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCMISC_CORE_EXT_INTR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCMISC_EXT_INTR_REASON = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCMISC_EXT_INTR_REASON_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCMISC_PVREF_ERROR_EN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCMISC_PVREF_ERROR_EN_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCMISC_PVREF_ERROR_GROSS = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCMISC_PVREF_ERROR_FINE = 7;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCMISC_FIRMWARE_FAULT = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCMISC_FIRMWARE_NOTIFY = 9;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCMISC_SPARE = 10;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCMISC_SPARE_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCMISC_I2CM_INTR_STATUS = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCMISC_I2CM_INTR_STATUS_LEN = 3;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1RR = 0xc0062808ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1RR_OCB_OCI_OPIT0Q1RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1RR_OCB_OCI_OPIT0Q1RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q3 = 0xc0062018ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q3_OCB_OCI_OPIT0Q3RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q3_OCB_OCI_OPIT0Q3RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q1RR = 0xc0062848ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q1RR_OCB_OCI_OPIT1Q1RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q1RR_OCB_OCI_OPIT1Q1RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q1RR = 0xc0062888ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q1RR_OCB_OCI_OPIT2Q1RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q1RR_OCB_OCI_OPIT2Q1RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q1RR = 0xc00628c8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q1RR_OCB_OCI_OPIT3Q1RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q1RR_OCB_OCI_OPIT3Q1RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7 = 0xc00620f8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7_OCB_OCI_OPIT3Q7RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7_OCB_OCI_OPIT3Q7RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1 = 0xc0062108ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR = 0xc0062908ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q1RR_OCB_OCI_OPIT4Q1RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR = 0xc0062948ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1RR_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR = 0xc0062988ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR_OCB_OCI_OPIT6Q1RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1RR_OCB_OCI_OPIT6Q1RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR = 0xc00629c8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1RR_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5 = 0xc00621e8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C16 = 0xc0062280ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C16_PAYLOAD_LEN = 17;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR = 0xc0062a98ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C19RR_PAYLOAD_LEN = 17;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C21 = 0xc00622a8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C21_PAYLOAD_LEN = 17;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR = 0xc0062a30ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C6RR_PAYLOAD_LEN = 17;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C1 = 0xc0062308ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C1_PAYLOAD_LEN = 17;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C10 = 0xc0062350ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C10_PAYLOAD_LEN = 17;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C27 = 0xc00623d8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C27_PAYLOAD_LEN = 17;
// oci_proc/reg00003.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR = 0xc0062b30ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C6RR_PAYLOAD_LEN = 17;
// oci_proc/reg00004.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR = 0xc0062c10ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_0_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_1_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_2 = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_2_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_3 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_3_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_4 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_4_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_5 = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_5_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_6 = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_6_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_7 = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV2RR_7_LEN = 4;
// oci_proc/reg00004.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR = 0xc0062c20ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_0_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_1_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_2 = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_2_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_3 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_3_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_4 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_4_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_5 = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_5_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_6 = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_6_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_7 = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0RR_7_LEN = 4;
// oci_proc/reg00004.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OUISR1 = 0xc0060390ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OUISR1_INTERRUPT_UNCON_STATUS_1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OUISR1_INTERRUPT_UNCON_STATUS_1_LEN = 32;
// oci_proc/reg00004.H

static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SREAR = 0xc0050018ull;

static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SREAR_SRAM_SREAR_ERROR_ADDRESS = 0;
static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SREAR_SRAM_SREAR_ERROR_ADDRESS_LEN = 17;
// oci_proc/reg00004.H

#ifndef __PPE_HCODE__
}
}
#include "oci_proc/reg00003.H"
#include "oci_proc/reg00004.H"
#endif
#endif
