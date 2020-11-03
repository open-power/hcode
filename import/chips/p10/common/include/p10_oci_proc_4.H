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

#ifndef __PPE_HCODE__
    #include "proc_scomt.H"
#endif

#ifndef __p10_oci_proc_4_H_
#define __p10_oci_proc_4_H_


#ifndef __PPE_HCODE__
namespace scomt
{
namespace oci_proc
{
#endif


//>> [TP_TPBR_PBA_PBAO_BCUE_OCIBAR]
static const uint32_t TP_TPBR_PBA_PBAO_BCUE_OCIBAR = 0xc00400c8ull;

static const uint32_t TP_TPBR_PBA_PBAO_BCUE_OCIBAR_BCUE_OCIBAR_ADDR = 0;
static const uint32_t TP_TPBR_PBA_PBAO_BCUE_OCIBAR_BCUE_OCIBAR_ADDR_LEN = 25;
//<< [TP_TPBR_PBA_PBAO_BCUE_OCIBAR]
// oci_proc/reg00006.H

//>> [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPETSEL]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPETSEL = 0xc0000000ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPETSEL_WATCHDOG_SEL = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPETSEL_WATCHDOG_SEL_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPETSEL_FIT_SEL = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPETSEL_FIT_SEL_LEN = 4;
//<< [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPETSEL]
// oci_proc/reg00006.H

//>> [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXILR]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXILR = 0xc0030188ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXILR_OCB_OCI_GPEXIDBGINF_LR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXILR_OCB_OCI_GPEXIDBGINF_LR_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXILR]
// oci_proc/reg00006.H

//>> [TP_TPCHIP_OCC_OCI_OCB_ADC_CR1]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR1 = 0xc0064008ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR1_HWCTRL_FSM_ENABLE = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR1_HWCTRL_DEVICE = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR1_HWCTRL_CPOL = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR1_HWCTRL_CPHA = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR1_HWCTRL_CLOCK_DIVIDER = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR1_HWCTRL_CLOCK_DIVIDER_LEN = 10;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR1_HWCTRL_NR_OF_FRAMES = 14;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR1_HWCTRL_NR_OF_FRAMES_LEN = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR1_HWCTRL_WRITE_WHILE_BRIDGE_BUSY_SCRESP_EN = 19;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR1_BUSY_RESPONSE_CODE = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR1_BUSY_RESPONSE_CODE_LEN = 3;
//<< [TP_TPCHIP_OCC_OCI_OCB_ADC_CR1]
// oci_proc/reg00006.H

//>> [TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA5]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA5 = 0xc0064128ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA5_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA5_0_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA5_1 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA5_1_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA5_2 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA5_2_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA5_3 = 48;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA5_3_LEN = 16;
//<< [TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA5]
// oci_proc/reg00006.H

//>> [TP_TPCHIP_OCC_OCI_OCB_ADC_RESET]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RESET = 0xc0064028ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RESET_OCB_OCI_ADC_RESET_HWCTRL = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RESET_OCB_OCI_ADC_RESET_HWCTRL_LEN = 2;
//<< [TP_TPCHIP_OCC_OCI_OCB_ADC_RESET]
// oci_proc/reg00006.H

//>> [TP_TPCHIP_OCC_OCI_OCB_ADC_WDATA]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_WDATA = 0xc0064080ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_WDATA_OCB_OCI_ADC_WDATA_HWCTRL = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_WDATA_OCB_OCI_ADC_WDATA_HWCTRL_LEN = 16;
//<< [TP_TPCHIP_OCC_OCI_OCB_ADC_WDATA]
// oci_proc/reg00006.H

//>> [TP_TPCHIP_OCC_OCI_OCB_G0ISR0]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G0ISR0 = 0xc0060320ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G0ISR0_INTERRUPT_GPE0_STATUS_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G0ISR0_INTERRUPT_GPE0_STATUS_0_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_G0ISR0]
// oci_proc/reg00006.H

//>> [TP_TPCHIP_OCC_OCI_OCB_G1ISR0]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G1ISR0 = 0xc0060328ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G1ISR0_INTERRUPT_GPE1_STATUS_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G1ISR0_INTERRUPT_GPE1_STATUS_0_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_G1ISR0]
// oci_proc/reg00006.H

//>> [TP_TPCHIP_OCC_OCI_OCB_G2ISR0]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G2ISR0 = 0xc0060330ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G2ISR0_INTERRUPT_GPE2_STATUS_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G2ISR0_INTERRUPT_GPE2_STATUS_0_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_G2ISR0]
// oci_proc/reg00006.H

//>> [TP_TPCHIP_OCC_OCI_OCB_G3ISR0]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G3ISR0 = 0xc0060338ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G3ISR0_INTERRUPT_GPE3_STATUS_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G3ISR0_INTERRUPT_GPE3_STATUS_0_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_G3ISR0]
// oci_proc/reg00006.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SCMD0A]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD0A = 0xc0063838ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD0A_CMD0A_RESERVED_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD0A_CLEAR_STICKY_BITS_0A = 1;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SCMD0A]
// oci_proc/reg00006.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SCTRL20]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL20 = 0xc0063818ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL20_OCB_OCI_O2SCTRL20_O2S_INTER_FRAME_DELAY_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL20_OCB_OCI_O2SCTRL20_O2S_INTER_FRAME_DELAY_0_LEN = 16;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SCTRL20]
// oci_proc/reg00006.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS1]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS1 = 0xc0063908ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS1_OUT_COUNT2_1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS1_OUT_COUNT2_1_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS1_IN_DELAY2_1 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS1_IN_DELAY2_1_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS1_IN_COUNT2_1 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS1_IN_COUNT2_1_LEN = 6;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS1]
// oci_proc/reg00006.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SRD2A]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD2A = 0xc0063a48ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD2A_OCB_OCI_O2SRD2A_O2S_RDATA_2A = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD2A_OCB_OCI_O2SRD2A_O2S_RDATA_2A_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SRD2A]
// oci_proc/reg00006.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SWD0A]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD0A = 0xc0063840ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD0A_OCB_OCI_O2SWD0A_O2S_WDATA_0A = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD0A_OCB_OCI_O2SWD0A_O2S_WDATA_0A_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SWD0A]
// oci_proc/reg00006.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCBSHBR2]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHBR2 = 0xc0061118ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHBR2_OCI_REGION = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHBR2_OCI_REGION_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHBR2_START = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHBR2_START_LEN = 26;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCBSHBR2]
// oci_proc/reg00006.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCBSHCS3]
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
//<< [TP_TPCHIP_OCC_OCI_OCB_OCBSHCS3]
// oci_proc/reg00006.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "oci_proc/reg00006.H"
#endif
#endif
