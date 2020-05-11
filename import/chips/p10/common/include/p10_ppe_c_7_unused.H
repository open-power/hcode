/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_ppe_c_7_unused.H $        */
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

#ifndef __p10_ppe_c_7_H_UNUSED__
#define __p10_ppe_c_7_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_c
{
#endif


//>> [CPMS_CERRMSK]
static const uint32_t CPMS_CERRMSK = 0xc000e140ull;

static const uint32_t CPMS_CERRMSK_PFET_SEQ_ERR_MASK = 0;
static const uint32_t CPMS_CERRMSK_DDS_ERR_MASK = 1;
static const uint32_t CPMS_CERRMSK_CLK_SYNC_ERR_MASK = 2;
static const uint32_t CPMS_CERRMSK_DPT_ACCESS_MASK = 3;
static const uint32_t CPMS_CERRMSK_PROXY_MASK = 4;
static const uint32_t CPMS_CERRMSK_FTC_EVENT_MASK = 5;
static const uint32_t CPMS_CERRMSK_FTC_EVENT_MASK_LEN = 3;
static const uint32_t CPMS_CERRMSK_PITCH_MASK = 8;
//<< [CPMS_CERRMSK]
// ppe_c/reg00007.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "ppe_c/reg00007_unused.H"
#endif
#endif
