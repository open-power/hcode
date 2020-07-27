/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_omic_9_unused.H $    */
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

#ifndef __p10_scom_omic_9_H_UNUSED__
#define __p10_scom_omic_9_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace omic
{
#endif


//>> [DATASM_REGS_RX_STAT11_PG]
static const uint64_t DATASM_REGS_RX_STAT11_PG = 0x800ae04010012c3full;

static const uint32_t DATASM_REGS_RX_STAT11_PG_RX_SERVO_RESULT_QUEUE_RO_SIGNAL = 48;
static const uint32_t DATASM_REGS_RX_STAT11_PG_RX_SERVO_RESULT_QUEUE_RO_SIGNAL_LEN = 16;
//<< [DATASM_REGS_RX_STAT11_PG]
// omic/reg00009.H

//>> [DATASM_REGS_RX_STAT21_PG]
static const uint64_t DATASM_REGS_RX_STAT21_PG = 0x800b304010012c3full;

static const uint32_t DATASM_REGS_RX_STAT21_PG_RX_DL_PHY_RECAL_REQ_0_15_RO_SIGNAL = 48;
static const uint32_t DATASM_REGS_RX_STAT21_PG_RX_DL_PHY_RECAL_REQ_0_15_RO_SIGNAL_LEN = 16;
//<< [DATASM_REGS_RX_STAT21_PG]
// omic/reg00009.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "omic/reg00009_unused.H"
#endif
#endif
