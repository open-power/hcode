/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_oci_proc_3.H $            */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2021                                                    */
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

#ifndef __p10_oci_proc_3_H_
#define __p10_oci_proc_3_H_


#ifndef __PPE_HCODE__
namespace scomt
{
namespace oci_proc
{
#endif


//>> [TP_TPBR_PBA_PBAO_PBAXSHBR0]
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHBR0 = 0xc0040130ull;

static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHBR0_PUSH_START = 0;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHBR0_PUSH_START_LEN = 29;
//<< [TP_TPBR_PBA_PBAO_PBAXSHBR0]
// oci_proc/reg00005.H

//>> [TP_TPBR_PBA_PBAO_PBAXSHCS1]
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHCS1 = 0xc0040158ull;

static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHCS1_PUSH_FULL = 0;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHCS1_PUSH_EMPTY = 1;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHCS1_RESERVED_2_3 = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHCS1_RESERVED_2_3_LEN = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHCS1_PUSH_INTR_ACTION_0_1 = 4;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHCS1_PUSH_INTR_ACTION_0_1_LEN = 2;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHCS1_PUSH_LENGTH = 6;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHCS1_PUSH_LENGTH_LEN = 5;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHCS1_PUSH_WRITE_PTR = 13;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHCS1_PUSH_WRITE_PTR_LEN = 5;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHCS1_PUSH_READ_PTR = 21;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHCS1_PUSH_READ_PTR_LEN = 5;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHCS1_PUSH_ENABLE = 31;
//<< [TP_TPBR_PBA_PBAO_PBAXSHCS1]
// oci_proc/reg00005.H

//>> [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPETSEL]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPETSEL = 0xc0020000ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPETSEL_WATCHDOG_SEL = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPETSEL_WATCHDOG_SEL_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPETSEL_FIT_SEL = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPETSEL_FIT_SEL_LEN = 4;
//<< [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPETSEL]
// oci_proc/reg00005.H

//>> [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISRR0]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISRR0 = 0xc0020180ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISRR0_OCB_OCI_GPEXIDBGINF_SRR0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISRR0_OCB_OCI_GPEXIDBGINF_SRR0_LEN = 30;
//<< [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXISRR0]
// oci_proc/reg00005.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SST0A]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST0A = 0xc0063830ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST0A_ONGOING_0A = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST0A_ST0A_RESERVED_1_4 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST0A_ST0A_RESERVED_1_4_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST0A_WRITE_WHILE_BRIDGE_BUSY_ERR_0A = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST0A_ST0A_RESERVED_6 = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SST0A_FSM_ERR_0A = 7;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SST0A]
// oci_proc/reg00005.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCBLWCR1]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR1 = 0xc00610c0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR1_LINEAR_WINDOW_ENABLE = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR1_SPARE_0 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR1_SPARE_0_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR1_LINEAR_WINDOW_BAR = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR1_LINEAR_WINDOW_BAR_LEN = 17;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR1_LINEAR_WINDOW_MASK = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR1_LINEAR_WINDOW_MASK_LEN = 12;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCBLWCR1]
// oci_proc/reg00005.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCBLWSR1]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR1 = 0xc00610d0ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR1_LINEAR_WINDOW_SCRESP = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR1_LINEAR_WINDOW_SCRESP_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR1_SPARE0 = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR1_SPARE0_LEN = 5;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCBLWSR1]
// oci_proc/reg00005.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCBSLBR2]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLBR2 = 0xc0061100ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLBR2_OCI_REGION = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLBR2_OCI_REGION_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLBR2_START = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLBR2_START_LEN = 26;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCBSLBR2]
// oci_proc/reg00005.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCBSLCS3]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS3 = 0xc0061188ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS3_PULL_FULL = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS3_PULL_EMPTY = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS3_SPARE = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS3_SPARE_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS3_PULL_INTR_ACTION_0_1 = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS3_PULL_INTR_ACTION_0_1_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS3_PULL_LENGTH = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS3_PULL_LENGTH_LEN = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS3_PULL_WRITE_PTR = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS3_PULL_WRITE_PTR_LEN = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS3_PULL_READ_PTR = 21;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS3_PULL_READ_PTR_LEN = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLCS3_PULL_ENABLE = 31;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCBSLCS3]
// oci_proc/reg00005.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCCS3]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS3_RW = 0xc0060548ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS3_WO_CLEAR = 0xc0060550ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS3_WO_OR = 0xc0060558ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS3_OCB_OCI_OCCS3_OCC_SCRATCH_3 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS3_OCB_OCI_OCCS3_OCC_SCRATCH_3_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCCS3]
// oci_proc/reg00005.H

//>> [TP_TPCHIP_OCC_OCI_OCB_WOFICCTRL]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICCTRL = 0xc0063c00ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICCTRL_INTERCHIP_LINK_ENABLE = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICCTRL_INTERCHIP_LINK_RESET = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICCTRL_INTERCHIP_CPOL = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICCTRL_INTERCHIP_CPHA = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICCTRL_INTERCHIP_CLOCK_DIVIDER = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICCTRL_INTERCHIP_CLOCK_DIVIDER_LEN = 10;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICCTRL_RESERVED_14 = 14;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICCTRL_INTERCHIP_WRAP_ENABLE = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICCTRL_INTERCHIP_INTERFACE_ENABLE_NORTH = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICCTRL_INTERCHIP_INTERFACE_ENABLE_SOUTH = 17;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICCTRL_INTERCHIP_SYNC_EN = 18;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICCTRL_RESERVED_19 = 19;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICCTRL_INTERCHIP_ECC_GEN_EN = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICCTRL_INTERCHIP_ECC_CHECK_EN = 21;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICCTRL_RX_FSM_FREEZE_ON_UE = 22;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_WOFICCTRL_INTERCHIP_RESET_ECC_ERR = 23;
//<< [TP_TPCHIP_OCC_OCI_OCB_WOFICCTRL]
// oci_proc/reg00005.H

//>> [TP_TPCHIP_OCC_SRAM_CTL_SRBV1]
static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRBV1 = 0xc0050028ull;

static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRBV1_SRAM_SRBV1_BOOT_VECTOR_WORD1 = 0;
static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRBV1_SRAM_SRBV1_BOOT_VECTOR_WORD1_LEN = 32;
//<< [TP_TPCHIP_OCC_SRAM_CTL_SRBV1]
// oci_proc/reg00005.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "oci_proc/reg00005.H"
#endif
#endif
