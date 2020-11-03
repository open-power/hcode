/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/perv/reg00012_unused.H $      */
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

#ifndef __PERV_REG00012_H_UNUSED__
#define __PERV_REG00012_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace perv
{
#endif


//>> PREP_[CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE]

//>> PUT_[CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE]


//>> SET_[CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE));
#endif
    return o_data.setBit<CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]

//>> CLEAR_[CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]
static inline bool GET_CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE));
#endif
    return i_data.getBit<CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]

//>> PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT]

//>> PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT]


//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE]

//>> PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE]

//>> PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE]


//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE));
#endif
    return o_data.setBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]

//>> CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE));
#endif
    return o_data.clearBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]
static inline bool GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE));
#endif
    return i_data.getBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]

//>> PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE]

//>> PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE]


//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE));
#endif
    return o_data.setBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]

//>> CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE));
#endif
    return o_data.clearBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]
static inline bool GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE));
#endif
    return i_data.getBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]

//>> PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC]

//>> PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC]


//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC));
#endif
    return o_data.setBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]

//>> CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC));
#endif
    return o_data.clearBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]
static inline bool GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC));
#endif
    return i_data.getBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]

//>> PREP_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG]

//>> PUT_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG]


//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE,
           CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE,
           CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE,
           CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]

//>> PREP_[CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC]

//>> PUT_[CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC]


//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR,
           CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR,
           CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR,
           CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR]

//>> PREP_[CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE]

//>> PUT_[CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE]


//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT,
           CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT,
           CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT,
           CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT]

//>> PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE]

//>> PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE]


//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE]

//>> PREP_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG]

//>> PUT_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG]


//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE,
           CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE,
           CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE,
           CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]

//>> PREP_[CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE]

//>> PUT_[CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE]


//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]

//>> PREP_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT]

//>> PUT_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT]


//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE,
           CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE,
           CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE,
           CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE,
           CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE,
           CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE,
           CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT,
           CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT,
           CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT,
           CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT]

//>> PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE]

//>> PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE]


//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return o_data.setBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]

//>> CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]
static inline fapi2::buffer<uint64_t>&
CLEAR_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return o_data.clearBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]
static inline bool GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return i_data.getBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return o_data.setBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]

//>> CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return o_data.clearBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]
static inline bool GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return i_data.getBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]

//>> PREP_[COMP_INTR_INTERRUPT_CONF_REG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_COMP_INTR_INTERRUPT_CONF_REG_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT_CONF_REG_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[COMP_INTR_INTERRUPT_CONF_REG_RW]

//>> GET_[COMP_INTR_INTERRUPT_CONF_REG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_COMP_INTR_INTERRUPT_CONF_REG_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT_CONF_REG_RW;
#endif
    return fapi2::getScom(i_target, COMP_INTR_INTERRUPT_CONF_REG_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT_CONF_REG_RW]

//>> PUT_[COMP_INTR_INTERRUPT_CONF_REG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_COMP_INTR_INTERRUPT_CONF_REG_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_CONF_REG_RW, COMP_INTR_INTERRUPT_CONF_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_CONF_REG_RW_WOR));
#endif
    return fapi2::putScom(i_target, COMP_INTR_INTERRUPT_CONF_REG_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[COMP_INTR_INTERRUPT_CONF_REG_RW]

//>> PREP_[COMP_INTR_INTERRUPT_CONF_REG_RW_WAND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_COMP_INTR_INTERRUPT_CONF_REG_RW_WAND(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT_CONF_REG_RW_WAND;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[COMP_INTR_INTERRUPT_CONF_REG_RW_WAND]

//>> GET_[COMP_INTR_INTERRUPT_CONF_REG_RW_WAND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_COMP_INTR_INTERRUPT_CONF_REG_RW_WAND(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT_CONF_REG_RW_WAND;
#endif
    return fapi2::getScom(i_target, COMP_INTR_INTERRUPT_CONF_REG_RW_WAND, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT_CONF_REG_RW_WAND]

//>> PUT_[COMP_INTR_INTERRUPT_CONF_REG_RW_WAND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_COMP_INTR_INTERRUPT_CONF_REG_RW_WAND(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_CONF_REG_RW, COMP_INTR_INTERRUPT_CONF_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_CONF_REG_RW_WOR));
#endif
    return fapi2::putScom(i_target, COMP_INTR_INTERRUPT_CONF_REG_RW_WAND, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[COMP_INTR_INTERRUPT_CONF_REG_RW_WAND]

//>> PREP_[COMP_INTR_INTERRUPT_CONF_REG_RW_WOR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_COMP_INTR_INTERRUPT_CONF_REG_RW_WOR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT_CONF_REG_RW_WOR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[COMP_INTR_INTERRUPT_CONF_REG_RW_WOR]

//>> GET_[COMP_INTR_INTERRUPT_CONF_REG_RW_WOR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_COMP_INTR_INTERRUPT_CONF_REG_RW_WOR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT_CONF_REG_RW_WOR;
#endif
    return fapi2::getScom(i_target, COMP_INTR_INTERRUPT_CONF_REG_RW_WOR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT_CONF_REG_RW_WOR]

//>> PUT_[COMP_INTR_INTERRUPT_CONF_REG_RW_WOR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_COMP_INTR_INTERRUPT_CONF_REG_RW_WOR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_CONF_REG_RW, COMP_INTR_INTERRUPT_CONF_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_CONF_REG_RW_WOR));
#endif
    return fapi2::putScom(i_target, COMP_INTR_INTERRUPT_CONF_REG_RW_WOR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[COMP_INTR_INTERRUPT_CONF_REG_RW_WOR]


//>> SET_[COMP_INTR_INTERRUPT_CONF_REG_SEL0]
static inline fapi2::buffer<uint64_t>& SET_COMP_INTR_INTERRUPT_CONF_REG_SEL0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_CONF_REG_RW, COMP_INTR_INTERRUPT_CONF_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_CONF_REG_RW_WOR));
#endif
    return o_data.insertFromRight<COMP_INTR_INTERRUPT_CONF_REG_SEL0,
           COMP_INTR_INTERRUPT_CONF_REG_SEL0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access COMP_INTR_INTERRUPT_CONF_REG_SEL0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[COMP_INTR_INTERRUPT_CONF_REG_SEL0]

//>> SET_[COMP_INTR_INTERRUPT_CONF_REG_SEL0]
static inline fapi2::buffer<uint64_t>& SET_COMP_INTR_INTERRUPT_CONF_REG_SEL0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_CONF_REG_RW, COMP_INTR_INTERRUPT_CONF_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_CONF_REG_RW_WOR));
#endif
    return o_data.insertFromRight<COMP_INTR_INTERRUPT_CONF_REG_SEL0,
           COMP_INTR_INTERRUPT_CONF_REG_SEL0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access COMP_INTR_INTERRUPT_CONF_REG_SEL0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[COMP_INTR_INTERRUPT_CONF_REG_SEL0]

//>> GET_[COMP_INTR_INTERRUPT_CONF_REG_SEL0]
static inline fapi2::buffer<uint64_t>& GET_COMP_INTR_INTERRUPT_CONF_REG_SEL0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_CONF_REG_RW, COMP_INTR_INTERRUPT_CONF_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_CONF_REG_RW_WOR));
#endif
    return i_data.extractToRight<COMP_INTR_INTERRUPT_CONF_REG_SEL0,
           COMP_INTR_INTERRUPT_CONF_REG_SEL0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access COMP_INTR_INTERRUPT_CONF_REG_SEL0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT_CONF_REG_SEL0]

//>> SET_[COMP_INTR_INTERRUPT_CONF_REG_SEL1]
static inline fapi2::buffer<uint64_t>& SET_COMP_INTR_INTERRUPT_CONF_REG_SEL1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_CONF_REG_RW, COMP_INTR_INTERRUPT_CONF_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_CONF_REG_RW_WOR));
#endif
    return o_data.insertFromRight<COMP_INTR_INTERRUPT_CONF_REG_SEL1,
           COMP_INTR_INTERRUPT_CONF_REG_SEL1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access COMP_INTR_INTERRUPT_CONF_REG_SEL1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[COMP_INTR_INTERRUPT_CONF_REG_SEL1]

//>> SET_[COMP_INTR_INTERRUPT_CONF_REG_SEL1]
static inline fapi2::buffer<uint64_t>& SET_COMP_INTR_INTERRUPT_CONF_REG_SEL1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_CONF_REG_RW, COMP_INTR_INTERRUPT_CONF_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_CONF_REG_RW_WOR));
#endif
    return o_data.insertFromRight<COMP_INTR_INTERRUPT_CONF_REG_SEL1,
           COMP_INTR_INTERRUPT_CONF_REG_SEL1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access COMP_INTR_INTERRUPT_CONF_REG_SEL1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[COMP_INTR_INTERRUPT_CONF_REG_SEL1]

//>> GET_[COMP_INTR_INTERRUPT_CONF_REG_SEL1]
static inline fapi2::buffer<uint64_t>& GET_COMP_INTR_INTERRUPT_CONF_REG_SEL1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_CONF_REG_RW, COMP_INTR_INTERRUPT_CONF_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_CONF_REG_RW_WOR));
#endif
    return i_data.extractToRight<COMP_INTR_INTERRUPT_CONF_REG_SEL1,
           COMP_INTR_INTERRUPT_CONF_REG_SEL1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access COMP_INTR_INTERRUPT_CONF_REG_SEL1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT_CONF_REG_SEL1]

//>> SET_[COMP_INTR_INTERRUPT_CONF_REG_GP]
static inline fapi2::buffer<uint64_t>& SET_COMP_INTR_INTERRUPT_CONF_REG_GP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_CONF_REG_RW, COMP_INTR_INTERRUPT_CONF_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_CONF_REG_RW_WOR));
#endif
    return o_data.insertFromRight<COMP_INTR_INTERRUPT_CONF_REG_GP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access COMP_INTR_INTERRUPT_CONF_REG_GP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[COMP_INTR_INTERRUPT_CONF_REG_GP]

//>> SET_[COMP_INTR_INTERRUPT_CONF_REG_GP]
static inline fapi2::buffer<uint64_t>& SET_COMP_INTR_INTERRUPT_CONF_REG_GP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_CONF_REG_RW, COMP_INTR_INTERRUPT_CONF_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_CONF_REG_RW_WOR));
#endif
    return o_data.insertFromRight<COMP_INTR_INTERRUPT_CONF_REG_GP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access COMP_INTR_INTERRUPT_CONF_REG_GP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[COMP_INTR_INTERRUPT_CONF_REG_GP]

//>> SET_[COMP_INTR_INTERRUPT_CONF_REG_GP]
static inline fapi2::buffer<uint64_t>& SET_COMP_INTR_INTERRUPT_CONF_REG_GP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_CONF_REG_RW, COMP_INTR_INTERRUPT_CONF_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_CONF_REG_RW_WOR));
#endif
    return o_data.setBit<COMP_INTR_INTERRUPT_CONF_REG_GP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access COMP_INTR_INTERRUPT_CONF_REG_GP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[COMP_INTR_INTERRUPT_CONF_REG_GP]

//>> CLEAR_[COMP_INTR_INTERRUPT_CONF_REG_GP]
static inline fapi2::buffer<uint64_t>& CLEAR_COMP_INTR_INTERRUPT_CONF_REG_GP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_CONF_REG_RW, COMP_INTR_INTERRUPT_CONF_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_CONF_REG_RW_WOR));
#endif
    return o_data.clearBit<COMP_INTR_INTERRUPT_CONF_REG_GP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access COMP_INTR_INTERRUPT_CONF_REG_GP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[COMP_INTR_INTERRUPT_CONF_REG_GP]

//>> GET_[COMP_INTR_INTERRUPT_CONF_REG_GP]
static inline fapi2::buffer<uint64_t>& GET_COMP_INTR_INTERRUPT_CONF_REG_GP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_CONF_REG_RW, COMP_INTR_INTERRUPT_CONF_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_CONF_REG_RW_WOR));
#endif
    return i_data.extractToRight<COMP_INTR_INTERRUPT_CONF_REG_GP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access COMP_INTR_INTERRUPT_CONF_REG_GP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT_CONF_REG_GP]

//>> GET_[COMP_INTR_INTERRUPT_CONF_REG_GP]
static inline bool GET_COMP_INTR_INTERRUPT_CONF_REG_GP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_CONF_REG_RW, COMP_INTR_INTERRUPT_CONF_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_CONF_REG_RW_WOR));
#endif
    return i_data.getBit<COMP_INTR_INTERRUPT_CONF_REG_GP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access COMP_INTR_INTERRUPT_CONF_REG_GP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT_CONF_REG_GP]

//>> SET_[COMP_INTR_INTERRUPT_CONF_REG_CC]
static inline fapi2::buffer<uint64_t>& SET_COMP_INTR_INTERRUPT_CONF_REG_CC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_CONF_REG_RW, COMP_INTR_INTERRUPT_CONF_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_CONF_REG_RW_WOR));
#endif
    return o_data.insertFromRight<COMP_INTR_INTERRUPT_CONF_REG_CC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access COMP_INTR_INTERRUPT_CONF_REG_CC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[COMP_INTR_INTERRUPT_CONF_REG_CC]

//>> SET_[COMP_INTR_INTERRUPT_CONF_REG_CC]
static inline fapi2::buffer<uint64_t>& SET_COMP_INTR_INTERRUPT_CONF_REG_CC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_CONF_REG_RW, COMP_INTR_INTERRUPT_CONF_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_CONF_REG_RW_WOR));
#endif
    return o_data.insertFromRight<COMP_INTR_INTERRUPT_CONF_REG_CC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access COMP_INTR_INTERRUPT_CONF_REG_CC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[COMP_INTR_INTERRUPT_CONF_REG_CC]

//>> SET_[COMP_INTR_INTERRUPT_CONF_REG_CC]
static inline fapi2::buffer<uint64_t>& SET_COMP_INTR_INTERRUPT_CONF_REG_CC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_CONF_REG_RW, COMP_INTR_INTERRUPT_CONF_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_CONF_REG_RW_WOR));
#endif
    return o_data.setBit<COMP_INTR_INTERRUPT_CONF_REG_CC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access COMP_INTR_INTERRUPT_CONF_REG_CC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[COMP_INTR_INTERRUPT_CONF_REG_CC]

//>> CLEAR_[COMP_INTR_INTERRUPT_CONF_REG_CC]
static inline fapi2::buffer<uint64_t>& CLEAR_COMP_INTR_INTERRUPT_CONF_REG_CC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_CONF_REG_RW, COMP_INTR_INTERRUPT_CONF_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_CONF_REG_RW_WOR));
#endif
    return o_data.clearBit<COMP_INTR_INTERRUPT_CONF_REG_CC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access COMP_INTR_INTERRUPT_CONF_REG_CC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[COMP_INTR_INTERRUPT_CONF_REG_CC]

//>> GET_[COMP_INTR_INTERRUPT_CONF_REG_CC]
static inline fapi2::buffer<uint64_t>& GET_COMP_INTR_INTERRUPT_CONF_REG_CC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_CONF_REG_RW, COMP_INTR_INTERRUPT_CONF_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_CONF_REG_RW_WOR));
#endif
    return i_data.extractToRight<COMP_INTR_INTERRUPT_CONF_REG_CC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access COMP_INTR_INTERRUPT_CONF_REG_CC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT_CONF_REG_CC]

//>> GET_[COMP_INTR_INTERRUPT_CONF_REG_CC]
static inline bool GET_COMP_INTR_INTERRUPT_CONF_REG_CC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_CONF_REG_RW, COMP_INTR_INTERRUPT_CONF_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_CONF_REG_RW_WOR));
#endif
    return i_data.getBit<COMP_INTR_INTERRUPT_CONF_REG_CC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access COMP_INTR_INTERRUPT_CONF_REG_CC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT_CONF_REG_CC]

//>> PREP_[P10_20_CPLT_CTRL0_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_P10_20_CPLT_CTRL0_EFF_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_CPLT_CTRL0_EFF_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[P10_20_CPLT_CTRL0_EFF_RW]

//>> GET_[P10_20_CPLT_CTRL0_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_P10_20_CPLT_CTRL0_EFF_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_CPLT_CTRL0_EFF_RW;
#endif
    return fapi2::getScom(i_target, P10_20_CPLT_CTRL0_EFF_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[P10_20_CPLT_CTRL0_EFF_RW]

//>> PUT_[P10_20_CPLT_CTRL0_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_P10_20_CPLT_CTRL0_EFF_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_CPLT_CTRL0_EFF_RW));
#endif
    return fapi2::putScom(i_target, P10_20_CPLT_CTRL0_EFF_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[P10_20_CPLT_CTRL0_EFF_RW]


//>> SET_[P10_20_CPLT_CTRL0_EFF_CPLT_CTRL0_EFF_REG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPLT_CTRL0_EFF_CPLT_CTRL0_EFF_REG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_CPLT_CTRL0_EFF_RW));
#endif
    return o_data.insertFromRight<P10_20_CPLT_CTRL0_EFF_CPLT_CTRL0_EFF_REG,
           P10_20_CPLT_CTRL0_EFF_CPLT_CTRL0_EFF_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access P10_20_CPLT_CTRL0_EFF_CPLT_CTRL0_EFF_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPLT_CTRL0_EFF_CPLT_CTRL0_EFF_REG]

//>> SET_[P10_20_CPLT_CTRL0_EFF_CPLT_CTRL0_EFF_REG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPLT_CTRL0_EFF_CPLT_CTRL0_EFF_REG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_CPLT_CTRL0_EFF_RW));
#endif
    return o_data.insertFromRight<P10_20_CPLT_CTRL0_EFF_CPLT_CTRL0_EFF_REG,
           P10_20_CPLT_CTRL0_EFF_CPLT_CTRL0_EFF_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access P10_20_CPLT_CTRL0_EFF_CPLT_CTRL0_EFF_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPLT_CTRL0_EFF_CPLT_CTRL0_EFF_REG]

//>> GET_[P10_20_CPLT_CTRL0_EFF_CPLT_CTRL0_EFF_REG]
static inline fapi2::buffer<uint64_t>& GET_P10_20_CPLT_CTRL0_EFF_CPLT_CTRL0_EFF_REG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_CPLT_CTRL0_EFF_RW));
#endif
    return i_data.extractToRight<P10_20_CPLT_CTRL0_EFF_CPLT_CTRL0_EFF_REG,
           P10_20_CPLT_CTRL0_EFF_CPLT_CTRL0_EFF_REG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access P10_20_CPLT_CTRL0_EFF_CPLT_CTRL0_EFF_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_CPLT_CTRL0_EFF_CPLT_CTRL0_EFF_REG]

//>> PREP_[P10_20_CPLT_CTRL1_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_P10_20_CPLT_CTRL1_EFF_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_CPLT_CTRL1_EFF_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[P10_20_CPLT_CTRL1_EFF_RW]

//>> GET_[P10_20_CPLT_CTRL1_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_P10_20_CPLT_CTRL1_EFF_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_CPLT_CTRL1_EFF_RW;
#endif
    return fapi2::getScom(i_target, P10_20_CPLT_CTRL1_EFF_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[P10_20_CPLT_CTRL1_EFF_RW]

//>> PUT_[P10_20_CPLT_CTRL1_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_P10_20_CPLT_CTRL1_EFF_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_CPLT_CTRL1_EFF_RW));
#endif
    return fapi2::putScom(i_target, P10_20_CPLT_CTRL1_EFF_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[P10_20_CPLT_CTRL1_EFF_RW]


//>> SET_[P10_20_CPLT_CTRL1_EFF_CPLT_CTRL1_EFF_REG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPLT_CTRL1_EFF_CPLT_CTRL1_EFF_REG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_CPLT_CTRL1_EFF_RW));
#endif
    return o_data.insertFromRight<P10_20_CPLT_CTRL1_EFF_CPLT_CTRL1_EFF_REG,
           P10_20_CPLT_CTRL1_EFF_CPLT_CTRL1_EFF_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access P10_20_CPLT_CTRL1_EFF_CPLT_CTRL1_EFF_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPLT_CTRL1_EFF_CPLT_CTRL1_EFF_REG]

//>> SET_[P10_20_CPLT_CTRL1_EFF_CPLT_CTRL1_EFF_REG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPLT_CTRL1_EFF_CPLT_CTRL1_EFF_REG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_CPLT_CTRL1_EFF_RW));
#endif
    return o_data.insertFromRight<P10_20_CPLT_CTRL1_EFF_CPLT_CTRL1_EFF_REG,
           P10_20_CPLT_CTRL1_EFF_CPLT_CTRL1_EFF_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access P10_20_CPLT_CTRL1_EFF_CPLT_CTRL1_EFF_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPLT_CTRL1_EFF_CPLT_CTRL1_EFF_REG]

//>> GET_[P10_20_CPLT_CTRL1_EFF_CPLT_CTRL1_EFF_REG]
static inline fapi2::buffer<uint64_t>& GET_P10_20_CPLT_CTRL1_EFF_CPLT_CTRL1_EFF_REG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_CPLT_CTRL1_EFF_RW));
#endif
    return i_data.extractToRight<P10_20_CPLT_CTRL1_EFF_CPLT_CTRL1_EFF_REG,
           P10_20_CPLT_CTRL1_EFF_CPLT_CTRL1_EFF_REG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access P10_20_CPLT_CTRL1_EFF_CPLT_CTRL1_EFF_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_CPLT_CTRL1_EFF_CPLT_CTRL1_EFF_REG]

//>> PREP_[P10_20_CPLT_CTRL2_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_P10_20_CPLT_CTRL2_EFF_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_CPLT_CTRL2_EFF_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[P10_20_CPLT_CTRL2_EFF_RW]

//>> GET_[P10_20_CPLT_CTRL2_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_P10_20_CPLT_CTRL2_EFF_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_CPLT_CTRL2_EFF_RW;
#endif
    return fapi2::getScom(i_target, P10_20_CPLT_CTRL2_EFF_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[P10_20_CPLT_CTRL2_EFF_RW]

//>> PUT_[P10_20_CPLT_CTRL2_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_P10_20_CPLT_CTRL2_EFF_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_CPLT_CTRL2_EFF_RW));
#endif
    return fapi2::putScom(i_target, P10_20_CPLT_CTRL2_EFF_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[P10_20_CPLT_CTRL2_EFF_RW]


//>> SET_[P10_20_CPLT_CTRL2_EFF_CPLT_CTRL2_EFF_REG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPLT_CTRL2_EFF_CPLT_CTRL2_EFF_REG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_CPLT_CTRL2_EFF_RW));
#endif
    return o_data.insertFromRight<P10_20_CPLT_CTRL2_EFF_CPLT_CTRL2_EFF_REG,
           P10_20_CPLT_CTRL2_EFF_CPLT_CTRL2_EFF_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access P10_20_CPLT_CTRL2_EFF_CPLT_CTRL2_EFF_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPLT_CTRL2_EFF_CPLT_CTRL2_EFF_REG]

//>> SET_[P10_20_CPLT_CTRL2_EFF_CPLT_CTRL2_EFF_REG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPLT_CTRL2_EFF_CPLT_CTRL2_EFF_REG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_CPLT_CTRL2_EFF_RW));
#endif
    return o_data.insertFromRight<P10_20_CPLT_CTRL2_EFF_CPLT_CTRL2_EFF_REG,
           P10_20_CPLT_CTRL2_EFF_CPLT_CTRL2_EFF_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access P10_20_CPLT_CTRL2_EFF_CPLT_CTRL2_EFF_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPLT_CTRL2_EFF_CPLT_CTRL2_EFF_REG]

//>> GET_[P10_20_CPLT_CTRL2_EFF_CPLT_CTRL2_EFF_REG]
static inline fapi2::buffer<uint64_t>& GET_P10_20_CPLT_CTRL2_EFF_CPLT_CTRL2_EFF_REG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_CPLT_CTRL2_EFF_RW));
#endif
    return i_data.extractToRight<P10_20_CPLT_CTRL2_EFF_CPLT_CTRL2_EFF_REG,
           P10_20_CPLT_CTRL2_EFF_CPLT_CTRL2_EFF_REG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access P10_20_CPLT_CTRL2_EFF_CPLT_CTRL2_EFF_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_CPLT_CTRL2_EFF_CPLT_CTRL2_EFF_REG]

//>> PREP_[P10_20_CPLT_CTRL3_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_P10_20_CPLT_CTRL3_EFF_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_CPLT_CTRL3_EFF_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[P10_20_CPLT_CTRL3_EFF_RW]

//>> GET_[P10_20_CPLT_CTRL3_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_P10_20_CPLT_CTRL3_EFF_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_CPLT_CTRL3_EFF_RW;
#endif
    return fapi2::getScom(i_target, P10_20_CPLT_CTRL3_EFF_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[P10_20_CPLT_CTRL3_EFF_RW]

//>> PUT_[P10_20_CPLT_CTRL3_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_P10_20_CPLT_CTRL3_EFF_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_CPLT_CTRL3_EFF_RW));
#endif
    return fapi2::putScom(i_target, P10_20_CPLT_CTRL3_EFF_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[P10_20_CPLT_CTRL3_EFF_RW]


//>> SET_[P10_20_CPLT_CTRL3_EFF_CPLT_CTRL3_EFF_REG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPLT_CTRL3_EFF_CPLT_CTRL3_EFF_REG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_CPLT_CTRL3_EFF_RW));
#endif
    return o_data.insertFromRight<P10_20_CPLT_CTRL3_EFF_CPLT_CTRL3_EFF_REG,
           P10_20_CPLT_CTRL3_EFF_CPLT_CTRL3_EFF_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access P10_20_CPLT_CTRL3_EFF_CPLT_CTRL3_EFF_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPLT_CTRL3_EFF_CPLT_CTRL3_EFF_REG]

//>> SET_[P10_20_CPLT_CTRL3_EFF_CPLT_CTRL3_EFF_REG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPLT_CTRL3_EFF_CPLT_CTRL3_EFF_REG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_CPLT_CTRL3_EFF_RW));
#endif
    return o_data.insertFromRight<P10_20_CPLT_CTRL3_EFF_CPLT_CTRL3_EFF_REG,
           P10_20_CPLT_CTRL3_EFF_CPLT_CTRL3_EFF_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access P10_20_CPLT_CTRL3_EFF_CPLT_CTRL3_EFF_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPLT_CTRL3_EFF_CPLT_CTRL3_EFF_REG]

//>> GET_[P10_20_CPLT_CTRL3_EFF_CPLT_CTRL3_EFF_REG]
static inline fapi2::buffer<uint64_t>& GET_P10_20_CPLT_CTRL3_EFF_CPLT_CTRL3_EFF_REG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_CPLT_CTRL3_EFF_RW));
#endif
    return i_data.extractToRight<P10_20_CPLT_CTRL3_EFF_CPLT_CTRL3_EFF_REG,
           P10_20_CPLT_CTRL3_EFF_CPLT_CTRL3_EFF_REG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access P10_20_CPLT_CTRL3_EFF_CPLT_CTRL3_EFF_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_CPLT_CTRL3_EFF_CPLT_CTRL3_EFF_REG]

//>> PREP_[P10_20_CPLT_CTRL4_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_P10_20_CPLT_CTRL4_EFF_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_CPLT_CTRL4_EFF_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[P10_20_CPLT_CTRL4_EFF_RW]

//>> GET_[P10_20_CPLT_CTRL4_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_P10_20_CPLT_CTRL4_EFF_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_CPLT_CTRL4_EFF_RW;
#endif
    return fapi2::getScom(i_target, P10_20_CPLT_CTRL4_EFF_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[P10_20_CPLT_CTRL4_EFF_RW]

//>> PUT_[P10_20_CPLT_CTRL4_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_P10_20_CPLT_CTRL4_EFF_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_CPLT_CTRL4_EFF_RW));
#endif
    return fapi2::putScom(i_target, P10_20_CPLT_CTRL4_EFF_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[P10_20_CPLT_CTRL4_EFF_RW]


//>> SET_[P10_20_CPLT_CTRL4_EFF_CPLT_CTRL4_EFF_REG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPLT_CTRL4_EFF_CPLT_CTRL4_EFF_REG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_CPLT_CTRL4_EFF_RW));
#endif
    return o_data.insertFromRight<P10_20_CPLT_CTRL4_EFF_CPLT_CTRL4_EFF_REG,
           P10_20_CPLT_CTRL4_EFF_CPLT_CTRL4_EFF_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access P10_20_CPLT_CTRL4_EFF_CPLT_CTRL4_EFF_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPLT_CTRL4_EFF_CPLT_CTRL4_EFF_REG]

//>> SET_[P10_20_CPLT_CTRL4_EFF_CPLT_CTRL4_EFF_REG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPLT_CTRL4_EFF_CPLT_CTRL4_EFF_REG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_CPLT_CTRL4_EFF_RW));
#endif
    return o_data.insertFromRight<P10_20_CPLT_CTRL4_EFF_CPLT_CTRL4_EFF_REG,
           P10_20_CPLT_CTRL4_EFF_CPLT_CTRL4_EFF_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access P10_20_CPLT_CTRL4_EFF_CPLT_CTRL4_EFF_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPLT_CTRL4_EFF_CPLT_CTRL4_EFF_REG]

//>> GET_[P10_20_CPLT_CTRL4_EFF_CPLT_CTRL4_EFF_REG]
static inline fapi2::buffer<uint64_t>& GET_P10_20_CPLT_CTRL4_EFF_CPLT_CTRL4_EFF_REG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_CPLT_CTRL4_EFF_RW));
#endif
    return i_data.extractToRight<P10_20_CPLT_CTRL4_EFF_CPLT_CTRL4_EFF_REG,
           P10_20_CPLT_CTRL4_EFF_CPLT_CTRL4_EFF_REG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access P10_20_CPLT_CTRL4_EFF_CPLT_CTRL4_EFF_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_CPLT_CTRL4_EFF_CPLT_CTRL4_EFF_REG]

//>> PREP_[P10_20_CPLT_CTRL5_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_P10_20_CPLT_CTRL5_EFF_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_CPLT_CTRL5_EFF_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[P10_20_CPLT_CTRL5_EFF_RW]

//>> GET_[P10_20_CPLT_CTRL5_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_P10_20_CPLT_CTRL5_EFF_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_CPLT_CTRL5_EFF_RW;
#endif
    return fapi2::getScom(i_target, P10_20_CPLT_CTRL5_EFF_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[P10_20_CPLT_CTRL5_EFF_RW]

//>> PUT_[P10_20_CPLT_CTRL5_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_P10_20_CPLT_CTRL5_EFF_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_CPLT_CTRL5_EFF_RW));
#endif
    return fapi2::putScom(i_target, P10_20_CPLT_CTRL5_EFF_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[P10_20_CPLT_CTRL5_EFF_RW]


//>> SET_[P10_20_CPLT_CTRL5_EFF_CPLT_CTRL5_EFF_REG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPLT_CTRL5_EFF_CPLT_CTRL5_EFF_REG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_CPLT_CTRL5_EFF_RW));
#endif
    return o_data.insertFromRight<P10_20_CPLT_CTRL5_EFF_CPLT_CTRL5_EFF_REG,
           P10_20_CPLT_CTRL5_EFF_CPLT_CTRL5_EFF_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access P10_20_CPLT_CTRL5_EFF_CPLT_CTRL5_EFF_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPLT_CTRL5_EFF_CPLT_CTRL5_EFF_REG]

//>> SET_[P10_20_CPLT_CTRL5_EFF_CPLT_CTRL5_EFF_REG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPLT_CTRL5_EFF_CPLT_CTRL5_EFF_REG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_CPLT_CTRL5_EFF_RW));
#endif
    return o_data.insertFromRight<P10_20_CPLT_CTRL5_EFF_CPLT_CTRL5_EFF_REG,
           P10_20_CPLT_CTRL5_EFF_CPLT_CTRL5_EFF_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access P10_20_CPLT_CTRL5_EFF_CPLT_CTRL5_EFF_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPLT_CTRL5_EFF_CPLT_CTRL5_EFF_REG]

//>> GET_[P10_20_CPLT_CTRL5_EFF_CPLT_CTRL5_EFF_REG]
static inline fapi2::buffer<uint64_t>& GET_P10_20_CPLT_CTRL5_EFF_CPLT_CTRL5_EFF_REG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_CPLT_CTRL5_EFF_RW));
#endif
    return i_data.extractToRight<P10_20_CPLT_CTRL5_EFF_CPLT_CTRL5_EFF_REG,
           P10_20_CPLT_CTRL5_EFF_CPLT_CTRL5_EFF_REG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access P10_20_CPLT_CTRL5_EFF_CPLT_CTRL5_EFF_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_CPLT_CTRL5_EFF_CPLT_CTRL5_EFF_REG]

//>> PREP_[EPS_DBG_INST1_COND_REG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_DBG_INST1_COND_REG_3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = EPS_DBG_INST1_COND_REG_3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_DBG_INST1_COND_REG_3]

//>> GET_[EPS_DBG_INST1_COND_REG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_DBG_INST1_COND_REG_3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = EPS_DBG_INST1_COND_REG_3;
#endif
    return fapi2::getScom(i_target, EPS_DBG_INST1_COND_REG_3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_3]

//>> PUT_[EPS_DBG_INST1_COND_REG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_DBG_INST1_COND_REG_3(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_3));
#endif
    return fapi2::putScom(i_target, EPS_DBG_INST1_COND_REG_3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_DBG_INST1_COND_REG_3]


//>> PREP_[EPS_DBG_INST2_COND_REG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_DBG_INST2_COND_REG_3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = EPS_DBG_INST2_COND_REG_3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_DBG_INST2_COND_REG_3]

//>> GET_[EPS_DBG_INST2_COND_REG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_DBG_INST2_COND_REG_3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = EPS_DBG_INST2_COND_REG_3;
#endif
    return fapi2::getScom(i_target, EPS_DBG_INST2_COND_REG_3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_3]

//>> PUT_[EPS_DBG_INST2_COND_REG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_DBG_INST2_COND_REG_3(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_3));
#endif
    return fapi2::putScom(i_target, EPS_DBG_INST2_COND_REG_3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_DBG_INST2_COND_REG_3]


//>> PREP_[EPS_PSC_PSCOM_STATUS_ERROR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_PSC_PSCOM_STATUS_ERROR_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_PSC_PSCOM_STATUS_ERROR_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_PSC_PSCOM_STATUS_ERROR_REG]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_PSC_PSCOM_STATUS_ERROR_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_PSC_PSCOM_STATUS_ERROR_REG;
#endif
    return fapi2::getScom(i_target, EPS_PSC_PSCOM_STATUS_ERROR_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG]

//>> PUT_[EPS_PSC_PSCOM_STATUS_ERROR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_PSC_PSCOM_STATUS_ERROR_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return fapi2::putScom(i_target, EPS_PSC_PSCOM_STATUS_ERROR_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_PSC_PSCOM_STATUS_ERROR_REG]


//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_WDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_ADDRESS_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_WDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_DL_RETURN_P0_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_RDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_UL_P0_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>&
CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PARITY_ERROR_ON_P2S_MACHINE]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>&
SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>&
SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>&
SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>&
CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>&
GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_LOCK_ERR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PSCOM_PARALLEL_ADDR_INVALID]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_PCB_COMMAND_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_GENERAL_TIMEOUT]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>&
SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>&
SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>&
SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>&
CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>&
GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>&
SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>&
SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>&
SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>&
CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>&
GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_ACCUMULATED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_WDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_ADDRESS_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_WDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_DL_RETURN_P0_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_RDATA_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_UL_P0_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_INTERFACE_MACHINE]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PARITY_ERROR_ON_P2S_MACHINE]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULCCH]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>&
SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>&
SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>&
SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>&
CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline fapi2::buffer<uint64_t>&
GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_DLDCH_RETURN]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_TIMEOUT_WHILE_WAITING_FOR_ULDCH]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_LOCK_ERR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_READ_WRITE_NVLD]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PSCOM_PARALLEL_ADDR_INVALID]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_PCB_COMMAND_PARITY_ERROR]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_GENERAL_TIMEOUT]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>&
SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>&
SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>&
SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>&
CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline fapi2::buffer<uint64_t>&
GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_ACCESS_VIOLATION]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>&
SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>&
SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>&
SET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.setBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>&
CLEAR_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return o_data.clearBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline fapi2::buffer<uint64_t>&
GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.extractToRight<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]
static inline bool GET_EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_PSCOM_STATUS_ERROR_REG));
#endif
    return i_data.getBit<EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_PSCOM_STATUS_ERROR_REG_TRAPPED_SATELLITE_ACKNOWLEDGE_INVALID_REGISTER]

//>> PREP_[EPS_PSC_RING_FENCE_MASK_LATCH_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_PSC_RING_FENCE_MASK_LATCH_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_PSC_RING_FENCE_MASK_LATCH_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_PSC_RING_FENCE_MASK_LATCH_REG]

//>> GET_[EPS_PSC_RING_FENCE_MASK_LATCH_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_PSC_RING_FENCE_MASK_LATCH_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_PSC_RING_FENCE_MASK_LATCH_REG;
#endif
    return fapi2::getScom(i_target, EPS_PSC_RING_FENCE_MASK_LATCH_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_PSC_RING_FENCE_MASK_LATCH_REG]

//>> PUT_[EPS_PSC_RING_FENCE_MASK_LATCH_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_PSC_RING_FENCE_MASK_LATCH_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_PSC_RING_FENCE_MASK_LATCH_REG));
#endif
    return fapi2::putScom(i_target, EPS_PSC_RING_FENCE_MASK_LATCH_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_PSC_RING_FENCE_MASK_LATCH_REG]


//>> SET_[EPS_PSC_RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_RING_FENCE_MASK_LATCH_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK,
           EPS_PSC_RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK]

//>> SET_[EPS_PSC_RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_RING_FENCE_MASK_LATCH_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK,
           EPS_PSC_RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK]

//>> GET_[EPS_PSC_RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_RING_FENCE_MASK_LATCH_REG));
#endif
    return i_data.extractToRight<EPS_PSC_RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK,
           EPS_PSC_RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_RING_FENCE_MASK_LATCH_REG_RING_FENCE_ENABLE_MASK]

//>> PREP_[EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ]

//>> GET_[EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ;
#endif
    return fapi2::getScom(i_target, EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ]

//>> PUT_[EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ));
#endif
    return fapi2::putScom(i_target, EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ]


//>> SET_[EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_VALUE]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_VALUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_VALUE,
           EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_VALUE]

//>> SET_[EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_VALUE]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_VALUE,
           EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_VALUE]

//>> GET_[EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_VALUE]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_VALUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_VALUE,
           EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_VALUE]

//>> SET_[EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_OVERFLOW_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_OVERFLOW_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_OVERFLOW_ERR]

//>> SET_[EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_OVERFLOW_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_OVERFLOW_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_OVERFLOW_ERR]

//>> SET_[EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_OVERFLOW_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ));
#endif
    return o_data.setBit<EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_OVERFLOW_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_OVERFLOW_ERR]

//>> CLEAR_[EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_OVERFLOW_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ));
#endif
    return o_data.clearBit<EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_OVERFLOW_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_OVERFLOW_ERR]

//>> GET_[EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_OVERFLOW_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_OVERFLOW_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_OVERFLOW_ERR]

//>> GET_[EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_OVERFLOW_ERR]
static inline bool GET_EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_OVERFLOW_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ));
#endif
    return i_data.getBit<EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_OVERFLOW_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_TIMESTAMP_COUNTER_READ_OVERFLOW_ERR]

//>> PREP_[FIRST_REPLY_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FIRST_REPLY_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FIRST_REPLY_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FIRST_REPLY_REG]

//>> GET_[FIRST_REPLY_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FIRST_REPLY_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FIRST_REPLY_REG;
#endif
    return fapi2::getScom(i_target, FIRST_REPLY_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FIRST_REPLY_REG]

//>> PUT_[FIRST_REPLY_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FIRST_REPLY_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FIRST_REPLY_REG));
#endif
    return fapi2::putScom(i_target, FIRST_REPLY_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FIRST_REPLY_REG]


//>> SET_[FIRST_REPLY_REG_ISTER]
static inline fapi2::buffer<uint64_t>& SET_FIRST_REPLY_REG_ISTER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_REPLY_REG));
#endif
    return o_data.insertFromRight<FIRST_REPLY_REG_ISTER,
           FIRST_REPLY_REG_ISTER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FIRST_REPLY_REG_ISTER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FIRST_REPLY_REG_ISTER]

//>> SET_[FIRST_REPLY_REG_ISTER]
static inline fapi2::buffer<uint64_t>& SET_FIRST_REPLY_REG_ISTER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_REPLY_REG));
#endif
    return o_data.insertFromRight<FIRST_REPLY_REG_ISTER,
           FIRST_REPLY_REG_ISTER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FIRST_REPLY_REG_ISTER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FIRST_REPLY_REG_ISTER]

//>> GET_[FIRST_REPLY_REG_ISTER]
static inline fapi2::buffer<uint64_t>& GET_FIRST_REPLY_REG_ISTER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_REPLY_REG));
#endif
    return i_data.extractToRight<FIRST_REPLY_REG_ISTER,
           FIRST_REPLY_REG_ISTER_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FIRST_REPLY_REG_ISTER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FIRST_REPLY_REG_ISTER]

//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_6_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_6_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_6_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_6_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_6_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_6_RO]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_6_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_6_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_6_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_6_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_6_RO]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_6_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_6_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_6_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_6_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_6_RO]


//>> SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_6_MDA_M1B_DATA_AREA_6]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1B_DATA_AREA_6_MDA_M1B_DATA_AREA_6(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_6_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_6_MDA_M1B_DATA_AREA_6,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_6_MDA_M1B_DATA_AREA_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_6_MDA_M1B_DATA_AREA_6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_6_MDA_M1B_DATA_AREA_6]

//>> SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_6_MDA_M1B_DATA_AREA_6]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1B_DATA_AREA_6_MDA_M1B_DATA_AREA_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_6_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_6_MDA_M1B_DATA_AREA_6,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_6_MDA_M1B_DATA_AREA_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_6_MDA_M1B_DATA_AREA_6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_6_MDA_M1B_DATA_AREA_6]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_6_MDA_M1B_DATA_AREA_6]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_6_MDA_M1B_DATA_AREA_6(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_6_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_6_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_6_MDA_M1B_DATA_AREA_6,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_6_MDA_M1B_DATA_AREA_6_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_6_MDA_M1B_DATA_AREA_6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_6_MDA_M1B_DATA_AREA_6]

//>> PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_0_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_0_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_0_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2A_DATA_AREA_0_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_0_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_0_RW]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_0_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_0_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_0_RW;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_0_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_0_RW]

//>> PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_0_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2A_DATA_AREA_0_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_0_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_0_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_0_RW]


//>> SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_0_MDA_M2A_DATA_AREA_0]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2A_DATA_AREA_0_MDA_M2A_DATA_AREA_0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_0_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2A_DATA_AREA_0_MDA_M2A_DATA_AREA_0,
           FSXCOMP_FSXLOG_M2A_DATA_AREA_0_MDA_M2A_DATA_AREA_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2A_DATA_AREA_0_MDA_M2A_DATA_AREA_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_0_MDA_M2A_DATA_AREA_0]

//>> SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_0_MDA_M2A_DATA_AREA_0]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2A_DATA_AREA_0_MDA_M2A_DATA_AREA_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_0_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2A_DATA_AREA_0_MDA_M2A_DATA_AREA_0,
           FSXCOMP_FSXLOG_M2A_DATA_AREA_0_MDA_M2A_DATA_AREA_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2A_DATA_AREA_0_MDA_M2A_DATA_AREA_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_0_MDA_M2A_DATA_AREA_0]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_0_MDA_M2A_DATA_AREA_0]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_0_MDA_M2A_DATA_AREA_0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_0_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_0_RW));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M2A_DATA_AREA_0_MDA_M2A_DATA_AREA_0,
           FSXCOMP_FSXLOG_M2A_DATA_AREA_0_MDA_M2A_DATA_AREA_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2A_DATA_AREA_0_MDA_M2A_DATA_AREA_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_0_MDA_M2A_DATA_AREA_0]

//>> PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_13_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_13_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_13_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2B_DATA_AREA_13_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_13_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_13_RO]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_13_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_13_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_13_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_13_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_13_RO]

//>> PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_13_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2B_DATA_AREA_13_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_13_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_13_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_13_RO]


//>> SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_13_MDA_M2B_DATA_AREA_13]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2B_DATA_AREA_13_MDA_M2B_DATA_AREA_13(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_13_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2B_DATA_AREA_13_MDA_M2B_DATA_AREA_13,
           FSXCOMP_FSXLOG_M2B_DATA_AREA_13_MDA_M2B_DATA_AREA_13_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2B_DATA_AREA_13_MDA_M2B_DATA_AREA_13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_13_MDA_M2B_DATA_AREA_13]

//>> SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_13_MDA_M2B_DATA_AREA_13]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2B_DATA_AREA_13_MDA_M2B_DATA_AREA_13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_13_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2B_DATA_AREA_13_MDA_M2B_DATA_AREA_13,
           FSXCOMP_FSXLOG_M2B_DATA_AREA_13_MDA_M2B_DATA_AREA_13_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2B_DATA_AREA_13_MDA_M2B_DATA_AREA_13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_13_MDA_M2B_DATA_AREA_13]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_13_MDA_M2B_DATA_AREA_13]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_13_MDA_M2B_DATA_AREA_13(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_13_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_13_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M2B_DATA_AREA_13_MDA_M2B_DATA_AREA_13,
           FSXCOMP_FSXLOG_M2B_DATA_AREA_13_MDA_M2B_DATA_AREA_13_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2B_DATA_AREA_13_MDA_M2B_DATA_AREA_13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_13_MDA_M2B_DATA_AREA_13]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_RW(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_RW]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_RW(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_RW;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_RW]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_RW(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_RW]


//>> SET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_M1HC0A_MAILBOX_1_HEADER_COMMAND_0_A]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_M1HC0A_MAILBOX_1_HEADER_COMMAND_0_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_M1HC0A_MAILBOX_1_HEADER_COMMAND_0_A,
           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_M1HC0A_MAILBOX_1_HEADER_COMMAND_0_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_M1HC0A_MAILBOX_1_HEADER_COMMAND_0_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_M1HC0A_MAILBOX_1_HEADER_COMMAND_0_A]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_M1HC0A_MAILBOX_1_HEADER_COMMAND_0_A]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_M1HC0A_MAILBOX_1_HEADER_COMMAND_0_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_M1HC0A_MAILBOX_1_HEADER_COMMAND_0_A,
           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_M1HC0A_MAILBOX_1_HEADER_COMMAND_0_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_M1HC0A_MAILBOX_1_HEADER_COMMAND_0_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_M1HC0A_MAILBOX_1_HEADER_COMMAND_0_A]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_M1HC0A_MAILBOX_1_HEADER_COMMAND_0_A]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_M1HC0A_MAILBOX_1_HEADER_COMMAND_0_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_RW));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_M1HC0A_MAILBOX_1_HEADER_COMMAND_0_A,
           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_M1HC0A_MAILBOX_1_HEADER_COMMAND_0_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_M1HC0A_MAILBOX_1_HEADER_COMMAND_0_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_A_M1HC0A_MAILBOX_1_HEADER_COMMAND_0_A]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_RO(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_RO]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_RO(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_RO]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_RO(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_RO]


//>> SET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_M2HC0B_MAILBOX_2_HEADER_COMMAND_0_B]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_M2HC0B_MAILBOX_2_HEADER_COMMAND_0_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_M2HC0B_MAILBOX_2_HEADER_COMMAND_0_B,
           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_M2HC0B_MAILBOX_2_HEADER_COMMAND_0_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_M2HC0B_MAILBOX_2_HEADER_COMMAND_0_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_M2HC0B_MAILBOX_2_HEADER_COMMAND_0_B]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_M2HC0B_MAILBOX_2_HEADER_COMMAND_0_B]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_M2HC0B_MAILBOX_2_HEADER_COMMAND_0_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_M2HC0B_MAILBOX_2_HEADER_COMMAND_0_B,
           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_M2HC0B_MAILBOX_2_HEADER_COMMAND_0_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_M2HC0B_MAILBOX_2_HEADER_COMMAND_0_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_M2HC0B_MAILBOX_2_HEADER_COMMAND_0_B]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_M2HC0B_MAILBOX_2_HEADER_COMMAND_0_B]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_M2HC0B_MAILBOX_2_HEADER_COMMAND_0_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_M2HC0B_MAILBOX_2_HEADER_COMMAND_0_B,
           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_M2HC0B_MAILBOX_2_HEADER_COMMAND_0_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_M2HC0B_MAILBOX_2_HEADER_COMMAND_0_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_B_M2HC0B_MAILBOX_2_HEADER_COMMAND_0_B]

//>> PREP_[FSXCOMP_FSXLOG_RCS_EL1_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_RCS_EL1_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_RCS_EL1_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_RCS_EL1_FSI]

//>> GET_[FSXCOMP_FSXLOG_RCS_EL1_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_RCS_EL1_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_RCS_EL1_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_RCS_EL1_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_RCS_EL1_FSI]

//>> PUT_[FSXCOMP_FSXLOG_RCS_EL1_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_RCS_EL1_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL1_FSI, FSXCOMP_FSXLOG_RCS_EL1_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL1_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_RCS_EL1_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_RCS_EL1_FSI]

//>> PREP_[FSXCOMP_FSXLOG_RCS_EL1_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_RCS_EL1_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_RCS_EL1_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_RCS_EL1_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_RCS_EL1_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_RCS_EL1_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_RCS_EL1_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_RCS_EL1_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_RCS_EL1_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_RCS_EL1_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_RCS_EL1_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL1_FSI, FSXCOMP_FSXLOG_RCS_EL1_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL1_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_RCS_EL1_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_RCS_EL1_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_RCS_EL1_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_RCS_EL1_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_RCS_EL1_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_RCS_EL1_RO]

//>> GET_[FSXCOMP_FSXLOG_RCS_EL1_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_RCS_EL1_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_RCS_EL1_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_RCS_EL1_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_RCS_EL1_RO]

//>> PUT_[FSXCOMP_FSXLOG_RCS_EL1_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_RCS_EL1_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL1_FSI, FSXCOMP_FSXLOG_RCS_EL1_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL1_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_RCS_EL1_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_RCS_EL1_RO]


//>> SET_[FSXCOMP_FSXLOG_RCS_EL1_SNS]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_RCS_EL1_SNS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL1_FSI, FSXCOMP_FSXLOG_RCS_EL1_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL1_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_RCS_EL1_SNS,
           FSXCOMP_FSXLOG_RCS_EL1_SNS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_RCS_EL1_SNS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_RCS_EL1_SNS]

//>> SET_[FSXCOMP_FSXLOG_RCS_EL1_SNS]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_RCS_EL1_SNS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL1_FSI, FSXCOMP_FSXLOG_RCS_EL1_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL1_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_RCS_EL1_SNS,
           FSXCOMP_FSXLOG_RCS_EL1_SNS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_RCS_EL1_SNS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_RCS_EL1_SNS]

//>> GET_[FSXCOMP_FSXLOG_RCS_EL1_SNS]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_RCS_EL1_SNS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL1_FSI, FSXCOMP_FSXLOG_RCS_EL1_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL1_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_RCS_EL1_SNS,
           FSXCOMP_FSXLOG_RCS_EL1_SNS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_RCS_EL1_SNS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_RCS_EL1_SNS]

//>> SET_[FSXCOMP_FSXLOG_RCS_EL1_ERR]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_RCS_EL1_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL1_FSI, FSXCOMP_FSXLOG_RCS_EL1_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL1_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_RCS_EL1_ERR,
           FSXCOMP_FSXLOG_RCS_EL1_ERR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_RCS_EL1_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_RCS_EL1_ERR]

//>> SET_[FSXCOMP_FSXLOG_RCS_EL1_ERR]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_RCS_EL1_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL1_FSI, FSXCOMP_FSXLOG_RCS_EL1_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL1_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_RCS_EL1_ERR,
           FSXCOMP_FSXLOG_RCS_EL1_ERR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_RCS_EL1_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_RCS_EL1_ERR]

//>> GET_[FSXCOMP_FSXLOG_RCS_EL1_ERR]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_RCS_EL1_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL1_FSI, FSXCOMP_FSXLOG_RCS_EL1_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL1_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_RCS_EL1_ERR,
           FSXCOMP_FSXLOG_RCS_EL1_ERR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_RCS_EL1_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_RCS_EL1_ERR]

//>> SET_[FSXCOMP_FSXLOG_RCS_EL1_TIME]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_RCS_EL1_TIME(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL1_FSI, FSXCOMP_FSXLOG_RCS_EL1_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL1_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_RCS_EL1_TIME,
           FSXCOMP_FSXLOG_RCS_EL1_TIME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_RCS_EL1_TIME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_RCS_EL1_TIME]

//>> SET_[FSXCOMP_FSXLOG_RCS_EL1_TIME]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_RCS_EL1_TIME(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL1_FSI, FSXCOMP_FSXLOG_RCS_EL1_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL1_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_RCS_EL1_TIME,
           FSXCOMP_FSXLOG_RCS_EL1_TIME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_RCS_EL1_TIME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_RCS_EL1_TIME]

//>> GET_[FSXCOMP_FSXLOG_RCS_EL1_TIME]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_RCS_EL1_TIME(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL1_FSI, FSXCOMP_FSXLOG_RCS_EL1_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL1_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_RCS_EL1_TIME,
           FSXCOMP_FSXLOG_RCS_EL1_TIME_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_RCS_EL1_TIME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_RCS_EL1_TIME]

//>> PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI]

//>> GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI;
#endif
    return fapi2::getScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI]

//>> PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_RW));
#endif
    return fapi2::putScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI]

//>> PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI_BYTE(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI_BYTE]

//>> GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI_BYTE(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI_BYTE]

//>> PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI_BYTE(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_RW));
#endif
    return fapi2::putScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI_BYTE]

//>> PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_RW]

//>> GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_RW;
#endif
    return fapi2::getScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_RW]

//>> PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_RW));
#endif
    return fapi2::putScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_RW]


//>> SET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_ROOT_CTRL0_EFF_REG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_ROOT_CTRL0_EFF_REG(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_RW));
#endif
    return o_data.insertFromRight<P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_ROOT_CTRL0_EFF_REG,
           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_ROOT_CTRL0_EFF_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_ROOT_CTRL0_EFF_REG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_ROOT_CTRL0_EFF_REG]

//>> SET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_ROOT_CTRL0_EFF_REG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_ROOT_CTRL0_EFF_REG(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_RW));
#endif
    return o_data.insertFromRight<P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_ROOT_CTRL0_EFF_REG,
           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_ROOT_CTRL0_EFF_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_ROOT_CTRL0_EFF_REG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_ROOT_CTRL0_EFF_REG]

//>> GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_ROOT_CTRL0_EFF_REG]
static inline fapi2::buffer<uint64_t>& GET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_ROOT_CTRL0_EFF_REG(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_RW));
#endif
    return i_data.extractToRight<P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_ROOT_CTRL0_EFF_REG,
           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_ROOT_CTRL0_EFF_REG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_ROOT_CTRL0_EFF_REG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL0_EFF_ROOT_CTRL0_EFF_REG]

//>> PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI]

//>> GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI;
#endif
    return fapi2::getScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI]

//>> PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_RW));
#endif
    return fapi2::putScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI]

//>> PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI_BYTE(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI_BYTE]

//>> GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI_BYTE(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI_BYTE]

//>> PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI_BYTE(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_RW));
#endif
    return fapi2::putScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI_BYTE]

//>> PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_RW]

//>> GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_RW;
#endif
    return fapi2::getScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_RW]

//>> PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_RW));
#endif
    return fapi2::putScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_RW]


//>> SET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_ROOT_CTRL1_EFF_REG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_ROOT_CTRL1_EFF_REG(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_RW));
#endif
    return o_data.insertFromRight<P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_ROOT_CTRL1_EFF_REG,
           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_ROOT_CTRL1_EFF_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_ROOT_CTRL1_EFF_REG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_ROOT_CTRL1_EFF_REG]

//>> SET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_ROOT_CTRL1_EFF_REG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_ROOT_CTRL1_EFF_REG(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_RW));
#endif
    return o_data.insertFromRight<P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_ROOT_CTRL1_EFF_REG,
           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_ROOT_CTRL1_EFF_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_ROOT_CTRL1_EFF_REG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_ROOT_CTRL1_EFF_REG]

//>> GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_ROOT_CTRL1_EFF_REG]
static inline fapi2::buffer<uint64_t>& GET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_ROOT_CTRL1_EFF_REG(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_RW));
#endif
    return i_data.extractToRight<P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_ROOT_CTRL1_EFF_REG,
           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_ROOT_CTRL1_EFF_REG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_ROOT_CTRL1_EFF_REG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL1_EFF_ROOT_CTRL1_EFF_REG]

//>> PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI]

//>> GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI;
#endif
    return fapi2::getScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI]

//>> PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_RW));
#endif
    return fapi2::putScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI]

//>> PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI_BYTE(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI_BYTE]

//>> GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI_BYTE(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI_BYTE]

//>> PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI_BYTE(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_RW));
#endif
    return fapi2::putScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI_BYTE]

//>> PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_RW]

//>> GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_RW;
#endif
    return fapi2::getScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_RW]

//>> PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_RW));
#endif
    return fapi2::putScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_RW]


//>> SET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_ROOT_CTRL2_EFF_REG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_ROOT_CTRL2_EFF_REG(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_RW));
#endif
    return o_data.insertFromRight<P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_ROOT_CTRL2_EFF_REG,
           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_ROOT_CTRL2_EFF_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_ROOT_CTRL2_EFF_REG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_ROOT_CTRL2_EFF_REG]

//>> SET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_ROOT_CTRL2_EFF_REG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_ROOT_CTRL2_EFF_REG(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_RW));
#endif
    return o_data.insertFromRight<P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_ROOT_CTRL2_EFF_REG,
           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_ROOT_CTRL2_EFF_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_ROOT_CTRL2_EFF_REG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_ROOT_CTRL2_EFF_REG]

//>> GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_ROOT_CTRL2_EFF_REG]
static inline fapi2::buffer<uint64_t>& GET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_ROOT_CTRL2_EFF_REG(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_RW));
#endif
    return i_data.extractToRight<P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_ROOT_CTRL2_EFF_REG,
           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_ROOT_CTRL2_EFF_REG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_ROOT_CTRL2_EFF_REG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL2_EFF_ROOT_CTRL2_EFF_REG]

//>> PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI]

//>> GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI;
#endif
    return fapi2::getScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI]

//>> PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_RW));
#endif
    return fapi2::putScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI]

//>> PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI_BYTE(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI_BYTE]

//>> GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI_BYTE(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI_BYTE]

//>> PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI_BYTE(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_RW));
#endif
    return fapi2::putScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI_BYTE]

//>> PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_RW]

//>> GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_RW;
#endif
    return fapi2::getScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_RW]

//>> PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_RW));
#endif
    return fapi2::putScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_RW]


//>> SET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_ROOT_CTRL3_EFF_REG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_ROOT_CTRL3_EFF_REG(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_RW));
#endif
    return o_data.insertFromRight<P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_ROOT_CTRL3_EFF_REG,
           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_ROOT_CTRL3_EFF_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_ROOT_CTRL3_EFF_REG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_ROOT_CTRL3_EFF_REG]

//>> SET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_ROOT_CTRL3_EFF_REG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_ROOT_CTRL3_EFF_REG(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_RW));
#endif
    return o_data.insertFromRight<P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_ROOT_CTRL3_EFF_REG,
           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_ROOT_CTRL3_EFF_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_ROOT_CTRL3_EFF_REG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_ROOT_CTRL3_EFF_REG]

//>> GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_ROOT_CTRL3_EFF_REG]
static inline fapi2::buffer<uint64_t>& GET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_ROOT_CTRL3_EFF_REG(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_RW));
#endif
    return i_data.extractToRight<P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_ROOT_CTRL3_EFF_REG,
           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_ROOT_CTRL3_EFF_REG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_ROOT_CTRL3_EFF_REG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL3_EFF_ROOT_CTRL3_EFF_REG]

//>> PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI]

//>> GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI;
#endif
    return fapi2::getScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI]

//>> PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_RW));
#endif
    return fapi2::putScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI]

//>> PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI_BYTE(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI_BYTE]

//>> GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI_BYTE(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI_BYTE]

//>> PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI_BYTE(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_RW));
#endif
    return fapi2::putScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI_BYTE]

//>> PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_RW]

//>> GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_RW;
#endif
    return fapi2::getScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_RW]

//>> PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_RW));
#endif
    return fapi2::putScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_RW]


//>> SET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_ROOT_CTRL4_EFF_REG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_ROOT_CTRL4_EFF_REG(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_RW));
#endif
    return o_data.insertFromRight<P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_ROOT_CTRL4_EFF_REG,
           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_ROOT_CTRL4_EFF_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_ROOT_CTRL4_EFF_REG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_ROOT_CTRL4_EFF_REG]

//>> SET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_ROOT_CTRL4_EFF_REG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_ROOT_CTRL4_EFF_REG(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_RW));
#endif
    return o_data.insertFromRight<P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_ROOT_CTRL4_EFF_REG,
           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_ROOT_CTRL4_EFF_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_ROOT_CTRL4_EFF_REG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_ROOT_CTRL4_EFF_REG]

//>> GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_ROOT_CTRL4_EFF_REG]
static inline fapi2::buffer<uint64_t>& GET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_ROOT_CTRL4_EFF_REG(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_RW));
#endif
    return i_data.extractToRight<P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_ROOT_CTRL4_EFF_REG,
           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_ROOT_CTRL4_EFF_REG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_ROOT_CTRL4_EFF_REG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL4_EFF_ROOT_CTRL4_EFF_REG]

//>> PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI]

//>> GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI;
#endif
    return fapi2::getScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI]

//>> PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_RW));
#endif
    return fapi2::putScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI]

//>> PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI_BYTE(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI_BYTE]

//>> GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI_BYTE(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI_BYTE]

//>> PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI_BYTE(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_RW));
#endif
    return fapi2::putScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI_BYTE]

//>> PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_RW]

//>> GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_RW;
#endif
    return fapi2::getScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_RW]

//>> PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_RW));
#endif
    return fapi2::putScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_RW]


//>> SET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_ROOT_CTRL5_EFF_REG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_ROOT_CTRL5_EFF_REG(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_RW));
#endif
    return o_data.insertFromRight<P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_ROOT_CTRL5_EFF_REG,
           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_ROOT_CTRL5_EFF_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_ROOT_CTRL5_EFF_REG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_ROOT_CTRL5_EFF_REG]

//>> SET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_ROOT_CTRL5_EFF_REG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_ROOT_CTRL5_EFF_REG(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_RW));
#endif
    return o_data.insertFromRight<P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_ROOT_CTRL5_EFF_REG,
           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_ROOT_CTRL5_EFF_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_ROOT_CTRL5_EFF_REG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_ROOT_CTRL5_EFF_REG]

//>> GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_ROOT_CTRL5_EFF_REG]
static inline fapi2::buffer<uint64_t>& GET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_ROOT_CTRL5_EFF_REG(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_RW));
#endif
    return i_data.extractToRight<P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_ROOT_CTRL5_EFF_REG,
           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_ROOT_CTRL5_EFF_REG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_ROOT_CTRL5_EFF_REG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL5_EFF_ROOT_CTRL5_EFF_REG]

//>> PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI]

//>> GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI;
#endif
    return fapi2::getScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI]

//>> PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_RW));
#endif
    return fapi2::putScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI]

//>> PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI_BYTE(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI_BYTE]

//>> GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI_BYTE(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI_BYTE]

//>> PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI_BYTE(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_RW));
#endif
    return fapi2::putScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI_BYTE]

//>> PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_RW]

//>> GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_RW;
#endif
    return fapi2::getScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_RW]

//>> PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_RW));
#endif
    return fapi2::putScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_RW]


//>> SET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_ROOT_CTRL6_EFF_REG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_ROOT_CTRL6_EFF_REG(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_RW));
#endif
    return o_data.insertFromRight<P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_ROOT_CTRL6_EFF_REG,
           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_ROOT_CTRL6_EFF_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_ROOT_CTRL6_EFF_REG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_ROOT_CTRL6_EFF_REG]

//>> SET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_ROOT_CTRL6_EFF_REG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_ROOT_CTRL6_EFF_REG(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_RW));
#endif
    return o_data.insertFromRight<P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_ROOT_CTRL6_EFF_REG,
           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_ROOT_CTRL6_EFF_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_ROOT_CTRL6_EFF_REG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_ROOT_CTRL6_EFF_REG]

//>> GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_ROOT_CTRL6_EFF_REG]
static inline fapi2::buffer<uint64_t>& GET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_ROOT_CTRL6_EFF_REG(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_RW));
#endif
    return i_data.extractToRight<P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_ROOT_CTRL6_EFF_REG,
           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_ROOT_CTRL6_EFF_REG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_ROOT_CTRL6_EFF_REG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL6_EFF_ROOT_CTRL6_EFF_REG]

//>> PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI]

//>> GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI;
#endif
    return fapi2::getScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI]

//>> PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_RW));
#endif
    return fapi2::putScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI]

//>> PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI_BYTE(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI_BYTE]

//>> GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI_BYTE(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI_BYTE]

//>> PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI_BYTE(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_RW));
#endif
    return fapi2::putScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI_BYTE]

//>> PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_RW]

//>> GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    scomt::last_scom = P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_RW;
#endif
    return fapi2::getScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_RW]

//>> PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_RW));
#endif
    return fapi2::putScom(i_target, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_RW]


//>> SET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_ROOT_CTRL7_EFF_REG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_ROOT_CTRL7_EFF_REG(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_RW));
#endif
    return o_data.insertFromRight<P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_ROOT_CTRL7_EFF_REG,
           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_ROOT_CTRL7_EFF_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_ROOT_CTRL7_EFF_REG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_ROOT_CTRL7_EFF_REG]

//>> SET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_ROOT_CTRL7_EFF_REG]
static inline fapi2::buffer<uint64_t>& SET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_ROOT_CTRL7_EFF_REG(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_RW));
#endif
    return o_data.insertFromRight<P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_ROOT_CTRL7_EFF_REG,
           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_ROOT_CTRL7_EFF_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_ROOT_CTRL7_EFF_REG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_ROOT_CTRL7_EFF_REG]

//>> GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_ROOT_CTRL7_EFF_REG]
static inline fapi2::buffer<uint64_t>& GET_P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_ROOT_CTRL7_EFF_REG(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI, P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_FSI_BYTE,
                           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_RW));
#endif
    return i_data.extractToRight<P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_ROOT_CTRL7_EFF_REG,
           P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_ROOT_CTRL7_EFF_REG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_ROOT_CTRL7_EFF_REG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_FSXCOMP_FSXLOG_ROOT_CTRL7_EFF_ROOT_CTRL7_EFF_REG]

//>> PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI]

//>> GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI]

//>> PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI]

//>> PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_RW]

//>> GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_RW;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_RW]

//>> PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_RW]


//>> SET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_SR_SCRATCH_REGISTER_12]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_SR_SCRATCH_REGISTER_12(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_SR_SCRATCH_REGISTER_12,
           FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_SR_SCRATCH_REGISTER_12_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_SR_SCRATCH_REGISTER_12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_SR_SCRATCH_REGISTER_12]

//>> SET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_SR_SCRATCH_REGISTER_12]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_SR_SCRATCH_REGISTER_12(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_SR_SCRATCH_REGISTER_12,
           FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_SR_SCRATCH_REGISTER_12_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_SR_SCRATCH_REGISTER_12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_SR_SCRATCH_REGISTER_12]

//>> GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_SR_SCRATCH_REGISTER_12]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_SR_SCRATCH_REGISTER_12(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_RW));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_SR_SCRATCH_REGISTER_12,
           FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_SR_SCRATCH_REGISTER_12_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_SR_SCRATCH_REGISTER_12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_12_SR_SCRATCH_REGISTER_12]

//>> PREP_[L3TRA0_TR0_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA0_TR0_CONFIG_5(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA0_TR0_CONFIG_5;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA0_TR0_CONFIG_5]

//>> GET_[L3TRA0_TR0_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA0_TR0_CONFIG_5(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA0_TR0_CONFIG_5;
#endif
    return fapi2::getScom(i_target, L3TRA0_TR0_CONFIG_5, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_5]

//>> PUT_[L3TRA0_TR0_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA0_TR0_CONFIG_5(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_5));
#endif
    return fapi2::putScom(i_target, L3TRA0_TR0_CONFIG_5, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA0_TR0_CONFIG_5]


//>> SET_[L3TRA0_TR0_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_5_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_5));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_5_C,
           L3TRA0_TR0_CONFIG_5_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR0_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_5_C]

//>> SET_[L3TRA0_TR0_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_5_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_5));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_5_C,
           L3TRA0_TR0_CONFIG_5_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR0_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_5_C]

//>> GET_[L3TRA0_TR0_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR0_CONFIG_5_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_5));
#endif
    return i_data.extractToRight<L3TRA0_TR0_CONFIG_5_C,
           L3TRA0_TR0_CONFIG_5_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR0_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_5_C]

//>> SET_[L3TRA0_TR0_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_5_D(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_5));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_5_D,
           L3TRA0_TR0_CONFIG_5_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR0_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_5_D]

//>> SET_[L3TRA0_TR0_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_5_D(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_5));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_5_D,
           L3TRA0_TR0_CONFIG_5_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR0_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_5_D]

//>> GET_[L3TRA0_TR0_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR0_CONFIG_5_D(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_5));
#endif
    return i_data.extractToRight<L3TRA0_TR0_CONFIG_5_D,
           L3TRA0_TR0_CONFIG_5_D_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR0_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_5_D]

//>> PREP_[L3TRA1_TR1_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA1_TR1_CONFIG_3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR1_CONFIG_3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA1_TR1_CONFIG_3]

//>> GET_[L3TRA1_TR1_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA1_TR1_CONFIG_3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR1_CONFIG_3;
#endif
    return fapi2::getScom(i_target, L3TRA1_TR1_CONFIG_3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_3]

//>> PUT_[L3TRA1_TR1_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA1_TR1_CONFIG_3(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_3));
#endif
    return fapi2::putScom(i_target, L3TRA1_TR1_CONFIG_3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA1_TR1_CONFIG_3]


//>> SET_[L3TRA1_TR1_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_3));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_3_C,
           L3TRA1_TR1_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_3_C]

//>> SET_[L3TRA1_TR1_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_3_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_3));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_3_C,
           L3TRA1_TR1_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_3_C]

//>> GET_[L3TRA1_TR1_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_3));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_3_C,
           L3TRA1_TR1_CONFIG_3_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_3_C]

//>> SET_[L3TRA1_TR1_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_3));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_3_D,
           L3TRA1_TR1_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_3_D]

//>> SET_[L3TRA1_TR1_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_3_D(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_3));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_3_D,
           L3TRA1_TR1_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_3_D]

//>> GET_[L3TRA1_TR1_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_3));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_3_D,
           L3TRA1_TR1_CONFIG_3_D_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_3_D]

//>> PREP_[L3TRA1_TR1_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA1_TR1_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR1_TRACE_HI_DATA_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA1_TR1_TRACE_HI_DATA_REG]

//>> GET_[L3TRA1_TR1_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA1_TR1_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR1_TRACE_HI_DATA_REG;
#endif
    return fapi2::getScom(i_target, L3TRA1_TR1_TRACE_HI_DATA_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA1_TR1_TRACE_HI_DATA_REG]

//>> PUT_[L3TRA1_TR1_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA1_TR1_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_HI_DATA_REG));
#endif
    return fapi2::putScom(i_target, L3TRA1_TR1_TRACE_HI_DATA_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA1_TR1_TRACE_HI_DATA_REG]


//>> SET_[L3TRA1_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_HI_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           L3TRA1_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> SET_[L3TRA1_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_HI_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           L3TRA1_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> GET_[L3TRA1_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_HI_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA1_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           L3TRA1_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> PREP_[L3TRA2_TR0_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA2_TR0_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA2_TR0_TRACE_LO_DATA_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA2_TR0_TRACE_LO_DATA_REG]

//>> GET_[L3TRA2_TR0_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA2_TR0_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA2_TR0_TRACE_LO_DATA_REG;
#endif
    return fapi2::getScom(i_target, L3TRA2_TR0_TRACE_LO_DATA_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA2_TR0_TRACE_LO_DATA_REG]

//>> PUT_[L3TRA2_TR0_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA2_TR0_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_LO_DATA_REG));
#endif
    return fapi2::putScom(i_target, L3TRA2_TR0_TRACE_LO_DATA_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA2_TR0_TRACE_LO_DATA_REG]


//>> SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_TRACE_LO_DATA_REG_LO_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_TRACE_LO_DATA_REG_LO_DATA,
           L3TRA2_TR0_TRACE_LO_DATA_REG_LO_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_LO_DATA]

//>> SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_TRACE_LO_DATA_REG_LO_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_TRACE_LO_DATA_REG_LO_DATA,
           L3TRA2_TR0_TRACE_LO_DATA_REG_LO_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_LO_DATA]

//>> GET_[L3TRA2_TR0_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_TRACE_LO_DATA_REG_LO_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA2_TR0_TRACE_LO_DATA_REG_LO_DATA,
           L3TRA2_TR0_TRACE_LO_DATA_REG_LO_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_TRACE_LO_DATA_REG_LO_DATA]

//>> SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_TRACE_LO_DATA_REG_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_TRACE_LO_DATA_REG_ADDRESS,
           L3TRA2_TR0_TRACE_LO_DATA_REG_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_ADDRESS]

//>> SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_TRACE_LO_DATA_REG_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_TRACE_LO_DATA_REG_ADDRESS,
           L3TRA2_TR0_TRACE_LO_DATA_REG_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_ADDRESS]

//>> GET_[L3TRA2_TR0_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_TRACE_LO_DATA_REG_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA2_TR0_TRACE_LO_DATA_REG_ADDRESS,
           L3TRA2_TR0_TRACE_LO_DATA_REG_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_TRACE_LO_DATA_REG_ADDRESS]

//>> SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK,
           L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK]

//>> SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK,
           L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK]

//>> GET_[L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK,
           L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK]

//>> SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> CLEAR_[L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> GET_[L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> GET_[L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline bool GET_L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<L3TRA2_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> CLEAR_[L3TRA2_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<L3TRA2_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> GET_[L3TRA2_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA2_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> GET_[L3TRA2_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline bool GET_L3TRA2_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<L3TRA2_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_TRACE_LO_DATA_REG_RUNNING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_TRACE_LO_DATA_REG_RUNNING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_TRACE_LO_DATA_REG_RUNNING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<L3TRA2_TR0_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> CLEAR_[L3TRA2_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR0_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<L3TRA2_TR0_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> GET_[L3TRA2_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA2_TR0_TRACE_LO_DATA_REG_RUNNING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> GET_[L3TRA2_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline bool GET_L3TRA2_TR0_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<L3TRA2_TR0_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           L3TRA2_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           L3TRA2_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> GET_[L3TRA2_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA2_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           L3TRA2_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> PREP_[L3TRA2_TR1_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA2_TR1_CONFIG_4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA2_TR1_CONFIG_4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA2_TR1_CONFIG_4]

//>> GET_[L3TRA2_TR1_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA2_TR1_CONFIG_4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA2_TR1_CONFIG_4;
#endif
    return fapi2::getScom(i_target, L3TRA2_TR1_CONFIG_4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_4]

//>> PUT_[L3TRA2_TR1_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA2_TR1_CONFIG_4(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_4));
#endif
    return fapi2::putScom(i_target, L3TRA2_TR1_CONFIG_4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA2_TR1_CONFIG_4]


//>> SET_[L3TRA2_TR1_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_4_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_4));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_4_A,
           L3TRA2_TR1_CONFIG_4_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_4_A]

//>> SET_[L3TRA2_TR1_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_4_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_4));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_4_A,
           L3TRA2_TR1_CONFIG_4_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_4_A]

//>> GET_[L3TRA2_TR1_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_CONFIG_4_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_4));
#endif
    return i_data.extractToRight<L3TRA2_TR1_CONFIG_4_A,
           L3TRA2_TR1_CONFIG_4_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_4_A]

//>> SET_[L3TRA2_TR1_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_4_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_4));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_4_B,
           L3TRA2_TR1_CONFIG_4_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_4_B]

//>> SET_[L3TRA2_TR1_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_4_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_4));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_4_B,
           L3TRA2_TR1_CONFIG_4_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_4_B]

//>> GET_[L3TRA2_TR1_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_CONFIG_4_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_4));
#endif
    return i_data.extractToRight<L3TRA2_TR1_CONFIG_4_B,
           L3TRA2_TR1_CONFIG_4_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_4_B]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
