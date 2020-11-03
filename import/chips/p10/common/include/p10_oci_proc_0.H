/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_oci_proc_0.H $            */
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

#ifndef __p10_oci_proc_0_H_
#define __p10_oci_proc_0_H_


#ifndef __PPE_HCODE__
namespace scomt
{
namespace oci_proc
{
#endif


//>> [TP_TPBR_PBA_PBAO_PBASLVCTL1]
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL1 = 0xc0040028ull;

static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL1_ENABLE = 0;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_MATCH_VALUE = 1;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_MATCH_VALUE_LEN = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_4 = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_CARE_MASK = 5;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_CARE_MASK_LEN = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TTYPE = 8;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TTYPE_LEN = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_11_14 = 11;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_11_14_LEN = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_TTYPE = 15;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_PREFETCH_CTL = 16;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_PREFETCH_CTL_LEN = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_INVALIDATE_CTL = 18;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_W = 19;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_A = 20;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_B = 21;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_C = 22;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_23 = 23;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL1_DIS_WRITE_GATHER = 24;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL1_WR_GATHER_TIMEOUT = 25;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL1_WR_GATHER_TIMEOUT_LEN = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TSIZE = 28;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TSIZE_LEN = 8;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL1_EXTADDR = 36;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL1_EXTADDR_LEN = 14;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_50 = 50;
//<< [TP_TPBR_PBA_PBAO_PBASLVCTL1]
// oci_proc/reg00000.H

//>> [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL = 0xc0020178ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_ERR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_POPULATE_PENDING = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_VALID = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_VALID_LEN = 4;
//<< [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL]
// oci_proc/reg00000.H

//>> [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU = 0xc0020170ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR_LEN = 27;
//<< [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU]
// oci_proc/reg00000.H

//>> [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL = 0xc0030000ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_WATCHDOG_SEL = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_WATCHDOG_SEL_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_FIT_SEL = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_FIT_SEL_LEN = 4;
//<< [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL]
// oci_proc/reg00000.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1 = 0xc0063900ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_FRAME_SIZE_1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_FRAME_SIZE_1_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_OUT_COUNT1_1 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_OUT_COUNT1_1_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_DELAY1_1 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_DELAY1_1_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_COUNT1_1 = 18;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_COUNT1_1_LEN = 6;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1]
// oci_proc/reg00000.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCBSES2]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSES2 = 0xc0061130ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSES2_SH_READ_UNDERFLOW = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSES2_LL_WRITE_OVERFLOW = 1;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCBSES2]
// oci_proc/reg00000.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OIEPR1]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIEPR1_RW = 0xc0060160ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_CLEAR = 0xc0060168ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_OR = 0xc0060170ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIEPR1_OCB_OCI_OIEPR1_INTERRUPT_EDGE_POL_1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIEPR1_OCB_OCI_OIEPR1_INTERRUPT_EDGE_POL_1_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_OIEPR1]
// oci_proc/reg00000.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OIMR1]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIMR1_RW = 0xc0060120ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_CLEAR = 0xc0060128ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_OR = 0xc0060130ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIMR1_OCB_OCI_OIMR1_INTERRUPT_MASK_1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIMR1_OCB_OCI_OIMR1_INTERRUPT_MASK_1_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_OIMR1]
// oci_proc/reg00000.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OINKR1]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OINKR1 = 0xc0060180ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OINKR1_OCB_OCI_OINKR1_INTERRUPT_INPUT_1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OINKR1_OCB_OCI_OINKR1_INTERRUPT_INPUT_1_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_OINKR1]
// oci_proc/reg00000.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OIRR1A]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR1A_RW = 0xc0060280ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_CLEAR = 0xc0060288ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_OR = 0xc0060290ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR1A_OCB_OCI_OIRR1A_INTERRUPT_ROUTE_1_A = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR1A_OCB_OCI_OIRR1A_INTERRUPT_ROUTE_1_A_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_OIRR1A]
// oci_proc/reg00000.H

//>> [TP_TPCHIP_OCC_OCI_OCB_P2S_CR1]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CR1 = 0xc0064208ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_BRIDGE_ENABLE = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_DEVICE = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPOL = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPHA = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CLOCK_DIVIDER = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CLOCK_DIVIDER_LEN = 10;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CR1_RESERVED_2 = 14;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CR1_RESERVED_2_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_NR_OF_FRAMES = 17;
//<< [TP_TPCHIP_OCC_OCI_OCB_P2S_CR1]
// oci_proc/reg00000.H

//>> [TP_TPCHIP_OCC_OCI_OCB_P2S_STAT]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_STAT = 0xc0064218ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_ONGOING = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_1_4 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_1_4_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_WRITE_WHILE_BRIDGE_BUSY_ERR = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_6 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_FSM_ERR = 7;
//<< [TP_TPCHIP_OCC_OCI_OCB_P2S_STAT]
// oci_proc/reg00000.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "oci_proc/reg00000.H"
#include "oci_proc/reg00001.H"
#endif
#endif
