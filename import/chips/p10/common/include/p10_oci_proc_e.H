/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_oci_proc_e.H $            */
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

#ifndef __p10_oci_proc_e_H_
#define __p10_oci_proc_e_H_


namespace scomt
{
namespace oci_proc
{


static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF = 0xc00000f8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_SRR0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_SRR0_LEN = 30;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_LR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_LR_LEN = 32;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3 = 0xc0000218ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3_OCB_OCI_GPEXIVDR2_GPR3 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3_OCB_OCI_GPEXIVDR2_GPR3_LEN = 32;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2 = 0xc0000408ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_2 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_2_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_3 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_3_LEN = 32;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1 = 0xc0010030ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_BAR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_BAR_LEN = 27;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_SIZE = 44;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_SIZE_LEN = 15;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR = 0xc0010190ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR_LEN = 32;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8 = 0xc0010240ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8_OCB_OCI_GPEXIVDR8_GPR8 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8_OCB_OCI_GPEXIVDR8_GPR8_LEN = 32;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA = 0xc0010090ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_OCB_OCI_GPEXIRAMEDR_IR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_OCB_OCI_GPEXIRAMEDR_IR_LEN = 32;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR = 0xc0020128ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR_LEN = 30;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISGBL = 0xc0020158ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISGBL_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING = 3;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISGBU = 0xc0020150ull;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEIVPR = 0xc0030008ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEIVPR_OCB_OCI_GPEIVPR_IVPR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEIVPR_OCB_OCI_GPEIVPR_IVPR_LEN = 23;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEMACR = 0xc0030020ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEMACR_MEM_LOW_PRIORITY = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEMACR_MEM_LOW_PRIORITY_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEMACR_MEM_HIGH_PRIORITY = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEMACR_MEM_HIGH_PRIORITY_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEMACR_LOCAL_LOW_PRIORITY = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEMACR_LOCAL_LOW_PRIORITY_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEMACR_LOCAL_HIGH_PRIORITY = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEMACR_LOCAL_HIGH_PRIORITY_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEMACR_SRAM_LOW_PRIORITY = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEMACR_SRAM_LOW_PRIORITY_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEMACR_SRAM_HIGH_PRIORITY = 10;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEMACR_SRAM_HIGH_PRIORITY_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEMACR_WRITE_PROTECT_ENABLE = 12;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC = 0xc00300d0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_TAG_ADDR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_TAG_ADDR_LEN = 27;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_ERR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_POPULATE_PENDING = 35;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_VALID = 36;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_VALID_LEN = 4;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR = 0xc0030118ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR_LEN = 32;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7 = 0xc0030238ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7_OCB_OCI_GPEXIVDR6_GPR7 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7_OCB_OCI_GPEXIVDR6_GPR7_LEN = 32;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6 = 0xc0030418ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_6 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_6_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_7 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_7_LEN = 32;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR2 = 0xc0064010ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR2_OCB_OCI_ADC_CR2_HWCTRL_INTER_FRAME_DELAY = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR2_OCB_OCI_ADC_CR2_HWCTRL_INTER_FRAME_DELAY_LEN = 17;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA6 = 0xc0064130ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA6_4 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA6_4_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA6_5 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA6_5_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA6_6 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA6_6_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA6_7 = 48;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA6_7_LEN = 16;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DORP3 = 0xc0060c38ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DORP3_QUOTIENT = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DORP3_QUOTIENT_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DORP3_REMAINDER = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DORP3_REMAINDER_LEN = 32;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD0B = 0xc00638b8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD0B_CMD0B_RESERVED_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD0B__CLEAR_STICKY_BITS_0B = 1;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS2 = 0xc0063a08ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS2_OUT_COUNT2_2 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS2_OUT_COUNT2_2_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS2_IN_DELAY2_2 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS2_IN_DELAY2_2_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS2_IN_COUNT2_2 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS2_IN_COUNT2_2_LEN = 6;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD2B = 0xc0063ac8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD2B_OCB_OCI_O2SRD2B_O2S_RDATA_2B = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD2B_OCB_OCI_O2SRD2B_O2S_RDATA_2B_LEN = 32;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD0B = 0xc00638c0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD0B_OCB_OCI_O2SWD0B_O2S_WDATA_0B = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD0B_OCB_OCI_O2SWD0B_O2S_WDATA_0B_LEN = 32;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHBR1 = 0xc0061098ull;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS0 = 0xc0061020ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS0_PUSH_FULL = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS0_PUSH_EMPTY = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS0_SPARE = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS0_SPARE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS0_PUSH_INTR_ACTION_0_1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS0_PUSH_INTR_ACTION_0_1_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS0_PUSH_LENGTH = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS0_PUSH_LENGTH_LEN = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS0_PUSH_WRITE_PTR = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS0_PUSH_WRITE_PTR_LEN = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS0_PUSH_READ_PTR = 21;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS0_PUSH_READ_PTR_LEN = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS0_PUSH_ENABLE = 31;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHI3 = 0xc00611a8ull;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLI1 = 0xc0061090ull;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_RW = 0xc00605f0ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_CLEAR = 0xc00605f8ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_OR = 0xc0060600ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_OCB_OCI_OCCFLG6_OCC_FLAGS = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_OCB_OCI_OCCFLG6_OCC_FLAGS_LEN = 32;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1 = 0xc0062008ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1_OCB_OCI_OPIT0Q1RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1_OCB_OCI_OPIT0Q1RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR = 0xc0062828ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR_OCB_OCI_OPIT0Q5RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR_OCB_OCI_OPIT0Q5RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR = 0xc0062868ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR_OCB_OCI_OPIT1Q5RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR_OCB_OCI_OPIT1Q5RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR = 0xc00628a8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR_OCB_OCI_OPIT2Q5RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR_OCB_OCI_OPIT2Q5RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5 = 0xc00620e8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR = 0xc00628e8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3 = 0xc0062118ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3_OCB_OCI_OPIT4Q3RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3_OCB_OCI_OPIT4Q3RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR = 0xc0062928ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR = 0xc0062968ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR_OCB_OCI_OPIT5Q5RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR_OCB_OCI_OPIT5Q5RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR = 0xc00629a8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR = 0xc00629e8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7 = 0xc00621f8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7_OCB_OCI_OPIT7Q7RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7_OCB_OCI_OPIT7Q7RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C14 = 0xc0062270ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_PAYLOAD_LEN = 17;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C23 = 0xc00622b8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_PAYLOAD_LEN = 17;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR = 0xc0062a10ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_PAYLOAD_LEN = 17;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C12 = 0xc0062360ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C12_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C12_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C12_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C12_PAYLOAD_LEN = 17;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C25 = 0xc00623c8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C25_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C25_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C25_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C25_PAYLOAD_LEN = 17;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C28RR = 0xc0062be0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C28RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C28RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C28RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C28RR_PAYLOAD_LEN = 17;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C2RR = 0xc0062b10ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C2RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C2RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C2RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C2RR_PAYLOAD_LEN = 17;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C3 = 0xc0062318ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C3_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C3_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C3_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C3_PAYLOAD_LEN = 17;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITCSV = 0xc0062440ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITCSV_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITCSV_0_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITCSV_1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITCSV_1_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITCSV_2 = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITCSV_2_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITCSV_3 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITCSV_3_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITCSV_4 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITCSV_4_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITCSV_5 = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITCSV_5_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITCSV_6 = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITCSV_6_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITCSV_7 = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITCSV_7_LEN = 4;
// oci_proc/reg00018.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITEPRD_RO = 0xc0063480ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITEPRD_WO_CLEAR = 0xc0063488ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITEPRD_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITEPRD_1 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITEPRD_2 = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITEPRD_3 = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITEPRD_4 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITEPRD_5 = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITEPRD_6 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITEPRD_7 = 7;
// oci_proc/reg00018.H

}
}
#ifndef __PPE_HCODE__
    #include "oci_proc/reg00018.H"
#endif
#endif
