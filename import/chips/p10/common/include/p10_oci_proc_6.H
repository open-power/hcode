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

#ifndef __PPE_HCODE__
    #include "proc_scomt.H"
#endif

#ifndef __p10_oci_proc_6_H_
#define __p10_oci_proc_6_H_


#ifndef __PPE_HCODE__
namespace scomt
{
namespace oci_proc
{
#endif


//>> [TP_TPBR_PBA_PBAO_BCDE_OCIBAR]
static const uint32_t TP_TPBR_PBA_PBAO_BCDE_OCIBAR = 0xc00400a0ull;

static const uint32_t TP_TPBR_PBA_PBAO_BCDE_OCIBAR_BCDE_OCIBAR_ADDR = 0;
static const uint32_t TP_TPBR_PBA_PBAO_BCDE_OCIBAR_BCDE_OCIBAR_ADDR_LEN = 25;
//<< [TP_TPBR_PBA_PBAO_BCDE_OCIBAR]
// oci_proc/reg00008.H

//>> [TP_TPBR_PBA_PBAO_BCDE_STAT]
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
//<< [TP_TPBR_PBA_PBAO_BCDE_STAT]
// oci_proc/reg00008.H

//>> [TP_TPBR_PBA_PBAO_PBASLVCTL0]
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
//<< [TP_TPBR_PBA_PBAO_PBASLVCTL0]
// oci_proc/reg00008.H

//>> [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGPRO]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGPRO = 0xc00100a8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGPRO_XSR_HS = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGPRO_XSR_HC = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGPRO_XSR_HC_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGPRO_XSR_HCP = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGPRO_XSR_RIP = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGPRO_XSR_SIP = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGPRO_XSR_TRAP = 7;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGPRO_XSR_IAC = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGPRO_XSR_SIB = 9;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGPRO_XSR_SIB_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGPRO_XSR_RDAC = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGPRO_XSR_WDAC = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGPRO_XSR_WS = 14;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGPRO_XSR_TRH = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGPRO_XSR_SMS = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGPRO_XSR_SMS_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGPRO_XSR_LP = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGPRO_XSR_EP = 21;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGPRO_XSR_PTR = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGPRO_XSR_ST = 25;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGPRO_XSR_MFE = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGPRO_XSR_MCS = 29;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGPRO_XSR_MCS_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR_LEN = 30;
//<< [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGPRO]
// oci_proc/reg00008.H

//>> [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCACL]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCACL = 0xc0030178ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCACL_ERR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCACL_POPULATE_PENDING = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCACL_VALID = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCACL_VALID_LEN = 4;
//<< [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCACL]
// oci_proc/reg00008.H

//>> [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCACU]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCACU = 0xc0030170ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR_LEN = 27;
//<< [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCACU]
// oci_proc/reg00008.H

//>> [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMDBG]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMDBG = 0xc0030098ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMDBG_XSR_HS = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMDBG_XSR_HC = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMDBG_XSR_HC_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMDBG_XSR_HCP = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMDBG_XSR_RIP = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMDBG_XSR_SIP = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMDBG_XSR_TRAP = 7;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMDBG_XSR_IAC = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMDBG_XSR_SIB = 9;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMDBG_XSR_SIB_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMDBG_XSR_RDAC = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMDBG_XSR_WDAC = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMDBG_XSR_WS = 14;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMDBG_XSR_TRH = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMDBG_XSR_SMS = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMDBG_XSR_SMS_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMDBG_XSR_LP = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMDBG_XSR_EP = 21;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMDBG_XSR_PTR = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMDBG_XSR_ST = 25;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMDBG_XSR_MFE = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMDBG_XSR_MCS = 29;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMDBG_XSR_MCS_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMDBG_SPRG0 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMDBG_SPRG0_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMDBG]
// oci_proc/reg00008.H

//>> [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGBL]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGBL = 0xc0030158ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGBL_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGBL_SGB_INFO_LOWER_PART1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGBL_SGB_INFO_LOWER_PART1_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGBL_SGB_INFO_LOWER_PART2 = 31;
//<< [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGBL]
// oci_proc/reg00008.H

//>> [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGBU]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGBU = 0xc0030150ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGBU_SGB_INFO_UPPER = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGBU_SGB_INFO_UPPER_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGBU]
// oci_proc/reg00008.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SCMD2A]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD2A = 0xc0063a38ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD2A_CMD2A_RESERVED_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD2A_CLEAR_STICKY_BITS_2A = 1;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SCMD2A]
// oci_proc/reg00008.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF0]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF0 = 0xc0063800ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF0_FRAME_SIZE_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF0_FRAME_SIZE_0_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF0_OUT_COUNT1_0 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF0_OUT_COUNT1_0_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF0_IN_DELAY1_0 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF0_IN_DELAY1_0_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF0_IN_COUNT1_0 = 18;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF0_IN_COUNT1_0_LEN = 6;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF0]
// oci_proc/reg00008.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SRD0A]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD0A = 0xc0063848ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD0A_OCB_OCI_O2SRD0A_O2S_RDATA_0A = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD0A_OCB_OCI_O2SRD0A_O2S_RDATA_0A_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SRD0A]
// oci_proc/reg00008.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SWD2A]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD2A = 0xc0063a40ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD2A_OCB_OCI_O2SWD2A_O2S_WDATA_2A = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD2A_OCB_OCI_O2SWD2A_O2S_WDATA_2A_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SWD2A]
// oci_proc/reg00008.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCBSES3]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSES3 = 0xc00611b0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSES3_SH_READ_UNDERFLOW = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSES3_LL_WRITE_OVERFLOW = 1;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCBSES3]
// oci_proc/reg00008.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCCHBR]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCHBR = 0xc0060478ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCHBR_COUNT = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCHBR_COUNT_LEN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCHBR_EN = 16;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCCHBR]
// oci_proc/reg00008.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OIEPR0]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIEPR0_RW = 0xc0060060ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIEPR0_WO_CLEAR = 0xc0060068ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIEPR0_WO_OR = 0xc0060070ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIEPR0_OCB_OCI_OIEPR0_INTERRUPT_EDGE_POL_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIEPR0_OCB_OCI_OIEPR0_INTERRUPT_EDGE_POL_0_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_OIEPR0]
// oci_proc/reg00008.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OIMR0]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIMR0_RW = 0xc0060020ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIMR0_WO_CLEAR = 0xc0060028ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIMR0_WO_OR = 0xc0060030ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIMR0_OCB_OCI_OIMR0_INTERRUPT_MASK_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIMR0_OCB_OCI_OIMR0_INTERRUPT_MASK_0_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_OIMR0]
// oci_proc/reg00008.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OINKR0]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OINKR0 = 0xc0060080ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OINKR0_OCB_OCI_OINKR0_INTERRUPT_INPUT_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OINKR0_OCB_OCI_OINKR0_INTERRUPT_INPUT_0_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_OINKR0]
// oci_proc/reg00008.H

//>> [TP_TPCHIP_OCC_OCI_OCB_P2S_CR0]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CR0 = 0xc0064200ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CR0_FRAME_SIZE = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CR0_FRAME_SIZE_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CR0_OUT_COUNT1 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CR0_OUT_COUNT1_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CR0_IN_DELAY1 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CR0_IN_DELAY1_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CR0_IN_COUNT1 = 18;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CR0_IN_COUNT1_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CR0_OUT_COUNT2 = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CR0_OUT_COUNT2_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CR0_IN_DELAY2 = 30;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CR0_IN_DELAY2_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CR0_IN_COUNT2 = 36;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CR0_IN_COUNT2_LEN = 6;
//<< [TP_TPCHIP_OCC_OCI_OCB_P2S_CR0]
// oci_proc/reg00009.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "oci_proc/reg00008.H"
#include "oci_proc/reg00009.H"
#endif
#endif
