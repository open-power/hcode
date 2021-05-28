/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_oci_proc_e.H $            */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2021                                                    */
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


#ifndef __PPE_HCODE__
namespace scomt
{
namespace oci_proc
{
#endif


//>> [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISGBL]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISGBL = 0xc0020158ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISGBL_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISGBL_SGB_INFO_LOWER_PART1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISGBL_SGB_INFO_LOWER_PART1_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISGBL_SGB_INFO_LOWER_PART2 = 31;
//<< [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISGBL]
// oci_proc/reg00018.H

//>> [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISGBU]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISGBU = 0xc0020150ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISGBU_SGB_INFO_UPPER = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISGBU_SGB_INFO_UPPER_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISGBU]
// oci_proc/reg00018.H

//>> [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEIVPR]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEIVPR = 0xc0030008ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEIVPR_OCB_OCI_GPEIVPR_IVPR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEIVPR_OCB_OCI_GPEIVPR_IVPR_LEN = 23;
//<< [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEIVPR]
// oci_proc/reg00018.H

//>> [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEMACR]
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
//<< [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEMACR]
// oci_proc/reg00018.H

//>> [TP_TPCHIP_OCC_OCI_OCB_ADC_CR2]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR2 = 0xc0064010ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR2_OCB_OCI_ADC_CR2_HWCTRL_INTER_FRAME_DELAY = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_CR2_OCB_OCI_ADC_CR2_HWCTRL_INTER_FRAME_DELAY_LEN = 17;
//<< [TP_TPCHIP_OCC_OCI_OCB_ADC_CR2]
// oci_proc/reg00018.H

//>> [TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA6]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA6 = 0xc0064130ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA6_4 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA6_4_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA6_5 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA6_5_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA6_6 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA6_6_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA6_7 = 48;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA6_7_LEN = 16;
//<< [TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA6]
// oci_proc/reg00018.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SCMD0B]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD0B = 0xc00638b8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD0B_CMD0B_RESERVED_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD0B_CLEAR_STICKY_BITS_0B = 1;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SCMD0B]
// oci_proc/reg00018.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS2]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS2 = 0xc0063a08ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS2_OUT_COUNT2_2 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS2_OUT_COUNT2_2_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS2_IN_DELAY2_2 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS2_IN_DELAY2_2_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS2_IN_COUNT2_2 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS2_IN_COUNT2_2_LEN = 6;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SCTRLS2]
// oci_proc/reg00018.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SRD2B]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD2B = 0xc0063ac8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD2B_OCB_OCI_O2SRD2B_O2S_RDATA_2B = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD2B_OCB_OCI_O2SRD2B_O2S_RDATA_2B_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SRD2B]
// oci_proc/reg00018.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SWD0B]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD0B = 0xc00638c0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD0B_OCB_OCI_O2SWD0B_O2S_WDATA_0B = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD0B_OCB_OCI_O2SWD0B_O2S_WDATA_0B_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SWD0B]
// oci_proc/reg00018.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCBSHBR1]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHBR1 = 0xc0061098ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHBR1_OCI_REGION = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHBR1_OCI_REGION_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHBR1_START = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSHBR1_START_LEN = 26;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCBSHBR1]
// oci_proc/reg00018.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCBSHCS0]
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
//<< [TP_TPCHIP_OCC_OCI_OCB_OCBSHCS0]
// oci_proc/reg00018.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCCFLG6]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_RW = 0xc00605f0ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_CLEAR = 0xc00605f8ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_OR = 0xc0060600ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_OCB_OCI_OCCFLG6_OCC_FLAGS = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_OCB_OCI_OCCFLG6_OCC_FLAGS_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCCFLG6]
// oci_proc/reg00018.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "oci_proc/reg00018.H"
#endif
#endif
