/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_oci_proc_4.H $            */
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

#ifndef __p10_oci_proc_4_H_
#define __p10_oci_proc_4_H_


namespace scomt
{
namespace oci_proc
{


static const uint32_t TP_TPBR_PBA_PBAO_BCUE_OCIBAR = 0xc00400c8ull;

static const uint32_t TP_TPBR_PBA_PBAO_BCUE_OCIBAR_BCUE_OCIBAR_ADDR = 0;
static const uint32_t TP_TPBR_PBA_PBAO_BCUE_OCIBAR_BCUE_OCIBAR_ADDR_LEN = 25;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPETSEL = 0xc0000000ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPETSEL_WATCHDOG_SEL = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPETSEL_WATCHDOG_SEL_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPETSEL_FIT_SEL = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPETSEL_FIT_SEL_LEN = 4;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR0 = 0xc0000200ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0_LEN = 32;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMGA = 0xc0020090ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMGA_OCB_OCI_GPEXIRAMEDR_IR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMGA_OCB_OCI_GPEXIRAMEDR_IR_LEN = 32;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISIB = 0xc00200b0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISIB_ADDR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISIB_ADDR_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISIB_R_NW = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISIB_BUSY = 33;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING = 34;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISIB_RSP_INFO = 49;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISIB_RSP_INFO_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISIB_RESET_PENDING = 61;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISIB_IFETCH_PENDING = 62;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISIB_DATAOP_PENDING = 63;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISIBL = 0xc0020138ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISIBL_R_NW = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISIBL_BUSY = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISIBL_RSP_INFO = 17;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISIBL_RSP_INFO_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISIBL_IFETCH_PENDING = 30;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISIBL_DATAOP_PENDING = 31;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISIBU = 0xc0020130ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR_LEN = 32;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR4 = 0xc0030220ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4_LEN = 32;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXILR = 0xc0030188ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXILR_OCB_OCI_GPEXIDBGINF_LR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXILR_OCB_OCI_GPEXIDBGINF_LR_LEN = 32;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADCCR1 = 0xc0064008ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADCCR1_HWCTRL_FSM_ENABLE = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADCCR1_HWCTRL_DEVICE = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADCCR1_HWCTRL_CPOL = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADCCR1_HWCTRL_CPHA = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADCCR1_HWCTRL_CLOCK_DIVIDER = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADCCR1_HWCTRL_CLOCK_DIVIDER_LEN = 10;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADCCR1_HWCTRL_NR_OF_FRAMES = 14;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADCCR1_HWCTRL_NR_OF_FRAMES_LEN = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADCCR1_HWCTRL_WRITE_WHILE_BRIDGE_BUSY_SCRESP_EN = 19;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADCCR1_BUSY_RESPONSE_CODE = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADCCR1_BUSY_RESPONSE_CODE_LEN = 3;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA5 = 0xc0064128ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA5_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA5_0_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA5_1 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA5_1_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA5_2 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA5_2_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA5_3 = 48;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA5_3_LEN = 16;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RESET = 0xc0064028ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RESET_OCB_OCI_ADC_RESET_HWCTRL = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RESET_OCB_OCI_ADC_RESET_HWCTRL_LEN = 2;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_WDATA = 0xc0064080ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_WDATA_OCB_OCI_ADC_WDATA_HWCTRL = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_WDATA_OCB_OCI_ADC_WDATA_HWCTRL_LEN = 16;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DORP0 = 0xc0060c08ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DORP0_QUOTIENT = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DORP0_QUOTIENT_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DORP0_REMAINDER = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DORP0_REMAINDER_LEN = 32;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G0ISR0 = 0xc0060320ull;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G1ISR0 = 0xc0060328ull;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G2ISR0 = 0xc0060330ull;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G3ISR0 = 0xc0060338ull;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD0A = 0xc0063838ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD0A_CMD0A_RESERVED_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD0A__CLEAR_STICKY_BITS_0A = 1;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL20 = 0xc0063818ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL20_OCB_OCI_O2SCTRL20_O2S_INTER_FRAME_DELAY_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL20_OCB_OCI_O2SCTRL20_O2S_INTER_FRAME_DELAY_0_LEN = 16;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS1 = 0xc0063908ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS1_OUT_COUNT2_1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS1_OUT_COUNT2_1_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS1_IN_DELAY2_1 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS1_IN_DELAY2_1_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS1_IN_COUNT2_1 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS1_IN_COUNT2_1_LEN = 6;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD2A = 0xc0063a48ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD2A_OCB_OCI_O2SRD2A_O2S_RDATA_2A = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD2A_OCB_OCI_O2SRD2A_O2S_RDATA_2A_LEN = 32;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD0A = 0xc0063840ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD0A_OCB_OCI_O2SWD0A_O2S_WDATA_0A = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD0A_OCB_OCI_O2SWD0A_O2S_WDATA_0A_LEN = 32;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHBR2 = 0xc0061118ull;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS3 = 0xc00611a0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS3_PUSH_FULL = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS3_PUSH_EMPTY = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS3_SPARE = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS3_SPARE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS3_PUSH_INTR_ACTION_0_1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS3_PUSH_INTR_ACTION_0_1_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS3_PUSH_LENGTH = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS3_PUSH_LENGTH_LEN = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS3_PUSH_WRITE_PTR = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS3_PUSH_WRITE_PTR_LEN = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS3_PUSH_READ_PTR = 21;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS3_PUSH_READ_PTR_LEN = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHCS3_PUSH_ENABLE = 31;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHI0 = 0xc0061028ull;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLI2 = 0xc0061110ull;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG5_RW = 0xc00605d8ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG5_WO_CLEAR = 0xc00605e0ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG5_WO_OR = 0xc00605e8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG5_OCB_OCI_OCCFLG5_OCC_FLAGS = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG5_OCB_OCI_OCCFLG5_OCC_FLAGS_LEN = 32;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2 = 0xc0062010ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2PRA_RO = 0xc0063080ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2PRA_WO_CLEAR = 0xc0063088ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2PRA_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2PRA_1 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2PRA_2 = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2PRA_3 = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2PRA_4 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2PRA_5 = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2PRA_6 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2PRA_7 = 7;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q6 = 0xc00620f0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q6_OCB_OCI_OPIT3Q6RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q6_OCB_OCI_OPIT3Q6RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0 = 0xc0062100ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q4 = 0xc00621e0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q4_OCB_OCI_OPIT7Q4RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q4_OCB_OCI_OPIT7Q4RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C13RR = 0xc0062a68ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C13RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C13RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C13RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C13RR_PAYLOAD_LEN = 17;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C17 = 0xc0062288ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C17_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C17_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C17_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C17_PAYLOAD_LEN = 17;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C20 = 0xc00622a0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C20_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C20_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C20_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C20_PAYLOAD_LEN = 17;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C21RR = 0xc0062aa8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C21RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C21RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C21RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C21RR_PAYLOAD_LEN = 17;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C0 = 0xc0062300ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C0_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C0_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C0_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C0_PAYLOAD_LEN = 17;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C11 = 0xc0062358ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C11_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C11_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C11_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C11_PAYLOAD_LEN = 17;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C14RR = 0xc0062b70ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C14RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C14RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C14RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C14RR_PAYLOAD_LEN = 17;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C26 = 0xc00623d0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C26_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C26_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C26_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C26_PAYLOAD_LEN = 17;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C26RR = 0xc0062bd0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C26RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C26RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C26RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C26RR_PAYLOAD_LEN = 17;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C31RR = 0xc0062bf8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C31RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C31RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C31RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C31RR_PAYLOAD_LEN = 17;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBPRC_RO = 0xc0063420ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBPRC_RO_CLRPART = 0xc0063428ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBPRC_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBPRC_1 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBPRC_2 = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBPRC_3 = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBPRC_4 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBPRC_5 = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBPRC_6 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBPRC_7 = 7;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OUISR0 = 0xc0060310ull;
// oci_proc/reg00005.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICPING = 0xc0063c08ull;
// oci_proc/reg00005.H

}
}
#include "oci_proc/reg00005.H"
#endif
