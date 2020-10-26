/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/p10_scom_mcc_2_unused.H $     */
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

#ifndef __p10_scom_mcc_2_H_UNUSED__
#define __p10_scom_mcc_2_H_UNUSED__


#ifndef __PPE_HCODE__
namespace scomt
{
namespace mcc
{
#endif


//>> [DSTL_DSLTWAT]
static const uint64_t DSTL_DSLTWAT = 0x0c010d11ull;

static const uint32_t DSTL_DSLTWAT_CHANA_WAT_ACT_PMU = 0;
static const uint32_t DSTL_DSLTWAT_CHANA_WAT_ACT_PMU_LEN = 2;
static const uint32_t DSTL_DSLTWAT_CHANB_WAT_ACT_PMU = 2;
static const uint32_t DSTL_DSLTWAT_CHANB_WAT_ACT_PMU_LEN = 2;
static const uint32_t DSTL_DSLTWAT_CHANA_WAT_DLY_CREDIT_RETURN_EN = 4;
static const uint32_t DSTL_DSLTWAT_CHANA_WAT_DLY_CREDIT_RETURN_EN_LEN = 2;
static const uint32_t DSTL_DSLTWAT_CHANB_WAT_DLY_CREDIT_RETURN_EN = 6;
static const uint32_t DSTL_DSLTWAT_CHANB_WAT_DLY_CREDIT_RETURN_EN_LEN = 2;
static const uint32_t DSTL_DSLTWAT_CHANA_WAT_NULL_FLIT_STALL_EN = 8;
static const uint32_t DSTL_DSLTWAT_CHANA_WAT_NULL_FLIT_STALL_EN_LEN = 2;
static const uint32_t DSTL_DSLTWAT_CHANB_WAT_NULL_FLIT_STALL_EN = 10;
static const uint32_t DSTL_DSLTWAT_CHANB_WAT_NULL_FLIT_STALL_EN_LEN = 2;
static const uint32_t DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC0_EN = 12;
static const uint32_t DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC0_EN_LEN = 2;
static const uint32_t DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC0_EN = 14;
static const uint32_t DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC0_EN_LEN = 2;
static const uint32_t DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC3_EN = 16;
static const uint32_t DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXVC3_EN_LEN = 2;
static const uint32_t DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC3_EN = 18;
static const uint32_t DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXVC3_EN_LEN = 2;
static const uint32_t DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXDCP0_EN = 20;
static const uint32_t DSTL_DSLTWAT_CHANA_WAT_HOLD_TLXDCP0_EN_LEN = 2;
static const uint32_t DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXDCP0_EN = 22;
static const uint32_t DSTL_DSLTWAT_CHANB_WAT_HOLD_TLXDCP0_EN_LEN = 2;
static const uint32_t DSTL_DSLTWAT_RESERVED_24_62 = 24;
static const uint32_t DSTL_DSLTWAT_RESERVED_24_62_LEN = 39;
//<< [DSTL_DSLTWAT]
// mcc/reg00002.H

//>> [WDF_HCA_ACCUM_REG]
static const uint64_t WDF_HCA_ACCUM_REG = 0x0c010f42ull;

static const uint32_t WDF_HCA_ACCUM_REG_ACCUM_REG = 0;
static const uint32_t WDF_HCA_ACCUM_REG_ACCUM_REG_LEN = 64;
//<< [WDF_HCA_ACCUM_REG]
// mcc/reg00002.H

//>> [WDF_WBMGR_TAG_INFO]
static const uint64_t WDF_WBMGR_TAG_INFO = 0x0c010f43ull;

static const uint32_t WDF_WBMGR_TAG_INFO_SLICE0_BUFFER_OVERRUN = 0;
static const uint32_t WDF_WBMGR_TAG_INFO_SLICE1_BUFFER_OVERRUN = 1;
static const uint32_t WDF_WBMGR_TAG_INFO_SLICE2_BUFFER_OVERRUN = 2;
static const uint32_t WDF_WBMGR_TAG_INFO_SLICE3_BUFFER_OVERRUN = 3;
static const uint32_t WDF_WBMGR_TAG_INFO_TAG_OVERRUN = 4;
//<< [WDF_WBMGR_TAG_INFO]
// mcc/reg00002.H

//>>THE END<<

#ifndef __PPE_HCODE__
}
}
#include "mcc/reg00002_unused.H"
#endif
#endif
