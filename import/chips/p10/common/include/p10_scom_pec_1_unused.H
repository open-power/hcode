/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_pec_1_unused.H $     */
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

#ifndef __p10_scom_pec_1_H_UNUSED__
#define __p10_scom_pec_1_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace pec
{
#endif


//>> [DBG_CBS_CC]
static const uint64_t DBG_CBS_CC = 0x08030013ull;

static const uint32_t DBG_CBS_CC_DBG_RESET_EP = 0;
static const uint32_t DBG_CBS_CC_DBG_OPCG_IP = 1;
static const uint32_t DBG_CBS_CC_DBG_VITL_CLKOFF = 2;
static const uint32_t DBG_CBS_CC_DBG_TEST_ENABLE = 3;
static const uint32_t DBG_CBS_CC_DBG_CBS_REQ = 4;
static const uint32_t DBG_CBS_CC_DBG_CBS_CMD = 5;
static const uint32_t DBG_CBS_CC_DBG_CBS_CMD_LEN = 3;
static const uint32_t DBG_CBS_CC_DBG_CBS_STATE = 8;
static const uint32_t DBG_CBS_CC_DBG_CBS_STATE_LEN = 5;
static const uint32_t DBG_CBS_CC_DBG_SECURITY_DEBUG_MODE = 13;
static const uint32_t DBG_CBS_CC_DBG_CBS_PROTOCOL_ERROR = 14;
static const uint32_t DBG_CBS_CC_DBG_PCB_IDLE = 15;
static const uint32_t DBG_CBS_CC_DBG_CURRENT_OPCG_MODE = 16;
static const uint32_t DBG_CBS_CC_DBG_CURRENT_OPCG_MODE_LEN = 4;
static const uint32_t DBG_CBS_CC_DBG_LAST_OPCG_MODE = 20;
static const uint32_t DBG_CBS_CC_DBG_LAST_OPCG_MODE_LEN = 4;
static const uint32_t DBG_CBS_CC_DBG_PCB_ERROR = 24;
static const uint32_t DBG_CBS_CC_DBG_PARITY_ERROR = 25;
static const uint32_t DBG_CBS_CC_DBG_CC_ERROR = 26;
static const uint32_t DBG_CBS_CC_DBG_CHIPLET_IS_ALIGNED = 27;
static const uint32_t DBG_CBS_CC_DBG_PCB_REQUEST_SINCE_RESET = 28;
static const uint32_t DBG_CBS_CC_DBG_PARANOIA_TEST_ENABLE_CHANGE = 29;
static const uint32_t DBG_CBS_CC_DBG_PARANOIA_VITL_CLKOFF_CHANGE = 30;
static const uint32_t DBG_CBS_CC_TP_TPFSI_CBS_ACK = 31;
//<< [DBG_CBS_CC]
// pec/reg00001.H

//>> [EPS_PSC_ADDR_TRAP_REG]
static const uint64_t EPS_PSC_ADDR_TRAP_REG = 0x08010003ull;

static const uint32_t EPS_PSC_ADDR_TRAP_REG_PCB_ADDRESS_OF_LAST_TRANSACTION_WITH_ERROR = 0;
static const uint32_t EPS_PSC_ADDR_TRAP_REG_PCB_ADDRESS_OF_LAST_TRANSACTION_WITH_ERROR_LEN = 16;
static const uint32_t EPS_PSC_ADDR_TRAP_REG_PCB_READ_NOTWRITE_OF_LAST_TRANSACTION_WITH_ERROR = 16;
static const uint32_t EPS_PSC_ADDR_TRAP_REG_RESERVED_ADDR_LAST_TRAP_LT = 17;
static const uint32_t EPS_PSC_ADDR_TRAP_REG_SERIAL2PARALLEL_STATE_MACHINE_AT_TIME_OF_ERROR = 18;
static const uint32_t EPS_PSC_ADDR_TRAP_REG_SERIAL2PARALLEL_STATE_MACHINE_AT_TIME_OF_ERROR_LEN = 13;
static const uint32_t EPS_PSC_ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_RETURN_PARITY = 31;
static const uint32_t EPS_PSC_ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_WRITE_PARITY_ERROR = 32;
static const uint32_t EPS_PSC_ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_ACCESS_VIOLATION = 33;
static const uint32_t EPS_PSC_ADDR_TRAP_REG_SATELLITE_ACKNOWLEDGE_BIT_INVALID_REGISTER = 34;
static const uint32_t EPS_PSC_ADDR_TRAP_REG_LAST_MASTERID = 35;
static const uint32_t EPS_PSC_ADDR_TRAP_REG_LAST_MASTERID_LEN = 4;
//<< [EPS_PSC_ADDR_TRAP_REG]
// pec/reg00001.H

//>> [EPS_PSC_PSCOM_MODE_REG]
static const uint64_t EPS_PSC_PSCOM_MODE_REG = 0x08010000ull;

static const uint32_t EPS_PSC_PSCOM_MODE_REG_ABORT_ON_PCB_ADDR_PARITY_ERROR = 0;
static const uint32_t EPS_PSC_PSCOM_MODE_REG_ABORT_ON_PCB_WDATA_PARITY_ERROR = 1;
static const uint32_t EPS_PSC_PSCOM_MODE_REG_ABORT_ON_DL_RETURN_WDATA_PARITY_ERROR = 3;
static const uint32_t EPS_PSC_PSCOM_MODE_REG_WATCHDOG_ENABLE = 4;
static const uint32_t EPS_PSC_PSCOM_MODE_REG_SCOM_HANG_LIMIT = 5;
static const uint32_t EPS_PSC_PSCOM_MODE_REG_SCOM_HANG_LIMIT_LEN = 2;
static const uint32_t EPS_PSC_PSCOM_MODE_REG_FORCE_ALL_RINGS = 7;
static const uint32_t EPS_PSC_PSCOM_MODE_REG_FSM_SELFRESET_ON_STATEVEC_PARITYERROR_ENABLE = 8;
static const uint32_t EPS_PSC_PSCOM_MODE_REG_RESERVED_PSCOM_MODE_LT = 9;
static const uint32_t EPS_PSC_PSCOM_MODE_REG_RESERVED_PSCOM_MODE_LT_LEN = 3;
//<< [EPS_PSC_PSCOM_MODE_REG]
// pec/reg00001.H

//>> [HEARTBEAT_REG]
static const uint64_t HEARTBEAT_REG = 0x080f0018ull;

static const uint32_t HEARTBEAT_REG_HEARTBEAT_DEAD = 0;
//<< [HEARTBEAT_REG]
// pec/reg00001.H

//>> [RECOV_INTERRUPT_REG]
static const uint64_t RECOV_INTERRUPT_REG = 0x080f001bull;

static const uint32_t RECOV_INTERRUPT_REG_RECOV = 0;
//<< [RECOV_INTERRUPT_REG]
// pec/reg00001.H

//>> [TOP1_IOPFIRACT0]
static const uint64_t TOP1_IOPFIRACT0 = 0x08011506ull;

static const uint32_t TOP1_IOPFIRACT0_IOPFIRACT0_FIR_ACTION0 = 0;
static const uint32_t TOP1_IOPFIRACT0_IOPFIRACT0_FIR_ACTION0_LEN = 12;
//<< [TOP1_IOPFIRACT0]
// pec/reg00001.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "pec/reg00001_unused.H"
#endif
#endif
