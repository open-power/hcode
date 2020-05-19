/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/perv/reg00016_unused.H $      */
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

#ifndef __PERV_REG00016_H_UNUSED__
#define __PERV_REG00016_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace perv
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_1 chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_1 chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_1 chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_2 chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_2 chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MEASURE_HISTORY_2 chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CACHE_SYNC_DONE_CACHE_SYNC_DONE_STICK chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1 chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1 chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1 chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC_VALUE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC_VALUE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC_VALUE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
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
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
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
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
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
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0 chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0 chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0 chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1 chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1 chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1 chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2 chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2 chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2 chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3 chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3 chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3 chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]

//>> PREP_[DPLL_CNTL_MISC_REGS_PFET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DPLL_CNTL_MISC_REGS_PFET(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DPLL_CNTL_MISC_REGS_PFET;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DPLL_CNTL_MISC_REGS_PFET]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DPLL_CNTL_MISC_REGS_PFET(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DPLL_CNTL_MISC_REGS_PFET;
#endif
    return fapi2::getScom(i_target, DPLL_CNTL_MISC_REGS_PFET, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET]

//>> PUT_[DPLL_CNTL_MISC_REGS_PFET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DPLL_CNTL_MISC_REGS_PFET(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return fapi2::putScom(i_target, DPLL_CNTL_MISC_REGS_PFET, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DPLL_CNTL_MISC_REGS_PFET]


//>> SET_[DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.setBit<DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> CLEAR_[DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.clearBit<DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& GET_DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.extractToRight<DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline bool GET_DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_DISABLED_SENSE_OUT_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.getBit<DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.setBit<DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> CLEAR_[DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.clearBit<DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& GET_DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.extractToRight<DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline bool GET_DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_ENABLED_SENSE_OUT_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.getBit<DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_EMO0_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.setBit<DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> CLEAR_[DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.clearBit<DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& GET_DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.extractToRight<DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline bool GET_DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_DISABLED_SENSE_OUT_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.getBit<DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.setBit<DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> CLEAR_[DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.clearBit<DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& GET_DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.extractToRight<DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline bool GET_DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_ENABLED_SENSE_OUT_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.getBit<DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_EMO1_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.setBit<DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> CLEAR_[DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.clearBit<DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& GET_DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.extractToRight<DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline bool GET_DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_DISABLED_SENSE_OUT_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.getBit<DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.setBit<DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> CLEAR_[DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.clearBit<DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& GET_DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.extractToRight<DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline bool GET_DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_ENABLED_SENSE_OUT_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.getBit<DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_EMO2_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.setBit<DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> CLEAR_[DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.clearBit<DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& GET_DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.extractToRight<DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline bool GET_DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_DISABLED_SENSE_OUT_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.getBit<DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.setBit<DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> CLEAR_[DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.clearBit<DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& GET_DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.extractToRight<DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline bool GET_DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_ENABLED_SENSE_OUT_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.getBit<DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_EMO3_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.setBit<DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> CLEAR_[DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.clearBit<DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& GET_DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.extractToRight<DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline bool GET_DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_DISABLED_SENSE_OUT_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.getBit<DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.setBit<DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> CLEAR_[DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.clearBit<DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& GET_DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.extractToRight<DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline bool GET_DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_ENABLED_SENSE_OUT_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.getBit<DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_PAU0_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.setBit<DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> CLEAR_[DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.clearBit<DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& GET_DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.extractToRight<DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline bool GET_DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_DISABLED_SENSE_OUT_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.getBit<DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.setBit<DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> CLEAR_[DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.clearBit<DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& GET_DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.extractToRight<DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline bool GET_DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_ENABLED_SENSE_OUT_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.getBit<DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_PAU3_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.setBit<DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> CLEAR_[DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.clearBit<DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& GET_DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.extractToRight<DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline bool GET_DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_DISABLED_SENSE_OUT_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.getBit<DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.setBit<DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> CLEAR_[DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.clearBit<DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& GET_DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.extractToRight<DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline bool GET_DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_ENABLED_SENSE_OUT_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.getBit<DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_PAU4_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.setBit<DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> CLEAR_[DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.clearBit<DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& GET_DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.extractToRight<DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline bool GET_DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_DISABLED_SENSE_OUT_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.getBit<DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.setBit<DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> CLEAR_[DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.clearBit<DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& GET_DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.extractToRight<DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline bool GET_DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_ENABLED_SENSE_OUT_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.getBit<DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_PAU5_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.setBit<DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> CLEAR_[DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.clearBit<DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& GET_DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.extractToRight<DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline bool GET_DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_DISABLED_SENSE_OUT_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.getBit<DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.setBit<DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> CLEAR_[DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.clearBit<DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& GET_DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.extractToRight<DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline bool GET_DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_ENABLED_SENSE_OUT_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.getBit<DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_PAU6_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.setBit<DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> CLEAR_[DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.clearBit<DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& GET_DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.extractToRight<DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline bool GET_DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_DISABLED_SENSE_OUT_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.getBit<DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.setBit<DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> CLEAR_[DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.clearBit<DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& GET_DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.extractToRight<DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline bool GET_DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_ENABLED_SENSE_OUT_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.getBit<DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_PAU7_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.setBit<DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> CLEAR_[DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.clearBit<DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& GET_DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.extractToRight<DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline bool GET_DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_DISABLED_SENSE_OUT_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.getBit<DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.setBit<DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> CLEAR_[DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.clearBit<DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& GET_DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.extractToRight<DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline bool GET_DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_ENABLED_SENSE_OUT_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.getBit<DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_PCIE0_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.setBit<DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> CLEAR_[DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.clearBit<DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& GET_DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.extractToRight<DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline bool GET_DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_DISABLED_SENSE_OUT_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.getBit<DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.setBit<DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> CLEAR_[DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.clearBit<DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& GET_DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.extractToRight<DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline bool GET_DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_ENABLED_SENSE_OUT_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.getBit<DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_PCIE1_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.setBit<DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> CLEAR_[DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.clearBit<DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& GET_DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_DISABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.extractToRight<DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_DISABLED_SENSE_OUT_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_DISABLED_SENSE_OUT_DC]
static inline bool GET_DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_DISABLED_SENSE_OUT_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.getBit<DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_DISABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_DISABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_DISABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.insertFromRight<DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> SET_[DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& SET_DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.setBit<DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> CLEAR_[DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return o_data.clearBit<DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline fapi2::buffer<uint64_t>& GET_DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_ENABLED_SENSE_OUT_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.extractToRight<DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_ENABLED_SENSE_OUT_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> GET_[DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_ENABLED_SENSE_OUT_DC]
static inline bool GET_DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_ENABLED_SENSE_OUT_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DPLL_CNTL_MISC_REGS_PFET));
#endif
    return i_data.getBit<DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_ENABLED_SENSE_OUT_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_ENABLED_SENSE_OUT_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DPLL_CNTL_MISC_REGS_PFET_NMMU_VDD_PFETS_ENABLED_SENSE_OUT_DC]

//>> PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_0_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2B_DATA_AREA_0_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_0_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_0_RO]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_0_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_0_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_0_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_0_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_0_RO]

//>> PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_0_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2B_DATA_AREA_0_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_0_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_0_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_0_RO]


//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_2]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_2]
static inline fapi2::buffer<uint64_t>&
CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_2]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_2]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_2(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_2]

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
    FAPI_ERR("0:scom_perv Invalid dial access ASSIST_INTERRUPT_REG_ATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_perv Invalid dial access ASSIST_INTERRUPT_REG_ATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:scom_perv Invalid dial access ASSIST_INTERRUPT_REG_ATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:scom_perv Invalid dial access ASSIST_INTERRUPT_REG_ATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_perv Invalid dial access ASSIST_INTERRUPT_REG_ATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:scom_perv Invalid dial access ASSIST_INTERRUPT_REG_ATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_perv Invalid dial access ASSIST_INTERRUPT_REG_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_perv Invalid dial access ASSIST_INTERRUPT_REG_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:scom_perv Invalid dial access ASSIST_INTERRUPT_REG_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:scom_perv Invalid dial access ASSIST_INTERRUPT_REG_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_perv Invalid dial access ASSIST_INTERRUPT_REG_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:scom_perv Invalid dial access ASSIST_INTERRUPT_REG_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_perv Invalid dial access ASSIST_INTERRUPT_REG_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_perv Invalid dial access ASSIST_INTERRUPT_REG_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:scom_perv Invalid dial access ASSIST_INTERRUPT_REG_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:scom_perv Invalid dial access ASSIST_INTERRUPT_REG_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_perv Invalid dial access ASSIST_INTERRUPT_REG_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:scom_perv Invalid dial access ASSIST_INTERRUPT_REG_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_perv Invalid dial access ASSIST_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_perv Invalid dial access ASSIST_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:scom_perv Invalid dial access ASSIST_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:scom_perv Invalid dial access ASSIST_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_perv Invalid dial access ASSIST_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:scom_perv Invalid dial access ASSIST_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_perv Invalid dial access ASSIST_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_perv Invalid dial access ASSIST_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:scom_perv Invalid dial access ASSIST_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:scom_perv Invalid dial access ASSIST_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_perv Invalid dial access ASSIST_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:scom_perv Invalid dial access ASSIST_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_perv Invalid dial access EDRAM_STATUS_EDRAM_STAT chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_perv Invalid dial access EDRAM_STATUS_EDRAM_STAT chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_perv Invalid dial access EDRAM_STATUS_EDRAM_STAT chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST1_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST2_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST3_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST4_COND3_ENABLE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST1_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST2_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST3_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST4_SLOW_LFSR_MODE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST1_CONDITION1_TRIG_SEL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST1_CONDITION2_TRIG_SEL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST1_C2_TIMEOUT_TRIG_SEL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST2_CONDITION1_TRIG_SEL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST2_CONDITION2_TRIG_SEL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_INST2_C2_TIMEOUT_TRIG_SEL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
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
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
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
    FAPI_ERR("2:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
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
    FAPI_ERR("3:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
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
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
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
    FAPI_ERR("5:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
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
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_EXT_TRIG_ON_FREEZE chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_CORE_RAS0_TRIG_SEL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_CORE_RAS1_TRIG_SEL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_PC_TP_TRIG_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_DBG_ARM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_DBG_ARM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_DBG_ARM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
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
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
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
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_TRIG0_LEVEL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
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
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
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
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
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
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_0_TRIG1_LEVEL_SEL]

//>> PREP_[EPS_PSC_PSCOM_ERROR_MASK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_PSC_PSCOM_ERROR_MASK(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_PSC_PSCOM_ERROR_MASK;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_PSC_PSCOM_ERROR_MASK]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_PSC_PSCOM_ERROR_MASK(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_PSC_PSCOM_ERROR_MASK;
#endif
    return fapi2::getScom(i_target, EPS_PSC_PSCOM_ERROR_MASK, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK]

//>> PUT_[EPS_PSC_PSCOM_ERROR_MASK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_PSC_PSCOM_ERROR_MASK(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return fapi2::putScom(i_target, EPS_PSC_PSCOM_ERROR_MASK, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_PSC_PSCOM_ERROR_MASK]


//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_WDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_ADDRESS_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_WDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_DL_RETURN_P0_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_UL_RDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_UL_P0_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_PARITY_ERROR_ON_P2S_MACHINE]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_LOCK_ERR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_PSCOM_PARALLEL_ADDR_INVALID]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_PCB_COMMAND_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_GENERAL_TIMEOUT]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> SET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> GET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline bool GET_EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_ERROR_MASK));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_ERROR_MASK_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> PREP_[EPS_PSC_WRITE_PROTECT_RINGS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_PSC_WRITE_PROTECT_RINGS_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_PSC_WRITE_PROTECT_RINGS_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_PSC_WRITE_PROTECT_RINGS_REG]

//>> GET_[EPS_PSC_WRITE_PROTECT_RINGS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_PSC_WRITE_PROTECT_RINGS_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_PSC_WRITE_PROTECT_RINGS_REG;
#endif
    return fapi2::getScom(i_target, EPS_PSC_WRITE_PROTECT_RINGS_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_PSC_WRITE_PROTECT_RINGS_REG]

//>> PUT_[EPS_PSC_WRITE_PROTECT_RINGS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_PSC_WRITE_PROTECT_RINGS_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_RINGS_REG));
#endif
    return fapi2::putScom(i_target, EPS_PSC_WRITE_PROTECT_RINGS_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_PSC_WRITE_PROTECT_RINGS_REG]


//>> SET_[EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_RINGS_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS,
           EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS]

//>> SET_[EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_RINGS_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS,
           EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS]

//>> GET_[EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_RINGS_REG));
#endif
    return i_data.extractToRight<EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS,
           EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS]

//>> PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI]

//>> GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_11_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_11_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_11_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1A_DATA_AREA_11_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_11_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_11_RW]

//>> GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_11_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1A_DATA_AREA_11_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_11_RW;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_11_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_11_RW]

//>> PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_11_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1A_DATA_AREA_11_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_11_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_11_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_11_RW]


//>> SET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_11_MDA_M1A_DATA_AREA_11]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1A_DATA_AREA_11_MDA_M1A_DATA_AREA_11(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_11_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1A_DATA_AREA_11_MDA_M1A_DATA_AREA_11,
           FSXCOMP_FSXLOG_M1A_DATA_AREA_11_MDA_M1A_DATA_AREA_11_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1A_DATA_AREA_11_MDA_M1A_DATA_AREA_11 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_11_MDA_M1A_DATA_AREA_11]

//>> SET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_11_MDA_M1A_DATA_AREA_11]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1A_DATA_AREA_11_MDA_M1A_DATA_AREA_11(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_11_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1A_DATA_AREA_11_MDA_M1A_DATA_AREA_11,
           FSXCOMP_FSXLOG_M1A_DATA_AREA_11_MDA_M1A_DATA_AREA_11_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1A_DATA_AREA_11_MDA_M1A_DATA_AREA_11 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_11_MDA_M1A_DATA_AREA_11]

//>> GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_11_MDA_M1A_DATA_AREA_11]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M1A_DATA_AREA_11_MDA_M1A_DATA_AREA_11(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_11_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_11_RW));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M1A_DATA_AREA_11_MDA_M1A_DATA_AREA_11,
           FSXCOMP_FSXLOG_M1A_DATA_AREA_11_MDA_M1A_DATA_AREA_11_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1A_DATA_AREA_11_MDA_M1A_DATA_AREA_11 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_11_MDA_M1A_DATA_AREA_11]

//>> PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI]

//>> GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_6_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_6_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_6_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1A_DATA_AREA_6_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_6_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_6_RW]

//>> GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_6_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1A_DATA_AREA_6_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_6_RW;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_6_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_6_RW]

//>> PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_6_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1A_DATA_AREA_6_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_6_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_6_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_6_RW]


//>> SET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_6_MDA_M1A_DATA_AREA_6]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1A_DATA_AREA_6_MDA_M1A_DATA_AREA_6(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_6_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1A_DATA_AREA_6_MDA_M1A_DATA_AREA_6,
           FSXCOMP_FSXLOG_M1A_DATA_AREA_6_MDA_M1A_DATA_AREA_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1A_DATA_AREA_6_MDA_M1A_DATA_AREA_6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_6_MDA_M1A_DATA_AREA_6]

//>> SET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_6_MDA_M1A_DATA_AREA_6]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1A_DATA_AREA_6_MDA_M1A_DATA_AREA_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_6_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1A_DATA_AREA_6_MDA_M1A_DATA_AREA_6,
           FSXCOMP_FSXLOG_M1A_DATA_AREA_6_MDA_M1A_DATA_AREA_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1A_DATA_AREA_6_MDA_M1A_DATA_AREA_6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_6_MDA_M1A_DATA_AREA_6]

//>> GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_6_MDA_M1A_DATA_AREA_6]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M1A_DATA_AREA_6_MDA_M1A_DATA_AREA_6(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_6_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_6_RW));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M1A_DATA_AREA_6_MDA_M1A_DATA_AREA_6,
           FSXCOMP_FSXLOG_M1A_DATA_AREA_6_MDA_M1A_DATA_AREA_6_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1A_DATA_AREA_6_MDA_M1A_DATA_AREA_6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_6_MDA_M1A_DATA_AREA_6]

//>> PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_15_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_15_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_15_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2A_DATA_AREA_15_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_15_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_15_RW]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_15_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_15_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_15_RW;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_15_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_15_RW]

//>> PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_15_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2A_DATA_AREA_15_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_15_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_15_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_15_RW]


//>> SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_15_MDA_M2A_DATA_AREA_15]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2A_DATA_AREA_15_MDA_M2A_DATA_AREA_15(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_15_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2A_DATA_AREA_15_MDA_M2A_DATA_AREA_15,
           FSXCOMP_FSXLOG_M2A_DATA_AREA_15_MDA_M2A_DATA_AREA_15_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2A_DATA_AREA_15_MDA_M2A_DATA_AREA_15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_15_MDA_M2A_DATA_AREA_15]

//>> SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_15_MDA_M2A_DATA_AREA_15]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2A_DATA_AREA_15_MDA_M2A_DATA_AREA_15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_15_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2A_DATA_AREA_15_MDA_M2A_DATA_AREA_15,
           FSXCOMP_FSXLOG_M2A_DATA_AREA_15_MDA_M2A_DATA_AREA_15_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2A_DATA_AREA_15_MDA_M2A_DATA_AREA_15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_15_MDA_M2A_DATA_AREA_15]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_15_MDA_M2A_DATA_AREA_15]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_15_MDA_M2A_DATA_AREA_15(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_15_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_15_RW));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M2A_DATA_AREA_15_MDA_M2A_DATA_AREA_15,
           FSXCOMP_FSXLOG_M2A_DATA_AREA_15_MDA_M2A_DATA_AREA_15_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2A_DATA_AREA_15_MDA_M2A_DATA_AREA_15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_15_MDA_M2A_DATA_AREA_15]

//>> PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_0_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_0_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI_BYTE]

//>> SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_0_MDA_M2B_DATA_AREA_0]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2B_DATA_AREA_0_MDA_M2B_DATA_AREA_0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_0_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2B_DATA_AREA_0_MDA_M2B_DATA_AREA_0,
           FSXCOMP_FSXLOG_M2B_DATA_AREA_0_MDA_M2B_DATA_AREA_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2B_DATA_AREA_0_MDA_M2B_DATA_AREA_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_0_MDA_M2B_DATA_AREA_0]

//>> SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_0_MDA_M2B_DATA_AREA_0]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2B_DATA_AREA_0_MDA_M2B_DATA_AREA_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_0_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2B_DATA_AREA_0_MDA_M2B_DATA_AREA_0,
           FSXCOMP_FSXLOG_M2B_DATA_AREA_0_MDA_M2B_DATA_AREA_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2B_DATA_AREA_0_MDA_M2B_DATA_AREA_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_0_MDA_M2B_DATA_AREA_0]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_0_MDA_M2B_DATA_AREA_0]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_0_MDA_M2B_DATA_AREA_0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_0_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_0_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M2B_DATA_AREA_0_MDA_M2B_DATA_AREA_0,
           FSXCOMP_FSXLOG_M2B_DATA_AREA_0_MDA_M2B_DATA_AREA_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2B_DATA_AREA_0_MDA_M2B_DATA_AREA_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_0_MDA_M2B_DATA_AREA_0]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_RW(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_RW]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_RW(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_RW;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_RW]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_RW(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_RW]


//>> SET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_M1HC2A_MAILBOX_1_HEADER_COMMAND_2_A]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_M1HC2A_MAILBOX_1_HEADER_COMMAND_2_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_M1HC2A_MAILBOX_1_HEADER_COMMAND_2_A,
           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_M1HC2A_MAILBOX_1_HEADER_COMMAND_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_M1HC2A_MAILBOX_1_HEADER_COMMAND_2_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_M1HC2A_MAILBOX_1_HEADER_COMMAND_2_A]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_M1HC2A_MAILBOX_1_HEADER_COMMAND_2_A]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_M1HC2A_MAILBOX_1_HEADER_COMMAND_2_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_M1HC2A_MAILBOX_1_HEADER_COMMAND_2_A,
           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_M1HC2A_MAILBOX_1_HEADER_COMMAND_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_M1HC2A_MAILBOX_1_HEADER_COMMAND_2_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_M1HC2A_MAILBOX_1_HEADER_COMMAND_2_A]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_M1HC2A_MAILBOX_1_HEADER_COMMAND_2_A]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_M1HC2A_MAILBOX_1_HEADER_COMMAND_2_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_RW));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_M1HC2A_MAILBOX_1_HEADER_COMMAND_2_A,
           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_M1HC2A_MAILBOX_1_HEADER_COMMAND_2_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_M1HC2A_MAILBOX_1_HEADER_COMMAND_2_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_A_M1HC2A_MAILBOX_1_HEADER_COMMAND_2_A]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_RO(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_RO]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_RO]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_RO]


//>> SET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_M2HC2B_MAILBOX_2_HEADER_COMMAND_B]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_M2HC2B_MAILBOX_2_HEADER_COMMAND_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_M2HC2B_MAILBOX_2_HEADER_COMMAND_B,
           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_M2HC2B_MAILBOX_2_HEADER_COMMAND_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_M2HC2B_MAILBOX_2_HEADER_COMMAND_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_M2HC2B_MAILBOX_2_HEADER_COMMAND_B]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_M2HC2B_MAILBOX_2_HEADER_COMMAND_B]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_M2HC2B_MAILBOX_2_HEADER_COMMAND_B(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_M2HC2B_MAILBOX_2_HEADER_COMMAND_B,
           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_M2HC2B_MAILBOX_2_HEADER_COMMAND_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_M2HC2B_MAILBOX_2_HEADER_COMMAND_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_M2HC2B_MAILBOX_2_HEADER_COMMAND_B]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_M2HC2B_MAILBOX_2_HEADER_COMMAND_B]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_M2HC2B_MAILBOX_2_HEADER_COMMAND_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_M2HC2B_MAILBOX_2_HEADER_COMMAND_B,
           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_M2HC2B_MAILBOX_2_HEADER_COMMAND_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_M2HC2B_MAILBOX_2_HEADER_COMMAND_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_B_M2HC2B_MAILBOX_2_HEADER_COMMAND_B]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO]


//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_1]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_1]
static inline fapi2::buffer<uint64_t>&
CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_1]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_1]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_1(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1]
static inline fapi2::buffer<uint64_t>&
CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1]
static inline fapi2::buffer<uint64_t>&
CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_1]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_1]
static inline fapi2::buffer<uint64_t>&
CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_1]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_1]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_1(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_LBUS_SLAVE_B_RAM_PARITY_ERROR_DETECTED_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_1,
           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_1,
           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_1]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_1,
           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_1]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_1]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_1]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_1]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_1(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_2]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_2]
static inline fapi2::buffer<uint64_t>&
CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_2]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_2]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_2(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ILLEGAL_OPERATION_ATTEMPTED_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2]
static inline fapi2::buffer<uint64_t>&
CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2]
static inline fapi2::buffer<uint64_t>&
CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_2,
           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_2,
           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_2]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_2,
           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_ADDRESS_OF_LBUS_PARITY_ERROR_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_2]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_2]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_2(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_2]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_2]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_2]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_2]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_2]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_2(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_A_DOORBELL_ERROR_STATUS_CLEAR_STATUS_2]

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
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> PREP_[OTPC_M_MEASURE_REG6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_OTPC_M_MEASURE_REG6(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = OTPC_M_MEASURE_REG6;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[OTPC_M_MEASURE_REG6]

//>> GET_[OTPC_M_MEASURE_REG6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_OTPC_M_MEASURE_REG6(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = OTPC_M_MEASURE_REG6;
#endif
    return fapi2::getScom(i_target, OTPC_M_MEASURE_REG6, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[OTPC_M_MEASURE_REG6]

//>> PUT_[OTPC_M_MEASURE_REG6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_OTPC_M_MEASURE_REG6(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG6));
#endif
    return fapi2::putScom(i_target, OTPC_M_MEASURE_REG6, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[OTPC_M_MEASURE_REG6]


//>> SET_[OTPC_M_MEASURE_REG6_SEEPROM_MEASUREMENT6_DATA]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_MEASURE_REG6_SEEPROM_MEASUREMENT6_DATA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG6));
#endif
    return o_data.insertFromRight<OTPC_M_MEASURE_REG6_SEEPROM_MEASUREMENT6_DATA,
           OTPC_M_MEASURE_REG6_SEEPROM_MEASUREMENT6_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_MEASURE_REG6_SEEPROM_MEASUREMENT6_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_MEASURE_REG6_SEEPROM_MEASUREMENT6_DATA]

//>> SET_[OTPC_M_MEASURE_REG6_SEEPROM_MEASUREMENT6_DATA]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_MEASURE_REG6_SEEPROM_MEASUREMENT6_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG6));
#endif
    return o_data.insertFromRight<OTPC_M_MEASURE_REG6_SEEPROM_MEASUREMENT6_DATA,
           OTPC_M_MEASURE_REG6_SEEPROM_MEASUREMENT6_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_MEASURE_REG6_SEEPROM_MEASUREMENT6_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_MEASURE_REG6_SEEPROM_MEASUREMENT6_DATA]

//>> GET_[OTPC_M_MEASURE_REG6_SEEPROM_MEASUREMENT6_DATA]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_MEASURE_REG6_SEEPROM_MEASUREMENT6_DATA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG6));
#endif
    return i_data.extractToRight<OTPC_M_MEASURE_REG6_SEEPROM_MEASUREMENT6_DATA,
           OTPC_M_MEASURE_REG6_SEEPROM_MEASUREMENT6_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_MEASURE_REG6_SEEPROM_MEASUREMENT6_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_MEASURE_REG6_SEEPROM_MEASUREMENT6_DATA]

//>> PREP_[OTPC_M_STATUS_REGISTER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_OTPC_M_STATUS_REGISTER(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = OTPC_M_STATUS_REGISTER;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[OTPC_M_STATUS_REGISTER]

//>> GET_[OTPC_M_STATUS_REGISTER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_OTPC_M_STATUS_REGISTER(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = OTPC_M_STATUS_REGISTER;
#endif
    return fapi2::getScom(i_target, OTPC_M_STATUS_REGISTER, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[OTPC_M_STATUS_REGISTER]

//>> PUT_[OTPC_M_STATUS_REGISTER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_OTPC_M_STATUS_REGISTER(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return fapi2::putScom(i_target, OTPC_M_STATUS_REGISTER, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[OTPC_M_STATUS_REGISTER]


//>> SET_[OTPC_M_STATUS_REGISTER_ADDR_NVLD]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_ADDR_NVLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.insertFromRight<OTPC_M_STATUS_REGISTER_ADDR_NVLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_ADDR_NVLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_ADDR_NVLD]

//>> SET_[OTPC_M_STATUS_REGISTER_ADDR_NVLD]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_ADDR_NVLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.insertFromRight<OTPC_M_STATUS_REGISTER_ADDR_NVLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_ADDR_NVLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_ADDR_NVLD]

//>> SET_[OTPC_M_STATUS_REGISTER_ADDR_NVLD]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_ADDR_NVLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.setBit<OTPC_M_STATUS_REGISTER_ADDR_NVLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_ADDR_NVLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_ADDR_NVLD]

//>> CLEAR_[OTPC_M_STATUS_REGISTER_ADDR_NVLD]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_STATUS_REGISTER_ADDR_NVLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.clearBit<OTPC_M_STATUS_REGISTER_ADDR_NVLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_ADDR_NVLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_STATUS_REGISTER_ADDR_NVLD]

//>> GET_[OTPC_M_STATUS_REGISTER_ADDR_NVLD]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_STATUS_REGISTER_ADDR_NVLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return i_data.extractToRight<OTPC_M_STATUS_REGISTER_ADDR_NVLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_ADDR_NVLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_STATUS_REGISTER_ADDR_NVLD]

//>> GET_[OTPC_M_STATUS_REGISTER_ADDR_NVLD]
static inline bool GET_OTPC_M_STATUS_REGISTER_ADDR_NVLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return i_data.getBit<OTPC_M_STATUS_REGISTER_ADDR_NVLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_ADDR_NVLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_STATUS_REGISTER_ADDR_NVLD]

//>> SET_[OTPC_M_STATUS_REGISTER_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_WRITE_NVLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.insertFromRight<OTPC_M_STATUS_REGISTER_WRITE_NVLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_WRITE_NVLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_WRITE_NVLD]

//>> SET_[OTPC_M_STATUS_REGISTER_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_WRITE_NVLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.insertFromRight<OTPC_M_STATUS_REGISTER_WRITE_NVLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_WRITE_NVLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_WRITE_NVLD]

//>> SET_[OTPC_M_STATUS_REGISTER_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_WRITE_NVLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.setBit<OTPC_M_STATUS_REGISTER_WRITE_NVLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_WRITE_NVLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_WRITE_NVLD]

//>> CLEAR_[OTPC_M_STATUS_REGISTER_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_STATUS_REGISTER_WRITE_NVLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.clearBit<OTPC_M_STATUS_REGISTER_WRITE_NVLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_WRITE_NVLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_STATUS_REGISTER_WRITE_NVLD]

//>> GET_[OTPC_M_STATUS_REGISTER_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_STATUS_REGISTER_WRITE_NVLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return i_data.extractToRight<OTPC_M_STATUS_REGISTER_WRITE_NVLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_WRITE_NVLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_STATUS_REGISTER_WRITE_NVLD]

//>> GET_[OTPC_M_STATUS_REGISTER_WRITE_NVLD]
static inline bool GET_OTPC_M_STATUS_REGISTER_WRITE_NVLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return i_data.getBit<OTPC_M_STATUS_REGISTER_WRITE_NVLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_WRITE_NVLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_STATUS_REGISTER_WRITE_NVLD]

//>> SET_[OTPC_M_STATUS_REGISTER_READ_NVLD]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_READ_NVLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.insertFromRight<OTPC_M_STATUS_REGISTER_READ_NVLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_READ_NVLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_READ_NVLD]

//>> SET_[OTPC_M_STATUS_REGISTER_READ_NVLD]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_READ_NVLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.insertFromRight<OTPC_M_STATUS_REGISTER_READ_NVLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_READ_NVLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_READ_NVLD]

//>> SET_[OTPC_M_STATUS_REGISTER_READ_NVLD]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_READ_NVLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.setBit<OTPC_M_STATUS_REGISTER_READ_NVLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_READ_NVLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_READ_NVLD]

//>> CLEAR_[OTPC_M_STATUS_REGISTER_READ_NVLD]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_STATUS_REGISTER_READ_NVLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.clearBit<OTPC_M_STATUS_REGISTER_READ_NVLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_READ_NVLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_STATUS_REGISTER_READ_NVLD]

//>> GET_[OTPC_M_STATUS_REGISTER_READ_NVLD]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_STATUS_REGISTER_READ_NVLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return i_data.extractToRight<OTPC_M_STATUS_REGISTER_READ_NVLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_READ_NVLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_STATUS_REGISTER_READ_NVLD]

//>> GET_[OTPC_M_STATUS_REGISTER_READ_NVLD]
static inline bool GET_OTPC_M_STATUS_REGISTER_READ_NVLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return i_data.getBit<OTPC_M_STATUS_REGISTER_READ_NVLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_READ_NVLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_STATUS_REGISTER_READ_NVLD]

//>> SET_[OTPC_M_STATUS_REGISTER_INVLD_CMD_ERR]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_INVLD_CMD_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.insertFromRight<OTPC_M_STATUS_REGISTER_INVLD_CMD_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_INVLD_CMD_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_INVLD_CMD_ERR]

//>> SET_[OTPC_M_STATUS_REGISTER_INVLD_CMD_ERR]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_INVLD_CMD_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.insertFromRight<OTPC_M_STATUS_REGISTER_INVLD_CMD_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_INVLD_CMD_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_INVLD_CMD_ERR]

//>> SET_[OTPC_M_STATUS_REGISTER_INVLD_CMD_ERR]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_INVLD_CMD_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.setBit<OTPC_M_STATUS_REGISTER_INVLD_CMD_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_INVLD_CMD_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_INVLD_CMD_ERR]

//>> CLEAR_[OTPC_M_STATUS_REGISTER_INVLD_CMD_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_STATUS_REGISTER_INVLD_CMD_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.clearBit<OTPC_M_STATUS_REGISTER_INVLD_CMD_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_INVLD_CMD_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_STATUS_REGISTER_INVLD_CMD_ERR]

//>> GET_[OTPC_M_STATUS_REGISTER_INVLD_CMD_ERR]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_STATUS_REGISTER_INVLD_CMD_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return i_data.extractToRight<OTPC_M_STATUS_REGISTER_INVLD_CMD_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_INVLD_CMD_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_STATUS_REGISTER_INVLD_CMD_ERR]

//>> GET_[OTPC_M_STATUS_REGISTER_INVLD_CMD_ERR]
static inline bool GET_OTPC_M_STATUS_REGISTER_INVLD_CMD_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return i_data.getBit<OTPC_M_STATUS_REGISTER_INVLD_CMD_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_INVLD_CMD_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_STATUS_REGISTER_INVLD_CMD_ERR]

//>> SET_[OTPC_M_STATUS_REGISTER_CORR_ERR]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_CORR_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.insertFromRight<OTPC_M_STATUS_REGISTER_CORR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_CORR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_CORR_ERR]

//>> SET_[OTPC_M_STATUS_REGISTER_CORR_ERR]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_CORR_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.insertFromRight<OTPC_M_STATUS_REGISTER_CORR_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_CORR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_CORR_ERR]

//>> SET_[OTPC_M_STATUS_REGISTER_CORR_ERR]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_CORR_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.setBit<OTPC_M_STATUS_REGISTER_CORR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_CORR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_CORR_ERR]

//>> CLEAR_[OTPC_M_STATUS_REGISTER_CORR_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_STATUS_REGISTER_CORR_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.clearBit<OTPC_M_STATUS_REGISTER_CORR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_CORR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_STATUS_REGISTER_CORR_ERR]

//>> GET_[OTPC_M_STATUS_REGISTER_CORR_ERR]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_STATUS_REGISTER_CORR_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return i_data.extractToRight<OTPC_M_STATUS_REGISTER_CORR_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_CORR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_STATUS_REGISTER_CORR_ERR]

//>> GET_[OTPC_M_STATUS_REGISTER_CORR_ERR]
static inline bool GET_OTPC_M_STATUS_REGISTER_CORR_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return i_data.getBit<OTPC_M_STATUS_REGISTER_CORR_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_CORR_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_STATUS_REGISTER_CORR_ERR]

//>> SET_[OTPC_M_STATUS_REGISTER_UNCORR_ERROR]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_UNCORR_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.insertFromRight<OTPC_M_STATUS_REGISTER_UNCORR_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_UNCORR_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_UNCORR_ERROR]

//>> SET_[OTPC_M_STATUS_REGISTER_UNCORR_ERROR]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_UNCORR_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.insertFromRight<OTPC_M_STATUS_REGISTER_UNCORR_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_UNCORR_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_UNCORR_ERROR]

//>> SET_[OTPC_M_STATUS_REGISTER_UNCORR_ERROR]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_UNCORR_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.setBit<OTPC_M_STATUS_REGISTER_UNCORR_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_UNCORR_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_UNCORR_ERROR]

//>> CLEAR_[OTPC_M_STATUS_REGISTER_UNCORR_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_STATUS_REGISTER_UNCORR_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.clearBit<OTPC_M_STATUS_REGISTER_UNCORR_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_UNCORR_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_STATUS_REGISTER_UNCORR_ERROR]

//>> GET_[OTPC_M_STATUS_REGISTER_UNCORR_ERROR]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_STATUS_REGISTER_UNCORR_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return i_data.extractToRight<OTPC_M_STATUS_REGISTER_UNCORR_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_UNCORR_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_STATUS_REGISTER_UNCORR_ERROR]

//>> GET_[OTPC_M_STATUS_REGISTER_UNCORR_ERROR]
static inline bool GET_OTPC_M_STATUS_REGISTER_UNCORR_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return i_data.getBit<OTPC_M_STATUS_REGISTER_UNCORR_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_UNCORR_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_STATUS_REGISTER_UNCORR_ERROR]

//>> SET_[OTPC_M_STATUS_REGISTER_DATA_REG_0_31]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_DATA_REG_0_31(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.insertFromRight<OTPC_M_STATUS_REGISTER_DATA_REG_0_31,
           OTPC_M_STATUS_REGISTER_DATA_REG_0_31_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_DATA_REG_0_31 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_DATA_REG_0_31]

//>> SET_[OTPC_M_STATUS_REGISTER_DATA_REG_0_31]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_DATA_REG_0_31(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.insertFromRight<OTPC_M_STATUS_REGISTER_DATA_REG_0_31,
           OTPC_M_STATUS_REGISTER_DATA_REG_0_31_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_DATA_REG_0_31 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_DATA_REG_0_31]

//>> GET_[OTPC_M_STATUS_REGISTER_DATA_REG_0_31]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_STATUS_REGISTER_DATA_REG_0_31(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return i_data.extractToRight<OTPC_M_STATUS_REGISTER_DATA_REG_0_31,
           OTPC_M_STATUS_REGISTER_DATA_REG_0_31_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_DATA_REG_0_31 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_STATUS_REGISTER_DATA_REG_0_31]

//>> SET_[OTPC_M_STATUS_REGISTER_CTRL_BUSY]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_CTRL_BUSY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.insertFromRight<OTPC_M_STATUS_REGISTER_CTRL_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_CTRL_BUSY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_CTRL_BUSY]

//>> SET_[OTPC_M_STATUS_REGISTER_CTRL_BUSY]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_CTRL_BUSY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.insertFromRight<OTPC_M_STATUS_REGISTER_CTRL_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_CTRL_BUSY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_CTRL_BUSY]

//>> SET_[OTPC_M_STATUS_REGISTER_CTRL_BUSY]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_CTRL_BUSY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.setBit<OTPC_M_STATUS_REGISTER_CTRL_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_CTRL_BUSY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_CTRL_BUSY]

//>> CLEAR_[OTPC_M_STATUS_REGISTER_CTRL_BUSY]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_STATUS_REGISTER_CTRL_BUSY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.clearBit<OTPC_M_STATUS_REGISTER_CTRL_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_CTRL_BUSY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_STATUS_REGISTER_CTRL_BUSY]

//>> GET_[OTPC_M_STATUS_REGISTER_CTRL_BUSY]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_STATUS_REGISTER_CTRL_BUSY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return i_data.extractToRight<OTPC_M_STATUS_REGISTER_CTRL_BUSY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_CTRL_BUSY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_STATUS_REGISTER_CTRL_BUSY]

//>> GET_[OTPC_M_STATUS_REGISTER_CTRL_BUSY]
static inline bool GET_OTPC_M_STATUS_REGISTER_CTRL_BUSY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return i_data.getBit<OTPC_M_STATUS_REGISTER_CTRL_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_CTRL_BUSY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_STATUS_REGISTER_CTRL_BUSY]

//>> SET_[OTPC_M_STATUS_REGISTER_DCOMP_ERR]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_DCOMP_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.insertFromRight<OTPC_M_STATUS_REGISTER_DCOMP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_DCOMP_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_DCOMP_ERR]

//>> SET_[OTPC_M_STATUS_REGISTER_DCOMP_ERR]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_DCOMP_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.insertFromRight<OTPC_M_STATUS_REGISTER_DCOMP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_DCOMP_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_DCOMP_ERR]

//>> SET_[OTPC_M_STATUS_REGISTER_DCOMP_ERR]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_DCOMP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.setBit<OTPC_M_STATUS_REGISTER_DCOMP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_DCOMP_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_DCOMP_ERR]

//>> CLEAR_[OTPC_M_STATUS_REGISTER_DCOMP_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_STATUS_REGISTER_DCOMP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.clearBit<OTPC_M_STATUS_REGISTER_DCOMP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_DCOMP_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_STATUS_REGISTER_DCOMP_ERR]

//>> GET_[OTPC_M_STATUS_REGISTER_DCOMP_ERR]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_STATUS_REGISTER_DCOMP_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return i_data.extractToRight<OTPC_M_STATUS_REGISTER_DCOMP_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_DCOMP_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_STATUS_REGISTER_DCOMP_ERR]

//>> GET_[OTPC_M_STATUS_REGISTER_DCOMP_ERR]
static inline bool GET_OTPC_M_STATUS_REGISTER_DCOMP_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return i_data.getBit<OTPC_M_STATUS_REGISTER_DCOMP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_DCOMP_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_STATUS_REGISTER_DCOMP_ERR]

//>> SET_[OTPC_M_STATUS_REGISTER_INVLD_PRGM_ERR]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_INVLD_PRGM_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.insertFromRight<OTPC_M_STATUS_REGISTER_INVLD_PRGM_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_INVLD_PRGM_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_INVLD_PRGM_ERR]

//>> SET_[OTPC_M_STATUS_REGISTER_INVLD_PRGM_ERR]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_INVLD_PRGM_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.insertFromRight<OTPC_M_STATUS_REGISTER_INVLD_PRGM_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_INVLD_PRGM_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_INVLD_PRGM_ERR]

//>> SET_[OTPC_M_STATUS_REGISTER_INVLD_PRGM_ERR]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_INVLD_PRGM_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.setBit<OTPC_M_STATUS_REGISTER_INVLD_PRGM_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_INVLD_PRGM_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_INVLD_PRGM_ERR]

//>> CLEAR_[OTPC_M_STATUS_REGISTER_INVLD_PRGM_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_STATUS_REGISTER_INVLD_PRGM_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.clearBit<OTPC_M_STATUS_REGISTER_INVLD_PRGM_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_INVLD_PRGM_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_STATUS_REGISTER_INVLD_PRGM_ERR]

//>> GET_[OTPC_M_STATUS_REGISTER_INVLD_PRGM_ERR]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_STATUS_REGISTER_INVLD_PRGM_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return i_data.extractToRight<OTPC_M_STATUS_REGISTER_INVLD_PRGM_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_INVLD_PRGM_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_STATUS_REGISTER_INVLD_PRGM_ERR]

//>> GET_[OTPC_M_STATUS_REGISTER_INVLD_PRGM_ERR]
static inline bool GET_OTPC_M_STATUS_REGISTER_INVLD_PRGM_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return i_data.getBit<OTPC_M_STATUS_REGISTER_INVLD_PRGM_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_INVLD_PRGM_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_STATUS_REGISTER_INVLD_PRGM_ERR]

//>> SET_[OTPC_M_STATUS_REGISTER_COMMAND_COMPLETE]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_COMMAND_COMPLETE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.insertFromRight<OTPC_M_STATUS_REGISTER_COMMAND_COMPLETE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_COMMAND_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_COMMAND_COMPLETE]

//>> SET_[OTPC_M_STATUS_REGISTER_COMMAND_COMPLETE]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_COMMAND_COMPLETE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.insertFromRight<OTPC_M_STATUS_REGISTER_COMMAND_COMPLETE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_COMMAND_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_COMMAND_COMPLETE]

//>> SET_[OTPC_M_STATUS_REGISTER_COMMAND_COMPLETE]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_COMMAND_COMPLETE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.setBit<OTPC_M_STATUS_REGISTER_COMMAND_COMPLETE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_COMMAND_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_COMMAND_COMPLETE]

//>> CLEAR_[OTPC_M_STATUS_REGISTER_COMMAND_COMPLETE]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_STATUS_REGISTER_COMMAND_COMPLETE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.clearBit<OTPC_M_STATUS_REGISTER_COMMAND_COMPLETE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_COMMAND_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_STATUS_REGISTER_COMMAND_COMPLETE]

//>> GET_[OTPC_M_STATUS_REGISTER_COMMAND_COMPLETE]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_STATUS_REGISTER_COMMAND_COMPLETE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return i_data.extractToRight<OTPC_M_STATUS_REGISTER_COMMAND_COMPLETE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_COMMAND_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_STATUS_REGISTER_COMMAND_COMPLETE]

//>> GET_[OTPC_M_STATUS_REGISTER_COMMAND_COMPLETE]
static inline bool GET_OTPC_M_STATUS_REGISTER_COMMAND_COMPLETE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return i_data.getBit<OTPC_M_STATUS_REGISTER_COMMAND_COMPLETE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_COMMAND_COMPLETE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_STATUS_REGISTER_COMMAND_COMPLETE]

//>> SET_[OTPC_M_STATUS_REGISTER_RDWR_OP_BUSY]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_RDWR_OP_BUSY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.insertFromRight<OTPC_M_STATUS_REGISTER_RDWR_OP_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_RDWR_OP_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_RDWR_OP_BUSY]

//>> SET_[OTPC_M_STATUS_REGISTER_RDWR_OP_BUSY]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_RDWR_OP_BUSY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.insertFromRight<OTPC_M_STATUS_REGISTER_RDWR_OP_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_RDWR_OP_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_RDWR_OP_BUSY]

//>> SET_[OTPC_M_STATUS_REGISTER_RDWR_OP_BUSY]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_RDWR_OP_BUSY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.setBit<OTPC_M_STATUS_REGISTER_RDWR_OP_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_RDWR_OP_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_RDWR_OP_BUSY]

//>> CLEAR_[OTPC_M_STATUS_REGISTER_RDWR_OP_BUSY]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_STATUS_REGISTER_RDWR_OP_BUSY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.clearBit<OTPC_M_STATUS_REGISTER_RDWR_OP_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_RDWR_OP_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_STATUS_REGISTER_RDWR_OP_BUSY]

//>> GET_[OTPC_M_STATUS_REGISTER_RDWR_OP_BUSY]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_STATUS_REGISTER_RDWR_OP_BUSY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return i_data.extractToRight<OTPC_M_STATUS_REGISTER_RDWR_OP_BUSY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_RDWR_OP_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_STATUS_REGISTER_RDWR_OP_BUSY]

//>> GET_[OTPC_M_STATUS_REGISTER_RDWR_OP_BUSY]
static inline bool GET_OTPC_M_STATUS_REGISTER_RDWR_OP_BUSY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return i_data.getBit<OTPC_M_STATUS_REGISTER_RDWR_OP_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_RDWR_OP_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_STATUS_REGISTER_RDWR_OP_BUSY]

//>> SET_[OTPC_M_STATUS_REGISTER_DCOMP_ENGINE_BUSY]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_DCOMP_ENGINE_BUSY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.insertFromRight<OTPC_M_STATUS_REGISTER_DCOMP_ENGINE_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_DCOMP_ENGINE_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_DCOMP_ENGINE_BUSY]

//>> SET_[OTPC_M_STATUS_REGISTER_DCOMP_ENGINE_BUSY]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_DCOMP_ENGINE_BUSY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.insertFromRight<OTPC_M_STATUS_REGISTER_DCOMP_ENGINE_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_DCOMP_ENGINE_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_DCOMP_ENGINE_BUSY]

//>> SET_[OTPC_M_STATUS_REGISTER_DCOMP_ENGINE_BUSY]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_DCOMP_ENGINE_BUSY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.setBit<OTPC_M_STATUS_REGISTER_DCOMP_ENGINE_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_DCOMP_ENGINE_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_DCOMP_ENGINE_BUSY]

//>> CLEAR_[OTPC_M_STATUS_REGISTER_DCOMP_ENGINE_BUSY]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_STATUS_REGISTER_DCOMP_ENGINE_BUSY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.clearBit<OTPC_M_STATUS_REGISTER_DCOMP_ENGINE_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_DCOMP_ENGINE_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_STATUS_REGISTER_DCOMP_ENGINE_BUSY]

//>> GET_[OTPC_M_STATUS_REGISTER_DCOMP_ENGINE_BUSY]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_STATUS_REGISTER_DCOMP_ENGINE_BUSY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return i_data.extractToRight<OTPC_M_STATUS_REGISTER_DCOMP_ENGINE_BUSY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_DCOMP_ENGINE_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_STATUS_REGISTER_DCOMP_ENGINE_BUSY]

//>> GET_[OTPC_M_STATUS_REGISTER_DCOMP_ENGINE_BUSY]
static inline bool GET_OTPC_M_STATUS_REGISTER_DCOMP_ENGINE_BUSY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return i_data.getBit<OTPC_M_STATUS_REGISTER_DCOMP_ENGINE_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_DCOMP_ENGINE_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_STATUS_REGISTER_DCOMP_ENGINE_BUSY]

//>> SET_[OTPC_M_STATUS_REGISTER_RD_DATA_COUNT]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_RD_DATA_COUNT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.insertFromRight<OTPC_M_STATUS_REGISTER_RD_DATA_COUNT,
           OTPC_M_STATUS_REGISTER_RD_DATA_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_RD_DATA_COUNT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_RD_DATA_COUNT]

//>> SET_[OTPC_M_STATUS_REGISTER_RD_DATA_COUNT]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_STATUS_REGISTER_RD_DATA_COUNT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return o_data.insertFromRight<OTPC_M_STATUS_REGISTER_RD_DATA_COUNT,
           OTPC_M_STATUS_REGISTER_RD_DATA_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_RD_DATA_COUNT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_STATUS_REGISTER_RD_DATA_COUNT]

//>> GET_[OTPC_M_STATUS_REGISTER_RD_DATA_COUNT]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_STATUS_REGISTER_RD_DATA_COUNT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_STATUS_REGISTER));
#endif
    return i_data.extractToRight<OTPC_M_STATUS_REGISTER_RD_DATA_COUNT,
           OTPC_M_STATUS_REGISTER_RD_DATA_COUNT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_STATUS_REGISTER_RD_DATA_COUNT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_STATUS_REGISTER_RD_DATA_COUNT]

//>> PREP_[REC_ERR_MST1_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_REC_ERR_MST1_REG2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST1_REG2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[REC_ERR_MST1_REG2]

//>> GET_[REC_ERR_MST1_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_REC_ERR_MST1_REG2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST1_REG2;
#endif
    return fapi2::getScom(i_target, REC_ERR_MST1_REG2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[REC_ERR_MST1_REG2]

//>> PUT_[REC_ERR_MST1_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_REC_ERR_MST1_REG2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return fapi2::putScom(i_target, REC_ERR_MST1_REG2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[REC_ERR_MST1_REG2]


//>> SET_[REC_ERR_MST1_REG2_32_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_32_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_32_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG2_32_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_32_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_32_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_32_MST1_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_32_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG2_32_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_32_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_32_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_32_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.setBit<REC_ERR_MST1_REG2_32_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST1_REG2_32_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_32_MST1_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST1_REG2_32_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST1_REG2_32_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST1_REG2_32_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST1_REG2_32_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST1_REG2_32_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG2_32_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG2_32_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG2_32_MST1_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG2_32_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_32_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG2_32_MST1_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST1_REG2_32_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.getBit<REC_ERR_MST1_REG2_32_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST1_REG2_32_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_32_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_32_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_32_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_32_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_32_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG2_32_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_32_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG2_32_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_32_MST1_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_32_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_32_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG2_32_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_32_MST1_ERROR_CODE]

//>> GET_[REC_ERR_MST1_REG2_32_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG2_32_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG2_32_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_32_MST1_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG2_32_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_32_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG2_33_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_33_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_33_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG2_33_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_33_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_33_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_33_MST1_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_33_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG2_33_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_33_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_33_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_33_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.setBit<REC_ERR_MST1_REG2_33_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST1_REG2_33_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_33_MST1_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST1_REG2_33_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST1_REG2_33_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST1_REG2_33_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST1_REG2_33_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST1_REG2_33_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG2_33_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG2_33_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG2_33_MST1_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG2_33_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_33_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG2_33_MST1_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST1_REG2_33_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.getBit<REC_ERR_MST1_REG2_33_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST1_REG2_33_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_33_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_33_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_33_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_33_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_33_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG2_33_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_33_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG2_33_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_33_MST1_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_33_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_33_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG2_33_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_33_MST1_ERROR_CODE]

//>> GET_[REC_ERR_MST1_REG2_33_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG2_33_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG2_33_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_33_MST1_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG2_33_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_33_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG2_34_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_34_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_34_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG2_34_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_34_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_34_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_34_MST1_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_34_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG2_34_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_34_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_34_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_34_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.setBit<REC_ERR_MST1_REG2_34_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST1_REG2_34_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_34_MST1_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST1_REG2_34_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST1_REG2_34_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST1_REG2_34_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST1_REG2_34_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST1_REG2_34_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG2_34_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG2_34_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG2_34_MST1_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG2_34_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_34_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG2_34_MST1_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST1_REG2_34_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.getBit<REC_ERR_MST1_REG2_34_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST1_REG2_34_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_34_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_34_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_34_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_34_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_34_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG2_34_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_34_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG2_34_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_34_MST1_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_34_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_34_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG2_34_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_34_MST1_ERROR_CODE]

//>> GET_[REC_ERR_MST1_REG2_34_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG2_34_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG2_34_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_34_MST1_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG2_34_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_34_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG2_35_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_35_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_35_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG2_35_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_35_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_35_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_35_MST1_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_35_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG2_35_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_35_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_35_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_35_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.setBit<REC_ERR_MST1_REG2_35_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST1_REG2_35_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_35_MST1_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST1_REG2_35_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST1_REG2_35_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST1_REG2_35_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST1_REG2_35_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST1_REG2_35_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG2_35_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG2_35_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG2_35_MST1_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG2_35_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_35_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG2_35_MST1_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST1_REG2_35_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.getBit<REC_ERR_MST1_REG2_35_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST1_REG2_35_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_35_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_35_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_35_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_35_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_35_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG2_35_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_35_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG2_35_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_35_MST1_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_35_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_35_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG2_35_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_35_MST1_ERROR_CODE]

//>> GET_[REC_ERR_MST1_REG2_35_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG2_35_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG2_35_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_35_MST1_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG2_35_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_35_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG2_36_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_36_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_36_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG2_36_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_36_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_36_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_36_MST1_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_36_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG2_36_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_36_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_36_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_36_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.setBit<REC_ERR_MST1_REG2_36_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST1_REG2_36_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_36_MST1_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST1_REG2_36_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST1_REG2_36_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST1_REG2_36_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST1_REG2_36_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST1_REG2_36_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG2_36_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG2_36_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG2_36_MST1_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG2_36_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_36_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG2_36_MST1_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST1_REG2_36_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.getBit<REC_ERR_MST1_REG2_36_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST1_REG2_36_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_36_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_36_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_36_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_36_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_36_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG2_36_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_36_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG2_36_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_36_MST1_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_36_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_36_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG2_36_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_36_MST1_ERROR_CODE]

//>> GET_[REC_ERR_MST1_REG2_36_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG2_36_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG2_36_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_36_MST1_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG2_36_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_36_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG2_37_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_37_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_37_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG2_37_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_37_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_37_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_37_MST1_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_37_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG2_37_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_37_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_37_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_37_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.setBit<REC_ERR_MST1_REG2_37_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST1_REG2_37_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_37_MST1_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST1_REG2_37_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST1_REG2_37_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST1_REG2_37_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST1_REG2_37_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST1_REG2_37_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG2_37_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG2_37_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG2_37_MST1_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG2_37_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_37_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG2_37_MST1_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST1_REG2_37_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.getBit<REC_ERR_MST1_REG2_37_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST1_REG2_37_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_37_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_37_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_37_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_37_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_37_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG2_37_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_37_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG2_37_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_37_MST1_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_37_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_37_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG2_37_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_37_MST1_ERROR_CODE]

//>> GET_[REC_ERR_MST1_REG2_37_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG2_37_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG2_37_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_37_MST1_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG2_37_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_37_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG2_38_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_38_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_38_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG2_38_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_38_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_38_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_38_MST1_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_38_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG2_38_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_38_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_38_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_38_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.setBit<REC_ERR_MST1_REG2_38_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST1_REG2_38_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_38_MST1_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST1_REG2_38_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST1_REG2_38_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST1_REG2_38_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST1_REG2_38_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST1_REG2_38_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG2_38_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG2_38_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG2_38_MST1_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG2_38_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_38_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG2_38_MST1_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST1_REG2_38_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.getBit<REC_ERR_MST1_REG2_38_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST1_REG2_38_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_38_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_38_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_38_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_38_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_38_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG2_38_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_38_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG2_38_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_38_MST1_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_38_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_38_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG2_38_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_38_MST1_ERROR_CODE]

//>> GET_[REC_ERR_MST1_REG2_38_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG2_38_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG2_38_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_38_MST1_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG2_38_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_38_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG2_39_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_39_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_39_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG2_39_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_39_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_39_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_39_MST1_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_39_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG2_39_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_39_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_39_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_39_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.setBit<REC_ERR_MST1_REG2_39_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST1_REG2_39_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_39_MST1_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST1_REG2_39_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST1_REG2_39_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST1_REG2_39_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST1_REG2_39_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST1_REG2_39_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG2_39_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG2_39_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG2_39_MST1_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG2_39_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_39_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG2_39_MST1_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST1_REG2_39_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.getBit<REC_ERR_MST1_REG2_39_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST1_REG2_39_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_39_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_39_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_39_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_39_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_39_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG2_39_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_39_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG2_39_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_39_MST1_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_39_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_39_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG2_39_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_39_MST1_ERROR_CODE]

//>> GET_[REC_ERR_MST1_REG2_39_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG2_39_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG2_39_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_39_MST1_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG2_39_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_39_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG2_40_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_40_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_40_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG2_40_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_40_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_40_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_40_MST1_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_40_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG2_40_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_40_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_40_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_40_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.setBit<REC_ERR_MST1_REG2_40_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST1_REG2_40_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_40_MST1_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST1_REG2_40_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST1_REG2_40_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST1_REG2_40_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST1_REG2_40_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST1_REG2_40_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG2_40_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG2_40_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG2_40_MST1_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG2_40_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_40_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG2_40_MST1_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST1_REG2_40_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.getBit<REC_ERR_MST1_REG2_40_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST1_REG2_40_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_40_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_40_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_40_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_40_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_40_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG2_40_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_40_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG2_40_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_40_MST1_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_40_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_40_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG2_40_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_40_MST1_ERROR_CODE]

//>> GET_[REC_ERR_MST1_REG2_40_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG2_40_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG2_40_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_40_MST1_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG2_40_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_40_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG2_41_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_41_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_41_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG2_41_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_41_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_41_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_41_MST1_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_41_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG2_41_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_41_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_41_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_41_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.setBit<REC_ERR_MST1_REG2_41_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST1_REG2_41_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_41_MST1_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST1_REG2_41_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST1_REG2_41_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST1_REG2_41_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST1_REG2_41_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST1_REG2_41_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG2_41_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG2_41_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG2_41_MST1_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG2_41_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_41_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG2_41_MST1_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST1_REG2_41_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.getBit<REC_ERR_MST1_REG2_41_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST1_REG2_41_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_41_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_41_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_41_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_41_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_41_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG2_41_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_41_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG2_41_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_41_MST1_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_41_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_41_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG2_41_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_41_MST1_ERROR_CODE]

//>> GET_[REC_ERR_MST1_REG2_41_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG2_41_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG2_41_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_41_MST1_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG2_41_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_41_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG2_42_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_42_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_42_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG2_42_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_42_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_42_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_42_MST1_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_42_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG2_42_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_42_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_42_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_42_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.setBit<REC_ERR_MST1_REG2_42_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST1_REG2_42_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_42_MST1_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST1_REG2_42_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST1_REG2_42_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST1_REG2_42_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST1_REG2_42_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST1_REG2_42_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG2_42_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG2_42_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG2_42_MST1_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG2_42_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_42_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG2_42_MST1_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST1_REG2_42_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.getBit<REC_ERR_MST1_REG2_42_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST1_REG2_42_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_42_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_42_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_42_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_42_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_42_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG2_42_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_42_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG2_42_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_42_MST1_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_42_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_42_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG2_42_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_42_MST1_ERROR_CODE]

//>> GET_[REC_ERR_MST1_REG2_42_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG2_42_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG2_42_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_42_MST1_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG2_42_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_42_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG2_43_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_43_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_43_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG2_43_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_43_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_43_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_43_MST1_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_43_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG2_43_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_43_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_43_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_43_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.setBit<REC_ERR_MST1_REG2_43_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST1_REG2_43_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_43_MST1_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST1_REG2_43_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST1_REG2_43_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST1_REG2_43_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST1_REG2_43_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST1_REG2_43_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG2_43_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG2_43_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG2_43_MST1_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG2_43_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_43_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG2_43_MST1_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST1_REG2_43_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.getBit<REC_ERR_MST1_REG2_43_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST1_REG2_43_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_43_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_43_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_43_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_43_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_43_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG2_43_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_43_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG2_43_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_43_MST1_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_43_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_43_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG2_43_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_43_MST1_ERROR_CODE]

//>> GET_[REC_ERR_MST1_REG2_43_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG2_43_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG2_43_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_43_MST1_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG2_43_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_43_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG2_44_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_44_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_44_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG2_44_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_44_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_44_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_44_MST1_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_44_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG2_44_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_44_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_44_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_44_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.setBit<REC_ERR_MST1_REG2_44_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST1_REG2_44_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_44_MST1_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST1_REG2_44_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST1_REG2_44_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST1_REG2_44_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST1_REG2_44_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST1_REG2_44_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG2_44_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG2_44_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG2_44_MST1_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG2_44_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_44_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG2_44_MST1_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST1_REG2_44_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.getBit<REC_ERR_MST1_REG2_44_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST1_REG2_44_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_44_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_44_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_44_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_44_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_44_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG2_44_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_44_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG2_44_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_44_MST1_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_44_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_44_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG2_44_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_44_MST1_ERROR_CODE]

//>> GET_[REC_ERR_MST1_REG2_44_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG2_44_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG2_44_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_44_MST1_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG2_44_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_44_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG2_45_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_45_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_45_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG2_45_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_45_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_45_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_45_MST1_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_45_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG2_45_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_45_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_45_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_45_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.setBit<REC_ERR_MST1_REG2_45_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST1_REG2_45_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_45_MST1_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST1_REG2_45_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST1_REG2_45_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST1_REG2_45_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST1_REG2_45_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST1_REG2_45_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG2_45_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG2_45_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG2_45_MST1_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG2_45_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_45_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG2_45_MST1_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST1_REG2_45_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.getBit<REC_ERR_MST1_REG2_45_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST1_REG2_45_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_45_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_45_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_45_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_45_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_45_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG2_45_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_45_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG2_45_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_45_MST1_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_45_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_45_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG2_45_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_45_MST1_ERROR_CODE]

//>> GET_[REC_ERR_MST1_REG2_45_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG2_45_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG2_45_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_45_MST1_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG2_45_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_45_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG2_46_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_46_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_46_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG2_46_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_46_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_46_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_46_MST1_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_46_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG2_46_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_46_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_46_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_46_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.setBit<REC_ERR_MST1_REG2_46_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST1_REG2_46_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_46_MST1_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST1_REG2_46_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST1_REG2_46_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST1_REG2_46_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST1_REG2_46_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST1_REG2_46_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG2_46_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG2_46_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG2_46_MST1_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG2_46_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_46_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG2_46_MST1_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST1_REG2_46_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.getBit<REC_ERR_MST1_REG2_46_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST1_REG2_46_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_46_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_46_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_46_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_46_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_46_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG2_46_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_46_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG2_46_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_46_MST1_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_46_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_46_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG2_46_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_46_MST1_ERROR_CODE]

//>> GET_[REC_ERR_MST1_REG2_46_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG2_46_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG2_46_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_46_MST1_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG2_46_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_46_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG2_47_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_47_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_47_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG2_47_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_47_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_47_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_47_MST1_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_47_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG2_47_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_47_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_47_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_47_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.setBit<REC_ERR_MST1_REG2_47_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST1_REG2_47_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_47_MST1_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST1_REG2_47_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST1_REG2_47_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST1_REG2_47_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST1_REG2_47_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST1_REG2_47_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG2_47_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG2_47_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG2_47_MST1_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG2_47_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_47_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG2_47_MST1_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST1_REG2_47_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.getBit<REC_ERR_MST1_REG2_47_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST1_REG2_47_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_47_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG2_47_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_47_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_47_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_47_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG2_47_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_47_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG2_47_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG2_47_MST1_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG2_47_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_47_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG2_47_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG2_47_MST1_ERROR_CODE]

//>> GET_[REC_ERR_MST1_REG2_47_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG2_47_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG2_47_MST1_ERROR_CODE,
           REC_ERR_MST1_REG2_47_MST1_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG2_47_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG2_47_MST1_ERROR_CODE]

//>> PREP_[REC_ERR_MST5_REG3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_REC_ERR_MST5_REG3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST5_REG3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[REC_ERR_MST5_REG3]

//>> GET_[REC_ERR_MST5_REG3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_REC_ERR_MST5_REG3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST5_REG3;
#endif
    return fapi2::getScom(i_target, REC_ERR_MST5_REG3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[REC_ERR_MST5_REG3]

//>> PUT_[REC_ERR_MST5_REG3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_REC_ERR_MST5_REG3(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return fapi2::putScom(i_target, REC_ERR_MST5_REG3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[REC_ERR_MST5_REG3]


//>> SET_[REC_ERR_MST5_REG3_48_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_48_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_48_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG3_48_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_48_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_48_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_48_MST5_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_48_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG3_48_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_48_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_48_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_48_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.setBit<REC_ERR_MST5_REG3_48_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST5_REG3_48_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_48_MST5_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST5_REG3_48_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST5_REG3_48_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST5_REG3_48_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST5_REG3_48_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST5_REG3_48_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG3_48_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG3_48_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG3_48_MST5_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG3_48_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_48_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG3_48_MST5_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST5_REG3_48_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.getBit<REC_ERR_MST5_REG3_48_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST5_REG3_48_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_48_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_48_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_48_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_48_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_48_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG3_48_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_48_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG3_48_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_48_MST5_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_48_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_48_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG3_48_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_48_MST5_ERROR_CODE]

//>> GET_[REC_ERR_MST5_REG3_48_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG3_48_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG3_48_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_48_MST5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG3_48_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_48_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG3_49_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_49_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_49_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG3_49_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_49_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_49_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_49_MST5_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_49_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG3_49_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_49_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_49_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_49_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.setBit<REC_ERR_MST5_REG3_49_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST5_REG3_49_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_49_MST5_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST5_REG3_49_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST5_REG3_49_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST5_REG3_49_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST5_REG3_49_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST5_REG3_49_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG3_49_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG3_49_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG3_49_MST5_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG3_49_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_49_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG3_49_MST5_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST5_REG3_49_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.getBit<REC_ERR_MST5_REG3_49_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST5_REG3_49_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_49_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_49_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_49_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_49_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_49_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG3_49_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_49_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG3_49_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_49_MST5_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_49_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_49_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG3_49_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_49_MST5_ERROR_CODE]

//>> GET_[REC_ERR_MST5_REG3_49_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG3_49_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG3_49_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_49_MST5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG3_49_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_49_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG3_50_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_50_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_50_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG3_50_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_50_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_50_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_50_MST5_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_50_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG3_50_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_50_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_50_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_50_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.setBit<REC_ERR_MST5_REG3_50_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST5_REG3_50_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_50_MST5_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST5_REG3_50_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST5_REG3_50_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST5_REG3_50_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST5_REG3_50_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST5_REG3_50_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG3_50_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG3_50_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG3_50_MST5_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG3_50_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_50_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG3_50_MST5_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST5_REG3_50_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.getBit<REC_ERR_MST5_REG3_50_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST5_REG3_50_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_50_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_50_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_50_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_50_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_50_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG3_50_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_50_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG3_50_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_50_MST5_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_50_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_50_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG3_50_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_50_MST5_ERROR_CODE]

//>> GET_[REC_ERR_MST5_REG3_50_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG3_50_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG3_50_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_50_MST5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG3_50_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_50_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG3_51_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_51_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_51_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG3_51_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_51_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_51_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_51_MST5_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_51_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG3_51_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_51_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_51_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_51_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.setBit<REC_ERR_MST5_REG3_51_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST5_REG3_51_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_51_MST5_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST5_REG3_51_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST5_REG3_51_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST5_REG3_51_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST5_REG3_51_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST5_REG3_51_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG3_51_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG3_51_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG3_51_MST5_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG3_51_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_51_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG3_51_MST5_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST5_REG3_51_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.getBit<REC_ERR_MST5_REG3_51_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST5_REG3_51_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_51_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_51_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_51_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_51_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_51_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG3_51_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_51_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG3_51_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_51_MST5_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_51_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_51_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG3_51_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_51_MST5_ERROR_CODE]

//>> GET_[REC_ERR_MST5_REG3_51_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG3_51_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG3_51_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_51_MST5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG3_51_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_51_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG3_52_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_52_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_52_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG3_52_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_52_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_52_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_52_MST5_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_52_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG3_52_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_52_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_52_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_52_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.setBit<REC_ERR_MST5_REG3_52_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST5_REG3_52_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_52_MST5_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST5_REG3_52_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST5_REG3_52_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST5_REG3_52_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST5_REG3_52_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST5_REG3_52_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG3_52_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG3_52_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG3_52_MST5_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG3_52_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_52_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG3_52_MST5_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST5_REG3_52_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.getBit<REC_ERR_MST5_REG3_52_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST5_REG3_52_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_52_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_52_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_52_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_52_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_52_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG3_52_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_52_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG3_52_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_52_MST5_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_52_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_52_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG3_52_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_52_MST5_ERROR_CODE]

//>> GET_[REC_ERR_MST5_REG3_52_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG3_52_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG3_52_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_52_MST5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG3_52_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_52_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG3_53_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_53_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_53_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG3_53_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_53_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_53_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_53_MST5_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_53_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG3_53_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_53_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_53_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_53_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.setBit<REC_ERR_MST5_REG3_53_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST5_REG3_53_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_53_MST5_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST5_REG3_53_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST5_REG3_53_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST5_REG3_53_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST5_REG3_53_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST5_REG3_53_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG3_53_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG3_53_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG3_53_MST5_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG3_53_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_53_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG3_53_MST5_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST5_REG3_53_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.getBit<REC_ERR_MST5_REG3_53_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST5_REG3_53_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_53_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_53_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_53_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_53_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_53_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG3_53_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_53_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG3_53_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_53_MST5_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_53_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_53_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG3_53_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_53_MST5_ERROR_CODE]

//>> GET_[REC_ERR_MST5_REG3_53_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG3_53_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG3_53_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_53_MST5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG3_53_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_53_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG3_54_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_54_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_54_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG3_54_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_54_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_54_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_54_MST5_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_54_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG3_54_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_54_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_54_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_54_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.setBit<REC_ERR_MST5_REG3_54_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST5_REG3_54_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_54_MST5_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST5_REG3_54_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST5_REG3_54_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST5_REG3_54_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST5_REG3_54_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST5_REG3_54_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG3_54_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG3_54_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG3_54_MST5_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG3_54_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_54_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG3_54_MST5_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST5_REG3_54_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.getBit<REC_ERR_MST5_REG3_54_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST5_REG3_54_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_54_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_54_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_54_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_54_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_54_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG3_54_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_54_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG3_54_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_54_MST5_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_54_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_54_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG3_54_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_54_MST5_ERROR_CODE]

//>> GET_[REC_ERR_MST5_REG3_54_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG3_54_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG3_54_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_54_MST5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG3_54_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_54_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG3_55_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_55_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_55_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG3_55_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_55_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_55_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_55_MST5_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_55_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG3_55_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_55_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_55_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_55_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.setBit<REC_ERR_MST5_REG3_55_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST5_REG3_55_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_55_MST5_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST5_REG3_55_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST5_REG3_55_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST5_REG3_55_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST5_REG3_55_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST5_REG3_55_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG3_55_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG3_55_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG3_55_MST5_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG3_55_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_55_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG3_55_MST5_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST5_REG3_55_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.getBit<REC_ERR_MST5_REG3_55_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST5_REG3_55_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_55_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_55_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_55_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_55_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_55_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG3_55_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_55_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG3_55_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_55_MST5_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_55_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_55_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG3_55_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_55_MST5_ERROR_CODE]

//>> GET_[REC_ERR_MST5_REG3_55_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG3_55_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG3_55_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_55_MST5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG3_55_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_55_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG3_56_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_56_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_56_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG3_56_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_56_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_56_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_56_MST5_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_56_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG3_56_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_56_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_56_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_56_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.setBit<REC_ERR_MST5_REG3_56_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST5_REG3_56_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_56_MST5_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST5_REG3_56_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST5_REG3_56_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST5_REG3_56_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST5_REG3_56_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST5_REG3_56_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG3_56_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG3_56_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG3_56_MST5_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG3_56_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_56_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG3_56_MST5_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST5_REG3_56_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.getBit<REC_ERR_MST5_REG3_56_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST5_REG3_56_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_56_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_56_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_56_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_56_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_56_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG3_56_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_56_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG3_56_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_56_MST5_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_56_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_56_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG3_56_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_56_MST5_ERROR_CODE]

//>> GET_[REC_ERR_MST5_REG3_56_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG3_56_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG3_56_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_56_MST5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG3_56_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_56_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG3_57_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_57_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_57_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG3_57_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_57_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_57_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_57_MST5_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_57_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG3_57_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_57_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_57_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_57_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.setBit<REC_ERR_MST5_REG3_57_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST5_REG3_57_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_57_MST5_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST5_REG3_57_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST5_REG3_57_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST5_REG3_57_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST5_REG3_57_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST5_REG3_57_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG3_57_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG3_57_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG3_57_MST5_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG3_57_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_57_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG3_57_MST5_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST5_REG3_57_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.getBit<REC_ERR_MST5_REG3_57_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST5_REG3_57_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_57_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_57_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_57_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_57_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_57_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG3_57_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_57_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG3_57_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_57_MST5_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_57_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_57_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG3_57_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_57_MST5_ERROR_CODE]

//>> GET_[REC_ERR_MST5_REG3_57_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG3_57_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG3_57_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_57_MST5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG3_57_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_57_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG3_58_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_58_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_58_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG3_58_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_58_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_58_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_58_MST5_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_58_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG3_58_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_58_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_58_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_58_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.setBit<REC_ERR_MST5_REG3_58_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST5_REG3_58_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_58_MST5_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST5_REG3_58_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST5_REG3_58_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST5_REG3_58_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST5_REG3_58_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST5_REG3_58_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG3_58_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG3_58_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG3_58_MST5_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG3_58_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_58_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG3_58_MST5_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST5_REG3_58_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.getBit<REC_ERR_MST5_REG3_58_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST5_REG3_58_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_58_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_58_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_58_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_58_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_58_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG3_58_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_58_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG3_58_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_58_MST5_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_58_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_58_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG3_58_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_58_MST5_ERROR_CODE]

//>> GET_[REC_ERR_MST5_REG3_58_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG3_58_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG3_58_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_58_MST5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG3_58_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_58_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG3_59_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_59_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_59_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG3_59_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_59_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_59_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_59_MST5_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_59_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG3_59_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_59_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_59_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_59_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.setBit<REC_ERR_MST5_REG3_59_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST5_REG3_59_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_59_MST5_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST5_REG3_59_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST5_REG3_59_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST5_REG3_59_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST5_REG3_59_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST5_REG3_59_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG3_59_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG3_59_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG3_59_MST5_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG3_59_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_59_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG3_59_MST5_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST5_REG3_59_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.getBit<REC_ERR_MST5_REG3_59_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST5_REG3_59_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_59_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_59_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_59_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_59_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_59_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG3_59_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_59_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG3_59_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_59_MST5_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_59_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_59_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG3_59_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_59_MST5_ERROR_CODE]

//>> GET_[REC_ERR_MST5_REG3_59_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG3_59_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG3_59_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_59_MST5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG3_59_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_59_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG3_60_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_60_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_60_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG3_60_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_60_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_60_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_60_MST5_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_60_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG3_60_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_60_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_60_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_60_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.setBit<REC_ERR_MST5_REG3_60_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST5_REG3_60_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_60_MST5_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST5_REG3_60_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST5_REG3_60_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST5_REG3_60_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST5_REG3_60_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST5_REG3_60_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG3_60_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG3_60_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG3_60_MST5_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG3_60_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_60_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG3_60_MST5_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST5_REG3_60_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.getBit<REC_ERR_MST5_REG3_60_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST5_REG3_60_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_60_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_60_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_60_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_60_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_60_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG3_60_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_60_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG3_60_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_60_MST5_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_60_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_60_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG3_60_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_60_MST5_ERROR_CODE]

//>> GET_[REC_ERR_MST5_REG3_60_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG3_60_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG3_60_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_60_MST5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG3_60_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_60_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG3_61_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_61_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_61_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG3_61_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_61_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_61_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_61_MST5_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_61_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG3_61_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_61_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_61_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_61_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.setBit<REC_ERR_MST5_REG3_61_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST5_REG3_61_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_61_MST5_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST5_REG3_61_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST5_REG3_61_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST5_REG3_61_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST5_REG3_61_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST5_REG3_61_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG3_61_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG3_61_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG3_61_MST5_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG3_61_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_61_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG3_61_MST5_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST5_REG3_61_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.getBit<REC_ERR_MST5_REG3_61_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST5_REG3_61_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_61_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_61_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_61_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_61_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_61_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG3_61_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_61_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG3_61_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_61_MST5_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_61_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_61_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG3_61_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_61_MST5_ERROR_CODE]

//>> GET_[REC_ERR_MST5_REG3_61_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG3_61_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG3_61_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_61_MST5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG3_61_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_61_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG3_62_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_62_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_62_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG3_62_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_62_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_62_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_62_MST5_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_62_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG3_62_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_62_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_62_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_62_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.setBit<REC_ERR_MST5_REG3_62_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST5_REG3_62_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_62_MST5_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST5_REG3_62_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST5_REG3_62_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST5_REG3_62_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST5_REG3_62_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST5_REG3_62_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG3_62_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG3_62_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG3_62_MST5_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG3_62_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_62_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG3_62_MST5_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST5_REG3_62_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.getBit<REC_ERR_MST5_REG3_62_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST5_REG3_62_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_62_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_62_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_62_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_62_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_62_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG3_62_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_62_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG3_62_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_62_MST5_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_62_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_62_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG3_62_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_62_MST5_ERROR_CODE]

//>> GET_[REC_ERR_MST5_REG3_62_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG3_62_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG3_62_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_62_MST5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG3_62_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_62_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG3_63_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_63_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_63_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG3_63_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_63_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_63_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_63_MST5_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_63_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG3_63_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_63_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_63_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_63_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.setBit<REC_ERR_MST5_REG3_63_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST5_REG3_63_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_63_MST5_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST5_REG3_63_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST5_REG3_63_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST5_REG3_63_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST5_REG3_63_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST5_REG3_63_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG3_63_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG3_63_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG3_63_MST5_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG3_63_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_63_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG3_63_MST5_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST5_REG3_63_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.getBit<REC_ERR_MST5_REG3_63_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST5_REG3_63_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_63_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG3_63_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_63_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_63_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_63_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG3_63_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_63_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG3_63_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG3_63_MST5_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG3_63_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_63_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG3_63_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG3_63_MST5_ERROR_CODE]

//>> GET_[REC_ERR_MST5_REG3_63_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG3_63_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG3_63_MST5_ERROR_CODE,
           REC_ERR_MST5_REG3_63_MST5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG3_63_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG3_63_MST5_ERROR_CODE]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
