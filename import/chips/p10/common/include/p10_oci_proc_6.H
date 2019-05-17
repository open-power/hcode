/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_oci_proc_6.H $            */
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

#ifndef __p10_oci_proc_6_H_
#define __p10_oci_proc_6_H_


namespace scomt
{
namespace oci_proc
{


static const uint32_t TP_TPBR_PBA_PBAO_BCDE_OCIBAR = 0xc00400a0ull;

static const uint32_t TP_TPBR_PBA_PBAO_BCDE_OCIBAR_BCDE_OCIBAR_ADDR = 0;
static const uint32_t TP_TPBR_PBA_PBAO_BCDE_OCIBAR_BCDE_OCIBAR_ADDR_LEN = 25;
// oci_proc/reg00007.H

static const uint32_t TP_TPBR_PBA_PBAO_BCDE_STAT = 0xc0040090ull;

static const uint32_t TP_TPBR_PBA_PBAO_BCDE_STAT_RUNNING = 0;
static const uint32_t TP_TPBR_PBA_PBAO_BCDE_STAT_WAITING = 1;
static const uint32_t TP_TPBR_PBA_PBAO_BCDE_STAT_WRCMP = 2;
static const uint32_t TP_TPBR_PBA_PBAO_BCDE_STAT_WRCMP_LEN = 6;
static const uint32_t TP_TPBR_PBA_PBAO_BCDE_STAT_RDCMP = 14;
static const uint32_t TP_TPBR_PBA_PBAO_BCDE_STAT_RDCMP_LEN = 6;
static const uint32_t TP_TPBR_PBA_PBAO_BCDE_STAT_DEBUG = 20;
static const uint32_t TP_TPBR_PBA_PBAO_BCDE_STAT_DEBUG_LEN = 9;
static const uint32_t TP_TPBR_PBA_PBAO_BCDE_STAT_STOPPED = 29;
static const uint32_t TP_TPBR_PBA_PBAO_BCDE_STAT_ERROR = 30;
static const uint32_t TP_TPBR_PBA_PBAO_BCDE_STAT_DONE = 31;
// oci_proc/reg00007.H

static const uint32_t TP_TPBR_PBA_PBAO_PBAOCR0 = 0xc00400d0ull;

static const uint32_t TP_TPBR_PBA_PBAO_PBAOCR0_PBAOCR0_COUNT = 44;
static const uint32_t TP_TPBR_PBA_PBAO_PBAOCR0_PBAOCR0_COUNT_LEN = 20;
// oci_proc/reg00007.H

static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL0 = 0xc0040020ull;

static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL0_ENABLE = 0;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL0_MID_MATCH_VALUE = 1;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL0_MID_MATCH_VALUE_LEN = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL0_RESERVED_4 = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL0_MID_CARE_MASK = 5;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL0_MID_CARE_MASK_LEN = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL0_WRITE_TTYPE = 8;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL0_WRITE_TTYPE_LEN = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL0_RESERVED_11_14 = 11;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL0_RESERVED_11_14_LEN = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL0_READ_TTYPE = 15;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL0_READ_PREFETCH_CTL = 16;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL0_READ_PREFETCH_CTL_LEN = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL0_BUF_INVALIDATE_CTL = 18;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL0_BUF_ALLOC_W = 19;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL0_BUF_ALLOC_A = 20;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL0_BUF_ALLOC_B = 21;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL0_BUF_ALLOC_C = 22;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL0_RESERVED_23 = 23;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL0_DIS_WRITE_GATHER = 24;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL0_WR_GATHER_TIMEOUT = 25;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL0_WR_GATHER_TIMEOUT_LEN = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL0_WRITE_TSIZE = 28;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL0_WRITE_TSIZE_LEN = 8;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL0_EXTADDR = 36;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL0_EXTADDR_LEN = 14;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL0_RESERVED_50 = 50;
// oci_proc/reg00007.H

static const uint32_t TP_TPBR_PBA_PBAO_PBAXISHINC1 = 0xc00401e0ull;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR28 = 0xc0000260ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR28_OCB_OCI_GPEXIVDR28_GPR28 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR28_OCB_OCI_GPEXIVDR28_GPR28_LEN = 32;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR8 = 0xc0000240ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR8_OCB_OCI_GPEXIVDR8_GPR8 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR8_OCB_OCI_GPEXIVDR8_GPR8_LEN = 32;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGPRO = 0xc00100a8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR_LEN = 30;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR29 = 0xc0010268ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR29_OCB_OCI_GPEXIVDR28_GPR29 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR29_OCB_OCI_GPEXIVDR28_GPR29_LEN = 32;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR3 = 0xc0010218ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR3_OCB_OCI_GPEXIVDR2_GPR3 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR3_OCB_OCI_GPEXIVDR2_GPR3_LEN = 32;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIIR = 0xc0010120ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR_LEN = 32;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIB = 0xc00100b0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIB_ADDR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIB_ADDR_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIB_R_NW = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIB_BUSY = 33;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING = 34;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIB_RSP_INFO = 49;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIB_RSP_INFO_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIB_RESET_PENDING = 61;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIB_IFETCH_PENDING = 62;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISIB_DATAOP_PENDING = 63;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR2 = 0xc0010408ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR2_2 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR2_2_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR2_3 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR2_3_LEN = 32;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCAC = 0xc00200d0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCAC_TAG_ADDR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCAC_TAG_ADDR_LEN = 27;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCAC_ERR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCAC_POPULATE_PENDING = 35;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCAC_VALID = 36;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCAC_VALID_LEN = 4;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR7 = 0xc0020238ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR7_OCB_OCI_GPEXIVDR6_GPR7 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR7_OCB_OCI_GPEXIVDR6_GPR7_LEN = 32;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR6 = 0xc0020418ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR6_6 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR6_6_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR6_7 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR6_7_LEN = 32;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCACL = 0xc0030178ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCACL_ERR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCACL_POPULATE_PENDING = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCACL_VALID = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCACL_VALID_LEN = 4;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCACU = 0xc0030170ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR_LEN = 27;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMDBG = 0xc0030098ull;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMRA = 0xc0030088ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMRA_OCB_OCI_GPEOXIXCR_XCR = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMRA_OCB_OCI_GPEOXIXCR_XCR_LEN = 3;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGBL = 0xc0030158ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGBL_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING = 3;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGBU = 0xc0030150ull;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR28 = 0xc0030430ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR28_8 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR28_8_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR28_9 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR28_9_LEN = 32;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DERP1 = 0xc0060c10ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DERP1_DEND = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DERP1_DEND_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DERP1_SOR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DERP1_SOR_LEN = 32;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD2A = 0xc0063a38ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD2A_CMD2A_RESERVED_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD2A__CLEAR_STICKY_BITS_2A = 1;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF0 = 0xc0063800ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF0_FRAME_SIZE_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF0_FRAME_SIZE_0_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF0_OUT_COUNT1_0 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF0_OUT_COUNT1_0_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF0_IN_DELAY1_0 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF0_IN_DELAY1_0_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF0_IN_COUNT1_0 = 18;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF0_IN_COUNT1_0_LEN = 6;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD0A = 0xc0063848ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD0A_OCB_OCI_O2SRD0A_O2S_RDATA_0A = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD0A_OCB_OCI_O2SRD0A_O2S_RDATA_0A_LEN = 32;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD2A = 0xc0063a40ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD2A_OCB_OCI_O2SWD2A_O2S_WDATA_2A = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD2A_OCB_OCI_O2SWD2A_O2S_WDATA_2A_LEN = 32;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSES3 = 0xc00611b0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSES3_SH_READ_UNDERFLOW = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSES3_LL_WRITE_OVERFLOW = 1;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCHBR = 0xc0060478ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCHBR_COUNT = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCHBR_COUNT_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCHBR_EN = 16;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCISR0 = 0xc0060308ull;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ODISR0 = 0xc0060318ull;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OEHDR = 0xc0060420ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OEHDR_OCB_OCI_OEHDR_EVENT2HALT_DELAY = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OEHDR_OCB_OCI_OEHDR_EVENT2HALT_DELAY_LEN = 20;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIEPR0_RW = 0xc0060060ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIEPR0_WO_CLEAR = 0xc0060068ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIEPR0_WO_OR = 0xc0060070ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIEPR0_OCB_OCI_OIEPR0_INTERRUPT_EDGE_POL_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIEPR0_OCB_OCI_OIEPR0_INTERRUPT_EDGE_POL_0_LEN = 32;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIMR0_RW = 0xc0060020ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIMR0_WO_CLEAR = 0xc0060028ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIMR0_WO_OR = 0xc0060030ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIMR0_OCB_OCI_OIMR0_INTERRUPT_MASK_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIMR0_OCB_OCI_OIMR0_INTERRUPT_MASK_0_LEN = 32;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OINKR0 = 0xc0060080ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OINKR0_OCB_OCI_OINKR0_INTERRUPT_INPUT_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OINKR0_OCB_OCI_OINKR0_INTERRUPT_INPUT_0_LEN = 32;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q4 = 0xc0062060ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q4_OCB_OCI_OPIT1Q4RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q4_OCB_OCI_OPIT1Q4RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0 = 0xc0062080ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q6 = 0xc0062170ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q6_OCB_OCI_OPIT5Q6RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q6_OCB_OCI_OPIT5Q6RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2 = 0xc0062190ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2_OCB_OCI_OPIT6Q2RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2_OCB_OCI_OPIT6Q2RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7PRA_RO = 0xc00631c0ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7PRA_WO_CLEAR = 0xc00631c8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7PRA_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7PRA_1 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7PRA_2 = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7PRA_3 = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7PRA_4 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7PRA_5 = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7PRA_6 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7PRA_7 = 7;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C15RR = 0xc0062a78ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C15RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C15RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C15RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C15RR_PAYLOAD_LEN = 17;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C27RR = 0xc0062ad8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C27RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C27RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C27RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C27RR_PAYLOAD_LEN = 17;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C28 = 0xc00622e0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C28_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C28_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C28_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C28_PAYLOAD_LEN = 17;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C30RR = 0xc0062af0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C30RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C30RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C30RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C30RR_PAYLOAD_LEN = 17;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C6 = 0xc0062230ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C6_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C6_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C6_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C6_PAYLOAD_LEN = 17;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C12RR = 0xc0062b60ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C12RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C12RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C12RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C12RR_PAYLOAD_LEN = 17;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C19 = 0xc0062398ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C19_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C19_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C19_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C19_PAYLOAD_LEN = 17;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C20RR = 0xc0062ba0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C20RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C20RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C20RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C20RR_PAYLOAD_LEN = 17;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C31 = 0xc00623f8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C31_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C31_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C31_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C31_PAYLOAD_LEN = 17;
// oci_proc/reg00007.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C8 = 0xc0062340ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C8_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C8_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C8_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C8_PAYLOAD_LEN = 17;
// oci_proc/reg00008.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICWD = 0xc0063c20ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICWD_HIGH = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICWD_HIGH_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICWD_LOW = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICWD_LOW_LEN = 32;
// oci_proc/reg00008.H

static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRMAP = 0xc0050010ull;

static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRMAP_SOURCE = 0;
static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRMAP_SOURCE_LEN = 14;
static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRMAP_DEST = 16;
static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRMAP_DEST_LEN = 14;
// oci_proc/reg00008.H

}
}
#include "oci_proc/reg00007.H"
#include "oci_proc/reg00008.H"
#endif
