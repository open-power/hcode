/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_oci_proc_c.H $            */
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

#ifndef __p10_oci_proc_c_H_
#define __p10_oci_proc_c_H_


namespace scomt
{
namespace oci_proc
{


static const uint32_t TP_TPBR_PBA_PBAO_BCUE_STAT = 0xc00400b8ull;

static const uint32_t TP_TPBR_PBA_PBAO_BCUE_STAT_RUNNING = 0;
static const uint32_t TP_TPBR_PBA_PBAO_BCUE_STAT_WAITING = 1;
static const uint32_t TP_TPBR_PBA_PBAO_BCUE_STAT_WRCMP = 2;
static const uint32_t TP_TPBR_PBA_PBAO_BCUE_STAT_WRCMP_LEN = 6;
static const uint32_t TP_TPBR_PBA_PBAO_BCUE_STAT_RDCMP = 14;
static const uint32_t TP_TPBR_PBA_PBAO_BCUE_STAT_RDCMP_LEN = 6;
static const uint32_t TP_TPBR_PBA_PBAO_BCUE_STAT_DEBUG = 20;
static const uint32_t TP_TPBR_PBA_PBAO_BCUE_STAT_DEBUG_LEN = 9;
static const uint32_t TP_TPBR_PBA_PBAO_BCUE_STAT_STOPPED = 29;
static const uint32_t TP_TPBR_PBA_PBAO_BCUE_STAT_ERROR = 30;
static const uint32_t TP_TPBR_PBA_PBAO_BCUE_STAT_DONE = 31;
// oci_proc/reg00015.H

static const uint32_t TP_TPBR_PBA_PBAO_PBAOCR3 = 0xc00400e8ull;

static const uint32_t TP_TPBR_PBA_PBAO_PBAOCR3_PBAOCR3_COUNT = 44;
static const uint32_t TP_TPBR_PBA_PBAO_PBAOCR3_PBAOCR3_COUNT_LEN = 20;
// oci_proc/reg00015.H

static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL3 = 0xc0040038ull;

static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL3_ENABLE = 0;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_MATCH_VALUE = 1;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_MATCH_VALUE_LEN = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_4 = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_CARE_MASK = 5;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_CARE_MASK_LEN = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TTYPE = 8;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TTYPE_LEN = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_11_14 = 11;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_11_14_LEN = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_TTYPE = 15;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_PREFETCH_CTL = 16;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_PREFETCH_CTL_LEN = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_INVALIDATE_CTL = 18;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_W = 19;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_A = 20;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_B = 21;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_C = 22;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_23 = 23;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL3_DIS_WRITE_GATHER = 24;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL3_WR_GATHER_TIMEOUT = 25;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL3_WR_GATHER_TIMEOUT_LEN = 3;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TSIZE = 28;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TSIZE_LEN = 8;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL3_EXTADDR = 36;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL3_EXTADDR_LEN = 14;
static const uint32_t TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_50 = 50;
// oci_proc/reg00015.H

static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHINC0 = 0xc0040140ull;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL = 0xc0000178ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_ERR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_POPULATE_PENDING = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_VALID = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_VALID_LEN = 4;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU = 0xc0000170ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR_LEN = 27;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIEDR = 0xc0000118ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR_LEN = 32;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMRA = 0xc0000088ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMRA_OCB_OCI_GPEOXIXCR_XCR = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMRA_OCB_OCI_GPEOXIXCR_XCR_LEN = 3;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR28 = 0xc0000430ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR28_8 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR28_8_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR28_9 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR28_9_LEN = 32;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR0 = 0xc0010200ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0_LEN = 32;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIIAR = 0xc0010128ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR_LEN = 30;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPESWPR1 = 0xc0020030ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPESWPR1_BAR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPESWPR1_BAR_LEN = 27;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPESWPR1_SIZE = 44;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPESWPR1_SIZE_LEN = 15;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXICTR = 0xc0020190ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR_LEN = 32;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR29 = 0xc0020268ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR29_OCB_OCI_GPEXIVDR28_GPR29 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR29_OCB_OCI_GPEXIVDR28_GPR29_LEN = 32;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR4 = 0xc0020220ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4_LEN = 32;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR28 = 0xc0030260ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR28_OCB_OCI_GPEXIVDR28_GPR28 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR28_OCB_OCI_GPEXIVDR28_GPR28_LEN = 32;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR = 0xc00300a0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_IR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_IR_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_EDR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_EDR_LEN = 32;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIBL = 0xc0030138ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIBL_R_NW = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIBL_BUSY = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIBL_RSP_INFO = 17;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIBL_RSP_INFO_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIBL_IFETCH_PENDING = 30;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIBL_DATAOP_PENDING = 31;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIBU = 0xc0030130ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR_LEN = 32;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DERP2 = 0xc0060c20ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DERP2_DEND = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DERP2_DEND_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DERP2_SOR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DERP2_SOR_LEN = 32;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B = 0xc0063ab8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CMD2B_RESERVED_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B__CLEAR_STICKY_BITS_2B = 1;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD0B = 0xc00638c8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD0B_OCB_OCI_O2SRD0B_O2S_RDATA_0B = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD0B_OCB_OCI_O2SRD0B_O2S_RDATA_0B_LEN = 32;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD2B = 0xc0063ac0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD2B_OCB_OCI_O2SWD2B_O2S_WDATA_2B = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD2B_OCB_OCI_O2SWD2B_O2S_WDATA_2B_LEN = 32;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSES0 = 0xc0061030ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSES0_SH_READ_UNDERFLOW = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSES0_LL_WRITE_OVERFLOW = 1;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCICFG = 0xc0060428ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCICFG_M0_PRIORITY = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCICFG_M0_PRIORITY_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCICFG_M1_PRIORITY = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCICFG_M1_PRIORITY_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCICFG_M2_PRIORITY = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCICFG_M2_PRIORITY_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCICFG_M3_PRIORITY = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCICFG_M3_PRIORITY_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCICFG_M4_PRIORITY = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCICFG_M4_PRIORITY_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCICFG_M5_PRIORITY = 10;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCICFG_M5_PRIORITY_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCICFG_M6_PRIORITY = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCICFG_M6_PRIORITY_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCICFG_M7_PRIORITY = 14;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCICFG_M7_PRIORITY_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCICFG_M0_PRIORITY_SEL = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCICFG_M1_PRIORITY_SEL = 17;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCICFG_M2_PRIORITY_SEL = 18;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCICFG_M3_PRIORITY_SEL = 19;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCICFG_OCICFG_RESERVED_20 = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCICFG_M5_PRIORITY_SEL = 21;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCICFG_OCICFG_RESERVED_23 = 22;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCICFG_M7_PRIORITY_SEL = 23;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCICFG_PLBARB_LOCKERR = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCICFG_SPARE_24_31 = 25;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCICFG_SPARE_24_31_LEN = 7;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR1C_RW = 0xc00602c0ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_CLEAR = 0xc00602c8ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_OR = 0xc00602d0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR1C_OCB_OCI_OIRR1C_INTERRUPT_ROUTE_1_C = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR1C_OCB_OCI_OIRR1C_INTERRUPT_ROUTE_1_C_LEN = 32;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_RO = 0xc0060000ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR = 0xc0060008ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR = 0xc0060010ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_TRACE_TRIGGER = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_ERROR = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE2_ERROR = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE3_ERROR = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE2 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE3 = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_MALF_ALERT = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_PVREF_ERROR = 7;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI2 = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI3 = 9;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_DEBUG_TRIGGER = 10;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_SPARE = 11;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_ATTN = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH0 = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH1 = 14;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_PBA_OVERCURRENT_INDICATOR = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE0_PENDING = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE1_PENDING = 17;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE2_PENDING = 18;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE3_PENDING = 19;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE4_PENDING = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE5_PENDING = 21;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE6_PENDING = 22;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE7_PENDING = 23;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE8_PENDING = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE9_PENDING = 25;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEA_PENDING = 26;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEB_PENDING = 27;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEC_PENDING = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPED_PENDING = 29;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEE_PENDING = 30;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEF_PENDING = 31;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q3RR = 0xc0062818ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q3RR_OCB_OCI_OPIT0Q3RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT0Q3RR_OCB_OCI_OPIT0Q3RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3RR = 0xc0062858ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3RR_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3RR_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q7 = 0xc0062078ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q7_OCB_OCI_OPIT1Q7RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q7_OCB_OCI_OPIT1Q7RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q3 = 0xc0062098ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q3_OCB_OCI_OPIT2Q3RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q3_OCB_OCI_OPIT2Q3RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q3RR = 0xc0062898ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q3RR_OCB_OCI_OPIT2Q3RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q3RR_OCB_OCI_OPIT2Q3RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3RR = 0xc00628d8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3RR_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3RR_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3RR = 0xc0062918ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3RR_OCB_OCI_OPIT4Q3RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3RR_OCB_OCI_OPIT4Q3RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q3RR = 0xc0062958ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q3RR_OCB_OCI_OPIT5Q3RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q3RR_OCB_OCI_OPIT5Q3RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5 = 0xc0062168ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5_OCB_OCI_OPIT5Q5RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5_OCB_OCI_OPIT5Q5RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1 = 0xc0062188ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1_OCB_OCI_OPIT6Q1RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q1_OCB_OCI_OPIT6Q1RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q3RR = 0xc0062998ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q3RR_OCB_OCI_OPIT6Q3RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q3RR_OCB_OCI_OPIT6Q3RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q3RR = 0xc00629d8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q3RR_OCB_OCI_OPIT7Q3RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT7Q3RR_OCB_OCI_OPIT7Q3RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C29RR = 0xc0062ae8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C29RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C29RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C29RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C29RR_PAYLOAD_LEN = 17;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C4RR = 0xc0062a20ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C4RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C4RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C4RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C4RR_PAYLOAD_LEN = 17;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C5 = 0xc0062228ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C5_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C5_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C5_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C5_PAYLOAD_LEN = 17;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C4RR = 0xc0062b20ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C4RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C4RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C4RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C4RR_PAYLOAD_LEN = 17;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0RR = 0xc0062c00ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0RR_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0RR_0_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0RR_1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0RR_1_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0RR_2 = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0RR_2_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0RR_3 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0RR_3_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0RR_4 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0RR_4_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0RR_5 = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0RR_5_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0RR_6 = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0RR_6_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0RR_7 = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITASV0RR_7_LEN = 4;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV2RR = 0xc0062c30ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV2RR_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV2RR_0_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV2RR_1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV2RR_1_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV2RR_2 = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV2RR_2_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV2RR_3 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV2RR_3_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV2RR_4 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV2RR_4_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV2RR_5 = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV2RR_5_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV2RR_6 = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV2RR_6_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV2RR_7 = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITBSV2RR_7_LEN = 4;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITESV = 0xc0062480ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITESV_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITESV_0_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITESV_1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITESV_1_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITESV_2 = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITESV_2_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITESV_3 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITESV_3_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITESV_4 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITESV_4_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITESV_5 = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITESV_5_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITESV_6 = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITESV_6_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITESV_7 = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITESV_7_LEN = 4;
// oci_proc/reg00015.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2SCR0 = 0xc0064200ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2SCR0_FRAME_SIZE = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2SCR0_FRAME_SIZE_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2SCR0_OUT_COUNT1 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2SCR0_OUT_COUNT1_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2SCR0_IN_DELAY1 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2SCR0_IN_DELAY1_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2SCR0_IN_COUNT1 = 18;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2SCR0_IN_COUNT1_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2SCR0_OUT_COUNT2 = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2SCR0_OUT_COUNT2_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2SCR0_IN_DELAY2 = 30;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2SCR0_IN_DELAY2_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2SCR0_IN_COUNT2 = 36;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2SCR0_IN_COUNT2_LEN = 6;
// oci_proc/reg00015.H

}
}
#include "oci_proc/reg00015.H"
#endif
