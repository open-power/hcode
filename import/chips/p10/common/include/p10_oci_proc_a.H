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


static const uint32_t TP_TPBR_PBA_PBAO_PBAOCR2 = 0xc00400e0ull;

static const uint32_t TP_TPBR_PBA_PBAO_PBAOCR2_PBAOCR2_COUNT = 44;
static const uint32_t TP_TPBR_PBA_PBAO_PBAOCR2_PBAOCR2_COUNT_LEN = 20;
// oci_proc/reg00013.H

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
// oci_proc/reg00013.H

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
// oci_proc/reg00013.H

static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHINC1 = 0xc0040160ull;
// oci_proc/reg00013.H

static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDSTAT = 0xc0040110ull;

static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDSTAT_IN_PROGRESS = 0;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDSTAT_ERROR = 1;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDSTAT_PHASE_STATUS = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDSTAT_PHASE_STATUS_LEN = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDSTAT_CNT_STATUS = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDSTAT_CNT_STATUS_LEN = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDSTAT_RETRY_COUNT = 8;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSNDSTAT_RETRY_COUNT_LEN = 8;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEDBG = 0xc0000010ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEDBG_EN_DBG = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEDBG_HALT_ON_XSTOP = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEDBG_HALT_ON_TRIG = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEDBG_EN_COVERAGE_MODE = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEDBG_EN_INTR_ADDR = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEDBG_EN_TRACE_EXTRA = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEDBG_EN_TRACE_STALL = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEDBG_EN_WAIT_CYCLES = 7;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEDBG_EN_FULL_SPEED = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEDBG_DIS_FLOW_CHANGE = 9;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEDBG_TRACE_MODE_SEL = 10;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEDBG_TRACE_MODE_SEL_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEDBG_RESERVED12_15 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEDBG_RESERVED12_15_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEDBG_FIR_TRIGGER = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEDBG_SPARE = 17;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEDBG_SPARE_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEDBG_TRACE_DATA_SEL = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEDBG_TRACE_DATA_SEL_LEN = 4;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEIVPR = 0xc0000008ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEIVPR_OCB_OCI_GPEIVPR_IVPR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEIVPR_OCB_OCI_GPEIVPR_IVPR_LEN = 23;
// oci_proc/reg00013.H

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
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEOXIXCR = 0xc0000100ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR_LEN = 3;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICAC = 0xc00000c8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICAC_ICACHE_TAG_ADDR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICAC_ICACHE_TAG_ADDR_LEN = 27;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICAC_ICACHE_ERR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING = 34;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING = 35;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICAC_ICACHE_VALID = 36;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICAC_ICACHE_VALID_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICAC_ICACHE_LINE2_VALID = 40;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICAC_ICACHE_LINE2_VALID_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICAC_ICACHE_LINE_PTR = 45;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICAC_ICACHE_LINE2_ERR = 46;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING = 47;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCACL = 0xc0010178ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCACL_ERR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCACL_POPULATE_PENDING = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCACL_VALID = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCACL_VALID_LEN = 4;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCACU = 0xc0010170ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR_LEN = 27;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR1 = 0xc0010208ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1_LEN = 32;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEML = 0xc0010148ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEML_BUSY = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEML_IMPRECISE_ERROR_PENDING = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEML_BYTE_ENABLE = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEML_BYTE_ENABLE_LEN = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEML_LINE_MODE = 11;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEML_ERROR = 17;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEML_ERROR_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEML_IFETCH_PENDING = 30;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEML_DATAOP_PENDING = 31;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEMU = 0xc0010140ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR_LEN = 32;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMRA = 0xc0010088ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMRA_OCB_OCI_GPEOXIXCR_XCR = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMRA_OCB_OCI_GPEOXIXCR_XCR_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMRA_SPRG0 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMRA_SPRG0_LEN = 32;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISRR0 = 0xc0010180ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISRR0_OCB_OCI_GPEXIDBGINF_SRR0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXISRR0_OCB_OCI_GPEXIDBGINF_SRR0_LEN = 30;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR0 = 0xc0010400ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR0_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR0_0_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR0_1 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR0_1_LEN = 32;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR28 = 0xc0010430ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR28_8 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR28_8_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR28_9 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIVDR28_9_LEN = 32;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPESWPR0 = 0xc0020028ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPESWPR0_BAR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPESWPR0_BAR_LEN = 27;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPESWPR0_SIZE = 44;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPESWPR0_SIZE_LEN = 15;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR28 = 0xc0020260ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR28_OCB_OCI_GPEXIVDR28_GPR28 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR28_OCB_OCI_GPEXIVDR28_GPR28_LEN = 32;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR5 = 0xc0020228ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5_LEN = 32;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISGB = 0xc00200c0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISGB_STORE_ADDRESS = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISGB_STORE_ADDRESS_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING = 35;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISGB_SGB_BYTE_VALID = 36;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISGB_SGB_BYTE_VALID_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISGB_SGB_FLUSH_PENDING = 63;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR4 = 0xc0020410ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR4_4 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR4_4_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR4_5 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR4_5_LEN = 32;
// oci_proc/reg00013.H

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
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR29 = 0xc0030268ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR29_OCB_OCI_GPEXIVDR28_GPR29 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR29_OCB_OCI_GPEXIVDR28_GPR29_LEN = 32;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXCR = 0xc0030080ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXCR_OXIXCR_XCR = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXCR_OXIXCR_XCR_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXCR_XICTR_CTR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXCR_XICTR_CTR_LEN = 32;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DERP3 = 0xc0060c30ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DERP3_DEND = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DERP3_DEND_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DERP3_SOR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_DERP3_SOR_LEN = 32;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF2 = 0xc0063a00ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF2_FRAME_SIZE_2 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF2_FRAME_SIZE_2_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF2_OUT_COUNT1_2 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF2_OUT_COUNT1_2_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF2_IN_DELAY1_2 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF2_IN_DELAY1_2_LEN = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF2_IN_COUNT1_2 = 18;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF2_IN_COUNT1_2_LEN = 6;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSES1 = 0xc00610b0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSES1_SH_READ_UNDERFLOW = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSES1_LL_WRITE_OVERFLOW = 1;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR1B_RW = 0xc00602a0ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR1B_WO_CLEAR = 0xc00602a8ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR1B_WO_OR = 0xc00602b0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR1B_OCB_OCI_OIRR1B_INTERRUPT_ROUTE_1_B = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR1B_OCB_OCI_OIRR1B_INTERRUPT_ROUTE_1_B_LEN = 32;
// oci_proc/reg00013.H

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
// oci_proc/reg00013.H

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
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q6 = 0xc0062070ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q6_OCB_OCI_OPIT1Q6RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q6_OCB_OCI_OPIT1Q6RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2 = 0xc0062090ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q4 = 0xc0062160ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q4_OCB_OCI_OPIT5Q4RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT5Q4_OCB_OCI_OPIT5Q4RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0 = 0xc0062180ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD_LEN = 19;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C11RR = 0xc0062a58ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C11RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C11RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C11RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C11RR_PAYLOAD_LEN = 17;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C23RR = 0xc0062ab8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C23RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C23RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C23RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C23RR_PAYLOAD_LEN = 17;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C4 = 0xc0062220ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C4_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C4_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C4_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8C4_PAYLOAD_LEN = 17;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_RO = 0xc0063200ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_WO_CLEAR = 0xc0063208ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_1 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_2 = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_3 = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_4 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_5 = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_6 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_7 = 7;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_8 = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_9 = 9;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_10 = 10;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_11 = 11;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_12 = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_13 = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_14 = 14;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_15 = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_16 = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_17 = 17;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_18 = 18;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_19 = 19;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_20 = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_21 = 21;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_22 = 22;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_23 = 23;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_24 = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_25 = 25;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_26 = 26;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_27 = 27;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_28 = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_29 = 29;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_30 = 30;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT8PRB_31 = 31;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C16RR = 0xc0062b80ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C16RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C16RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C16RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C16RR_PAYLOAD_LEN = 17;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C24RR = 0xc0062bc0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C24RR_SOURCE_CORE = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C24RR_SOURCE_CORE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C24RR_PAYLOAD = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT9C24RR_PAYLOAD_LEN = 17;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITAPRC_RO = 0xc0063400ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITAPRC_RO_CLRPART = 0xc0063408ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITAPRC_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITAPRC_1 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITAPRC_2 = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITAPRC_3 = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITAPRC_4 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITAPRC_5 = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITAPRC_6 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPITAPRC_7 = 7;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CR2 = 0xc0064210ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CR2_OCB_OCI_P2S_CR2_INTER_FRAME_DELAY = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_P2S_CR2_OCB_OCI_P2S_CR2_INTER_FRAME_DELAY_LEN = 17;
// oci_proc/reg00013.H

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICDCM2 = 0xc0063c30ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICDCM2_OCB_OCI_WOFICDCM2_DCM_MESSAGE = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICDCM2_OCB_OCI_WOFICDCM2_DCM_MESSAGE_LEN = 64;
// oci_proc/reg00013.H

#ifndef __PPE_HCODE__
}
}
#include "oci_proc/reg00013.H"
#endif
#endif
