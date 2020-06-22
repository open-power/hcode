/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_pec_3_unused.H $     */
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

#ifndef __p10_scom_pec_3_H_UNUSED__
#define __p10_scom_pec_3_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace pec
{
#endif


//>> [PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG]
static const uint64_t PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG = 0x03011810ull;

static const uint32_t PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE = 0;
static const uint32_t PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE = 1;
static const uint32_t PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE = 2;
static const uint32_t PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05 = 3;
static const uint32_t PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05_LEN = 3;
static const uint32_t PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE = 6;
static const uint32_t PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE_LEN = 2;
static const uint32_t PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT = 8;
static const uint32_t PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT_LEN = 2;
static const uint32_t PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE = 10;
static const uint32_t PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE_LEN = 2;
static const uint32_t PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE = 12;
static const uint32_t PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE_LEN = 2;
static const uint32_t PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT = 14;
static const uint32_t PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT_LEN = 10;
static const uint32_t PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA = 24;
static const uint32_t PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA_LEN = 4;
static const uint32_t PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA = 28;
static const uint32_t PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA_LEN = 4;
static const uint32_t PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE = 32;
static const uint32_t PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE_LEN = 8;
static const uint32_t PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE = 40;
static const uint32_t PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE_LEN = 8;
static const uint32_t PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE = 48;
static const uint32_t PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE_LEN = 8;
static const uint32_t PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE = 56;
static const uint32_t PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE_LEN =
    8;
//<< [PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG]
// pec/reg00003.H

//>> [EPS_FIR_ANY_LOCAL_ERR_MASK]
static const uint64_t EPS_FIR_ANY_LOCAL_ERR_MASK = 0x08040080ull;

static const uint32_t EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB = 0;
static const uint32_t EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB = 1;
static const uint32_t EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB = 2;
static const uint32_t EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB = 3;
static const uint32_t EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB = 4;
//<< [EPS_FIR_ANY_LOCAL_ERR_MASK]
// pec/reg00003.H

//>> [EPS_THERM_WSUB_SKITTER_DATA1]
static const uint64_t EPS_THERM_WSUB_SKITTER_DATA1 = 0x0805001aull;
//<< [EPS_THERM_WSUB_SKITTER_DATA1]
// pec/reg00003.H

//>> [LXSTOP_INTERRUPT_REG]
static const uint64_t LXSTOP_INTERRUPT_REG = 0x080f002aull;

static const uint32_t LXSTOP_INTERRUPT_REG_LXSTOP = 0;
//<< [LXSTOP_INTERRUPT_REG]
// pec/reg00003.H

//>> [PHASE_COUNTER_RESET]
static const uint64_t PHASE_COUNTER_RESET = 0x08030028ull;

static const uint32_t PHASE_COUNTER_RESET_PHASECOUNTER_RESET = 0;
//<< [PHASE_COUNTER_RESET]
// pec/reg00003.H

//>> [TRA0_TR0_CONFIG_3]
static const uint64_t TRA0_TR0_CONFIG_3 = 0x08010406ull;

static const uint32_t TRA0_TR0_CONFIG_3_C = 0;
static const uint32_t TRA0_TR0_CONFIG_3_C_LEN = 24;
static const uint32_t TRA0_TR0_CONFIG_3_D = 24;
static const uint32_t TRA0_TR0_CONFIG_3_D_LEN = 24;
//<< [TRA0_TR0_CONFIG_3]
// pec/reg00003.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "pec/reg00003_unused.H"
#endif
#endif
