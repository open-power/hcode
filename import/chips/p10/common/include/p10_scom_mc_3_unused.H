/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_mc_3_unused.H $      */
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

#ifndef __p10_scom_mc_3_H_UNUSED__
#define __p10_scom_mc_3_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace mc
{
#endif


//>> [EPS_FIR_ANY_LOCAL_ERR_MASK]
static const uint64_t EPS_FIR_ANY_LOCAL_ERR_MASK = 0x0c040080ull;

static const uint32_t EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB = 0;
static const uint32_t EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB = 1;
static const uint32_t EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB = 2;
static const uint32_t EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB = 3;
static const uint32_t EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB = 4;
//<< [EPS_FIR_ANY_LOCAL_ERR_MASK]
// mc/reg00003.H

//>> [EPS_THERM_WSUB_SKITTER_DATA1]
static const uint64_t EPS_THERM_WSUB_SKITTER_DATA1 = 0x0c05001aull;
//<< [EPS_THERM_WSUB_SKITTER_DATA1]
// mc/reg00003.H

//>> [LXSTOP_INTERRUPT_REG]
static const uint64_t LXSTOP_INTERRUPT_REG = 0x0c0f002aull;

static const uint32_t LXSTOP_INTERRUPT_REG_LXSTOP = 0;
//<< [LXSTOP_INTERRUPT_REG]
// mc/reg00003.H

//>> [MBA_SCOMFIR_DBG0_SCOM1Q]
static const uint64_t MBA_SCOMFIR_DBG0_SCOM1Q = 0x0c010f95ull;

static const uint32_t MBA_SCOMFIR_DBG0_SCOM1Q_DBG0_SCOM1Q_DEBUG_BUS_44_87 = 0;
static const uint32_t MBA_SCOMFIR_DBG0_SCOM1Q_DBG0_SCOM1Q_DEBUG_BUS_44_87_LEN = 44;
//<< [MBA_SCOMFIR_DBG0_SCOM1Q]
// mc/reg00003.H

//>> [MBA_SCOMFIR_WATCFG1]
static const uint64_t MBA_SCOMFIR_WATCFG1 = 0x0c010f89ull;

static const uint32_t MBA_SCOMFIR_WATCFG1_WAT_1_CFG = 0;
static const uint32_t MBA_SCOMFIR_WATCFG1_WAT_1_CFG_LEN = 60;
//<< [MBA_SCOMFIR_WATCFG1]
// mc/reg00003.H

//>> [PHASE_COUNTER_RESET]
static const uint64_t PHASE_COUNTER_RESET = 0x0c030028ull;

static const uint32_t PHASE_COUNTER_RESET_PHASECOUNTER_RESET = 0;
//<< [PHASE_COUNTER_RESET]
// mc/reg00003.H

//>> [SCOMFIR_MCERPT0]
static const uint64_t SCOMFIR_MCERPT0 = 0x0c010c1eull;

static const uint32_t SCOMFIR_MCERPT0_AACR_PARITY_ERROR = 0;
static const uint32_t SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY0_PARITY_ERROR = 1;
static const uint32_t SCOMFIR_MCERPT0_CONTENT_ADDRESSABLE_MEMORY1_PARITY_ERROR = 2;
static const uint32_t SCOMFIR_MCERPT0_CHANNEL0_CLSTATE_MACHINE_TIMEOUT_ERROR = 3;
static const uint32_t SCOMFIR_MCERPT0_CHANNEL1_CLSTATE_MACHINE_TIMEOUT_ERROR = 4;
static const uint32_t SCOMFIR_MCERPT0_CHANNEL0_CLAO_MACHINE_TIMEOUT_ERROR = 5;
static const uint32_t SCOMFIR_MCERPT0_CHANNEL1_CLAO_MACHINE_TIMEOUT_ERROR = 6;
static const uint32_t SCOMFIR_MCERPT0_CHANNEL0_MCAMOC_PARITY_ERROR = 9;
static const uint32_t SCOMFIR_MCERPT0_CHANNEL0_MCBUSY_PARITY_ERROR = 10;
static const uint32_t SCOMFIR_MCERPT0_CHANNEL0_MCEBUSCL_PARITY_ERROR = 11;
static const uint32_t SCOMFIR_MCERPT0_CHANNEL0_MCEPS_PARITY_ERROR = 12;
static const uint32_t SCOMFIR_MCERPT0_CHANNEL0_MCERRINJ_PARITY_ERROR = 13;
static const uint32_t SCOMFIR_MCERPT0_CHANNEL0_MCPERF0_PARITY_ERROR = 14;
static const uint32_t SCOMFIR_MCERPT0_CHANNEL0_MCPERF2_PARITY_ERROR = 15;
static const uint32_t SCOMFIR_MCERPT0_CHANNEL0_MCWAT_PARITY_ERROR = 16;
static const uint32_t SCOMFIR_MCERPT0_CHANNEL1_MCAMOC_PARITY_ERROR = 17;
static const uint32_t SCOMFIR_MCERPT0_CHANNEL1_MCBUSY_PARITY_ERROR = 18;
static const uint32_t SCOMFIR_MCERPT0_CHANNEL1_MCEBUSCL_PARITY_ERROR = 19;
static const uint32_t SCOMFIR_MCERPT0_CHANNEL1_MCEPS_PARITY_ERROR = 20;
static const uint32_t SCOMFIR_MCERPT0_CHANNEL1_MCERRINJ_PARITY_ERROR = 21;
static const uint32_t SCOMFIR_MCERPT0_CHANNEL1_MCPERF0_PARITY_ERROR = 22;
static const uint32_t SCOMFIR_MCERPT0_CHANNEL1_MCPERF2_PARITY_ERROR = 23;
static const uint32_t SCOMFIR_MCERPT0_CHANNEL1_MCWAT_PARITY_ERROR = 24;
static const uint32_t SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS0_ERROR = 29;
static const uint32_t SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL0_BUS1_ERROR = 30;
static const uint32_t SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS0_ERROR = 31;
static const uint32_t SCOMFIR_MCERPT0_DATAPATH_ROUTING_TAG_PARITY_CHANNEL1_BUS1_ERROR = 32;
static const uint32_t SCOMFIR_MCERPT0_FASTPATH_ADDRESS_PARITY_ERROR = 33;
static const uint32_t SCOMFIR_MCERPT0_MCFGP0_PARITY_ERROR = 38;
static const uint32_t SCOMFIR_MCERPT0_MCFGP1_PARITY_ERROR = 39;
static const uint32_t SCOMFIR_MCERPT0_MCFGPR0_PARITY_ERROR = 40;
static const uint32_t SCOMFIR_MCERPT0_MCFGPR1_PARITY_ERROR = 41;
static const uint32_t SCOMFIR_MCERPT0_MCLFSR_PARITY_ERROR = 42;
static const uint32_t SCOMFIR_MCERPT0_MCMODE0_PARITY_ERROR = 43;
static const uint32_t SCOMFIR_MCERPT0_MCMODE1_PARITY_ERROR = 44;
static const uint32_t SCOMFIR_MCERPT0_MCMODE2_PARITY_ERROR = 45;
static const uint32_t SCOMFIR_MCERPT0_MCPERF1_PARITY_ERROR = 46;
static const uint32_t SCOMFIR_MCERPT0_MCSYNC_PARITY_ERROR = 47;
static const uint32_t SCOMFIR_MCERPT0_MCWATACT_PARITY_ERROR = 48;
static const uint32_t SCOMFIR_MCERPT0_MCTO_PARITY_ERROR = 49;
static const uint32_t SCOMFIR_MCERPT0_RCMD0_ADDRESS_PARITY_ERROR_ON_CAR1 = 51;
static const uint32_t SCOMFIR_MCERPT0_RCMD0_TRANSFERTAG_PARITY_ERROR = 52;
static const uint32_t SCOMFIR_MCERPT0_RCMD1_ADDRESS_PARITY_ERROR_ON_CAR1 = 53;
static const uint32_t SCOMFIR_MCERPT0_RCMD1_TRANSFERTAG_PARITY_ERROR = 54;
static const uint32_t SCOMFIR_MCERPT0_RCMD2_ADDRESS_PARITY_ERROR_ON_CAR1 = 55;
static const uint32_t SCOMFIR_MCERPT0_RCMD2_TRANSFERTAG_PARITY_ERROR = 56;
static const uint32_t SCOMFIR_MCERPT0_RCMD3_ADDRESS_PARITY_ERROR_ON_CAR1 = 57;
static const uint32_t SCOMFIR_MCERPT0_RCMD3_TRANSFERTAG_PARITY_ERROR = 58;
static const uint32_t SCOMFIR_MCERPT0_MCFGPM0_PARITY_ERROR = 59;
static const uint32_t SCOMFIR_MCERPT0_MCFGPM1_PARITY_ERROR = 60;
static const uint32_t SCOMFIR_MCERPT0_MCWATCNTL2_PARITY_ERROR = 61;
//<< [SCOMFIR_MCERPT0]
// mc/reg00003.H

//>> [SCOMFIR_MCWATCNTL2]
static const uint64_t SCOMFIR_MCWATCNTL2 = 0x0c010c19ull;

static const uint32_t SCOMFIR_MCWATCNTL2_RESERVED_0_49 = 0;
static const uint32_t SCOMFIR_MCWATCNTL2_RESERVED_0_49_LEN = 50;
static const uint32_t SCOMFIR_MCWATCNTL2_CL_EARLY_HANG_MODE = 50;
//<< [SCOMFIR_MCWATCNTL2]
// mc/reg00003.H

//>> [TRA0_TR0_CONFIG_3]
static const uint64_t TRA0_TR0_CONFIG_3 = 0x0c010406ull;

static const uint32_t TRA0_TR0_CONFIG_3_C = 0;
static const uint32_t TRA0_TR0_CONFIG_3_C_LEN = 24;
static const uint32_t TRA0_TR0_CONFIG_3_D = 24;
static const uint32_t TRA0_TR0_CONFIG_3_D_LEN = 24;
//<< [TRA0_TR0_CONFIG_3]
// mc/reg00003.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "mc/reg00003_unused.H"
#endif
#endif
