/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_oci_proc_f.H $            */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019                                                         */
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


static const uint32_t TP_TPBR_PBA_PBAO_PBASLVRST = 0xc0040008ull;

static const uint32_t TP_TPBR_PBA_PBAO_PBASLVRST_SET = 0;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVRST_SET_LEN = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVRST_IN_PROG = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVRST_IN_PROG_LEN = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVRST_BUSY_STATUS = 8;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVRST_BUSY_STATUS_LEN = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVRST_SCOPE_ATTN_BAR = 12;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVRST_SCOPE_ATTN_BAR_LEN = 2;
// oci_proc/reg00019.H

static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG = 0xc0040188ull;

static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_PBAX_EN = 0;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_RESERVATION_EN = 1;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_SND_RESET = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_RCV_RESET = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_RCV_GROUPID = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_RCV_GROUPID_LEN = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_RCV_CHIPID = 8;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_RCV_CHIPID_LEN = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_RESERVED_11 = 11;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_RCV_BRDCST_GROUP = 12;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_RCV_BRDCST_GROUP_LEN = 8;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_RCV_DATATO_DIV = 20;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_RCV_DATATO_DIV_LEN = 5;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_RESERVED_25_26 = 25;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_RESERVED_25_26_LEN = 2;
// ERROR Duplicate Dial         static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_RESERVED_25_26 = 25;
// ERROR Duplicate Dial         static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_RESERVED_25_26_LEN = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_SND_RETRY_COUNT_OVERCOM = 27;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_SND_RETRY_THRESH = 28;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_SND_RETRY_THRESH_LEN = 8;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_SND_RSVTO_DIV = 36;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXICFG_SND_RSVTO_DIV_LEN = 5;
// oci_proc/reg00019.H

static const uint32_t TP_TPBR_PBA_PBAO_PBAXIRCVSTAT = 0xc00401a0ull;

static const uint32_t TP_TPBR_PBA_PBAO_PBAXIRCVSTAT_IN_PROGRESS = 0;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXIRCVSTAT_ERROR = 1;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXIRCVSTAT_WRITE_IN_PROGRESS = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXIRCVSTAT_RESERVATION_SET = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXIRCVSTAT_CAPTURE = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXIRCVSTAT_CAPTURE_LEN = 18;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPESWPR1 = 0xc0000030ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPESWPR1_BAR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPESWPR1_BAR_LEN = 27;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPESWPR1_SIZE = 44;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPESWPR1_SIZE_LEN = 15;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXICTR = 0xc0000190ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR_LEN = 32;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMEDR = 0xc00000a0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMEDR_IR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMEDR_IR_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMEDR_EDR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMEDR_EDR_LEN = 32;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISGBL = 0xc0000158ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISGBL_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISGBL_SGB_INFO_LOWER_PART1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISGBL_SGB_INFO_LOWER_PART1_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISGBL_SGB_INFO_LOWER_PART2 = 31;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISGBU = 0xc0000150ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISGBU_SGB_INFO_UPPER = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISGBU_SGB_INFO_UPPER_LEN = 32;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR30 = 0xc0000438ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR30_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR30_0_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR30_1 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR30_1_LEN = 32;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCAC = 0xc00100d0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCAC_TAG_ADDR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCAC_TAG_ADDR_LEN = 27;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCAC_ERR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCAC_POPULATE_PENDING = 35;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCAC_VALID = 36;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCAC_VALID_LEN = 4;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR7 = 0xc0010238ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR7_OCB_OCI_GPEXIVDR6_GPR7 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR7_OCB_OCI_GPEXIVDR6_GPR7_LEN = 32;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR6 = 0xc0010418ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR6_6 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR6_6_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR6_7 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR6_7_LEN = 32;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIEDR = 0xc0020118ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR_LEN = 32;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR3 = 0xc0020218ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR3_OCB_OCI_GPEXIVDR2_GPR3 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR3_OCB_OCI_GPEXIVDR2_GPR3_LEN = 32;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR31 = 0xc0020278ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31_LEN = 32;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR2 = 0xc0020408ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR2_2 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR2_2_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR2_3 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR2_3_LEN = 32;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR30 = 0xc0030270ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30_LEN = 32;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR8 = 0xc0030240ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR8_OCB_OCI_GPEXIVDR8_GPR8 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR8_OCB_OCI_GPEXIVDR8_GPR8_LEN = 32;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIAR = 0xc0030128ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR_LEN = 30;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISPRG0 = 0xc0030110ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISPRG0_SPRG0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISPRG0_SPRG0_LEN = 32;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_STAT = 0xc0064018ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_STAT_HWCTRL_ONGOING = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_STAT_RESERVED_1_3 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_STAT_RESERVED_1_3_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_STAT_HWCTRL_INVALID_NUMBER_OF_FRAMES = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_STAT_HWCTRL_WRITE_WHILE_BRIDGE_BUSY_ERR = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_STAT_RESERVED_6 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ADC_STAT_HWCTRL_FSM_ERR = 7;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD1B = 0xc00639b8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD1B_CMD1B_RESERVED_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD1B_CLEAR_STICKY_BITS_1B = 1;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD1B = 0xc00639c0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD1B_OCB_OCI_O2SWD1B_O2S_WDATA_1B = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD1B_OCB_OCI_O2SWD1B_O2S_WDATA_1B_LEN = 32;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR3 = 0xc00611c0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR3_LINEAR_WINDOW_ENABLE = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR3_SPARE_0 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR3_SPARE_0_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR3_LINEAR_WINDOW_BAR = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR3_LINEAR_WINDOW_BAR_LEN = 17;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR3_LINEAR_WINDOW_MASK = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR3_LINEAR_WINDOW_MASK_LEN = 12;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR3 = 0xc00611d0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR3_LINEAR_WINDOW_SCRESP = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR3_LINEAR_WINDOW_SCRESP_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR3_SPARE0 = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR3_SPARE0_LEN = 5;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLBR0 = 0xc0061000ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLBR0_OCI_REGION = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLBR0_OCI_REGION_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLBR0_START = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLBR0_START_LEN = 26;
// oci_proc/reg00019.H

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
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS1_RW = 0xc0060518ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS1_WO_CLEAR = 0xc0060520ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS1_WO_OR = 0xc0060528ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS1_OCB_OCI_OCCS1_OCC_SCRATCH_1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS1_OCB_OCI_OCCS1_OCC_SCRATCH_1_LEN = 32;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OITR1_RW = 0xc0060140ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OITR1_WO_CLEAR = 0xc0060148ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OITR1_WO_OR = 0xc0060150ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OITR1_OCB_OCI_OITR1_INTERRUPT_TYPE_1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OITR1_OCB_OCI_OITR1_INTERRUPT_TYPE_1_LEN = 32;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0PRA_RO = 0xc0063000ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0PRA_WO_CLEAR = 0xc0063008ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0PRA_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0PRA_1 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0PRA_2 = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0PRA_3 = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0PRA_4 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0PRA_5 = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0PRA_6 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0PRA_7 = 7;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q0 = 0xc0062040ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q0_OCB_OCI_OPIT1Q0RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q0_OCB_OCI_OPIT1Q0RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q4 = 0xc00620a0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q4_OCB_OCI_OPIT2Q4RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q4_OCB_OCI_OPIT2Q4RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2 = 0xc0062150ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q6 = 0xc00621b0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q6_OCB_OCI_OPIT6Q6RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q6_OCB_OCI_OPIT6Q6RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C16RR = 0xc0062a80ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C16RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C16RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C16RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C16RR_PAYLOAD_LEN = 17;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C2 = 0xc0062210ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C2_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C2_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C2_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C2_PAYLOAD_LEN = 17;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C24RR = 0xc0062ac0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C24RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C24RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C24RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C24RR_PAYLOAD_LEN = 17;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C9RR = 0xc0062a48ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C9RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C9RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C9RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C9RR_PAYLOAD_LEN = 17;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C11RR = 0xc0062b58ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C11RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C11RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C11RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C11RR_PAYLOAD_LEN = 17;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C23RR = 0xc0062bb8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C23RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C23RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C23RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C23RR_PAYLOAD_LEN = 17;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C9RR = 0xc0062b48ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C9RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C9RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C9RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C9RR_PAYLOAD_LEN = 17;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_RO = 0xc0063300ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_WO_CLEAR = 0xc0063308ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_1 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_2 = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_3 = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_4 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_5 = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_6 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_7 = 7;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_8 = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_9 = 9;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_10 = 10;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_11 = 11;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_12 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_13 = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_14 = 14;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_15 = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_16 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_17 = 17;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_18 = 18;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_19 = 19;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_20 = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_21 = 21;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_22 = 22;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_23 = 23;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_24 = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_25 = 25;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_26 = 26;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_27 = 27;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_28 = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_29 = 29;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_30 = 30;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9PRB_31 = 31;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0 = 0xc0062420ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0_0_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0_1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0_1_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0_2 = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0_2_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0_3 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0_3_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0_4 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0_4_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0_5 = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0_5_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0_6 = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0_6_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0_7 = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV0_7_LEN = 4;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITIR = 0xc0062e00ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITIR_CHIPLET_ID = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITIR_CHIPLET_ID_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITIR_PAYLOAD = 9;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITIR_PAYLOAD_LEN = 23;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_RDATA = 0xc0064300ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_RDATA_OCB_OCI_P2S_RDATA = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_RDATA_OCB_OCI_P2S_RDATA_LEN = 32;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_RESET = 0xc0064228ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_RESET_OCB_OCI_P2S_RESET = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_RESET_OCB_OCI_P2S_RESET_LEN = 2;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_WDATA = 0xc0064280ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_WDATA_OCB_OCI_P2S_WDATA = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_WDATA_OCB_OCI_P2S_WDATA_LEN = 32;
// oci_proc/reg00019.H

static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRBV3 = 0xc0050038ull;

static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRBV3_SRAM_SRBV3_BOOT_VECTOR_WORD3 = 0;
static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRBV3_SRAM_SRBV3_BOOT_VECTOR_WORD3_LEN = 32;
// oci_proc/reg00019.H

#ifndef __PPE_HCODE__
}
}
#include "oci_proc/reg00019.H"
#endif
#endif

