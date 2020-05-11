/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/eq/reg00008_unused.H $        */
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

#ifndef __EQ_REG00008_H_UNUSED__
#define __EQ_REG00008_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace eq
{
#endif


//>> PREP_[CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY]

//>> PUT_[CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY]


//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_1,
           CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_1]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_1,
           CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_1]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_1]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_1,
           CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_1]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_2]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_2,
           CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_2]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_2]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_2,
           CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_2]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_2]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_2,
           CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_2]

//>> PREP_[CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE]

//>> PUT_[CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE]


//>> SET_[CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE));
#endif
    return o_data.setBit<CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]

//>> CLEAR_[CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]
static inline bool GET_CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE));
#endif
    return i_data.getBit<CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]

//>> PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE]

//>> PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE]


//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE));
#endif
    return o_data.setBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK]

//>> CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK]
static inline fapi2::buffer<uint64_t>&
CLEAR_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE));
#endif
    return o_data.clearBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK]
static inline bool GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE));
#endif
    return i_data.getBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK]

//>> PREP_[CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT]

//>> PUT_[CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT]


//>> SET_[CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1,
           CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1,
           CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1,
           CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q,
           CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q,
           CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q,
           CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT,
           CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT,
           CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT,
           CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE,
           CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE,
           CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE,
           CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE]

//>> PREP_[CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY]

//>> PUT_[CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY]


//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE,
           CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE,
           CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE,
           CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE]

//>> PREP_[CLK_ADJ_01_DCADJ_WRAP_SET_DEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_DCADJ_WRAP_SET_DEC(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_SET_DEC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_DCADJ_WRAP_SET_DEC]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_DEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_DCADJ_WRAP_SET_DEC(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_SET_DEC;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_DCADJ_WRAP_SET_DEC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_DEC]

//>> PUT_[CLK_ADJ_01_DCADJ_WRAP_SET_DEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_DCADJ_WRAP_SET_DEC(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_DEC));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_DCADJ_WRAP_SET_DEC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_DCADJ_WRAP_SET_DEC]


//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC_VALUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_DEC));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC_VALUE,
           CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC_VALUE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_DEC));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC_VALUE,
           CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC_VALUE]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC_VALUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_DEC));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC_VALUE,
           CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC_VALUE]

//>> PREP_[CLK_ADJ_01_DCADJ_WRAP_SET_INC_DCC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_DCADJ_WRAP_SET_INC_DCC(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_SET_INC_DCC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_DCADJ_WRAP_SET_INC_DCC]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_INC_DCC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_DCADJ_WRAP_SET_INC_DCC(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_SET_INC_DCC;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_DCADJ_WRAP_SET_INC_DCC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_INC_DCC]

//>> PUT_[CLK_ADJ_01_DCADJ_WRAP_SET_INC_DCC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_DCADJ_WRAP_SET_INC_DCC(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_INC_DCC));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_DCADJ_WRAP_SET_INC_DCC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_DCADJ_WRAP_SET_INC_DCC]


//>> PREP_[CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE]

//>> PUT_[CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE]


//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]

//>> PREP_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT]

//>> PUT_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT]


//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE,
           CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE,
           CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE,
           CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE,
           CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE,
           CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE,
           CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT,
           CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT,
           CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT,
           CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT]

//>> PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA]

//>> PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA]


//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST]

//>> PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE]

//>> PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE]


//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]

//>> PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]

//>> PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]


//>> PREP_[CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY]

//>> PUT_[CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY]


//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE,
           CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE,
           CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE,
           CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE]

//>> PREP_[CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC]

//>> PUT_[CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC]


//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR,
           CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR,
           CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR,
           CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR]

//>> PREP_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES]

//>> PUT_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES]


//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE,
           CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE,
           CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE,
           CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE,
           CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE,
           CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE,
           CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE]

//>> PREP_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]

//>> PUT_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]


//>> PREP_[CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY]

//>> PUT_[CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY]


//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE,
           CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE,
           CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE,
           CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE]

//>> PREP_[CLK_ADJ_03_DCADJ_WRAP_SET_INC_DCC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_DCADJ_WRAP_SET_INC_DCC(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_SET_INC_DCC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_DCADJ_WRAP_SET_INC_DCC]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SET_INC_DCC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_DCADJ_WRAP_SET_INC_DCC(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_SET_INC_DCC;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_DCADJ_WRAP_SET_INC_DCC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SET_INC_DCC]

//>> PUT_[CLK_ADJ_03_DCADJ_WRAP_SET_INC_DCC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_DCADJ_WRAP_SET_INC_DCC(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_INC_DCC));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_DCADJ_WRAP_SET_INC_DCC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_DCADJ_WRAP_SET_INC_DCC]


//>> PREP_[CLK_ADJ_03_DCADJ_WRAP_SOFT_RESET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_DCADJ_WRAP_SOFT_RESET(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_SOFT_RESET;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_DCADJ_WRAP_SOFT_RESET]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SOFT_RESET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_DCADJ_WRAP_SOFT_RESET(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_SOFT_RESET;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_DCADJ_WRAP_SOFT_RESET, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SOFT_RESET]

//>> PUT_[CLK_ADJ_03_DCADJ_WRAP_SOFT_RESET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_DCADJ_WRAP_SOFT_RESET(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SOFT_RESET));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_DCADJ_WRAP_SOFT_RESET, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_DCADJ_WRAP_SOFT_RESET]


//>> PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES]

//>> PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES]


//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3]

//>> PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE]

//>> PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE]


//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.setBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]

//>> CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]
static inline bool GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return i_data.getBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.setBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]

//>> CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]
static inline bool GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return i_data.getBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.setBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]

//>> CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]
static inline bool GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return i_data.getBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.setBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]

//>> CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]
static inline bool GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return i_data.getBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.setBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]

//>> CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]
static inline bool GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return i_data.getBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]

//>> PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE]

//>> PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE]


//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE));
#endif
    return o_data.setBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]

//>> CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE));
#endif
    return o_data.clearBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]
static inline bool GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE));
#endif
    return i_data.getBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]

//>> PREP_[QME_SCOM_XIRAMRA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_SCOM_XIRAMRA(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SCOM_XIRAMRA;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_SCOM_XIRAMRA]

//>> GET_[QME_SCOM_XIRAMRA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_SCOM_XIRAMRA(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SCOM_XIRAMRA;
#endif
    return fapi2::getScom(i_target, QME_SCOM_XIRAMRA, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_SCOM_XIRAMRA]

//>> PUT_[QME_SCOM_XIRAMRA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_SCOM_XIRAMRA(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_SCOM_XIRAMRA));
#endif
    return fapi2::putScom(i_target, QME_SCOM_XIRAMRA, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_SCOM_XIRAMRA]


//>> SET_[QME_SCOM_XIRAMRA_QME_SCOM_XIXCR_XCR]
static inline fapi2::buffer<uint64_t>& SET_QME_SCOM_XIRAMRA_QME_SCOM_XIXCR_XCR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCOM_XIRAMRA));
#endif
    return o_data.insertFromRight<QME_SCOM_XIRAMRA_QME_SCOM_XIXCR_XCR,
           QME_SCOM_XIRAMRA_QME_SCOM_XIXCR_XCR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QME_SCOM_XIRAMRA_QME_SCOM_XIXCR_XCR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCOM_XIRAMRA_QME_SCOM_XIXCR_XCR]

//>> SET_[QME_SCOM_XIRAMRA_QME_SCOM_XIXCR_XCR]
static inline fapi2::buffer<uint64_t>& SET_QME_SCOM_XIRAMRA_QME_SCOM_XIXCR_XCR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCOM_XIRAMRA));
#endif
    return o_data.insertFromRight<QME_SCOM_XIRAMRA_QME_SCOM_XIXCR_XCR,
           QME_SCOM_XIRAMRA_QME_SCOM_XIXCR_XCR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QME_SCOM_XIRAMRA_QME_SCOM_XIXCR_XCR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCOM_XIRAMRA_QME_SCOM_XIXCR_XCR]

//>> GET_[QME_SCOM_XIRAMRA_QME_SCOM_XIXCR_XCR]
static inline fapi2::buffer<uint64_t>& GET_QME_SCOM_XIRAMRA_QME_SCOM_XIXCR_XCR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCOM_XIRAMRA));
#endif
    return i_data.extractToRight<QME_SCOM_XIRAMRA_QME_SCOM_XIXCR_XCR,
           QME_SCOM_XIRAMRA_QME_SCOM_XIXCR_XCR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QME_SCOM_XIRAMRA_QME_SCOM_XIXCR_XCR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCOM_XIRAMRA_QME_SCOM_XIXCR_XCR]

//>> SET_[QME_SCOM_XIRAMRA_SPRG0]
static inline fapi2::buffer<uint64_t>& SET_QME_SCOM_XIRAMRA_SPRG0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCOM_XIRAMRA));
#endif
    return o_data.insertFromRight<QME_SCOM_XIRAMRA_SPRG0,
           QME_SCOM_XIRAMRA_SPRG0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QME_SCOM_XIRAMRA_SPRG0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCOM_XIRAMRA_SPRG0]

//>> SET_[QME_SCOM_XIRAMRA_SPRG0]
static inline fapi2::buffer<uint64_t>& SET_QME_SCOM_XIRAMRA_SPRG0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCOM_XIRAMRA));
#endif
    return o_data.insertFromRight<QME_SCOM_XIRAMRA_SPRG0,
           QME_SCOM_XIRAMRA_SPRG0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QME_SCOM_XIRAMRA_SPRG0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCOM_XIRAMRA_SPRG0]

//>> GET_[QME_SCOM_XIRAMRA_SPRG0]
static inline fapi2::buffer<uint64_t>& GET_QME_SCOM_XIRAMRA_SPRG0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCOM_XIRAMRA));
#endif
    return i_data.extractToRight<QME_SCOM_XIRAMRA_SPRG0,
           QME_SCOM_XIRAMRA_SPRG0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QME_SCOM_XIRAMRA_SPRG0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCOM_XIRAMRA_SPRG0]

//>> PREP_[QME_SCRA_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_SCRA_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SCRA_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_SCRA_WO_CLEAR]

//>> GET_[QME_SCRA_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_SCRA_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SCRA_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, QME_SCRA_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_SCRA_WO_CLEAR]

//>> PUT_[QME_SCRA_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_SCRA_WO_CLEAR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_SCRA_RW, QME_SCRA_WO_CLEAR, QME_SCRA_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_SCRA_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_SCRA_WO_CLEAR]

//>> PREP_[QME_SCRA_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_SCRA_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SCRA_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_SCRA_WO_OR]

//>> GET_[QME_SCRA_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_SCRA_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SCRA_WO_OR;
#endif
    return fapi2::getScom(i_target, QME_SCRA_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_SCRA_WO_OR]

//>> PUT_[QME_SCRA_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_SCRA_WO_OR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_SCRA_RW, QME_SCRA_WO_CLEAR, QME_SCRA_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_SCRA_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_SCRA_WO_OR]


//>> PREP_[WOF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_WOF(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = WOF;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[WOF]

//>> GET_[WOF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_WOF(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = WOF;
#endif
    return fapi2::getScom(i_target, WOF, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[WOF]

//>> PUT_[WOF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_WOF(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return fapi2::putScom(i_target, WOF, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[WOF]


//>> SET_[WOF_ANY_WOF]
static inline fapi2::buffer<uint64_t>& SET_WOF_ANY_WOF(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_ANY_WOF,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_ANY_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_ANY_WOF]

//>> SET_[WOF_ANY_WOF]
static inline fapi2::buffer<uint64_t>& SET_WOF_ANY_WOF(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_ANY_WOF,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_ANY_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_ANY_WOF]

//>> SET_[WOF_ANY_WOF]
static inline fapi2::buffer<uint64_t>& SET_WOF_ANY_WOF(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_ANY_WOF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_ANY_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_ANY_WOF]

//>> CLEAR_[WOF_ANY_WOF]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_ANY_WOF(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_ANY_WOF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_ANY_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_ANY_WOF]

//>> GET_[WOF_ANY_WOF]
static inline fapi2::buffer<uint64_t>& GET_WOF_ANY_WOF(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_ANY_WOF,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_ANY_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_ANY_WOF]

//>> GET_[WOF_ANY_WOF]
static inline bool GET_WOF_ANY_WOF(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_ANY_WOF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_ANY_WOF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_ANY_WOF]

//>> SET_[WOF_RESERVED1W]
static inline fapi2::buffer<uint64_t>& SET_WOF_RESERVED1W(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_RESERVED1W,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_RESERVED1W chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_RESERVED1W]

//>> SET_[WOF_RESERVED1W]
static inline fapi2::buffer<uint64_t>& SET_WOF_RESERVED1W(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_RESERVED1W,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_RESERVED1W chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_RESERVED1W]

//>> SET_[WOF_RESERVED1W]
static inline fapi2::buffer<uint64_t>& SET_WOF_RESERVED1W(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_RESERVED1W>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_RESERVED1W chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_RESERVED1W]

//>> CLEAR_[WOF_RESERVED1W]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_RESERVED1W(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_RESERVED1W>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_RESERVED1W chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_RESERVED1W]

//>> GET_[WOF_RESERVED1W]
static inline fapi2::buffer<uint64_t>& GET_WOF_RESERVED1W(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_RESERVED1W,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_RESERVED1W chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_RESERVED1W]

//>> GET_[WOF_RESERVED1W]
static inline bool GET_WOF_RESERVED1W(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_RESERVED1W>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_RESERVED1W chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_RESERVED1W]

//>> SET_[WOF_ANY_LOCAL_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_WOF_ANY_LOCAL_XSTOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_ANY_LOCAL_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_ANY_LOCAL_XSTOP]

//>> SET_[WOF_ANY_LOCAL_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_WOF_ANY_LOCAL_XSTOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_ANY_LOCAL_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_ANY_LOCAL_XSTOP]

//>> SET_[WOF_ANY_LOCAL_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_WOF_ANY_LOCAL_XSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_ANY_LOCAL_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_ANY_LOCAL_XSTOP]

//>> CLEAR_[WOF_ANY_LOCAL_XSTOP]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_ANY_LOCAL_XSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_ANY_LOCAL_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_ANY_LOCAL_XSTOP]

//>> GET_[WOF_ANY_LOCAL_XSTOP]
static inline fapi2::buffer<uint64_t>& GET_WOF_ANY_LOCAL_XSTOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_ANY_LOCAL_XSTOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_ANY_LOCAL_XSTOP]

//>> GET_[WOF_ANY_LOCAL_XSTOP]
static inline bool GET_WOF_ANY_LOCAL_XSTOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_ANY_LOCAL_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_ANY_LOCAL_XSTOP]

//>> SET_[WOF_RESERVED3W]
static inline fapi2::buffer<uint64_t>& SET_WOF_RESERVED3W(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_RESERVED3W,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_RESERVED3W chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_RESERVED3W]

//>> SET_[WOF_RESERVED3W]
static inline fapi2::buffer<uint64_t>& SET_WOF_RESERVED3W(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_RESERVED3W,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_RESERVED3W chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_RESERVED3W]

//>> SET_[WOF_RESERVED3W]
static inline fapi2::buffer<uint64_t>& SET_WOF_RESERVED3W(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_RESERVED3W>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_RESERVED3W chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_RESERVED3W]

//>> CLEAR_[WOF_RESERVED3W]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_RESERVED3W(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_RESERVED3W>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_RESERVED3W chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_RESERVED3W]

//>> GET_[WOF_RESERVED3W]
static inline fapi2::buffer<uint64_t>& GET_WOF_RESERVED3W(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_RESERVED3W,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_RESERVED3W chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_RESERVED3W]

//>> GET_[WOF_RESERVED3W]
static inline bool GET_WOF_RESERVED3W(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_RESERVED3W>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_RESERVED3W chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_RESERVED3W]

//>> SET_[WOF_PERV]
static inline fapi2::buffer<uint64_t>& SET_WOF_PERV(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_PERV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_PERV]

//>> SET_[WOF_PERV]
static inline fapi2::buffer<uint64_t>& SET_WOF_PERV(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_PERV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_PERV]

//>> SET_[WOF_PERV]
static inline fapi2::buffer<uint64_t>& SET_WOF_PERV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_PERV]

//>> CLEAR_[WOF_PERV]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_PERV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_PERV]

//>> GET_[WOF_PERV]
static inline fapi2::buffer<uint64_t>& GET_WOF_PERV(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_PERV,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_PERV]

//>> GET_[WOF_PERV]
static inline bool GET_WOF_PERV(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_PERV]

//>> SET_[WOF_IN05]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN05(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN05]

//>> SET_[WOF_IN05]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN05(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN05]

//>> SET_[WOF_IN05]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN05(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN05]

//>> CLEAR_[WOF_IN05]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN05(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN05]

//>> GET_[WOF_IN05]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN05(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN05,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN05]

//>> GET_[WOF_IN05]
static inline bool GET_WOF_IN05(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN05]

//>> SET_[WOF_IN06]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN06(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN06]

//>> SET_[WOF_IN06]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN06(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN06]

//>> SET_[WOF_IN06]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN06(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN06]

//>> CLEAR_[WOF_IN06]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN06(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN06]

//>> GET_[WOF_IN06]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN06(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN06,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN06]

//>> GET_[WOF_IN06]
static inline bool GET_WOF_IN06(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN06]

//>> SET_[WOF_IN07]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN07(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN07]

//>> SET_[WOF_IN07]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN07(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN07]

//>> SET_[WOF_IN07]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN07(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN07]

//>> CLEAR_[WOF_IN07]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN07(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN07]

//>> GET_[WOF_IN07]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN07(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN07,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN07]

//>> GET_[WOF_IN07]
static inline bool GET_WOF_IN07(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN07]

//>> SET_[WOF_IN08]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN08(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN08]

//>> SET_[WOF_IN08]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN08(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN08]

//>> SET_[WOF_IN08]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN08(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN08]

//>> CLEAR_[WOF_IN08]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN08(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN08]

//>> GET_[WOF_IN08]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN08(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN08,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN08]

//>> GET_[WOF_IN08]
static inline bool GET_WOF_IN08(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN08]

//>> SET_[WOF_IN09]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN09(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN09]

//>> SET_[WOF_IN09]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN09(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN09]

//>> SET_[WOF_IN09]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN09(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN09]

//>> CLEAR_[WOF_IN09]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN09(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN09]

//>> GET_[WOF_IN09]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN09(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN09,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN09]

//>> GET_[WOF_IN09]
static inline bool GET_WOF_IN09(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN09]

//>> SET_[WOF_IN010]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN010(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN010,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN010 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN010]

//>> SET_[WOF_IN010]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN010(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN010,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN010 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN010]

//>> SET_[WOF_IN010]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN010(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN010>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN010 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN010]

//>> CLEAR_[WOF_IN010]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN010(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN010>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN010 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN010]

//>> GET_[WOF_IN010]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN010(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN010,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN010 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN010]

//>> GET_[WOF_IN010]
static inline bool GET_WOF_IN010(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN010>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN010 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN010]

//>> SET_[WOF_IN011]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN011(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN011,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN011 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN011]

//>> SET_[WOF_IN011]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN011(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN011,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN011 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN011]

//>> SET_[WOF_IN011]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN011(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN011>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN011 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN011]

//>> CLEAR_[WOF_IN011]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN011(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN011>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN011 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN011]

//>> GET_[WOF_IN011]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN011(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN011,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN011 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN011]

//>> GET_[WOF_IN011]
static inline bool GET_WOF_IN011(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN011>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN011 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN011]

//>> SET_[WOF_IN012]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN012(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN012,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN012 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN012]

//>> SET_[WOF_IN012]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN012(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN012,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN012 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN012]

//>> SET_[WOF_IN012]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN012(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN012>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN012 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN012]

//>> CLEAR_[WOF_IN012]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN012(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN012>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN012 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN012]

//>> GET_[WOF_IN012]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN012(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN012,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN012 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN012]

//>> GET_[WOF_IN012]
static inline bool GET_WOF_IN012(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN012>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN012 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN012]

//>> SET_[WOF_IN013]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN013(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN013,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN013 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN013]

//>> SET_[WOF_IN013]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN013(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN013,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN013 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN013]

//>> SET_[WOF_IN013]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN013(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN013>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN013 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN013]

//>> CLEAR_[WOF_IN013]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN013(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN013>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN013 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN013]

//>> GET_[WOF_IN013]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN013(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN013,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN013 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN013]

//>> GET_[WOF_IN013]
static inline bool GET_WOF_IN013(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN013>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN013 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN013]

//>> SET_[WOF_IN014]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN014(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN014,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN014 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN014]

//>> SET_[WOF_IN014]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN014(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN014,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN014 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN014]

//>> SET_[WOF_IN014]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN014(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN014>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN014 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN014]

//>> CLEAR_[WOF_IN014]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN014(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN014>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN014 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN014]

//>> GET_[WOF_IN014]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN014(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN014,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN014 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN014]

//>> GET_[WOF_IN014]
static inline bool GET_WOF_IN014(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN014>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN014 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN014]

//>> SET_[WOF_IN015]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN015(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN015,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN015 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN015]

//>> SET_[WOF_IN015]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN015(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN015,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN015 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN015]

//>> SET_[WOF_IN015]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN015(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN015>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN015 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN015]

//>> CLEAR_[WOF_IN015]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN015(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN015>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN015 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN015]

//>> GET_[WOF_IN015]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN015(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN015,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN015 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN015]

//>> GET_[WOF_IN015]
static inline bool GET_WOF_IN015(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN015>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN015 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN015]

//>> SET_[WOF_IN016]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN016(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN016,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN016 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN016]

//>> SET_[WOF_IN016]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN016(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN016,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN016 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN016]

//>> SET_[WOF_IN016]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN016(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN016>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN016 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN016]

//>> CLEAR_[WOF_IN016]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN016(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN016>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN016 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN016]

//>> GET_[WOF_IN016]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN016(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN016,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN016 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN016]

//>> GET_[WOF_IN016]
static inline bool GET_WOF_IN016(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN016>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN016 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN016]

//>> SET_[WOF_IN017]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN017(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN017,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN017 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN017]

//>> SET_[WOF_IN017]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN017(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN017,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN017 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN017]

//>> SET_[WOF_IN017]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN017(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN017>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN017 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN017]

//>> CLEAR_[WOF_IN017]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN017(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN017>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN017 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN017]

//>> GET_[WOF_IN017]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN017(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN017,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN017 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN017]

//>> GET_[WOF_IN017]
static inline bool GET_WOF_IN017(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN017>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN017 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN017]

//>> SET_[WOF_IN018]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN018(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN018,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN018 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN018]

//>> SET_[WOF_IN018]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN018(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN018,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN018 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN018]

//>> SET_[WOF_IN018]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN018(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN018>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN018 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN018]

//>> CLEAR_[WOF_IN018]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN018(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN018>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN018 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN018]

//>> GET_[WOF_IN018]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN018(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN018,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN018 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN018]

//>> GET_[WOF_IN018]
static inline bool GET_WOF_IN018(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN018>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN018 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN018]

//>> SET_[WOF_IN019]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN019(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN019,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN019 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN019]

//>> SET_[WOF_IN019]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN019(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN019,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN019 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN019]

//>> SET_[WOF_IN019]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN019(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN019>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN019 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN019]

//>> CLEAR_[WOF_IN019]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN019(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN019>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN019 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN019]

//>> GET_[WOF_IN019]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN019(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN019,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN019 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN019]

//>> GET_[WOF_IN019]
static inline bool GET_WOF_IN019(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN019>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN019 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN019]

//>> SET_[WOF_IN020]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN020(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN020,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN020 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN020]

//>> SET_[WOF_IN020]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN020(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN020,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN020 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN020]

//>> SET_[WOF_IN020]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN020(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN020>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN020 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN020]

//>> CLEAR_[WOF_IN020]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN020(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN020>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN020 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN020]

//>> GET_[WOF_IN020]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN020(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN020,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN020 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN020]

//>> GET_[WOF_IN020]
static inline bool GET_WOF_IN020(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN020>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN020 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN020]

//>> SET_[WOF_IN021]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN021(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN021,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN021 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN021]

//>> SET_[WOF_IN021]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN021(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN021,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN021 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN021]

//>> SET_[WOF_IN021]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN021(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN021>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN021 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN021]

//>> CLEAR_[WOF_IN021]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN021(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN021>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN021 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN021]

//>> GET_[WOF_IN021]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN021(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN021,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN021 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN021]

//>> GET_[WOF_IN021]
static inline bool GET_WOF_IN021(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN021>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN021 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN021]

//>> SET_[WOF_IN022]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN022(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN022,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN022 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN022]

//>> SET_[WOF_IN022]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN022(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN022,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN022 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN022]

//>> SET_[WOF_IN022]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN022(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN022>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN022 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN022]

//>> CLEAR_[WOF_IN022]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN022(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN022>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN022 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN022]

//>> GET_[WOF_IN022]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN022(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN022,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN022 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN022]

//>> GET_[WOF_IN022]
static inline bool GET_WOF_IN022(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN022>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN022 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN022]

//>> SET_[WOF_IN023]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN023(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN023,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN023 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN023]

//>> SET_[WOF_IN023]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN023(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN023,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN023 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN023]

//>> SET_[WOF_IN023]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN023(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN023>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN023 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN023]

//>> CLEAR_[WOF_IN023]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN023(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN023>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN023 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN023]

//>> GET_[WOF_IN023]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN023(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN023,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN023 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN023]

//>> GET_[WOF_IN023]
static inline bool GET_WOF_IN023(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN023>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN023 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN023]

//>> SET_[WOF_IN024]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN024(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN024,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN024 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN024]

//>> SET_[WOF_IN024]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN024(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN024,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN024 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN024]

//>> SET_[WOF_IN024]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN024(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN024>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN024 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN024]

//>> CLEAR_[WOF_IN024]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN024(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN024>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN024 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN024]

//>> GET_[WOF_IN024]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN024(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN024,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN024 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN024]

//>> GET_[WOF_IN024]
static inline bool GET_WOF_IN024(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN024>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN024 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN024]

//>> SET_[WOF_IN025]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN025(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN025,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN025 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN025]

//>> SET_[WOF_IN025]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN025(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN025,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN025 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN025]

//>> SET_[WOF_IN025]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN025(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN025>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN025 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN025]

//>> CLEAR_[WOF_IN025]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN025(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN025>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN025 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN025]

//>> GET_[WOF_IN025]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN025(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN025,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN025 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN025]

//>> GET_[WOF_IN025]
static inline bool GET_WOF_IN025(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN025>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN025 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN025]

//>> SET_[WOF_IN026]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN026(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN026,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN026 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN026]

//>> SET_[WOF_IN026]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN026(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN026,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN026 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN026]

//>> SET_[WOF_IN026]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN026(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN026>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN026 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN026]

//>> CLEAR_[WOF_IN026]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN026(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN026>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN026 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN026]

//>> GET_[WOF_IN026]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN026(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN026,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN026 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN026]

//>> GET_[WOF_IN026]
static inline bool GET_WOF_IN026(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN026>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN026 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN026]

//>> SET_[WOF_IN027]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN027(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN027,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN027 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN027]

//>> SET_[WOF_IN027]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN027(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN027,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN027 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN027]

//>> SET_[WOF_IN027]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN027(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN027>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN027 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN027]

//>> CLEAR_[WOF_IN027]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN027(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN027>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN027 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN027]

//>> GET_[WOF_IN027]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN027(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN027,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN027 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN027]

//>> GET_[WOF_IN027]
static inline bool GET_WOF_IN027(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN027>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN027 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN027]

//>> SET_[WOF_IN028]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN028(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN028,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN028 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN028]

//>> SET_[WOF_IN028]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN028(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN028,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN028 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN028]

//>> SET_[WOF_IN028]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN028(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN028>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN028 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN028]

//>> CLEAR_[WOF_IN028]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN028(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN028>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN028 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN028]

//>> GET_[WOF_IN028]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN028(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN028,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN028 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN028]

//>> GET_[WOF_IN028]
static inline bool GET_WOF_IN028(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN028>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN028 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN028]

//>> SET_[WOF_IN029]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN029(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN029,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN029 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN029]

//>> SET_[WOF_IN029]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN029(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN029,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN029 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN029]

//>> SET_[WOF_IN029]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN029(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN029>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN029 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN029]

//>> CLEAR_[WOF_IN029]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN029(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN029>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN029 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN029]

//>> GET_[WOF_IN029]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN029(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN029,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN029 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN029]

//>> GET_[WOF_IN029]
static inline bool GET_WOF_IN029(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN029>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN029 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN029]

//>> SET_[WOF_IN030]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN030(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN030,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN030 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN030]

//>> SET_[WOF_IN030]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN030(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN030,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN030 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN030]

//>> SET_[WOF_IN030]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN030(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN030>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN030 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN030]

//>> CLEAR_[WOF_IN030]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN030(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN030>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN030 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN030]

//>> GET_[WOF_IN030]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN030(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN030,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN030 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN030]

//>> GET_[WOF_IN030]
static inline bool GET_WOF_IN030(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN030>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN030 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN030]

//>> SET_[WOF_IN031]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN031(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN031,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN031 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN031]

//>> SET_[WOF_IN031]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN031(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN031,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN031 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN031]

//>> SET_[WOF_IN031]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN031(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN031>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN031 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN031]

//>> CLEAR_[WOF_IN031]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN031(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN031>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN031 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN031]

//>> GET_[WOF_IN031]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN031(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN031,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN031 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN031]

//>> GET_[WOF_IN031]
static inline bool GET_WOF_IN031(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN031>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN031 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN031]

//>> SET_[WOF_IN032]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN032(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN032,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN032 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN032]

//>> SET_[WOF_IN032]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN032(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN032,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN032 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN032]

//>> SET_[WOF_IN032]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN032(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN032>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN032 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN032]

//>> CLEAR_[WOF_IN032]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN032(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN032>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN032 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN032]

//>> GET_[WOF_IN032]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN032(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN032,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN032 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN032]

//>> GET_[WOF_IN032]
static inline bool GET_WOF_IN032(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN032>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN032 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN032]

//>> SET_[WOF_IN033]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN033(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN033,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN033 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN033]

//>> SET_[WOF_IN033]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN033(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN033,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN033 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN033]

//>> SET_[WOF_IN033]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN033(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN033>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN033 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN033]

//>> CLEAR_[WOF_IN033]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN033(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN033>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN033 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN033]

//>> GET_[WOF_IN033]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN033(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN033,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN033 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN033]

//>> GET_[WOF_IN033]
static inline bool GET_WOF_IN033(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN033>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN033 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN033]

//>> SET_[WOF_IN034]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN034(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN034,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN034 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN034]

//>> SET_[WOF_IN034]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN034(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN034,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN034 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN034]

//>> SET_[WOF_IN034]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN034(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN034>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN034 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN034]

//>> CLEAR_[WOF_IN034]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN034(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN034>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN034 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN034]

//>> GET_[WOF_IN034]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN034(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN034,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN034 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN034]

//>> GET_[WOF_IN034]
static inline bool GET_WOF_IN034(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN034>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN034 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN034]

//>> SET_[WOF_IN035]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN035(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN035,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN035 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN035]

//>> SET_[WOF_IN035]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN035(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN035,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN035 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN035]

//>> SET_[WOF_IN035]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN035(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN035>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN035 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN035]

//>> CLEAR_[WOF_IN035]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN035(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN035>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN035 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN035]

//>> GET_[WOF_IN035]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN035(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN035,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN035 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN035]

//>> GET_[WOF_IN035]
static inline bool GET_WOF_IN035(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN035>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN035 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN035]

//>> SET_[WOF_IN036]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN036(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN036,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN036 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN036]

//>> SET_[WOF_IN036]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN036(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN036,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN036 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN036]

//>> SET_[WOF_IN036]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN036(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN036>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN036 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN036]

//>> CLEAR_[WOF_IN036]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN036(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN036>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN036 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN036]

//>> GET_[WOF_IN036]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN036(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN036,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN036 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN036]

//>> GET_[WOF_IN036]
static inline bool GET_WOF_IN036(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN036>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN036 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN036]

//>> SET_[WOF_IN037]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN037(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN037,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN037 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN037]

//>> SET_[WOF_IN037]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN037(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN037,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN037 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN037]

//>> SET_[WOF_IN037]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN037(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN037>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN037 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN037]

//>> CLEAR_[WOF_IN037]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN037(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN037>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN037 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN037]

//>> GET_[WOF_IN037]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN037(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN037,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN037 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN037]

//>> GET_[WOF_IN037]
static inline bool GET_WOF_IN037(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN037>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN037 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN037]

//>> SET_[WOF_IN038]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN038(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN038,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN038 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN038]

//>> SET_[WOF_IN038]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN038(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN038,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN038 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN038]

//>> SET_[WOF_IN038]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN038(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN038>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN038 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN038]

//>> CLEAR_[WOF_IN038]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN038(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN038>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN038 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN038]

//>> GET_[WOF_IN038]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN038(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN038,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN038 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN038]

//>> GET_[WOF_IN038]
static inline bool GET_WOF_IN038(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN038>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN038 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN038]

//>> SET_[WOF_IN039]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN039(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN039,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN039 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN039]

//>> SET_[WOF_IN039]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN039(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN039,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN039 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN039]

//>> SET_[WOF_IN039]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN039(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN039>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN039 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN039]

//>> CLEAR_[WOF_IN039]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN039(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN039>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN039 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN039]

//>> GET_[WOF_IN039]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN039(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN039,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN039 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN039]

//>> GET_[WOF_IN039]
static inline bool GET_WOF_IN039(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN039>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN039 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN039]

//>> SET_[WOF_IN040]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN040(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN040,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN040 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN040]

//>> SET_[WOF_IN040]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN040(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN040,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN040 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN040]

//>> SET_[WOF_IN040]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN040(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN040>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN040 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN040]

//>> CLEAR_[WOF_IN040]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN040(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN040>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN040 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN040]

//>> GET_[WOF_IN040]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN040(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN040,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN040 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN040]

//>> GET_[WOF_IN040]
static inline bool GET_WOF_IN040(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN040>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN040 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN040]

//>> SET_[WOF_IN041]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN041(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN041,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN041 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN041]

//>> SET_[WOF_IN041]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN041(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN041,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN041 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN041]

//>> SET_[WOF_IN041]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN041(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN041>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN041 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN041]

//>> CLEAR_[WOF_IN041]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN041(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN041>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN041 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN041]

//>> GET_[WOF_IN041]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN041(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN041,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN041 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN041]

//>> GET_[WOF_IN041]
static inline bool GET_WOF_IN041(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN041>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN041 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN041]

//>> SET_[WOF_IN042]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN042(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN042,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN042 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN042]

//>> SET_[WOF_IN042]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN042(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN042,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN042 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN042]

//>> SET_[WOF_IN042]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN042(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN042>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN042 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN042]

//>> CLEAR_[WOF_IN042]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN042(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN042>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN042 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN042]

//>> GET_[WOF_IN042]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN042(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN042,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN042 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN042]

//>> GET_[WOF_IN042]
static inline bool GET_WOF_IN042(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN042>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN042 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN042]

//>> SET_[WOF_IN043]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN043(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN043,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN043 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN043]

//>> SET_[WOF_IN043]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN043(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN043,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN043 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN043]

//>> SET_[WOF_IN043]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN043(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN043>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN043 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN043]

//>> CLEAR_[WOF_IN043]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN043(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN043>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN043 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN043]

//>> GET_[WOF_IN043]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN043(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN043,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN043 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN043]

//>> GET_[WOF_IN043]
static inline bool GET_WOF_IN043(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN043>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN043 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN043]

//>> SET_[WOF_IN044]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN044(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN044,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN044 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN044]

//>> SET_[WOF_IN044]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN044(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN044,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN044 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN044]

//>> SET_[WOF_IN044]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN044(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN044>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN044 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN044]

//>> CLEAR_[WOF_IN044]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN044(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN044>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN044 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN044]

//>> GET_[WOF_IN044]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN044(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN044,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN044 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN044]

//>> GET_[WOF_IN044]
static inline bool GET_WOF_IN044(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN044>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN044 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN044]

//>> SET_[WOF_IN045]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN045(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN045,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN045 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN045]

//>> SET_[WOF_IN045]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN045(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN045,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN045 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN045]

//>> SET_[WOF_IN045]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN045(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN045>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN045 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN045]

//>> CLEAR_[WOF_IN045]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN045(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN045>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN045 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN045]

//>> GET_[WOF_IN045]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN045(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN045,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN045 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN045]

//>> GET_[WOF_IN045]
static inline bool GET_WOF_IN045(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN045>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN045 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN045]

//>> SET_[WOF_IN046]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN046(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN046,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN046 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN046]

//>> SET_[WOF_IN046]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN046(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN046,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN046 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN046]

//>> SET_[WOF_IN046]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN046(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN046>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN046 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN046]

//>> CLEAR_[WOF_IN046]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN046(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN046>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN046 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN046]

//>> GET_[WOF_IN046]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN046(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN046,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN046 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN046]

//>> GET_[WOF_IN046]
static inline bool GET_WOF_IN046(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN046>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN046 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN046]

//>> SET_[WOF_IN047]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN047(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN047,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN047 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN047]

//>> SET_[WOF_IN047]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN047(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN047,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN047 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN047]

//>> SET_[WOF_IN047]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN047(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN047>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN047 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN047]

//>> CLEAR_[WOF_IN047]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN047(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN047>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN047 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN047]

//>> GET_[WOF_IN047]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN047(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN047,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN047 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN047]

//>> GET_[WOF_IN047]
static inline bool GET_WOF_IN047(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN047>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN047 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN047]

//>> SET_[WOF_IN048]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN048(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN048,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN048 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN048]

//>> SET_[WOF_IN048]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN048(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN048,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN048 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN048]

//>> SET_[WOF_IN048]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN048(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN048>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN048 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN048]

//>> CLEAR_[WOF_IN048]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN048(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN048>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN048 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN048]

//>> GET_[WOF_IN048]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN048(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN048,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN048 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN048]

//>> GET_[WOF_IN048]
static inline bool GET_WOF_IN048(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN048>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN048 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN048]

//>> SET_[WOF_IN049]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN049(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN049,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN049 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN049]

//>> SET_[WOF_IN049]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN049(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN049,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN049 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN049]

//>> SET_[WOF_IN049]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN049(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN049>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN049 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN049]

//>> CLEAR_[WOF_IN049]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN049(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN049>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN049 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN049]

//>> GET_[WOF_IN049]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN049(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN049,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN049 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN049]

//>> GET_[WOF_IN049]
static inline bool GET_WOF_IN049(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN049>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN049 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN049]

//>> SET_[WOF_IN050]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN050(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN050,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN050 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN050]

//>> SET_[WOF_IN050]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN050(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN050,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN050 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN050]

//>> SET_[WOF_IN050]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN050(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN050>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN050 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN050]

//>> CLEAR_[WOF_IN050]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN050(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN050>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN050 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN050]

//>> GET_[WOF_IN050]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN050(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN050,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN050 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN050]

//>> GET_[WOF_IN050]
static inline bool GET_WOF_IN050(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN050>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN050 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN050]

//>> SET_[WOF_IN051]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN051(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN051,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN051 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN051]

//>> SET_[WOF_IN051]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN051(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN051,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN051 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN051]

//>> SET_[WOF_IN051]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN051(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN051>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN051 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN051]

//>> CLEAR_[WOF_IN051]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN051(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN051>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN051 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN051]

//>> GET_[WOF_IN051]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN051(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN051,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN051 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN051]

//>> GET_[WOF_IN051]
static inline bool GET_WOF_IN051(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN051>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN051 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN051]

//>> SET_[WOF_IN052]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN052(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN052,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN052 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN052]

//>> SET_[WOF_IN052]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN052(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN052,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN052 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN052]

//>> SET_[WOF_IN052]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN052(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN052>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN052 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN052]

//>> CLEAR_[WOF_IN052]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN052(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN052>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN052 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN052]

//>> GET_[WOF_IN052]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN052(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN052,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN052 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN052]

//>> GET_[WOF_IN052]
static inline bool GET_WOF_IN052(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN052>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN052 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN052]

//>> SET_[WOF_IN053]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN053(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN053,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access WOF_IN053 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN053]

//>> SET_[WOF_IN053]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN053(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.insertFromRight<WOF_IN053,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access WOF_IN053 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN053]

//>> SET_[WOF_IN053]
static inline fapi2::buffer<uint64_t>& SET_WOF_IN053(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.setBit<WOF_IN053>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access WOF_IN053 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WOF_IN053]

//>> CLEAR_[WOF_IN053]
static inline fapi2::buffer<uint64_t>& CLEAR_WOF_IN053(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return o_data.clearBit<WOF_IN053>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access WOF_IN053 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[WOF_IN053]

//>> GET_[WOF_IN053]
static inline fapi2::buffer<uint64_t>& GET_WOF_IN053(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.extractToRight<WOF_IN053,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access WOF_IN053 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN053]

//>> GET_[WOF_IN053]
static inline bool GET_WOF_IN053(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WOF));
#endif
    return i_data.getBit<WOF_IN053>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access WOF_IN053 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WOF_IN053]

//>> PREP_[ASSIST_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_ASSIST_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = ASSIST_INTERRUPT_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[ASSIST_INTERRUPT_REG]

//>> GET_[ASSIST_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_ASSIST_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = ASSIST_INTERRUPT_REG;
#endif
    return fapi2::getScom(i_target, ASSIST_INTERRUPT_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[ASSIST_INTERRUPT_REG]

//>> PUT_[ASSIST_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_ASSIST_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return fapi2::putScom(i_target, ASSIST_INTERRUPT_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[ASSIST_INTERRUPT_REG]


//>> SET_[ASSIST_INTERRUPT_REG_ATTN]
static inline fapi2::buffer<uint64_t>& SET_ASSIST_INTERRUPT_REG_ATTN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<ASSIST_INTERRUPT_REG_ATTN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access ASSIST_INTERRUPT_REG_ATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ASSIST_INTERRUPT_REG_ATTN]

//>> SET_[ASSIST_INTERRUPT_REG_ATTN]
static inline fapi2::buffer<uint64_t>& SET_ASSIST_INTERRUPT_REG_ATTN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<ASSIST_INTERRUPT_REG_ATTN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access ASSIST_INTERRUPT_REG_ATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ASSIST_INTERRUPT_REG_ATTN]

//>> SET_[ASSIST_INTERRUPT_REG_ATTN]
static inline fapi2::buffer<uint64_t>& SET_ASSIST_INTERRUPT_REG_ATTN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.setBit<ASSIST_INTERRUPT_REG_ATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access ASSIST_INTERRUPT_REG_ATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ASSIST_INTERRUPT_REG_ATTN]

//>> CLEAR_[ASSIST_INTERRUPT_REG_ATTN]
static inline fapi2::buffer<uint64_t>& CLEAR_ASSIST_INTERRUPT_REG_ATTN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.clearBit<ASSIST_INTERRUPT_REG_ATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access ASSIST_INTERRUPT_REG_ATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[ASSIST_INTERRUPT_REG_ATTN]

//>> GET_[ASSIST_INTERRUPT_REG_ATTN]
static inline fapi2::buffer<uint64_t>& GET_ASSIST_INTERRUPT_REG_ATTN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return i_data.extractToRight<ASSIST_INTERRUPT_REG_ATTN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access ASSIST_INTERRUPT_REG_ATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ASSIST_INTERRUPT_REG_ATTN]

//>> GET_[ASSIST_INTERRUPT_REG_ATTN]
static inline bool GET_ASSIST_INTERRUPT_REG_ATTN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return i_data.getBit<ASSIST_INTERRUPT_REG_ATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access ASSIST_INTERRUPT_REG_ATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ASSIST_INTERRUPT_REG_ATTN]

//>> SET_[ASSIST_INTERRUPT_REG_RECOV]
static inline fapi2::buffer<uint64_t>& SET_ASSIST_INTERRUPT_REG_RECOV(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<ASSIST_INTERRUPT_REG_RECOV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access ASSIST_INTERRUPT_REG_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ASSIST_INTERRUPT_REG_RECOV]

//>> SET_[ASSIST_INTERRUPT_REG_RECOV]
static inline fapi2::buffer<uint64_t>& SET_ASSIST_INTERRUPT_REG_RECOV(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<ASSIST_INTERRUPT_REG_RECOV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access ASSIST_INTERRUPT_REG_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ASSIST_INTERRUPT_REG_RECOV]

//>> SET_[ASSIST_INTERRUPT_REG_RECOV]
static inline fapi2::buffer<uint64_t>& SET_ASSIST_INTERRUPT_REG_RECOV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.setBit<ASSIST_INTERRUPT_REG_RECOV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access ASSIST_INTERRUPT_REG_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ASSIST_INTERRUPT_REG_RECOV]

//>> CLEAR_[ASSIST_INTERRUPT_REG_RECOV]
static inline fapi2::buffer<uint64_t>& CLEAR_ASSIST_INTERRUPT_REG_RECOV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.clearBit<ASSIST_INTERRUPT_REG_RECOV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access ASSIST_INTERRUPT_REG_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[ASSIST_INTERRUPT_REG_RECOV]

//>> GET_[ASSIST_INTERRUPT_REG_RECOV]
static inline fapi2::buffer<uint64_t>& GET_ASSIST_INTERRUPT_REG_RECOV(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return i_data.extractToRight<ASSIST_INTERRUPT_REG_RECOV,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access ASSIST_INTERRUPT_REG_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ASSIST_INTERRUPT_REG_RECOV]

//>> GET_[ASSIST_INTERRUPT_REG_RECOV]
static inline bool GET_ASSIST_INTERRUPT_REG_RECOV(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return i_data.getBit<ASSIST_INTERRUPT_REG_RECOV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access ASSIST_INTERRUPT_REG_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ASSIST_INTERRUPT_REG_RECOV]

//>> SET_[ASSIST_INTERRUPT_REG_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_ASSIST_INTERRUPT_REG_XSTOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<ASSIST_INTERRUPT_REG_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access ASSIST_INTERRUPT_REG_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ASSIST_INTERRUPT_REG_XSTOP]

//>> SET_[ASSIST_INTERRUPT_REG_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_ASSIST_INTERRUPT_REG_XSTOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<ASSIST_INTERRUPT_REG_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access ASSIST_INTERRUPT_REG_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ASSIST_INTERRUPT_REG_XSTOP]

//>> SET_[ASSIST_INTERRUPT_REG_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_ASSIST_INTERRUPT_REG_XSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.setBit<ASSIST_INTERRUPT_REG_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access ASSIST_INTERRUPT_REG_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ASSIST_INTERRUPT_REG_XSTOP]

//>> CLEAR_[ASSIST_INTERRUPT_REG_XSTOP]
static inline fapi2::buffer<uint64_t>& CLEAR_ASSIST_INTERRUPT_REG_XSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.clearBit<ASSIST_INTERRUPT_REG_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access ASSIST_INTERRUPT_REG_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[ASSIST_INTERRUPT_REG_XSTOP]

//>> GET_[ASSIST_INTERRUPT_REG_XSTOP]
static inline fapi2::buffer<uint64_t>& GET_ASSIST_INTERRUPT_REG_XSTOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return i_data.extractToRight<ASSIST_INTERRUPT_REG_XSTOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access ASSIST_INTERRUPT_REG_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ASSIST_INTERRUPT_REG_XSTOP]

//>> GET_[ASSIST_INTERRUPT_REG_XSTOP]
static inline bool GET_ASSIST_INTERRUPT_REG_XSTOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return i_data.getBit<ASSIST_INTERRUPT_REG_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access ASSIST_INTERRUPT_REG_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ASSIST_INTERRUPT_REG_XSTOP]

//>> SET_[ASSIST_INTERRUPT_REG_LXSTOP]
static inline fapi2::buffer<uint64_t>& SET_ASSIST_INTERRUPT_REG_LXSTOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<ASSIST_INTERRUPT_REG_LXSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access ASSIST_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ASSIST_INTERRUPT_REG_LXSTOP]

//>> SET_[ASSIST_INTERRUPT_REG_LXSTOP]
static inline fapi2::buffer<uint64_t>& SET_ASSIST_INTERRUPT_REG_LXSTOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<ASSIST_INTERRUPT_REG_LXSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access ASSIST_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ASSIST_INTERRUPT_REG_LXSTOP]

//>> SET_[ASSIST_INTERRUPT_REG_LXSTOP]
static inline fapi2::buffer<uint64_t>& SET_ASSIST_INTERRUPT_REG_LXSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.setBit<ASSIST_INTERRUPT_REG_LXSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access ASSIST_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ASSIST_INTERRUPT_REG_LXSTOP]

//>> CLEAR_[ASSIST_INTERRUPT_REG_LXSTOP]
static inline fapi2::buffer<uint64_t>& CLEAR_ASSIST_INTERRUPT_REG_LXSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.clearBit<ASSIST_INTERRUPT_REG_LXSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access ASSIST_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[ASSIST_INTERRUPT_REG_LXSTOP]

//>> GET_[ASSIST_INTERRUPT_REG_LXSTOP]
static inline fapi2::buffer<uint64_t>& GET_ASSIST_INTERRUPT_REG_LXSTOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return i_data.extractToRight<ASSIST_INTERRUPT_REG_LXSTOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access ASSIST_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ASSIST_INTERRUPT_REG_LXSTOP]

//>> GET_[ASSIST_INTERRUPT_REG_LXSTOP]
static inline bool GET_ASSIST_INTERRUPT_REG_LXSTOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return i_data.getBit<ASSIST_INTERRUPT_REG_LXSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access ASSIST_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ASSIST_INTERRUPT_REG_LXSTOP]

//>> SET_[ASSIST_INTERRUPT_REG_TYPE4]
static inline fapi2::buffer<uint64_t>& SET_ASSIST_INTERRUPT_REG_TYPE4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<ASSIST_INTERRUPT_REG_TYPE4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access ASSIST_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ASSIST_INTERRUPT_REG_TYPE4]

//>> SET_[ASSIST_INTERRUPT_REG_TYPE4]
static inline fapi2::buffer<uint64_t>& SET_ASSIST_INTERRUPT_REG_TYPE4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<ASSIST_INTERRUPT_REG_TYPE4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access ASSIST_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ASSIST_INTERRUPT_REG_TYPE4]

//>> SET_[ASSIST_INTERRUPT_REG_TYPE4]
static inline fapi2::buffer<uint64_t>& SET_ASSIST_INTERRUPT_REG_TYPE4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.setBit<ASSIST_INTERRUPT_REG_TYPE4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access ASSIST_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ASSIST_INTERRUPT_REG_TYPE4]

//>> CLEAR_[ASSIST_INTERRUPT_REG_TYPE4]
static inline fapi2::buffer<uint64_t>& CLEAR_ASSIST_INTERRUPT_REG_TYPE4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return o_data.clearBit<ASSIST_INTERRUPT_REG_TYPE4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access ASSIST_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[ASSIST_INTERRUPT_REG_TYPE4]

//>> GET_[ASSIST_INTERRUPT_REG_TYPE4]
static inline fapi2::buffer<uint64_t>& GET_ASSIST_INTERRUPT_REG_TYPE4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return i_data.extractToRight<ASSIST_INTERRUPT_REG_TYPE4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access ASSIST_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ASSIST_INTERRUPT_REG_TYPE4]

//>> GET_[ASSIST_INTERRUPT_REG_TYPE4]
static inline bool GET_ASSIST_INTERRUPT_REG_TYPE4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ASSIST_INTERRUPT_REG));
#endif
    return i_data.getBit<ASSIST_INTERRUPT_REG_TYPE4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access ASSIST_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ASSIST_INTERRUPT_REG_TYPE4]

//>> PREP_[EDRAM_STATUS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EDRAM_STATUS(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EDRAM_STATUS;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EDRAM_STATUS]

//>> GET_[EDRAM_STATUS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EDRAM_STATUS(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EDRAM_STATUS;
#endif
    return fapi2::getScom(i_target, EDRAM_STATUS, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EDRAM_STATUS]

//>> PUT_[EDRAM_STATUS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EDRAM_STATUS(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EDRAM_STATUS));
#endif
    return fapi2::putScom(i_target, EDRAM_STATUS, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EDRAM_STATUS]


//>> SET_[EDRAM_STATUS_EDRAM_STAT]
static inline fapi2::buffer<uint64_t>& SET_EDRAM_STATUS_EDRAM_STAT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EDRAM_STATUS));
#endif
    return o_data.insertFromRight<EDRAM_STATUS_EDRAM_STAT,
           EDRAM_STATUS_EDRAM_STAT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EDRAM_STATUS_EDRAM_STAT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EDRAM_STATUS_EDRAM_STAT]

//>> SET_[EDRAM_STATUS_EDRAM_STAT]
static inline fapi2::buffer<uint64_t>& SET_EDRAM_STATUS_EDRAM_STAT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EDRAM_STATUS));
#endif
    return o_data.insertFromRight<EDRAM_STATUS_EDRAM_STAT,
           EDRAM_STATUS_EDRAM_STAT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EDRAM_STATUS_EDRAM_STAT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EDRAM_STATUS_EDRAM_STAT]

//>> GET_[EDRAM_STATUS_EDRAM_STAT]
static inline fapi2::buffer<uint64_t>& GET_EDRAM_STATUS_EDRAM_STAT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EDRAM_STATUS));
#endif
    return i_data.extractToRight<EDRAM_STATUS_EDRAM_STAT,
           EDRAM_STATUS_EDRAM_STAT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EDRAM_STATUS_EDRAM_STAT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EDRAM_STATUS_EDRAM_STAT]

//>> PREP_[EPS_DBG_TRACE_REG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_DBG_TRACE_REG_0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_TRACE_REG_0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_DBG_TRACE_REG_0]

//>> GET_[EPS_DBG_TRACE_REG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_DBG_TRACE_REG_0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_TRACE_REG_0;
#endif
    return fapi2::getScom(i_target, EPS_DBG_TRACE_REG_0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0]

//>> PUT_[EPS_DBG_TRACE_REG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_DBG_TRACE_REG_0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return fapi2::putScom(i_target, EPS_DBG_TRACE_REG_0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_DBG_TRACE_REG_0]


//>> SET_[EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]

//>> CLEAR_[EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]

//>> GET_[EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]

//>> GET_[EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]
static inline bool GET_EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]

//>> CLEAR_[EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]

//>> GET_[EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]

//>> GET_[EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]
static inline bool GET_EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]

//>> CLEAR_[EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]

//>> GET_[EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]

//>> GET_[EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]
static inline bool GET_EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]

//>> CLEAR_[EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]

//>> GET_[EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]

//>> GET_[EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]
static inline bool GET_EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]

//>> CLEAR_[EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]

//>> GET_[EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]

//>> GET_[EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]
static inline bool GET_EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]

//>> CLEAR_[EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]

//>> GET_[EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]

//>> GET_[EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]
static inline bool GET_EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]

//>> CLEAR_[EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]

//>> GET_[EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]

//>> GET_[EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]
static inline bool GET_EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]

//>> CLEAR_[EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]

//>> GET_[EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]

//>> GET_[EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]
static inline bool GET_EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE]

//>> SET_[EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL]

//>> GET_[EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL]

//>> GET_[EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL]

//>> GET_[EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL]

//>> GET_[EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL]

//>> GET_[EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL]

//>> GET_[EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]

//>> SET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]

//>> SET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]

//>> CLEAR_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]

//>> GET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]

//>> GET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]
static inline bool GET_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP]

//>> SET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]

//>> SET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]

//>> SET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]

//>> CLEAR_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]

//>> GET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]

//>> GET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]
static inline bool GET_EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE]

//>> SET_[EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL]

//>> GET_[EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL]

//>> GET_[EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL]

//>> GET_[EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL,
           EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_DBG_ARM_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_DBG_ARM_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_DBG_ARM_SEL,
           EPS_DBG_TRACE_REG_0_DBG_ARM_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_DBG_ARM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_DBG_ARM_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_DBG_ARM_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_DBG_ARM_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_DBG_ARM_SEL,
           EPS_DBG_TRACE_REG_0_DBG_ARM_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_DBG_ARM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_DBG_ARM_SEL]

//>> GET_[EPS_DBG_TRACE_REG_0_DBG_ARM_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_DBG_ARM_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_DBG_ARM_SEL,
           EPS_DBG_TRACE_REG_0_DBG_ARM_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_DBG_ARM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_DBG_ARM_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL,
           EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL,
           EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL]

//>> GET_[EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL,
           EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL,
           EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL]

//>> SET_[EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL,
           EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL]

//>> GET_[EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_0));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL,
           EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL]

//>> PREP_[L3TRA1_TR0_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA1_TR0_CONFIG_0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR0_CONFIG_0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA1_TR0_CONFIG_0]

//>> GET_[L3TRA1_TR0_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA1_TR0_CONFIG_0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR0_CONFIG_0;
#endif
    return fapi2::getScom(i_target, L3TRA1_TR0_CONFIG_0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_0]

//>> PUT_[L3TRA1_TR0_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA1_TR0_CONFIG_0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_0));
#endif
    return fapi2::putScom(i_target, L3TRA1_TR0_CONFIG_0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA1_TR0_CONFIG_0]


//>> SET_[L3TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_0));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           L3TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> SET_[L3TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_0));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           L3TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> GET_[L3TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_0));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           L3TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> PREP_[L3TRA1_TR1_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA1_TR1_CONFIG_9(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR1_CONFIG_9;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA1_TR1_CONFIG_9]

//>> GET_[L3TRA1_TR1_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA1_TR1_CONFIG_9(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR1_CONFIG_9;
#endif
    return fapi2::getScom(i_target, L3TRA1_TR1_CONFIG_9, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_9]

//>> PUT_[L3TRA1_TR1_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA1_TR1_CONFIG_9(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return fapi2::putScom(i_target, L3TRA1_TR1_CONFIG_9, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA1_TR1_CONFIG_9]


//>> SET_[L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.setBit<L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION]

//>> CLEAR_[L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION]

//>> GET_[L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION]

//>> GET_[L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION]
static inline bool GET_L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return i_data.getBit<L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.setBit<L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> CLEAR_[L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> GET_[L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> GET_[L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline bool GET_L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return i_data.getBit<L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[L3TRA1_TR1_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_MATCHA_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_MATCHA_MUXSEL,
           L3TRA1_TR1_CONFIG_9_MATCHA_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_MATCHA_MUXSEL]

//>> SET_[L3TRA1_TR1_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_MATCHA_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_MATCHA_MUXSEL,
           L3TRA1_TR1_CONFIG_9_MATCHA_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_MATCHA_MUXSEL]

//>> GET_[L3TRA1_TR1_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_9_MATCHA_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_9_MATCHA_MUXSEL,
           L3TRA1_TR1_CONFIG_9_MATCHA_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_9_MATCHA_MUXSEL]

//>> SET_[L3TRA1_TR1_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_MATCHB_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_MATCHB_MUXSEL,
           L3TRA1_TR1_CONFIG_9_MATCHB_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_MATCHB_MUXSEL]

//>> SET_[L3TRA1_TR1_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_MATCHB_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_MATCHB_MUXSEL,
           L3TRA1_TR1_CONFIG_9_MATCHB_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_MATCHB_MUXSEL]

//>> GET_[L3TRA1_TR1_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_9_MATCHB_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_9_MATCHB_MUXSEL,
           L3TRA1_TR1_CONFIG_9_MATCHB_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_9_MATCHB_MUXSEL]

//>> SET_[L3TRA1_TR1_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_MATCHC_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_MATCHC_MUXSEL,
           L3TRA1_TR1_CONFIG_9_MATCHC_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_MATCHC_MUXSEL]

//>> SET_[L3TRA1_TR1_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_MATCHC_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_MATCHC_MUXSEL,
           L3TRA1_TR1_CONFIG_9_MATCHC_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_MATCHC_MUXSEL]

//>> GET_[L3TRA1_TR1_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_9_MATCHC_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_9_MATCHC_MUXSEL,
           L3TRA1_TR1_CONFIG_9_MATCHC_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_9_MATCHC_MUXSEL]

//>> SET_[L3TRA1_TR1_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_MATCHD_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_MATCHD_MUXSEL,
           L3TRA1_TR1_CONFIG_9_MATCHD_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_MATCHD_MUXSEL]

//>> SET_[L3TRA1_TR1_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_MATCHD_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_MATCHD_MUXSEL,
           L3TRA1_TR1_CONFIG_9_MATCHD_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_MATCHD_MUXSEL]

//>> GET_[L3TRA1_TR1_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_9_MATCHD_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_9_MATCHD_MUXSEL,
           L3TRA1_TR1_CONFIG_9_MATCHD_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_9_MATCHD_MUXSEL]

//>> SET_[L3TRA1_TR1_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_TRIG0_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_TRIG0_OR_MASK,
           L3TRA1_TR1_CONFIG_9_TRIG0_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_TRIG0_OR_MASK]

//>> SET_[L3TRA1_TR1_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_TRIG0_OR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_TRIG0_OR_MASK,
           L3TRA1_TR1_CONFIG_9_TRIG0_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_TRIG0_OR_MASK]

//>> GET_[L3TRA1_TR1_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_9_TRIG0_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_9_TRIG0_OR_MASK,
           L3TRA1_TR1_CONFIG_9_TRIG0_OR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_9_TRIG0_OR_MASK]

//>> SET_[L3TRA1_TR1_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_TRIG0_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_TRIG0_AND_MASK,
           L3TRA1_TR1_CONFIG_9_TRIG0_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_TRIG0_AND_MASK]

//>> SET_[L3TRA1_TR1_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_TRIG0_AND_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_TRIG0_AND_MASK,
           L3TRA1_TR1_CONFIG_9_TRIG0_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_TRIG0_AND_MASK]

//>> GET_[L3TRA1_TR1_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_9_TRIG0_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_9_TRIG0_AND_MASK,
           L3TRA1_TR1_CONFIG_9_TRIG0_AND_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_9_TRIG0_AND_MASK]

//>> SET_[L3TRA1_TR1_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_TRIG1_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_TRIG1_OR_MASK,
           L3TRA1_TR1_CONFIG_9_TRIG1_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_TRIG1_OR_MASK]

//>> SET_[L3TRA1_TR1_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_TRIG1_OR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_TRIG1_OR_MASK,
           L3TRA1_TR1_CONFIG_9_TRIG1_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_TRIG1_OR_MASK]

//>> GET_[L3TRA1_TR1_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_9_TRIG1_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_9_TRIG1_OR_MASK,
           L3TRA1_TR1_CONFIG_9_TRIG1_OR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_9_TRIG1_OR_MASK]

//>> SET_[L3TRA1_TR1_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_TRIG1_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_TRIG1_AND_MASK,
           L3TRA1_TR1_CONFIG_9_TRIG1_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_TRIG1_AND_MASK]

//>> SET_[L3TRA1_TR1_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_TRIG1_AND_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_TRIG1_AND_MASK,
           L3TRA1_TR1_CONFIG_9_TRIG1_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_TRIG1_AND_MASK]

//>> GET_[L3TRA1_TR1_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_9_TRIG1_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_9_TRIG1_AND_MASK,
           L3TRA1_TR1_CONFIG_9_TRIG1_AND_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_9_TRIG1_AND_MASK]

//>> SET_[L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.setBit<L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE]

//>> CLEAR_[L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE]

//>> GET_[L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE]

//>> GET_[L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE]
static inline bool GET_L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return i_data.getBit<L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.setBit<L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE]

//>> CLEAR_[L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE]

//>> GET_[L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE]

//>> GET_[L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE]
static inline bool GET_L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return i_data.getBit<L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[L3TRA1_TR1_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_MATCH_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_MATCH_NOT_MODE,
           L3TRA1_TR1_CONFIG_9_MATCH_NOT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_MATCH_NOT_MODE]

//>> SET_[L3TRA1_TR1_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_MATCH_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_MATCH_NOT_MODE,
           L3TRA1_TR1_CONFIG_9_MATCH_NOT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_MATCH_NOT_MODE]

//>> GET_[L3TRA1_TR1_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_9_MATCH_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_9_MATCH_NOT_MODE,
           L3TRA1_TR1_CONFIG_9_MATCH_NOT_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_9_MATCH_NOT_MODE]

//>> SET_[L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.setBit<L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK]

//>> CLEAR_[L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK]

//>> GET_[L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK]

//>> GET_[L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK]
static inline bool GET_L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return i_data.getBit<L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.setBit<L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN]

//>> CLEAR_[L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN]

//>> GET_[L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN]

//>> GET_[L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN]
static inline bool GET_L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return i_data.getBit<L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.setBit<L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP]

//>> CLEAR_[L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP]

//>> GET_[L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP]

//>> GET_[L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP]
static inline bool GET_L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return i_data.getBit<L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.setBit<L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP]

//>> CLEAR_[L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP]

//>> GET_[L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP]

//>> GET_[L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP]
static inline bool GET_L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return i_data.getBit<L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.setBit<L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> CLEAR_[L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> GET_[L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> GET_[L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline bool GET_L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return i_data.getBit<L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[L3TRA1_TR1_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_SPARE_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_SPARE_LT]

//>> SET_[L3TRA1_TR1_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_SPARE_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_9_SPARE_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_SPARE_LT]

//>> SET_[L3TRA1_TR1_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.setBit<L3TRA1_TR1_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_9_SPARE_LT]

//>> CLEAR_[L3TRA1_TR1_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR1_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA1_TR1_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR1_CONFIG_9_SPARE_LT]

//>> GET_[L3TRA1_TR1_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_9_SPARE_LT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_9_SPARE_LT]

//>> GET_[L3TRA1_TR1_CONFIG_9_SPARE_LT]
static inline bool GET_L3TRA1_TR1_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_9));
#endif
    return i_data.getBit<L3TRA1_TR1_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_9_SPARE_LT]

//>> PREP_[L3TRA3_TR1_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA3_TR1_CONFIG_1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA3_TR1_CONFIG_1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA3_TR1_CONFIG_1]

//>> GET_[L3TRA3_TR1_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA3_TR1_CONFIG_1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA3_TR1_CONFIG_1;
#endif
    return fapi2::getScom(i_target, L3TRA3_TR1_CONFIG_1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_1]

//>> PUT_[L3TRA3_TR1_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA3_TR1_CONFIG_1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG_1));
#endif
    return fapi2::putScom(i_target, L3TRA3_TR1_CONFIG_1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA3_TR1_CONFIG_1]


//>> SET_[L3TRA3_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG_1));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           L3TRA3_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> SET_[L3TRA3_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG_1));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           L3TRA3_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> GET_[L3TRA3_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG_1));
#endif
    return i_data.extractToRight<L3TRA3_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           L3TRA3_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> PREP_[SCAN_CAPTUREDR_LONG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SCAN_CAPTUREDR_LONG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCAN_CAPTUREDR_LONG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SCAN_CAPTUREDR_LONG]

//>> GET_[SCAN_CAPTUREDR_LONG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SCAN_CAPTUREDR_LONG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCAN_CAPTUREDR_LONG;
#endif
    return fapi2::getScom(i_target, SCAN_CAPTUREDR_LONG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SCAN_CAPTUREDR_LONG]

//>> PUT_[SCAN_CAPTUREDR_LONG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SCAN_CAPTUREDR_LONG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SCAN_CAPTUREDR_LONG));
#endif
    return fapi2::putScom(i_target, SCAN_CAPTUREDR_LONG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SCAN_CAPTUREDR_LONG]


//>> SET_[SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG]
static inline fapi2::buffer<uint64_t>& SET_SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCAN_CAPTUREDR_LONG));
#endif
    return o_data.insertFromRight<SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG,
           SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG]

//>> SET_[SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG]
static inline fapi2::buffer<uint64_t>& SET_SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCAN_CAPTUREDR_LONG));
#endif
    return o_data.insertFromRight<SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG,
           SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG]

//>> GET_[SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG]
static inline fapi2::buffer<uint64_t>& GET_SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCAN_CAPTUREDR_LONG));
#endif
    return i_data.extractToRight<SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG,
           SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCAN_CAPTUREDR_LONG_SCAN_CAPTUREDR_LONG_REG]

//>> PREP_[XSTOP3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_XSTOP3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = XSTOP3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[XSTOP3]

//>> GET_[XSTOP3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_XSTOP3(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = XSTOP3;
#endif
    return fapi2::getScom(i_target, XSTOP3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[XSTOP3]

//>> PUT_[XSTOP3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_XSTOP3(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return fapi2::putScom(i_target, XSTOP3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[XSTOP3]


//>> SET_[XSTOP3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP3_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_ENABLE]

//>> SET_[XSTOP3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP3_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_ENABLE]

//>> SET_[XSTOP3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP3_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_ENABLE]

//>> CLEAR_[XSTOP3_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP3_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_ENABLE]

//>> GET_[XSTOP3_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP3_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_ENABLE]

//>> GET_[XSTOP3_ENABLE]
static inline bool GET_XSTOP3_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP3_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_ENABLE]

//>> SET_[XSTOP3_WAIT_SNOPA]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_WAIT_SNOPA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_WAIT_SNOPA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP3_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_WAIT_SNOPA]

//>> SET_[XSTOP3_WAIT_SNOPA]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_WAIT_SNOPA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_WAIT_SNOPA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP3_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_WAIT_SNOPA]

//>> SET_[XSTOP3_WAIT_SNOPA]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_WAIT_SNOPA(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_WAIT_SNOPA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP3_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_WAIT_SNOPA]

//>> CLEAR_[XSTOP3_WAIT_SNOPA]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_WAIT_SNOPA(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_WAIT_SNOPA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP3_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_WAIT_SNOPA]

//>> GET_[XSTOP3_WAIT_SNOPA]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_WAIT_SNOPA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_WAIT_SNOPA,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP3_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_WAIT_SNOPA]

//>> GET_[XSTOP3_WAIT_SNOPA]
static inline bool GET_XSTOP3_WAIT_SNOPA(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_WAIT_SNOPA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP3_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_WAIT_SNOPA]

//>> SET_[XSTOP3_TRIGGER_OPCG_GO]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_TRIGGER_OPCG_GO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_TRIGGER_OPCG_GO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP3_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_TRIGGER_OPCG_GO]

//>> SET_[XSTOP3_TRIGGER_OPCG_GO]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_TRIGGER_OPCG_GO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_TRIGGER_OPCG_GO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP3_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_TRIGGER_OPCG_GO]

//>> SET_[XSTOP3_TRIGGER_OPCG_GO]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_TRIGGER_OPCG_GO(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_TRIGGER_OPCG_GO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP3_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_TRIGGER_OPCG_GO]

//>> CLEAR_[XSTOP3_TRIGGER_OPCG_GO]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_TRIGGER_OPCG_GO(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_TRIGGER_OPCG_GO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP3_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_TRIGGER_OPCG_GO]

//>> GET_[XSTOP3_TRIGGER_OPCG_GO]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_TRIGGER_OPCG_GO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_TRIGGER_OPCG_GO,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP3_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_TRIGGER_OPCG_GO]

//>> GET_[XSTOP3_TRIGGER_OPCG_GO]
static inline bool GET_XSTOP3_TRIGGER_OPCG_GO(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_TRIGGER_OPCG_GO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP3_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_TRIGGER_OPCG_GO]

//>> SET_[XSTOP3_WAIT_ALWAYS]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_WAIT_ALWAYS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_WAIT_ALWAYS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP3_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_WAIT_ALWAYS]

//>> SET_[XSTOP3_WAIT_ALWAYS]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_WAIT_ALWAYS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_WAIT_ALWAYS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP3_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_WAIT_ALWAYS]

//>> SET_[XSTOP3_WAIT_ALWAYS]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_WAIT_ALWAYS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_WAIT_ALWAYS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP3_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_WAIT_ALWAYS]

//>> CLEAR_[XSTOP3_WAIT_ALWAYS]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_WAIT_ALWAYS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_WAIT_ALWAYS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP3_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_WAIT_ALWAYS]

//>> GET_[XSTOP3_WAIT_ALWAYS]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_WAIT_ALWAYS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_WAIT_ALWAYS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP3_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_WAIT_ALWAYS]

//>> GET_[XSTOP3_WAIT_ALWAYS]
static inline bool GET_XSTOP3_WAIT_ALWAYS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_WAIT_ALWAYS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP3_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_WAIT_ALWAYS]

//>> SET_[XSTOP3_REGION_PERV]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_PERV(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_PERV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP3_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_PERV]

//>> SET_[XSTOP3_REGION_PERV]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_PERV(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_PERV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP3_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_PERV]

//>> SET_[XSTOP3_REGION_PERV]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_PERV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_REGION_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP3_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_PERV]

//>> CLEAR_[XSTOP3_REGION_PERV]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_REGION_PERV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_REGION_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP3_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_REGION_PERV]

//>> GET_[XSTOP3_REGION_PERV]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_REGION_PERV(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_REGION_PERV,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP3_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_PERV]

//>> GET_[XSTOP3_REGION_PERV]
static inline bool GET_XSTOP3_REGION_PERV(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_REGION_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP3_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_PERV]

//>> SET_[XSTOP3_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP3_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT1]

//>> SET_[XSTOP3_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP3_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT1]

//>> SET_[XSTOP3_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_REGION_UNIT1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP3_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT1]

//>> CLEAR_[XSTOP3_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_REGION_UNIT1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_REGION_UNIT1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP3_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_REGION_UNIT1]

//>> GET_[XSTOP3_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_REGION_UNIT1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_REGION_UNIT1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP3_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT1]

//>> GET_[XSTOP3_REGION_UNIT1]
static inline bool GET_XSTOP3_REGION_UNIT1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_REGION_UNIT1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP3_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT1]

//>> SET_[XSTOP3_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP3_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT2]

//>> SET_[XSTOP3_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP3_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT2]

//>> SET_[XSTOP3_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_REGION_UNIT2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP3_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT2]

//>> CLEAR_[XSTOP3_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_REGION_UNIT2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_REGION_UNIT2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP3_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_REGION_UNIT2]

//>> GET_[XSTOP3_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_REGION_UNIT2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_REGION_UNIT2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP3_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT2]

//>> GET_[XSTOP3_REGION_UNIT2]
static inline bool GET_XSTOP3_REGION_UNIT2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_REGION_UNIT2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP3_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT2]

//>> SET_[XSTOP3_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP3_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT3]

//>> SET_[XSTOP3_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP3_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT3]

//>> SET_[XSTOP3_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_REGION_UNIT3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP3_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT3]

//>> CLEAR_[XSTOP3_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_REGION_UNIT3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_REGION_UNIT3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP3_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_REGION_UNIT3]

//>> GET_[XSTOP3_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_REGION_UNIT3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_REGION_UNIT3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP3_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT3]

//>> GET_[XSTOP3_REGION_UNIT3]
static inline bool GET_XSTOP3_REGION_UNIT3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_REGION_UNIT3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP3_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT3]

//>> SET_[XSTOP3_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP3_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT4]

//>> SET_[XSTOP3_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP3_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT4]

//>> SET_[XSTOP3_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_REGION_UNIT4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP3_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT4]

//>> CLEAR_[XSTOP3_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_REGION_UNIT4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_REGION_UNIT4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP3_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_REGION_UNIT4]

//>> GET_[XSTOP3_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_REGION_UNIT4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_REGION_UNIT4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP3_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT4]

//>> GET_[XSTOP3_REGION_UNIT4]
static inline bool GET_XSTOP3_REGION_UNIT4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_REGION_UNIT4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP3_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT4]

//>> SET_[XSTOP3_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP3_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT5]

//>> SET_[XSTOP3_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP3_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT5]

//>> SET_[XSTOP3_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_REGION_UNIT5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP3_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT5]

//>> CLEAR_[XSTOP3_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_REGION_UNIT5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_REGION_UNIT5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP3_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_REGION_UNIT5]

//>> GET_[XSTOP3_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_REGION_UNIT5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_REGION_UNIT5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP3_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT5]

//>> GET_[XSTOP3_REGION_UNIT5]
static inline bool GET_XSTOP3_REGION_UNIT5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_REGION_UNIT5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP3_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT5]

//>> SET_[XSTOP3_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP3_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT6]

//>> SET_[XSTOP3_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP3_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT6]

//>> SET_[XSTOP3_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_REGION_UNIT6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP3_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT6]

//>> CLEAR_[XSTOP3_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_REGION_UNIT6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_REGION_UNIT6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP3_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_REGION_UNIT6]

//>> GET_[XSTOP3_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_REGION_UNIT6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_REGION_UNIT6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP3_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT6]

//>> GET_[XSTOP3_REGION_UNIT6]
static inline bool GET_XSTOP3_REGION_UNIT6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_REGION_UNIT6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP3_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT6]

//>> SET_[XSTOP3_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP3_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT7]

//>> SET_[XSTOP3_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP3_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT7]

//>> SET_[XSTOP3_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_REGION_UNIT7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP3_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT7]

//>> CLEAR_[XSTOP3_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_REGION_UNIT7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_REGION_UNIT7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP3_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_REGION_UNIT7]

//>> GET_[XSTOP3_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_REGION_UNIT7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_REGION_UNIT7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP3_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT7]

//>> GET_[XSTOP3_REGION_UNIT7]
static inline bool GET_XSTOP3_REGION_UNIT7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_REGION_UNIT7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP3_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT7]

//>> SET_[XSTOP3_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT8(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT8,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP3_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT8]

//>> SET_[XSTOP3_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT8(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT8,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP3_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT8]

//>> SET_[XSTOP3_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT8(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_REGION_UNIT8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP3_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT8]

//>> CLEAR_[XSTOP3_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_REGION_UNIT8(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_REGION_UNIT8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP3_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_REGION_UNIT8]

//>> GET_[XSTOP3_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_REGION_UNIT8(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_REGION_UNIT8,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP3_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT8]

//>> GET_[XSTOP3_REGION_UNIT8]
static inline bool GET_XSTOP3_REGION_UNIT8(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_REGION_UNIT8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP3_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT8]

//>> SET_[XSTOP3_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT9(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT9,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP3_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT9]

//>> SET_[XSTOP3_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT9(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT9,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP3_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT9]

//>> SET_[XSTOP3_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT9(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_REGION_UNIT9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP3_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT9]

//>> CLEAR_[XSTOP3_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_REGION_UNIT9(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_REGION_UNIT9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP3_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_REGION_UNIT9]

//>> GET_[XSTOP3_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_REGION_UNIT9(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_REGION_UNIT9,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP3_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT9]

//>> GET_[XSTOP3_REGION_UNIT9]
static inline bool GET_XSTOP3_REGION_UNIT9(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_REGION_UNIT9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP3_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT9]

//>> SET_[XSTOP3_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT10(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP3_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT10]

//>> SET_[XSTOP3_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP3_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT10]

//>> SET_[XSTOP3_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_REGION_UNIT10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP3_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT10]

//>> CLEAR_[XSTOP3_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_REGION_UNIT10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_REGION_UNIT10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP3_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_REGION_UNIT10]

//>> GET_[XSTOP3_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_REGION_UNIT10(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_REGION_UNIT10,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP3_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT10]

//>> GET_[XSTOP3_REGION_UNIT10]
static inline bool GET_XSTOP3_REGION_UNIT10(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_REGION_UNIT10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP3_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT10]

//>> SET_[XSTOP3_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT11(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP3_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT11]

//>> SET_[XSTOP3_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT11(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP3_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT11]

//>> SET_[XSTOP3_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_REGION_UNIT11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP3_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT11]

//>> CLEAR_[XSTOP3_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_REGION_UNIT11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_REGION_UNIT11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP3_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_REGION_UNIT11]

//>> GET_[XSTOP3_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_REGION_UNIT11(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_REGION_UNIT11,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP3_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT11]

//>> GET_[XSTOP3_REGION_UNIT11]
static inline bool GET_XSTOP3_REGION_UNIT11(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_REGION_UNIT11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP3_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT11]

//>> SET_[XSTOP3_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT12(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP3_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT12]

//>> SET_[XSTOP3_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP3_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT12]

//>> SET_[XSTOP3_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_REGION_UNIT12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP3_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT12]

//>> CLEAR_[XSTOP3_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_REGION_UNIT12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_REGION_UNIT12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP3_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_REGION_UNIT12]

//>> GET_[XSTOP3_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_REGION_UNIT12(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_REGION_UNIT12,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP3_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT12]

//>> GET_[XSTOP3_REGION_UNIT12]
static inline bool GET_XSTOP3_REGION_UNIT12(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_REGION_UNIT12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP3_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT12]

//>> SET_[XSTOP3_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT13(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP3_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT13]

//>> SET_[XSTOP3_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP3_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT13]

//>> SET_[XSTOP3_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_REGION_UNIT13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP3_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT13]

//>> CLEAR_[XSTOP3_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_REGION_UNIT13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_REGION_UNIT13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP3_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_REGION_UNIT13]

//>> GET_[XSTOP3_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_REGION_UNIT13(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_REGION_UNIT13,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP3_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT13]

//>> GET_[XSTOP3_REGION_UNIT13]
static inline bool GET_XSTOP3_REGION_UNIT13(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_REGION_UNIT13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP3_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT13]

//>> SET_[XSTOP3_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT14(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP3_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT14]

//>> SET_[XSTOP3_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_REGION_UNIT14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP3_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT14]

//>> SET_[XSTOP3_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_REGION_UNIT14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.setBit<XSTOP3_REGION_UNIT14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP3_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_REGION_UNIT14]

//>> CLEAR_[XSTOP3_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP3_REGION_UNIT14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.clearBit<XSTOP3_REGION_UNIT14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP3_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP3_REGION_UNIT14]

//>> GET_[XSTOP3_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_REGION_UNIT14(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_REGION_UNIT14,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP3_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT14]

//>> GET_[XSTOP3_REGION_UNIT14]
static inline bool GET_XSTOP3_REGION_UNIT14(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.getBit<XSTOP3_REGION_UNIT14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP3_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_REGION_UNIT14]

//>> SET_[XSTOP3_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_WAIT_CYCLES(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_WAIT_CYCLES,
           XSTOP3_WAIT_CYCLES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP3_WAIT_CYCLES chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_WAIT_CYCLES]

//>> SET_[XSTOP3_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_XSTOP3_WAIT_CYCLES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return o_data.insertFromRight<XSTOP3_WAIT_CYCLES,
           XSTOP3_WAIT_CYCLES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP3_WAIT_CYCLES chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP3_WAIT_CYCLES]

//>> GET_[XSTOP3_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& GET_XSTOP3_WAIT_CYCLES(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP3));
#endif
    return i_data.extractToRight<XSTOP3_WAIT_CYCLES,
           XSTOP3_WAIT_CYCLES_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP3_WAIT_CYCLES chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP3_WAIT_CYCLES]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
