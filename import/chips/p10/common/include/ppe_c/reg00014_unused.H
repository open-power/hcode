/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_c/reg00014_unused.H $     */
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

#ifndef __PPE_C_REG00014_H_UNUSED__
#define __PPE_C_REG00014_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_c
{
#endif


//>> PREP_[CPMS_DESR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_DESR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_DESR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_DESR]

//>> GET_[CPMS_DESR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_DESR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_DESR;
#endif
    return fapi2::getScom(i_target, CPMS_DESR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_DESR]

//>> PUT_[CPMS_DESR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_DESR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return fapi2::putScom(i_target, CPMS_DESR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_DESR]


//>> SET_[CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL,
           CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL]

//>> SET_[CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL,
           CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL]

//>> GET_[CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL,
           CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_COUNTA_FTC_ACTIVITY_SEL]

//>> SET_[CPMS_DESR_COUNTA_FTC_EVENT_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTA_FTC_EVENT_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTA_FTC_EVENT_SEL,
           CPMS_DESR_COUNTA_FTC_EVENT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_COUNTA_FTC_EVENT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTA_FTC_EVENT_SEL]

//>> SET_[CPMS_DESR_COUNTA_FTC_EVENT_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTA_FTC_EVENT_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTA_FTC_EVENT_SEL,
           CPMS_DESR_COUNTA_FTC_EVENT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_COUNTA_FTC_EVENT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTA_FTC_EVENT_SEL]

//>> GET_[CPMS_DESR_COUNTA_FTC_EVENT_SEL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_COUNTA_FTC_EVENT_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_COUNTA_FTC_EVENT_SEL,
           CPMS_DESR_COUNTA_FTC_EVENT_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_COUNTA_FTC_EVENT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_COUNTA_FTC_EVENT_SEL]

//>> SET_[CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL,
           CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL]

//>> SET_[CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL,
           CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL]

//>> GET_[CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL,
           CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_COUNTB_FTC_ACTIVITY_SEL]

//>> SET_[CPMS_DESR_COUNTB_FTC_EVENT_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTB_FTC_EVENT_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTB_FTC_EVENT_SEL,
           CPMS_DESR_COUNTB_FTC_EVENT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_COUNTB_FTC_EVENT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTB_FTC_EVENT_SEL]

//>> SET_[CPMS_DESR_COUNTB_FTC_EVENT_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTB_FTC_EVENT_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTB_FTC_EVENT_SEL,
           CPMS_DESR_COUNTB_FTC_EVENT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_COUNTB_FTC_EVENT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTB_FTC_EVENT_SEL]

//>> GET_[CPMS_DESR_COUNTB_FTC_EVENT_SEL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_COUNTB_FTC_EVENT_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_COUNTB_FTC_EVENT_SEL,
           CPMS_DESR_COUNTB_FTC_EVENT_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_COUNTB_FTC_EVENT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_COUNTB_FTC_EVENT_SEL]

//>> SET_[CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL,
           CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL]

//>> SET_[CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL,
           CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL]

//>> GET_[CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL,
           CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_COUNTC_FTC_ACTIVITY_SEL]

//>> SET_[CPMS_DESR_COUNTC_FTC_EVENT_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTC_FTC_EVENT_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTC_FTC_EVENT_SEL,
           CPMS_DESR_COUNTC_FTC_EVENT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_COUNTC_FTC_EVENT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTC_FTC_EVENT_SEL]

//>> SET_[CPMS_DESR_COUNTC_FTC_EVENT_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTC_FTC_EVENT_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTC_FTC_EVENT_SEL,
           CPMS_DESR_COUNTC_FTC_EVENT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_COUNTC_FTC_EVENT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTC_FTC_EVENT_SEL]

//>> GET_[CPMS_DESR_COUNTC_FTC_EVENT_SEL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_COUNTC_FTC_EVENT_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_COUNTC_FTC_EVENT_SEL,
           CPMS_DESR_COUNTC_FTC_EVENT_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_COUNTC_FTC_EVENT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_COUNTC_FTC_EVENT_SEL]

//>> SET_[CPMS_DESR_COUNTA_FTC_STATE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTA_FTC_STATE_SELECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTA_FTC_STATE_SELECT,
           CPMS_DESR_COUNTA_FTC_STATE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_COUNTA_FTC_STATE_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTA_FTC_STATE_SELECT]

//>> SET_[CPMS_DESR_COUNTA_FTC_STATE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTA_FTC_STATE_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTA_FTC_STATE_SELECT,
           CPMS_DESR_COUNTA_FTC_STATE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_COUNTA_FTC_STATE_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTA_FTC_STATE_SELECT]

//>> GET_[CPMS_DESR_COUNTA_FTC_STATE_SELECT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_COUNTA_FTC_STATE_SELECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_COUNTA_FTC_STATE_SELECT,
           CPMS_DESR_COUNTA_FTC_STATE_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_COUNTA_FTC_STATE_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_COUNTA_FTC_STATE_SELECT]

//>> SET_[CPMS_DESR_COUNTB_FTC_STATE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTB_FTC_STATE_SELECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTB_FTC_STATE_SELECT,
           CPMS_DESR_COUNTB_FTC_STATE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_COUNTB_FTC_STATE_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTB_FTC_STATE_SELECT]

//>> SET_[CPMS_DESR_COUNTB_FTC_STATE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTB_FTC_STATE_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTB_FTC_STATE_SELECT,
           CPMS_DESR_COUNTB_FTC_STATE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_COUNTB_FTC_STATE_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTB_FTC_STATE_SELECT]

//>> GET_[CPMS_DESR_COUNTB_FTC_STATE_SELECT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_COUNTB_FTC_STATE_SELECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_COUNTB_FTC_STATE_SELECT,
           CPMS_DESR_COUNTB_FTC_STATE_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_COUNTB_FTC_STATE_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_COUNTB_FTC_STATE_SELECT]

//>> SET_[CPMS_DESR_COUNTC_FTC_STATE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTC_FTC_STATE_SELECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTC_FTC_STATE_SELECT,
           CPMS_DESR_COUNTC_FTC_STATE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_COUNTC_FTC_STATE_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTC_FTC_STATE_SELECT]

//>> SET_[CPMS_DESR_COUNTC_FTC_STATE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_COUNTC_FTC_STATE_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_COUNTC_FTC_STATE_SELECT,
           CPMS_DESR_COUNTC_FTC_STATE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_COUNTC_FTC_STATE_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_COUNTC_FTC_STATE_SELECT]

//>> GET_[CPMS_DESR_COUNTC_FTC_STATE_SELECT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_COUNTC_FTC_STATE_SELECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_COUNTC_FTC_STATE_SELECT,
           CPMS_DESR_COUNTC_FTC_STATE_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_COUNTC_FTC_STATE_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_COUNTC_FTC_STATE_SELECT]

//>> SET_[CPMS_DESR_FTC_INVERT_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_FTC_INVERT_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_FTC_INVERT_SEL,
           CPMS_DESR_FTC_INVERT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_FTC_INVERT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_FTC_INVERT_SEL]

//>> SET_[CPMS_DESR_FTC_INVERT_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_FTC_INVERT_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_FTC_INVERT_SEL,
           CPMS_DESR_FTC_INVERT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_FTC_INVERT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_FTC_INVERT_SEL]

//>> GET_[CPMS_DESR_FTC_INVERT_SEL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_FTC_INVERT_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_FTC_INVERT_SEL,
           CPMS_DESR_FTC_INVERT_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_FTC_INVERT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_FTC_INVERT_SEL]

//>> SET_[CPMS_DESR_FTC_SPARE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_FTC_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_FTC_SPARE,
           CPMS_DESR_FTC_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_FTC_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_FTC_SPARE]

//>> SET_[CPMS_DESR_FTC_SPARE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_FTC_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_FTC_SPARE,
           CPMS_DESR_FTC_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_FTC_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_FTC_SPARE]

//>> GET_[CPMS_DESR_FTC_SPARE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_FTC_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_FTC_SPARE,
           CPMS_DESR_FTC_SPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_FTC_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_FTC_SPARE]

//>> SET_[CPMS_DESR_FTC_EVENT_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_FTC_EVENT_INVERT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_FTC_EVENT_INVERT,
           CPMS_DESR_FTC_EVENT_INVERT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_FTC_EVENT_INVERT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_FTC_EVENT_INVERT]

//>> SET_[CPMS_DESR_FTC_EVENT_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_FTC_EVENT_INVERT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_FTC_EVENT_INVERT,
           CPMS_DESR_FTC_EVENT_INVERT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_FTC_EVENT_INVERT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_FTC_EVENT_INVERT]

//>> GET_[CPMS_DESR_FTC_EVENT_INVERT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_FTC_EVENT_INVERT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_FTC_EVENT_INVERT,
           CPMS_DESR_FTC_EVENT_INVERT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_FTC_EVENT_INVERT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_FTC_EVENT_INVERT]

//>> SET_[CPMS_DESR_STATEW_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_STATEW_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_STATEW_ENABLE,
           CPMS_DESR_STATEW_ENABLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_STATEW_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_STATEW_ENABLE]

//>> SET_[CPMS_DESR_STATEW_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_STATEW_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_STATEW_ENABLE,
           CPMS_DESR_STATEW_ENABLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_STATEW_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_STATEW_ENABLE]

//>> GET_[CPMS_DESR_STATEW_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_STATEW_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_STATEW_ENABLE,
           CPMS_DESR_STATEW_ENABLE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_STATEW_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_STATEW_ENABLE]

//>> SET_[CPMS_DESR_STATEZ_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_STATEZ_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_STATEZ_ENABLE,
           CPMS_DESR_STATEZ_ENABLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_STATEZ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_STATEZ_ENABLE]

//>> SET_[CPMS_DESR_STATEZ_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_STATEZ_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_STATEZ_ENABLE,
           CPMS_DESR_STATEZ_ENABLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_STATEZ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_STATEZ_ENABLE]

//>> GET_[CPMS_DESR_STATEZ_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_STATEZ_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_STATEZ_ENABLE,
           CPMS_DESR_STATEZ_ENABLE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_STATEZ_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_STATEZ_ENABLE]

//>> SET_[CPMS_DESR_SPARE_COUNT_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_SPARE_COUNT_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_SPARE_COUNT_SEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_SPARE_COUNT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_SPARE_COUNT_SEL]

//>> SET_[CPMS_DESR_SPARE_COUNT_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_SPARE_COUNT_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_SPARE_COUNT_SEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_SPARE_COUNT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_SPARE_COUNT_SEL]

//>> SET_[CPMS_DESR_SPARE_COUNT_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_SPARE_COUNT_SEL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.setBit<CPMS_DESR_SPARE_COUNT_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_DESR_SPARE_COUNT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_SPARE_COUNT_SEL]

//>> CLEAR_[CPMS_DESR_SPARE_COUNT_SEL]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DESR_SPARE_COUNT_SEL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.clearBit<CPMS_DESR_SPARE_COUNT_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_DESR_SPARE_COUNT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_DESR_SPARE_COUNT_SEL]

//>> GET_[CPMS_DESR_SPARE_COUNT_SEL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_SPARE_COUNT_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_SPARE_COUNT_SEL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_SPARE_COUNT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_SPARE_COUNT_SEL]

//>> GET_[CPMS_DESR_SPARE_COUNT_SEL]
static inline bool GET_CPMS_DESR_SPARE_COUNT_SEL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.getBit<CPMS_DESR_SPARE_COUNT_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_DESR_SPARE_COUNT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_SPARE_COUNT_SEL]

//>> SET_[CPMS_DESR_SECONDARY_QUAL_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_SECONDARY_QUAL_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_SECONDARY_QUAL_SEL,
           CPMS_DESR_SECONDARY_QUAL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_SECONDARY_QUAL_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_SECONDARY_QUAL_SEL]

//>> SET_[CPMS_DESR_SECONDARY_QUAL_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_SECONDARY_QUAL_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_SECONDARY_QUAL_SEL,
           CPMS_DESR_SECONDARY_QUAL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_SECONDARY_QUAL_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_SECONDARY_QUAL_SEL]

//>> GET_[CPMS_DESR_SECONDARY_QUAL_SEL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_SECONDARY_QUAL_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_SECONDARY_QUAL_SEL,
           CPMS_DESR_SECONDARY_QUAL_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_SECONDARY_QUAL_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_SECONDARY_QUAL_SEL]

//>> SET_[CPMS_DESR_SECONDARY_EVENT_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_SECONDARY_EVENT_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_SECONDARY_EVENT_SEL,
           CPMS_DESR_SECONDARY_EVENT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DESR_SECONDARY_EVENT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_SECONDARY_EVENT_SEL]

//>> SET_[CPMS_DESR_SECONDARY_EVENT_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DESR_SECONDARY_EVENT_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return o_data.insertFromRight<CPMS_DESR_SECONDARY_EVENT_SEL,
           CPMS_DESR_SECONDARY_EVENT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DESR_SECONDARY_EVENT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DESR_SECONDARY_EVENT_SEL]

//>> GET_[CPMS_DESR_SECONDARY_EVENT_SEL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DESR_SECONDARY_EVENT_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DESR));
#endif
    return i_data.extractToRight<CPMS_DESR_SECONDARY_EVENT_SEL,
           CPMS_DESR_SECONDARY_EVENT_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DESR_SECONDARY_EVENT_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DESR_SECONDARY_EVENT_SEL]

//>> PREP_[CPMS_DTTR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_DTTR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_DTTR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_DTTR]

//>> GET_[CPMS_DTTR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_DTTR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_DTTR;
#endif
    return fapi2::getScom(i_target, CPMS_DTTR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_DTTR]

//>> PUT_[CPMS_DTTR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_DTTR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return fapi2::putScom(i_target, CPMS_DTTR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_DTTR]


//>> SET_[CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return o_data.insertFromRight<CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT,
           CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT]

//>> SET_[CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return o_data.insertFromRight<CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT,
           CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT]

//>> GET_[CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return i_data.extractToRight<CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT,
           CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DTTR_CPMS_DTCR_CORE_DPT_RATE_LIMIT]

//>> SET_[CPMS_DTTR_T1_DPT_RATE_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTTR_T1_DPT_RATE_LIMIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return o_data.insertFromRight<CPMS_DTTR_T1_DPT_RATE_LIMIT,
           CPMS_DTTR_T1_DPT_RATE_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DTTR_T1_DPT_RATE_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTTR_T1_DPT_RATE_LIMIT]

//>> SET_[CPMS_DTTR_T1_DPT_RATE_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTTR_T1_DPT_RATE_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return o_data.insertFromRight<CPMS_DTTR_T1_DPT_RATE_LIMIT,
           CPMS_DTTR_T1_DPT_RATE_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DTTR_T1_DPT_RATE_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTTR_T1_DPT_RATE_LIMIT]

//>> GET_[CPMS_DTTR_T1_DPT_RATE_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DTTR_T1_DPT_RATE_LIMIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return i_data.extractToRight<CPMS_DTTR_T1_DPT_RATE_LIMIT,
           CPMS_DTTR_T1_DPT_RATE_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DTTR_T1_DPT_RATE_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DTTR_T1_DPT_RATE_LIMIT]

//>> SET_[CPMS_DTTR_T2_DPT_RATE_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTTR_T2_DPT_RATE_LIMIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return o_data.insertFromRight<CPMS_DTTR_T2_DPT_RATE_LIMIT,
           CPMS_DTTR_T2_DPT_RATE_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DTTR_T2_DPT_RATE_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTTR_T2_DPT_RATE_LIMIT]

//>> SET_[CPMS_DTTR_T2_DPT_RATE_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTTR_T2_DPT_RATE_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return o_data.insertFromRight<CPMS_DTTR_T2_DPT_RATE_LIMIT,
           CPMS_DTTR_T2_DPT_RATE_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DTTR_T2_DPT_RATE_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTTR_T2_DPT_RATE_LIMIT]

//>> GET_[CPMS_DTTR_T2_DPT_RATE_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DTTR_T2_DPT_RATE_LIMIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return i_data.extractToRight<CPMS_DTTR_T2_DPT_RATE_LIMIT,
           CPMS_DTTR_T2_DPT_RATE_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DTTR_T2_DPT_RATE_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DTTR_T2_DPT_RATE_LIMIT]

//>> SET_[CPMS_DTTR_T3_DPT_RATE_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTTR_T3_DPT_RATE_LIMIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return o_data.insertFromRight<CPMS_DTTR_T3_DPT_RATE_LIMIT,
           CPMS_DTTR_T3_DPT_RATE_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DTTR_T3_DPT_RATE_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTTR_T3_DPT_RATE_LIMIT]

//>> SET_[CPMS_DTTR_T3_DPT_RATE_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTTR_T3_DPT_RATE_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return o_data.insertFromRight<CPMS_DTTR_T3_DPT_RATE_LIMIT,
           CPMS_DTTR_T3_DPT_RATE_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DTTR_T3_DPT_RATE_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTTR_T3_DPT_RATE_LIMIT]

//>> GET_[CPMS_DTTR_T3_DPT_RATE_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DTTR_T3_DPT_RATE_LIMIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return i_data.extractToRight<CPMS_DTTR_T3_DPT_RATE_LIMIT,
           CPMS_DTTR_T3_DPT_RATE_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DTTR_T3_DPT_RATE_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DTTR_T3_DPT_RATE_LIMIT]

//>> SET_[CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return o_data.insertFromRight<CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT,
           CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT]

//>> SET_[CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return o_data.insertFromRight<CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT,
           CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT]

//>> GET_[CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return i_data.extractToRight<CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT,
           CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DTTR_CPMS_DTCR_CORE_DPT_INFLIGHT_LIMIT]

//>> SET_[CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return o_data.insertFromRight<CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT,
           CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT]

//>> SET_[CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return o_data.insertFromRight<CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT,
           CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT]

//>> GET_[CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return i_data.extractToRight<CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT,
           CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DTTR_T1_DPT_INFLIGHT_LIMIT]

//>> SET_[CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return o_data.insertFromRight<CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT,
           CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT]

//>> SET_[CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return o_data.insertFromRight<CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT,
           CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT]

//>> GET_[CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return i_data.extractToRight<CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT,
           CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DTTR_T2_DPT_INFLIGHT_LIMIT]

//>> SET_[CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return o_data.insertFromRight<CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT,
           CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT]

//>> SET_[CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return o_data.insertFromRight<CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT,
           CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT]

//>> GET_[CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DTTR));
#endif
    return i_data.extractToRight<CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT,
           CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DTTR_T3_DPT_INFLIGHT_LIMIT]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
