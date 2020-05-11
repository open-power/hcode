/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_c/reg00011_unused.H $     */
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

#ifndef __PPE_C_REG00011_H_UNUSED__
#define __PPE_C_REG00011_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_c
{
#endif


//>> PREP_[CPMS_DHDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_DHDR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_DHDR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_DHDR]

//>> GET_[CPMS_DHDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_DHDR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_DHDR;
#endif
    return fapi2::getScom(i_target, CPMS_DHDR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_DHDR]

//>> PUT_[CPMS_DHDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_DHDR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return fapi2::putScom(i_target, CPMS_DHDR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_DHDR]


//>> SET_[CPMS_DHDR_FTC_EVENT_HISTORY0]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_FTC_EVENT_HISTORY0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_FTC_EVENT_HISTORY0,
           CPMS_DHDR_FTC_EVENT_HISTORY0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DHDR_FTC_EVENT_HISTORY0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_FTC_EVENT_HISTORY0]

//>> SET_[CPMS_DHDR_FTC_EVENT_HISTORY0]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_FTC_EVENT_HISTORY0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_FTC_EVENT_HISTORY0,
           CPMS_DHDR_FTC_EVENT_HISTORY0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DHDR_FTC_EVENT_HISTORY0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_FTC_EVENT_HISTORY0]

//>> GET_[CPMS_DHDR_FTC_EVENT_HISTORY0]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DHDR_FTC_EVENT_HISTORY0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return i_data.extractToRight<CPMS_DHDR_FTC_EVENT_HISTORY0,
           CPMS_DHDR_FTC_EVENT_HISTORY0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DHDR_FTC_EVENT_HISTORY0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DHDR_FTC_EVENT_HISTORY0]

//>> SET_[CPMS_DHDR_FTC_EVENT_HISTORY1]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_FTC_EVENT_HISTORY1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_FTC_EVENT_HISTORY1,
           CPMS_DHDR_FTC_EVENT_HISTORY1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DHDR_FTC_EVENT_HISTORY1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_FTC_EVENT_HISTORY1]

//>> SET_[CPMS_DHDR_FTC_EVENT_HISTORY1]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_FTC_EVENT_HISTORY1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_FTC_EVENT_HISTORY1,
           CPMS_DHDR_FTC_EVENT_HISTORY1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DHDR_FTC_EVENT_HISTORY1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_FTC_EVENT_HISTORY1]

//>> GET_[CPMS_DHDR_FTC_EVENT_HISTORY1]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DHDR_FTC_EVENT_HISTORY1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return i_data.extractToRight<CPMS_DHDR_FTC_EVENT_HISTORY1,
           CPMS_DHDR_FTC_EVENT_HISTORY1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DHDR_FTC_EVENT_HISTORY1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DHDR_FTC_EVENT_HISTORY1]

//>> SET_[CPMS_DHDR_FTC_EVENT_DATA]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_FTC_EVENT_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_FTC_EVENT_DATA,
           CPMS_DHDR_FTC_EVENT_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DHDR_FTC_EVENT_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_FTC_EVENT_DATA]

//>> SET_[CPMS_DHDR_FTC_EVENT_DATA]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_FTC_EVENT_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_FTC_EVENT_DATA,
           CPMS_DHDR_FTC_EVENT_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DHDR_FTC_EVENT_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_FTC_EVENT_DATA]

//>> GET_[CPMS_DHDR_FTC_EVENT_DATA]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DHDR_FTC_EVENT_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return i_data.extractToRight<CPMS_DHDR_FTC_EVENT_DATA,
           CPMS_DHDR_FTC_EVENT_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DHDR_FTC_EVENT_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DHDR_FTC_EVENT_DATA]

//>> SET_[CPMS_DHDR_FTC_RAW_EVENT_HISTORY]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_FTC_RAW_EVENT_HISTORY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_FTC_RAW_EVENT_HISTORY,
           CPMS_DHDR_FTC_RAW_EVENT_HISTORY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DHDR_FTC_RAW_EVENT_HISTORY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_FTC_RAW_EVENT_HISTORY]

//>> SET_[CPMS_DHDR_FTC_RAW_EVENT_HISTORY]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_FTC_RAW_EVENT_HISTORY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_FTC_RAW_EVENT_HISTORY,
           CPMS_DHDR_FTC_RAW_EVENT_HISTORY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DHDR_FTC_RAW_EVENT_HISTORY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_FTC_RAW_EVENT_HISTORY]

//>> GET_[CPMS_DHDR_FTC_RAW_EVENT_HISTORY]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DHDR_FTC_RAW_EVENT_HISTORY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return i_data.extractToRight<CPMS_DHDR_FTC_RAW_EVENT_HISTORY,
           CPMS_DHDR_FTC_RAW_EVENT_HISTORY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DHDR_FTC_RAW_EVENT_HISTORY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DHDR_FTC_RAW_EVENT_HISTORY]

//>> SET_[CPMS_DHDR_ADJ_WARN_EVENT_HISTORY]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_ADJ_WARN_EVENT_HISTORY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_ADJ_WARN_EVENT_HISTORY,
           CPMS_DHDR_ADJ_WARN_EVENT_HISTORY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DHDR_ADJ_WARN_EVENT_HISTORY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_ADJ_WARN_EVENT_HISTORY]

//>> SET_[CPMS_DHDR_ADJ_WARN_EVENT_HISTORY]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_ADJ_WARN_EVENT_HISTORY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_ADJ_WARN_EVENT_HISTORY,
           CPMS_DHDR_ADJ_WARN_EVENT_HISTORY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DHDR_ADJ_WARN_EVENT_HISTORY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_ADJ_WARN_EVENT_HISTORY]

//>> GET_[CPMS_DHDR_ADJ_WARN_EVENT_HISTORY]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DHDR_ADJ_WARN_EVENT_HISTORY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return i_data.extractToRight<CPMS_DHDR_ADJ_WARN_EVENT_HISTORY,
           CPMS_DHDR_ADJ_WARN_EVENT_HISTORY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DHDR_ADJ_WARN_EVENT_HISTORY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DHDR_ADJ_WARN_EVENT_HISTORY]

//>> SET_[CPMS_DHDR_ADJ_WARN_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_ADJ_WARN_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_ADJ_WARN_ACTIVE,
           CPMS_DHDR_ADJ_WARN_ACTIVE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DHDR_ADJ_WARN_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_ADJ_WARN_ACTIVE]

//>> SET_[CPMS_DHDR_ADJ_WARN_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_ADJ_WARN_ACTIVE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_ADJ_WARN_ACTIVE,
           CPMS_DHDR_ADJ_WARN_ACTIVE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DHDR_ADJ_WARN_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_ADJ_WARN_ACTIVE]

//>> GET_[CPMS_DHDR_ADJ_WARN_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DHDR_ADJ_WARN_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return i_data.extractToRight<CPMS_DHDR_ADJ_WARN_ACTIVE,
           CPMS_DHDR_ADJ_WARN_ACTIVE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DHDR_ADJ_WARN_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DHDR_ADJ_WARN_ACTIVE]

//>> SET_[CPMS_DHDR_CPMS_DDSR_DPLL_ENCODED_DATA]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_CPMS_DDSR_DPLL_ENCODED_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_CPMS_DDSR_DPLL_ENCODED_DATA,
           CPMS_DHDR_CPMS_DDSR_DPLL_ENCODED_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DHDR_CPMS_DDSR_DPLL_ENCODED_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_CPMS_DDSR_DPLL_ENCODED_DATA]

//>> SET_[CPMS_DHDR_CPMS_DDSR_DPLL_ENCODED_DATA]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_CPMS_DDSR_DPLL_ENCODED_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_CPMS_DDSR_DPLL_ENCODED_DATA,
           CPMS_DHDR_CPMS_DDSR_DPLL_ENCODED_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DHDR_CPMS_DDSR_DPLL_ENCODED_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_CPMS_DDSR_DPLL_ENCODED_DATA]

//>> GET_[CPMS_DHDR_CPMS_DDSR_DPLL_ENCODED_DATA]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DHDR_CPMS_DDSR_DPLL_ENCODED_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return i_data.extractToRight<CPMS_DHDR_CPMS_DDSR_DPLL_ENCODED_DATA,
           CPMS_DHDR_CPMS_DDSR_DPLL_ENCODED_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DHDR_CPMS_DDSR_DPLL_ENCODED_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DHDR_CPMS_DDSR_DPLL_ENCODED_DATA]

//>> SET_[CPMS_DHDR_CPMS_DDSR_DDS_DATA]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_CPMS_DDSR_DDS_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_CPMS_DDSR_DDS_DATA,
           CPMS_DHDR_CPMS_DDSR_DDS_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DHDR_CPMS_DDSR_DDS_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_CPMS_DDSR_DDS_DATA]

//>> SET_[CPMS_DHDR_CPMS_DDSR_DDS_DATA]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_CPMS_DDSR_DDS_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_CPMS_DDSR_DDS_DATA,
           CPMS_DHDR_CPMS_DDSR_DDS_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DHDR_CPMS_DDSR_DDS_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_CPMS_DDSR_DDS_DATA]

//>> GET_[CPMS_DHDR_CPMS_DDSR_DDS_DATA]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DHDR_CPMS_DDSR_DDS_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return i_data.extractToRight<CPMS_DHDR_CPMS_DDSR_DDS_DATA,
           CPMS_DHDR_CPMS_DDSR_DDS_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DHDR_CPMS_DDSR_DDS_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DHDR_CPMS_DDSR_DDS_DATA]

//>> SET_[CPMS_DHDR_DPLL_ENCODED_MIN]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_DPLL_ENCODED_MIN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_DPLL_ENCODED_MIN,
           CPMS_DHDR_DPLL_ENCODED_MIN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DHDR_DPLL_ENCODED_MIN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_DPLL_ENCODED_MIN]

//>> SET_[CPMS_DHDR_DPLL_ENCODED_MIN]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_DPLL_ENCODED_MIN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_DPLL_ENCODED_MIN,
           CPMS_DHDR_DPLL_ENCODED_MIN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DHDR_DPLL_ENCODED_MIN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_DPLL_ENCODED_MIN]

//>> GET_[CPMS_DHDR_DPLL_ENCODED_MIN]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DHDR_DPLL_ENCODED_MIN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return i_data.extractToRight<CPMS_DHDR_DPLL_ENCODED_MIN,
           CPMS_DHDR_DPLL_ENCODED_MIN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DHDR_DPLL_ENCODED_MIN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DHDR_DPLL_ENCODED_MIN]

//>> SET_[CPMS_DHDR_MIN_DATA]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_MIN_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_MIN_DATA,
           CPMS_DHDR_MIN_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DHDR_MIN_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_MIN_DATA]

//>> SET_[CPMS_DHDR_MIN_DATA]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_MIN_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_MIN_DATA,
           CPMS_DHDR_MIN_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DHDR_MIN_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_MIN_DATA]

//>> GET_[CPMS_DHDR_MIN_DATA]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DHDR_MIN_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return i_data.extractToRight<CPMS_DHDR_MIN_DATA,
           CPMS_DHDR_MIN_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DHDR_MIN_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DHDR_MIN_DATA]

//>> SET_[CPMS_DHDR_DPLL_ENCODED_MAX]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_DPLL_ENCODED_MAX(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_DPLL_ENCODED_MAX,
           CPMS_DHDR_DPLL_ENCODED_MAX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DHDR_DPLL_ENCODED_MAX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_DPLL_ENCODED_MAX]

//>> SET_[CPMS_DHDR_DPLL_ENCODED_MAX]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_DPLL_ENCODED_MAX(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_DPLL_ENCODED_MAX,
           CPMS_DHDR_DPLL_ENCODED_MAX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DHDR_DPLL_ENCODED_MAX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_DPLL_ENCODED_MAX]

//>> GET_[CPMS_DHDR_DPLL_ENCODED_MAX]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DHDR_DPLL_ENCODED_MAX(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return i_data.extractToRight<CPMS_DHDR_DPLL_ENCODED_MAX,
           CPMS_DHDR_DPLL_ENCODED_MAX_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DHDR_DPLL_ENCODED_MAX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DHDR_DPLL_ENCODED_MAX]

//>> SET_[CPMS_DHDR_MAX_DATA]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_MAX_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_MAX_DATA,
           CPMS_DHDR_MAX_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DHDR_MAX_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_MAX_DATA]

//>> SET_[CPMS_DHDR_MAX_DATA]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_MAX_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_MAX_DATA,
           CPMS_DHDR_MAX_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DHDR_MAX_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_MAX_DATA]

//>> GET_[CPMS_DHDR_MAX_DATA]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DHDR_MAX_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return i_data.extractToRight<CPMS_DHDR_MAX_DATA,
           CPMS_DHDR_MAX_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DHDR_MAX_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DHDR_MAX_DATA]

//>> SET_[CPMS_DHDR_DDP_EVENT_HISTORY]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_DDP_EVENT_HISTORY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_DDP_EVENT_HISTORY,
           CPMS_DHDR_DDP_EVENT_HISTORY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DHDR_DDP_EVENT_HISTORY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_DDP_EVENT_HISTORY]

//>> SET_[CPMS_DHDR_DDP_EVENT_HISTORY]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_DDP_EVENT_HISTORY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_DDP_EVENT_HISTORY,
           CPMS_DHDR_DDP_EVENT_HISTORY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DHDR_DDP_EVENT_HISTORY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_DDP_EVENT_HISTORY]

//>> GET_[CPMS_DHDR_DDP_EVENT_HISTORY]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DHDR_DDP_EVENT_HISTORY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return i_data.extractToRight<CPMS_DHDR_DDP_EVENT_HISTORY,
           CPMS_DHDR_DDP_EVENT_HISTORY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DHDR_DDP_EVENT_HISTORY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DHDR_DDP_EVENT_HISTORY]

//>> SET_[CPMS_DHDR_DDP_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_DDP_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_DDP_ACTIVE,
           CPMS_DHDR_DDP_ACTIVE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DHDR_DDP_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_DDP_ACTIVE]

//>> SET_[CPMS_DHDR_DDP_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_DDP_ACTIVE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_DDP_ACTIVE,
           CPMS_DHDR_DDP_ACTIVE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DHDR_DDP_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_DDP_ACTIVE]

//>> GET_[CPMS_DHDR_DDP_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DHDR_DDP_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return i_data.extractToRight<CPMS_DHDR_DDP_ACTIVE,
           CPMS_DHDR_DDP_ACTIVE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DHDR_DDP_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DHDR_DDP_ACTIVE]

//>> SET_[CPMS_DHDR_CPMS_DDSR_STOP_STATE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_CPMS_DDSR_STOP_STATE_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_CPMS_DDSR_STOP_STATE_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DHDR_CPMS_DDSR_STOP_STATE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_CPMS_DDSR_STOP_STATE_ACTIVE]

//>> SET_[CPMS_DHDR_CPMS_DDSR_STOP_STATE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_CPMS_DDSR_STOP_STATE_ACTIVE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_CPMS_DDSR_STOP_STATE_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DHDR_CPMS_DDSR_STOP_STATE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_CPMS_DDSR_STOP_STATE_ACTIVE]

//>> SET_[CPMS_DHDR_CPMS_DDSR_STOP_STATE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_CPMS_DDSR_STOP_STATE_ACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.setBit<CPMS_DHDR_CPMS_DDSR_STOP_STATE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_DHDR_CPMS_DDSR_STOP_STATE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_CPMS_DDSR_STOP_STATE_ACTIVE]

//>> CLEAR_[CPMS_DHDR_CPMS_DDSR_STOP_STATE_ACTIVE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DHDR_CPMS_DDSR_STOP_STATE_ACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.clearBit<CPMS_DHDR_CPMS_DDSR_STOP_STATE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_DHDR_CPMS_DDSR_STOP_STATE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_DHDR_CPMS_DDSR_STOP_STATE_ACTIVE]

//>> GET_[CPMS_DHDR_CPMS_DDSR_STOP_STATE_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DHDR_CPMS_DDSR_STOP_STATE_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return i_data.extractToRight<CPMS_DHDR_CPMS_DDSR_STOP_STATE_ACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DHDR_CPMS_DDSR_STOP_STATE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DHDR_CPMS_DDSR_STOP_STATE_ACTIVE]

//>> GET_[CPMS_DHDR_CPMS_DDSR_STOP_STATE_ACTIVE]
static inline bool GET_CPMS_DHDR_CPMS_DDSR_STOP_STATE_ACTIVE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return i_data.getBit<CPMS_DHDR_CPMS_DDSR_STOP_STATE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_DHDR_CPMS_DDSR_STOP_STATE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DHDR_CPMS_DDSR_STOP_STATE_ACTIVE]

//>> SET_[CPMS_DHDR_CPMS_DDSR_CORE_SAMPLE_DISABLED]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_CPMS_DDSR_CORE_SAMPLE_DISABLED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_CPMS_DDSR_CORE_SAMPLE_DISABLED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DHDR_CPMS_DDSR_CORE_SAMPLE_DISABLED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_CPMS_DDSR_CORE_SAMPLE_DISABLED]

//>> SET_[CPMS_DHDR_CPMS_DDSR_CORE_SAMPLE_DISABLED]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_CPMS_DDSR_CORE_SAMPLE_DISABLED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_CPMS_DDSR_CORE_SAMPLE_DISABLED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DHDR_CPMS_DDSR_CORE_SAMPLE_DISABLED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_CPMS_DDSR_CORE_SAMPLE_DISABLED]

//>> SET_[CPMS_DHDR_CPMS_DDSR_CORE_SAMPLE_DISABLED]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_CPMS_DDSR_CORE_SAMPLE_DISABLED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.setBit<CPMS_DHDR_CPMS_DDSR_CORE_SAMPLE_DISABLED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_DHDR_CPMS_DDSR_CORE_SAMPLE_DISABLED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_CPMS_DDSR_CORE_SAMPLE_DISABLED]

//>> CLEAR_[CPMS_DHDR_CPMS_DDSR_CORE_SAMPLE_DISABLED]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DHDR_CPMS_DDSR_CORE_SAMPLE_DISABLED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.clearBit<CPMS_DHDR_CPMS_DDSR_CORE_SAMPLE_DISABLED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_DHDR_CPMS_DDSR_CORE_SAMPLE_DISABLED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_DHDR_CPMS_DDSR_CORE_SAMPLE_DISABLED]

//>> GET_[CPMS_DHDR_CPMS_DDSR_CORE_SAMPLE_DISABLED]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DHDR_CPMS_DDSR_CORE_SAMPLE_DISABLED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return i_data.extractToRight<CPMS_DHDR_CPMS_DDSR_CORE_SAMPLE_DISABLED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DHDR_CPMS_DDSR_CORE_SAMPLE_DISABLED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DHDR_CPMS_DDSR_CORE_SAMPLE_DISABLED]

//>> GET_[CPMS_DHDR_CPMS_DDSR_CORE_SAMPLE_DISABLED]
static inline bool GET_CPMS_DHDR_CPMS_DDSR_CORE_SAMPLE_DISABLED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return i_data.getBit<CPMS_DHDR_CPMS_DDSR_CORE_SAMPLE_DISABLED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_DHDR_CPMS_DDSR_CORE_SAMPLE_DISABLED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DHDR_CPMS_DDSR_CORE_SAMPLE_DISABLED]

//>> SET_[CPMS_DHDR_STOP_STATE_OCCURRED]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_STOP_STATE_OCCURRED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_STOP_STATE_OCCURRED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DHDR_STOP_STATE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_STOP_STATE_OCCURRED]

//>> SET_[CPMS_DHDR_STOP_STATE_OCCURRED]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_STOP_STATE_OCCURRED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_STOP_STATE_OCCURRED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DHDR_STOP_STATE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_STOP_STATE_OCCURRED]

//>> SET_[CPMS_DHDR_STOP_STATE_OCCURRED]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_STOP_STATE_OCCURRED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.setBit<CPMS_DHDR_STOP_STATE_OCCURRED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_DHDR_STOP_STATE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_STOP_STATE_OCCURRED]

//>> CLEAR_[CPMS_DHDR_STOP_STATE_OCCURRED]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DHDR_STOP_STATE_OCCURRED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.clearBit<CPMS_DHDR_STOP_STATE_OCCURRED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_DHDR_STOP_STATE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_DHDR_STOP_STATE_OCCURRED]

//>> GET_[CPMS_DHDR_STOP_STATE_OCCURRED]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DHDR_STOP_STATE_OCCURRED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return i_data.extractToRight<CPMS_DHDR_STOP_STATE_OCCURRED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DHDR_STOP_STATE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DHDR_STOP_STATE_OCCURRED]

//>> GET_[CPMS_DHDR_STOP_STATE_OCCURRED]
static inline bool GET_CPMS_DHDR_STOP_STATE_OCCURRED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return i_data.getBit<CPMS_DHDR_STOP_STATE_OCCURRED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_DHDR_STOP_STATE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DHDR_STOP_STATE_OCCURRED]

//>> SET_[CPMS_DHDR_SAMPLE_DISABLE_OCCURRED]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_SAMPLE_DISABLE_OCCURRED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_SAMPLE_DISABLE_OCCURRED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DHDR_SAMPLE_DISABLE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_SAMPLE_DISABLE_OCCURRED]

//>> SET_[CPMS_DHDR_SAMPLE_DISABLE_OCCURRED]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_SAMPLE_DISABLE_OCCURRED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.insertFromRight<CPMS_DHDR_SAMPLE_DISABLE_OCCURRED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DHDR_SAMPLE_DISABLE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_SAMPLE_DISABLE_OCCURRED]

//>> SET_[CPMS_DHDR_SAMPLE_DISABLE_OCCURRED]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DHDR_SAMPLE_DISABLE_OCCURRED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.setBit<CPMS_DHDR_SAMPLE_DISABLE_OCCURRED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_DHDR_SAMPLE_DISABLE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DHDR_SAMPLE_DISABLE_OCCURRED]

//>> CLEAR_[CPMS_DHDR_SAMPLE_DISABLE_OCCURRED]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DHDR_SAMPLE_DISABLE_OCCURRED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return o_data.clearBit<CPMS_DHDR_SAMPLE_DISABLE_OCCURRED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_DHDR_SAMPLE_DISABLE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_DHDR_SAMPLE_DISABLE_OCCURRED]

//>> GET_[CPMS_DHDR_SAMPLE_DISABLE_OCCURRED]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DHDR_SAMPLE_DISABLE_OCCURRED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return i_data.extractToRight<CPMS_DHDR_SAMPLE_DISABLE_OCCURRED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DHDR_SAMPLE_DISABLE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DHDR_SAMPLE_DISABLE_OCCURRED]

//>> GET_[CPMS_DHDR_SAMPLE_DISABLE_OCCURRED]
static inline bool GET_CPMS_DHDR_SAMPLE_DISABLE_OCCURRED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHDR));
#endif
    return i_data.getBit<CPMS_DHDR_SAMPLE_DISABLE_OCCURRED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_DHDR_SAMPLE_DISABLE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DHDR_SAMPLE_DISABLE_OCCURRED]

//>> PREP_[CPMS_WPMR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_WPMR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_WPMR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_WPMR]

//>> GET_[CPMS_WPMR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_WPMR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_WPMR;
#endif
    return fapi2::getScom(i_target, CPMS_WPMR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_WPMR]

//>> PUT_[CPMS_WPMR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_WPMR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return fapi2::putScom(i_target, CPMS_WPMR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_WPMR]

//>> PREP_[CPMS_WPMR_PPE2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_WPMR_PPE2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_WPMR_PPE2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_WPMR_PPE2]

//>> GET_[CPMS_WPMR_PPE2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_WPMR_PPE2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_WPMR_PPE2;
#endif
    return fapi2::getScom(i_target, CPMS_WPMR_PPE2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_WPMR_PPE2]

//>> PUT_[CPMS_WPMR_PPE2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_WPMR_PPE2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return fapi2::putScom(i_target, CPMS_WPMR_PPE2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_WPMR_PPE2]

//>> PREP_[CPMS_WPMR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_WPMR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_WPMR_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_WPMR_WO_CLEAR]

//>> GET_[CPMS_WPMR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_WPMR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_WPMR_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, CPMS_WPMR_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_WPMR_WO_CLEAR]

//>> PUT_[CPMS_WPMR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_WPMR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return fapi2::putScom(i_target, CPMS_WPMR_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_WPMR_WO_CLEAR]


//>> SET_[CPMS_WPMR_PITCH_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_WPMR_PITCH_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return o_data.insertFromRight<CPMS_WPMR_PITCH_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_WPMR_PITCH_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_WPMR_PITCH_ENABLE]

//>> SET_[CPMS_WPMR_PITCH_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_WPMR_PITCH_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return o_data.insertFromRight<CPMS_WPMR_PITCH_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_WPMR_PITCH_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_WPMR_PITCH_ENABLE]

//>> SET_[CPMS_WPMR_PITCH_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_WPMR_PITCH_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return o_data.setBit<CPMS_WPMR_PITCH_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_WPMR_PITCH_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_WPMR_PITCH_ENABLE]

//>> CLEAR_[CPMS_WPMR_PITCH_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_WPMR_PITCH_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return o_data.clearBit<CPMS_WPMR_PITCH_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_WPMR_PITCH_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_WPMR_PITCH_ENABLE]

//>> GET_[CPMS_WPMR_PITCH_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_WPMR_PITCH_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return i_data.extractToRight<CPMS_WPMR_PITCH_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_WPMR_PITCH_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_WPMR_PITCH_ENABLE]

//>> GET_[CPMS_WPMR_PITCH_ENABLE]
static inline bool GET_CPMS_WPMR_PITCH_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return i_data.getBit<CPMS_WPMR_PITCH_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_WPMR_PITCH_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_WPMR_PITCH_ENABLE]

//>> SET_[CPMS_WPMR_RESET_ACTIVITY_ON_SAMPLE_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_WPMR_RESET_ACTIVITY_ON_SAMPLE_DISABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return o_data.insertFromRight<CPMS_WPMR_RESET_ACTIVITY_ON_SAMPLE_DISABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_WPMR_RESET_ACTIVITY_ON_SAMPLE_DISABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_WPMR_RESET_ACTIVITY_ON_SAMPLE_DISABLE]

//>> SET_[CPMS_WPMR_RESET_ACTIVITY_ON_SAMPLE_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_WPMR_RESET_ACTIVITY_ON_SAMPLE_DISABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return o_data.insertFromRight<CPMS_WPMR_RESET_ACTIVITY_ON_SAMPLE_DISABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_WPMR_RESET_ACTIVITY_ON_SAMPLE_DISABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_WPMR_RESET_ACTIVITY_ON_SAMPLE_DISABLE]

//>> SET_[CPMS_WPMR_RESET_ACTIVITY_ON_SAMPLE_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_WPMR_RESET_ACTIVITY_ON_SAMPLE_DISABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return o_data.setBit<CPMS_WPMR_RESET_ACTIVITY_ON_SAMPLE_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_WPMR_RESET_ACTIVITY_ON_SAMPLE_DISABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_WPMR_RESET_ACTIVITY_ON_SAMPLE_DISABLE]

//>> CLEAR_[CPMS_WPMR_RESET_ACTIVITY_ON_SAMPLE_DISABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_WPMR_RESET_ACTIVITY_ON_SAMPLE_DISABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return o_data.clearBit<CPMS_WPMR_RESET_ACTIVITY_ON_SAMPLE_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_WPMR_RESET_ACTIVITY_ON_SAMPLE_DISABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_WPMR_RESET_ACTIVITY_ON_SAMPLE_DISABLE]

//>> GET_[CPMS_WPMR_RESET_ACTIVITY_ON_SAMPLE_DISABLE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_WPMR_RESET_ACTIVITY_ON_SAMPLE_DISABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return i_data.extractToRight<CPMS_WPMR_RESET_ACTIVITY_ON_SAMPLE_DISABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_WPMR_RESET_ACTIVITY_ON_SAMPLE_DISABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_WPMR_RESET_ACTIVITY_ON_SAMPLE_DISABLE]

//>> GET_[CPMS_WPMR_RESET_ACTIVITY_ON_SAMPLE_DISABLE]
static inline bool GET_CPMS_WPMR_RESET_ACTIVITY_ON_SAMPLE_DISABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return i_data.getBit<CPMS_WPMR_RESET_ACTIVITY_ON_SAMPLE_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_WPMR_RESET_ACTIVITY_ON_SAMPLE_DISABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_WPMR_RESET_ACTIVITY_ON_SAMPLE_DISABLE]

//>> SET_[CPMS_WPMR_RESET_ENERGY_ON_SAMPLE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_WPMR_RESET_ENERGY_ON_SAMPLE_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return o_data.insertFromRight<CPMS_WPMR_RESET_ENERGY_ON_SAMPLE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_WPMR_RESET_ENERGY_ON_SAMPLE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_WPMR_RESET_ENERGY_ON_SAMPLE_ENABLE]

//>> SET_[CPMS_WPMR_RESET_ENERGY_ON_SAMPLE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_WPMR_RESET_ENERGY_ON_SAMPLE_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return o_data.insertFromRight<CPMS_WPMR_RESET_ENERGY_ON_SAMPLE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_WPMR_RESET_ENERGY_ON_SAMPLE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_WPMR_RESET_ENERGY_ON_SAMPLE_ENABLE]

//>> SET_[CPMS_WPMR_RESET_ENERGY_ON_SAMPLE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_WPMR_RESET_ENERGY_ON_SAMPLE_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return o_data.setBit<CPMS_WPMR_RESET_ENERGY_ON_SAMPLE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_WPMR_RESET_ENERGY_ON_SAMPLE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_WPMR_RESET_ENERGY_ON_SAMPLE_ENABLE]

//>> CLEAR_[CPMS_WPMR_RESET_ENERGY_ON_SAMPLE_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_WPMR_RESET_ENERGY_ON_SAMPLE_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return o_data.clearBit<CPMS_WPMR_RESET_ENERGY_ON_SAMPLE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_WPMR_RESET_ENERGY_ON_SAMPLE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_WPMR_RESET_ENERGY_ON_SAMPLE_ENABLE]

//>> GET_[CPMS_WPMR_RESET_ENERGY_ON_SAMPLE_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_WPMR_RESET_ENERGY_ON_SAMPLE_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return i_data.extractToRight<CPMS_WPMR_RESET_ENERGY_ON_SAMPLE_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_WPMR_RESET_ENERGY_ON_SAMPLE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_WPMR_RESET_ENERGY_ON_SAMPLE_ENABLE]

//>> GET_[CPMS_WPMR_RESET_ENERGY_ON_SAMPLE_ENABLE]
static inline bool GET_CPMS_WPMR_RESET_ENERGY_ON_SAMPLE_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return i_data.getBit<CPMS_WPMR_RESET_ENERGY_ON_SAMPLE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_WPMR_RESET_ENERGY_ON_SAMPLE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_WPMR_RESET_ENERGY_ON_SAMPLE_ENABLE]

//>> SET_[CPMS_WPMR_PITCH_INTERRUPT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_WPMR_PITCH_INTERRUPT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return o_data.insertFromRight<CPMS_WPMR_PITCH_INTERRUPT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_WPMR_PITCH_INTERRUPT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_WPMR_PITCH_INTERRUPT_ENABLE]

//>> SET_[CPMS_WPMR_PITCH_INTERRUPT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_WPMR_PITCH_INTERRUPT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return o_data.insertFromRight<CPMS_WPMR_PITCH_INTERRUPT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_WPMR_PITCH_INTERRUPT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_WPMR_PITCH_INTERRUPT_ENABLE]

//>> SET_[CPMS_WPMR_PITCH_INTERRUPT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_WPMR_PITCH_INTERRUPT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return o_data.setBit<CPMS_WPMR_PITCH_INTERRUPT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_WPMR_PITCH_INTERRUPT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_WPMR_PITCH_INTERRUPT_ENABLE]

//>> CLEAR_[CPMS_WPMR_PITCH_INTERRUPT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_WPMR_PITCH_INTERRUPT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return o_data.clearBit<CPMS_WPMR_PITCH_INTERRUPT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_WPMR_PITCH_INTERRUPT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_WPMR_PITCH_INTERRUPT_ENABLE]

//>> GET_[CPMS_WPMR_PITCH_INTERRUPT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_WPMR_PITCH_INTERRUPT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return i_data.extractToRight<CPMS_WPMR_PITCH_INTERRUPT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_WPMR_PITCH_INTERRUPT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_WPMR_PITCH_INTERRUPT_ENABLE]

//>> GET_[CPMS_WPMR_PITCH_INTERRUPT_ENABLE]
static inline bool GET_CPMS_WPMR_PITCH_INTERRUPT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return i_data.getBit<CPMS_WPMR_PITCH_INTERRUPT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_WPMR_PITCH_INTERRUPT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_WPMR_PITCH_INTERRUPT_ENABLE]

//>> SET_[CPMS_WPMR_SPARE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_WPMR_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return o_data.insertFromRight<CPMS_WPMR_SPARE,
           CPMS_WPMR_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_WPMR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_WPMR_SPARE]

//>> SET_[CPMS_WPMR_SPARE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_WPMR_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return o_data.insertFromRight<CPMS_WPMR_SPARE,
           CPMS_WPMR_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_WPMR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_WPMR_SPARE]

//>> GET_[CPMS_WPMR_SPARE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_WPMR_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return i_data.extractToRight<CPMS_WPMR_SPARE,
           CPMS_WPMR_SPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_WPMR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_WPMR_SPARE]

//>> SET_[CPMS_WPMR_PITCH_PERIOD_TIME]
static inline fapi2::buffer<uint64_t>& SET_CPMS_WPMR_PITCH_PERIOD_TIME(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return o_data.insertFromRight<CPMS_WPMR_PITCH_PERIOD_TIME,
           CPMS_WPMR_PITCH_PERIOD_TIME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_WPMR_PITCH_PERIOD_TIME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_WPMR_PITCH_PERIOD_TIME]

//>> SET_[CPMS_WPMR_PITCH_PERIOD_TIME]
static inline fapi2::buffer<uint64_t>& SET_CPMS_WPMR_PITCH_PERIOD_TIME(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return o_data.insertFromRight<CPMS_WPMR_PITCH_PERIOD_TIME,
           CPMS_WPMR_PITCH_PERIOD_TIME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_WPMR_PITCH_PERIOD_TIME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_WPMR_PITCH_PERIOD_TIME]

//>> GET_[CPMS_WPMR_PITCH_PERIOD_TIME]
static inline fapi2::buffer<uint64_t>& GET_CPMS_WPMR_PITCH_PERIOD_TIME(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return i_data.extractToRight<CPMS_WPMR_PITCH_PERIOD_TIME,
           CPMS_WPMR_PITCH_PERIOD_TIME_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_WPMR_PITCH_PERIOD_TIME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_WPMR_PITCH_PERIOD_TIME]

//>> SET_[CPMS_WPMR_RESET_ACTIVITY_PROXY]
static inline fapi2::buffer<uint64_t>& SET_CPMS_WPMR_RESET_ACTIVITY_PROXY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return o_data.insertFromRight<CPMS_WPMR_RESET_ACTIVITY_PROXY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_WPMR_RESET_ACTIVITY_PROXY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_WPMR_RESET_ACTIVITY_PROXY]

//>> SET_[CPMS_WPMR_RESET_ACTIVITY_PROXY]
static inline fapi2::buffer<uint64_t>& SET_CPMS_WPMR_RESET_ACTIVITY_PROXY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return o_data.insertFromRight<CPMS_WPMR_RESET_ACTIVITY_PROXY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_WPMR_RESET_ACTIVITY_PROXY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_WPMR_RESET_ACTIVITY_PROXY]

//>> SET_[CPMS_WPMR_RESET_ACTIVITY_PROXY]
static inline fapi2::buffer<uint64_t>& SET_CPMS_WPMR_RESET_ACTIVITY_PROXY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return o_data.setBit<CPMS_WPMR_RESET_ACTIVITY_PROXY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_WPMR_RESET_ACTIVITY_PROXY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_WPMR_RESET_ACTIVITY_PROXY]

//>> CLEAR_[CPMS_WPMR_RESET_ACTIVITY_PROXY]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_WPMR_RESET_ACTIVITY_PROXY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return o_data.clearBit<CPMS_WPMR_RESET_ACTIVITY_PROXY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_WPMR_RESET_ACTIVITY_PROXY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_WPMR_RESET_ACTIVITY_PROXY]

//>> GET_[CPMS_WPMR_RESET_ACTIVITY_PROXY]
static inline fapi2::buffer<uint64_t>& GET_CPMS_WPMR_RESET_ACTIVITY_PROXY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return i_data.extractToRight<CPMS_WPMR_RESET_ACTIVITY_PROXY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_WPMR_RESET_ACTIVITY_PROXY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_WPMR_RESET_ACTIVITY_PROXY]

//>> GET_[CPMS_WPMR_RESET_ACTIVITY_PROXY]
static inline bool GET_CPMS_WPMR_RESET_ACTIVITY_PROXY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return i_data.getBit<CPMS_WPMR_RESET_ACTIVITY_PROXY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_WPMR_RESET_ACTIVITY_PROXY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_WPMR_RESET_ACTIVITY_PROXY]

//>> SET_[CPMS_WPMR_RESET_ENERGY_PROXY]
static inline fapi2::buffer<uint64_t>& SET_CPMS_WPMR_RESET_ENERGY_PROXY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return o_data.insertFromRight<CPMS_WPMR_RESET_ENERGY_PROXY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_WPMR_RESET_ENERGY_PROXY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_WPMR_RESET_ENERGY_PROXY]

//>> SET_[CPMS_WPMR_RESET_ENERGY_PROXY]
static inline fapi2::buffer<uint64_t>& SET_CPMS_WPMR_RESET_ENERGY_PROXY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return o_data.insertFromRight<CPMS_WPMR_RESET_ENERGY_PROXY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_WPMR_RESET_ENERGY_PROXY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_WPMR_RESET_ENERGY_PROXY]

//>> SET_[CPMS_WPMR_RESET_ENERGY_PROXY]
static inline fapi2::buffer<uint64_t>& SET_CPMS_WPMR_RESET_ENERGY_PROXY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return o_data.setBit<CPMS_WPMR_RESET_ENERGY_PROXY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_WPMR_RESET_ENERGY_PROXY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_WPMR_RESET_ENERGY_PROXY]

//>> CLEAR_[CPMS_WPMR_RESET_ENERGY_PROXY]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_WPMR_RESET_ENERGY_PROXY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return o_data.clearBit<CPMS_WPMR_RESET_ENERGY_PROXY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_WPMR_RESET_ENERGY_PROXY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_WPMR_RESET_ENERGY_PROXY]

//>> GET_[CPMS_WPMR_RESET_ENERGY_PROXY]
static inline fapi2::buffer<uint64_t>& GET_CPMS_WPMR_RESET_ENERGY_PROXY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return i_data.extractToRight<CPMS_WPMR_RESET_ENERGY_PROXY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_WPMR_RESET_ENERGY_PROXY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_WPMR_RESET_ENERGY_PROXY]

//>> GET_[CPMS_WPMR_RESET_ENERGY_PROXY]
static inline bool GET_CPMS_WPMR_RESET_ENERGY_PROXY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_WPMR, CPMS_WPMR_PPE2, CPMS_WPMR_WO_CLEAR));
#endif
    return i_data.getBit<CPMS_WPMR_RESET_ENERGY_PROXY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_WPMR_RESET_ENERGY_PROXY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_WPMR_RESET_ENERGY_PROXY]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
