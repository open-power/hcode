/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_c/reg00013.H $            */
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
#include "fapi2.H"

#ifndef __PPE_C_REG00013_H_
#define __PPE_C_REG00013_H_

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_c
{
#endif


//>> PREP_[CPMS_DCCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_DCCR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_DCCR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_DCCR]

//>> GET_[CPMS_DCCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_DCCR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_DCCR;
#endif
    return fapi2::getScom(i_target, CPMS_DCCR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_DCCR]

//>> PUT_[CPMS_DCCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_DCCR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_DCCR));
#endif
    return fapi2::putScom(i_target, CPMS_DCCR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_DCCR]


//>> SET_[CPMS_DCCR_LARGE_OFFSET]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DCCR_LARGE_OFFSET(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DCCR));
#endif
    return o_data.insertFromRight<CPMS_DCCR_LARGE_OFFSET,
           CPMS_DCCR_LARGE_OFFSET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DCCR_LARGE_OFFSET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DCCR_LARGE_OFFSET]

//>> SET_[CPMS_DCCR_LARGE_OFFSET]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DCCR_LARGE_OFFSET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DCCR));
#endif
    return o_data.insertFromRight<CPMS_DCCR_LARGE_OFFSET,
           CPMS_DCCR_LARGE_OFFSET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DCCR_LARGE_OFFSET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DCCR_LARGE_OFFSET]

//>> GET_[CPMS_DCCR_LARGE_OFFSET]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DCCR_LARGE_OFFSET(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DCCR));
#endif
    return i_data.extractToRight<CPMS_DCCR_LARGE_OFFSET,
           CPMS_DCCR_LARGE_OFFSET_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DCCR_LARGE_OFFSET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DCCR_LARGE_OFFSET]

//>> SET_[CPMS_DCCR_0_THRESH_SCALE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DCCR_0_THRESH_SCALE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DCCR));
#endif
    return o_data.insertFromRight<CPMS_DCCR_0_THRESH_SCALE,
           CPMS_DCCR_0_THRESH_SCALE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DCCR_0_THRESH_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DCCR_0_THRESH_SCALE]

//>> SET_[CPMS_DCCR_0_THRESH_SCALE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DCCR_0_THRESH_SCALE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DCCR));
#endif
    return o_data.insertFromRight<CPMS_DCCR_0_THRESH_SCALE,
           CPMS_DCCR_0_THRESH_SCALE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DCCR_0_THRESH_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DCCR_0_THRESH_SCALE]

//>> GET_[CPMS_DCCR_0_THRESH_SCALE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DCCR_0_THRESH_SCALE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DCCR));
#endif
    return i_data.extractToRight<CPMS_DCCR_0_THRESH_SCALE,
           CPMS_DCCR_0_THRESH_SCALE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DCCR_0_THRESH_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DCCR_0_THRESH_SCALE]

//>> SET_[CPMS_DCCR_0_THRESH_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DCCR_0_THRESH_VALUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DCCR));
#endif
    return o_data.insertFromRight<CPMS_DCCR_0_THRESH_VALUE,
           CPMS_DCCR_0_THRESH_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DCCR_0_THRESH_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DCCR_0_THRESH_VALUE]

//>> SET_[CPMS_DCCR_0_THRESH_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DCCR_0_THRESH_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DCCR));
#endif
    return o_data.insertFromRight<CPMS_DCCR_0_THRESH_VALUE,
           CPMS_DCCR_0_THRESH_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DCCR_0_THRESH_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DCCR_0_THRESH_VALUE]

//>> GET_[CPMS_DCCR_0_THRESH_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DCCR_0_THRESH_VALUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DCCR));
#endif
    return i_data.extractToRight<CPMS_DCCR_0_THRESH_VALUE,
           CPMS_DCCR_0_THRESH_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DCCR_0_THRESH_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DCCR_0_THRESH_VALUE]

//>> SET_[CPMS_DCCR_1_THRESH_SCALE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DCCR_1_THRESH_SCALE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DCCR));
#endif
    return o_data.insertFromRight<CPMS_DCCR_1_THRESH_SCALE,
           CPMS_DCCR_1_THRESH_SCALE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DCCR_1_THRESH_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DCCR_1_THRESH_SCALE]

//>> SET_[CPMS_DCCR_1_THRESH_SCALE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DCCR_1_THRESH_SCALE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DCCR));
#endif
    return o_data.insertFromRight<CPMS_DCCR_1_THRESH_SCALE,
           CPMS_DCCR_1_THRESH_SCALE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DCCR_1_THRESH_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DCCR_1_THRESH_SCALE]

//>> GET_[CPMS_DCCR_1_THRESH_SCALE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DCCR_1_THRESH_SCALE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DCCR));
#endif
    return i_data.extractToRight<CPMS_DCCR_1_THRESH_SCALE,
           CPMS_DCCR_1_THRESH_SCALE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DCCR_1_THRESH_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DCCR_1_THRESH_SCALE]

//>> SET_[CPMS_DCCR_1_THRESH_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DCCR_1_THRESH_VALUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DCCR));
#endif
    return o_data.insertFromRight<CPMS_DCCR_1_THRESH_VALUE,
           CPMS_DCCR_1_THRESH_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DCCR_1_THRESH_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DCCR_1_THRESH_VALUE]

//>> SET_[CPMS_DCCR_1_THRESH_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DCCR_1_THRESH_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DCCR));
#endif
    return o_data.insertFromRight<CPMS_DCCR_1_THRESH_VALUE,
           CPMS_DCCR_1_THRESH_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DCCR_1_THRESH_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DCCR_1_THRESH_VALUE]

//>> GET_[CPMS_DCCR_1_THRESH_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DCCR_1_THRESH_VALUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DCCR));
#endif
    return i_data.extractToRight<CPMS_DCCR_1_THRESH_VALUE,
           CPMS_DCCR_1_THRESH_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DCCR_1_THRESH_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DCCR_1_THRESH_VALUE]

//>> SET_[CPMS_DCCR_0_EVENT_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DCCR_0_EVENT_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DCCR));
#endif
    return o_data.insertFromRight<CPMS_DCCR_0_EVENT_SEL,
           CPMS_DCCR_0_EVENT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DCCR_0_EVENT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DCCR_0_EVENT_SEL]

//>> SET_[CPMS_DCCR_0_EVENT_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DCCR_0_EVENT_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DCCR));
#endif
    return o_data.insertFromRight<CPMS_DCCR_0_EVENT_SEL,
           CPMS_DCCR_0_EVENT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DCCR_0_EVENT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DCCR_0_EVENT_SEL]

//>> GET_[CPMS_DCCR_0_EVENT_SEL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DCCR_0_EVENT_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DCCR));
#endif
    return i_data.extractToRight<CPMS_DCCR_0_EVENT_SEL,
           CPMS_DCCR_0_EVENT_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DCCR_0_EVENT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DCCR_0_EVENT_SEL]

//>> SET_[CPMS_DCCR_1_EVENT_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DCCR_1_EVENT_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DCCR));
#endif
    return o_data.insertFromRight<CPMS_DCCR_1_EVENT_SEL,
           CPMS_DCCR_1_EVENT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DCCR_1_EVENT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DCCR_1_EVENT_SEL]

//>> SET_[CPMS_DCCR_1_EVENT_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DCCR_1_EVENT_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DCCR));
#endif
    return o_data.insertFromRight<CPMS_DCCR_1_EVENT_SEL,
           CPMS_DCCR_1_EVENT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DCCR_1_EVENT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DCCR_1_EVENT_SEL]

//>> GET_[CPMS_DCCR_1_EVENT_SEL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DCCR_1_EVENT_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DCCR));
#endif
    return i_data.extractToRight<CPMS_DCCR_1_EVENT_SEL,
           CPMS_DCCR_1_EVENT_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DCCR_1_EVENT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DCCR_1_EVENT_SEL]

//>> PREP_[CPMS_MMA_PFETSTAT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_MMA_PFETSTAT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_MMA_PFETSTAT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_MMA_PFETSTAT]

//>> GET_[CPMS_MMA_PFETSTAT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_MMA_PFETSTAT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_MMA_PFETSTAT;
#endif
    return fapi2::getScom(i_target, CPMS_MMA_PFETSTAT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_MMA_PFETSTAT]

//>> PUT_[CPMS_MMA_PFETSTAT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_MMA_PFETSTAT(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_MMA_PFETSTAT));
#endif
    return fapi2::putScom(i_target, CPMS_MMA_PFETSTAT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_MMA_PFETSTAT]


//>> SET_[CPMS_MMA_PFETSTAT_S_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_MMA_PFETSTAT_S_ENABLED_SENSE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_MMA_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_MMA_PFETSTAT_S_ENABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_MMA_PFETSTAT_S_ENABLED_SENSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_MMA_PFETSTAT_S_ENABLED_SENSE]

//>> SET_[CPMS_MMA_PFETSTAT_S_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_MMA_PFETSTAT_S_ENABLED_SENSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_MMA_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_MMA_PFETSTAT_S_ENABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_MMA_PFETSTAT_S_ENABLED_SENSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_MMA_PFETSTAT_S_ENABLED_SENSE]

//>> SET_[CPMS_MMA_PFETSTAT_S_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_MMA_PFETSTAT_S_ENABLED_SENSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_MMA_PFETSTAT));
#endif
    return o_data.setBit<CPMS_MMA_PFETSTAT_S_ENABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_MMA_PFETSTAT_S_ENABLED_SENSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_MMA_PFETSTAT_S_ENABLED_SENSE]

//>> CLEAR_[CPMS_MMA_PFETSTAT_S_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_MMA_PFETSTAT_S_ENABLED_SENSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_MMA_PFETSTAT));
#endif
    return o_data.clearBit<CPMS_MMA_PFETSTAT_S_ENABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_MMA_PFETSTAT_S_ENABLED_SENSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_MMA_PFETSTAT_S_ENABLED_SENSE]

//>> GET_[CPMS_MMA_PFETSTAT_S_ENABLED_SENSE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_MMA_PFETSTAT_S_ENABLED_SENSE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_MMA_PFETSTAT));
#endif
    return i_data.extractToRight<CPMS_MMA_PFETSTAT_S_ENABLED_SENSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_MMA_PFETSTAT_S_ENABLED_SENSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_MMA_PFETSTAT_S_ENABLED_SENSE]

//>> GET_[CPMS_MMA_PFETSTAT_S_ENABLED_SENSE]
static inline bool GET_CPMS_MMA_PFETSTAT_S_ENABLED_SENSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_MMA_PFETSTAT));
#endif
    return i_data.getBit<CPMS_MMA_PFETSTAT_S_ENABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_MMA_PFETSTAT_S_ENABLED_SENSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_MMA_PFETSTAT_S_ENABLED_SENSE]

//>> SET_[CPMS_MMA_PFETSTAT_S_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_MMA_PFETSTAT_S_DISABLED_SENSE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_MMA_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_MMA_PFETSTAT_S_DISABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_MMA_PFETSTAT_S_DISABLED_SENSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_MMA_PFETSTAT_S_DISABLED_SENSE]

//>> SET_[CPMS_MMA_PFETSTAT_S_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_MMA_PFETSTAT_S_DISABLED_SENSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_MMA_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_MMA_PFETSTAT_S_DISABLED_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_MMA_PFETSTAT_S_DISABLED_SENSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_MMA_PFETSTAT_S_DISABLED_SENSE]

//>> SET_[CPMS_MMA_PFETSTAT_S_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_MMA_PFETSTAT_S_DISABLED_SENSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_MMA_PFETSTAT));
#endif
    return o_data.setBit<CPMS_MMA_PFETSTAT_S_DISABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_MMA_PFETSTAT_S_DISABLED_SENSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_MMA_PFETSTAT_S_DISABLED_SENSE]

//>> CLEAR_[CPMS_MMA_PFETSTAT_S_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_MMA_PFETSTAT_S_DISABLED_SENSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_MMA_PFETSTAT));
#endif
    return o_data.clearBit<CPMS_MMA_PFETSTAT_S_DISABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_MMA_PFETSTAT_S_DISABLED_SENSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_MMA_PFETSTAT_S_DISABLED_SENSE]

//>> GET_[CPMS_MMA_PFETSTAT_S_DISABLED_SENSE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_MMA_PFETSTAT_S_DISABLED_SENSE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_MMA_PFETSTAT));
#endif
    return i_data.extractToRight<CPMS_MMA_PFETSTAT_S_DISABLED_SENSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_MMA_PFETSTAT_S_DISABLED_SENSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_MMA_PFETSTAT_S_DISABLED_SENSE]

//>> GET_[CPMS_MMA_PFETSTAT_S_DISABLED_SENSE]
static inline bool GET_CPMS_MMA_PFETSTAT_S_DISABLED_SENSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_MMA_PFETSTAT));
#endif
    return i_data.getBit<CPMS_MMA_PFETSTAT_S_DISABLED_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_MMA_PFETSTAT_S_DISABLED_SENSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_MMA_PFETSTAT_S_DISABLED_SENSE]

//>> SET_[P10_20_CPMS_MMA_PFETSTAT_S_FINGER0_SENSE]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPMS_MMA_PFETSTAT_S_FINGER0_SENSE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_MMA_PFETSTAT));
#endif
    return o_data.insertFromRight<P10_20_CPMS_MMA_PFETSTAT_S_FINGER0_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access P10_20_CPMS_MMA_PFETSTAT_S_FINGER0_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPMS_MMA_PFETSTAT_S_FINGER0_SENSE]

//>> SET_[P10_20_CPMS_MMA_PFETSTAT_S_FINGER0_SENSE]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPMS_MMA_PFETSTAT_S_FINGER0_SENSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_MMA_PFETSTAT));
#endif
    return o_data.insertFromRight<P10_20_CPMS_MMA_PFETSTAT_S_FINGER0_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access P10_20_CPMS_MMA_PFETSTAT_S_FINGER0_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPMS_MMA_PFETSTAT_S_FINGER0_SENSE]

//>> SET_[P10_20_CPMS_MMA_PFETSTAT_S_FINGER0_SENSE]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPMS_MMA_PFETSTAT_S_FINGER0_SENSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_MMA_PFETSTAT));
#endif
    return o_data.setBit<P10_20_CPMS_MMA_PFETSTAT_S_FINGER0_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access P10_20_CPMS_MMA_PFETSTAT_S_FINGER0_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPMS_MMA_PFETSTAT_S_FINGER0_SENSE]

//>> CLEAR_[P10_20_CPMS_MMA_PFETSTAT_S_FINGER0_SENSE]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_CPMS_MMA_PFETSTAT_S_FINGER0_SENSE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_MMA_PFETSTAT));
#endif
    return o_data.clearBit<P10_20_CPMS_MMA_PFETSTAT_S_FINGER0_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access P10_20_CPMS_MMA_PFETSTAT_S_FINGER0_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_CPMS_MMA_PFETSTAT_S_FINGER0_SENSE]

//>> GET_[P10_20_CPMS_MMA_PFETSTAT_S_FINGER0_SENSE]
static inline fapi2::buffer<uint64_t>& GET_P10_20_CPMS_MMA_PFETSTAT_S_FINGER0_SENSE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_MMA_PFETSTAT));
#endif
    return i_data.extractToRight<P10_20_CPMS_MMA_PFETSTAT_S_FINGER0_SENSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access P10_20_CPMS_MMA_PFETSTAT_S_FINGER0_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_CPMS_MMA_PFETSTAT_S_FINGER0_SENSE]

//>> GET_[P10_20_CPMS_MMA_PFETSTAT_S_FINGER0_SENSE]
static inline bool GET_P10_20_CPMS_MMA_PFETSTAT_S_FINGER0_SENSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_MMA_PFETSTAT));
#endif
    return i_data.getBit<P10_20_CPMS_MMA_PFETSTAT_S_FINGER0_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access P10_20_CPMS_MMA_PFETSTAT_S_FINGER0_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_CPMS_MMA_PFETSTAT_S_FINGER0_SENSE]

//>> SET_[CPMS_MMA_PFETSTAT_ENABLE_ACTUAL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_MMA_PFETSTAT_ENABLE_ACTUAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_MMA_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_MMA_PFETSTAT_ENABLE_ACTUAL,
           CPMS_MMA_PFETSTAT_ENABLE_ACTUAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_MMA_PFETSTAT_ENABLE_ACTUAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_MMA_PFETSTAT_ENABLE_ACTUAL]

//>> SET_[CPMS_MMA_PFETSTAT_ENABLE_ACTUAL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_MMA_PFETSTAT_ENABLE_ACTUAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_MMA_PFETSTAT));
#endif
    return o_data.insertFromRight<CPMS_MMA_PFETSTAT_ENABLE_ACTUAL,
           CPMS_MMA_PFETSTAT_ENABLE_ACTUAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_MMA_PFETSTAT_ENABLE_ACTUAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_MMA_PFETSTAT_ENABLE_ACTUAL]

//>> GET_[CPMS_MMA_PFETSTAT_ENABLE_ACTUAL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_MMA_PFETSTAT_ENABLE_ACTUAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_MMA_PFETSTAT));
#endif
    return i_data.extractToRight<CPMS_MMA_PFETSTAT_ENABLE_ACTUAL,
           CPMS_MMA_PFETSTAT_ENABLE_ACTUAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_MMA_PFETSTAT_ENABLE_ACTUAL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_MMA_PFETSTAT_ENABLE_ACTUAL]

//>> PREP_[CPMS_PFETDLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_PFETDLY(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_PFETDLY;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_PFETDLY]

//>> GET_[CPMS_PFETDLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_PFETDLY(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_PFETDLY;
#endif
    return fapi2::getScom(i_target, CPMS_PFETDLY, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_PFETDLY]

//>> PUT_[CPMS_PFETDLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_PFETDLY(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_PFETDLY));
#endif
    return fapi2::putScom(i_target, CPMS_PFETDLY, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_PFETDLY]


//>> SET_[CPMS_PFETDLY_POWDN_DLY]
static inline fapi2::buffer<uint64_t>& SET_CPMS_PFETDLY_POWDN_DLY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PFETDLY));
#endif
    return o_data.insertFromRight<CPMS_PFETDLY_POWDN_DLY,
           CPMS_PFETDLY_POWDN_DLY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_PFETDLY_POWDN_DLY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_PFETDLY_POWDN_DLY]

//>> SET_[CPMS_PFETDLY_POWDN_DLY]
static inline fapi2::buffer<uint64_t>& SET_CPMS_PFETDLY_POWDN_DLY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PFETDLY));
#endif
    return o_data.insertFromRight<CPMS_PFETDLY_POWDN_DLY,
           CPMS_PFETDLY_POWDN_DLY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_PFETDLY_POWDN_DLY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_PFETDLY_POWDN_DLY]

//>> GET_[CPMS_PFETDLY_POWDN_DLY]
static inline fapi2::buffer<uint64_t>& GET_CPMS_PFETDLY_POWDN_DLY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PFETDLY));
#endif
    return i_data.extractToRight<CPMS_PFETDLY_POWDN_DLY,
           CPMS_PFETDLY_POWDN_DLY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_PFETDLY_POWDN_DLY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_PFETDLY_POWDN_DLY]

//>> SET_[CPMS_PFETDLY_L3_POWUP_DLY]
static inline fapi2::buffer<uint64_t>& SET_CPMS_PFETDLY_L3_POWUP_DLY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PFETDLY));
#endif
    return o_data.insertFromRight<CPMS_PFETDLY_L3_POWUP_DLY,
           CPMS_PFETDLY_L3_POWUP_DLY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_PFETDLY_L3_POWUP_DLY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_PFETDLY_L3_POWUP_DLY]

//>> SET_[CPMS_PFETDLY_L3_POWUP_DLY]
static inline fapi2::buffer<uint64_t>& SET_CPMS_PFETDLY_L3_POWUP_DLY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PFETDLY));
#endif
    return o_data.insertFromRight<CPMS_PFETDLY_L3_POWUP_DLY,
           CPMS_PFETDLY_L3_POWUP_DLY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_PFETDLY_L3_POWUP_DLY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_PFETDLY_L3_POWUP_DLY]

//>> GET_[CPMS_PFETDLY_L3_POWUP_DLY]
static inline fapi2::buffer<uint64_t>& GET_CPMS_PFETDLY_L3_POWUP_DLY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PFETDLY));
#endif
    return i_data.extractToRight<CPMS_PFETDLY_L3_POWUP_DLY,
           CPMS_PFETDLY_L3_POWUP_DLY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_PFETDLY_L3_POWUP_DLY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_PFETDLY_L3_POWUP_DLY]

//>> SET_[CPMS_PFETDLY_CL2_POWUP_DLY]
static inline fapi2::buffer<uint64_t>& SET_CPMS_PFETDLY_CL2_POWUP_DLY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PFETDLY));
#endif
    return o_data.insertFromRight<CPMS_PFETDLY_CL2_POWUP_DLY,
           CPMS_PFETDLY_CL2_POWUP_DLY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_PFETDLY_CL2_POWUP_DLY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_PFETDLY_CL2_POWUP_DLY]

//>> SET_[CPMS_PFETDLY_CL2_POWUP_DLY]
static inline fapi2::buffer<uint64_t>& SET_CPMS_PFETDLY_CL2_POWUP_DLY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PFETDLY));
#endif
    return o_data.insertFromRight<CPMS_PFETDLY_CL2_POWUP_DLY,
           CPMS_PFETDLY_CL2_POWUP_DLY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_PFETDLY_CL2_POWUP_DLY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_PFETDLY_CL2_POWUP_DLY]

//>> GET_[CPMS_PFETDLY_CL2_POWUP_DLY]
static inline fapi2::buffer<uint64_t>& GET_CPMS_PFETDLY_CL2_POWUP_DLY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PFETDLY));
#endif
    return i_data.extractToRight<CPMS_PFETDLY_CL2_POWUP_DLY,
           CPMS_PFETDLY_CL2_POWUP_DLY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_PFETDLY_CL2_POWUP_DLY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_PFETDLY_CL2_POWUP_DLY]

//>> SET_[CPMS_PFETDLY_MMA_POWUP_DLY]
static inline fapi2::buffer<uint64_t>& SET_CPMS_PFETDLY_MMA_POWUP_DLY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PFETDLY));
#endif
    return o_data.insertFromRight<CPMS_PFETDLY_MMA_POWUP_DLY,
           CPMS_PFETDLY_MMA_POWUP_DLY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_PFETDLY_MMA_POWUP_DLY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_PFETDLY_MMA_POWUP_DLY]

//>> SET_[CPMS_PFETDLY_MMA_POWUP_DLY]
static inline fapi2::buffer<uint64_t>& SET_CPMS_PFETDLY_MMA_POWUP_DLY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PFETDLY));
#endif
    return o_data.insertFromRight<CPMS_PFETDLY_MMA_POWUP_DLY,
           CPMS_PFETDLY_MMA_POWUP_DLY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_PFETDLY_MMA_POWUP_DLY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_PFETDLY_MMA_POWUP_DLY]

//>> GET_[CPMS_PFETDLY_MMA_POWUP_DLY]
static inline fapi2::buffer<uint64_t>& GET_CPMS_PFETDLY_MMA_POWUP_DLY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PFETDLY));
#endif
    return i_data.extractToRight<CPMS_PFETDLY_MMA_POWUP_DLY,
           CPMS_PFETDLY_MMA_POWUP_DLY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_PFETDLY_MMA_POWUP_DLY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_PFETDLY_MMA_POWUP_DLY]

//>> PREP_[CPMS_PPSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_PPSR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_PPSR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_PPSR]

//>> GET_[CPMS_PPSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_PPSR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_PPSR;
#endif
    return fapi2::getScom(i_target, CPMS_PPSR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_PPSR]

//>> PUT_[CPMS_PPSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_PPSR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return fapi2::putScom(i_target, CPMS_PPSR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_PPSR]


//>> SET_[CPMS_PPSR_ENERGY_PROXY_UPPER]
static inline fapi2::buffer<uint64_t>& SET_CPMS_PPSR_ENERGY_PROXY_UPPER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return o_data.insertFromRight<CPMS_PPSR_ENERGY_PROXY_UPPER,
           CPMS_PPSR_ENERGY_PROXY_UPPER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_PPSR_ENERGY_PROXY_UPPER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_PPSR_ENERGY_PROXY_UPPER]

//>> SET_[CPMS_PPSR_ENERGY_PROXY_UPPER]
static inline fapi2::buffer<uint64_t>& SET_CPMS_PPSR_ENERGY_PROXY_UPPER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return o_data.insertFromRight<CPMS_PPSR_ENERGY_PROXY_UPPER,
           CPMS_PPSR_ENERGY_PROXY_UPPER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_PPSR_ENERGY_PROXY_UPPER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_PPSR_ENERGY_PROXY_UPPER]

//>> GET_[CPMS_PPSR_ENERGY_PROXY_UPPER]
static inline fapi2::buffer<uint64_t>& GET_CPMS_PPSR_ENERGY_PROXY_UPPER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return i_data.extractToRight<CPMS_PPSR_ENERGY_PROXY_UPPER,
           CPMS_PPSR_ENERGY_PROXY_UPPER_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_PPSR_ENERGY_PROXY_UPPER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_PPSR_ENERGY_PROXY_UPPER]

//>> SET_[CPMS_PPSR_ENERGY_PROXY_LOWER]
static inline fapi2::buffer<uint64_t>& SET_CPMS_PPSR_ENERGY_PROXY_LOWER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return o_data.insertFromRight<CPMS_PPSR_ENERGY_PROXY_LOWER,
           CPMS_PPSR_ENERGY_PROXY_LOWER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_PPSR_ENERGY_PROXY_LOWER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_PPSR_ENERGY_PROXY_LOWER]

//>> SET_[CPMS_PPSR_ENERGY_PROXY_LOWER]
static inline fapi2::buffer<uint64_t>& SET_CPMS_PPSR_ENERGY_PROXY_LOWER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return o_data.insertFromRight<CPMS_PPSR_ENERGY_PROXY_LOWER,
           CPMS_PPSR_ENERGY_PROXY_LOWER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_PPSR_ENERGY_PROXY_LOWER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_PPSR_ENERGY_PROXY_LOWER]

//>> GET_[CPMS_PPSR_ENERGY_PROXY_LOWER]
static inline fapi2::buffer<uint64_t>& GET_CPMS_PPSR_ENERGY_PROXY_LOWER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return i_data.extractToRight<CPMS_PPSR_ENERGY_PROXY_LOWER,
           CPMS_PPSR_ENERGY_PROXY_LOWER_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_PPSR_ENERGY_PROXY_LOWER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_PPSR_ENERGY_PROXY_LOWER]

//>> SET_[CPMS_PPSR_PERIOD_PROXY_REMAIN]
static inline fapi2::buffer<uint64_t>& SET_CPMS_PPSR_PERIOD_PROXY_REMAIN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return o_data.insertFromRight<CPMS_PPSR_PERIOD_PROXY_REMAIN,
           CPMS_PPSR_PERIOD_PROXY_REMAIN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_PPSR_PERIOD_PROXY_REMAIN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_PPSR_PERIOD_PROXY_REMAIN]

//>> SET_[CPMS_PPSR_PERIOD_PROXY_REMAIN]
static inline fapi2::buffer<uint64_t>& SET_CPMS_PPSR_PERIOD_PROXY_REMAIN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return o_data.insertFromRight<CPMS_PPSR_PERIOD_PROXY_REMAIN,
           CPMS_PPSR_PERIOD_PROXY_REMAIN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_PPSR_PERIOD_PROXY_REMAIN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_PPSR_PERIOD_PROXY_REMAIN]

//>> GET_[CPMS_PPSR_PERIOD_PROXY_REMAIN]
static inline fapi2::buffer<uint64_t>& GET_CPMS_PPSR_PERIOD_PROXY_REMAIN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return i_data.extractToRight<CPMS_PPSR_PERIOD_PROXY_REMAIN,
           CPMS_PPSR_PERIOD_PROXY_REMAIN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_PPSR_PERIOD_PROXY_REMAIN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_PPSR_PERIOD_PROXY_REMAIN]

//>> SET_[CPMS_PPSR_FTX_SATURATED]
static inline fapi2::buffer<uint64_t>& SET_CPMS_PPSR_FTX_SATURATED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return o_data.insertFromRight<CPMS_PPSR_FTX_SATURATED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_PPSR_FTX_SATURATED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_PPSR_FTX_SATURATED]

//>> SET_[CPMS_PPSR_FTX_SATURATED]
static inline fapi2::buffer<uint64_t>& SET_CPMS_PPSR_FTX_SATURATED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return o_data.insertFromRight<CPMS_PPSR_FTX_SATURATED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_PPSR_FTX_SATURATED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_PPSR_FTX_SATURATED]

//>> SET_[CPMS_PPSR_FTX_SATURATED]
static inline fapi2::buffer<uint64_t>& SET_CPMS_PPSR_FTX_SATURATED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return o_data.setBit<CPMS_PPSR_FTX_SATURATED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_PPSR_FTX_SATURATED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_PPSR_FTX_SATURATED]

//>> CLEAR_[CPMS_PPSR_FTX_SATURATED]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_PPSR_FTX_SATURATED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return o_data.clearBit<CPMS_PPSR_FTX_SATURATED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_PPSR_FTX_SATURATED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_PPSR_FTX_SATURATED]

//>> GET_[CPMS_PPSR_FTX_SATURATED]
static inline fapi2::buffer<uint64_t>& GET_CPMS_PPSR_FTX_SATURATED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return i_data.extractToRight<CPMS_PPSR_FTX_SATURATED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_PPSR_FTX_SATURATED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_PPSR_FTX_SATURATED]

//>> GET_[CPMS_PPSR_FTX_SATURATED]
static inline bool GET_CPMS_PPSR_FTX_SATURATED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return i_data.getBit<CPMS_PPSR_FTX_SATURATED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_PPSR_FTX_SATURATED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_PPSR_FTX_SATURATED]

//>> SET_[CPMS_PPSR_PITCH_SATURATED]
static inline fapi2::buffer<uint64_t>& SET_CPMS_PPSR_PITCH_SATURATED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return o_data.insertFromRight<CPMS_PPSR_PITCH_SATURATED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_PPSR_PITCH_SATURATED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_PPSR_PITCH_SATURATED]

//>> SET_[CPMS_PPSR_PITCH_SATURATED]
static inline fapi2::buffer<uint64_t>& SET_CPMS_PPSR_PITCH_SATURATED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return o_data.insertFromRight<CPMS_PPSR_PITCH_SATURATED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_PPSR_PITCH_SATURATED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_PPSR_PITCH_SATURATED]

//>> SET_[CPMS_PPSR_PITCH_SATURATED]
static inline fapi2::buffer<uint64_t>& SET_CPMS_PPSR_PITCH_SATURATED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return o_data.setBit<CPMS_PPSR_PITCH_SATURATED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_PPSR_PITCH_SATURATED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_PPSR_PITCH_SATURATED]

//>> CLEAR_[CPMS_PPSR_PITCH_SATURATED]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_PPSR_PITCH_SATURATED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return o_data.clearBit<CPMS_PPSR_PITCH_SATURATED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_PPSR_PITCH_SATURATED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_PPSR_PITCH_SATURATED]

//>> GET_[CPMS_PPSR_PITCH_SATURATED]
static inline fapi2::buffer<uint64_t>& GET_CPMS_PPSR_PITCH_SATURATED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return i_data.extractToRight<CPMS_PPSR_PITCH_SATURATED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_PPSR_PITCH_SATURATED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_PPSR_PITCH_SATURATED]

//>> GET_[CPMS_PPSR_PITCH_SATURATED]
static inline bool GET_CPMS_PPSR_PITCH_SATURATED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return i_data.getBit<CPMS_PPSR_PITCH_SATURATED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_PPSR_PITCH_SATURATED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_PPSR_PITCH_SATURATED]

//>> SET_[CPMS_PPSR_PITCH_ABORTED]
static inline fapi2::buffer<uint64_t>& SET_CPMS_PPSR_PITCH_ABORTED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return o_data.insertFromRight<CPMS_PPSR_PITCH_ABORTED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_PPSR_PITCH_ABORTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_PPSR_PITCH_ABORTED]

//>> SET_[CPMS_PPSR_PITCH_ABORTED]
static inline fapi2::buffer<uint64_t>& SET_CPMS_PPSR_PITCH_ABORTED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return o_data.insertFromRight<CPMS_PPSR_PITCH_ABORTED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_PPSR_PITCH_ABORTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_PPSR_PITCH_ABORTED]

//>> SET_[CPMS_PPSR_PITCH_ABORTED]
static inline fapi2::buffer<uint64_t>& SET_CPMS_PPSR_PITCH_ABORTED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return o_data.setBit<CPMS_PPSR_PITCH_ABORTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_PPSR_PITCH_ABORTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_PPSR_PITCH_ABORTED]

//>> CLEAR_[CPMS_PPSR_PITCH_ABORTED]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_PPSR_PITCH_ABORTED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return o_data.clearBit<CPMS_PPSR_PITCH_ABORTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_PPSR_PITCH_ABORTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_PPSR_PITCH_ABORTED]

//>> GET_[CPMS_PPSR_PITCH_ABORTED]
static inline fapi2::buffer<uint64_t>& GET_CPMS_PPSR_PITCH_ABORTED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return i_data.extractToRight<CPMS_PPSR_PITCH_ABORTED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_PPSR_PITCH_ABORTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_PPSR_PITCH_ABORTED]

//>> GET_[CPMS_PPSR_PITCH_ABORTED]
static inline bool GET_CPMS_PPSR_PITCH_ABORTED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return i_data.getBit<CPMS_PPSR_PITCH_ABORTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_PPSR_PITCH_ABORTED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_PPSR_PITCH_ABORTED]

//>> SET_[CPMS_PPSR_PITCH_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_PPSR_PITCH_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return o_data.insertFromRight<CPMS_PPSR_PITCH_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_PPSR_PITCH_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_PPSR_PITCH_ACTIVE]

//>> SET_[CPMS_PPSR_PITCH_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_PPSR_PITCH_ACTIVE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return o_data.insertFromRight<CPMS_PPSR_PITCH_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_PPSR_PITCH_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_PPSR_PITCH_ACTIVE]

//>> SET_[CPMS_PPSR_PITCH_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_PPSR_PITCH_ACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return o_data.setBit<CPMS_PPSR_PITCH_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_PPSR_PITCH_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_PPSR_PITCH_ACTIVE]

//>> CLEAR_[CPMS_PPSR_PITCH_ACTIVE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_PPSR_PITCH_ACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return o_data.clearBit<CPMS_PPSR_PITCH_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_PPSR_PITCH_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_PPSR_PITCH_ACTIVE]

//>> GET_[CPMS_PPSR_PITCH_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_PPSR_PITCH_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return i_data.extractToRight<CPMS_PPSR_PITCH_ACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_PPSR_PITCH_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_PPSR_PITCH_ACTIVE]

//>> GET_[CPMS_PPSR_PITCH_ACTIVE]
static inline bool GET_CPMS_PPSR_PITCH_ACTIVE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_PPSR));
#endif
    return i_data.getBit<CPMS_PPSR_PITCH_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_PPSR_PITCH_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_PPSR_PITCH_ACTIVE]

//>> PREP_[QME_PSCRS0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_PSCRS0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_PSCRS0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_PSCRS0]

//>> GET_[QME_PSCRS0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_PSCRS0(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_PSCRS0;
#endif
    return fapi2::getScom(i_target, QME_PSCRS0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_PSCRS0]

//>> PUT_[QME_PSCRS0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_PSCRS0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return fapi2::putScom(i_target, QME_PSCRS0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_PSCRS0]


//>> SET_[QME_PSCRS0_DPDES_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_DPDES_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.insertFromRight<QME_PSCRS0_DPDES_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS0_DPDES_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_DPDES_EXIT_ENABLE]

//>> SET_[QME_PSCRS0_DPDES_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_DPDES_EXIT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.insertFromRight<QME_PSCRS0_DPDES_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS0_DPDES_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_DPDES_EXIT_ENABLE]

//>> SET_[QME_PSCRS0_DPDES_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_DPDES_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.setBit<QME_PSCRS0_DPDES_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_PSCRS0_DPDES_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_DPDES_EXIT_ENABLE]

//>> CLEAR_[QME_PSCRS0_DPDES_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSCRS0_DPDES_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.clearBit<QME_PSCRS0_DPDES_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_PSCRS0_DPDES_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSCRS0_DPDES_EXIT_ENABLE]

//>> GET_[QME_PSCRS0_DPDES_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS0_DPDES_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return i_data.extractToRight<QME_PSCRS0_DPDES_EXIT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS0_DPDES_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS0_DPDES_EXIT_ENABLE]

//>> GET_[QME_PSCRS0_DPDES_EXIT_ENABLE]
static inline bool GET_QME_PSCRS0_DPDES_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return i_data.getBit<QME_PSCRS0_DPDES_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_PSCRS0_DPDES_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS0_DPDES_EXIT_ENABLE]

//>> SET_[QME_PSCRS0_SD]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_SD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.insertFromRight<QME_PSCRS0_SD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS0_SD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_SD]

//>> SET_[QME_PSCRS0_SD]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_SD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.insertFromRight<QME_PSCRS0_SD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS0_SD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_SD]

//>> SET_[QME_PSCRS0_SD]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_SD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.setBit<QME_PSCRS0_SD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_PSCRS0_SD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_SD]

//>> CLEAR_[QME_PSCRS0_SD]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSCRS0_SD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.clearBit<QME_PSCRS0_SD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_PSCRS0_SD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSCRS0_SD]

//>> GET_[QME_PSCRS0_SD]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS0_SD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return i_data.extractToRight<QME_PSCRS0_SD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS0_SD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS0_SD]

//>> GET_[QME_PSCRS0_SD]
static inline bool GET_QME_PSCRS0_SD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return i_data.getBit<QME_PSCRS0_SD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_PSCRS0_SD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS0_SD]

//>> SET_[QME_PSCRS0_ESL]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_ESL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.insertFromRight<QME_PSCRS0_ESL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS0_ESL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_ESL]

//>> SET_[QME_PSCRS0_ESL]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_ESL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.insertFromRight<QME_PSCRS0_ESL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS0_ESL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_ESL]

//>> SET_[QME_PSCRS0_ESL]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_ESL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.setBit<QME_PSCRS0_ESL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_PSCRS0_ESL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_ESL]

//>> CLEAR_[QME_PSCRS0_ESL]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSCRS0_ESL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.clearBit<QME_PSCRS0_ESL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_PSCRS0_ESL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSCRS0_ESL]

//>> GET_[QME_PSCRS0_ESL]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS0_ESL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return i_data.extractToRight<QME_PSCRS0_ESL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS0_ESL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS0_ESL]

//>> GET_[QME_PSCRS0_ESL]
static inline bool GET_QME_PSCRS0_ESL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return i_data.getBit<QME_PSCRS0_ESL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_PSCRS0_ESL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS0_ESL]

//>> SET_[QME_PSCRS0_EC]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_EC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.insertFromRight<QME_PSCRS0_EC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS0_EC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_EC]

//>> SET_[QME_PSCRS0_EC]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_EC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.insertFromRight<QME_PSCRS0_EC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS0_EC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_EC]

//>> SET_[QME_PSCRS0_EC]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_EC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.setBit<QME_PSCRS0_EC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_PSCRS0_EC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_EC]

//>> CLEAR_[QME_PSCRS0_EC]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSCRS0_EC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.clearBit<QME_PSCRS0_EC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_PSCRS0_EC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSCRS0_EC]

//>> GET_[QME_PSCRS0_EC]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS0_EC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return i_data.extractToRight<QME_PSCRS0_EC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS0_EC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS0_EC]

//>> GET_[QME_PSCRS0_EC]
static inline bool GET_QME_PSCRS0_EC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return i_data.getBit<QME_PSCRS0_EC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_PSCRS0_EC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS0_EC]

//>> SET_[QME_PSCRS0_PSLL]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_PSLL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.insertFromRight<QME_PSCRS0_PSLL,
           QME_PSCRS0_PSLL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS0_PSLL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_PSLL]

//>> SET_[QME_PSCRS0_PSLL]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_PSLL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.insertFromRight<QME_PSCRS0_PSLL,
           QME_PSCRS0_PSLL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS0_PSLL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_PSLL]

//>> GET_[QME_PSCRS0_PSLL]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS0_PSLL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return i_data.extractToRight<QME_PSCRS0_PSLL,
           QME_PSCRS0_PSLL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS0_PSLL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS0_PSLL]

//>> SET_[QME_PSCRS0_HYP_VIRT_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_HYP_VIRT_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.insertFromRight<QME_PSCRS0_HYP_VIRT_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS0_HYP_VIRT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_HYP_VIRT_EXIT_ENABLE]

//>> SET_[QME_PSCRS0_HYP_VIRT_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_HYP_VIRT_EXIT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.insertFromRight<QME_PSCRS0_HYP_VIRT_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS0_HYP_VIRT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_HYP_VIRT_EXIT_ENABLE]

//>> SET_[QME_PSCRS0_HYP_VIRT_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_HYP_VIRT_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.setBit<QME_PSCRS0_HYP_VIRT_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_PSCRS0_HYP_VIRT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_HYP_VIRT_EXIT_ENABLE]

//>> CLEAR_[QME_PSCRS0_HYP_VIRT_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSCRS0_HYP_VIRT_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.clearBit<QME_PSCRS0_HYP_VIRT_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_PSCRS0_HYP_VIRT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSCRS0_HYP_VIRT_EXIT_ENABLE]

//>> GET_[QME_PSCRS0_HYP_VIRT_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS0_HYP_VIRT_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return i_data.extractToRight<QME_PSCRS0_HYP_VIRT_EXIT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS0_HYP_VIRT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS0_HYP_VIRT_EXIT_ENABLE]

//>> GET_[QME_PSCRS0_HYP_VIRT_EXIT_ENABLE]
static inline bool GET_QME_PSCRS0_HYP_VIRT_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return i_data.getBit<QME_PSCRS0_HYP_VIRT_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_PSCRS0_HYP_VIRT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS0_HYP_VIRT_EXIT_ENABLE]

//>> SET_[QME_PSCRS0_UV_DB_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_UV_DB_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.insertFromRight<QME_PSCRS0_UV_DB_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS0_UV_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_UV_DB_EXIT_ENABLE]

//>> SET_[QME_PSCRS0_UV_DB_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_UV_DB_EXIT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.insertFromRight<QME_PSCRS0_UV_DB_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS0_UV_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_UV_DB_EXIT_ENABLE]

//>> SET_[QME_PSCRS0_UV_DB_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_UV_DB_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.setBit<QME_PSCRS0_UV_DB_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_PSCRS0_UV_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_UV_DB_EXIT_ENABLE]

//>> CLEAR_[QME_PSCRS0_UV_DB_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSCRS0_UV_DB_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.clearBit<QME_PSCRS0_UV_DB_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_PSCRS0_UV_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSCRS0_UV_DB_EXIT_ENABLE]

//>> GET_[QME_PSCRS0_UV_DB_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS0_UV_DB_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return i_data.extractToRight<QME_PSCRS0_UV_DB_EXIT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS0_UV_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS0_UV_DB_EXIT_ENABLE]

//>> GET_[QME_PSCRS0_UV_DB_EXIT_ENABLE]
static inline bool GET_QME_PSCRS0_UV_DB_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return i_data.getBit<QME_PSCRS0_UV_DB_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_PSCRS0_UV_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS0_UV_DB_EXIT_ENABLE]

//>> SET_[QME_PSCRS0_HYP_DB_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_HYP_DB_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.insertFromRight<QME_PSCRS0_HYP_DB_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS0_HYP_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_HYP_DB_EXIT_ENABLE]

//>> SET_[QME_PSCRS0_HYP_DB_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_HYP_DB_EXIT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.insertFromRight<QME_PSCRS0_HYP_DB_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS0_HYP_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_HYP_DB_EXIT_ENABLE]

//>> SET_[QME_PSCRS0_HYP_DB_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_HYP_DB_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.setBit<QME_PSCRS0_HYP_DB_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_PSCRS0_HYP_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_HYP_DB_EXIT_ENABLE]

//>> CLEAR_[QME_PSCRS0_HYP_DB_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSCRS0_HYP_DB_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.clearBit<QME_PSCRS0_HYP_DB_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_PSCRS0_HYP_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSCRS0_HYP_DB_EXIT_ENABLE]

//>> GET_[QME_PSCRS0_HYP_DB_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS0_HYP_DB_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return i_data.extractToRight<QME_PSCRS0_HYP_DB_EXIT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS0_HYP_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS0_HYP_DB_EXIT_ENABLE]

//>> GET_[QME_PSCRS0_HYP_DB_EXIT_ENABLE]
static inline bool GET_QME_PSCRS0_HYP_DB_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return i_data.getBit<QME_PSCRS0_HYP_DB_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_PSCRS0_HYP_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS0_HYP_DB_EXIT_ENABLE]

//>> SET_[QME_PSCRS0_EXT_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_EXT_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.insertFromRight<QME_PSCRS0_EXT_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS0_EXT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_EXT_EXIT_ENABLE]

//>> SET_[QME_PSCRS0_EXT_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_EXT_EXIT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.insertFromRight<QME_PSCRS0_EXT_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS0_EXT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_EXT_EXIT_ENABLE]

//>> SET_[QME_PSCRS0_EXT_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_EXT_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.setBit<QME_PSCRS0_EXT_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_PSCRS0_EXT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_EXT_EXIT_ENABLE]

//>> CLEAR_[QME_PSCRS0_EXT_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSCRS0_EXT_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.clearBit<QME_PSCRS0_EXT_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_PSCRS0_EXT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSCRS0_EXT_EXIT_ENABLE]

//>> GET_[QME_PSCRS0_EXT_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS0_EXT_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return i_data.extractToRight<QME_PSCRS0_EXT_EXIT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS0_EXT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS0_EXT_EXIT_ENABLE]

//>> GET_[QME_PSCRS0_EXT_EXIT_ENABLE]
static inline bool GET_QME_PSCRS0_EXT_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return i_data.getBit<QME_PSCRS0_EXT_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_PSCRS0_EXT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS0_EXT_EXIT_ENABLE]

//>> SET_[QME_PSCRS0_DEC_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_DEC_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.insertFromRight<QME_PSCRS0_DEC_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS0_DEC_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_DEC_EXIT_ENABLE]

//>> SET_[QME_PSCRS0_DEC_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_DEC_EXIT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.insertFromRight<QME_PSCRS0_DEC_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS0_DEC_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_DEC_EXIT_ENABLE]

//>> SET_[QME_PSCRS0_DEC_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_DEC_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.setBit<QME_PSCRS0_DEC_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_PSCRS0_DEC_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_DEC_EXIT_ENABLE]

//>> CLEAR_[QME_PSCRS0_DEC_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSCRS0_DEC_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.clearBit<QME_PSCRS0_DEC_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_PSCRS0_DEC_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSCRS0_DEC_EXIT_ENABLE]

//>> GET_[QME_PSCRS0_DEC_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS0_DEC_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return i_data.extractToRight<QME_PSCRS0_DEC_EXIT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS0_DEC_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS0_DEC_EXIT_ENABLE]

//>> GET_[QME_PSCRS0_DEC_EXIT_ENABLE]
static inline bool GET_QME_PSCRS0_DEC_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return i_data.getBit<QME_PSCRS0_DEC_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_PSCRS0_DEC_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS0_DEC_EXIT_ENABLE]

//>> SET_[QME_PSCRS0_HMI_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_HMI_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.insertFromRight<QME_PSCRS0_HMI_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS0_HMI_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_HMI_EXIT_ENABLE]

//>> SET_[QME_PSCRS0_HMI_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_HMI_EXIT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.insertFromRight<QME_PSCRS0_HMI_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS0_HMI_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_HMI_EXIT_ENABLE]

//>> SET_[QME_PSCRS0_HMI_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_HMI_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.setBit<QME_PSCRS0_HMI_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_PSCRS0_HMI_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_HMI_EXIT_ENABLE]

//>> CLEAR_[QME_PSCRS0_HMI_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSCRS0_HMI_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.clearBit<QME_PSCRS0_HMI_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_PSCRS0_HMI_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSCRS0_HMI_EXIT_ENABLE]

//>> GET_[QME_PSCRS0_HMI_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS0_HMI_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return i_data.extractToRight<QME_PSCRS0_HMI_EXIT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS0_HMI_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS0_HMI_EXIT_ENABLE]

//>> GET_[QME_PSCRS0_HMI_EXIT_ENABLE]
static inline bool GET_QME_PSCRS0_HMI_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return i_data.getBit<QME_PSCRS0_HMI_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_PSCRS0_HMI_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS0_HMI_EXIT_ENABLE]

//>> SET_[QME_PSCRS0_TR]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_TR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.insertFromRight<QME_PSCRS0_TR,
           QME_PSCRS0_TR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS0_TR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_TR]

//>> SET_[QME_PSCRS0_TR]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_TR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.insertFromRight<QME_PSCRS0_TR,
           QME_PSCRS0_TR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS0_TR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_TR]

//>> GET_[QME_PSCRS0_TR]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS0_TR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return i_data.extractToRight<QME_PSCRS0_TR,
           QME_PSCRS0_TR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS0_TR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS0_TR]

//>> SET_[QME_PSCRS0_MTL]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_MTL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.insertFromRight<QME_PSCRS0_MTL,
           QME_PSCRS0_MTL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS0_MTL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_MTL]

//>> SET_[QME_PSCRS0_MTL]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_MTL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.insertFromRight<QME_PSCRS0_MTL,
           QME_PSCRS0_MTL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS0_MTL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_MTL]

//>> GET_[QME_PSCRS0_MTL]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS0_MTL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return i_data.extractToRight<QME_PSCRS0_MTL,
           QME_PSCRS0_MTL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS0_MTL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS0_MTL]

//>> SET_[QME_PSCRS0_RL]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_RL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.insertFromRight<QME_PSCRS0_RL,
           QME_PSCRS0_RL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS0_RL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_RL]

//>> SET_[QME_PSCRS0_RL]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_RL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.insertFromRight<QME_PSCRS0_RL,
           QME_PSCRS0_RL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS0_RL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_RL]

//>> GET_[QME_PSCRS0_RL]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS0_RL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return i_data.extractToRight<QME_PSCRS0_RL,
           QME_PSCRS0_RL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS0_RL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS0_RL]

//>> SET_[QME_PSCRS0_PLS]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_PLS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.insertFromRight<QME_PSCRS0_PLS,
           QME_PSCRS0_PLS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS0_PLS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_PLS]

//>> SET_[QME_PSCRS0_PLS]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS0_PLS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return o_data.insertFromRight<QME_PSCRS0_PLS,
           QME_PSCRS0_PLS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS0_PLS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS0_PLS]

//>> GET_[QME_PSCRS0_PLS]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS0_PLS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS0));
#endif
    return i_data.extractToRight<QME_PSCRS0_PLS,
           QME_PSCRS0_PLS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS0_PLS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS0_PLS]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
