/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_ppe_proc_a_unused.H $     */
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

#ifndef __p10_ppe_proc_a_H_UNUSED__
#define __p10_ppe_proc_a_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_proc
{
#endif


//>> [TP_TPCHIP_PIB_SBE_SBEPM_LCL_EINR]
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_EINR = 0x000000a0ull;

static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_EINR_SBE_START0 = 0;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_EINR_SBE_START1 = 1;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_EINR_SBE_INTR0 = 2;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_EINR_SBE_INTR1 = 3;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_EINR_DRTM_REQ = 4;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_EINR_SBEFIFO_RESET = 5;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_EINR_SBEFIFO_DATA = 6;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_EINR_SPARE = 7;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_EINR_TRIG = 8;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_EINR_XSTOP = 9;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_EINR_SBEHFIFO_RESET = 10;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_EINR_SBEHFIFO_DATA = 11;
//<< [TP_TPCHIP_PIB_SBE_SBEPM_LCL_EINR]
// ppe_proc/reg00010.H

//>> [TP_TPCHIP_PIB_SBE_SBEPM_LCL_TBR]
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_TBR = 0x00000140ull;

static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_TBR_SBE_LCL_TBR_TIMEBASE = 0;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_TBR_SBE_LCL_TBR_TIMEBASE_LEN = 32;
//<< [TP_TPCHIP_PIB_SBE_SBEPM_LCL_TBR]
// ppe_proc/reg00010.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "ppe_proc/reg00010_unused.H"
#endif
#endif
