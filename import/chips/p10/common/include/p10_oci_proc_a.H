/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_oci_proc_a.H $            */
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

#ifndef __p10_oci_proc_a_H_
#define __p10_oci_proc_a_H_


#ifndef __PPE_HCODE__
namespace scomt
{
namespace oci_proc
{
#endif


//>> [TP_TPBR_PBA_PBAO_PBASLVCTL2]
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL2 = 0xc0040030ull;

static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL2_ENABLE = 0;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL2_MID_MATCH_VALUE = 1;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL2_MID_MATCH_VALUE_LEN = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL2_RESERVED_4 = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL2_MID_CARE_MASK = 5;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL2_MID_CARE_MASK_LEN = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL2_WRITE_TTYPE = 8;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL2_WRITE_TTYPE_LEN = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL2_RESERVED_11_14 = 11;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL2_RESERVED_11_14_LEN = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL2_READ_TTYPE = 15;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL2_READ_PREFETCH_CTL = 16;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL2_READ_PREFETCH_CTL_LEN = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL2_BUF_INVALIDATE_CTL = 18;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL2_BUF_ALLOC_W = 19;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL2_BUF_ALLOC_A = 20;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL2_BUF_ALLOC_B = 21;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL2_BUF_ALLOC_C = 22;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL2_RESERVED_23 = 23;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL2_DIS_WRITE_GATHER = 24;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL2_WR_GATHER_TIMEOUT = 25;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL2_WR_GATHER_TIMEOUT_LEN = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL2_WRITE_TSIZE = 28;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL2_WRITE_TSIZE_LEN = 8;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL2_EXTADDR = 36;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL2_EXTADDR_LEN = 14;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL2_RESERVED_50 = 50;
//<< [TP_TPBR_PBA_PBAO_PBASLVCTL2]
// oci_proc/reg00013.H

//>> [TP_TPBR_PBA_PBAO_PBAXCFG]
static const uint32_t TP_TPBR_PBA_PBAO_PBAXCFG = 0xc0040108ull;

static const uint32_t TP_TPBR_PBA_PBAO_PBAXCFG_PBAX_EN = 0;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXCFG_RESERVATION_EN = 1;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXCFG_SND_RESET = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXCFG_RCV_RESET = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXCFG_RCV_GROUPID = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXCFG_RCV_GROUPID_LEN = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXCFG_RCV_CHIPID = 8;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXCFG_RCV_CHIPID_LEN = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXCFG_RESERVED_11 = 11;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXCFG_RCV_BRDCST_GROUP = 12;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXCFG_RCV_BRDCST_GROUP_LEN = 8;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXCFG_RCV_DATATO_DIV = 20;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXCFG_RCV_DATATO_DIV_LEN = 5;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXCFG_RESERVED_25_26 = 25;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXCFG_RESERVED_25_26_LEN = 2;
// ERROR Duplicate Dial         static const uint32_t TP_TPBR_PBA_PBAO_PBAXCFG_RESERVED_25_26 = 25;
// ERROR Duplicate Dial         static const uint32_t TP_TPBR_PBA_PBAO_PBAXCFG_RESERVED_25_26_LEN = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXCFG_SND_RETRY_COUNT_OVERCOM = 27;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXCFG_SND_RETRY_THRESH = 28;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXCFG_SND_RETRY_THRESH_LEN = 8;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXCFG_SND_RSVTO_DIV = 36;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXCFG_SND_RSVTO_DIV_LEN = 5;
//<< [TP_TPBR_PBA_PBAO_PBAXCFG]
// oci_proc/reg00013.H

//>> [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEIVPR]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEIVPR = 0xc0000008ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEIVPR_OCB_OCI_GPEIVPR_IVPR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEIVPR_OCB_OCI_GPEIVPR_IVPR_LEN = 23;
//<< [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEIVPR]
// oci_proc/reg00013.H

//>> [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEMACR]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEMACR = 0xc0000020ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEMACR_MEM_LOW_PRIORITY = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEMACR_MEM_LOW_PRIORITY_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEMACR_MEM_HIGH_PRIORITY = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEMACR_MEM_HIGH_PRIORITY_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEMACR_LOCAL_LOW_PRIORITY = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEMACR_LOCAL_LOW_PRIORITY_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEMACR_LOCAL_HIGH_PRIORITY = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEMACR_LOCAL_HIGH_PRIORITY_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEMACR_SRAM_LOW_PRIORITY = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEMACR_SRAM_LOW_PRIORITY_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEMACR_SRAM_HIGH_PRIORITY = 10;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEMACR_SRAM_HIGH_PRIORITY_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEMACR_WRITE_PROTECT_ENABLE = 12;
//<< [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEMACR]
// oci_proc/reg00013.H

//>> [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCACL]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCACL = 0xc0010178ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCACL_ERR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCACL_POPULATE_PENDING = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCACL_VALID = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCACL_VALID_LEN = 4;
//<< [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCACL]
// oci_proc/reg00013.H

//>> [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCACU]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCACU = 0xc0010170ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR_LEN = 27;
//<< [TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCACU]
// oci_proc/reg00013.H

//>> [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXSR]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXSR = 0xc0020108ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXSR_HS = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXSR_HC = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXSR_HC_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXSR_HCP = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXSR_RIP = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXSR_SIP = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXSR_TRAP = 7;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXSR_IAC = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXSR_SIB = 9;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXSR_SIB_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXSR_RDAC = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXSR_WDAC = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXSR_WS = 14;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXSR_TRH = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXSR_SMS = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXSR_SMS_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXSR_LP = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXSR_EP = 21;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXSR_PTR = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXSR_ST = 25;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXSR_MFE = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXSR_MCS = 29;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXSR_MCS_LEN = 3;
//<< [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXSR]
// oci_proc/reg00013.H

//>> [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXCR]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXCR = 0xc0030080ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXCR_OXIXCR_XCR = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXCR_OXIXCR_XCR_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXCR_XICTR_CTR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXCR_XICTR_CTR_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXCR]
// oci_proc/reg00013.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF2]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF2 = 0xc0063a00ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF2_FRAME_SIZE_2 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF2_FRAME_SIZE_2_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF2_OUT_COUNT1_2 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF2_OUT_COUNT1_2_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF2_IN_DELAY1_2 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF2_IN_DELAY1_2_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF2_IN_COUNT1_2 = 18;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF2_IN_COUNT1_2_LEN = 6;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF2]
// oci_proc/reg00013.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCBSES1]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSES1 = 0xc00610b0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSES1_SH_READ_UNDERFLOW = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSES1_LL_WRITE_OVERFLOW = 1;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCBSES1]
// oci_proc/reg00013.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OIRR1B]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR1B_RW = 0xc00602a0ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR1B_WO_CLEAR = 0xc00602a8ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR1B_WO_OR = 0xc00602b0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR1B_OCB_OCI_OIRR1B_INTERRUPT_ROUTE_1_B = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR1B_OCB_OCI_OIRR1B_INTERRUPT_ROUTE_1_B_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_OIRR1B]
// oci_proc/reg00013.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OISR1]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_RO = 0xc0060100ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_WO_CLEAR = 0xc0060108ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_WO_OR = 0xc0060110ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_DEBUGGER = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_TRACE_TRIGGER = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_SPARE = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_PBA_ERROR = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_GPE0_ERROR = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_GPE1_ERROR = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_CHECK_STOP_PPC405 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_EXTERNAL_TRAP = 7;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_OCC_TIMER0 = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_OCC_TIMER1 = 9;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_IPI0_HI_PRIORITY = 10;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_IPI1_HI_PRIORITY = 11;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_IPI4_HI_PRIORITY = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_I2CM_INTR = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_SPARE_14 = 14;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_DCM_INTF_ONGOING = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_PBAX_OCC_SEND_ATTN = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_PBAX_OCC_PUSH0 = 17;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_PBAX_OCC_PUSH1 = 18;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_PBA_BCDE_ATTN = 19;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_PBA_BCUE_ATTN = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_OCC_STRM0_PULL = 21;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_OCC_STRM0_PUSH = 22;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_OCC_STRM1_PULL = 23;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_OCC_STRM1_PUSH = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_OCC_STRM2_PULL = 25;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_OCC_STRM2_PUSH = 26;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_OCC_STRM3_PULL = 27;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_OCC_STRM3_PUSH = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_IPI0_LO_PRIORITY = 29;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_IPI1_LO_PRIORITY = 30;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR1_IPI4_LO_PRIORITY = 31;
//<< [TP_TPCHIP_OCC_OCI_OCB_OISR1]
// oci_proc/reg00013.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OPIT1PRA]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1PRA_RO = 0xc0063040ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1PRA_WO_CLEAR = 0xc0063048ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1PRA_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1PRA_1 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1PRA_2 = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1PRA_3 = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1PRA_4 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1PRA_5 = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1PRA_6 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1PRA_7 = 7;
//<< [TP_TPCHIP_OCC_OCI_OCB_OPIT1PRA]
// oci_proc/reg00013.H

//>> [TP_TPCHIP_OCC_OCI_OCB_P2S_CR2]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CR2 = 0xc0064210ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CR2_OCB_OCI_P2S_CR2_INTER_FRAME_DELAY = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CR2_OCB_OCI_P2S_CR2_INTER_FRAME_DELAY_LEN = 17;
//<< [TP_TPCHIP_OCC_OCI_OCB_P2S_CR2]
// oci_proc/reg00013.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "oci_proc/reg00013.H"
#endif
#endif
