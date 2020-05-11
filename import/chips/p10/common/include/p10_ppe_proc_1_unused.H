/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_ppe_proc_1_unused.H $     */
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

#ifndef __p10_ppe_proc_1_H_UNUSED__
#define __p10_ppe_proc_1_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_proc
{
#endif


//>> [TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG]
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG = 0x00000120ull;

static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_DBG = 0;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_XSTOP = 1;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_HALT_ON_TRIG = 2;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED3 = 3;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_INTR_ADDR = 4;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_EXTRA = 5;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_TRACE_STALL = 6;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_WAIT_CYCLES = 7;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_EN_FULL_SPEED = 8;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_RESERVED9 = 9;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL = 10;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_MODE_SEL_LEN = 2;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_FIR_TRIGGER = 16;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO = 17;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_MIB_GPIO_LEN = 3;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL = 20;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG_TRACE_DATA_SEL_LEN = 4;
//<< [TP_TPCHIP_PIB_SBE_SBEPM_LCL_DBG]
// ppe_proc/reg00001.H

//>> [TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR]
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_RW = 0x00000060ull;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_CLEAR = 0x00000078ull;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_WO_OR = 0x00000070ull;

static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START0 = 0;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_START1 = 1;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR0 = 2;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBE_INTR1 = 3;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_DRTM_REQ = 4;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_RESET = 5;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEFIFO_DATA = 6;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SPARE = 7;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_TRIG = 8;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_XSTOP = 9;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_RESET = 10;
static const uint32_t TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR_SBEHFIFO_DATA = 11;
//<< [TP_TPCHIP_PIB_SBE_SBEPM_LCL_EITR]
// ppe_proc/reg00001.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "ppe_proc/reg00001_unused.H"
#endif
#endif
