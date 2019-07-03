/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_oci_proc_5.H $            */
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

#ifndef __p10_oci_proc_5_H_
#define __p10_oci_proc_5_H_


#ifndef __PPE_HCODE__
namespace scomt
{
namespace oci_proc
{
#endif


static const uint32_t TP_TPBR_PBA_PBAO_BCDE_CTL = 0xc0040080ull;

static const uint32_t TP_TPBR_PBA_PBAO_BCDE_CTL_OP = 0;
static const uint32_t TP_TPBR_PBA_PBAO_BCDE_CTL_ART = 1;
// oci_proc/reg00007.H

static const uint32_t TP_TPBR_PBA_PBAO_PBAXISHBR1 = 0xc00401d0ull;

static const uint32_t TP_TPBR_PBA_PBAO_PBAXISHBR1_PBAXISHBR1_PUSH_START = 0;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISHBR1_PBAXISHBR1_PUSH_START_LEN = 29;
// oci_proc/reg00007.H

static const uint32_t TP_TPBR_PBA_PBAO_PBAXISHCS0 = 0xc00401b8ull;

static const uint32_t TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_FULL = 0;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_EMPTY = 1;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISHCS0_RESERVED_2_3 = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISHCS0_RESERVED_2_3_LEN = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_INTR_ACTION_0_1 = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_INTR_ACTION_0_1_LEN = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_LENGTH = 6;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_LENGTH_LEN = 5;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_WRITE_PTR = 13;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_WRITE_PTR_LEN = 5;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_READ_PTR = 21;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_READ_PTR_LEN = 5;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_ENABLE = 31;
// oci_proc/reg00007.H

static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHBR1 = 0xc0040150ull;
// oci_proc/reg00007.H

static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHCS0 = 0xc0040138ull;

static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHCS0_PUSH_FULL = 0;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHCS0_PUSH_EMPTY = 1;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHCS0_RESERVED_2_3 = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHCS0_RESERVED_2_3_LEN = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHCS0_PUSH_INTR_ACTION_0_1 = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHCS0_PUSH_INTR_ACTION_0_1_LEN = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHCS0_PUSH_LENGTH = 6;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHCS0_PUSH_LENGTH_LEN = 5;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHCS0_PUSH_WRITE_PTR = 13;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHCS0_PUSH_WRITE_PTR_LEN = 5;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHCS0_PUSH_READ_PTR = 21;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHCS0_PUSH_READ_PTR_LEN = 5;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHCS0_PUSH_ENABLE = 31;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30 = 0xc0000270ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30_LEN = 32;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR = 0xc0000120ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR_LEN = 32;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMDBG = 0xc0000098ull;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL = 0xc0000138ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO = 17;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING = 30;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING = 31;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU = 0xc0000130ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR_LEN = 32;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0 = 0xc0000110ull;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31 = 0xc0010278ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31_LEN = 32;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4 = 0xc0010220ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4_LEN = 32;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDBGPRO = 0xc00200a8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR_LEN = 30;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0 = 0xc0020200ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0_LEN = 32;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB = 0xc00300b0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY = 33;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING = 34;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO = 49;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING = 61;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING = 62;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING = 63;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30 = 0xc0030438ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1_LEN = 32;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_CCSR_RW = 0xc0060480ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_CLEAR = 0xc0060488ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_OR = 0xc0060490ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_CCSR_OCB_OCI_CCSR_CORE_CONFIG = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_CCSR_OCB_OCI_CCSR_CORE_CONFIG_LEN = 32;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD1A = 0xc0063938ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD1A_CMD1A_RESERVED_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD1A__CLEAR_STICKY_BITS_1A = 1;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD1A = 0xc0063940ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD1A_OCB_OCI_O2SWD1A_O2S_WDATA_1A = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD1A_OCB_OCI_O2SWD1A_O2S_WDATA_1A_LEN = 32;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR0 = 0xc0061040ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR0_LINEAR_WINDOW_ENABLE = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR0_SPARE_0 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR0_SPARE_0_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR0_LINEAR_WINDOW_BAR = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR0_LINEAR_WINDOW_BAR_LEN = 17;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR0_LINEAR_WINDOW_MASK = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR0_LINEAR_WINDOW_MASK_LEN = 12;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR0 = 0xc0061050ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR0_LINEAR_WINDOW_SCRESP = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR0_LINEAR_WINDOW_SCRESP_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR0_SPARE0 = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR0_SPARE0_LEN = 5;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLBR3 = 0xc0061180ull;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS2 = 0xc0061108ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS2_PULL_FULL = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS2_PULL_EMPTY = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS2_SPARE = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS2_SPARE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS2_PULL_INTR_ACTION_0_1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS2_PULL_INTR_ACTION_0_1_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS2_PULL_LENGTH = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS2_PULL_LENGTH_LEN = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS2_PULL_WRITE_PTR = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS2_PULL_WRITE_PTR_LEN = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS2_PULL_READ_PTR = 21;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS2_PULL_READ_PTR_LEN = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS2_PULL_ENABLE = 31;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS2_RW = 0xc0060530ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_CLEAR = 0xc0060538ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_OR = 0xc0060540ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS2_OCB_OCI_OCCS2_OCC_SCRATCH_2 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS2_OCB_OCI_OCCS2_OCC_SCRATCH_2_LEN = 32;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR = 0xc0062800ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q0RR = 0xc0062840ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q0RR_OCB_OCI_OPIT1Q0RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q0RR_OCB_OCI_OPIT1Q0RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3 = 0xc0062058ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR = 0xc0062880ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7 = 0xc00620b8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR = 0xc00628c0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR = 0xc0062900ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR = 0xc0062940ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1 = 0xc0062148ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR = 0xc0062980ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5 = 0xc00621a8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR = 0xc00629c0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C1 = 0xc0062208ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD_LEN = 17;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C18 = 0xc0062290ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD_LEN = 17;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR = 0xc0062a90ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD_LEN = 17;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C30 = 0xc00622f0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD_LEN = 17;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR = 0xc0062a38ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_PAYLOAD_LEN = 17;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C29 = 0xc00623e8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_PAYLOAD_LEN = 17;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR = 0xc0062b38ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_PAYLOAD_LEN = 17;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR = 0xc0062c18ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_0_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_1_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_2 = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_2_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_3 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_3_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_4 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_4_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_5 = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_5_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_6 = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_6_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_7 = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_7_LEN = 4;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR = 0xc0062c28ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_0_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_1_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_2 = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_2_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_3 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_3_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_4 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_4_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_5 = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_5_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_6 = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_6_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_7 = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_7_LEN = 4;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3 = 0xc0062438ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_0_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_1_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_2 = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_2_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_3 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_3_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_4 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_4_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_5 = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_5_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_6 = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_6_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_7 = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_7_LEN = 4;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITFSV = 0xc00624a0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITFSV_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITFSV_0_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITFSV_1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITFSV_1_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITFSV_2 = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITFSV_2_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITFSV_3 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITFSV_3_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITFSV_4 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITFSV_4_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITFSV_5 = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITFSV_5_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITFSV_6 = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITFSV_6_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITFSV_7 = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITFSV_7_LEN = 4;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICECC = 0xc0063c38ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_ECC_ERR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICECC_CONTINUOUS_INJECT = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_TYPE = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_DATA_OR_ECC = 3;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRBV0 = 0xc0050020ull;

static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRBV0_SRAM_SRBV0_BOOT_VECTOR_WORD0 = 0;
static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRBV0_SRAM_SRBV0_BOOT_VECTOR_WORD0_LEN = 32;
// oci_proc/reg00007.H

#ifndef __PPE_HCODE__
}
}
#include "oci_proc/reg00007.H"
#endif
#endif
