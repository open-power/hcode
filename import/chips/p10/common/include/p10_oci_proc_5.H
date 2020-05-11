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


//>> [TP_TPBR_PBA_PBAO_BCDE_CTL]
static const uint32_t TP_TPBR_PBA_PBAO_BCDE_CTL = 0xc0040080ull;

static const uint32_t TP_TPBR_PBA_PBAO_BCDE_CTL_OP = 0;
static const uint32_t TP_TPBR_PBA_PBAO_BCDE_CTL_ART = 1;
//<< [TP_TPBR_PBA_PBAO_BCDE_CTL]
// oci_proc/reg00007.H

//>> [TP_TPBR_PBA_PBAO_PBAXSHBR1]
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHBR1 = 0xc0040150ull;

static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHBR1_PUSH_START = 0;
static const uint32_t TP_TPBR_PBA_PBAO_PBAXSHBR1_PUSH_START_LEN = 29;
//<< [TP_TPBR_PBA_PBAO_PBAXSHBR1]
// oci_proc/reg00007.H

//>> [TP_TPBR_PBA_PBAO_PBAXSHCS0]
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
//<< [TP_TPBR_PBA_PBAO_PBAXSHCS0]
// oci_proc/reg00007.H

//>> [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMDBG]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMDBG = 0xc0000098ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMDBG_XSR_HS = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMDBG_XSR_HC = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMDBG_XSR_HC_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMDBG_XSR_HCP = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMDBG_XSR_RIP = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMDBG_XSR_SIP = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMDBG_XSR_TRAP = 7;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMDBG_XSR_IAC = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMDBG_XSR_SIB = 9;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMDBG_XSR_SIB_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMDBG_XSR_RDAC = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMDBG_XSR_WDAC = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMDBG_XSR_WS = 14;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMDBG_XSR_TRH = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMDBG_XSR_SMS = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMDBG_XSR_SMS_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMDBG_XSR_LP = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMDBG_XSR_EP = 21;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMDBG_XSR_PTR = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMDBG_XSR_ST = 25;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMDBG_XSR_MFE = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMDBG_XSR_MCS = 29;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMDBG_XSR_MCS_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMDBG_SPRG0 = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMDBG_SPRG0_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIRAMDBG]
// oci_proc/reg00007.H

//>> [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDBGPRO]
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDBGPRO = 0xc00200a8ull;

static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDBGPRO_XSR_HS = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDBGPRO_XSR_HC = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDBGPRO_XSR_HC_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDBGPRO_XSR_HCP = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDBGPRO_XSR_RIP = 5;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDBGPRO_XSR_SIP = 6;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDBGPRO_XSR_TRAP = 7;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDBGPRO_XSR_IAC = 8;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDBGPRO_XSR_SIB = 9;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDBGPRO_XSR_SIB_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDBGPRO_XSR_RDAC = 12;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDBGPRO_XSR_WDAC = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDBGPRO_XSR_WS = 14;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDBGPRO_XSR_TRH = 15;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDBGPRO_XSR_SMS = 16;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDBGPRO_XSR_SMS_LEN = 4;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDBGPRO_XSR_LP = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDBGPRO_XSR_EP = 21;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDBGPRO_XSR_PTR = 24;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDBGPRO_XSR_ST = 25;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDBGPRO_XSR_MFE = 28;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDBGPRO_XSR_MCS = 29;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDBGPRO_XSR_MCS_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR = 32;
static const uint32_t TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR_LEN = 30;
//<< [TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDBGPRO]
// oci_proc/reg00007.H

//>> [TP_TPCHIP_OCC_OCI_OCB_CCSR]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_CCSR_RW = 0xc0060480ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_CLEAR = 0xc0060488ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_OR = 0xc0060490ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_CCSR_OCB_OCI_CCSR_CORE_CONFIG = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_CCSR_OCB_OCI_CCSR_CORE_CONFIG_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_CCSR]
// oci_proc/reg00007.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCBLWCR0]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR0 = 0xc0061040ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR0_LINEAR_WINDOW_ENABLE = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR0_SPARE_0 = 1;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR0_SPARE_0_LEN = 2;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR0_LINEAR_WINDOW_BAR = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR0_LINEAR_WINDOW_BAR_LEN = 17;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR0_LINEAR_WINDOW_MASK = 20;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWCR0_LINEAR_WINDOW_MASK_LEN = 12;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCBLWCR0]
// oci_proc/reg00007.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCBLWSR0]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR0 = 0xc0061050ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR0_LINEAR_WINDOW_SCRESP = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR0_LINEAR_WINDOW_SCRESP_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR0_SPARE0 = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBLWSR0_SPARE0_LEN = 5;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCBLWSR0]
// oci_proc/reg00007.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCBSLBR3]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLBR3 = 0xc0061180ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLBR3_OCI_REGION = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLBR3_OCI_REGION_LEN = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLBR3_START = 3;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCBSLBR3_START_LEN = 26;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCBSLBR3]
// oci_proc/reg00007.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCBSLCS2]
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
//<< [TP_TPCHIP_OCC_OCI_OCB_OCBSLCS2]
// oci_proc/reg00007.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OCCS2]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS2_RW = 0xc0060530ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_CLEAR = 0xc0060538ull;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_OR = 0xc0060540ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS2_OCB_OCI_OCCS2_OCC_SCRATCH_2 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OCCS2_OCB_OCI_OCCS2_OCC_SCRATCH_2_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_OCCS2]
// oci_proc/reg00007.H

//>> [TP_TPCHIP_OCC_SRAM_CTL_SRBV0]
static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRBV0 = 0xc0050020ull;

static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRBV0_SRAM_SRBV0_BOOT_VECTOR_WORD0 = 0;
static const uint32_t TP_TPCHIP_OCC_SRAM_CTL_SRBV0_SRAM_SRBV0_BOOT_VECTOR_WORD0_LEN = 32;
//<< [TP_TPCHIP_OCC_SRAM_CTL_SRBV0]
// oci_proc/reg00007.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SCMD1A]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD1A = 0xc0063938ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD1A_CMD1A_RESERVED_0 = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SCMD1A_CLEAR_STICKY_BITS_1A = 1;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SCMD1A]
// oci_proc/reg00007.H

//>> [TP_TPCHIP_OCC_OCI_OCB_O2SWD1A]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD1A = 0xc0063940ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD1A_OCB_OCI_O2SWD1A_O2S_WDATA_1A = 0;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_O2SWD1A_OCB_OCI_O2SWD1A_O2S_WDATA_1A_LEN = 32;
//<< [TP_TPCHIP_OCC_OCI_OCB_O2SWD1A]
// oci_proc/reg00007.H

//>> [TP_TPCHIP_OCC_OCI_OCB_OPIT1Q0RR]
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q0RR = 0xc0062840ull;

static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q0RR_OCB_OCI_OPIT1Q0RR_PCB_INTR_PAYLOAD = 13;
static const uint32_t TP_TPCHIP_OCC_OCI_OCB_OPIT1Q0RR_OCB_OCI_OPIT1Q0RR_PCB_INTR_PAYLOAD_LEN = 19;
//<< [TP_TPCHIP_OCC_OCI_OCB_OPIT1Q0RR]
// oci_proc/reg00007.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "oci_proc/reg00007.H"
#endif
#endif
