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


//>> [TP_TPBR_PBA_PBAO_BCUE_PBADR]
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
//<< [TP_TPBR_PBA_PBAO_BCUE_PBADR]
// oci_proc/reg00003.H

//>> [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIR]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIR = 0xc0020120ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIR]
// oci_proc/reg00003.H

//>> [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMEDR]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMEDR = 0xc00200a0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMEDR_IR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMEDR_IR_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMEDR_EDR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMEDR_EDR_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMEDR]
// oci_proc/reg00003.H

//>> [TP_TPCHIP_OCC_OCI_OCB_ADC_CR0]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR0 = 0xc0064000ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR0_FRAME_SIZE = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR0_FRAME_SIZE_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR0_OUT_COUNT = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR0_OUT_COUNT_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR0_IN_DELAY = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR0_IN_DELAY_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR0_IN_COUNT = 18;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR0_IN_COUNT_LEN = 6;
//<< [TP_TPCHIP_OCC_OCI_OCB_ADC_CR0]
// oci_proc/reg00003.H

//>> [TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA4]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA4 = 0xc0064120ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA4_6 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA4_6_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA4_7 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA4_7_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA4_8 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA4_8_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA4_9 = 48;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA4_9_LEN = 16;
//<< [TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA4]
// oci_proc/reg00003.H

//>> [TP_TPCHIP_OCC_OCI_OCB_G0ISR1]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G0ISR1 = 0xc00603a0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G0ISR1_INTERRUPT_GPE0_STATUS_1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G0ISR1_INTERRUPT_GPE0_STATUS_1_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_G0ISR1]
// oci_proc/reg00003.H

//>> [TP_TPCHIP_OCC_OCI_OCB_G1ISR1]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G1ISR1 = 0xc00603a8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G1ISR1_INTERRUPT_GPE1_STATUS_1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G1ISR1_INTERRUPT_GPE1_STATUS_1_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_G1ISR1]
// oci_proc/reg00003.H

//>> [TP_TPCHIP_OCC_OCI_OCB_G2ISR1]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G2ISR1 = 0xc00603b0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G2ISR1_INTERRUPT_GPE2_STATUS_1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G2ISR1_INTERRUPT_GPE2_STATUS_1_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_G2ISR1]
// oci_proc/reg00003.H

//>> [TP_TPCHIP_OCC_OCI_OCB_G3ISR1]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G3ISR1 = 0xc00603b8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G3ISR1_INTERRUPT_GPE3_STATUS_1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_G3ISR1_INTERRUPT_GPE3_STATUS_1_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_G3ISR1]
// oci_proc/reg00003.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCBSHBR3]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHBR3 = 0xc0061198ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHBR3_OCI_REGION = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHBR3_OCI_REGION_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHBR3_START = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHBR3_START_LEN = 26;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCBSHBR3]
// oci_proc/reg00003.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCBSHCS2]
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
//<< [TP_TPCHIP_OCC_OCI_OCB_OCBSHCS2]
// oci_proc/reg00003.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SCTRL21]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL21 = 0xc0063918ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL21_OCB_OCI_O2SCTRL21_O2S_INTER_FRAME_DELAY_1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRL21_OCB_OCI_O2SCTRL21_O2S_INTER_FRAME_DELAY_1_LEN = 16;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SCTRL21]
// oci_proc/reg00003.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS0]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS0 = 0xc0063808ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS0_OUT_COUNT2_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS0_OUT_COUNT2_0_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS0_IN_DELAY2_0 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS0_IN_DELAY2_0_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS0_IN_COUNT2_0 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS0_IN_COUNT2_0_LEN = 6;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS0]
// oci_proc/reg00003.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SST1A]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST1A = 0xc0063930ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST1A_ONGOING_1A = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST1A_ST1A_RESERVED_1_4 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST1A_ST1A_RESERVED_1_4_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST1A_WRITE_WHILE_BRIDGE_BUSY_ERR_1A = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST1A_ST1A_RESERVED_6 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST1A_FSM_ERR_1A = 7;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SST1A]
// oci_proc/reg00003.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "oci_proc/reg00003.H"
#include "oci_proc/reg00004.H"
#endif
#endif
