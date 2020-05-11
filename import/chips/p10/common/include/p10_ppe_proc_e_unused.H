/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_ppe_proc_e_unused.H $     */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2020                                                         */
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

#ifndef __p10_ppe_proc_e_H_UNUSED__
#define __p10_ppe_proc_e_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_proc
{
#endif


//>> [TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL]
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL = 0x00000100ull;

static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL = 0;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_FIT_SEL_LEN = 4;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL = 4;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL_WATCHDOG_SEL_LEN = 4;
//<< [TP_TPCHIP_PIB_SBE_SBEPM_LCL_TSEL]
// ppe_proc/reg00014.H

//>> [TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC]
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_RW = 0xc0002000ull;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_CLEAR = 0xc0002018ull;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_WO_OR = 0xc0002010ull;

static const uint32_t TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPBR_SBE_INTR = 0;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_19 = 1;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18 = 2;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_18_LEN = 2;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS = 4;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_SBE_EXTERNAL_FIRS_LEN = 4;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET = 8;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_SBE_SPIMST_HARD_RESET_LEN = 5;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_TPSBE_TPOCC_HALT_COMPLEX = 13;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16 = 14;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_RESERVED_16_LEN = 2;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE = 16;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC_PRV_MISC_I2C_TIMEOUT_VALUE_LEN = 32;
//<< [TP_TPCHIP_PIB_SBE_SBEPRV_PRV_MISC]
// ppe_proc/reg00014.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "ppe_proc/reg00014_unused.H"
#endif
#endif
