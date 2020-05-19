/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_oci_proc_f.H $            */
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

#ifndef __p10_oci_proc_f_H_
#define __p10_oci_proc_f_H_


#ifndef __PPE_HCODE__
namespace scomt
{
namespace oci_proc
{
#endif


//>> [TP_TPBR_PBA_PBAO_PBASLVRST]
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVRST = 0xc0040008ull;

static const uint32_t TP_TPBR_PBA_PBAO_PBASLVRST_SET = 0;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVRST_SET_LEN = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVRST_IN_PROG = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVRST_IN_PROG_LEN = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVRST_BUSY_STATUS = 8;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVRST_BUSY_STATUS_LEN = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVRST_SCOPE_ATTN_BAR = 12;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVRST_SCOPE_ATTN_BAR_LEN = 2;
//<< [TP_TPBR_PBA_PBAO_PBASLVRST]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMEDR]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMEDR = 0xc00000a0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMEDR_IR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMEDR_IR_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMEDR_EDR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMEDR_EDR_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMEDR]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISGBL]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISGBL = 0xc0000158ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISGBL_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISGBL_SGB_INFO_LOWER_PART1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISGBL_SGB_INFO_LOWER_PART1_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISGBL_SGB_INFO_LOWER_PART2 = 31;
//<< [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISGBL]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISGBU]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISGBU = 0xc0000150ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISGBU_SGB_INFO_UPPER = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISGBU_SGB_INFO_UPPER_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISGBU]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_OCB_ADC_STAT]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_STAT = 0xc0064018ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_STAT_HWCTRL_ONGOING = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_STAT_RESERVED_1_3 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_STAT_RESERVED_1_3_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_STAT_HWCTRL_INVALID_NUMBER_OF_FRAMES = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_STAT_HWCTRL_WRITE_WHILE_BRIDGE_BUSY_ERR = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_STAT_RESERVED_6 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_STAT_HWCTRL_FSM_ERR = 7;
//<< [TP_TPCHIP_OCC_OCI_OCB_ADC_STAT]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCBLWCR3]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR3 = 0xc00611c0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR3_LINEAR_WINDOW_ENABLE = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR3_SPARE_0 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR3_SPARE_0_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR3_LINEAR_WINDOW_BAR = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR3_LINEAR_WINDOW_BAR_LEN = 17;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR3_LINEAR_WINDOW_MASK = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR3_LINEAR_WINDOW_MASK_LEN = 12;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCBLWCR3]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCBLWSR3]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR3 = 0xc00611d0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR3_LINEAR_WINDOW_SCRESP = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR3_LINEAR_WINDOW_SCRESP_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR3_SPARE0 = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR3_SPARE0_LEN = 5;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCBLWSR3]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCBSLBR0]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLBR0 = 0xc0061000ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLBR0_OCI_REGION = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLBR0_OCI_REGION_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLBR0_START = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLBR0_START_LEN = 26;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCBSLBR0]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCBSLCS1]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS1 = 0xc0061088ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS1_PULL_FULL = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS1_PULL_EMPTY = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS1_SPARE = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS1_SPARE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS1_PULL_INTR_ACTION_0_1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS1_PULL_INTR_ACTION_0_1_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS1_PULL_LENGTH = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS1_PULL_LENGTH_LEN = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS1_PULL_WRITE_PTR = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS1_PULL_WRITE_PTR_LEN = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS1_PULL_READ_PTR = 21;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS1_PULL_READ_PTR_LEN = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS1_PULL_ENABLE = 31;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCBSLCS1]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCCS1]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS1_RW = 0xc0060518ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS1_WO_CLEAR = 0xc0060520ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS1_WO_OR = 0xc0060528ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS1_OCB_OCI_OCCS1_OCC_SCRATCH_1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS1_OCB_OCI_OCCS1_OCC_SCRATCH_1_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCCS1]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OITR1]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OITR1_RW = 0xc0060140ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OITR1_WO_CLEAR = 0xc0060148ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OITR1_WO_OR = 0xc0060150ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OITR1_OCB_OCI_OITR1_INTERRUPT_TYPE_1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OITR1_OCB_OCI_OITR1_INTERRUPT_TYPE_1_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_OITR1]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_OCB_P2S_RDATA]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_RDATA = 0xc0064300ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_RDATA_OCB_OCI_P2S_RDATA = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_RDATA_OCB_OCI_P2S_RDATA_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_P2S_RDATA]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_OCB_P2S_RESET]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_RESET = 0xc0064228ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_RESET_OCB_OCI_P2S_RESET = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_RESET_OCB_OCI_P2S_RESET_LEN = 2;
//<< [TP_TPCHIP_OCC_OCI_OCB_P2S_RESET]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_OCB_P2S_WDATA]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_WDATA = 0xc0064280ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_WDATA_OCB_OCI_P2S_WDATA = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_WDATA_OCB_OCI_P2S_WDATA_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_P2S_WDATA]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_SRAM_CTL_SRBV3]
static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRBV3 = 0xc0050038ull;

static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRBV3_SRAM_SRBV3_BOOT_VECTOR_WORD3 = 0;
static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRBV3_SRAM_SRBV3_BOOT_VECTOR_WORD3_LEN = 32;
//<< [TP_TPCHIP_OCC_SRAM_CTL_SRBV3]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SCMD1B]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD1B = 0xc00639b8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD1B_CMD1B_RESERVED_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD1B_CLEAR_STICKY_BITS_1B = 1;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SCMD1B]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SWD1B]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD1B = 0xc00639c0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD1B_OCB_OCI_O2SWD1B_O2S_WDATA_1B = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD1B_OCB_OCI_O2SWD1B_O2S_WDATA_1B_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SWD1B]
// oci_proc/reg00019.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OPIT1Q0]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q0 = 0xc0062040ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q0_OCB_OCI_OPIT1Q0RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q0_OCB_OCI_OPIT1Q0RR_PCB_INTR_PAYLOAD_LEN = 19;
//<< [TP_TPCHIP_OCC_OCI_OCB_OPIT1Q0]
// oci_proc/reg00019.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "oci_proc/reg00019.H"
#endif
#endif
