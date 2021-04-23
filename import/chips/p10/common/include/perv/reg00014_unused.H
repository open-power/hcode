/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/perv/reg00014_unused.H $      */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2021                                                    */
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

#ifndef __PERV_REG00014_H_UNUSED__
#define __PERV_REG00014_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace perv
{
#endif


//>> PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]

//>> PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]


//>> PREP_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT]

//>> PUT_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT]


//>> SET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL,
           CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL,
           CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL,
           CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL,
           CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL,
           CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL,
           CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL]

//>> PREP_[CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE]

//>> PUT_[CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE]


//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]

//>> PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE]

//>> PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE]


//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE]

//>> PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC]

//>> PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC]


//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]

//>> PREP_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS]

//>> PUT_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS]


//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS));
#endif
    return o_data.setBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT]

//>> CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS));
#endif
    return o_data.clearBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS));
#endif
    return i_data.extractToRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT]
static inline bool GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS));
#endif
    return i_data.getBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT]

//>> PREP_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE]

//>> PUT_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE]


//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return o_data.setBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]

//>> CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]
static inline fapi2::buffer<uint64_t>&
CLEAR_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return o_data.clearBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return i_data.extractToRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]
static inline bool GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return i_data.getBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return o_data.setBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]

//>> CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return o_data.clearBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return i_data.extractToRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]
static inline bool GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return i_data.getBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]

//>> PREP_[CLK_ADJ_03_DCADJ_WRAP_SET_DEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_DCADJ_WRAP_SET_DEC(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_SET_DEC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_DCADJ_WRAP_SET_DEC]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SET_DEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_DCADJ_WRAP_SET_DEC(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_SET_DEC;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_DCADJ_WRAP_SET_DEC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SET_DEC]

//>> PUT_[CLK_ADJ_03_DCADJ_WRAP_SET_DEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_DCADJ_WRAP_SET_DEC(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_DEC));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_DCADJ_WRAP_SET_DEC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_DCADJ_WRAP_SET_DEC]


//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC_VALUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_DEC));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC_VALUE,
           CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC_VALUE]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_DEC));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC_VALUE,
           CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC_VALUE]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC_VALUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_DEC));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC_VALUE,
           CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC_VALUE]

//>> PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]

//>> PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_ONE_SHOT_MODE]


//>> PREP_[EPS_FIR_LOCAL_WOF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_FIR_LOCAL_WOF(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_LOCAL_WOF;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_FIR_LOCAL_WOF]

//>> GET_[EPS_FIR_LOCAL_WOF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_FIR_LOCAL_WOF(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_LOCAL_WOF;
#endif
    return fapi2::getScom(i_target, EPS_FIR_LOCAL_WOF, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF]

//>> PUT_[EPS_FIR_LOCAL_WOF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_FIR_LOCAL_WOF(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return fapi2::putScom(i_target, EPS_FIR_LOCAL_WOF, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_FIR_LOCAL_WOF]


//>> SET_[EPS_FIR_LOCAL_WOF_00]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_00(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_00,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_00 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_00]

//>> SET_[EPS_FIR_LOCAL_WOF_00]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_00(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_00,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_00 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_00]

//>> SET_[EPS_FIR_LOCAL_WOF_00]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_00(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_00>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_00 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_00]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_00]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_00(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_00>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_00 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_00]

//>> GET_[EPS_FIR_LOCAL_WOF_00]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_00(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_00,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_00 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_00]

//>> GET_[EPS_FIR_LOCAL_WOF_00]
static inline bool GET_EPS_FIR_LOCAL_WOF_00(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_00>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_00 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_00]

//>> SET_[EPS_FIR_LOCAL_WOF_01]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_01(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_01,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_01]

//>> SET_[EPS_FIR_LOCAL_WOF_01]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_01(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_01,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_01]

//>> SET_[EPS_FIR_LOCAL_WOF_01]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_01(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_01]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_01]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_01(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_01]

//>> GET_[EPS_FIR_LOCAL_WOF_01]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_01(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_01,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_01]

//>> GET_[EPS_FIR_LOCAL_WOF_01]
static inline bool GET_EPS_FIR_LOCAL_WOF_01(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_01]

//>> SET_[EPS_FIR_LOCAL_WOF_02]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_02(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_02,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_02]

//>> SET_[EPS_FIR_LOCAL_WOF_02]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_02(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_02,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_02]

//>> SET_[EPS_FIR_LOCAL_WOF_02]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_02(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_02]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_02]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_02(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_02]

//>> GET_[EPS_FIR_LOCAL_WOF_02]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_02(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_02,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_02]

//>> GET_[EPS_FIR_LOCAL_WOF_02]
static inline bool GET_EPS_FIR_LOCAL_WOF_02(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_02]

//>> SET_[EPS_FIR_LOCAL_WOF_03]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_03(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_03,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_03]

//>> SET_[EPS_FIR_LOCAL_WOF_03]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_03(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_03,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_03]

//>> SET_[EPS_FIR_LOCAL_WOF_03]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_03(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_03]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_03]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_03(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_03]

//>> GET_[EPS_FIR_LOCAL_WOF_03]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_03(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_03,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_03]

//>> GET_[EPS_FIR_LOCAL_WOF_03]
static inline bool GET_EPS_FIR_LOCAL_WOF_03(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_03]

//>> SET_[EPS_FIR_LOCAL_WOF_04]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_04(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_04,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_04]

//>> SET_[EPS_FIR_LOCAL_WOF_04]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_04(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_04,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_04]

//>> SET_[EPS_FIR_LOCAL_WOF_04]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_04(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_04]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_04]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_04(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_04]

//>> GET_[EPS_FIR_LOCAL_WOF_04]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_04(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_04,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_04]

//>> GET_[EPS_FIR_LOCAL_WOF_04]
static inline bool GET_EPS_FIR_LOCAL_WOF_04(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_04]

//>> SET_[EPS_FIR_LOCAL_WOF_05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_05(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_05]

//>> SET_[EPS_FIR_LOCAL_WOF_05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_05(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_05]

//>> SET_[EPS_FIR_LOCAL_WOF_05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_05(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_05]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_05]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_05(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_05]

//>> GET_[EPS_FIR_LOCAL_WOF_05]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_05(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_05,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_05]

//>> GET_[EPS_FIR_LOCAL_WOF_05]
static inline bool GET_EPS_FIR_LOCAL_WOF_05(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_05]

//>> SET_[EPS_FIR_LOCAL_WOF_06]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_06(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_06]

//>> SET_[EPS_FIR_LOCAL_WOF_06]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_06(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_06]

//>> SET_[EPS_FIR_LOCAL_WOF_06]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_06(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_06]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_06]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_06(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_06]

//>> GET_[EPS_FIR_LOCAL_WOF_06]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_06(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_06,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_06]

//>> GET_[EPS_FIR_LOCAL_WOF_06]
static inline bool GET_EPS_FIR_LOCAL_WOF_06(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_06]

//>> SET_[EPS_FIR_LOCAL_WOF_07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_07(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_07]

//>> SET_[EPS_FIR_LOCAL_WOF_07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_07(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_07]

//>> SET_[EPS_FIR_LOCAL_WOF_07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_07(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_07]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_07]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_07(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_07]

//>> GET_[EPS_FIR_LOCAL_WOF_07]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_07(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_07,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_07]

//>> GET_[EPS_FIR_LOCAL_WOF_07]
static inline bool GET_EPS_FIR_LOCAL_WOF_07(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_07]

//>> SET_[EPS_FIR_LOCAL_WOF_08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_08(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_08]

//>> SET_[EPS_FIR_LOCAL_WOF_08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_08(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_08]

//>> SET_[EPS_FIR_LOCAL_WOF_08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_08(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_08]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_08]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_08(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_08]

//>> GET_[EPS_FIR_LOCAL_WOF_08]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_08(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_08,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_08]

//>> GET_[EPS_FIR_LOCAL_WOF_08]
static inline bool GET_EPS_FIR_LOCAL_WOF_08(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_08]

//>> SET_[EPS_FIR_LOCAL_WOF_09]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_09(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_09]

//>> SET_[EPS_FIR_LOCAL_WOF_09]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_09(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_09]

//>> SET_[EPS_FIR_LOCAL_WOF_09]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_09(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_09]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_09]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_09(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_09]

//>> GET_[EPS_FIR_LOCAL_WOF_09]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_09(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_09,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_09]

//>> GET_[EPS_FIR_LOCAL_WOF_09]
static inline bool GET_EPS_FIR_LOCAL_WOF_09(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_09]

//>> SET_[EPS_FIR_LOCAL_WOF_10]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_10(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_10]

//>> SET_[EPS_FIR_LOCAL_WOF_10]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_10]

//>> SET_[EPS_FIR_LOCAL_WOF_10]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_10]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_10]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_10]

//>> GET_[EPS_FIR_LOCAL_WOF_10]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_10(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_10,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_10]

//>> GET_[EPS_FIR_LOCAL_WOF_10]
static inline bool GET_EPS_FIR_LOCAL_WOF_10(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_10]

//>> SET_[EPS_FIR_LOCAL_WOF_11]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_11(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_11]

//>> SET_[EPS_FIR_LOCAL_WOF_11]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_11(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_11]

//>> SET_[EPS_FIR_LOCAL_WOF_11]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_11]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_11]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_11]

//>> GET_[EPS_FIR_LOCAL_WOF_11]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_11(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_11,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_11]

//>> GET_[EPS_FIR_LOCAL_WOF_11]
static inline bool GET_EPS_FIR_LOCAL_WOF_11(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_11]

//>> SET_[EPS_FIR_LOCAL_WOF_12]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_12(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_12]

//>> SET_[EPS_FIR_LOCAL_WOF_12]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_12]

//>> SET_[EPS_FIR_LOCAL_WOF_12]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_12]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_12]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_12]

//>> GET_[EPS_FIR_LOCAL_WOF_12]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_12(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_12,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_12]

//>> GET_[EPS_FIR_LOCAL_WOF_12]
static inline bool GET_EPS_FIR_LOCAL_WOF_12(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_12]

//>> SET_[EPS_FIR_LOCAL_WOF_13]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_13(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_13]

//>> SET_[EPS_FIR_LOCAL_WOF_13]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_13]

//>> SET_[EPS_FIR_LOCAL_WOF_13]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_13]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_13]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_13]

//>> GET_[EPS_FIR_LOCAL_WOF_13]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_13(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_13,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_13]

//>> GET_[EPS_FIR_LOCAL_WOF_13]
static inline bool GET_EPS_FIR_LOCAL_WOF_13(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_13]

//>> SET_[EPS_FIR_LOCAL_WOF_14]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_14(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_14]

//>> SET_[EPS_FIR_LOCAL_WOF_14]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_14]

//>> SET_[EPS_FIR_LOCAL_WOF_14]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_14]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_14]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_14]

//>> GET_[EPS_FIR_LOCAL_WOF_14]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_14(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_14,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_14]

//>> GET_[EPS_FIR_LOCAL_WOF_14]
static inline bool GET_EPS_FIR_LOCAL_WOF_14(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_14]

//>> SET_[EPS_FIR_LOCAL_WOF_15]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_15(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_15]

//>> SET_[EPS_FIR_LOCAL_WOF_15]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_15]

//>> SET_[EPS_FIR_LOCAL_WOF_15]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_15]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_15]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_15]

//>> GET_[EPS_FIR_LOCAL_WOF_15]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_15(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_15,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_15]

//>> GET_[EPS_FIR_LOCAL_WOF_15]
static inline bool GET_EPS_FIR_LOCAL_WOF_15(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_15]

//>> SET_[EPS_FIR_LOCAL_WOF_16]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_16(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_16,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_16]

//>> SET_[EPS_FIR_LOCAL_WOF_16]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_16(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_16,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_16]

//>> SET_[EPS_FIR_LOCAL_WOF_16]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_16(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_16>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_16]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_16]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_16(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_16>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_16]

//>> GET_[EPS_FIR_LOCAL_WOF_16]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_16(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_16,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_16]

//>> GET_[EPS_FIR_LOCAL_WOF_16]
static inline bool GET_EPS_FIR_LOCAL_WOF_16(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_16>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_16]

//>> SET_[EPS_FIR_LOCAL_WOF_17]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_17(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_17,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_17]

//>> SET_[EPS_FIR_LOCAL_WOF_17]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_17(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_17,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_17]

//>> SET_[EPS_FIR_LOCAL_WOF_17]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_17(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_17>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_17]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_17]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_17(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_17>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_17]

//>> GET_[EPS_FIR_LOCAL_WOF_17]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_17(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_17,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_17]

//>> GET_[EPS_FIR_LOCAL_WOF_17]
static inline bool GET_EPS_FIR_LOCAL_WOF_17(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_17>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_17]

//>> SET_[EPS_FIR_LOCAL_WOF_18]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_18(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_18,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_18]

//>> SET_[EPS_FIR_LOCAL_WOF_18]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_18(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_18,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_18]

//>> SET_[EPS_FIR_LOCAL_WOF_18]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_18(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_18>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_18]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_18]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_18(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_18>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_18]

//>> GET_[EPS_FIR_LOCAL_WOF_18]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_18(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_18,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_18]

//>> GET_[EPS_FIR_LOCAL_WOF_18]
static inline bool GET_EPS_FIR_LOCAL_WOF_18(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_18>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_18]

//>> SET_[EPS_FIR_LOCAL_WOF_19]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_19(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_19,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_19]

//>> SET_[EPS_FIR_LOCAL_WOF_19]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_19(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_19,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_19]

//>> SET_[EPS_FIR_LOCAL_WOF_19]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_19(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_19]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_19]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_19(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_19]

//>> GET_[EPS_FIR_LOCAL_WOF_19]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_19(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_19,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_19]

//>> GET_[EPS_FIR_LOCAL_WOF_19]
static inline bool GET_EPS_FIR_LOCAL_WOF_19(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_19]

//>> SET_[EPS_FIR_LOCAL_WOF_20]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_20(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_20,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_20]

//>> SET_[EPS_FIR_LOCAL_WOF_20]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_20(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_20,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_20]

//>> SET_[EPS_FIR_LOCAL_WOF_20]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_20(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_20]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_20]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_20(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_20]

//>> GET_[EPS_FIR_LOCAL_WOF_20]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_20(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_20,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_20]

//>> GET_[EPS_FIR_LOCAL_WOF_20]
static inline bool GET_EPS_FIR_LOCAL_WOF_20(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_20]

//>> SET_[EPS_FIR_LOCAL_WOF_21]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_21(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_21,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_21]

//>> SET_[EPS_FIR_LOCAL_WOF_21]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_21(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_21,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_21]

//>> SET_[EPS_FIR_LOCAL_WOF_21]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_21(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_21>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_21]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_21]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_21(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_21>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_21]

//>> GET_[EPS_FIR_LOCAL_WOF_21]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_21(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_21,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_21]

//>> GET_[EPS_FIR_LOCAL_WOF_21]
static inline bool GET_EPS_FIR_LOCAL_WOF_21(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_21>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_21]

//>> SET_[EPS_FIR_LOCAL_WOF_22]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_22(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_22,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_22]

//>> SET_[EPS_FIR_LOCAL_WOF_22]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_22(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_22,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_22]

//>> SET_[EPS_FIR_LOCAL_WOF_22]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_22(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_22>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_22]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_22]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_22(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_22>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_22]

//>> GET_[EPS_FIR_LOCAL_WOF_22]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_22(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_22,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_22]

//>> GET_[EPS_FIR_LOCAL_WOF_22]
static inline bool GET_EPS_FIR_LOCAL_WOF_22(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_22>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_22]

//>> SET_[EPS_FIR_LOCAL_WOF_23]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_23(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_23,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_23]

//>> SET_[EPS_FIR_LOCAL_WOF_23]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_23(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_23,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_23]

//>> SET_[EPS_FIR_LOCAL_WOF_23]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_23(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_23]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_23]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_23(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_23]

//>> GET_[EPS_FIR_LOCAL_WOF_23]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_23(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_23,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_23]

//>> GET_[EPS_FIR_LOCAL_WOF_23]
static inline bool GET_EPS_FIR_LOCAL_WOF_23(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_23]

//>> SET_[EPS_FIR_LOCAL_WOF_24]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_24(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_24,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_24]

//>> SET_[EPS_FIR_LOCAL_WOF_24]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_24(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_24,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_24]

//>> SET_[EPS_FIR_LOCAL_WOF_24]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_24(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_24>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_24]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_24]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_24(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_24>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_24]

//>> GET_[EPS_FIR_LOCAL_WOF_24]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_24(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_24,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_24]

//>> GET_[EPS_FIR_LOCAL_WOF_24]
static inline bool GET_EPS_FIR_LOCAL_WOF_24(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_24>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_24]

//>> SET_[EPS_FIR_LOCAL_WOF_25]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_25(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_25,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_25]

//>> SET_[EPS_FIR_LOCAL_WOF_25]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_25(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_25,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_25]

//>> SET_[EPS_FIR_LOCAL_WOF_25]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_25(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_25>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_25]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_25]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_25(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_25>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_25]

//>> GET_[EPS_FIR_LOCAL_WOF_25]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_25(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_25,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_25]

//>> GET_[EPS_FIR_LOCAL_WOF_25]
static inline bool GET_EPS_FIR_LOCAL_WOF_25(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_25>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_25]

//>> SET_[EPS_FIR_LOCAL_WOF_26]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_26(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_26,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_26]

//>> SET_[EPS_FIR_LOCAL_WOF_26]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_26(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_26,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_26]

//>> SET_[EPS_FIR_LOCAL_WOF_26]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_26(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_26>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_26]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_26]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_26(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_26>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_26]

//>> GET_[EPS_FIR_LOCAL_WOF_26]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_26(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_26,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_26]

//>> GET_[EPS_FIR_LOCAL_WOF_26]
static inline bool GET_EPS_FIR_LOCAL_WOF_26(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_26>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_26]

//>> SET_[EPS_FIR_LOCAL_WOF_27]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_27(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_27,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_27]

//>> SET_[EPS_FIR_LOCAL_WOF_27]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_27(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_27,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_27]

//>> SET_[EPS_FIR_LOCAL_WOF_27]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_27(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_27>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_27]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_27]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_27(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_27>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_27]

//>> GET_[EPS_FIR_LOCAL_WOF_27]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_27(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_27,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_27]

//>> GET_[EPS_FIR_LOCAL_WOF_27]
static inline bool GET_EPS_FIR_LOCAL_WOF_27(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_27>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_27]

//>> SET_[EPS_FIR_LOCAL_WOF_28]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_28(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_28,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_28]

//>> SET_[EPS_FIR_LOCAL_WOF_28]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_28(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_28,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_28]

//>> SET_[EPS_FIR_LOCAL_WOF_28]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_28(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_28>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_28]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_28]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_28(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_28>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_28]

//>> GET_[EPS_FIR_LOCAL_WOF_28]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_28(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_28,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_28]

//>> GET_[EPS_FIR_LOCAL_WOF_28]
static inline bool GET_EPS_FIR_LOCAL_WOF_28(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_28>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_28]

//>> SET_[EPS_FIR_LOCAL_WOF_29]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_29(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_29,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_29]

//>> SET_[EPS_FIR_LOCAL_WOF_29]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_29(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_29,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_29]

//>> SET_[EPS_FIR_LOCAL_WOF_29]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_29(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_29>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_29]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_29]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_29(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_29>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_29]

//>> GET_[EPS_FIR_LOCAL_WOF_29]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_29(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_29,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_29]

//>> GET_[EPS_FIR_LOCAL_WOF_29]
static inline bool GET_EPS_FIR_LOCAL_WOF_29(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_29>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_29]

//>> SET_[EPS_FIR_LOCAL_WOF_30]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_30(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_30,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_30]

//>> SET_[EPS_FIR_LOCAL_WOF_30]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_30(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_30,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_30]

//>> SET_[EPS_FIR_LOCAL_WOF_30]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_30(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_30]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_30]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_30(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_30]

//>> GET_[EPS_FIR_LOCAL_WOF_30]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_30(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_30,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_30]

//>> GET_[EPS_FIR_LOCAL_WOF_30]
static inline bool GET_EPS_FIR_LOCAL_WOF_30(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_30]

//>> SET_[EPS_FIR_LOCAL_WOF_31]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_31(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_31,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_31]

//>> SET_[EPS_FIR_LOCAL_WOF_31]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_31(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_31,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_31]

//>> SET_[EPS_FIR_LOCAL_WOF_31]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_31(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_31>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_31]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_31]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_31(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_31>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_31]

//>> GET_[EPS_FIR_LOCAL_WOF_31]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_31(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_31,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_31]

//>> GET_[EPS_FIR_LOCAL_WOF_31]
static inline bool GET_EPS_FIR_LOCAL_WOF_31(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_31>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_31]

//>> SET_[EPS_FIR_LOCAL_WOF_32]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_32(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_32,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_32]

//>> SET_[EPS_FIR_LOCAL_WOF_32]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_32(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_32,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_32]

//>> SET_[EPS_FIR_LOCAL_WOF_32]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_32(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_32>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_32]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_32]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_32(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_32>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_32]

//>> GET_[EPS_FIR_LOCAL_WOF_32]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_32(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_32,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_32]

//>> GET_[EPS_FIR_LOCAL_WOF_32]
static inline bool GET_EPS_FIR_LOCAL_WOF_32(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_32>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_32]

//>> SET_[EPS_FIR_LOCAL_WOF_33]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_33(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_33,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_33]

//>> SET_[EPS_FIR_LOCAL_WOF_33]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_33(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_33,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_33]

//>> SET_[EPS_FIR_LOCAL_WOF_33]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_33(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_33>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_33]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_33]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_33(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_33>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_33]

//>> GET_[EPS_FIR_LOCAL_WOF_33]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_33(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_33,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_33]

//>> GET_[EPS_FIR_LOCAL_WOF_33]
static inline bool GET_EPS_FIR_LOCAL_WOF_33(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_33>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_33]

//>> SET_[EPS_FIR_LOCAL_WOF_34]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_34(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_34,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_34]

//>> SET_[EPS_FIR_LOCAL_WOF_34]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_34(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_34,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_34]

//>> SET_[EPS_FIR_LOCAL_WOF_34]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_34(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_34>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_34]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_34]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_34(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_34>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_34]

//>> GET_[EPS_FIR_LOCAL_WOF_34]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_34(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_34,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_34]

//>> GET_[EPS_FIR_LOCAL_WOF_34]
static inline bool GET_EPS_FIR_LOCAL_WOF_34(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_34>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_34]

//>> SET_[EPS_FIR_LOCAL_WOF_35]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_35(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_35,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_35]

//>> SET_[EPS_FIR_LOCAL_WOF_35]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_35(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_35,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_35]

//>> SET_[EPS_FIR_LOCAL_WOF_35]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_35(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_35>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_35]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_35]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_35(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_35>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_35]

//>> GET_[EPS_FIR_LOCAL_WOF_35]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_35(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_35,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_35]

//>> GET_[EPS_FIR_LOCAL_WOF_35]
static inline bool GET_EPS_FIR_LOCAL_WOF_35(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_35>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_35]

//>> SET_[EPS_FIR_LOCAL_WOF_36]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_36(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_36,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_36]

//>> SET_[EPS_FIR_LOCAL_WOF_36]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_36(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_36,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_36]

//>> SET_[EPS_FIR_LOCAL_WOF_36]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_36(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_36>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_36]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_36]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_36(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_36>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_36]

//>> GET_[EPS_FIR_LOCAL_WOF_36]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_36(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_36,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_36]

//>> GET_[EPS_FIR_LOCAL_WOF_36]
static inline bool GET_EPS_FIR_LOCAL_WOF_36(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_36>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_36]

//>> SET_[EPS_FIR_LOCAL_WOF_37]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_37(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_37,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_37]

//>> SET_[EPS_FIR_LOCAL_WOF_37]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_37(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_37,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_37]

//>> SET_[EPS_FIR_LOCAL_WOF_37]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_37(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_37>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_37]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_37]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_37(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_37>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_37]

//>> GET_[EPS_FIR_LOCAL_WOF_37]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_37(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_37,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_37]

//>> GET_[EPS_FIR_LOCAL_WOF_37]
static inline bool GET_EPS_FIR_LOCAL_WOF_37(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_37>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_37]

//>> SET_[EPS_FIR_LOCAL_WOF_38]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_38(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_38,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_38]

//>> SET_[EPS_FIR_LOCAL_WOF_38]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_38(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_38,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_38]

//>> SET_[EPS_FIR_LOCAL_WOF_38]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_38(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_38>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_38]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_38]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_38(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_38>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_38]

//>> GET_[EPS_FIR_LOCAL_WOF_38]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_38(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_38,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_38]

//>> GET_[EPS_FIR_LOCAL_WOF_38]
static inline bool GET_EPS_FIR_LOCAL_WOF_38(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_38>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_38]

//>> SET_[EPS_FIR_LOCAL_WOF_39]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_39(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_39,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_39]

//>> SET_[EPS_FIR_LOCAL_WOF_39]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_39(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_39,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_39]

//>> SET_[EPS_FIR_LOCAL_WOF_39]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_39(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_39>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_39]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_39]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_39(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_39>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_39]

//>> GET_[EPS_FIR_LOCAL_WOF_39]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_39(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_39,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_39]

//>> GET_[EPS_FIR_LOCAL_WOF_39]
static inline bool GET_EPS_FIR_LOCAL_WOF_39(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_39>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_39]

//>> SET_[EPS_FIR_LOCAL_WOF_40]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_40(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_40,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_40]

//>> SET_[EPS_FIR_LOCAL_WOF_40]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_40(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_40,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_40]

//>> SET_[EPS_FIR_LOCAL_WOF_40]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_40(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_40>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_40]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_40]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_40(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_40>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_40]

//>> GET_[EPS_FIR_LOCAL_WOF_40]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_40(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_40,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_40]

//>> GET_[EPS_FIR_LOCAL_WOF_40]
static inline bool GET_EPS_FIR_LOCAL_WOF_40(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_40>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_40]

//>> SET_[EPS_FIR_LOCAL_WOF_41]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_41(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_41,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_41]

//>> SET_[EPS_FIR_LOCAL_WOF_41]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_41(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_41,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_41]

//>> SET_[EPS_FIR_LOCAL_WOF_41]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_41(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_41>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_41]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_41]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_41(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_41>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_41]

//>> GET_[EPS_FIR_LOCAL_WOF_41]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_41(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_41,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_41]

//>> GET_[EPS_FIR_LOCAL_WOF_41]
static inline bool GET_EPS_FIR_LOCAL_WOF_41(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_41>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_41]

//>> SET_[EPS_FIR_LOCAL_WOF_42]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_42(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_42,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_42]

//>> SET_[EPS_FIR_LOCAL_WOF_42]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_42(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_42,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_42]

//>> SET_[EPS_FIR_LOCAL_WOF_42]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_42(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_42>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_42]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_42]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_42(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_42>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_42]

//>> GET_[EPS_FIR_LOCAL_WOF_42]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_42(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_42,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_42]

//>> GET_[EPS_FIR_LOCAL_WOF_42]
static inline bool GET_EPS_FIR_LOCAL_WOF_42(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_42>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_42]

//>> SET_[EPS_FIR_LOCAL_WOF_43]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_43(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_43,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_43]

//>> SET_[EPS_FIR_LOCAL_WOF_43]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_43(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_43,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_43]

//>> SET_[EPS_FIR_LOCAL_WOF_43]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_43(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_43>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_43]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_43]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_43(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_43>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_43]

//>> GET_[EPS_FIR_LOCAL_WOF_43]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_43(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_43,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_43]

//>> GET_[EPS_FIR_LOCAL_WOF_43]
static inline bool GET_EPS_FIR_LOCAL_WOF_43(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_43>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_43]

//>> SET_[EPS_FIR_LOCAL_WOF_44]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_44(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_44,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_44]

//>> SET_[EPS_FIR_LOCAL_WOF_44]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_44(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_44,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_44]

//>> SET_[EPS_FIR_LOCAL_WOF_44]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_44(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_44>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_44]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_44]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_44(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_44>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_44]

//>> GET_[EPS_FIR_LOCAL_WOF_44]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_44(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_44,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_44]

//>> GET_[EPS_FIR_LOCAL_WOF_44]
static inline bool GET_EPS_FIR_LOCAL_WOF_44(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_44>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_44]

//>> SET_[EPS_FIR_LOCAL_WOF_45]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_45(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_45,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_45]

//>> SET_[EPS_FIR_LOCAL_WOF_45]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_45(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_45,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_45]

//>> SET_[EPS_FIR_LOCAL_WOF_45]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_45(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_45>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_45]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_45]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_45(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_45>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_45]

//>> GET_[EPS_FIR_LOCAL_WOF_45]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_45(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_45,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_45]

//>> GET_[EPS_FIR_LOCAL_WOF_45]
static inline bool GET_EPS_FIR_LOCAL_WOF_45(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_45>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_45]

//>> SET_[EPS_FIR_LOCAL_WOF_46]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_46(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_46,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_46]

//>> SET_[EPS_FIR_LOCAL_WOF_46]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_46(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_46,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_46]

//>> SET_[EPS_FIR_LOCAL_WOF_46]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_46(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_46>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_46]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_46]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_46(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_46>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_46]

//>> GET_[EPS_FIR_LOCAL_WOF_46]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_46(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_46,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_46]

//>> GET_[EPS_FIR_LOCAL_WOF_46]
static inline bool GET_EPS_FIR_LOCAL_WOF_46(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_46>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_46]

//>> SET_[EPS_FIR_LOCAL_WOF_47]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_47(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_47,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_47]

//>> SET_[EPS_FIR_LOCAL_WOF_47]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_47(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_47,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_47]

//>> SET_[EPS_FIR_LOCAL_WOF_47]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_47(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_47>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_47]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_47]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_47(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_47>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_47]

//>> GET_[EPS_FIR_LOCAL_WOF_47]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_47(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_47,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_47]

//>> GET_[EPS_FIR_LOCAL_WOF_47]
static inline bool GET_EPS_FIR_LOCAL_WOF_47(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_47>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_47]

//>> SET_[EPS_FIR_LOCAL_WOF_48]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_48(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_48,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_48]

//>> SET_[EPS_FIR_LOCAL_WOF_48]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_48(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_48,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_48]

//>> SET_[EPS_FIR_LOCAL_WOF_48]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_48(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_48>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_48]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_48]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_48(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_48>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_48]

//>> GET_[EPS_FIR_LOCAL_WOF_48]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_48(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_48,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_48]

//>> GET_[EPS_FIR_LOCAL_WOF_48]
static inline bool GET_EPS_FIR_LOCAL_WOF_48(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_48>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_48]

//>> SET_[EPS_FIR_LOCAL_WOF_49]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_49(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_49,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_49]

//>> SET_[EPS_FIR_LOCAL_WOF_49]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_49(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_49,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_49]

//>> SET_[EPS_FIR_LOCAL_WOF_49]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_49(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_49>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_49]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_49]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_49(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_49>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_49]

//>> GET_[EPS_FIR_LOCAL_WOF_49]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_49(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_49,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_49]

//>> GET_[EPS_FIR_LOCAL_WOF_49]
static inline bool GET_EPS_FIR_LOCAL_WOF_49(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_49>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_49]

//>> SET_[EPS_FIR_LOCAL_WOF_50]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_50(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_50,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_50]

//>> SET_[EPS_FIR_LOCAL_WOF_50]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_50(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_50,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_50]

//>> SET_[EPS_FIR_LOCAL_WOF_50]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_50(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_50>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_50]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_50]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_50(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_50>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_50]

//>> GET_[EPS_FIR_LOCAL_WOF_50]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_50(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_50,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_50]

//>> GET_[EPS_FIR_LOCAL_WOF_50]
static inline bool GET_EPS_FIR_LOCAL_WOF_50(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_50>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_50]

//>> SET_[EPS_FIR_LOCAL_WOF_51]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_51(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_51,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_51]

//>> SET_[EPS_FIR_LOCAL_WOF_51]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_51(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_51,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_51]

//>> SET_[EPS_FIR_LOCAL_WOF_51]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_51(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_51>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_51]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_51]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_51(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_51>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_51]

//>> GET_[EPS_FIR_LOCAL_WOF_51]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_51(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_51,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_51]

//>> GET_[EPS_FIR_LOCAL_WOF_51]
static inline bool GET_EPS_FIR_LOCAL_WOF_51(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_51>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_51]

//>> SET_[EPS_FIR_LOCAL_WOF_52]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_52(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_52,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_52]

//>> SET_[EPS_FIR_LOCAL_WOF_52]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_52(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_52,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_52]

//>> SET_[EPS_FIR_LOCAL_WOF_52]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_52(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_52>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_52]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_52]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_52(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_52>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_52]

//>> GET_[EPS_FIR_LOCAL_WOF_52]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_52(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_52,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_52]

//>> GET_[EPS_FIR_LOCAL_WOF_52]
static inline bool GET_EPS_FIR_LOCAL_WOF_52(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_52>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_52]

//>> SET_[EPS_FIR_LOCAL_WOF_53]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_53(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_53,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_53]

//>> SET_[EPS_FIR_LOCAL_WOF_53]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_53(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_53,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_53]

//>> SET_[EPS_FIR_LOCAL_WOF_53]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_53(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_53>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_53]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_53]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_53(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_53>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_53]

//>> GET_[EPS_FIR_LOCAL_WOF_53]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_53(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_53,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_53]

//>> GET_[EPS_FIR_LOCAL_WOF_53]
static inline bool GET_EPS_FIR_LOCAL_WOF_53(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_53>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_53]

//>> SET_[EPS_FIR_LOCAL_WOF_54]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_54(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_54,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_54 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_54]

//>> SET_[EPS_FIR_LOCAL_WOF_54]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_54(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_54,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_54 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_54]

//>> SET_[EPS_FIR_LOCAL_WOF_54]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_54(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_54>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_54 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_54]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_54]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_54(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_54>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_54 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_54]

//>> GET_[EPS_FIR_LOCAL_WOF_54]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_54(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_54,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_54 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_54]

//>> GET_[EPS_FIR_LOCAL_WOF_54]
static inline bool GET_EPS_FIR_LOCAL_WOF_54(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_54>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_54 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_54]

//>> SET_[EPS_FIR_LOCAL_WOF_55]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_55(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_55,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_55 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_55]

//>> SET_[EPS_FIR_LOCAL_WOF_55]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_55(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_55,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_55 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_55]

//>> SET_[EPS_FIR_LOCAL_WOF_55]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_55(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_55>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_55 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_55]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_55]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_55(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_55>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_55 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_55]

//>> GET_[EPS_FIR_LOCAL_WOF_55]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_55(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_55,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_55 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_55]

//>> GET_[EPS_FIR_LOCAL_WOF_55]
static inline bool GET_EPS_FIR_LOCAL_WOF_55(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_55>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_55 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_55]

//>> SET_[EPS_FIR_LOCAL_WOF_56]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_56(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_56,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_56 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_56]

//>> SET_[EPS_FIR_LOCAL_WOF_56]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_56(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_56,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_56 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_56]

//>> SET_[EPS_FIR_LOCAL_WOF_56]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_56(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_56>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_56 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_56]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_56]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_56(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_56>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_56 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_56]

//>> GET_[EPS_FIR_LOCAL_WOF_56]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_56(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_56,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_56 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_56]

//>> GET_[EPS_FIR_LOCAL_WOF_56]
static inline bool GET_EPS_FIR_LOCAL_WOF_56(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_56>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_56 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_56]

//>> SET_[EPS_FIR_LOCAL_WOF_57]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_57(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_57,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_57 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_57]

//>> SET_[EPS_FIR_LOCAL_WOF_57]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_57(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_57,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_57 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_57]

//>> SET_[EPS_FIR_LOCAL_WOF_57]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_57(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_57>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_57 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_57]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_57]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_57(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_57>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_57 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_57]

//>> GET_[EPS_FIR_LOCAL_WOF_57]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_57(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_57,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_57 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_57]

//>> GET_[EPS_FIR_LOCAL_WOF_57]
static inline bool GET_EPS_FIR_LOCAL_WOF_57(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_57>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_57 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_57]

//>> SET_[EPS_FIR_LOCAL_WOF_58]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_58(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_58,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_58 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_58]

//>> SET_[EPS_FIR_LOCAL_WOF_58]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_58(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_58,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_58 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_58]

//>> SET_[EPS_FIR_LOCAL_WOF_58]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_58(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_58>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_58 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_58]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_58]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_58(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_58>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_58 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_58]

//>> GET_[EPS_FIR_LOCAL_WOF_58]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_58(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_58,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_58 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_58]

//>> GET_[EPS_FIR_LOCAL_WOF_58]
static inline bool GET_EPS_FIR_LOCAL_WOF_58(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_58>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_58 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_58]

//>> SET_[EPS_FIR_LOCAL_WOF_59]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_59(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_59,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_59]

//>> SET_[EPS_FIR_LOCAL_WOF_59]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_59(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_59,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_59]

//>> SET_[EPS_FIR_LOCAL_WOF_59]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_59(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_59>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_59]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_59]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_59(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_59>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_59]

//>> GET_[EPS_FIR_LOCAL_WOF_59]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_59(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_59,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_59]

//>> GET_[EPS_FIR_LOCAL_WOF_59]
static inline bool GET_EPS_FIR_LOCAL_WOF_59(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_59>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_59]

//>> SET_[EPS_FIR_LOCAL_WOF_60]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_60(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_60,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_60 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_60]

//>> SET_[EPS_FIR_LOCAL_WOF_60]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_60(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_60,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_60 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_60]

//>> SET_[EPS_FIR_LOCAL_WOF_60]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_60(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_60>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_60 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_60]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_60]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_60(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_60>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_60 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_60]

//>> GET_[EPS_FIR_LOCAL_WOF_60]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_60(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_60,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_60 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_60]

//>> GET_[EPS_FIR_LOCAL_WOF_60]
static inline bool GET_EPS_FIR_LOCAL_WOF_60(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_60>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_60 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_60]

//>> SET_[EPS_FIR_LOCAL_WOF_61]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_61(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_61,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_61 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_61]

//>> SET_[EPS_FIR_LOCAL_WOF_61]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_61(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_61,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_61 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_61]

//>> SET_[EPS_FIR_LOCAL_WOF_61]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_61(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_61>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_61 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_61]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_61]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_61(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_61>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_61 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_61]

//>> GET_[EPS_FIR_LOCAL_WOF_61]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_61(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_61,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_61 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_61]

//>> GET_[EPS_FIR_LOCAL_WOF_61]
static inline bool GET_EPS_FIR_LOCAL_WOF_61(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_61>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_61 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_61]

//>> SET_[EPS_FIR_LOCAL_WOF_62]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_62(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_62,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_62 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_62]

//>> SET_[EPS_FIR_LOCAL_WOF_62]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_62(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_62,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_62 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_62]

//>> SET_[EPS_FIR_LOCAL_WOF_62]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_62(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_62>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_62 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_62]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_62]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_62(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_62>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_62 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_62]

//>> GET_[EPS_FIR_LOCAL_WOF_62]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_62(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_62,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_62 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_62]

//>> GET_[EPS_FIR_LOCAL_WOF_62]
static inline bool GET_EPS_FIR_LOCAL_WOF_62(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_62>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_62 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_62]

//>> SET_[EPS_FIR_LOCAL_WOF_63]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_63(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_63,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_63]

//>> SET_[EPS_FIR_LOCAL_WOF_63]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_63(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.insertFromRight<EPS_FIR_LOCAL_WOF_63,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_63]

//>> SET_[EPS_FIR_LOCAL_WOF_63]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_LOCAL_WOF_63(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.setBit<EPS_FIR_LOCAL_WOF_63>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_LOCAL_WOF_63]

//>> CLEAR_[EPS_FIR_LOCAL_WOF_63]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_LOCAL_WOF_63(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return o_data.clearBit<EPS_FIR_LOCAL_WOF_63>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_LOCAL_WOF_63]

//>> GET_[EPS_FIR_LOCAL_WOF_63]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_LOCAL_WOF_63(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.extractToRight<EPS_FIR_LOCAL_WOF_63,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_63]

//>> GET_[EPS_FIR_LOCAL_WOF_63]
static inline bool GET_EPS_FIR_LOCAL_WOF_63(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_WOF));
#endif
    return i_data.getBit<EPS_FIR_LOCAL_WOF_63>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_LOCAL_WOF_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_LOCAL_WOF_63]

//>> PREP_[EPS_THERM_WSUB2_SKITTER_DATA0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_THERM_WSUB2_SKITTER_DATA0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB2_SKITTER_DATA0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_THERM_WSUB2_SKITTER_DATA0]

//>> GET_[EPS_THERM_WSUB2_SKITTER_DATA0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_THERM_WSUB2_SKITTER_DATA0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB2_SKITTER_DATA0;
#endif
    return fapi2::getScom(i_target, EPS_THERM_WSUB2_SKITTER_DATA0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_THERM_WSUB2_SKITTER_DATA0]

//>> PUT_[EPS_THERM_WSUB2_SKITTER_DATA0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_THERM_WSUB2_SKITTER_DATA0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_DATA0));
#endif
    return fapi2::putScom(i_target, EPS_THERM_WSUB2_SKITTER_DATA0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_THERM_WSUB2_SKITTER_DATA0]


//>> PREP_[EPS_THERM_WSUB2_SKITTER_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_THERM_WSUB2_SKITTER_MODE_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB2_SKITTER_MODE_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_THERM_WSUB2_SKITTER_MODE_REG]

//>> GET_[EPS_THERM_WSUB2_SKITTER_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_THERM_WSUB2_SKITTER_MODE_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB2_SKITTER_MODE_REG;
#endif
    return fapi2::getScom(i_target, EPS_THERM_WSUB2_SKITTER_MODE_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_THERM_WSUB2_SKITTER_MODE_REG]

//>> PUT_[EPS_THERM_WSUB2_SKITTER_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_THERM_WSUB2_SKITTER_MODE_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return fapi2::putScom(i_target, EPS_THERM_WSUB2_SKITTER_MODE_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_THERM_WSUB2_SKITTER_MODE_REG]


//>> SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return o_data.setBit<EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> CLEAR_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return o_data.clearBit<EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> GET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> GET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline bool GET_EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return i_data.getBit<EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB2_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB2_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB2_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB2_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB2_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return o_data.setBit<EPS_THERM_WSUB2_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> CLEAR_[EPS_THERM_WSUB2_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_THERM_WSUB2_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return o_data.clearBit<EPS_THERM_WSUB2_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_THERM_WSUB2_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> GET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB2_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB2_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> GET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline bool GET_EPS_THERM_WSUB2_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return i_data.getBit<EPS_THERM_WSUB2_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL,
           EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]

//>> SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL,
           EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]

//>> GET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL,
           EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]

//>> SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL,
           EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]

//>> SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL,
           EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]

//>> GET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL,
           EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]

//>> SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS,
           EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]

//>> SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS,
           EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]

//>> GET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS,
           EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]

//>> SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return o_data.setBit<EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> CLEAR_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return o_data.clearBit<EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> GET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> GET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline bool GET_EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return i_data.getBit<EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_DATA_V_LT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_DATA_V_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_DATA_V_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_DATA_V_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_DATA_V_LT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return o_data.setBit<EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_DATA_V_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> CLEAR_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_DATA_V_LT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return o_data.clearBit<EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_DATA_V_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> GET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_DATA_V_LT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_DATA_V_LT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> GET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline bool GET_EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_DATA_V_LT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_MODE_REG));
#endif
    return i_data.getBit<EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_DATA_V_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB2_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> PREP_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_THERM_WSUB_SKITTER_CLKSRC_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_CLKSRC_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG]

//>> GET_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_THERM_WSUB_SKITTER_CLKSRC_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_CLKSRC_REG;
#endif
    return fapi2::getScom(i_target, EPS_THERM_WSUB_SKITTER_CLKSRC_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG]

//>> PUT_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_THERM_WSUB_SKITTER_CLKSRC_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_CLKSRC_REG));
#endif
    return fapi2::putScom(i_target, EPS_THERM_WSUB_SKITTER_CLKSRC_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG]


//>> SET_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_CLKSRC_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC,
           EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC]

//>> SET_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_CLKSRC_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC,
           EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC]

//>> GET_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_CLKSRC_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC,
           EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG_CLKSRC]

//>> SET_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_CLKSRC_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT,
           EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT]

//>> SET_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_CLKSRC_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT,
           EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT]

//>> GET_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_CLKSRC_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT,
           EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_CLKSRC_REG_DELAY_SELECT]

//>> PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI]

//>> GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_14_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_14_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_14_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1A_DATA_AREA_14_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_14_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_14_RW]

//>> GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_14_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1A_DATA_AREA_14_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_14_RW;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_14_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_14_RW]

//>> PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_14_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1A_DATA_AREA_14_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_14_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_14_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_14_RW]


//>> SET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_14_MDA_M1A_DATA_AREA_14]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1A_DATA_AREA_14_MDA_M1A_DATA_AREA_14(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_14_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1A_DATA_AREA_14_MDA_M1A_DATA_AREA_14,
           FSXCOMP_FSXLOG_M1A_DATA_AREA_14_MDA_M1A_DATA_AREA_14_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1A_DATA_AREA_14_MDA_M1A_DATA_AREA_14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_14_MDA_M1A_DATA_AREA_14]

//>> SET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_14_MDA_M1A_DATA_AREA_14]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1A_DATA_AREA_14_MDA_M1A_DATA_AREA_14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_14_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1A_DATA_AREA_14_MDA_M1A_DATA_AREA_14,
           FSXCOMP_FSXLOG_M1A_DATA_AREA_14_MDA_M1A_DATA_AREA_14_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1A_DATA_AREA_14_MDA_M1A_DATA_AREA_14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_14_MDA_M1A_DATA_AREA_14]

//>> GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_14_MDA_M1A_DATA_AREA_14]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M1A_DATA_AREA_14_MDA_M1A_DATA_AREA_14(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_14_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_14_RW));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M1A_DATA_AREA_14_MDA_M1A_DATA_AREA_14,
           FSXCOMP_FSXLOG_M1A_DATA_AREA_14_MDA_M1A_DATA_AREA_14_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1A_DATA_AREA_14_MDA_M1A_DATA_AREA_14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_14_MDA_M1A_DATA_AREA_14]

//>> PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI]

//>> GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_3_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_3_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_3_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1A_DATA_AREA_3_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_3_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_3_RW]

//>> GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_3_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1A_DATA_AREA_3_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_3_RW;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_3_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_3_RW]

//>> PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_3_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1A_DATA_AREA_3_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_3_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_3_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_3_RW]


//>> SET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_3_MDA_M1A_DATA_AREA_3]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1A_DATA_AREA_3_MDA_M1A_DATA_AREA_3(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_3_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1A_DATA_AREA_3_MDA_M1A_DATA_AREA_3,
           FSXCOMP_FSXLOG_M1A_DATA_AREA_3_MDA_M1A_DATA_AREA_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1A_DATA_AREA_3_MDA_M1A_DATA_AREA_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_3_MDA_M1A_DATA_AREA_3]

//>> SET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_3_MDA_M1A_DATA_AREA_3]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1A_DATA_AREA_3_MDA_M1A_DATA_AREA_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_3_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1A_DATA_AREA_3_MDA_M1A_DATA_AREA_3,
           FSXCOMP_FSXLOG_M1A_DATA_AREA_3_MDA_M1A_DATA_AREA_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1A_DATA_AREA_3_MDA_M1A_DATA_AREA_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_3_MDA_M1A_DATA_AREA_3]

//>> GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_3_MDA_M1A_DATA_AREA_3]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M1A_DATA_AREA_3_MDA_M1A_DATA_AREA_3(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_3_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_3_RW));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M1A_DATA_AREA_3_MDA_M1A_DATA_AREA_3,
           FSXCOMP_FSXLOG_M1A_DATA_AREA_3_MDA_M1A_DATA_AREA_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1A_DATA_AREA_3_MDA_M1A_DATA_AREA_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_3_MDA_M1A_DATA_AREA_3]

//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_9_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_9_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_9_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_9_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_9_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_9_RO]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_9_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_9_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_9_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_9_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_9_RO]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_9_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_9_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_9_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_9_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_9_RO]


//>> SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_9_MDA_M1B_DATA_AREA_9]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1B_DATA_AREA_9_MDA_M1B_DATA_AREA_9(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_9_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_9_MDA_M1B_DATA_AREA_9,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_9_MDA_M1B_DATA_AREA_9_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_9_MDA_M1B_DATA_AREA_9 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_9_MDA_M1B_DATA_AREA_9]

//>> SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_9_MDA_M1B_DATA_AREA_9]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1B_DATA_AREA_9_MDA_M1B_DATA_AREA_9(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_9_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_9_MDA_M1B_DATA_AREA_9,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_9_MDA_M1B_DATA_AREA_9_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_9_MDA_M1B_DATA_AREA_9 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_9_MDA_M1B_DATA_AREA_9]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_9_MDA_M1B_DATA_AREA_9]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_9_MDA_M1B_DATA_AREA_9(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_9_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_9_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_9_MDA_M1B_DATA_AREA_9,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_9_MDA_M1B_DATA_AREA_9_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_9_MDA_M1B_DATA_AREA_9 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_9_MDA_M1B_DATA_AREA_9]

//>> PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_10_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_10_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_10_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2A_DATA_AREA_10_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_10_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_10_RW]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_10_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_10_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_10_RW;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_10_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_10_RW]

//>> PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_10_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2A_DATA_AREA_10_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_10_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_10_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_10_RW]


//>> SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_10_MDA_M2A_DATA_AREA_10]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2A_DATA_AREA_10_MDA_M2A_DATA_AREA_10(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_10_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2A_DATA_AREA_10_MDA_M2A_DATA_AREA_10,
           FSXCOMP_FSXLOG_M2A_DATA_AREA_10_MDA_M2A_DATA_AREA_10_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2A_DATA_AREA_10_MDA_M2A_DATA_AREA_10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_10_MDA_M2A_DATA_AREA_10]

//>> SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_10_MDA_M2A_DATA_AREA_10]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2A_DATA_AREA_10_MDA_M2A_DATA_AREA_10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_10_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2A_DATA_AREA_10_MDA_M2A_DATA_AREA_10,
           FSXCOMP_FSXLOG_M2A_DATA_AREA_10_MDA_M2A_DATA_AREA_10_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2A_DATA_AREA_10_MDA_M2A_DATA_AREA_10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_10_MDA_M2A_DATA_AREA_10]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_10_MDA_M2A_DATA_AREA_10]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_10_MDA_M2A_DATA_AREA_10(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_10_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_10_RW));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M2A_DATA_AREA_10_MDA_M2A_DATA_AREA_10,
           FSXCOMP_FSXLOG_M2A_DATA_AREA_10_MDA_M2A_DATA_AREA_10_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2A_DATA_AREA_10_MDA_M2A_DATA_AREA_10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_10_MDA_M2A_DATA_AREA_10]

//>> PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_5_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_5_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_5_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2B_DATA_AREA_5_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_5_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_5_RO]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_5_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_5_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_5_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_5_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_5_RO]

//>> PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_5_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2B_DATA_AREA_5_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_5_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_5_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_5_RO]


//>> SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_5_MDA_M2B_DATA_AREA_5]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2B_DATA_AREA_5_MDA_M2B_DATA_AREA_5(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_5_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2B_DATA_AREA_5_MDA_M2B_DATA_AREA_5,
           FSXCOMP_FSXLOG_M2B_DATA_AREA_5_MDA_M2B_DATA_AREA_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2B_DATA_AREA_5_MDA_M2B_DATA_AREA_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_5_MDA_M2B_DATA_AREA_5]

//>> SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_5_MDA_M2B_DATA_AREA_5]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2B_DATA_AREA_5_MDA_M2B_DATA_AREA_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_5_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2B_DATA_AREA_5_MDA_M2B_DATA_AREA_5,
           FSXCOMP_FSXLOG_M2B_DATA_AREA_5_MDA_M2B_DATA_AREA_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2B_DATA_AREA_5_MDA_M2B_DATA_AREA_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_5_MDA_M2B_DATA_AREA_5]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_5_MDA_M2B_DATA_AREA_5]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_5_MDA_M2B_DATA_AREA_5(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_5_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_5_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M2B_DATA_AREA_5_MDA_M2B_DATA_AREA_5,
           FSXCOMP_FSXLOG_M2B_DATA_AREA_5_MDA_M2B_DATA_AREA_5_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2B_DATA_AREA_5_MDA_M2B_DATA_AREA_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_5_MDA_M2B_DATA_AREA_5]

//>> PREP_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI]

//>> GET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI]

//>> PUT_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI]

//>> PREP_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR]

//>> GET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR]

//>> PUT_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR]


//>> SET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_0_RESERVED]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_0_RESERVED(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_0_RESERVED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_0_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_0_RESERVED]

//>> SET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_0_RESERVED]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_0_RESERVED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_0_RESERVED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_0_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_0_RESERVED]

//>> SET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_0_RESERVED]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_0_RESERVED(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_0_RESERVED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_0_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_0_RESERVED]

//>> CLEAR_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_0_RESERVED]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_0_RESERVED(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_0_RESERVED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_0_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_0_RESERVED]

//>> GET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_0_RESERVED]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_0_RESERVED(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_0_RESERVED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_0_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_0_RESERVED]

//>> GET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_0_RESERVED]
static inline bool GET_FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_0_RESERVED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_0_RESERVED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_0_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_0_RESERVED]

//>> SET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_DCC_BYPASS_EN_DC]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_DCC_BYPASS_EN_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_DCC_BYPASS_EN_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_DCC_BYPASS_EN_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_DCC_BYPASS_EN_DC]

//>> SET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_DCC_BYPASS_EN_DC]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_DCC_BYPASS_EN_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_DCC_BYPASS_EN_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_DCC_BYPASS_EN_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_DCC_BYPASS_EN_DC]

//>> SET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_DCC_BYPASS_EN_DC]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_DCC_BYPASS_EN_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_DCC_BYPASS_EN_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_DCC_BYPASS_EN_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_DCC_BYPASS_EN_DC]

//>> CLEAR_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_DCC_BYPASS_EN_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_DCC_BYPASS_EN_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_DCC_BYPASS_EN_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_DCC_BYPASS_EN_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_DCC_BYPASS_EN_DC]

//>> GET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_DCC_BYPASS_EN_DC]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_DCC_BYPASS_EN_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_DCC_BYPASS_EN_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_DCC_BYPASS_EN_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_DCC_BYPASS_EN_DC]

//>> GET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_DCC_BYPASS_EN_DC]
static inline bool GET_FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_DCC_BYPASS_EN_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_DCC_BYPASS_EN_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_DCC_BYPASS_EN_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_DCC_BYPASS_EN_DC]

//>> SET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_PDLY_BYPASS_EN_DC]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_PDLY_BYPASS_EN_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_PDLY_BYPASS_EN_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_PDLY_BYPASS_EN_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_PDLY_BYPASS_EN_DC]

//>> SET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_PDLY_BYPASS_EN_DC]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_PDLY_BYPASS_EN_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_PDLY_BYPASS_EN_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_PDLY_BYPASS_EN_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_PDLY_BYPASS_EN_DC]

//>> SET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_PDLY_BYPASS_EN_DC]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_PDLY_BYPASS_EN_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_PDLY_BYPASS_EN_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_PDLY_BYPASS_EN_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_PDLY_BYPASS_EN_DC]

//>> CLEAR_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_PDLY_BYPASS_EN_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_PDLY_BYPASS_EN_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_PDLY_BYPASS_EN_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_PDLY_BYPASS_EN_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_PDLY_BYPASS_EN_DC]

//>> GET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_PDLY_BYPASS_EN_DC]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_PDLY_BYPASS_EN_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_PDLY_BYPASS_EN_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_PDLY_BYPASS_EN_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_PDLY_BYPASS_EN_DC]

//>> GET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_PDLY_BYPASS_EN_DC]
static inline bool GET_FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_PDLY_BYPASS_EN_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_PDLY_BYPASS_EN_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_PDLY_BYPASS_EN_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_CHIPLET_CLK_PDLY_BYPASS_EN_DC]

//>> SET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_3_15_RESERVED]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_3_15_RESERVED(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_3_15_RESERVED,
           FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_3_15_RESERVED_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_3_15_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_3_15_RESERVED]

//>> SET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_3_15_RESERVED]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_3_15_RESERVED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_3_15_RESERVED,
           FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_3_15_RESERVED_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_3_15_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_3_15_RESERVED]

//>> GET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_3_15_RESERVED]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_3_15_RESERVED(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_3_15_RESERVED,
           FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_3_15_RESERVED_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_3_15_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_3_15_RESERVED]

//>> SET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_SEC_BUF_DRV_STRENGTH_DC]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_SEC_BUF_DRV_STRENGTH_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_SEC_BUF_DRV_STRENGTH_DC,
           FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_SEC_BUF_DRV_STRENGTH_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_SEC_BUF_DRV_STRENGTH_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_SEC_BUF_DRV_STRENGTH_DC]

//>> SET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_SEC_BUF_DRV_STRENGTH_DC]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_SEC_BUF_DRV_STRENGTH_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_SEC_BUF_DRV_STRENGTH_DC,
           FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_SEC_BUF_DRV_STRENGTH_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_SEC_BUF_DRV_STRENGTH_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_SEC_BUF_DRV_STRENGTH_DC]

//>> GET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_SEC_BUF_DRV_STRENGTH_DC]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_SEC_BUF_DRV_STRENGTH_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_SEC_BUF_DRV_STRENGTH_DC,
           FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_SEC_BUF_DRV_STRENGTH_DC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_SEC_BUF_DRV_STRENGTH_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_TP_SEC_BUF_DRV_STRENGTH_DC]

//>> SET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_20_31_RESERVED]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_20_31_RESERVED(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_20_31_RESERVED,
           FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_20_31_RESERVED_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_20_31_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_20_31_RESERVED]

//>> SET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_20_31_RESERVED]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_20_31_RESERVED(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_20_31_RESERVED,
           FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_20_31_RESERVED_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_20_31_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_20_31_RESERVED]

//>> GET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_20_31_RESERVED]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_20_31_RESERVED(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI, FSXCOMP_FSXLOG_PERV_CTRL1_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_PERV_CTRL1_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_20_31_RESERVED,
           FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_20_31_RESERVED_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_20_31_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_PERV_CTRL1_SET_PERV_CTRL1_20_31_RESERVED]

//>> PREP_[HANG_PULSE_6_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_HANG_PULSE_6_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = HANG_PULSE_6_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[HANG_PULSE_6_REG]

//>> GET_[HANG_PULSE_6_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_HANG_PULSE_6_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = HANG_PULSE_6_REG;
#endif
    return fapi2::getScom(i_target, HANG_PULSE_6_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[HANG_PULSE_6_REG]

//>> PUT_[HANG_PULSE_6_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_HANG_PULSE_6_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(HANG_PULSE_6_REG));
#endif
    return fapi2::putScom(i_target, HANG_PULSE_6_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[HANG_PULSE_6_REG]


//>> SET_[HANG_PULSE_6_REG_HANG_PULSE_REG_6]
static inline fapi2::buffer<uint64_t>& SET_HANG_PULSE_6_REG_HANG_PULSE_REG_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HANG_PULSE_6_REG));
#endif
    return o_data.insertFromRight<HANG_PULSE_6_REG_HANG_PULSE_REG_6,
           HANG_PULSE_6_REG_HANG_PULSE_REG_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access HANG_PULSE_6_REG_HANG_PULSE_REG_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[HANG_PULSE_6_REG_HANG_PULSE_REG_6]

//>> SET_[HANG_PULSE_6_REG_HANG_PULSE_REG_6]
static inline fapi2::buffer<uint64_t>& SET_HANG_PULSE_6_REG_HANG_PULSE_REG_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HANG_PULSE_6_REG));
#endif
    return o_data.insertFromRight<HANG_PULSE_6_REG_HANG_PULSE_REG_6,
           HANG_PULSE_6_REG_HANG_PULSE_REG_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access HANG_PULSE_6_REG_HANG_PULSE_REG_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[HANG_PULSE_6_REG_HANG_PULSE_REG_6]

//>> GET_[HANG_PULSE_6_REG_HANG_PULSE_REG_6]
static inline fapi2::buffer<uint64_t>& GET_HANG_PULSE_6_REG_HANG_PULSE_REG_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HANG_PULSE_6_REG));
#endif
    return i_data.extractToRight<HANG_PULSE_6_REG_HANG_PULSE_REG_6,
           HANG_PULSE_6_REG_HANG_PULSE_REG_6_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access HANG_PULSE_6_REG_HANG_PULSE_REG_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[HANG_PULSE_6_REG_HANG_PULSE_REG_6]

//>> SET_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]
static inline fapi2::buffer<uint64_t>& SET_HANG_PULSE_6_REG_SUPPRESS_HANG_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HANG_PULSE_6_REG));
#endif
    return o_data.insertFromRight<HANG_PULSE_6_REG_SUPPRESS_HANG_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access HANG_PULSE_6_REG_SUPPRESS_HANG_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]

//>> SET_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]
static inline fapi2::buffer<uint64_t>& SET_HANG_PULSE_6_REG_SUPPRESS_HANG_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HANG_PULSE_6_REG));
#endif
    return o_data.insertFromRight<HANG_PULSE_6_REG_SUPPRESS_HANG_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access HANG_PULSE_6_REG_SUPPRESS_HANG_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]

//>> SET_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]
static inline fapi2::buffer<uint64_t>& SET_HANG_PULSE_6_REG_SUPPRESS_HANG_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HANG_PULSE_6_REG));
#endif
    return o_data.setBit<HANG_PULSE_6_REG_SUPPRESS_HANG_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access HANG_PULSE_6_REG_SUPPRESS_HANG_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]

//>> CLEAR_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]
static inline fapi2::buffer<uint64_t>& CLEAR_HANG_PULSE_6_REG_SUPPRESS_HANG_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HANG_PULSE_6_REG));
#endif
    return o_data.clearBit<HANG_PULSE_6_REG_SUPPRESS_HANG_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access HANG_PULSE_6_REG_SUPPRESS_HANG_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]

//>> GET_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]
static inline fapi2::buffer<uint64_t>& GET_HANG_PULSE_6_REG_SUPPRESS_HANG_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HANG_PULSE_6_REG));
#endif
    return i_data.extractToRight<HANG_PULSE_6_REG_SUPPRESS_HANG_6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access HANG_PULSE_6_REG_SUPPRESS_HANG_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]

//>> GET_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]
static inline bool GET_HANG_PULSE_6_REG_SUPPRESS_HANG_6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HANG_PULSE_6_REG));
#endif
    return i_data.getBit<HANG_PULSE_6_REG_SUPPRESS_HANG_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access HANG_PULSE_6_REG_SUPPRESS_HANG_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[HANG_PULSE_6_REG_SUPPRESS_HANG_6]

//>> PREP_[HOSTATTN_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_HOSTATTN_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = HOSTATTN_INTERRUPT_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[HOSTATTN_INTERRUPT_REG]

//>> GET_[HOSTATTN_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_HOSTATTN_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = HOSTATTN_INTERRUPT_REG;
#endif
    return fapi2::getScom(i_target, HOSTATTN_INTERRUPT_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[HOSTATTN_INTERRUPT_REG]

//>> PUT_[HOSTATTN_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_HOSTATTN_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(HOSTATTN_INTERRUPT_REG));
#endif
    return fapi2::putScom(i_target, HOSTATTN_INTERRUPT_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[HOSTATTN_INTERRUPT_REG]


//>> SET_[HOSTATTN_INTERRUPT_REG_TYPE4]
static inline fapi2::buffer<uint64_t>& SET_HOSTATTN_INTERRUPT_REG_TYPE4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HOSTATTN_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<HOSTATTN_INTERRUPT_REG_TYPE4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access HOSTATTN_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[HOSTATTN_INTERRUPT_REG_TYPE4]

//>> SET_[HOSTATTN_INTERRUPT_REG_TYPE4]
static inline fapi2::buffer<uint64_t>& SET_HOSTATTN_INTERRUPT_REG_TYPE4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HOSTATTN_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<HOSTATTN_INTERRUPT_REG_TYPE4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access HOSTATTN_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[HOSTATTN_INTERRUPT_REG_TYPE4]

//>> SET_[HOSTATTN_INTERRUPT_REG_TYPE4]
static inline fapi2::buffer<uint64_t>& SET_HOSTATTN_INTERRUPT_REG_TYPE4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HOSTATTN_INTERRUPT_REG));
#endif
    return o_data.setBit<HOSTATTN_INTERRUPT_REG_TYPE4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access HOSTATTN_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[HOSTATTN_INTERRUPT_REG_TYPE4]

//>> CLEAR_[HOSTATTN_INTERRUPT_REG_TYPE4]
static inline fapi2::buffer<uint64_t>& CLEAR_HOSTATTN_INTERRUPT_REG_TYPE4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HOSTATTN_INTERRUPT_REG));
#endif
    return o_data.clearBit<HOSTATTN_INTERRUPT_REG_TYPE4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access HOSTATTN_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[HOSTATTN_INTERRUPT_REG_TYPE4]

//>> GET_[HOSTATTN_INTERRUPT_REG_TYPE4]
static inline fapi2::buffer<uint64_t>& GET_HOSTATTN_INTERRUPT_REG_TYPE4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HOSTATTN_INTERRUPT_REG));
#endif
    return i_data.extractToRight<HOSTATTN_INTERRUPT_REG_TYPE4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access HOSTATTN_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[HOSTATTN_INTERRUPT_REG_TYPE4]

//>> GET_[HOSTATTN_INTERRUPT_REG_TYPE4]
static inline bool GET_HOSTATTN_INTERRUPT_REG_TYPE4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HOSTATTN_INTERRUPT_REG));
#endif
    return i_data.getBit<HOSTATTN_INTERRUPT_REG_TYPE4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access HOSTATTN_INTERRUPT_REG_TYPE4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[HOSTATTN_INTERRUPT_REG_TYPE4]

//>> PREP_[L3TRA0_TR1_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA0_TR1_CONFIG_3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA0_TR1_CONFIG_3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA0_TR1_CONFIG_3]

//>> GET_[L3TRA0_TR1_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA0_TR1_CONFIG_3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA0_TR1_CONFIG_3;
#endif
    return fapi2::getScom(i_target, L3TRA0_TR1_CONFIG_3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_3]

//>> PUT_[L3TRA0_TR1_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA0_TR1_CONFIG_3(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_3));
#endif
    return fapi2::putScom(i_target, L3TRA0_TR1_CONFIG_3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA0_TR1_CONFIG_3]


//>> SET_[L3TRA0_TR1_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_3));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_3_C,
           L3TRA0_TR1_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_3_C]

//>> SET_[L3TRA0_TR1_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_3_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_3));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_3_C,
           L3TRA0_TR1_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_3_C]

//>> GET_[L3TRA0_TR1_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_3));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_3_C,
           L3TRA0_TR1_CONFIG_3_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_3_C]

//>> SET_[L3TRA0_TR1_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_3));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_3_D,
           L3TRA0_TR1_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_3_D]

//>> SET_[L3TRA0_TR1_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_3_D(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_3));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_3_D,
           L3TRA0_TR1_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_3_D]

//>> GET_[L3TRA0_TR1_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_3));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_3_D,
           L3TRA0_TR1_CONFIG_3_D_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_3_D]

//>> PREP_[L3TRA0_TR1_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA0_TR1_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA0_TR1_TRACE_LO_DATA_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA0_TR1_TRACE_LO_DATA_REG]

//>> GET_[L3TRA0_TR1_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA0_TR1_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA0_TR1_TRACE_LO_DATA_REG;
#endif
    return fapi2::getScom(i_target, L3TRA0_TR1_TRACE_LO_DATA_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA0_TR1_TRACE_LO_DATA_REG]

//>> PUT_[L3TRA0_TR1_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA0_TR1_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return fapi2::putScom(i_target, L3TRA0_TR1_TRACE_LO_DATA_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA0_TR1_TRACE_LO_DATA_REG]


//>> SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_TRACE_LO_DATA_REG_LO_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_TRACE_LO_DATA_REG_LO_DATA,
           L3TRA0_TR1_TRACE_LO_DATA_REG_LO_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR1_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_LO_DATA]

//>> SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_TRACE_LO_DATA_REG_LO_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_TRACE_LO_DATA_REG_LO_DATA,
           L3TRA0_TR1_TRACE_LO_DATA_REG_LO_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR1_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_LO_DATA]

//>> GET_[L3TRA0_TR1_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_TRACE_LO_DATA_REG_LO_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA0_TR1_TRACE_LO_DATA_REG_LO_DATA,
           L3TRA0_TR1_TRACE_LO_DATA_REG_LO_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR1_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_TRACE_LO_DATA_REG_LO_DATA]

//>> SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_TRACE_LO_DATA_REG_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_TRACE_LO_DATA_REG_ADDRESS,
           L3TRA0_TR1_TRACE_LO_DATA_REG_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR1_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_ADDRESS]

//>> SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_TRACE_LO_DATA_REG_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_TRACE_LO_DATA_REG_ADDRESS,
           L3TRA0_TR1_TRACE_LO_DATA_REG_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR1_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_ADDRESS]

//>> GET_[L3TRA0_TR1_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_TRACE_LO_DATA_REG_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA0_TR1_TRACE_LO_DATA_REG_ADDRESS,
           L3TRA0_TR1_TRACE_LO_DATA_REG_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR1_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_TRACE_LO_DATA_REG_ADDRESS]

//>> SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK,
           L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK]

//>> SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK,
           L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK]

//>> GET_[L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK,
           L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK]

//>> SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> CLEAR_[L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> GET_[L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> GET_[L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline bool GET_L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<L3TRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> CLEAR_[L3TRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<L3TRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> GET_[L3TRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> GET_[L3TRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline bool GET_L3TRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<L3TRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_TRACE_LO_DATA_REG_RUNNING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_TRACE_LO_DATA_REG_RUNNING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_TRACE_LO_DATA_REG_RUNNING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<L3TRA0_TR1_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA0_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_RUNNING]

//>> CLEAR_[L3TRA0_TR1_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR1_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<L3TRA0_TR1_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA0_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR1_TRACE_LO_DATA_REG_RUNNING]

//>> GET_[L3TRA0_TR1_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA0_TR1_TRACE_LO_DATA_REG_RUNNING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_TRACE_LO_DATA_REG_RUNNING]

//>> GET_[L3TRA0_TR1_TRACE_LO_DATA_REG_RUNNING]
static inline bool GET_L3TRA0_TR1_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<L3TRA0_TR1_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA0_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           L3TRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           L3TRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> GET_[L3TRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           L3TRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> PREP_[L3TRA1_TR0_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA1_TR0_CONFIG_5(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR0_CONFIG_5;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA1_TR0_CONFIG_5]

//>> GET_[L3TRA1_TR0_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA1_TR0_CONFIG_5(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR0_CONFIG_5;
#endif
    return fapi2::getScom(i_target, L3TRA1_TR0_CONFIG_5, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_5]

//>> PUT_[L3TRA1_TR0_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA1_TR0_CONFIG_5(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_5));
#endif
    return fapi2::putScom(i_target, L3TRA1_TR0_CONFIG_5, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA1_TR0_CONFIG_5]


//>> SET_[L3TRA1_TR0_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_5_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_5));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_5_C,
           L3TRA1_TR0_CONFIG_5_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_5_C]

//>> SET_[L3TRA1_TR0_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_5_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_5));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_5_C,
           L3TRA1_TR0_CONFIG_5_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_5_C]

//>> GET_[L3TRA1_TR0_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_5_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_5));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_5_C,
           L3TRA1_TR0_CONFIG_5_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_5_C]

//>> SET_[L3TRA1_TR0_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_5_D(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_5));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_5_D,
           L3TRA1_TR0_CONFIG_5_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_5_D]

//>> SET_[L3TRA1_TR0_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_5_D(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_5));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_5_D,
           L3TRA1_TR0_CONFIG_5_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_5_D]

//>> GET_[L3TRA1_TR0_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_5_D(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_5));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_5_D,
           L3TRA1_TR0_CONFIG_5_D_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_5_D]

//>> PREP_[L3TRA2_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA2_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA2_TR0_CONFIG_2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA2_TR0_CONFIG_2]

//>> GET_[L3TRA2_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA2_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA2_TR0_CONFIG_2;
#endif
    return fapi2::getScom(i_target, L3TRA2_TR0_CONFIG_2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_2]

//>> PUT_[L3TRA2_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA2_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_2));
#endif
    return fapi2::putScom(i_target, L3TRA2_TR0_CONFIG_2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA2_TR0_CONFIG_2]


//>> SET_[L3TRA2_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_2_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_2_A,
           L3TRA2_TR0_CONFIG_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_2_A]

//>> SET_[L3TRA2_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_2_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_2_A,
           L3TRA2_TR0_CONFIG_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_2_A]

//>> GET_[L3TRA2_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_2_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_2));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_2_A,
           L3TRA2_TR0_CONFIG_2_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_2_A]

//>> SET_[L3TRA2_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_2_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_2_B,
           L3TRA2_TR0_CONFIG_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_2_B]

//>> SET_[L3TRA2_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_2_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_2_B,
           L3TRA2_TR0_CONFIG_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_2_B]

//>> GET_[L3TRA2_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_2_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_2));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_2_B,
           L3TRA2_TR0_CONFIG_2_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_2_B]

//>> PREP_[L3TRA3_TR0_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA3_TR0_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA3_TR0_TRACE_HI_DATA_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA3_TR0_TRACE_HI_DATA_REG]

//>> GET_[L3TRA3_TR0_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA3_TR0_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA3_TR0_TRACE_HI_DATA_REG;
#endif
    return fapi2::getScom(i_target, L3TRA3_TR0_TRACE_HI_DATA_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA3_TR0_TRACE_HI_DATA_REG]

//>> PUT_[L3TRA3_TR0_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA3_TR0_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_HI_DATA_REG));
#endif
    return fapi2::putScom(i_target, L3TRA3_TR0_TRACE_HI_DATA_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA3_TR0_TRACE_HI_DATA_REG]


//>> SET_[L3TRA3_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_HI_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           L3TRA3_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> SET_[L3TRA3_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_HI_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           L3TRA3_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> GET_[L3TRA3_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_HI_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA3_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           L3TRA3_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> PREP_[L3TRA3_TR1_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA3_TR1_CONFIG_4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA3_TR1_CONFIG_4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA3_TR1_CONFIG_4]

//>> GET_[L3TRA3_TR1_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA3_TR1_CONFIG_4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA3_TR1_CONFIG_4;
#endif
    return fapi2::getScom(i_target, L3TRA3_TR1_CONFIG_4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_4]

//>> PUT_[L3TRA3_TR1_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA3_TR1_CONFIG_4(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG_4));
#endif
    return fapi2::putScom(i_target, L3TRA3_TR1_CONFIG_4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA3_TR1_CONFIG_4]


//>> SET_[L3TRA3_TR1_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_4_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG_4));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_4_A,
           L3TRA3_TR1_CONFIG_4_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_4_A]

//>> SET_[L3TRA3_TR1_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_4_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG_4));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_4_A,
           L3TRA3_TR1_CONFIG_4_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_4_A]

//>> GET_[L3TRA3_TR1_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR1_CONFIG_4_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG_4));
#endif
    return i_data.extractToRight<L3TRA3_TR1_CONFIG_4_A,
           L3TRA3_TR1_CONFIG_4_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_4_A]

//>> SET_[L3TRA3_TR1_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_4_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG_4));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_4_B,
           L3TRA3_TR1_CONFIG_4_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_4_B]

//>> SET_[L3TRA3_TR1_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_4_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG_4));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_4_B,
           L3TRA3_TR1_CONFIG_4_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_4_B]

//>> GET_[L3TRA3_TR1_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR1_CONFIG_4_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG_4));
#endif
    return i_data.extractToRight<L3TRA3_TR1_CONFIG_4_B,
           L3TRA3_TR1_CONFIG_4_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_4_B]

//>> PREP_[OTPC_M_MEASURE_REG3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_OTPC_M_MEASURE_REG3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = OTPC_M_MEASURE_REG3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[OTPC_M_MEASURE_REG3]

//>> GET_[OTPC_M_MEASURE_REG3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_OTPC_M_MEASURE_REG3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = OTPC_M_MEASURE_REG3;
#endif
    return fapi2::getScom(i_target, OTPC_M_MEASURE_REG3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[OTPC_M_MEASURE_REG3]

//>> PUT_[OTPC_M_MEASURE_REG3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_OTPC_M_MEASURE_REG3(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG3));
#endif
    return fapi2::putScom(i_target, OTPC_M_MEASURE_REG3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[OTPC_M_MEASURE_REG3]


//>> SET_[OTPC_M_MEASURE_REG3_SEEPROM_MEASUREMENT3_DATA]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_MEASURE_REG3_SEEPROM_MEASUREMENT3_DATA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG3));
#endif
    return o_data.insertFromRight<OTPC_M_MEASURE_REG3_SEEPROM_MEASUREMENT3_DATA,
           OTPC_M_MEASURE_REG3_SEEPROM_MEASUREMENT3_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_MEASURE_REG3_SEEPROM_MEASUREMENT3_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_MEASURE_REG3_SEEPROM_MEASUREMENT3_DATA]

//>> SET_[OTPC_M_MEASURE_REG3_SEEPROM_MEASUREMENT3_DATA]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_MEASURE_REG3_SEEPROM_MEASUREMENT3_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG3));
#endif
    return o_data.insertFromRight<OTPC_M_MEASURE_REG3_SEEPROM_MEASUREMENT3_DATA,
           OTPC_M_MEASURE_REG3_SEEPROM_MEASUREMENT3_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_MEASURE_REG3_SEEPROM_MEASUREMENT3_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_MEASURE_REG3_SEEPROM_MEASUREMENT3_DATA]

//>> GET_[OTPC_M_MEASURE_REG3_SEEPROM_MEASUREMENT3_DATA]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_MEASURE_REG3_SEEPROM_MEASUREMENT3_DATA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG3));
#endif
    return i_data.extractToRight<OTPC_M_MEASURE_REG3_SEEPROM_MEASUREMENT3_DATA,
           OTPC_M_MEASURE_REG3_SEEPROM_MEASUREMENT3_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_MEASURE_REG3_SEEPROM_MEASUREMENT3_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_MEASURE_REG3_SEEPROM_MEASUREMENT3_DATA]

//>> PREP_[OTPC_M_RESET_REGISTER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_OTPC_M_RESET_REGISTER(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = OTPC_M_RESET_REGISTER;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[OTPC_M_RESET_REGISTER]

//>> GET_[OTPC_M_RESET_REGISTER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_OTPC_M_RESET_REGISTER(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = OTPC_M_RESET_REGISTER;
#endif
    return fapi2::getScom(i_target, OTPC_M_RESET_REGISTER, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[OTPC_M_RESET_REGISTER]

//>> PUT_[OTPC_M_RESET_REGISTER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_OTPC_M_RESET_REGISTER(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(OTPC_M_RESET_REGISTER));
#endif
    return fapi2::putScom(i_target, OTPC_M_RESET_REGISTER, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[OTPC_M_RESET_REGISTER]


//>> SET_[OTPC_M_RESET_REGISTER_CHICKEN_SWITCH]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_RESET_REGISTER_CHICKEN_SWITCH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_RESET_REGISTER));
#endif
    return o_data.insertFromRight<OTPC_M_RESET_REGISTER_CHICKEN_SWITCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_RESET_REGISTER_CHICKEN_SWITCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_RESET_REGISTER_CHICKEN_SWITCH]

//>> SET_[OTPC_M_RESET_REGISTER_CHICKEN_SWITCH]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_RESET_REGISTER_CHICKEN_SWITCH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_RESET_REGISTER));
#endif
    return o_data.insertFromRight<OTPC_M_RESET_REGISTER_CHICKEN_SWITCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_RESET_REGISTER_CHICKEN_SWITCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_RESET_REGISTER_CHICKEN_SWITCH]

//>> SET_[OTPC_M_RESET_REGISTER_CHICKEN_SWITCH]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_RESET_REGISTER_CHICKEN_SWITCH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_RESET_REGISTER));
#endif
    return o_data.setBit<OTPC_M_RESET_REGISTER_CHICKEN_SWITCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_RESET_REGISTER_CHICKEN_SWITCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_RESET_REGISTER_CHICKEN_SWITCH]

//>> CLEAR_[OTPC_M_RESET_REGISTER_CHICKEN_SWITCH]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_RESET_REGISTER_CHICKEN_SWITCH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_RESET_REGISTER));
#endif
    return o_data.clearBit<OTPC_M_RESET_REGISTER_CHICKEN_SWITCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_RESET_REGISTER_CHICKEN_SWITCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_RESET_REGISTER_CHICKEN_SWITCH]

//>> GET_[OTPC_M_RESET_REGISTER_CHICKEN_SWITCH]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_RESET_REGISTER_CHICKEN_SWITCH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_RESET_REGISTER));
#endif
    return i_data.extractToRight<OTPC_M_RESET_REGISTER_CHICKEN_SWITCH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_RESET_REGISTER_CHICKEN_SWITCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_RESET_REGISTER_CHICKEN_SWITCH]

//>> GET_[OTPC_M_RESET_REGISTER_CHICKEN_SWITCH]
static inline bool GET_OTPC_M_RESET_REGISTER_CHICKEN_SWITCH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_RESET_REGISTER));
#endif
    return i_data.getBit<OTPC_M_RESET_REGISTER_CHICKEN_SWITCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_RESET_REGISTER_CHICKEN_SWITCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_RESET_REGISTER_CHICKEN_SWITCH]

//>> PREP_[QMETRA0_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QMETRA0_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QMETRA0_TR0_CONFIG_3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QMETRA0_TR0_CONFIG_3]

//>> GET_[QMETRA0_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QMETRA0_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QMETRA0_TR0_CONFIG_3;
#endif
    return fapi2::getScom(i_target, QMETRA0_TR0_CONFIG_3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_3]

//>> PUT_[QMETRA0_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QMETRA0_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_3));
#endif
    return fapi2::putScom(i_target, QMETRA0_TR0_CONFIG_3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QMETRA0_TR0_CONFIG_3]


//>> SET_[QMETRA0_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_3_C,
           QMETRA0_TR0_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_3_C]

//>> SET_[QMETRA0_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_3_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_3_C,
           QMETRA0_TR0_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_3_C]

//>> GET_[QMETRA0_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_3));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_3_C,
           QMETRA0_TR0_CONFIG_3_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_3_C]

//>> SET_[QMETRA0_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_3_D,
           QMETRA0_TR0_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_3_D]

//>> SET_[QMETRA0_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_3_D(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_3_D,
           QMETRA0_TR0_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_3_D]

//>> GET_[QMETRA0_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_3));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_3_D,
           QMETRA0_TR0_CONFIG_3_D_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_3_D]

//>> PREP_[RECOV_UNMASKED]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RECOV_UNMASKED(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RECOV_UNMASKED;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RECOV_UNMASKED]

//>> GET_[RECOV_UNMASKED]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RECOV_UNMASKED(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RECOV_UNMASKED;
#endif
    return fapi2::getScom(i_target, RECOV_UNMASKED, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RECOV_UNMASKED]

//>> PUT_[RECOV_UNMASKED]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RECOV_UNMASKED(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RECOV_UNMASKED));
#endif
    return fapi2::putScom(i_target, RECOV_UNMASKED, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RECOV_UNMASKED]


//>> SET_[RECOV_UNMASKED_IN]
static inline fapi2::buffer<uint64_t>& SET_RECOV_UNMASKED_IN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV_UNMASKED));
#endif
    return o_data.insertFromRight<RECOV_UNMASKED_IN,
           RECOV_UNMASKED_IN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_UNMASKED_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_UNMASKED_IN]

//>> SET_[RECOV_UNMASKED_IN]
static inline fapi2::buffer<uint64_t>& SET_RECOV_UNMASKED_IN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV_UNMASKED));
#endif
    return o_data.insertFromRight<RECOV_UNMASKED_IN,
           RECOV_UNMASKED_IN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_UNMASKED_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_UNMASKED_IN]

//>> GET_[RECOV_UNMASKED_IN]
static inline fapi2::buffer<uint64_t>& GET_RECOV_UNMASKED_IN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV_UNMASKED));
#endif
    return i_data.extractToRight<RECOV_UNMASKED_IN,
           RECOV_UNMASKED_IN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_UNMASKED_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_UNMASKED_IN]

//>> PREP_[REC_ERR_MST4_REG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_REC_ERR_MST4_REG0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST4_REG0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[REC_ERR_MST4_REG0]

//>> GET_[REC_ERR_MST4_REG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_REC_ERR_MST4_REG0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST4_REG0;
#endif
    return fapi2::getScom(i_target, REC_ERR_MST4_REG0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[REC_ERR_MST4_REG0]

//>> PUT_[REC_ERR_MST4_REG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_REC_ERR_MST4_REG0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return fapi2::putScom(i_target, REC_ERR_MST4_REG0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[REC_ERR_MST4_REG0]


//>> SET_[REC_ERR_MST4_REG0_MASTER_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_MASTER_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_MASTER_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG0_MASTER_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_MASTER_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_MASTER_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_MASTER_MST4_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_MASTER_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG0_MASTER_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_MASTER_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_MASTER_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_MASTER_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.setBit<REC_ERR_MST4_REG0_MASTER_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST4_REG0_MASTER_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_MASTER_MST4_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST4_REG0_MASTER_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST4_REG0_MASTER_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST4_REG0_MASTER_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST4_REG0_MASTER_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST4_REG0_MASTER_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG0_MASTER_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG0_MASTER_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG0_MASTER_MST4_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG0_MASTER_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_MASTER_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG0_MASTER_MST4_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST4_REG0_MASTER_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.getBit<REC_ERR_MST4_REG0_MASTER_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST4_REG0_MASTER_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_MASTER_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_MASTER_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_MASTER_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_MASTER_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_MASTER_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG0_MASTER_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_MASTER_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG0_MASTER_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_MASTER_MST4_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_MASTER_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_MASTER_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG0_MASTER_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_MASTER_MST4_ERROR_CODE]

//>> GET_[REC_ERR_MST4_REG0_MASTER_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG0_MASTER_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG0_MASTER_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_MASTER_MST4_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG0_MASTER_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_MASTER_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG0_SLAVE1_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE1_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE1_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE1_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE1_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE1_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE1_MST4_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE1_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE1_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE1_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE1_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE1_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.setBit<REC_ERR_MST4_REG0_SLAVE1_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE1_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE1_MST4_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST4_REG0_SLAVE1_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST4_REG0_SLAVE1_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST4_REG0_SLAVE1_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE1_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST4_REG0_SLAVE1_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG0_SLAVE1_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG0_SLAVE1_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG0_SLAVE1_MST4_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE1_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE1_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG0_SLAVE1_MST4_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST4_REG0_SLAVE1_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.getBit<REC_ERR_MST4_REG0_SLAVE1_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE1_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE1_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE1_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE1_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE1_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE1_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE1_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE1_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG0_SLAVE1_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE1_MST4_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE1_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE1_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE1_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE1_MST4_ERROR_CODE]

//>> GET_[REC_ERR_MST4_REG0_SLAVE1_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG0_SLAVE1_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG0_SLAVE1_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE1_MST4_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE1_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE1_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG0_SLAVE2_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE2_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE2_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE2_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE2_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE2_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE2_MST4_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE2_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE2_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE2_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE2_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE2_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.setBit<REC_ERR_MST4_REG0_SLAVE2_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE2_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE2_MST4_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST4_REG0_SLAVE2_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST4_REG0_SLAVE2_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST4_REG0_SLAVE2_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE2_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST4_REG0_SLAVE2_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG0_SLAVE2_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG0_SLAVE2_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG0_SLAVE2_MST4_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE2_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE2_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG0_SLAVE2_MST4_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST4_REG0_SLAVE2_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.getBit<REC_ERR_MST4_REG0_SLAVE2_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE2_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE2_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE2_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE2_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE2_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE2_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE2_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE2_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG0_SLAVE2_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE2_MST4_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE2_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE2_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE2_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE2_MST4_ERROR_CODE]

//>> GET_[REC_ERR_MST4_REG0_SLAVE2_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG0_SLAVE2_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG0_SLAVE2_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE2_MST4_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE2_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE2_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG0_SLAVE3_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE3_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE3_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE3_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE3_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE3_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE3_MST4_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE3_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE3_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE3_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE3_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE3_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.setBit<REC_ERR_MST4_REG0_SLAVE3_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE3_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE3_MST4_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST4_REG0_SLAVE3_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST4_REG0_SLAVE3_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST4_REG0_SLAVE3_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE3_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST4_REG0_SLAVE3_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG0_SLAVE3_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG0_SLAVE3_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG0_SLAVE3_MST4_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE3_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE3_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG0_SLAVE3_MST4_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST4_REG0_SLAVE3_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.getBit<REC_ERR_MST4_REG0_SLAVE3_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE3_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE3_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE3_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE3_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE3_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE3_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE3_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE3_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG0_SLAVE3_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE3_MST4_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE3_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE3_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE3_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE3_MST4_ERROR_CODE]

//>> GET_[REC_ERR_MST4_REG0_SLAVE3_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG0_SLAVE3_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG0_SLAVE3_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE3_MST4_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE3_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE3_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG0_SLAVE4_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE4_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE4_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE4_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE4_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE4_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE4_MST4_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE4_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE4_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE4_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE4_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE4_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.setBit<REC_ERR_MST4_REG0_SLAVE4_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE4_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE4_MST4_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST4_REG0_SLAVE4_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST4_REG0_SLAVE4_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST4_REG0_SLAVE4_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE4_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST4_REG0_SLAVE4_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG0_SLAVE4_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG0_SLAVE4_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG0_SLAVE4_MST4_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE4_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE4_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG0_SLAVE4_MST4_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST4_REG0_SLAVE4_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.getBit<REC_ERR_MST4_REG0_SLAVE4_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE4_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE4_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE4_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE4_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE4_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE4_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE4_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE4_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG0_SLAVE4_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE4_MST4_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE4_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE4_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE4_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE4_MST4_ERROR_CODE]

//>> GET_[REC_ERR_MST4_REG0_SLAVE4_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG0_SLAVE4_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG0_SLAVE4_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE4_MST4_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE4_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE4_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG0_SLAVE5_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE5_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE5_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE5_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE5_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE5_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE5_MST4_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE5_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE5_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE5_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE5_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE5_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.setBit<REC_ERR_MST4_REG0_SLAVE5_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE5_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE5_MST4_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST4_REG0_SLAVE5_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST4_REG0_SLAVE5_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST4_REG0_SLAVE5_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE5_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST4_REG0_SLAVE5_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG0_SLAVE5_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG0_SLAVE5_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG0_SLAVE5_MST4_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE5_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE5_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG0_SLAVE5_MST4_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST4_REG0_SLAVE5_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.getBit<REC_ERR_MST4_REG0_SLAVE5_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE5_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE5_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE5_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE5_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE5_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE5_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE5_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE5_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG0_SLAVE5_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE5_MST4_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE5_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE5_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE5_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE5_MST4_ERROR_CODE]

//>> GET_[REC_ERR_MST4_REG0_SLAVE5_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG0_SLAVE5_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG0_SLAVE5_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE5_MST4_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE5_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE5_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG0_SLAVE6_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE6_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE6_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE6_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE6_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE6_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE6_MST4_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE6_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE6_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE6_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE6_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE6_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.setBit<REC_ERR_MST4_REG0_SLAVE6_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE6_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE6_MST4_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST4_REG0_SLAVE6_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST4_REG0_SLAVE6_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST4_REG0_SLAVE6_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE6_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST4_REG0_SLAVE6_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG0_SLAVE6_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG0_SLAVE6_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG0_SLAVE6_MST4_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE6_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE6_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG0_SLAVE6_MST4_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST4_REG0_SLAVE6_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.getBit<REC_ERR_MST4_REG0_SLAVE6_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE6_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE6_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE6_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE6_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE6_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE6_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE6_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE6_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG0_SLAVE6_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE6_MST4_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE6_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE6_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE6_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE6_MST4_ERROR_CODE]

//>> GET_[REC_ERR_MST4_REG0_SLAVE6_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG0_SLAVE6_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG0_SLAVE6_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE6_MST4_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE6_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE6_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG0_SLAVE7_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE7_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE7_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE7_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE7_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE7_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE7_MST4_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE7_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE7_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE7_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE7_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE7_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.setBit<REC_ERR_MST4_REG0_SLAVE7_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE7_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE7_MST4_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST4_REG0_SLAVE7_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST4_REG0_SLAVE7_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST4_REG0_SLAVE7_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE7_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST4_REG0_SLAVE7_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG0_SLAVE7_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG0_SLAVE7_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG0_SLAVE7_MST4_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE7_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE7_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG0_SLAVE7_MST4_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST4_REG0_SLAVE7_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.getBit<REC_ERR_MST4_REG0_SLAVE7_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE7_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE7_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE7_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE7_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE7_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE7_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE7_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE7_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG0_SLAVE7_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE7_MST4_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE7_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE7_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE7_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE7_MST4_ERROR_CODE]

//>> GET_[REC_ERR_MST4_REG0_SLAVE7_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG0_SLAVE7_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG0_SLAVE7_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE7_MST4_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE7_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE7_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG0_SLAVE8_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE8_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE8_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE8_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE8_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE8_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE8_MST4_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE8_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE8_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE8_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE8_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE8_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.setBit<REC_ERR_MST4_REG0_SLAVE8_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE8_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE8_MST4_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST4_REG0_SLAVE8_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST4_REG0_SLAVE8_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST4_REG0_SLAVE8_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE8_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST4_REG0_SLAVE8_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG0_SLAVE8_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG0_SLAVE8_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG0_SLAVE8_MST4_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE8_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE8_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG0_SLAVE8_MST4_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST4_REG0_SLAVE8_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.getBit<REC_ERR_MST4_REG0_SLAVE8_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE8_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE8_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE8_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE8_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE8_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE8_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE8_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE8_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG0_SLAVE8_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE8_MST4_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE8_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE8_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE8_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE8_MST4_ERROR_CODE]

//>> GET_[REC_ERR_MST4_REG0_SLAVE8_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG0_SLAVE8_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG0_SLAVE8_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE8_MST4_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE8_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE8_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG0_SLAVE9_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE9_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE9_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE9_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE9_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE9_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE9_MST4_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE9_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE9_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE9_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE9_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE9_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.setBit<REC_ERR_MST4_REG0_SLAVE9_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE9_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE9_MST4_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST4_REG0_SLAVE9_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST4_REG0_SLAVE9_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST4_REG0_SLAVE9_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE9_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST4_REG0_SLAVE9_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG0_SLAVE9_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG0_SLAVE9_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG0_SLAVE9_MST4_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE9_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE9_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG0_SLAVE9_MST4_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST4_REG0_SLAVE9_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.getBit<REC_ERR_MST4_REG0_SLAVE9_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE9_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE9_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE9_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE9_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE9_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE9_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE9_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE9_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG0_SLAVE9_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE9_MST4_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE9_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE9_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE9_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE9_MST4_ERROR_CODE]

//>> GET_[REC_ERR_MST4_REG0_SLAVE9_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG0_SLAVE9_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG0_SLAVE9_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE9_MST4_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE9_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE9_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG0_SLAVE10_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE10_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE10_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE10_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE10_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE10_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE10_MST4_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE10_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE10_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE10_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE10_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE10_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.setBit<REC_ERR_MST4_REG0_SLAVE10_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE10_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE10_MST4_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST4_REG0_SLAVE10_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST4_REG0_SLAVE10_MST4_RESPONSE_BIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST4_REG0_SLAVE10_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE10_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST4_REG0_SLAVE10_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG0_SLAVE10_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG0_SLAVE10_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG0_SLAVE10_MST4_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE10_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE10_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG0_SLAVE10_MST4_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST4_REG0_SLAVE10_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.getBit<REC_ERR_MST4_REG0_SLAVE10_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE10_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE10_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE10_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE10_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE10_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE10_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE10_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE10_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG0_SLAVE10_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE10_MST4_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE10_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE10_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE10_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE10_MST4_ERROR_CODE]

//>> GET_[REC_ERR_MST4_REG0_SLAVE10_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG0_SLAVE10_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG0_SLAVE10_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE10_MST4_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE10_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE10_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG0_SLAVE11_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE11_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE11_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE11_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE11_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE11_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE11_MST4_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE11_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE11_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE11_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE11_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE11_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.setBit<REC_ERR_MST4_REG0_SLAVE11_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE11_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE11_MST4_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST4_REG0_SLAVE11_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST4_REG0_SLAVE11_MST4_RESPONSE_BIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST4_REG0_SLAVE11_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE11_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST4_REG0_SLAVE11_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG0_SLAVE11_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG0_SLAVE11_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG0_SLAVE11_MST4_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE11_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE11_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG0_SLAVE11_MST4_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST4_REG0_SLAVE11_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.getBit<REC_ERR_MST4_REG0_SLAVE11_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE11_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE11_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE11_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE11_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE11_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE11_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE11_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE11_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG0_SLAVE11_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE11_MST4_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE11_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE11_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE11_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE11_MST4_ERROR_CODE]

//>> GET_[REC_ERR_MST4_REG0_SLAVE11_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG0_SLAVE11_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG0_SLAVE11_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE11_MST4_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE11_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE11_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG0_SLAVE12_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE12_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE12_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE12_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE12_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE12_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE12_MST4_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE12_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE12_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE12_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE12_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE12_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.setBit<REC_ERR_MST4_REG0_SLAVE12_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE12_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE12_MST4_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST4_REG0_SLAVE12_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST4_REG0_SLAVE12_MST4_RESPONSE_BIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST4_REG0_SLAVE12_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE12_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST4_REG0_SLAVE12_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG0_SLAVE12_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG0_SLAVE12_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG0_SLAVE12_MST4_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE12_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE12_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG0_SLAVE12_MST4_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST4_REG0_SLAVE12_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.getBit<REC_ERR_MST4_REG0_SLAVE12_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE12_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE12_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE12_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE12_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE12_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE12_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE12_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE12_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG0_SLAVE12_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE12_MST4_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE12_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE12_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE12_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE12_MST4_ERROR_CODE]

//>> GET_[REC_ERR_MST4_REG0_SLAVE12_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG0_SLAVE12_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG0_SLAVE12_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE12_MST4_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE12_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE12_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG0_SLAVE13_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE13_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE13_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE13_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE13_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE13_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE13_MST4_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE13_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE13_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE13_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE13_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE13_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.setBit<REC_ERR_MST4_REG0_SLAVE13_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE13_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE13_MST4_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST4_REG0_SLAVE13_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST4_REG0_SLAVE13_MST4_RESPONSE_BIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST4_REG0_SLAVE13_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE13_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST4_REG0_SLAVE13_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG0_SLAVE13_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG0_SLAVE13_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG0_SLAVE13_MST4_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE13_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE13_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG0_SLAVE13_MST4_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST4_REG0_SLAVE13_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.getBit<REC_ERR_MST4_REG0_SLAVE13_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE13_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE13_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE13_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE13_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE13_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE13_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE13_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE13_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG0_SLAVE13_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE13_MST4_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE13_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE13_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE13_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE13_MST4_ERROR_CODE]

//>> GET_[REC_ERR_MST4_REG0_SLAVE13_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG0_SLAVE13_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG0_SLAVE13_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE13_MST4_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE13_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE13_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG0_SLAVE14_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE14_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE14_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE14_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE14_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE14_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE14_MST4_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE14_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE14_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE14_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE14_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE14_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.setBit<REC_ERR_MST4_REG0_SLAVE14_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE14_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE14_MST4_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST4_REG0_SLAVE14_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST4_REG0_SLAVE14_MST4_RESPONSE_BIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST4_REG0_SLAVE14_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE14_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST4_REG0_SLAVE14_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG0_SLAVE14_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG0_SLAVE14_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG0_SLAVE14_MST4_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE14_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE14_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG0_SLAVE14_MST4_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST4_REG0_SLAVE14_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.getBit<REC_ERR_MST4_REG0_SLAVE14_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE14_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE14_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE14_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE14_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE14_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE14_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE14_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE14_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG0_SLAVE14_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE14_MST4_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE14_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE14_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE14_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE14_MST4_ERROR_CODE]

//>> GET_[REC_ERR_MST4_REG0_SLAVE14_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG0_SLAVE14_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG0_SLAVE14_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE14_MST4_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE14_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE14_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG0_SLAVE15_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE15_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE15_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE15_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE15_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE15_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE15_MST4_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE15_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE15_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE15_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE15_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE15_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.setBit<REC_ERR_MST4_REG0_SLAVE15_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE15_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE15_MST4_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST4_REG0_SLAVE15_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST4_REG0_SLAVE15_MST4_RESPONSE_BIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST4_REG0_SLAVE15_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE15_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST4_REG0_SLAVE15_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG0_SLAVE15_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG0_SLAVE15_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG0_SLAVE15_MST4_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE15_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE15_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG0_SLAVE15_MST4_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST4_REG0_SLAVE15_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.getBit<REC_ERR_MST4_REG0_SLAVE15_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE15_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE15_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG0_SLAVE15_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE15_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE15_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE15_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE15_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE15_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG0_SLAVE15_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG0_SLAVE15_MST4_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG0_SLAVE15_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE15_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE15_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG0_SLAVE15_MST4_ERROR_CODE]

//>> GET_[REC_ERR_MST4_REG0_SLAVE15_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG0_SLAVE15_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG0_SLAVE15_MST4_ERROR_CODE,
           REC_ERR_MST4_REG0_SLAVE15_MST4_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG0_SLAVE15_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG0_SLAVE15_MST4_ERROR_CODE]

//>> PREP_[SCAN_UPDATEDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SCAN_UPDATEDR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCAN_UPDATEDR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SCAN_UPDATEDR]

//>> GET_[SCAN_UPDATEDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SCAN_UPDATEDR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCAN_UPDATEDR;
#endif
    return fapi2::getScom(i_target, SCAN_UPDATEDR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SCAN_UPDATEDR]

//>> PUT_[SCAN_UPDATEDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SCAN_UPDATEDR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SCAN_UPDATEDR));
#endif
    return fapi2::putScom(i_target, SCAN_UPDATEDR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SCAN_UPDATEDR]


//>> SET_[SCAN_UPDATEDR_SCAN_UPDATEDR_REG]
static inline fapi2::buffer<uint64_t>& SET_SCAN_UPDATEDR_SCAN_UPDATEDR_REG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCAN_UPDATEDR));
#endif
    return o_data.insertFromRight<SCAN_UPDATEDR_SCAN_UPDATEDR_REG,
           SCAN_UPDATEDR_SCAN_UPDATEDR_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SCAN_UPDATEDR_SCAN_UPDATEDR_REG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCAN_UPDATEDR_SCAN_UPDATEDR_REG]

//>> SET_[SCAN_UPDATEDR_SCAN_UPDATEDR_REG]
static inline fapi2::buffer<uint64_t>& SET_SCAN_UPDATEDR_SCAN_UPDATEDR_REG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCAN_UPDATEDR));
#endif
    return o_data.insertFromRight<SCAN_UPDATEDR_SCAN_UPDATEDR_REG,
           SCAN_UPDATEDR_SCAN_UPDATEDR_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SCAN_UPDATEDR_SCAN_UPDATEDR_REG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCAN_UPDATEDR_SCAN_UPDATEDR_REG]

//>> GET_[SCAN_UPDATEDR_SCAN_UPDATEDR_REG]
static inline fapi2::buffer<uint64_t>& GET_SCAN_UPDATEDR_SCAN_UPDATEDR_REG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCAN_UPDATEDR));
#endif
    return i_data.extractToRight<SCAN_UPDATEDR_SCAN_UPDATEDR_REG,
           SCAN_UPDATEDR_SCAN_UPDATEDR_REG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SCAN_UPDATEDR_SCAN_UPDATEDR_REG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCAN_UPDATEDR_SCAN_UPDATEDR_REG]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG10]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG10(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG10;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG10]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG10]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG10(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG10;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG10, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG10]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG10]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG10(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG10));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG10, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG10]


//>> SET_[SINGLE_OTP_ROM_OTPROM_REG10_REGISTER10]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG10_REGISTER10(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG10));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG10_REGISTER10,
           SINGLE_OTP_ROM_OTPROM_REG10_REGISTER10_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG10_REGISTER10 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG10_REGISTER10]

//>> SET_[SINGLE_OTP_ROM_OTPROM_REG10_REGISTER10]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG10_REGISTER10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG10));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG10_REGISTER10,
           SINGLE_OTP_ROM_OTPROM_REG10_REGISTER10_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG10_REGISTER10 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG10_REGISTER10]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG10_REGISTER10]
static inline fapi2::buffer<uint64_t>& GET_SINGLE_OTP_ROM_OTPROM_REG10_REGISTER10(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG10));
#endif
    return i_data.extractToRight<SINGLE_OTP_ROM_OTPROM_REG10_REGISTER10,
           SINGLE_OTP_ROM_OTPROM_REG10_REGISTER10_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG10_REGISTER10 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG10_REGISTER10]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG101]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG101(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG101;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG101]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG101]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG101(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG101;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG101, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG101]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG101]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG101(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG101));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG101, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG101]


//>> SET_[SINGLE_OTP_ROM_OTPROM_REG101_REGISTER101]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG101_REGISTER101(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG101));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG101_REGISTER101,
           SINGLE_OTP_ROM_OTPROM_REG101_REGISTER101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG101_REGISTER101 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG101_REGISTER101]

//>> SET_[SINGLE_OTP_ROM_OTPROM_REG101_REGISTER101]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG101_REGISTER101(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG101));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG101_REGISTER101,
           SINGLE_OTP_ROM_OTPROM_REG101_REGISTER101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG101_REGISTER101 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG101_REGISTER101]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG101_REGISTER101]
static inline fapi2::buffer<uint64_t>& GET_SINGLE_OTP_ROM_OTPROM_REG101_REGISTER101(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG101));
#endif
    return i_data.extractToRight<SINGLE_OTP_ROM_OTPROM_REG101_REGISTER101,
           SINGLE_OTP_ROM_OTPROM_REG101_REGISTER101_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG101_REGISTER101 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG101_REGISTER101]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG27]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG27(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG27;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG27]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG27]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG27(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG27;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG27, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG27]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG27]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG27(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG27));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG27, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG27]


//>> SET_[SINGLE_OTP_ROM_OTPROM_REG27_REGISTER27]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG27_REGISTER27(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG27));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG27_REGISTER27,
           SINGLE_OTP_ROM_OTPROM_REG27_REGISTER27_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG27_REGISTER27 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG27_REGISTER27]

//>> SET_[SINGLE_OTP_ROM_OTPROM_REG27_REGISTER27]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG27_REGISTER27(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG27));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG27_REGISTER27,
           SINGLE_OTP_ROM_OTPROM_REG27_REGISTER27_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG27_REGISTER27 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG27_REGISTER27]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG27_REGISTER27]
static inline fapi2::buffer<uint64_t>& GET_SINGLE_OTP_ROM_OTPROM_REG27_REGISTER27(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG27));
#endif
    return i_data.extractToRight<SINGLE_OTP_ROM_OTPROM_REG27_REGISTER27,
           SINGLE_OTP_ROM_OTPROM_REG27_REGISTER27_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG27_REGISTER27 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG27_REGISTER27]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
