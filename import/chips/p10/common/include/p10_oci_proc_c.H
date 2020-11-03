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

#ifndef __PPE_HCODE__
    #include "proc_scomt.H"
#endif

#ifndef __p10_oci_proc_c_H_
#define __p10_oci_proc_c_H_


#ifndef __PPE_HCODE__
namespace scomt
{
namespace oci_proc
{
#endif


//>> [TP_TPBR_PBA_PBAO_BCUE_STAT]
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
//<< [TP_TPBR_PBA_PBAO_BCUE_STAT]
// oci_proc/reg00016.H

//>> [TP_TPBR_PBA_PBAO_PBASLVCTL3]
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
//<< [TP_TPBR_PBA_PBAO_PBASLVCTL3]
// oci_proc/reg00016.H

//>> [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL = 0xc0000178ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_ERR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_POPULATE_PENDING = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_VALID = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_VALID_LEN = 4;
//<< [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL]
// oci_proc/reg00016.H

//>> [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU = 0xc0000170ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR_LEN = 27;
//<< [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU]
// oci_proc/reg00016.H

//>> [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR = 0xc00300a0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_IR = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_IR_LEN = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_EDR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_EDR_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR]
// oci_proc/reg00016.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B = 0xc0063ab8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CMD2B_RESERVED_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CLEAR_STICKY_BITS_2B = 1;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B]
// oci_proc/reg00016.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SRD0B]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD0B = 0xc00638c8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD0B_OCB_OCI_O2SRD0B_O2S_RDATA_0B = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SRD0B_OCB_OCI_O2SRD0B_O2S_RDATA_0B_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SRD0B]
// oci_proc/reg00016.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SWD2B]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD2B = 0xc0063ac0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD2B_OCB_OCI_O2SWD2B_O2S_WDATA_2B = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD2B_OCB_OCI_O2SWD2B_O2S_WDATA_2B_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SWD2B]
// oci_proc/reg00016.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCBSES0]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSES0 = 0xc0061030ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSES0_SH_READ_UNDERFLOW = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSES0_LL_WRITE_OVERFLOW = 1;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCBSES0]
// oci_proc/reg00016.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OIRR1C]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR1C_RW = 0xc00602c0ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_CLEAR = 0xc00602c8ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_OR = 0xc00602d0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR1C_OCB_OCI_OIRR1C_INTERRUPT_ROUTE_1_C = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OIRR1C_OCB_OCI_OIRR1C_INTERRUPT_ROUTE_1_C_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_OIRR1C]
// oci_proc/reg00016.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OISR0]
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
//<< [TP_TPCHIP_OCC_OCI_OCB_OISR0]
// oci_proc/reg00016.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "oci_proc/reg00016.H"
#endif
#endif
