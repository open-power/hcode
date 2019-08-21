/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_c/reg00009.H $            */
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

#ifndef __PPE_C_REG00009_H_
#define __PPE_C_REG00009_H_

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_c
{
#endif


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
    FAPI_ERR("Invalid dial access CPMS_DDSR_DDS_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_DDSR_DDS_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_DDSR_DDS_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_DDSR_DDS_MIN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_DDSR_DDS_MIN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_DDSR_DDS_MIN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_DDSR_DDS_MAX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_DDSR_DDS_MAX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_DDSR_DDS_MAX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_DDSR_DPLL_ENCODED_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_DDSR_DPLL_ENCODED_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_DDSR_DPLL_ENCODED_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_DDSR_DPLL_ENCODED_MIN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_DDSR_DPLL_ENCODED_MIN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_DDSR_DPLL_ENCODED_MIN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_DDSR_DPLL_ENCODED_MAX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_DDSR_DPLL_ENCODED_MAX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_DDSR_DPLL_ENCODED_MAX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_DDSR_STOP_STATE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_DDSR_STOP_STATE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_DDSR_STOP_STATE_ACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.setBit<CPMS_DDSR_STOP_STATE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DDSR_STOP_STATE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DDSR_STOP_STATE_ACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.clearBit<CPMS_DDSR_STOP_STATE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DDSR_STOP_STATE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_DDSR_STOP_STATE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_CPMS_DDSR_STOP_STATE_ACTIVE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return i_data.getBit<CPMS_DDSR_STOP_STATE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DDSR_STOP_STATE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_DDSR_CORE_SAMPLE_DISABLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_DDSR_CORE_SAMPLE_DISABLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_DDSR_CORE_SAMPLE_DISABLED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.setBit<CPMS_DDSR_CORE_SAMPLE_DISABLED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DDSR_CORE_SAMPLE_DISABLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DDSR_CORE_SAMPLE_DISABLED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.clearBit<CPMS_DDSR_CORE_SAMPLE_DISABLED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DDSR_CORE_SAMPLE_DISABLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_DDSR_CORE_SAMPLE_DISABLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_CPMS_DDSR_CORE_SAMPLE_DISABLED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return i_data.getBit<CPMS_DDSR_CORE_SAMPLE_DISABLED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DDSR_CORE_SAMPLE_DISABLED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_DDSR_STOP_STATE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_DDSR_STOP_STATE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_DDSR_STOP_STATE_OCCURRED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.setBit<CPMS_DDSR_STOP_STATE_OCCURRED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DDSR_STOP_STATE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DDSR_STOP_STATE_OCCURRED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.clearBit<CPMS_DDSR_STOP_STATE_OCCURRED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DDSR_STOP_STATE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_DDSR_STOP_STATE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_CPMS_DDSR_STOP_STATE_OCCURRED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return i_data.getBit<CPMS_DDSR_STOP_STATE_OCCURRED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DDSR_STOP_STATE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_DDSR_SAMPLE_DISABLE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_DDSR_SAMPLE_DISABLE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_DDSR_SAMPLE_DISABLE_OCCURRED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.setBit<CPMS_DDSR_SAMPLE_DISABLE_OCCURRED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DDSR_SAMPLE_DISABLE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DDSR_SAMPLE_DISABLE_OCCURRED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return o_data.clearBit<CPMS_DDSR_SAMPLE_DISABLE_OCCURRED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DDSR_SAMPLE_DISABLE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_DDSR_SAMPLE_DISABLE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_CPMS_DDSR_SAMPLE_DISABLE_OCCURRED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DDSR));
#endif
    return i_data.getBit<CPMS_DDSR_SAMPLE_DISABLE_OCCURRED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DDSR_SAMPLE_DISABLE_OCCURRED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_FDIR_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_FDIR_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}

template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_FDIR_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_FDIR_RW;
#endif
    return fapi2::getScom(i_target, CPMS_FDIR_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}

template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_FDIR_RW(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return fapi2::putScom(i_target, CPMS_FDIR_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}

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

template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_FDIR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return fapi2::putScom(i_target, CPMS_FDIR_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}

template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_FDIR_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_FDIR_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}

template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_FDIR_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_FDIR_WO_OR;
#endif
    return fapi2::getScom(i_target, CPMS_FDIR_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}

template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_FDIR_WO_OR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return fapi2::putScom(i_target, CPMS_FDIR_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}


static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_INJECT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_INJECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_INJECT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_INJECT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_INJECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_INJECT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_INJECT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.setBit<CPMS_FDIR_INJECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_INJECT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_FDIR_INJECT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.clearBit<CPMS_FDIR_INJECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_INJECT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_CPMS_FDIR_INJECT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_FDIR_INJECT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_INJECT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_CPMS_FDIR_INJECT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return i_data.getBit<CPMS_FDIR_INJECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_INJECT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_HALT_INJECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_HALT_INJECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_HALT_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_HALT_INJECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_HALT_INJECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_HALT_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_HALT_INJECT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.setBit<CPMS_FDIR_HALT_INJECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_HALT_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_FDIR_HALT_INJECT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.clearBit<CPMS_FDIR_HALT_INJECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_HALT_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_CPMS_FDIR_HALT_INJECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_FDIR_HALT_INJECT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_HALT_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_CPMS_FDIR_HALT_INJECT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return i_data.getBit<CPMS_FDIR_HALT_INJECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_HALT_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_HALT_TOGGLE_INJECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_HALT_TOGGLE_INJECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_HALT_TOGGLE_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_HALT_TOGGLE_INJECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_HALT_TOGGLE_INJECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_HALT_TOGGLE_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_HALT_TOGGLE_INJECT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.setBit<CPMS_FDIR_HALT_TOGGLE_INJECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_HALT_TOGGLE_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_FDIR_HALT_TOGGLE_INJECT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.clearBit<CPMS_FDIR_HALT_TOGGLE_INJECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_HALT_TOGGLE_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_CPMS_FDIR_HALT_TOGGLE_INJECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_FDIR_HALT_TOGGLE_INJECT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_HALT_TOGGLE_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_CPMS_FDIR_HALT_TOGGLE_INJECT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return i_data.getBit<CPMS_FDIR_HALT_TOGGLE_INJECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_HALT_TOGGLE_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_FETCH_THROTTLE01_INJECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_FETCH_THROTTLE01_INJECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_FETCH_THROTTLE01_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_FETCH_THROTTLE01_INJECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_FETCH_THROTTLE01_INJECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_FETCH_THROTTLE01_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_FETCH_THROTTLE01_INJECT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.setBit<CPMS_FDIR_FETCH_THROTTLE01_INJECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_FETCH_THROTTLE01_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_FDIR_FETCH_THROTTLE01_INJECT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.clearBit<CPMS_FDIR_FETCH_THROTTLE01_INJECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_FETCH_THROTTLE01_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_CPMS_FDIR_FETCH_THROTTLE01_INJECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_FDIR_FETCH_THROTTLE01_INJECT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_FETCH_THROTTLE01_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_CPMS_FDIR_FETCH_THROTTLE01_INJECT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return i_data.getBit<CPMS_FDIR_FETCH_THROTTLE01_INJECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_FETCH_THROTTLE01_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_FETCH_THROTTLE10_INJECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_FETCH_THROTTLE10_INJECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_FETCH_THROTTLE10_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_FETCH_THROTTLE10_INJECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_FETCH_THROTTLE10_INJECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_FETCH_THROTTLE10_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_FETCH_THROTTLE10_INJECT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.setBit<CPMS_FDIR_FETCH_THROTTLE10_INJECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_FETCH_THROTTLE10_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_FDIR_FETCH_THROTTLE10_INJECT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.clearBit<CPMS_FDIR_FETCH_THROTTLE10_INJECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_FETCH_THROTTLE10_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_CPMS_FDIR_FETCH_THROTTLE10_INJECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_FDIR_FETCH_THROTTLE10_INJECT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_FETCH_THROTTLE10_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_CPMS_FDIR_FETCH_THROTTLE10_INJECT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return i_data.getBit<CPMS_FDIR_FETCH_THROTTLE10_INJECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_FETCH_THROTTLE10_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_ISSUE_NTC_INJECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_ISSUE_NTC_INJECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_ISSUE_NTC_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_ISSUE_NTC_INJECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_ISSUE_NTC_INJECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_ISSUE_NTC_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_ISSUE_NTC_INJECT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.setBit<CPMS_FDIR_ISSUE_NTC_INJECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_ISSUE_NTC_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_FDIR_ISSUE_NTC_INJECT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.clearBit<CPMS_FDIR_ISSUE_NTC_INJECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_ISSUE_NTC_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_CPMS_FDIR_ISSUE_NTC_INJECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_FDIR_ISSUE_NTC_INJECT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_ISSUE_NTC_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_CPMS_FDIR_ISSUE_NTC_INJECT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return i_data.getBit<CPMS_FDIR_ISSUE_NTC_INJECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_ISSUE_NTC_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_PREFETCH_THROTTLE_INJECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_PREFETCH_THROTTLE_INJECT,
           CPMS_FDIR_PREFETCH_THROTTLE_INJECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_PREFETCH_THROTTLE_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_PREFETCH_THROTTLE_INJECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_PREFETCH_THROTTLE_INJECT,
           CPMS_FDIR_PREFETCH_THROTTLE_INJECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_PREFETCH_THROTTLE_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_CPMS_FDIR_PREFETCH_THROTTLE_INJECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_FDIR_PREFETCH_THROTTLE_INJECT,
           CPMS_FDIR_PREFETCH_THROTTLE_INJECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_PREFETCH_THROTTLE_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_SLOW_FETCH_INJECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_SLOW_FETCH_INJECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_SLOW_FETCH_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_SLOW_FETCH_INJECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_SLOW_FETCH_INJECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_SLOW_FETCH_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_SLOW_FETCH_INJECT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.setBit<CPMS_FDIR_SLOW_FETCH_INJECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_SLOW_FETCH_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_FDIR_SLOW_FETCH_INJECT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.clearBit<CPMS_FDIR_SLOW_FETCH_INJECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_SLOW_FETCH_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_CPMS_FDIR_SLOW_FETCH_INJECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_FDIR_SLOW_FETCH_INJECT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_SLOW_FETCH_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_CPMS_FDIR_SLOW_FETCH_INJECT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return i_data.getBit<CPMS_FDIR_SLOW_FETCH_INJECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_SLOW_FETCH_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_VECTOR_LIMIT_INJECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_VECTOR_LIMIT_INJECT,
           CPMS_FDIR_VECTOR_LIMIT_INJECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_VECTOR_LIMIT_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_VECTOR_LIMIT_INJECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_VECTOR_LIMIT_INJECT,
           CPMS_FDIR_VECTOR_LIMIT_INJECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_VECTOR_LIMIT_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_CPMS_FDIR_VECTOR_LIMIT_INJECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_FDIR_VECTOR_LIMIT_INJECT,
           CPMS_FDIR_VECTOR_LIMIT_INJECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_VECTOR_LIMIT_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_SLOW_COMPLETION_INJECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_SLOW_COMPLETION_INJECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_SLOW_COMPLETION_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_SLOW_COMPLETION_INJECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_SLOW_COMPLETION_INJECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_SLOW_COMPLETION_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_SLOW_COMPLETION_INJECT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.setBit<CPMS_FDIR_SLOW_COMPLETION_INJECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_SLOW_COMPLETION_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_FDIR_SLOW_COMPLETION_INJECT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.clearBit<CPMS_FDIR_SLOW_COMPLETION_INJECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_SLOW_COMPLETION_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_CPMS_FDIR_SLOW_COMPLETION_INJECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_FDIR_SLOW_COMPLETION_INJECT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_SLOW_COMPLETION_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_CPMS_FDIR_SLOW_COMPLETION_INJECT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return i_data.getBit<CPMS_FDIR_SLOW_COMPLETION_INJECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_SLOW_COMPLETION_INJECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_SPARE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.setBit<CPMS_FDIR_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_FDIR_SPARE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.clearBit<CPMS_FDIR_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_CPMS_FDIR_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_FDIR_SPARE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_CPMS_FDIR_SPARE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return i_data.getBit<CPMS_FDIR_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_MMA_LIMIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_MMA_LIMIT,
           CPMS_FDIR_MMA_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_MMA_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_MMA_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_MMA_LIMIT,
           CPMS_FDIR_MMA_LIMIT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_MMA_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_CPMS_FDIR_MMA_LIMIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_FDIR_MMA_LIMIT,
           CPMS_FDIR_MMA_LIMIT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_MMA_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_TOGGLE_HALT_AMOUNT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_TOGGLE_HALT_AMOUNT,
           CPMS_FDIR_TOGGLE_HALT_AMOUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_TOGGLE_HALT_AMOUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_TOGGLE_HALT_AMOUNT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_TOGGLE_HALT_AMOUNT,
           CPMS_FDIR_TOGGLE_HALT_AMOUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_TOGGLE_HALT_AMOUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_CPMS_FDIR_TOGGLE_HALT_AMOUNT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_FDIR_TOGGLE_HALT_AMOUNT,
           CPMS_FDIR_TOGGLE_HALT_AMOUNT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_TOGGLE_HALT_AMOUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_IRRITATE_INJECT_RESPONSE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_IRRITATE_INJECT_RESPONSE,
           CPMS_FDIR_IRRITATE_INJECT_RESPONSE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_IRRITATE_INJECT_RESPONSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_IRRITATE_INJECT_RESPONSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_IRRITATE_INJECT_RESPONSE,
           CPMS_FDIR_IRRITATE_INJECT_RESPONSE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_IRRITATE_INJECT_RESPONSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_CPMS_FDIR_IRRITATE_INJECT_RESPONSE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_FDIR_IRRITATE_INJECT_RESPONSE,
           CPMS_FDIR_IRRITATE_INJECT_RESPONSE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_IRRITATE_INJECT_RESPONSE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_IRRITATE_LFSR_SELECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_IRRITATE_LFSR_SELECT,
           CPMS_FDIR_IRRITATE_LFSR_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_IRRITATE_LFSR_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_IRRITATE_LFSR_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_IRRITATE_LFSR_SELECT,
           CPMS_FDIR_IRRITATE_LFSR_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_IRRITATE_LFSR_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_CPMS_FDIR_IRRITATE_LFSR_SELECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_FDIR_IRRITATE_LFSR_SELECT,
           CPMS_FDIR_IRRITATE_LFSR_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_IRRITATE_LFSR_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_IRRITATE_SMALL_SELECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_IRRITATE_SMALL_SELECT,
           CPMS_FDIR_IRRITATE_SMALL_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_IRRITATE_SMALL_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_IRRITATE_SMALL_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_IRRITATE_SMALL_SELECT,
           CPMS_FDIR_IRRITATE_SMALL_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_IRRITATE_SMALL_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_CPMS_FDIR_IRRITATE_SMALL_SELECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_FDIR_IRRITATE_SMALL_SELECT,
           CPMS_FDIR_IRRITATE_SMALL_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_IRRITATE_SMALL_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_IRRITATE_LARGE_SELECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_IRRITATE_LARGE_SELECT,
           CPMS_FDIR_IRRITATE_LARGE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_IRRITATE_LARGE_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_IRRITATE_LARGE_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_IRRITATE_LARGE_SELECT,
           CPMS_FDIR_IRRITATE_LARGE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_IRRITATE_LARGE_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_CPMS_FDIR_IRRITATE_LARGE_SELECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_FDIR_IRRITATE_LARGE_SELECT,
           CPMS_FDIR_IRRITATE_LARGE_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_IRRITATE_LARGE_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_IRRITATE_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_IRRITATE_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_IRRITATE_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_IRRITATE_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_IRRITATE_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_IRRITATE_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_IRRITATE_SPARE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.setBit<CPMS_FDIR_IRRITATE_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_IRRITATE_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_FDIR_IRRITATE_SPARE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.clearBit<CPMS_FDIR_IRRITATE_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_IRRITATE_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_CPMS_FDIR_IRRITATE_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_FDIR_IRRITATE_SPARE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_IRRITATE_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_CPMS_FDIR_IRRITATE_SPARE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return i_data.getBit<CPMS_FDIR_IRRITATE_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_IRRITATE_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_IRRITATE_WEIGHT_SELECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_IRRITATE_WEIGHT_SELECT,
           CPMS_FDIR_IRRITATE_WEIGHT_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_IRRITATE_WEIGHT_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_IRRITATE_WEIGHT_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_IRRITATE_WEIGHT_SELECT,
           CPMS_FDIR_IRRITATE_WEIGHT_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_IRRITATE_WEIGHT_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_CPMS_FDIR_IRRITATE_WEIGHT_SELECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_FDIR_IRRITATE_WEIGHT_SELECT,
           CPMS_FDIR_IRRITATE_WEIGHT_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_IRRITATE_WEIGHT_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_INJECT_DPT_SUSPEND(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_INJECT_DPT_SUSPEND,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_INJECT_DPT_SUSPEND chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_INJECT_DPT_SUSPEND(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_FDIR_INJECT_DPT_SUSPEND,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_INJECT_DPT_SUSPEND chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_FDIR_INJECT_DPT_SUSPEND(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.setBit<CPMS_FDIR_INJECT_DPT_SUSPEND>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_INJECT_DPT_SUSPEND chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_FDIR_INJECT_DPT_SUSPEND(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return o_data.clearBit<CPMS_FDIR_INJECT_DPT_SUSPEND>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_INJECT_DPT_SUSPEND chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_CPMS_FDIR_INJECT_DPT_SUSPEND(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_FDIR_INJECT_DPT_SUSPEND,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_INJECT_DPT_SUSPEND chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_CPMS_FDIR_INJECT_DPT_SUSPEND(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_FDIR_RW, CPMS_FDIR_WO_CLEAR, CPMS_FDIR_WO_OR));
#endif
    return i_data.getBit<CPMS_FDIR_INJECT_DPT_SUSPEND>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_FDIR_INJECT_DPT_SUSPEND chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

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
    FAPI_ERR("Invalid dial access QME_CDBB_MESSAGE_NUMBER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access QME_CDBB_MESSAGE_NUMBER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access QME_CDBB_MESSAGE_NUMBER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}


#ifndef __PPE_HCODE__
}
}

#endif
#endif
