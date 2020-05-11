/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_ppe_c_3_unused.H $        */
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

#ifndef __p10_ppe_c_3_H_UNUSED__
#define __p10_ppe_c_3_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_c
{
#endif


//>> [CPMS_CCDR]
static const uint32_t CPMS_CCDR = 0xc000e740ull;

static const uint32_t CPMS_CCDR_CHAR_COUNTA_SCALE = 0;
static const uint32_t CPMS_CCDR_CHAR_COUNTA_SCALE_LEN = 4;
static const uint32_t CPMS_CCDR_CHAR_COUNTA_VALUE = 4;
static const uint32_t CPMS_CCDR_CHAR_COUNTA_VALUE_LEN = 16;
static const uint32_t CPMS_CCDR_CHAR_COUNTB_SCALE = 20;
static const uint32_t CPMS_CCDR_CHAR_COUNTB_SCALE_LEN = 4;
static const uint32_t CPMS_CCDR_CHAR_COUNTB_VALUE = 24;
static const uint32_t CPMS_CCDR_CHAR_COUNTB_VALUE_LEN = 16;
static const uint32_t CPMS_CCDR_CHAR_COUNTC_SCALE = 40;
static const uint32_t CPMS_CCDR_CHAR_COUNTC_SCALE_LEN = 4;
static const uint32_t CPMS_CCDR_CHAR_COUNTC_VALUE = 44;
static const uint32_t CPMS_CCDR_CHAR_COUNTC_VALUE_LEN = 16;
static const uint32_t CPMS_CCDR_CHAR_COUNTA_MOD = 60;
static const uint32_t CPMS_CCDR_CHAR_COUNTB_MOD = 61;
static const uint32_t CPMS_CCDR_CHAR_COUNTC_MOD = 62;
static const uint32_t CPMS_CCDR_SAMPLE_DISABLE_INDICATOR = 63;
//<< [CPMS_CCDR]
// ppe_c/reg00003.H

//>> [CPMS_PRSR]
static const uint32_t CPMS_PRSR = 0xc000eac0ull;

static const uint32_t CPMS_PRSR_CPMS_PPSR_PERIOD_PROXY_REMAIN = 0;
static const uint32_t CPMS_PRSR_CPMS_PPSR_PERIOD_PROXY_REMAIN_LEN = 20;
//<< [CPMS_PRSR]
// ppe_c/reg00003.H

//>> [QME_CDBA]
static const uint32_t QME_CDBA = 0xc0008000ull;

static const uint32_t QME_CDBA_MESSAGE_NUMBER = 0;
static const uint32_t QME_CDBA_MESSAGE_NUMBER_LEN = 8;
//<< [QME_CDBA]
// ppe_c/reg00003.H

//>> [QME_CSIR]
static const uint32_t QME_CSIR = 0xc00087c0ull;

static const uint32_t QME_CSIR_PMSR_INSTR_DATA = 36;
static const uint32_t QME_CSIR_PMSR_INSTR_DATA_LEN = 22;
//<< [QME_CSIR]
// ppe_c/reg00003.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "ppe_c/reg00003_unused.H"
#endif
#endif
