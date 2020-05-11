/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_c/reg00009_unused.H $     */
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

#ifndef __PPE_C_REG00009_H_UNUSED__
#define __PPE_C_REG00009_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_c
{
#endif


//>> PREP_[CPMS_DDSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_DDSR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_DDSR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_DDSR]

//>> GET_[CPMS_DDSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_DDSR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_DDSR;
#endif
    return fapi2::getScom(i_target, CPMS_DDSR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_DDSR]

//>> PUT_[CPMS_DDSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_DDSR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return fapi2::putScom(i_target, CPMS_DDSR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_DDSR]


//>> SET_[CPMS_DDSR_DDS_DATA]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DDSR_DDS_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.insertFromRight<CPMS_DDSR_DDS_DATA,
           CPMS_DDSR_DDS_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DDSR_DDS_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DDSR_DDS_DATA]

//>> SET_[CPMS_DDSR_DDS_DATA]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DDSR_DDS_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.insertFromRight<CPMS_DDSR_DDS_DATA,
           CPMS_DDSR_DDS_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DDSR_DDS_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DDSR_DDS_DATA]

//>> GET_[CPMS_DDSR_DDS_DATA]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DDSR_DDS_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return i_data.extractToRight<CPMS_DDSR_DDS_DATA,
           CPMS_DDSR_DDS_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DDSR_DDS_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DDSR_DDS_DATA]

//>> SET_[CPMS_DDSR_DDS_MIN]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DDSR_DDS_MIN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.insertFromRight<CPMS_DDSR_DDS_MIN,
           CPMS_DDSR_DDS_MIN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DDSR_DDS_MIN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DDSR_DDS_MIN]

//>> SET_[CPMS_DDSR_DDS_MIN]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DDSR_DDS_MIN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.insertFromRight<CPMS_DDSR_DDS_MIN,
           CPMS_DDSR_DDS_MIN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DDSR_DDS_MIN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DDSR_DDS_MIN]

//>> GET_[CPMS_DDSR_DDS_MIN]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DDSR_DDS_MIN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return i_data.extractToRight<CPMS_DDSR_DDS_MIN,
           CPMS_DDSR_DDS_MIN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DDSR_DDS_MIN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DDSR_DDS_MIN]

//>> SET_[CPMS_DDSR_DDS_MAX]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DDSR_DDS_MAX(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.insertFromRight<CPMS_DDSR_DDS_MAX,
           CPMS_DDSR_DDS_MAX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DDSR_DDS_MAX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DDSR_DDS_MAX]

//>> SET_[CPMS_DDSR_DDS_MAX]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DDSR_DDS_MAX(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.insertFromRight<CPMS_DDSR_DDS_MAX,
           CPMS_DDSR_DDS_MAX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DDSR_DDS_MAX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DDSR_DDS_MAX]

//>> GET_[CPMS_DDSR_DDS_MAX]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DDSR_DDS_MAX(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return i_data.extractToRight<CPMS_DDSR_DDS_MAX,
           CPMS_DDSR_DDS_MAX_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DDSR_DDS_MAX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DDSR_DDS_MAX]

//>> SET_[CPMS_DDSR_DPLL_ENCODED_DATA]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DDSR_DPLL_ENCODED_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.insertFromRight<CPMS_DDSR_DPLL_ENCODED_DATA,
           CPMS_DDSR_DPLL_ENCODED_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DDSR_DPLL_ENCODED_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DDSR_DPLL_ENCODED_DATA]

//>> SET_[CPMS_DDSR_DPLL_ENCODED_DATA]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DDSR_DPLL_ENCODED_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.insertFromRight<CPMS_DDSR_DPLL_ENCODED_DATA,
           CPMS_DDSR_DPLL_ENCODED_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DDSR_DPLL_ENCODED_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DDSR_DPLL_ENCODED_DATA]

//>> GET_[CPMS_DDSR_DPLL_ENCODED_DATA]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DDSR_DPLL_ENCODED_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return i_data.extractToRight<CPMS_DDSR_DPLL_ENCODED_DATA,
           CPMS_DDSR_DPLL_ENCODED_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DDSR_DPLL_ENCODED_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DDSR_DPLL_ENCODED_DATA]

//>> SET_[CPMS_DDSR_DPLL_ENCODED_MIN]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DDSR_DPLL_ENCODED_MIN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.insertFromRight<CPMS_DDSR_DPLL_ENCODED_MIN,
           CPMS_DDSR_DPLL_ENCODED_MIN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DDSR_DPLL_ENCODED_MIN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DDSR_DPLL_ENCODED_MIN]

//>> SET_[CPMS_DDSR_DPLL_ENCODED_MIN]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DDSR_DPLL_ENCODED_MIN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.insertFromRight<CPMS_DDSR_DPLL_ENCODED_MIN,
           CPMS_DDSR_DPLL_ENCODED_MIN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DDSR_DPLL_ENCODED_MIN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DDSR_DPLL_ENCODED_MIN]

//>> GET_[CPMS_DDSR_DPLL_ENCODED_MIN]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DDSR_DPLL_ENCODED_MIN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return i_data.extractToRight<CPMS_DDSR_DPLL_ENCODED_MIN,
           CPMS_DDSR_DPLL_ENCODED_MIN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DDSR_DPLL_ENCODED_MIN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DDSR_DPLL_ENCODED_MIN]

//>> SET_[CPMS_DDSR_DPLL_ENCODED_MAX]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DDSR_DPLL_ENCODED_MAX(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.insertFromRight<CPMS_DDSR_DPLL_ENCODED_MAX,
           CPMS_DDSR_DPLL_ENCODED_MAX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DDSR_DPLL_ENCODED_MAX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DDSR_DPLL_ENCODED_MAX]

//>> SET_[CPMS_DDSR_DPLL_ENCODED_MAX]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DDSR_DPLL_ENCODED_MAX(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.insertFromRight<CPMS_DDSR_DPLL_ENCODED_MAX,
           CPMS_DDSR_DPLL_ENCODED_MAX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DDSR_DPLL_ENCODED_MAX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DDSR_DPLL_ENCODED_MAX]

//>> GET_[CPMS_DDSR_DPLL_ENCODED_MAX]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DDSR_DPLL_ENCODED_MAX(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return i_data.extractToRight<CPMS_DDSR_DPLL_ENCODED_MAX,
           CPMS_DDSR_DPLL_ENCODED_MAX_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DDSR_DPLL_ENCODED_MAX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DDSR_DPLL_ENCODED_MAX]

//>> SET_[CPMS_DDSR_STOP_STATE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DDSR_STOP_STATE_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.insertFromRight<CPMS_DDSR_STOP_STATE_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DDSR_STOP_STATE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DDSR_STOP_STATE_ACTIVE]

//>> SET_[CPMS_DDSR_STOP_STATE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DDSR_STOP_STATE_ACTIVE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.insertFromRight<CPMS_DDSR_STOP_STATE_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DDSR_STOP_STATE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DDSR_STOP_STATE_ACTIVE]

//>> SET_[CPMS_DDSR_STOP_STATE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DDSR_STOP_STATE_ACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.setBit<CPMS_DDSR_STOP_STATE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_DDSR_STOP_STATE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DDSR_STOP_STATE_ACTIVE]

//>> CLEAR_[CPMS_DDSR_STOP_STATE_ACTIVE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DDSR_STOP_STATE_ACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.clearBit<CPMS_DDSR_STOP_STATE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_DDSR_STOP_STATE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_DDSR_STOP_STATE_ACTIVE]

//>> GET_[CPMS_DDSR_STOP_STATE_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DDSR_STOP_STATE_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return i_data.extractToRight<CPMS_DDSR_STOP_STATE_ACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DDSR_STOP_STATE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DDSR_STOP_STATE_ACTIVE]

//>> GET_[CPMS_DDSR_STOP_STATE_ACTIVE]
static inline bool GET_CPMS_DDSR_STOP_STATE_ACTIVE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return i_data.getBit<CPMS_DDSR_STOP_STATE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_DDSR_STOP_STATE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DDSR_STOP_STATE_ACTIVE]

//>> SET_[CPMS_DDSR_CORE_SAMPLE_DISABLED]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DDSR_CORE_SAMPLE_DISABLED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.insertFromRight<CPMS_DDSR_CORE_SAMPLE_DISABLED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DDSR_CORE_SAMPLE_DISABLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DDSR_CORE_SAMPLE_DISABLED]

//>> SET_[CPMS_DDSR_CORE_SAMPLE_DISABLED]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DDSR_CORE_SAMPLE_DISABLED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.insertFromRight<CPMS_DDSR_CORE_SAMPLE_DISABLED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DDSR_CORE_SAMPLE_DISABLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DDSR_CORE_SAMPLE_DISABLED]

//>> SET_[CPMS_DDSR_CORE_SAMPLE_DISABLED]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DDSR_CORE_SAMPLE_DISABLED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.setBit<CPMS_DDSR_CORE_SAMPLE_DISABLED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_DDSR_CORE_SAMPLE_DISABLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DDSR_CORE_SAMPLE_DISABLED]

//>> CLEAR_[CPMS_DDSR_CORE_SAMPLE_DISABLED]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DDSR_CORE_SAMPLE_DISABLED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.clearBit<CPMS_DDSR_CORE_SAMPLE_DISABLED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_DDSR_CORE_SAMPLE_DISABLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_DDSR_CORE_SAMPLE_DISABLED]

//>> GET_[CPMS_DDSR_CORE_SAMPLE_DISABLED]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DDSR_CORE_SAMPLE_DISABLED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return i_data.extractToRight<CPMS_DDSR_CORE_SAMPLE_DISABLED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DDSR_CORE_SAMPLE_DISABLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DDSR_CORE_SAMPLE_DISABLED]

//>> GET_[CPMS_DDSR_CORE_SAMPLE_DISABLED]
static inline bool GET_CPMS_DDSR_CORE_SAMPLE_DISABLED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return i_data.getBit<CPMS_DDSR_CORE_SAMPLE_DISABLED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_DDSR_CORE_SAMPLE_DISABLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DDSR_CORE_SAMPLE_DISABLED]

//>> SET_[CPMS_DDSR_STOP_STATE_OCCURRED]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DDSR_STOP_STATE_OCCURRED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.insertFromRight<CPMS_DDSR_STOP_STATE_OCCURRED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DDSR_STOP_STATE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DDSR_STOP_STATE_OCCURRED]

//>> SET_[CPMS_DDSR_STOP_STATE_OCCURRED]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DDSR_STOP_STATE_OCCURRED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.insertFromRight<CPMS_DDSR_STOP_STATE_OCCURRED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DDSR_STOP_STATE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DDSR_STOP_STATE_OCCURRED]

//>> SET_[CPMS_DDSR_STOP_STATE_OCCURRED]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DDSR_STOP_STATE_OCCURRED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.setBit<CPMS_DDSR_STOP_STATE_OCCURRED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_DDSR_STOP_STATE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DDSR_STOP_STATE_OCCURRED]

//>> CLEAR_[CPMS_DDSR_STOP_STATE_OCCURRED]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DDSR_STOP_STATE_OCCURRED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.clearBit<CPMS_DDSR_STOP_STATE_OCCURRED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_DDSR_STOP_STATE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_DDSR_STOP_STATE_OCCURRED]

//>> GET_[CPMS_DDSR_STOP_STATE_OCCURRED]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DDSR_STOP_STATE_OCCURRED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return i_data.extractToRight<CPMS_DDSR_STOP_STATE_OCCURRED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DDSR_STOP_STATE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DDSR_STOP_STATE_OCCURRED]

//>> GET_[CPMS_DDSR_STOP_STATE_OCCURRED]
static inline bool GET_CPMS_DDSR_STOP_STATE_OCCURRED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return i_data.getBit<CPMS_DDSR_STOP_STATE_OCCURRED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_DDSR_STOP_STATE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DDSR_STOP_STATE_OCCURRED]

//>> SET_[CPMS_DDSR_SAMPLE_DISABLE_OCCURRED]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DDSR_SAMPLE_DISABLE_OCCURRED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.insertFromRight<CPMS_DDSR_SAMPLE_DISABLE_OCCURRED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DDSR_SAMPLE_DISABLE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DDSR_SAMPLE_DISABLE_OCCURRED]

//>> SET_[CPMS_DDSR_SAMPLE_DISABLE_OCCURRED]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DDSR_SAMPLE_DISABLE_OCCURRED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.insertFromRight<CPMS_DDSR_SAMPLE_DISABLE_OCCURRED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DDSR_SAMPLE_DISABLE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DDSR_SAMPLE_DISABLE_OCCURRED]

//>> SET_[CPMS_DDSR_SAMPLE_DISABLE_OCCURRED]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DDSR_SAMPLE_DISABLE_OCCURRED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.setBit<CPMS_DDSR_SAMPLE_DISABLE_OCCURRED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_DDSR_SAMPLE_DISABLE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DDSR_SAMPLE_DISABLE_OCCURRED]

//>> CLEAR_[CPMS_DDSR_SAMPLE_DISABLE_OCCURRED]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DDSR_SAMPLE_DISABLE_OCCURRED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.clearBit<CPMS_DDSR_SAMPLE_DISABLE_OCCURRED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_DDSR_SAMPLE_DISABLE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_DDSR_SAMPLE_DISABLE_OCCURRED]

//>> GET_[CPMS_DDSR_SAMPLE_DISABLE_OCCURRED]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DDSR_SAMPLE_DISABLE_OCCURRED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return i_data.extractToRight<CPMS_DDSR_SAMPLE_DISABLE_OCCURRED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DDSR_SAMPLE_DISABLE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DDSR_SAMPLE_DISABLE_OCCURRED]

//>> GET_[CPMS_DDSR_SAMPLE_DISABLE_OCCURRED]
static inline bool GET_CPMS_DDSR_SAMPLE_DISABLE_OCCURRED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return i_data.getBit<CPMS_DDSR_SAMPLE_DISABLE_OCCURRED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_DDSR_SAMPLE_DISABLE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DDSR_SAMPLE_DISABLE_OCCURRED]

//>> PREP_[CPMS_FDIR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_FDIR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_FDIR_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_FDIR_WO_CLEAR]

//>> GET_[CPMS_FDIR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_FDIR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_FDIR_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, CPMS_FDIR_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_FDIR_WO_CLEAR]

//>> PUT_[CPMS_FDIR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_FDIR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_FDIR, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return fapi2::putScom(i_target, CPMS_FDIR_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_FDIR_WO_CLEAR]

//>> PREP_[QME_CDBB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_CDBB(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_CDBB;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_CDBB]

//>> GET_[QME_CDBB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_CDBB(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_CDBB;
#endif
    return fapi2::getScom(i_target, QME_CDBB, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_CDBB]

//>> PUT_[QME_CDBB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_CDBB(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_CDBB));
#endif
    return fapi2::putScom(i_target, QME_CDBB, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_CDBB]


//>> SET_[QME_CDBB_MESSAGE_NUMBER]
static inline fapi2::buffer<uint64_t>& SET_QME_CDBB_MESSAGE_NUMBER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CDBB));
#endif
    return o_data.insertFromRight<QME_CDBB_MESSAGE_NUMBER,
           QME_CDBB_MESSAGE_NUMBER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_CDBB_MESSAGE_NUMBER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CDBB_MESSAGE_NUMBER]

//>> SET_[QME_CDBB_MESSAGE_NUMBER]
static inline fapi2::buffer<uint64_t>& SET_QME_CDBB_MESSAGE_NUMBER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CDBB));
#endif
    return o_data.insertFromRight<QME_CDBB_MESSAGE_NUMBER,
           QME_CDBB_MESSAGE_NUMBER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_CDBB_MESSAGE_NUMBER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_CDBB_MESSAGE_NUMBER]

//>> GET_[QME_CDBB_MESSAGE_NUMBER]
static inline fapi2::buffer<uint64_t>& GET_QME_CDBB_MESSAGE_NUMBER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_CDBB));
#endif
    return i_data.extractToRight<QME_CDBB_MESSAGE_NUMBER,
           QME_CDBB_MESSAGE_NUMBER_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_CDBB_MESSAGE_NUMBER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_CDBB_MESSAGE_NUMBER]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
