/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_pec_2_unused.H $     */
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

#ifndef __p10_scom_pec_2_H_UNUSED__
#define __p10_scom_pec_2_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace pec
{
#endif


//>> [PB_PBCQ_PEPBREGS_NWRSTKOVR_REG]
static const uint64_t PB_PBCQ_PEPBREGS_NWRSTKOVR_REG = 0x03011809ull;

static const uint32_t PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK0 = 0;
static const uint32_t PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK0_LEN = 16;
static const uint32_t PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK1 = 16;
static const uint32_t PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK1_LEN = 8;
static const uint32_t PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_ENABLE = 24;
//<< [PB_PBCQ_PEPBREGS_NWRSTKOVR_REG]
// pec/reg00002.H

//>> [PIPEDOUTCTL4]
static const uint64_t PIPEDOUTCTL4 = 0x08011518ull;

static const uint32_t PIPEDOUTCTL4_RESERVED_63_0 = 0;
static const uint32_t PIPEDOUTCTL4_RESERVED_63_0_LEN = 64;
//<< [PIPEDOUTCTL4]
// pec/reg00002.H

//>> [SPATTN]
static const uint64_t SPATTN = 0x08040002ull;

static const uint32_t SPATTN_ANY_SPATTN = 0;
static const uint32_t SPATTN_RESERVED1S = 1;
static const uint32_t SPATTN_RESERVED2S = 2;
static const uint32_t SPATTN_RESERVED3S = 3;
static const uint32_t SPATTN_PERV = 4;
static const uint32_t SPATTN_IN05 = 5;
static const uint32_t SPATTN_IN06 = 6;
static const uint32_t SPATTN_IN07 = 7;
static const uint32_t SPATTN_IN08 = 8;
static const uint32_t SPATTN_IN09 = 9;
static const uint32_t SPATTN_IN10 = 10;
static const uint32_t SPATTN_IN11 = 11;
static const uint32_t SPATTN_IN12 = 12;
static const uint32_t SPATTN_IN13 = 13;
static const uint32_t SPATTN_IN14 = 14;
static const uint32_t SPATTN_IN15 = 15;
static const uint32_t SPATTN_IN16 = 16;
static const uint32_t SPATTN_IN17 = 17;
static const uint32_t SPATTN_IN18 = 18;
static const uint32_t SPATTN_IN19 = 19;
static const uint32_t SPATTN_IN20 = 20;
static const uint32_t SPATTN_IN21 = 21;
static const uint32_t SPATTN_IN22 = 22;
static const uint32_t SPATTN_IN23 = 23;
static const uint32_t SPATTN_IN24 = 24;
static const uint32_t SPATTN_IN25 = 25;
static const uint32_t SPATTN_IN26 = 26;
static const uint32_t SPATTN_IN27 = 27;
static const uint32_t SPATTN_IN28 = 28;
static const uint32_t SPATTN_IN29 = 29;
static const uint32_t SPATTN_IN30 = 30;
static const uint32_t SPATTN_IN31 = 31;
static const uint32_t SPATTN_IN32 = 32;
static const uint32_t SPATTN_IN33 = 33;
static const uint32_t SPATTN_IN34 = 34;
static const uint32_t SPATTN_IN35 = 35;
//<< [SPATTN]
// pec/reg00002.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "pec/reg00002_unused.H"
#endif
#endif
