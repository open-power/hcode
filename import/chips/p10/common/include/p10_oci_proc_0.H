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

#include "proc_scomt.H"

#ifndef __p10_oci_proc_0_H_
#define __p10_oci_proc_0_H_


namespace scomt
{
namespace oci_proc
{


static const uint32_t TP_TPBR_PBA_PBAO_PBAOCR1 = 0xc00400d8ull;

static const uint32_t TP_TPBR_PBA_PBAO_PBAOCR1_PBAOCR1_COUNT = 44;
static const uint32_t TP_TPBR_PBA_PBAO_PBAOCR1_PBAOCR1_COUNT_LEN = 20;
// oci_proc/reg00000.H

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
// oci_proc/reg00000.H

static const uint32_t TP_TPBR_PBA_PBAO_PBAXISHINC0 = 0xc00401c0ull;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR29 = 0xc0000268ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR29_OCB_OCI_GPEXIVDR28_GPR29 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR29_OCB_OCI_GPEXIVDR28_GPR29_LEN = 32;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR9 = 0xc0000248ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9_LEN = 32;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXILR = 0xc0000188ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXILR_OCB_OCI_GPEXIDBGINF_LR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXILR_OCB_OCI_GPEXIDBGINF_LR_LEN = 32;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIMEM = 0xc00000b8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIMEM_ADDR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIMEM_ADDR_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIMEM_R_NW = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIMEM_BUSY = 33;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING = 34;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIMEM_BYTE_ENABLE = 35;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIMEM_BYTE_ENABLE_LEN = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIMEM_LINE_MODE = 43;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIMEM_ERROR = 49;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIMEM_ERROR_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIMEM_IFETCH_PENDING = 62;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIMEM_DATAOP_PENDING = 63;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR8 = 0xc0000420ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR8_8 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR8_8_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR8_9 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR8_9_LEN = 32;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGINF = 0xc00100f8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGINF_SRR0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGINF_SRR0_LEN = 30;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGINF_LR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDBGINF_LR_LEN = 32;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR2 = 0xc0010210ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR2_OCB_OCI_GPEXIVDR2_GPR2 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR2_OCB_OCI_GPEXIVDR2_GPR2_LEN = 32;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR28 = 0xc0010260ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR28_OCB_OCI_GPEXIVDR28_GPR28 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR28_OCB_OCI_GPEXIVDR28_GPR28_LEN = 32;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDRX = 0xc0010428ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDRX_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDRX_0_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDRX_3 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDRX_3_LEN = 32;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL = 0xc0020178ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_ERR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_POPULATE_PENDING = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_VALID = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_VALID_LEN = 4;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU = 0xc0020170ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR_LEN = 27;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR6 = 0xc0020230ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6_LEN = 32;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMRA = 0xc0020088ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMRA_OCB_OCI_GPEOXIXCR_XCR = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIRAMRA_OCB_OCI_GPEOXIXCR_XCR_LEN = 3;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR28 = 0xc0020430ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR28_8 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR28_8_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR28_9 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR28_9_LEN = 32;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL = 0xc0030000ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_WATCHDOG_SEL = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_WATCHDOG_SEL_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_FIT_SEL = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_FIT_SEL_LEN = 4;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DERP0 = 0xc0060c00ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DERP0_DEND = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DERP0_DEND_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DERP0_SOR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DERP0_SOR_LEN = 32;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1 = 0xc0063900ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_FRAME_SIZE_1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_FRAME_SIZE_1_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_OUT_COUNT1_1 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_OUT_COUNT1_1_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_DELAY1_1 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_DELAY1_1_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_COUNT1_1 = 18;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_COUNT1_1_LEN = 6;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSES2 = 0xc0061130ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSES2_SH_READ_UNDERFLOW = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSES2_LL_WRITE_OVERFLOW = 1;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCISR1 = 0xc0060388ull;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_ODISR1 = 0xc0060398ull;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIEPR1_RW = 0xc0060160ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_CLEAR = 0xc0060168ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_OR = 0xc0060170ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIEPR1_OCB_OCI_OIEPR1_INTERRUPT_EDGE_POL_1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIEPR1_OCB_OCI_OIEPR1_INTERRUPT_EDGE_POL_1_LEN = 32;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIMR1_RW = 0xc0060120ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_CLEAR = 0xc0060128ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_OR = 0xc0060130ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIMR1_OCB_OCI_OIMR1_INTERRUPT_MASK_1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIMR1_OCB_OCI_OIMR1_INTERRUPT_MASK_1_LEN = 32;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OINKR1 = 0xc0060180ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OINKR1_OCB_OCI_OINKR1_INTERRUPT_INPUT_1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OINKR1_OCB_OCI_OINKR1_INTERRUPT_INPUT_1_LEN = 32;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR1A_RW = 0xc0060280ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_CLEAR = 0xc0060288ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_OR = 0xc0060290ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR1A_OCB_OCI_OIRR1A_INTERRUPT_ROUTE_1_A = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR1A_OCB_OCI_OIRR1A_INTERRUPT_ROUTE_1_A_LEN = 32;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7RR = 0xc0062838ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7RR_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7RR_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5 = 0xc0062068ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5_OCB_OCI_OPIT1Q5RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5_OCB_OCI_OPIT1Q5RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q7RR = 0xc0062878ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q7RR_OCB_OCI_OPIT1Q7RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q7RR_OCB_OCI_OPIT1Q7RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q1 = 0xc0062088ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q1_OCB_OCI_OPIT2Q1RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q1_OCB_OCI_OPIT2Q1RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7RR = 0xc00628b8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7RR_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7RR_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7RR = 0xc00628f8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7RR_OCB_OCI_OPIT3Q7RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q7RR_OCB_OCI_OPIT3Q7RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q7RR = 0xc0062938ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q7RR_OCB_OCI_OPIT4Q7RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q7RR_OCB_OCI_OPIT4Q7RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q7 = 0xc0062178ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q7_OCB_OCI_OPIT5Q7RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q7_OCB_OCI_OPIT5Q7RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q7RR = 0xc0062978ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q7RR_OCB_OCI_OPIT5Q7RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q7RR_OCB_OCI_OPIT5Q7RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q3 = 0xc0062198ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q3_OCB_OCI_OPIT6Q3RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q3_OCB_OCI_OPIT6Q3RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q7RR = 0xc00629b8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q7RR_OCB_OCI_OPIT6Q7RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q7RR_OCB_OCI_OPIT6Q7RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7RR = 0xc00629f8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7RR_OCB_OCI_OPIT7Q7RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7RR_OCB_OCI_OPIT7Q7RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C0RR = 0xc0062a00ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C0RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C0RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C0RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C0RR_PAYLOAD_LEN = 17;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C29 = 0xc00622e8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C29_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C29_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C29_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C29_PAYLOAD_LEN = 17;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C7 = 0xc0062238ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C7_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C7_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C7_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C7_PAYLOAD_LEN = 17;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C0RR = 0xc0062b00ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C0RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C0RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C0RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C0RR_PAYLOAD_LEN = 17;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C18 = 0xc0062390ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C18_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C18_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C18_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C18_PAYLOAD_LEN = 17;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C18RR = 0xc0062b90ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C18RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C18RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C18RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C18RR_PAYLOAD_LEN = 17;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C30 = 0xc00623f0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C30_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C30_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C30_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C30_PAYLOAD_LEN = 17;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C9 = 0xc0062348ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C9_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C9_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C9_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C9_PAYLOAD_LEN = 17;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITFPRD_RO = 0xc00634a0ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITFPRD_WO_CLEAR = 0xc00634a8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITFPRD_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITFPRD_1 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITFPRD_2 = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITFPRD_3 = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITFPRD_4 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITFPRD_5 = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITFPRD_6 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITFPRD_7 = 7;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2SCR2 = 0xc0064210ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2SCR2_OCB_OCI_P2SCR2_P2S_INTER_FRAME_DELAY = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2SCR2_OCB_OCI_P2SCR2_P2S_INTER_FRAME_DELAY_LEN = 17;
// oci_proc/reg00000.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1 = 0xc0063c28ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICDCM1_OCB_OCI_WOFICDCM1_DCM_MESSAGE_LEN = 64;
// oci_proc/reg00000.H

}
}
#include "oci_proc/reg00000.H"
#endif
