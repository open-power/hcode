/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_omi_8.H $            */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2024                                                    */
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

#ifndef __p10_scom_omi_8_H_
#define __p10_scom_omi_8_H_


#ifndef __PPE_HCODE__
namespace scomt
{
namespace omi
{
#endif


//>> [RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL3_PL]
static const uint64_t RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL3_PL = 0x8000184010012c3full;

static const uint32_t RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL3_PL_GAIN = 48;
static const uint32_t RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL3_PL_GAIN_LEN = 3;
static const uint32_t RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL3_PL_ZERO = 51;
static const uint32_t RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL3_PL_ZERO_LEN = 3;
//<< [RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL3_PL]
// omi/reg00016.H

//>> [TXPACKS_0_DEFAULT_DD_TX_BIT_REGS_CNTL10_PL]
static const uint64_t TXPACKS_0_DEFAULT_DD_TX_BIT_REGS_CNTL10_PL = 0x80047c4010012c3full;

static const uint32_t TXPACKS_0_DEFAULT_DD_TX_BIT_REGS_CNTL10_PL_TX_NSEG_MAIN_0_15_HS_EN = 48;
static const uint32_t TXPACKS_0_DEFAULT_DD_TX_BIT_REGS_CNTL10_PL_TX_NSEG_MAIN_0_15_HS_EN_LEN = 16;
//<< [TXPACKS_0_DEFAULT_DD_TX_BIT_REGS_CNTL10_PL]
// omi/reg00017.H

//>> [TXPACKS_0_DEFAULT_DD_TX_BIT_REGS_CNTL8_PL]
static const uint64_t TXPACKS_0_DEFAULT_DD_TX_BIT_REGS_CNTL8_PL = 0x80046c4010012c3full;

static const uint32_t TXPACKS_0_DEFAULT_DD_TX_BIT_REGS_CNTL8_PL_TX_PSEG_MAIN_0_15_HS_EN = 48;
static const uint32_t TXPACKS_0_DEFAULT_DD_TX_BIT_REGS_CNTL8_PL_TX_PSEG_MAIN_0_15_HS_EN_LEN = 16;
//<< [TXPACKS_0_DEFAULT_DD_TX_BIT_REGS_CNTL8_PL]
// omi/reg00017.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "omi/reg00016.H"
#include "omi/reg00017.H"
#endif
#endif

