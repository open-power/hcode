/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_c/reg00013_unused.H $     */
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

#ifndef __PPE_C_REG00013_H_UNUSED__
#define __PPE_C_REG00013_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_c
{
#endif


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

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
