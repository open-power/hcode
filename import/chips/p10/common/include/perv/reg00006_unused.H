/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/perv/reg00006_unused.H $      */
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

#ifndef __PERV_REG00006_H_UNUSED__
#define __PERV_REG00006_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace perv
{
#endif


//>> PREP_[CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC]

//>> PUT_[CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC]


//>> PREP_[CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC]

//>> PUT_[CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC]


//>> SET_[CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR,
           CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR,
           CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR,
           CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR]

//>> PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE]

//>> PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE]


//>> PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES]

//>> PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES]


//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3]

//>> PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES]

//>> PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES]


//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3]

//>> PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES]

//>> PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES]


//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]

//>> PREP_[CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC]

//>> PUT_[CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC]


//>> PREP_[CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY]

//>> PUT_[CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY]


//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE,
           CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE,
           CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE,
           CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE]

//>> PREP_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE]

//>> PUT_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE]


//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return o_data.setBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]

//>> CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return o_data.clearBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return i_data.extractToRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]
static inline bool GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return i_data.getBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE,
           CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE,
           CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return i_data.extractToRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE,
           CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE]

//>> PREP_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE]

//>> PUT_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE]


//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE));
#endif
    return o_data.setBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]

//>> CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE));
#endif
    return o_data.clearBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE));
#endif
    return i_data.extractToRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]
static inline bool GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE));
#endif
    return i_data.getBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]

//>> PREP_[CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE]

//>> PUT_[CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE]


//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1]

//>> PREP_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT]

//>> PUT_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT]


//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE,
           CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE,
           CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE,
           CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE,
           CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE,
           CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE,
           CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT,
           CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT,
           CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT,
           CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT]

//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_0_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_0_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_0_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_0_RO]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_0_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_0_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_0_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_0_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_0_RO]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_0_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_0_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_0_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_0_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_0_RO]


//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_11_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_11_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_11_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_11_RO]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_11_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_11_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_11_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_11_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_11_RO]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_11_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_11_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_11_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_11_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_11_RO]


//>> PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_15_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2B_DATA_AREA_15_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_15_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_15_RO]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_15_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_15_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_15_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_15_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_15_RO]

//>> PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_15_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2B_DATA_AREA_15_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_15_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_15_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_15_RO]


//>> SET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_DOORBELL_ERROR_MAILBOX_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_DOORBELL_ERROR_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_DOORBELL_ERROR_MAILBOX_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_DOORBELL_ERROR_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_DOORBELL_ERROR_MAILBOX_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_DOORBELL_ERROR_MAILBOX_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_DOORBELL_ERROR_MAILBOX_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_DOORBELL_ERROR_MAILBOX_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_DOORBELL_ERROR_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_DOORBELL_ERROR_MAILBOX_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_DOORBELL_ERROR_MAILBOX_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_DOORBELL_ERROR_MAILBOX_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_DOORBELL_ERROR_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_DOORBELL_ERROR_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_DOORBELL_ERROR_MAILBOX_1]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_DOORBELL_ERROR_MAILBOX_1]
static inline fapi2::buffer<uint64_t>&
CLEAR_FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_DOORBELL_ERROR_MAILBOX_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_DOORBELL_ERROR_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_DOORBELL_ERROR_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_DOORBELL_ERROR_MAILBOX_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_DOORBELL_ERROR_MAILBOX_1]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_DOORBELL_ERROR_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_DOORBELL_ERROR_MAILBOX_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_DOORBELL_ERROR_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_DOORBELL_ERROR_MAILBOX_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_DOORBELL_ERROR_MAILBOX_1]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_DOORBELL_ERROR_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_DOORBELL_ERROR_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_DOORBELL_ERROR_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_DOORBELL_ERROR_MAILBOX_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2]
static inline fapi2::buffer<uint64_t>&
CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1]
static inline fapi2::buffer<uint64_t>&
CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1]

//>> PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI]

//>> GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI]

//>> PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI]

//>> PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_RW]

//>> GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_RW;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_RW]

//>> PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_RW]


//>> SET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_SR_SCRATCH_REGISTER_14]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_SR_SCRATCH_REGISTER_14(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_SR_SCRATCH_REGISTER_14,
           FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_SR_SCRATCH_REGISTER_14_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_SR_SCRATCH_REGISTER_14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_SR_SCRATCH_REGISTER_14]

//>> SET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_SR_SCRATCH_REGISTER_14]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_SR_SCRATCH_REGISTER_14(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_SR_SCRATCH_REGISTER_14,
           FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_SR_SCRATCH_REGISTER_14_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_SR_SCRATCH_REGISTER_14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_SR_SCRATCH_REGISTER_14]

//>> GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_SR_SCRATCH_REGISTER_14]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_SR_SCRATCH_REGISTER_14(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_RW));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_SR_SCRATCH_REGISTER_14,
           FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_SR_SCRATCH_REGISTER_14_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_SR_SCRATCH_REGISTER_14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_14_SR_SCRATCH_REGISTER_14]

//>> PREP_[QMETRA0_TR0_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QMETRA0_TR0_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QMETRA0_TR0_TRACE_HI_DATA_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QMETRA0_TR0_TRACE_HI_DATA_REG]

//>> GET_[QMETRA0_TR0_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QMETRA0_TR0_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QMETRA0_TR0_TRACE_HI_DATA_REG;
#endif
    return fapi2::getScom(i_target, QMETRA0_TR0_TRACE_HI_DATA_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QMETRA0_TR0_TRACE_HI_DATA_REG]

//>> PUT_[QMETRA0_TR0_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QMETRA0_TR0_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_TRACE_HI_DATA_REG));
#endif
    return fapi2::putScom(i_target, QMETRA0_TR0_TRACE_HI_DATA_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QMETRA0_TR0_TRACE_HI_DATA_REG]


//>> SET_[QMETRA0_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_TRACE_HI_DATA_REG));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           QMETRA0_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access QMETRA0_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> SET_[QMETRA0_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_TRACE_HI_DATA_REG));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           QMETRA0_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access QMETRA0_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> GET_[QMETRA0_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_TRACE_HI_DATA_REG));
#endif
    return i_data.extractToRight<QMETRA0_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           QMETRA0_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access QMETRA0_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> PREP_[QMETRA0_TR1_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QMETRA0_TR1_CONFIG_3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QMETRA0_TR1_CONFIG_3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QMETRA0_TR1_CONFIG_3]

//>> GET_[QMETRA0_TR1_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QMETRA0_TR1_CONFIG_3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QMETRA0_TR1_CONFIG_3;
#endif
    return fapi2::getScom(i_target, QMETRA0_TR1_CONFIG_3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_3]

//>> PUT_[QMETRA0_TR1_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QMETRA0_TR1_CONFIG_3(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG_3));
#endif
    return fapi2::putScom(i_target, QMETRA0_TR1_CONFIG_3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QMETRA0_TR1_CONFIG_3]


//>> SET_[QMETRA0_TR1_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG_3));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_3_C,
           QMETRA0_TR1_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access QMETRA0_TR1_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_3_C]

//>> SET_[QMETRA0_TR1_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_3_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG_3));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_3_C,
           QMETRA0_TR1_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access QMETRA0_TR1_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_3_C]

//>> GET_[QMETRA0_TR1_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR1_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG_3));
#endif
    return i_data.extractToRight<QMETRA0_TR1_CONFIG_3_C,
           QMETRA0_TR1_CONFIG_3_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access QMETRA0_TR1_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_3_C]

//>> SET_[QMETRA0_TR1_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG_3));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_3_D,
           QMETRA0_TR1_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access QMETRA0_TR1_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_3_D]

//>> SET_[QMETRA0_TR1_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_3_D(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG_3));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_3_D,
           QMETRA0_TR1_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access QMETRA0_TR1_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_3_D]

//>> GET_[QMETRA0_TR1_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR1_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG_3));
#endif
    return i_data.extractToRight<QMETRA0_TR1_CONFIG_3_D,
           QMETRA0_TR1_CONFIG_3_D_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access QMETRA0_TR1_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_3_D]

//>> PREP_[DEVICE_ID_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DEVICE_ID_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DEVICE_ID_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DEVICE_ID_REG]

//>> GET_[DEVICE_ID_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DEVICE_ID_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DEVICE_ID_REG;
#endif
    return fapi2::getScom(i_target, DEVICE_ID_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DEVICE_ID_REG]

//>> PUT_[DEVICE_ID_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DEVICE_ID_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DEVICE_ID_REG));
#endif
    return fapi2::putScom(i_target, DEVICE_ID_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DEVICE_ID_REG]


//>> SET_[DEVICE_ID_REG_CFAM_CHIPID]
static inline fapi2::buffer<uint64_t>& SET_DEVICE_ID_REG_CFAM_CHIPID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DEVICE_ID_REG));
#endif
    return o_data.insertFromRight<DEVICE_ID_REG_CFAM_CHIPID,
           DEVICE_ID_REG_CFAM_CHIPID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access DEVICE_ID_REG_CFAM_CHIPID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DEVICE_ID_REG_CFAM_CHIPID]

//>> SET_[DEVICE_ID_REG_CFAM_CHIPID]
static inline fapi2::buffer<uint64_t>& SET_DEVICE_ID_REG_CFAM_CHIPID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DEVICE_ID_REG));
#endif
    return o_data.insertFromRight<DEVICE_ID_REG_CFAM_CHIPID,
           DEVICE_ID_REG_CFAM_CHIPID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access DEVICE_ID_REG_CFAM_CHIPID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DEVICE_ID_REG_CFAM_CHIPID]

//>> GET_[DEVICE_ID_REG_CFAM_CHIPID]
static inline fapi2::buffer<uint64_t>& GET_DEVICE_ID_REG_CFAM_CHIPID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DEVICE_ID_REG));
#endif
    return i_data.extractToRight<DEVICE_ID_REG_CFAM_CHIPID,
           DEVICE_ID_REG_CFAM_CHIPID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access DEVICE_ID_REG_CFAM_CHIPID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DEVICE_ID_REG_CFAM_CHIPID]

//>> SET_[DEVICE_ID_REG_VENDOR_ID]
static inline fapi2::buffer<uint64_t>& SET_DEVICE_ID_REG_VENDOR_ID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DEVICE_ID_REG));
#endif
    return o_data.insertFromRight<DEVICE_ID_REG_VENDOR_ID,
           DEVICE_ID_REG_VENDOR_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access DEVICE_ID_REG_VENDOR_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DEVICE_ID_REG_VENDOR_ID]

//>> SET_[DEVICE_ID_REG_VENDOR_ID]
static inline fapi2::buffer<uint64_t>& SET_DEVICE_ID_REG_VENDOR_ID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DEVICE_ID_REG));
#endif
    return o_data.insertFromRight<DEVICE_ID_REG_VENDOR_ID,
           DEVICE_ID_REG_VENDOR_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access DEVICE_ID_REG_VENDOR_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DEVICE_ID_REG_VENDOR_ID]

//>> GET_[DEVICE_ID_REG_VENDOR_ID]
static inline fapi2::buffer<uint64_t>& GET_DEVICE_ID_REG_VENDOR_ID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DEVICE_ID_REG));
#endif
    return i_data.extractToRight<DEVICE_ID_REG_VENDOR_ID,
           DEVICE_ID_REG_VENDOR_ID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access DEVICE_ID_REG_VENDOR_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DEVICE_ID_REG_VENDOR_ID]

//>> SET_[DEVICE_ID_REG_SOCKET_ID]
static inline fapi2::buffer<uint64_t>& SET_DEVICE_ID_REG_SOCKET_ID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DEVICE_ID_REG));
#endif
    return o_data.insertFromRight<DEVICE_ID_REG_SOCKET_ID,
           DEVICE_ID_REG_SOCKET_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access DEVICE_ID_REG_SOCKET_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DEVICE_ID_REG_SOCKET_ID]

//>> SET_[DEVICE_ID_REG_SOCKET_ID]
static inline fapi2::buffer<uint64_t>& SET_DEVICE_ID_REG_SOCKET_ID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DEVICE_ID_REG));
#endif
    return o_data.insertFromRight<DEVICE_ID_REG_SOCKET_ID,
           DEVICE_ID_REG_SOCKET_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access DEVICE_ID_REG_SOCKET_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DEVICE_ID_REG_SOCKET_ID]

//>> GET_[DEVICE_ID_REG_SOCKET_ID]
static inline fapi2::buffer<uint64_t>& GET_DEVICE_ID_REG_SOCKET_ID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DEVICE_ID_REG));
#endif
    return i_data.extractToRight<DEVICE_ID_REG_SOCKET_ID,
           DEVICE_ID_REG_SOCKET_ID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access DEVICE_ID_REG_SOCKET_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DEVICE_ID_REG_SOCKET_ID]

//>> SET_[DEVICE_ID_REG_CHIPPOS_ID]
static inline fapi2::buffer<uint64_t>& SET_DEVICE_ID_REG_CHIPPOS_ID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DEVICE_ID_REG));
#endif
    return o_data.insertFromRight<DEVICE_ID_REG_CHIPPOS_ID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access DEVICE_ID_REG_CHIPPOS_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DEVICE_ID_REG_CHIPPOS_ID]

//>> SET_[DEVICE_ID_REG_CHIPPOS_ID]
static inline fapi2::buffer<uint64_t>& SET_DEVICE_ID_REG_CHIPPOS_ID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DEVICE_ID_REG));
#endif
    return o_data.insertFromRight<DEVICE_ID_REG_CHIPPOS_ID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access DEVICE_ID_REG_CHIPPOS_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DEVICE_ID_REG_CHIPPOS_ID]

//>> SET_[DEVICE_ID_REG_CHIPPOS_ID]
static inline fapi2::buffer<uint64_t>& SET_DEVICE_ID_REG_CHIPPOS_ID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DEVICE_ID_REG));
#endif
    return o_data.setBit<DEVICE_ID_REG_CHIPPOS_ID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access DEVICE_ID_REG_CHIPPOS_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DEVICE_ID_REG_CHIPPOS_ID]

//>> CLEAR_[DEVICE_ID_REG_CHIPPOS_ID]
static inline fapi2::buffer<uint64_t>& CLEAR_DEVICE_ID_REG_CHIPPOS_ID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DEVICE_ID_REG));
#endif
    return o_data.clearBit<DEVICE_ID_REG_CHIPPOS_ID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access DEVICE_ID_REG_CHIPPOS_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DEVICE_ID_REG_CHIPPOS_ID]

//>> GET_[DEVICE_ID_REG_CHIPPOS_ID]
static inline fapi2::buffer<uint64_t>& GET_DEVICE_ID_REG_CHIPPOS_ID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DEVICE_ID_REG));
#endif
    return i_data.extractToRight<DEVICE_ID_REG_CHIPPOS_ID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access DEVICE_ID_REG_CHIPPOS_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DEVICE_ID_REG_CHIPPOS_ID]

//>> GET_[DEVICE_ID_REG_CHIPPOS_ID]
static inline bool GET_DEVICE_ID_REG_CHIPPOS_ID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DEVICE_ID_REG));
#endif
    return i_data.getBit<DEVICE_ID_REG_CHIPPOS_ID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access DEVICE_ID_REG_CHIPPOS_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DEVICE_ID_REG_CHIPPOS_ID]

//>> SET_[DEVICE_ID_REG_IO_TP_VSB_CHIP_POS]
static inline fapi2::buffer<uint64_t>& SET_DEVICE_ID_REG_IO_TP_VSB_CHIP_POS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DEVICE_ID_REG));
#endif
    return o_data.insertFromRight<DEVICE_ID_REG_IO_TP_VSB_CHIP_POS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access DEVICE_ID_REG_IO_TP_VSB_CHIP_POS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DEVICE_ID_REG_IO_TP_VSB_CHIP_POS]

//>> SET_[DEVICE_ID_REG_IO_TP_VSB_CHIP_POS]
static inline fapi2::buffer<uint64_t>& SET_DEVICE_ID_REG_IO_TP_VSB_CHIP_POS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DEVICE_ID_REG));
#endif
    return o_data.insertFromRight<DEVICE_ID_REG_IO_TP_VSB_CHIP_POS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access DEVICE_ID_REG_IO_TP_VSB_CHIP_POS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DEVICE_ID_REG_IO_TP_VSB_CHIP_POS]

//>> SET_[DEVICE_ID_REG_IO_TP_VSB_CHIP_POS]
static inline fapi2::buffer<uint64_t>& SET_DEVICE_ID_REG_IO_TP_VSB_CHIP_POS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DEVICE_ID_REG));
#endif
    return o_data.setBit<DEVICE_ID_REG_IO_TP_VSB_CHIP_POS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access DEVICE_ID_REG_IO_TP_VSB_CHIP_POS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DEVICE_ID_REG_IO_TP_VSB_CHIP_POS]

//>> CLEAR_[DEVICE_ID_REG_IO_TP_VSB_CHIP_POS]
static inline fapi2::buffer<uint64_t>& CLEAR_DEVICE_ID_REG_IO_TP_VSB_CHIP_POS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DEVICE_ID_REG));
#endif
    return o_data.clearBit<DEVICE_ID_REG_IO_TP_VSB_CHIP_POS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access DEVICE_ID_REG_IO_TP_VSB_CHIP_POS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DEVICE_ID_REG_IO_TP_VSB_CHIP_POS]

//>> GET_[DEVICE_ID_REG_IO_TP_VSB_CHIP_POS]
static inline fapi2::buffer<uint64_t>& GET_DEVICE_ID_REG_IO_TP_VSB_CHIP_POS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DEVICE_ID_REG));
#endif
    return i_data.extractToRight<DEVICE_ID_REG_IO_TP_VSB_CHIP_POS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access DEVICE_ID_REG_IO_TP_VSB_CHIP_POS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DEVICE_ID_REG_IO_TP_VSB_CHIP_POS]

//>> GET_[DEVICE_ID_REG_IO_TP_VSB_CHIP_POS]
static inline bool GET_DEVICE_ID_REG_IO_TP_VSB_CHIP_POS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DEVICE_ID_REG));
#endif
    return i_data.getBit<DEVICE_ID_REG_IO_TP_VSB_CHIP_POS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access DEVICE_ID_REG_IO_TP_VSB_CHIP_POS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DEVICE_ID_REG_IO_TP_VSB_CHIP_POS]

//>> PREP_[EPS_FIR_ANY_LOCAL_ERR_MASK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_FIR_ANY_LOCAL_ERR_MASK(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_ANY_LOCAL_ERR_MASK;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_FIR_ANY_LOCAL_ERR_MASK]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_FIR_ANY_LOCAL_ERR_MASK(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_ANY_LOCAL_ERR_MASK;
#endif
    return fapi2::getScom(i_target, EPS_FIR_ANY_LOCAL_ERR_MASK, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK]

//>> PUT_[EPS_FIR_ANY_LOCAL_ERR_MASK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_FIR_ANY_LOCAL_ERR_MASK(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return fapi2::putScom(i_target, EPS_FIR_ANY_LOCAL_ERR_MASK, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_FIR_ANY_LOCAL_ERR_MASK]


//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.setBit<EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]

//>> CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.clearBit<EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.extractToRight<EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]
static inline bool GET_EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.getBit<EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.setBit<EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]

//>> CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.clearBit<EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.extractToRight<EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]
static inline bool GET_EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.getBit<EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.setBit<EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]

//>> CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.clearBit<EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.extractToRight<EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]
static inline bool GET_EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.getBit<EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.setBit<EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]

//>> CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.clearBit<EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.extractToRight<EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]
static inline bool GET_EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.getBit<EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.setBit<EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]

//>> CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.clearBit<EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.extractToRight<EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]
static inline bool GET_EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.getBit<EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]

//>> PREP_[EPS_THERM_WSUB_SKITTER_DATA1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_THERM_WSUB_SKITTER_DATA1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_DATA1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_THERM_WSUB_SKITTER_DATA1]

//>> GET_[EPS_THERM_WSUB_SKITTER_DATA1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_THERM_WSUB_SKITTER_DATA1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_DATA1;
#endif
    return fapi2::getScom(i_target, EPS_THERM_WSUB_SKITTER_DATA1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_DATA1]

//>> PUT_[EPS_THERM_WSUB_SKITTER_DATA1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_THERM_WSUB_SKITTER_DATA1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_DATA1));
#endif
    return fapi2::putScom(i_target, EPS_THERM_WSUB_SKITTER_DATA1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_THERM_WSUB_SKITTER_DATA1]


//>> PREP_[EPS_THERM_WSUB2_INJECT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_THERM_WSUB2_INJECT_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB2_INJECT_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_THERM_WSUB2_INJECT_REG]

//>> GET_[EPS_THERM_WSUB2_INJECT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_THERM_WSUB2_INJECT_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB2_INJECT_REG;
#endif
    return fapi2::getScom(i_target, EPS_THERM_WSUB2_INJECT_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_THERM_WSUB2_INJECT_REG]

//>> PUT_[EPS_THERM_WSUB2_INJECT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_THERM_WSUB2_INJECT_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_INJECT_REG));
#endif
    return fapi2::putScom(i_target, EPS_THERM_WSUB2_INJECT_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_THERM_WSUB2_INJECT_REG]


//>> SET_[EPS_THERM_WSUB2_INJECT_REG_TRIP]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB2_INJECT_REG_TRIP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_INJECT_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB2_INJECT_REG_TRIP,
           EPS_THERM_WSUB2_INJECT_REG_TRIP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_THERM_WSUB2_INJECT_REG_TRIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB2_INJECT_REG_TRIP]

//>> SET_[EPS_THERM_WSUB2_INJECT_REG_TRIP]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB2_INJECT_REG_TRIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_INJECT_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB2_INJECT_REG_TRIP,
           EPS_THERM_WSUB2_INJECT_REG_TRIP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_THERM_WSUB2_INJECT_REG_TRIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB2_INJECT_REG_TRIP]

//>> GET_[EPS_THERM_WSUB2_INJECT_REG_TRIP]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB2_INJECT_REG_TRIP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_INJECT_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB2_INJECT_REG_TRIP,
           EPS_THERM_WSUB2_INJECT_REG_TRIP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_THERM_WSUB2_INJECT_REG_TRIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB2_INJECT_REG_TRIP]

//>> SET_[EPS_THERM_WSUB2_INJECT_REG_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB2_INJECT_REG_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_INJECT_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB2_INJECT_REG_MODE,
           EPS_THERM_WSUB2_INJECT_REG_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_THERM_WSUB2_INJECT_REG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB2_INJECT_REG_MODE]

//>> SET_[EPS_THERM_WSUB2_INJECT_REG_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB2_INJECT_REG_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_INJECT_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB2_INJECT_REG_MODE,
           EPS_THERM_WSUB2_INJECT_REG_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_THERM_WSUB2_INJECT_REG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB2_INJECT_REG_MODE]

//>> GET_[EPS_THERM_WSUB2_INJECT_REG_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB2_INJECT_REG_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_INJECT_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB2_INJECT_REG_MODE,
           EPS_THERM_WSUB2_INJECT_REG_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_THERM_WSUB2_INJECT_REG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB2_INJECT_REG_MODE]

//>> PREP_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A]

//>> PUT_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A]

//>> PREP_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI]

//>> PUT_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI]

//>> PREP_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE]


//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PERMISSION_TO_SEND_DOORBELL_2]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PERMISSION_TO_SEND_DOORBELL_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PERMISSION_TO_SEND_DOORBELL_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PERMISSION_TO_SEND_DOORBELL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PERMISSION_TO_SEND_DOORBELL_2]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PERMISSION_TO_SEND_DOORBELL_2]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PERMISSION_TO_SEND_DOORBELL_2(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PERMISSION_TO_SEND_DOORBELL_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PERMISSION_TO_SEND_DOORBELL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PERMISSION_TO_SEND_DOORBELL_2]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PERMISSION_TO_SEND_DOORBELL_2]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PERMISSION_TO_SEND_DOORBELL_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PERMISSION_TO_SEND_DOORBELL_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PERMISSION_TO_SEND_DOORBELL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PERMISSION_TO_SEND_DOORBELL_2]

//>> CLEAR_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PERMISSION_TO_SEND_DOORBELL_2]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PERMISSION_TO_SEND_DOORBELL_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PERMISSION_TO_SEND_DOORBELL_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PERMISSION_TO_SEND_DOORBELL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PERMISSION_TO_SEND_DOORBELL_2]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PERMISSION_TO_SEND_DOORBELL_2]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PERMISSION_TO_SEND_DOORBELL_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PERMISSION_TO_SEND_DOORBELL_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PERMISSION_TO_SEND_DOORBELL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PERMISSION_TO_SEND_DOORBELL_2]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PERMISSION_TO_SEND_DOORBELL_2]
static inline bool GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PERMISSION_TO_SEND_DOORBELL_2(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PERMISSION_TO_SEND_DOORBELL_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PERMISSION_TO_SEND_DOORBELL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PERMISSION_TO_SEND_DOORBELL_2]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_ABORT_DOORBELL_2]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_ABORT_DOORBELL_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_ABORT_DOORBELL_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_ABORT_DOORBELL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_ABORT_DOORBELL_2]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_ABORT_DOORBELL_2]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_ABORT_DOORBELL_2(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_ABORT_DOORBELL_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_ABORT_DOORBELL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_ABORT_DOORBELL_2]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_ABORT_DOORBELL_2]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_ABORT_DOORBELL_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_ABORT_DOORBELL_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_ABORT_DOORBELL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_ABORT_DOORBELL_2]

//>> CLEAR_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_ABORT_DOORBELL_2]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_ABORT_DOORBELL_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_ABORT_DOORBELL_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_ABORT_DOORBELL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_ABORT_DOORBELL_2]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_ABORT_DOORBELL_2]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_ABORT_DOORBELL_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_ABORT_DOORBELL_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_ABORT_DOORBELL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_ABORT_DOORBELL_2]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_ABORT_DOORBELL_2]
static inline bool GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_ABORT_DOORBELL_2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_ABORT_DOORBELL_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_ABORT_DOORBELL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_ABORT_DOORBELL_2]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_LBUS_SLAVE_2B_PENDING]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_LBUS_SLAVE_2B_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_LBUS_SLAVE_2B_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_LBUS_SLAVE_2B_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_LBUS_SLAVE_2B_PENDING]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_LBUS_SLAVE_2B_PENDING]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_LBUS_SLAVE_2B_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_LBUS_SLAVE_2B_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_LBUS_SLAVE_2B_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_LBUS_SLAVE_2B_PENDING]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_LBUS_SLAVE_2B_PENDING]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_LBUS_SLAVE_2B_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_LBUS_SLAVE_2B_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_LBUS_SLAVE_2B_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_LBUS_SLAVE_2B_PENDING]

//>> CLEAR_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_LBUS_SLAVE_2B_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_LBUS_SLAVE_2B_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_LBUS_SLAVE_2B_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_LBUS_SLAVE_2B_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_LBUS_SLAVE_2B_PENDING]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_LBUS_SLAVE_2B_PENDING]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_LBUS_SLAVE_2B_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_LBUS_SLAVE_2B_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_LBUS_SLAVE_2B_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_LBUS_SLAVE_2B_PENDING]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_LBUS_SLAVE_2B_PENDING]
static inline bool GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_LBUS_SLAVE_2B_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_LBUS_SLAVE_2B_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_LBUS_SLAVE_2B_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_LBUS_SLAVE_2B_PENDING]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PIB_SLAVE_2A_PENDING]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PIB_SLAVE_2A_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PIB_SLAVE_2A_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PIB_SLAVE_2A_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PIB_SLAVE_2A_PENDING]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PIB_SLAVE_2A_PENDING]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PIB_SLAVE_2A_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PIB_SLAVE_2A_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PIB_SLAVE_2A_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PIB_SLAVE_2A_PENDING]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PIB_SLAVE_2A_PENDING]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PIB_SLAVE_2A_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PIB_SLAVE_2A_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PIB_SLAVE_2A_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PIB_SLAVE_2A_PENDING]

//>> CLEAR_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PIB_SLAVE_2A_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PIB_SLAVE_2A_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PIB_SLAVE_2A_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PIB_SLAVE_2A_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PIB_SLAVE_2A_PENDING]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PIB_SLAVE_2A_PENDING]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PIB_SLAVE_2A_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PIB_SLAVE_2A_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PIB_SLAVE_2A_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PIB_SLAVE_2A_PENDING]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PIB_SLAVE_2A_PENDING]
static inline bool GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PIB_SLAVE_2A_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PIB_SLAVE_2A_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PIB_SLAVE_2A_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_PIB_SLAVE_2A_PENDING]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XDN_DOORBELL_2]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XDN_DOORBELL_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XDN_DOORBELL_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XDN_DOORBELL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XDN_DOORBELL_2]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XDN_DOORBELL_2]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XDN_DOORBELL_2(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XDN_DOORBELL_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XDN_DOORBELL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XDN_DOORBELL_2]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XDN_DOORBELL_2]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XDN_DOORBELL_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XDN_DOORBELL_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XDN_DOORBELL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XDN_DOORBELL_2]

//>> CLEAR_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XDN_DOORBELL_2]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XDN_DOORBELL_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XDN_DOORBELL_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XDN_DOORBELL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XDN_DOORBELL_2]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XDN_DOORBELL_2]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XDN_DOORBELL_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XDN_DOORBELL_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XDN_DOORBELL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XDN_DOORBELL_2]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XDN_DOORBELL_2]
static inline bool GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XDN_DOORBELL_2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XDN_DOORBELL_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XDN_DOORBELL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XDN_DOORBELL_2]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XUP_DOORBELL_2]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XUP_DOORBELL_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XUP_DOORBELL_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XUP_DOORBELL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XUP_DOORBELL_2]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XUP_DOORBELL_2]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XUP_DOORBELL_2(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XUP_DOORBELL_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XUP_DOORBELL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XUP_DOORBELL_2]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XUP_DOORBELL_2]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XUP_DOORBELL_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XUP_DOORBELL_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XUP_DOORBELL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XUP_DOORBELL_2]

//>> CLEAR_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XUP_DOORBELL_2]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XUP_DOORBELL_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XUP_DOORBELL_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XUP_DOORBELL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XUP_DOORBELL_2]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XUP_DOORBELL_2]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XUP_DOORBELL_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XUP_DOORBELL_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XUP_DOORBELL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XUP_DOORBELL_2]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XUP_DOORBELL_2]
static inline bool GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XUP_DOORBELL_2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XUP_DOORBELL_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XUP_DOORBELL_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_XUP_DOORBELL_2]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2A]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2A,
           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2A]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2A]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2A(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2A,
           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2A]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2A]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2A,
           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2A]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2A]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2A,
           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2A]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2A]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2A(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2A,
           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2A]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2A]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2A,
           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2A]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2B]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2B,
           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2B]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2B]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2B(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2B,
           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2B]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2B]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2B,
           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_HEADER_COUNT_2B]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2B]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2B,
           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2B]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2B]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2B(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2B,
           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2B]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2B]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_FSI_BYTE));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2B,
           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_2A_DATA_COUNT_2B]

//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_0_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_0_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI_BYTE]

//>> SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_0_MDA_M1B_DATA_AREA_0]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1B_DATA_AREA_0_MDA_M1B_DATA_AREA_0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_0_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_0_MDA_M1B_DATA_AREA_0,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_0_MDA_M1B_DATA_AREA_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_0_MDA_M1B_DATA_AREA_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_0_MDA_M1B_DATA_AREA_0]

//>> SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_0_MDA_M1B_DATA_AREA_0]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1B_DATA_AREA_0_MDA_M1B_DATA_AREA_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_0_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_0_MDA_M1B_DATA_AREA_0,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_0_MDA_M1B_DATA_AREA_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_0_MDA_M1B_DATA_AREA_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_0_MDA_M1B_DATA_AREA_0]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_0_MDA_M1B_DATA_AREA_0]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_0_MDA_M1B_DATA_AREA_0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_0_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_0_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_0_MDA_M1B_DATA_AREA_0,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_0_MDA_M1B_DATA_AREA_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_0_MDA_M1B_DATA_AREA_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_0_MDA_M1B_DATA_AREA_0]

//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_11_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_11_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI_BYTE]

//>> SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_11_MDA_M1B_DATA_AREA_11]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1B_DATA_AREA_11_MDA_M1B_DATA_AREA_11(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_11_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_11_MDA_M1B_DATA_AREA_11,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_11_MDA_M1B_DATA_AREA_11_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_11_MDA_M1B_DATA_AREA_11 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_11_MDA_M1B_DATA_AREA_11]

//>> SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_11_MDA_M1B_DATA_AREA_11]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1B_DATA_AREA_11_MDA_M1B_DATA_AREA_11(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_11_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_11_MDA_M1B_DATA_AREA_11,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_11_MDA_M1B_DATA_AREA_11_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_11_MDA_M1B_DATA_AREA_11 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_11_MDA_M1B_DATA_AREA_11]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_11_MDA_M1B_DATA_AREA_11]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_11_MDA_M1B_DATA_AREA_11(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_11_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_11_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_11_MDA_M1B_DATA_AREA_11,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_11_MDA_M1B_DATA_AREA_11_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_11_MDA_M1B_DATA_AREA_11 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_11_MDA_M1B_DATA_AREA_11]

//>> PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_6_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_6_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_6_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2A_DATA_AREA_6_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_6_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_6_RW]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_6_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_6_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_6_RW;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_6_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_6_RW]

//>> PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_6_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2A_DATA_AREA_6_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_6_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_6_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_6_RW]


//>> SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_6_MDA_M2A_DATA_AREA_6]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2A_DATA_AREA_6_MDA_M2A_DATA_AREA_6(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_6_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2A_DATA_AREA_6_MDA_M2A_DATA_AREA_6,
           FSXCOMP_FSXLOG_M2A_DATA_AREA_6_MDA_M2A_DATA_AREA_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2A_DATA_AREA_6_MDA_M2A_DATA_AREA_6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_6_MDA_M2A_DATA_AREA_6]

//>> SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_6_MDA_M2A_DATA_AREA_6]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2A_DATA_AREA_6_MDA_M2A_DATA_AREA_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_6_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2A_DATA_AREA_6_MDA_M2A_DATA_AREA_6,
           FSXCOMP_FSXLOG_M2A_DATA_AREA_6_MDA_M2A_DATA_AREA_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2A_DATA_AREA_6_MDA_M2A_DATA_AREA_6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_6_MDA_M2A_DATA_AREA_6]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_6_MDA_M2A_DATA_AREA_6]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_6_MDA_M2A_DATA_AREA_6(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_6_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_6_RW));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M2A_DATA_AREA_6_MDA_M2A_DATA_AREA_6,
           FSXCOMP_FSXLOG_M2A_DATA_AREA_6_MDA_M2A_DATA_AREA_6_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2A_DATA_AREA_6_MDA_M2A_DATA_AREA_6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_6_MDA_M2A_DATA_AREA_6]

//>> PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_15_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_15_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI_BYTE]

//>> SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_15_MDA_M2B_DATA_AREA_15]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2B_DATA_AREA_15_MDA_M2B_DATA_AREA_15(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_15_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2B_DATA_AREA_15_MDA_M2B_DATA_AREA_15,
           FSXCOMP_FSXLOG_M2B_DATA_AREA_15_MDA_M2B_DATA_AREA_15_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2B_DATA_AREA_15_MDA_M2B_DATA_AREA_15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_15_MDA_M2B_DATA_AREA_15]

//>> SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_15_MDA_M2B_DATA_AREA_15]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2B_DATA_AREA_15_MDA_M2B_DATA_AREA_15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_15_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2B_DATA_AREA_15_MDA_M2B_DATA_AREA_15,
           FSXCOMP_FSXLOG_M2B_DATA_AREA_15_MDA_M2B_DATA_AREA_15_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2B_DATA_AREA_15_MDA_M2B_DATA_AREA_15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_15_MDA_M2B_DATA_AREA_15]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_15_MDA_M2B_DATA_AREA_15]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_15_MDA_M2B_DATA_AREA_15(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_15_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_15_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M2B_DATA_AREA_15_MDA_M2B_DATA_AREA_15,
           FSXCOMP_FSXLOG_M2B_DATA_AREA_15_MDA_M2B_DATA_AREA_15_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2B_DATA_AREA_15_MDA_M2B_DATA_AREA_15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_15_MDA_M2B_DATA_AREA_15]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR]


//>> SET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_XUP_MAILBOX_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_XUP_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_XUP_MAILBOX_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_XUP_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_XUP_MAILBOX_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_XUP_MAILBOX_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_XUP_MAILBOX_1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_XUP_MAILBOX_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_XUP_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_XUP_MAILBOX_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_XUP_MAILBOX_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_XUP_MAILBOX_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_XUP_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_XUP_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_XUP_MAILBOX_1]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_XUP_MAILBOX_1]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_XUP_MAILBOX_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_XUP_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_XUP_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_XUP_MAILBOX_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_XUP_MAILBOX_1]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_XUP_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_XUP_MAILBOX_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_XUP_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_XUP_MAILBOX_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_XUP_MAILBOX_1]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_XUP_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_XUP_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_XUP_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_XUP_MAILBOX_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_PENDING_MAILBOX_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_PENDING_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_PENDING_MAILBOX_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_PENDING_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_PENDING_MAILBOX_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_PENDING_MAILBOX_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_PENDING_MAILBOX_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_PENDING_MAILBOX_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_PENDING_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_PENDING_MAILBOX_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_PENDING_MAILBOX_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_PENDING_MAILBOX_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_PENDING_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_PENDING_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_PENDING_MAILBOX_1]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_PENDING_MAILBOX_1]
static inline fapi2::buffer<uint64_t>&
CLEAR_FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_PENDING_MAILBOX_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_PENDING_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_PENDING_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_PENDING_MAILBOX_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_PENDING_MAILBOX_1]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_PENDING_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_PENDING_MAILBOX_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_PENDING_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_PENDING_MAILBOX_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_PENDING_MAILBOX_1]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_PENDING_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_RW_WOR,
                           FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_WO_CLEAR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_PENDING_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_PENDING_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_1_SLAVE_A_DOORBELL_INTERRUPT_MASK_PIB_SLAVE_A_PENDING_MAILBOX_1]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO]


//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_2]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_2]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_2(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_2]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_2]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_2]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_2]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_2]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_2(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_1]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_1]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_1]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_1]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_ABORT_MAILBOX_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_2]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_2]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_2(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_2]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_2]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_2]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_2]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_2]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_2(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_1]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_1]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_1]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_1]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_XDN_MAILBOX_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_2]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_2]
static inline fapi2::buffer<uint64_t>&
CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_2]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_2]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_2(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_1]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_1]
static inline fapi2::buffer<uint64_t>&
CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_1]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_1]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MSBDI_LBUS_SLAVE_B_PENDING_MAILBOX_1]

//>> PREP_[L3TRA0_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA0_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA0_TR0_CONFIG_3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA0_TR0_CONFIG_3]

//>> GET_[L3TRA0_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA0_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA0_TR0_CONFIG_3;
#endif
    return fapi2::getScom(i_target, L3TRA0_TR0_CONFIG_3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_3]

//>> PUT_[L3TRA0_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA0_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_3));
#endif
    return fapi2::putScom(i_target, L3TRA0_TR0_CONFIG_3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA0_TR0_CONFIG_3]


//>> SET_[L3TRA0_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_3_C,
           L3TRA0_TR0_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_3_C]

//>> SET_[L3TRA0_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_3_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_3_C,
           L3TRA0_TR0_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_3_C]

//>> GET_[L3TRA0_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR0_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_3));
#endif
    return i_data.extractToRight<L3TRA0_TR0_CONFIG_3_C,
           L3TRA0_TR0_CONFIG_3_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_3_C]

//>> SET_[L3TRA0_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_3_D,
           L3TRA0_TR0_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_3_D]

//>> SET_[L3TRA0_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_3_D(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_3_D,
           L3TRA0_TR0_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_3_D]

//>> GET_[L3TRA0_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR0_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_3));
#endif
    return i_data.extractToRight<L3TRA0_TR0_CONFIG_3_D,
           L3TRA0_TR0_CONFIG_3_D_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_3_D]

//>> PREP_[L3TRA1_TR1_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA1_TR1_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR1_TRACE_LO_DATA_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA1_TR1_TRACE_LO_DATA_REG]

//>> GET_[L3TRA1_TR1_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA1_TR1_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR1_TRACE_LO_DATA_REG;
#endif
    return fapi2::getScom(i_target, L3TRA1_TR1_TRACE_LO_DATA_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA1_TR1_TRACE_LO_DATA_REG]

//>> PUT_[L3TRA1_TR1_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA1_TR1_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_LO_DATA_REG));
#endif
    return fapi2::putScom(i_target, L3TRA1_TR1_TRACE_LO_DATA_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA1_TR1_TRACE_LO_DATA_REG]


//>> SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_TRACE_LO_DATA_REG_LO_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_TRACE_LO_DATA_REG_LO_DATA,
           L3TRA1_TR1_TRACE_LO_DATA_REG_LO_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_LO_DATA]

//>> SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_TRACE_LO_DATA_REG_LO_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_TRACE_LO_DATA_REG_LO_DATA,
           L3TRA1_TR1_TRACE_LO_DATA_REG_LO_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_LO_DATA]

//>> GET_[L3TRA1_TR1_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_TRACE_LO_DATA_REG_LO_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA1_TR1_TRACE_LO_DATA_REG_LO_DATA,
           L3TRA1_TR1_TRACE_LO_DATA_REG_LO_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_TRACE_LO_DATA_REG_LO_DATA]

//>> SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_TRACE_LO_DATA_REG_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_TRACE_LO_DATA_REG_ADDRESS,
           L3TRA1_TR1_TRACE_LO_DATA_REG_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_ADDRESS]

//>> SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_TRACE_LO_DATA_REG_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_TRACE_LO_DATA_REG_ADDRESS,
           L3TRA1_TR1_TRACE_LO_DATA_REG_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_ADDRESS]

//>> GET_[L3TRA1_TR1_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_TRACE_LO_DATA_REG_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA1_TR1_TRACE_LO_DATA_REG_ADDRESS,
           L3TRA1_TR1_TRACE_LO_DATA_REG_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_TRACE_LO_DATA_REG_ADDRESS]

//>> SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK,
           L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK]

//>> SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK,
           L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK]

//>> GET_[L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK,
           L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK]

//>> SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> CLEAR_[L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> GET_[L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> GET_[L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline bool GET_L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> CLEAR_[L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> GET_[L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> GET_[L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline bool GET_L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING]

//>> CLEAR_[L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING]

//>> GET_[L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING]

//>> GET_[L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING]
static inline bool GET_L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           L3TRA1_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           L3TRA1_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> GET_[L3TRA1_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA1_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           L3TRA1_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> PREP_[L3TRA1_TR1_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA1_TR1_CONFIG_5(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR1_CONFIG_5;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA1_TR1_CONFIG_5]

//>> GET_[L3TRA1_TR1_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA1_TR1_CONFIG_5(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR1_CONFIG_5;
#endif
    return fapi2::getScom(i_target, L3TRA1_TR1_CONFIG_5, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_5]

//>> PUT_[L3TRA1_TR1_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA1_TR1_CONFIG_5(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_5));
#endif
    return fapi2::putScom(i_target, L3TRA1_TR1_CONFIG_5, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA1_TR1_CONFIG_5]


//>> SET_[L3TRA1_TR1_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_5_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_5));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_5_C,
           L3TRA1_TR1_CONFIG_5_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_5_C]

//>> SET_[L3TRA1_TR1_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_5_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_5));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_5_C,
           L3TRA1_TR1_CONFIG_5_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_5_C]

//>> GET_[L3TRA1_TR1_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_5_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_5));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_5_C,
           L3TRA1_TR1_CONFIG_5_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_5_C]

//>> SET_[L3TRA1_TR1_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_5_D(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_5));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_5_D,
           L3TRA1_TR1_CONFIG_5_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_5_D]

//>> SET_[L3TRA1_TR1_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_5_D(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_5));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_5_D,
           L3TRA1_TR1_CONFIG_5_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_5_D]

//>> GET_[L3TRA1_TR1_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_5_D(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_5));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_5_D,
           L3TRA1_TR1_CONFIG_5_D_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_5_D]

//>> PREP_[L3TRA2_TR0_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA2_TR0_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA2_TR0_TRACE_HI_DATA_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA2_TR0_TRACE_HI_DATA_REG]

//>> GET_[L3TRA2_TR0_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA2_TR0_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA2_TR0_TRACE_HI_DATA_REG;
#endif
    return fapi2::getScom(i_target, L3TRA2_TR0_TRACE_HI_DATA_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA2_TR0_TRACE_HI_DATA_REG]

//>> PUT_[L3TRA2_TR0_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA2_TR0_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_HI_DATA_REG));
#endif
    return fapi2::putScom(i_target, L3TRA2_TR0_TRACE_HI_DATA_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA2_TR0_TRACE_HI_DATA_REG]


//>> SET_[L3TRA2_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_HI_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           L3TRA2_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> SET_[L3TRA2_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_HI_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           L3TRA2_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> GET_[L3TRA2_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_TRACE_HI_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA2_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           L3TRA2_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> PREP_[L3TRA2_TR0_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA2_TR0_CONFIG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA2_TR0_CONFIG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA2_TR0_CONFIG]

//>> GET_[L3TRA2_TR0_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA2_TR0_CONFIG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA2_TR0_CONFIG;
#endif
    return fapi2::getScom(i_target, L3TRA2_TR0_CONFIG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG]

//>> PUT_[L3TRA2_TR0_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA2_TR0_CONFIG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return fapi2::putScom(i_target, L3TRA2_TR0_CONFIG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA2_TR0_CONFIG]


//>> SET_[L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.setBit<L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> CLEAR_[L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.clearBit<L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> GET_[L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> GET_[L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline bool GET_L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return i_data.getBit<L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.setBit<L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> CLEAR_[L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.clearBit<L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> GET_[L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> GET_[L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline bool GET_L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return i_data.getBit<L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[L3TRA2_TR0_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_EXTEND_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_EXTEND_TRIG_MODE,
           L3TRA2_TR0_CONFIG_EXTEND_TRIG_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_EXTEND_TRIG_MODE]

//>> SET_[L3TRA2_TR0_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_EXTEND_TRIG_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_EXTEND_TRIG_MODE,
           L3TRA2_TR0_CONFIG_EXTEND_TRIG_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_EXTEND_TRIG_MODE]

//>> GET_[L3TRA2_TR0_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_EXTEND_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_EXTEND_TRIG_MODE,
           L3TRA2_TR0_CONFIG_EXTEND_TRIG_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_EXTEND_TRIG_MODE]

//>> SET_[L3TRA2_TR0_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_BANK_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_BANK_MODE]

//>> SET_[L3TRA2_TR0_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_BANK_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_BANK_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_BANK_MODE]

//>> SET_[L3TRA2_TR0_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.setBit<L3TRA2_TR0_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_BANK_MODE]

//>> CLEAR_[L3TRA2_TR0_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR0_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.clearBit<L3TRA2_TR0_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR0_CONFIG_BANK_MODE]

//>> GET_[L3TRA2_TR0_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_BANK_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_BANK_MODE]

//>> GET_[L3TRA2_TR0_CONFIG_BANK_MODE]
static inline bool GET_L3TRA2_TR0_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return i_data.getBit<L3TRA2_TR0_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_BANK_MODE]

//>> SET_[L3TRA2_TR0_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_ENH_TRACE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_ENH_TRACE_MODE]

//>> SET_[L3TRA2_TR0_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_ENH_TRACE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_ENH_TRACE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_ENH_TRACE_MODE]

//>> SET_[L3TRA2_TR0_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.setBit<L3TRA2_TR0_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_ENH_TRACE_MODE]

//>> CLEAR_[L3TRA2_TR0_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR0_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.clearBit<L3TRA2_TR0_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR0_CONFIG_ENH_TRACE_MODE]

//>> GET_[L3TRA2_TR0_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_ENH_TRACE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_ENH_TRACE_MODE]

//>> GET_[L3TRA2_TR0_CONFIG_ENH_TRACE_MODE]
static inline bool GET_L3TRA2_TR0_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return i_data.getBit<L3TRA2_TR0_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_ENH_TRACE_MODE]

//>> SET_[L3TRA2_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           L3TRA2_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> SET_[L3TRA2_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           L3TRA2_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> GET_[L3TRA2_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           L3TRA2_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> SET_[L3TRA2_TR0_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_TRACE_SELECT_CONTROL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_TRACE_SELECT_CONTROL,
           L3TRA2_TR0_CONFIG_TRACE_SELECT_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_TRACE_SELECT_CONTROL]

//>> SET_[L3TRA2_TR0_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_TRACE_SELECT_CONTROL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_TRACE_SELECT_CONTROL,
           L3TRA2_TR0_CONFIG_TRACE_SELECT_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_TRACE_SELECT_CONTROL]

//>> GET_[L3TRA2_TR0_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_TRACE_SELECT_CONTROL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_TRACE_SELECT_CONTROL,
           L3TRA2_TR0_CONFIG_TRACE_SELECT_CONTROL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_TRACE_SELECT_CONTROL]

//>> SET_[L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.setBit<L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> CLEAR_[L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.clearBit<L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> GET_[L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> GET_[L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline bool GET_L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return i_data.getBit<L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS]

//>> SET_[L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS]

//>> SET_[L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.setBit<L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS]

//>> CLEAR_[L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.clearBit<L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS]

//>> GET_[L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS]

//>> GET_[L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS]
static inline bool GET_L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return i_data.getBit<L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS]

//>> SET_[L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY]

//>> SET_[L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY]

//>> SET_[L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.setBit<L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY]

//>> CLEAR_[L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.clearBit<L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY]

//>> GET_[L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY]

//>> GET_[L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY]
static inline bool GET_L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return i_data.getBit<L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY]

//>> SET_[L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.setBit<L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> CLEAR_[L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.clearBit<L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> GET_[L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> GET_[L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline bool GET_L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return i_data.getBit<L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> SET_[L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> SET_[L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.setBit<L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> CLEAR_[L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.clearBit<L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> GET_[L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> GET_[L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline bool GET_L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return i_data.getBit<L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> SET_[L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> SET_[L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> SET_[L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.setBit<L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> CLEAR_[L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return o_data.clearBit<L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> GET_[L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> GET_[L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline bool GET_L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG));
#endif
    return i_data.getBit<L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> PREP_[L3TRA2_TR1_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA2_TR1_CONFIG_2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA2_TR1_CONFIG_2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA2_TR1_CONFIG_2]

//>> GET_[L3TRA2_TR1_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA2_TR1_CONFIG_2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA2_TR1_CONFIG_2;
#endif
    return fapi2::getScom(i_target, L3TRA2_TR1_CONFIG_2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_2]

//>> PUT_[L3TRA2_TR1_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA2_TR1_CONFIG_2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_2));
#endif
    return fapi2::putScom(i_target, L3TRA2_TR1_CONFIG_2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA2_TR1_CONFIG_2]


//>> SET_[L3TRA2_TR1_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_2_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_2));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_2_A,
           L3TRA2_TR1_CONFIG_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_2_A]

//>> SET_[L3TRA2_TR1_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_2_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_2));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_2_A,
           L3TRA2_TR1_CONFIG_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_2_A]

//>> GET_[L3TRA2_TR1_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_CONFIG_2_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_2));
#endif
    return i_data.extractToRight<L3TRA2_TR1_CONFIG_2_A,
           L3TRA2_TR1_CONFIG_2_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_2_A]

//>> SET_[L3TRA2_TR1_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_2_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_2));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_2_B,
           L3TRA2_TR1_CONFIG_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_2_B]

//>> SET_[L3TRA2_TR1_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_2_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_2));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_2_B,
           L3TRA2_TR1_CONFIG_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_2_B]

//>> GET_[L3TRA2_TR1_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_CONFIG_2_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_2));
#endif
    return i_data.extractToRight<L3TRA2_TR1_CONFIG_2_B,
           L3TRA2_TR1_CONFIG_2_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_2_B]

//>> PREP_[L3TRA3_TR0_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA3_TR0_CONFIG_4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA3_TR0_CONFIG_4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA3_TR0_CONFIG_4]

//>> GET_[L3TRA3_TR0_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA3_TR0_CONFIG_4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA3_TR0_CONFIG_4;
#endif
    return fapi2::getScom(i_target, L3TRA3_TR0_CONFIG_4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_4]

//>> PUT_[L3TRA3_TR0_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA3_TR0_CONFIG_4(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_4));
#endif
    return fapi2::putScom(i_target, L3TRA3_TR0_CONFIG_4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA3_TR0_CONFIG_4]


//>> SET_[L3TRA3_TR0_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_4_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_4_A,
           L3TRA3_TR0_CONFIG_4_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR0_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_4_A]

//>> SET_[L3TRA3_TR0_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_4_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_4_A,
           L3TRA3_TR0_CONFIG_4_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR0_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_4_A]

//>> GET_[L3TRA3_TR0_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_CONFIG_4_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_4));
#endif
    return i_data.extractToRight<L3TRA3_TR0_CONFIG_4_A,
           L3TRA3_TR0_CONFIG_4_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR0_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_4_A]

//>> SET_[L3TRA3_TR0_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_4_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_4_B,
           L3TRA3_TR0_CONFIG_4_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR0_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_4_B]

//>> SET_[L3TRA3_TR0_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_4_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_4_B,
           L3TRA3_TR0_CONFIG_4_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR0_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_4_B]

//>> GET_[L3TRA3_TR0_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_CONFIG_4_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_4));
#endif
    return i_data.extractToRight<L3TRA3_TR0_CONFIG_4_B,
           L3TRA3_TR0_CONFIG_4_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR0_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_4_B]

//>> PREP_[L3TRA3_TR1_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA3_TR1_CONFIG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA3_TR1_CONFIG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA3_TR1_CONFIG]

//>> GET_[L3TRA3_TR1_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA3_TR1_CONFIG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA3_TR1_CONFIG;
#endif
    return fapi2::getScom(i_target, L3TRA3_TR1_CONFIG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG]

//>> PUT_[L3TRA3_TR1_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA3_TR1_CONFIG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return fapi2::putScom(i_target, L3TRA3_TR1_CONFIG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA3_TR1_CONFIG]


//>> SET_[L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.setBit<L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE]

//>> CLEAR_[L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.clearBit<L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE]

//>> GET_[L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE]

//>> GET_[L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE]
static inline bool GET_L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return i_data.getBit<L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.setBit<L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE]

//>> CLEAR_[L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.clearBit<L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE]

//>> GET_[L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE]

//>> GET_[L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE]
static inline bool GET_L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return i_data.getBit<L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[L3TRA3_TR1_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_EXTEND_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_EXTEND_TRIG_MODE,
           L3TRA3_TR1_CONFIG_EXTEND_TRIG_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_EXTEND_TRIG_MODE]

//>> SET_[L3TRA3_TR1_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_EXTEND_TRIG_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_EXTEND_TRIG_MODE,
           L3TRA3_TR1_CONFIG_EXTEND_TRIG_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_EXTEND_TRIG_MODE]

//>> GET_[L3TRA3_TR1_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR1_CONFIG_EXTEND_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA3_TR1_CONFIG_EXTEND_TRIG_MODE,
           L3TRA3_TR1_CONFIG_EXTEND_TRIG_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_EXTEND_TRIG_MODE]

//>> SET_[L3TRA3_TR1_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_BANK_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_BANK_MODE]

//>> SET_[L3TRA3_TR1_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_BANK_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_BANK_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_BANK_MODE]

//>> SET_[L3TRA3_TR1_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.setBit<L3TRA3_TR1_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_BANK_MODE]

//>> CLEAR_[L3TRA3_TR1_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA3_TR1_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.clearBit<L3TRA3_TR1_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA3_TR1_CONFIG_BANK_MODE]

//>> GET_[L3TRA3_TR1_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR1_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA3_TR1_CONFIG_BANK_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_BANK_MODE]

//>> GET_[L3TRA3_TR1_CONFIG_BANK_MODE]
static inline bool GET_L3TRA3_TR1_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return i_data.getBit<L3TRA3_TR1_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_BANK_MODE]

//>> SET_[L3TRA3_TR1_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_ENH_TRACE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_ENH_TRACE_MODE]

//>> SET_[L3TRA3_TR1_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_ENH_TRACE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_ENH_TRACE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_ENH_TRACE_MODE]

//>> SET_[L3TRA3_TR1_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.setBit<L3TRA3_TR1_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_ENH_TRACE_MODE]

//>> CLEAR_[L3TRA3_TR1_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA3_TR1_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.clearBit<L3TRA3_TR1_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA3_TR1_CONFIG_ENH_TRACE_MODE]

//>> GET_[L3TRA3_TR1_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR1_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA3_TR1_CONFIG_ENH_TRACE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_ENH_TRACE_MODE]

//>> GET_[L3TRA3_TR1_CONFIG_ENH_TRACE_MODE]
static inline bool GET_L3TRA3_TR1_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return i_data.getBit<L3TRA3_TR1_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_ENH_TRACE_MODE]

//>> SET_[L3TRA3_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           L3TRA3_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> SET_[L3TRA3_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           L3TRA3_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> GET_[L3TRA3_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA3_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           L3TRA3_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> SET_[L3TRA3_TR1_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_TRACE_SELECT_CONTROL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_TRACE_SELECT_CONTROL,
           L3TRA3_TR1_CONFIG_TRACE_SELECT_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_TRACE_SELECT_CONTROL]

//>> SET_[L3TRA3_TR1_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_TRACE_SELECT_CONTROL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_TRACE_SELECT_CONTROL,
           L3TRA3_TR1_CONFIG_TRACE_SELECT_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_TRACE_SELECT_CONTROL]

//>> GET_[L3TRA3_TR1_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR1_CONFIG_TRACE_SELECT_CONTROL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA3_TR1_CONFIG_TRACE_SELECT_CONTROL,
           L3TRA3_TR1_CONFIG_TRACE_SELECT_CONTROL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_TRACE_SELECT_CONTROL]

//>> SET_[L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.setBit<L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF]

//>> CLEAR_[L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.clearBit<L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF]

//>> GET_[L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF]

//>> GET_[L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF]
static inline bool GET_L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return i_data.getBit<L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS]

//>> SET_[L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS]

//>> SET_[L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.setBit<L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS]

//>> CLEAR_[L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.clearBit<L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS]

//>> GET_[L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS]

//>> GET_[L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS]
static inline bool GET_L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return i_data.getBit<L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS]

//>> SET_[L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY]

//>> SET_[L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY]

//>> SET_[L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.setBit<L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY]

//>> CLEAR_[L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.clearBit<L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY]

//>> GET_[L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY]

//>> GET_[L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY]
static inline bool GET_L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return i_data.getBit<L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY]

//>> SET_[L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.setBit<L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> CLEAR_[L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.clearBit<L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> GET_[L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> GET_[L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline bool GET_L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return i_data.getBit<L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> SET_[L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> SET_[L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.setBit<L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> CLEAR_[L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.clearBit<L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> GET_[L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> GET_[L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline bool GET_L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return i_data.getBit<L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> SET_[L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> SET_[L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> SET_[L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.setBit<L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> CLEAR_[L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return o_data.clearBit<L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> GET_[L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> GET_[L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline bool GET_L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG));
#endif
    return i_data.getBit<L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> PREP_[LXSTOP_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_LXSTOP_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = LXSTOP_INTERRUPT_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[LXSTOP_INTERRUPT_REG]

//>> GET_[LXSTOP_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_LXSTOP_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = LXSTOP_INTERRUPT_REG;
#endif
    return fapi2::getScom(i_target, LXSTOP_INTERRUPT_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[LXSTOP_INTERRUPT_REG]

//>> PUT_[LXSTOP_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_LXSTOP_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(LXSTOP_INTERRUPT_REG));
#endif
    return fapi2::putScom(i_target, LXSTOP_INTERRUPT_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[LXSTOP_INTERRUPT_REG]


//>> SET_[LXSTOP_INTERRUPT_REG_LXSTOP]
static inline fapi2::buffer<uint64_t>& SET_LXSTOP_INTERRUPT_REG_LXSTOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LXSTOP_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<LXSTOP_INTERRUPT_REG_LXSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LXSTOP_INTERRUPT_REG_LXSTOP]

//>> SET_[LXSTOP_INTERRUPT_REG_LXSTOP]
static inline fapi2::buffer<uint64_t>& SET_LXSTOP_INTERRUPT_REG_LXSTOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LXSTOP_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<LXSTOP_INTERRUPT_REG_LXSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LXSTOP_INTERRUPT_REG_LXSTOP]

//>> SET_[LXSTOP_INTERRUPT_REG_LXSTOP]
static inline fapi2::buffer<uint64_t>& SET_LXSTOP_INTERRUPT_REG_LXSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LXSTOP_INTERRUPT_REG));
#endif
    return o_data.setBit<LXSTOP_INTERRUPT_REG_LXSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LXSTOP_INTERRUPT_REG_LXSTOP]

//>> CLEAR_[LXSTOP_INTERRUPT_REG_LXSTOP]
static inline fapi2::buffer<uint64_t>& CLEAR_LXSTOP_INTERRUPT_REG_LXSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LXSTOP_INTERRUPT_REG));
#endif
    return o_data.clearBit<LXSTOP_INTERRUPT_REG_LXSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LXSTOP_INTERRUPT_REG_LXSTOP]

//>> GET_[LXSTOP_INTERRUPT_REG_LXSTOP]
static inline fapi2::buffer<uint64_t>& GET_LXSTOP_INTERRUPT_REG_LXSTOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LXSTOP_INTERRUPT_REG));
#endif
    return i_data.extractToRight<LXSTOP_INTERRUPT_REG_LXSTOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LXSTOP_INTERRUPT_REG_LXSTOP]

//>> GET_[LXSTOP_INTERRUPT_REG_LXSTOP]
static inline bool GET_LXSTOP_INTERRUPT_REG_LXSTOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LXSTOP_INTERRUPT_REG));
#endif
    return i_data.getBit<LXSTOP_INTERRUPT_REG_LXSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LXSTOP_INTERRUPT_REG_LXSTOP]

//>> PREP_[OTPC_M_MEASURE_REG11]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_OTPC_M_MEASURE_REG11(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = OTPC_M_MEASURE_REG11;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[OTPC_M_MEASURE_REG11]

//>> GET_[OTPC_M_MEASURE_REG11]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_OTPC_M_MEASURE_REG11(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = OTPC_M_MEASURE_REG11;
#endif
    return fapi2::getScom(i_target, OTPC_M_MEASURE_REG11, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[OTPC_M_MEASURE_REG11]

//>> PUT_[OTPC_M_MEASURE_REG11]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_OTPC_M_MEASURE_REG11(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG11));
#endif
    return fapi2::putScom(i_target, OTPC_M_MEASURE_REG11, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[OTPC_M_MEASURE_REG11]


//>> SET_[OTPC_M_MEASURE_REG11_SEEPROM_MEASUREMENT11_DATA]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_MEASURE_REG11_SEEPROM_MEASUREMENT11_DATA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG11));
#endif
    return o_data.insertFromRight<OTPC_M_MEASURE_REG11_SEEPROM_MEASUREMENT11_DATA,
           OTPC_M_MEASURE_REG11_SEEPROM_MEASUREMENT11_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_MEASURE_REG11_SEEPROM_MEASUREMENT11_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_MEASURE_REG11_SEEPROM_MEASUREMENT11_DATA]

//>> SET_[OTPC_M_MEASURE_REG11_SEEPROM_MEASUREMENT11_DATA]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_MEASURE_REG11_SEEPROM_MEASUREMENT11_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG11));
#endif
    return o_data.insertFromRight<OTPC_M_MEASURE_REG11_SEEPROM_MEASUREMENT11_DATA,
           OTPC_M_MEASURE_REG11_SEEPROM_MEASUREMENT11_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_MEASURE_REG11_SEEPROM_MEASUREMENT11_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_MEASURE_REG11_SEEPROM_MEASUREMENT11_DATA]

//>> GET_[OTPC_M_MEASURE_REG11_SEEPROM_MEASUREMENT11_DATA]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_MEASURE_REG11_SEEPROM_MEASUREMENT11_DATA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG11));
#endif
    return i_data.extractToRight<OTPC_M_MEASURE_REG11_SEEPROM_MEASUREMENT11_DATA,
           OTPC_M_MEASURE_REG11_SEEPROM_MEASUREMENT11_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_MEASURE_REG11_SEEPROM_MEASUREMENT11_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_MEASURE_REG11_SEEPROM_MEASUREMENT11_DATA]

//>> PREP_[PHASE_COUNTER_RESET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PHASE_COUNTER_RESET(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHASE_COUNTER_RESET;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PHASE_COUNTER_RESET]

//>> GET_[PHASE_COUNTER_RESET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PHASE_COUNTER_RESET(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHASE_COUNTER_RESET;
#endif
    return fapi2::getScom(i_target, PHASE_COUNTER_RESET, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PHASE_COUNTER_RESET]

//>> PUT_[PHASE_COUNTER_RESET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PHASE_COUNTER_RESET(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PHASE_COUNTER_RESET));
#endif
    return fapi2::putScom(i_target, PHASE_COUNTER_RESET, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PHASE_COUNTER_RESET]


//>> SET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]
static inline fapi2::buffer<uint64_t>& SET_PHASE_COUNTER_RESET_PHASECOUNTER_RESET(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHASE_COUNTER_RESET));
#endif
    return o_data.insertFromRight<PHASE_COUNTER_RESET_PHASECOUNTER_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]

//>> SET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]
static inline fapi2::buffer<uint64_t>& SET_PHASE_COUNTER_RESET_PHASECOUNTER_RESET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHASE_COUNTER_RESET));
#endif
    return o_data.insertFromRight<PHASE_COUNTER_RESET_PHASECOUNTER_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]

//>> SET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]
static inline fapi2::buffer<uint64_t>& SET_PHASE_COUNTER_RESET_PHASECOUNTER_RESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHASE_COUNTER_RESET));
#endif
    return o_data.setBit<PHASE_COUNTER_RESET_PHASECOUNTER_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]

//>> CLEAR_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]
static inline fapi2::buffer<uint64_t>& CLEAR_PHASE_COUNTER_RESET_PHASECOUNTER_RESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHASE_COUNTER_RESET));
#endif
    return o_data.clearBit<PHASE_COUNTER_RESET_PHASECOUNTER_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]

//>> GET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]
static inline fapi2::buffer<uint64_t>& GET_PHASE_COUNTER_RESET_PHASECOUNTER_RESET(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHASE_COUNTER_RESET));
#endif
    return i_data.extractToRight<PHASE_COUNTER_RESET_PHASECOUNTER_RESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]

//>> GET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]
static inline bool GET_PHASE_COUNTER_RESET_PHASECOUNTER_RESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHASE_COUNTER_RESET));
#endif
    return i_data.getBit<PHASE_COUNTER_RESET_PHASECOUNTER_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]

//>> PREP_[REC_ERR_MST3_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_REC_ERR_MST3_REG2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST3_REG2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[REC_ERR_MST3_REG2]

//>> GET_[REC_ERR_MST3_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_REC_ERR_MST3_REG2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST3_REG2;
#endif
    return fapi2::getScom(i_target, REC_ERR_MST3_REG2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[REC_ERR_MST3_REG2]

//>> PUT_[REC_ERR_MST3_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_REC_ERR_MST3_REG2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return fapi2::putScom(i_target, REC_ERR_MST3_REG2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[REC_ERR_MST3_REG2]


//>> SET_[REC_ERR_MST3_REG2_32_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_32_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_32_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG2_32_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_32_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_32_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_32_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_32_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG2_32_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_32_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_32_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_32_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.setBit<REC_ERR_MST3_REG2_32_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG2_32_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_32_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG2_32_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG2_32_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG2_32_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG2_32_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG2_32_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG2_32_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG2_32_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG2_32_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG2_32_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_32_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG2_32_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG2_32_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.getBit<REC_ERR_MST3_REG2_32_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG2_32_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_32_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_32_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_32_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_32_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_32_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG2_32_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_32_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG2_32_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_32_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_32_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_32_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG2_32_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_32_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG2_32_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG2_32_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG2_32_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_32_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG2_32_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_32_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG2_33_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_33_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_33_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG2_33_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_33_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_33_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_33_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_33_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG2_33_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_33_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_33_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_33_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.setBit<REC_ERR_MST3_REG2_33_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG2_33_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_33_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG2_33_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG2_33_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG2_33_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG2_33_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG2_33_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG2_33_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG2_33_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG2_33_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG2_33_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_33_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG2_33_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG2_33_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.getBit<REC_ERR_MST3_REG2_33_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG2_33_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_33_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_33_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_33_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_33_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_33_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG2_33_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_33_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG2_33_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_33_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_33_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_33_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG2_33_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_33_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG2_33_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG2_33_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG2_33_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_33_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG2_33_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_33_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG2_34_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_34_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_34_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG2_34_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_34_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_34_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_34_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_34_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG2_34_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_34_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_34_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_34_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.setBit<REC_ERR_MST3_REG2_34_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG2_34_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_34_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG2_34_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG2_34_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG2_34_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG2_34_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG2_34_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG2_34_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG2_34_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG2_34_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG2_34_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_34_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG2_34_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG2_34_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.getBit<REC_ERR_MST3_REG2_34_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG2_34_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_34_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_34_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_34_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_34_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_34_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG2_34_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_34_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG2_34_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_34_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_34_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_34_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG2_34_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_34_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG2_34_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG2_34_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG2_34_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_34_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG2_34_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_34_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG2_35_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_35_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_35_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG2_35_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_35_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_35_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_35_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_35_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG2_35_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_35_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_35_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_35_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.setBit<REC_ERR_MST3_REG2_35_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG2_35_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_35_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG2_35_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG2_35_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG2_35_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG2_35_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG2_35_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG2_35_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG2_35_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG2_35_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG2_35_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_35_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG2_35_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG2_35_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.getBit<REC_ERR_MST3_REG2_35_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG2_35_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_35_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_35_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_35_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_35_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_35_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG2_35_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_35_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG2_35_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_35_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_35_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_35_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG2_35_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_35_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG2_35_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG2_35_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG2_35_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_35_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG2_35_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_35_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG2_36_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_36_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_36_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG2_36_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_36_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_36_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_36_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_36_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG2_36_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_36_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_36_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_36_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.setBit<REC_ERR_MST3_REG2_36_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG2_36_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_36_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG2_36_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG2_36_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG2_36_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG2_36_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG2_36_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG2_36_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG2_36_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG2_36_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG2_36_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_36_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG2_36_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG2_36_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.getBit<REC_ERR_MST3_REG2_36_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG2_36_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_36_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_36_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_36_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_36_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_36_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG2_36_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_36_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG2_36_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_36_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_36_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_36_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG2_36_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_36_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG2_36_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG2_36_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG2_36_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_36_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG2_36_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_36_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG2_37_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_37_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_37_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG2_37_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_37_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_37_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_37_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_37_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG2_37_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_37_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_37_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_37_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.setBit<REC_ERR_MST3_REG2_37_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG2_37_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_37_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG2_37_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG2_37_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG2_37_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG2_37_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG2_37_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG2_37_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG2_37_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG2_37_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG2_37_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_37_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG2_37_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG2_37_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.getBit<REC_ERR_MST3_REG2_37_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG2_37_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_37_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_37_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_37_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_37_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_37_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG2_37_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_37_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG2_37_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_37_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_37_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_37_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG2_37_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_37_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG2_37_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG2_37_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG2_37_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_37_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG2_37_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_37_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG2_38_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_38_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_38_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG2_38_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_38_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_38_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_38_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_38_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG2_38_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_38_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_38_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_38_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.setBit<REC_ERR_MST3_REG2_38_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG2_38_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_38_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG2_38_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG2_38_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG2_38_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG2_38_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG2_38_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG2_38_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG2_38_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG2_38_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG2_38_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_38_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG2_38_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG2_38_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.getBit<REC_ERR_MST3_REG2_38_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG2_38_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_38_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_38_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_38_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_38_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_38_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG2_38_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_38_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG2_38_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_38_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_38_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_38_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG2_38_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_38_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG2_38_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG2_38_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG2_38_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_38_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG2_38_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_38_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG2_39_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_39_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_39_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG2_39_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_39_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_39_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_39_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_39_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG2_39_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_39_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_39_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_39_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.setBit<REC_ERR_MST3_REG2_39_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG2_39_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_39_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG2_39_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG2_39_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG2_39_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG2_39_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG2_39_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG2_39_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG2_39_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG2_39_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG2_39_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_39_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG2_39_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG2_39_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.getBit<REC_ERR_MST3_REG2_39_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG2_39_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_39_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_39_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_39_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_39_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_39_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG2_39_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_39_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG2_39_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_39_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_39_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_39_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG2_39_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_39_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG2_39_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG2_39_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG2_39_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_39_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG2_39_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_39_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG2_40_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_40_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_40_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG2_40_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_40_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_40_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_40_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_40_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG2_40_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_40_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_40_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_40_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.setBit<REC_ERR_MST3_REG2_40_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG2_40_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_40_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG2_40_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG2_40_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG2_40_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG2_40_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG2_40_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG2_40_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG2_40_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG2_40_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG2_40_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_40_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG2_40_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG2_40_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.getBit<REC_ERR_MST3_REG2_40_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG2_40_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_40_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_40_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_40_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_40_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_40_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG2_40_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_40_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG2_40_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_40_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_40_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_40_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG2_40_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_40_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG2_40_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG2_40_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG2_40_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_40_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG2_40_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_40_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG2_41_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_41_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_41_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG2_41_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_41_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_41_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_41_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_41_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG2_41_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_41_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_41_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_41_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.setBit<REC_ERR_MST3_REG2_41_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG2_41_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_41_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG2_41_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG2_41_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG2_41_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG2_41_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG2_41_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG2_41_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG2_41_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG2_41_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG2_41_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_41_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG2_41_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG2_41_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.getBit<REC_ERR_MST3_REG2_41_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG2_41_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_41_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_41_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_41_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_41_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_41_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG2_41_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_41_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG2_41_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_41_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_41_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_41_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG2_41_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_41_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG2_41_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG2_41_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG2_41_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_41_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG2_41_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_41_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG2_42_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_42_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_42_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG2_42_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_42_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_42_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_42_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_42_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG2_42_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_42_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_42_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_42_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.setBit<REC_ERR_MST3_REG2_42_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG2_42_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_42_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG2_42_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG2_42_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG2_42_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG2_42_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG2_42_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG2_42_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG2_42_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG2_42_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG2_42_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_42_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG2_42_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG2_42_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.getBit<REC_ERR_MST3_REG2_42_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG2_42_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_42_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_42_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_42_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_42_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_42_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG2_42_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_42_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG2_42_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_42_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_42_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_42_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG2_42_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_42_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG2_42_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG2_42_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG2_42_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_42_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG2_42_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_42_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG2_43_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_43_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_43_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG2_43_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_43_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_43_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_43_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_43_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG2_43_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_43_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_43_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_43_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.setBit<REC_ERR_MST3_REG2_43_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG2_43_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_43_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG2_43_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG2_43_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG2_43_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG2_43_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG2_43_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG2_43_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG2_43_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG2_43_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG2_43_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_43_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG2_43_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG2_43_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.getBit<REC_ERR_MST3_REG2_43_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG2_43_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_43_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_43_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_43_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_43_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_43_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG2_43_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_43_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG2_43_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_43_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_43_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_43_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG2_43_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_43_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG2_43_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG2_43_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG2_43_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_43_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG2_43_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_43_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG2_44_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_44_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_44_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG2_44_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_44_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_44_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_44_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_44_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG2_44_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_44_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_44_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_44_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.setBit<REC_ERR_MST3_REG2_44_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG2_44_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_44_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG2_44_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG2_44_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG2_44_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG2_44_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG2_44_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG2_44_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG2_44_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG2_44_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG2_44_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_44_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG2_44_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG2_44_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.getBit<REC_ERR_MST3_REG2_44_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG2_44_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_44_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_44_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_44_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_44_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_44_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG2_44_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_44_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG2_44_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_44_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_44_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_44_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG2_44_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_44_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG2_44_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG2_44_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG2_44_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_44_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG2_44_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_44_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG2_45_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_45_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_45_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG2_45_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_45_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_45_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_45_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_45_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG2_45_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_45_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_45_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_45_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.setBit<REC_ERR_MST3_REG2_45_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG2_45_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_45_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG2_45_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG2_45_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG2_45_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG2_45_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG2_45_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG2_45_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG2_45_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG2_45_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG2_45_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_45_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG2_45_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG2_45_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.getBit<REC_ERR_MST3_REG2_45_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG2_45_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_45_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_45_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_45_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_45_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_45_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG2_45_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_45_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG2_45_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_45_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_45_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_45_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG2_45_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_45_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG2_45_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG2_45_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG2_45_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_45_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG2_45_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_45_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG2_46_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_46_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_46_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG2_46_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_46_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_46_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_46_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_46_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG2_46_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_46_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_46_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_46_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.setBit<REC_ERR_MST3_REG2_46_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG2_46_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_46_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG2_46_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG2_46_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG2_46_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG2_46_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG2_46_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG2_46_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG2_46_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG2_46_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG2_46_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_46_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG2_46_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG2_46_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.getBit<REC_ERR_MST3_REG2_46_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG2_46_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_46_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_46_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_46_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_46_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_46_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG2_46_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_46_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG2_46_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_46_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_46_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_46_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG2_46_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_46_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG2_46_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG2_46_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG2_46_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_46_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG2_46_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_46_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG2_47_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_47_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_47_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG2_47_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_47_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_47_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_47_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_47_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG2_47_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_47_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_47_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_47_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.setBit<REC_ERR_MST3_REG2_47_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG2_47_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_47_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG2_47_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG2_47_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG2_47_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG2_47_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG2_47_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG2_47_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG2_47_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG2_47_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG2_47_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_47_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG2_47_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG2_47_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.getBit<REC_ERR_MST3_REG2_47_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG2_47_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_47_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG2_47_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_47_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_47_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_47_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG2_47_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_47_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG2_47_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG2_47_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG2_47_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_47_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG2_47_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG2_47_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG2_47_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG2_47_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG2_47_MST3_ERROR_CODE,
           REC_ERR_MST3_REG2_47_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG2_47_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG2_47_MST3_ERROR_CODE]

//>> PREP_[REC_ERR_MST7_REG3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_REC_ERR_MST7_REG3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST7_REG3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[REC_ERR_MST7_REG3]

//>> GET_[REC_ERR_MST7_REG3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_REC_ERR_MST7_REG3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST7_REG3;
#endif
    return fapi2::getScom(i_target, REC_ERR_MST7_REG3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[REC_ERR_MST7_REG3]

//>> PUT_[REC_ERR_MST7_REG3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_REC_ERR_MST7_REG3(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return fapi2::putScom(i_target, REC_ERR_MST7_REG3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[REC_ERR_MST7_REG3]


//>> SET_[REC_ERR_MST7_REG3_48_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_48_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_48_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG3_48_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_48_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_48_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_48_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_48_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG3_48_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_48_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_48_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_48_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.setBit<REC_ERR_MST7_REG3_48_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG3_48_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_48_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG3_48_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG3_48_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG3_48_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG3_48_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG3_48_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG3_48_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG3_48_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG3_48_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG3_48_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_48_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG3_48_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG3_48_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.getBit<REC_ERR_MST7_REG3_48_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG3_48_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_48_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_48_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_48_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_48_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_48_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG3_48_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_48_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG3_48_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_48_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_48_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_48_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG3_48_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_48_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG3_48_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG3_48_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG3_48_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_48_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG3_48_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_48_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG3_49_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_49_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_49_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG3_49_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_49_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_49_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_49_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_49_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG3_49_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_49_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_49_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_49_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.setBit<REC_ERR_MST7_REG3_49_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG3_49_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_49_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG3_49_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG3_49_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG3_49_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG3_49_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG3_49_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG3_49_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG3_49_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG3_49_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG3_49_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_49_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG3_49_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG3_49_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.getBit<REC_ERR_MST7_REG3_49_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG3_49_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_49_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_49_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_49_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_49_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_49_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG3_49_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_49_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG3_49_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_49_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_49_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_49_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG3_49_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_49_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG3_49_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG3_49_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG3_49_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_49_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG3_49_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_49_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG3_50_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_50_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_50_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG3_50_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_50_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_50_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_50_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_50_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG3_50_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_50_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_50_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_50_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.setBit<REC_ERR_MST7_REG3_50_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG3_50_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_50_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG3_50_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG3_50_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG3_50_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG3_50_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG3_50_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG3_50_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG3_50_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG3_50_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG3_50_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_50_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG3_50_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG3_50_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.getBit<REC_ERR_MST7_REG3_50_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG3_50_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_50_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_50_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_50_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_50_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_50_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG3_50_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_50_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG3_50_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_50_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_50_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_50_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG3_50_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_50_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG3_50_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG3_50_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG3_50_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_50_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG3_50_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_50_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG3_51_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_51_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_51_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG3_51_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_51_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_51_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_51_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_51_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG3_51_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_51_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_51_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_51_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.setBit<REC_ERR_MST7_REG3_51_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG3_51_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_51_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG3_51_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG3_51_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG3_51_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG3_51_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG3_51_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG3_51_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG3_51_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG3_51_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG3_51_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_51_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG3_51_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG3_51_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.getBit<REC_ERR_MST7_REG3_51_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG3_51_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_51_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_51_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_51_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_51_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_51_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG3_51_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_51_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG3_51_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_51_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_51_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_51_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG3_51_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_51_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG3_51_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG3_51_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG3_51_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_51_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG3_51_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_51_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG3_52_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_52_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_52_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG3_52_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_52_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_52_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_52_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_52_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG3_52_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_52_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_52_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_52_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.setBit<REC_ERR_MST7_REG3_52_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG3_52_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_52_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG3_52_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG3_52_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG3_52_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG3_52_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG3_52_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG3_52_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG3_52_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG3_52_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG3_52_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_52_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG3_52_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG3_52_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.getBit<REC_ERR_MST7_REG3_52_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG3_52_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_52_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_52_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_52_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_52_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_52_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG3_52_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_52_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG3_52_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_52_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_52_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_52_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG3_52_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_52_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG3_52_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG3_52_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG3_52_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_52_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG3_52_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_52_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG3_53_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_53_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_53_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG3_53_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_53_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_53_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_53_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_53_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG3_53_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_53_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_53_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_53_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.setBit<REC_ERR_MST7_REG3_53_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG3_53_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_53_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG3_53_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG3_53_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG3_53_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG3_53_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG3_53_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG3_53_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG3_53_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG3_53_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG3_53_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_53_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG3_53_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG3_53_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.getBit<REC_ERR_MST7_REG3_53_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG3_53_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_53_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_53_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_53_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_53_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_53_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG3_53_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_53_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG3_53_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_53_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_53_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_53_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG3_53_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_53_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG3_53_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG3_53_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG3_53_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_53_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG3_53_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_53_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG3_54_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_54_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_54_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG3_54_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_54_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_54_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_54_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_54_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG3_54_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_54_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_54_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_54_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.setBit<REC_ERR_MST7_REG3_54_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG3_54_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_54_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG3_54_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG3_54_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG3_54_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG3_54_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG3_54_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG3_54_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG3_54_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG3_54_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG3_54_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_54_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG3_54_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG3_54_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.getBit<REC_ERR_MST7_REG3_54_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG3_54_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_54_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_54_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_54_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_54_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_54_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG3_54_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_54_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG3_54_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_54_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_54_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_54_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG3_54_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_54_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG3_54_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG3_54_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG3_54_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_54_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG3_54_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_54_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG3_55_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_55_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_55_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG3_55_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_55_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_55_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_55_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_55_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG3_55_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_55_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_55_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_55_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.setBit<REC_ERR_MST7_REG3_55_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG3_55_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_55_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG3_55_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG3_55_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG3_55_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG3_55_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG3_55_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG3_55_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG3_55_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG3_55_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG3_55_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_55_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG3_55_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG3_55_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.getBit<REC_ERR_MST7_REG3_55_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG3_55_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_55_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_55_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_55_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_55_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_55_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG3_55_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_55_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG3_55_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_55_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_55_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_55_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG3_55_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_55_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG3_55_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG3_55_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG3_55_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_55_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG3_55_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_55_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG3_56_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_56_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_56_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG3_56_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_56_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_56_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_56_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_56_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG3_56_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_56_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_56_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_56_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.setBit<REC_ERR_MST7_REG3_56_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG3_56_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_56_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG3_56_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG3_56_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG3_56_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG3_56_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG3_56_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG3_56_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG3_56_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG3_56_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG3_56_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_56_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG3_56_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG3_56_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.getBit<REC_ERR_MST7_REG3_56_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG3_56_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_56_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_56_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_56_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_56_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_56_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG3_56_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_56_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG3_56_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_56_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_56_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_56_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG3_56_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_56_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG3_56_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG3_56_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG3_56_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_56_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG3_56_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_56_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG3_57_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_57_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_57_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG3_57_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_57_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_57_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_57_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_57_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG3_57_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_57_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_57_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_57_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.setBit<REC_ERR_MST7_REG3_57_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG3_57_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_57_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG3_57_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG3_57_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG3_57_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG3_57_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG3_57_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG3_57_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG3_57_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG3_57_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG3_57_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_57_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG3_57_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG3_57_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.getBit<REC_ERR_MST7_REG3_57_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG3_57_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_57_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_57_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_57_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_57_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_57_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG3_57_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_57_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG3_57_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_57_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_57_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_57_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG3_57_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_57_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG3_57_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG3_57_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG3_57_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_57_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG3_57_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_57_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG3_58_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_58_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_58_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG3_58_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_58_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_58_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_58_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_58_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG3_58_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_58_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_58_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_58_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.setBit<REC_ERR_MST7_REG3_58_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG3_58_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_58_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG3_58_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG3_58_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG3_58_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG3_58_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG3_58_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG3_58_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG3_58_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG3_58_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG3_58_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_58_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG3_58_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG3_58_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.getBit<REC_ERR_MST7_REG3_58_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG3_58_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_58_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_58_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_58_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_58_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_58_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG3_58_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_58_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG3_58_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_58_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_58_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_58_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG3_58_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_58_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG3_58_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG3_58_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG3_58_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_58_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG3_58_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_58_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG3_59_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_59_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_59_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG3_59_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_59_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_59_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_59_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_59_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG3_59_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_59_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_59_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_59_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.setBit<REC_ERR_MST7_REG3_59_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG3_59_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_59_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG3_59_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG3_59_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG3_59_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG3_59_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG3_59_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG3_59_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG3_59_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG3_59_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG3_59_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_59_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG3_59_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG3_59_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.getBit<REC_ERR_MST7_REG3_59_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG3_59_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_59_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_59_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_59_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_59_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_59_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG3_59_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_59_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG3_59_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_59_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_59_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_59_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG3_59_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_59_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG3_59_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG3_59_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG3_59_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_59_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG3_59_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_59_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG3_60_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_60_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_60_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG3_60_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_60_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_60_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_60_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_60_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG3_60_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_60_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_60_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_60_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.setBit<REC_ERR_MST7_REG3_60_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG3_60_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_60_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG3_60_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG3_60_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG3_60_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG3_60_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG3_60_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG3_60_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG3_60_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG3_60_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG3_60_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_60_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG3_60_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG3_60_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.getBit<REC_ERR_MST7_REG3_60_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG3_60_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_60_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_60_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_60_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_60_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_60_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG3_60_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_60_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG3_60_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_60_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_60_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_60_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG3_60_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_60_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG3_60_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG3_60_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG3_60_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_60_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG3_60_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_60_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG3_61_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_61_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_61_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG3_61_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_61_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_61_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_61_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_61_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG3_61_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_61_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_61_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_61_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.setBit<REC_ERR_MST7_REG3_61_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG3_61_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_61_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG3_61_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG3_61_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG3_61_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG3_61_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG3_61_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG3_61_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG3_61_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG3_61_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG3_61_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_61_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG3_61_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG3_61_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.getBit<REC_ERR_MST7_REG3_61_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG3_61_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_61_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_61_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_61_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_61_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_61_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG3_61_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_61_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG3_61_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_61_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_61_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_61_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG3_61_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_61_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG3_61_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG3_61_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG3_61_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_61_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG3_61_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_61_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG3_62_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_62_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_62_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG3_62_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_62_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_62_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_62_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_62_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG3_62_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_62_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_62_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_62_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.setBit<REC_ERR_MST7_REG3_62_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG3_62_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_62_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG3_62_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG3_62_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG3_62_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG3_62_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG3_62_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG3_62_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG3_62_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG3_62_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG3_62_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_62_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG3_62_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG3_62_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.getBit<REC_ERR_MST7_REG3_62_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG3_62_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_62_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_62_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_62_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_62_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_62_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG3_62_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_62_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG3_62_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_62_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_62_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_62_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG3_62_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_62_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG3_62_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG3_62_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG3_62_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_62_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG3_62_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_62_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG3_63_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_63_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_63_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG3_63_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_63_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_63_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_63_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_63_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG3_63_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_63_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_63_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_63_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.setBit<REC_ERR_MST7_REG3_63_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG3_63_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_63_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG3_63_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG3_63_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG3_63_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG3_63_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG3_63_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG3_63_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG3_63_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG3_63_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG3_63_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_63_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG3_63_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG3_63_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.getBit<REC_ERR_MST7_REG3_63_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG3_63_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_63_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG3_63_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_63_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_63_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_63_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG3_63_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_63_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG3_63_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG3_63_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG3_63_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_63_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG3_63_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG3_63_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG3_63_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG3_63_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG3_63_MST7_ERROR_CODE,
           REC_ERR_MST7_REG3_63_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG3_63_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG3_63_MST7_ERROR_CODE]

//>> PREP_[REC_ERR_MST9_REG3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_REC_ERR_MST9_REG3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST9_REG3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[REC_ERR_MST9_REG3]

//>> GET_[REC_ERR_MST9_REG3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_REC_ERR_MST9_REG3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST9_REG3;
#endif
    return fapi2::getScom(i_target, REC_ERR_MST9_REG3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[REC_ERR_MST9_REG3]

//>> PUT_[REC_ERR_MST9_REG3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_REC_ERR_MST9_REG3(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return fapi2::putScom(i_target, REC_ERR_MST9_REG3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[REC_ERR_MST9_REG3]


//>> SET_[REC_ERR_MST9_REG3_48_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_48_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_48_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG3_48_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_48_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_48_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_48_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_48_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG3_48_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_48_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_48_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_48_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.setBit<REC_ERR_MST9_REG3_48_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG3_48_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_48_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG3_48_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG3_48_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG3_48_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG3_48_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG3_48_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG3_48_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG3_48_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG3_48_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG3_48_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_48_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG3_48_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG3_48_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.getBit<REC_ERR_MST9_REG3_48_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG3_48_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_48_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_48_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_48_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_48_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_48_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG3_48_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_48_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG3_48_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_48_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_48_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_48_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG3_48_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_48_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG3_48_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG3_48_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG3_48_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_48_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG3_48_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_48_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG3_49_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_49_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_49_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG3_49_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_49_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_49_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_49_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_49_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG3_49_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_49_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_49_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_49_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.setBit<REC_ERR_MST9_REG3_49_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG3_49_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_49_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG3_49_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG3_49_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG3_49_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG3_49_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG3_49_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG3_49_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG3_49_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG3_49_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG3_49_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_49_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG3_49_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG3_49_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.getBit<REC_ERR_MST9_REG3_49_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG3_49_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_49_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_49_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_49_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_49_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_49_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG3_49_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_49_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG3_49_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_49_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_49_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_49_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG3_49_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_49_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG3_49_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG3_49_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG3_49_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_49_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG3_49_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_49_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG3_50_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_50_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_50_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG3_50_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_50_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_50_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_50_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_50_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG3_50_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_50_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_50_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_50_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.setBit<REC_ERR_MST9_REG3_50_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG3_50_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_50_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG3_50_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG3_50_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG3_50_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG3_50_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG3_50_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG3_50_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG3_50_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG3_50_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG3_50_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_50_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG3_50_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG3_50_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.getBit<REC_ERR_MST9_REG3_50_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG3_50_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_50_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_50_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_50_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_50_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_50_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG3_50_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_50_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG3_50_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_50_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_50_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_50_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG3_50_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_50_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG3_50_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG3_50_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG3_50_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_50_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG3_50_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_50_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG3_51_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_51_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_51_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG3_51_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_51_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_51_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_51_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_51_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG3_51_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_51_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_51_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_51_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.setBit<REC_ERR_MST9_REG3_51_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG3_51_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_51_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG3_51_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG3_51_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG3_51_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG3_51_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG3_51_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG3_51_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG3_51_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG3_51_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG3_51_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_51_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG3_51_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG3_51_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.getBit<REC_ERR_MST9_REG3_51_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG3_51_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_51_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_51_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_51_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_51_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_51_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG3_51_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_51_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG3_51_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_51_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_51_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_51_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG3_51_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_51_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG3_51_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG3_51_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG3_51_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_51_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG3_51_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_51_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG3_52_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_52_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_52_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG3_52_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_52_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_52_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_52_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_52_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG3_52_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_52_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_52_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_52_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.setBit<REC_ERR_MST9_REG3_52_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG3_52_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_52_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG3_52_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG3_52_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG3_52_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG3_52_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG3_52_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG3_52_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG3_52_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG3_52_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG3_52_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_52_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG3_52_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG3_52_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.getBit<REC_ERR_MST9_REG3_52_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG3_52_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_52_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_52_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_52_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_52_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_52_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG3_52_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_52_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG3_52_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_52_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_52_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_52_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG3_52_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_52_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG3_52_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG3_52_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG3_52_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_52_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG3_52_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_52_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG3_53_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_53_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_53_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG3_53_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_53_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_53_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_53_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_53_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG3_53_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_53_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_53_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_53_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.setBit<REC_ERR_MST9_REG3_53_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG3_53_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_53_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG3_53_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG3_53_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG3_53_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG3_53_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG3_53_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG3_53_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG3_53_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG3_53_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG3_53_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_53_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG3_53_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG3_53_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.getBit<REC_ERR_MST9_REG3_53_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG3_53_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_53_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_53_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_53_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_53_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_53_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG3_53_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_53_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG3_53_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_53_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_53_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_53_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG3_53_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_53_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG3_53_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG3_53_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG3_53_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_53_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG3_53_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_53_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG3_54_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_54_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_54_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG3_54_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_54_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_54_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_54_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_54_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG3_54_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_54_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_54_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_54_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.setBit<REC_ERR_MST9_REG3_54_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG3_54_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_54_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG3_54_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG3_54_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG3_54_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG3_54_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG3_54_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG3_54_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG3_54_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG3_54_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG3_54_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_54_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG3_54_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG3_54_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.getBit<REC_ERR_MST9_REG3_54_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG3_54_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_54_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_54_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_54_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_54_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_54_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG3_54_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_54_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG3_54_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_54_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_54_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_54_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG3_54_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_54_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG3_54_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG3_54_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG3_54_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_54_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG3_54_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_54_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG3_55_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_55_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_55_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG3_55_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_55_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_55_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_55_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_55_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG3_55_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_55_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_55_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_55_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.setBit<REC_ERR_MST9_REG3_55_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG3_55_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_55_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG3_55_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG3_55_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG3_55_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG3_55_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG3_55_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG3_55_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG3_55_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG3_55_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG3_55_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_55_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG3_55_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG3_55_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.getBit<REC_ERR_MST9_REG3_55_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG3_55_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_55_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_55_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_55_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_55_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_55_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG3_55_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_55_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG3_55_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_55_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_55_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_55_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG3_55_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_55_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG3_55_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG3_55_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG3_55_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_55_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG3_55_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_55_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG3_56_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_56_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_56_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG3_56_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_56_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_56_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_56_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_56_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG3_56_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_56_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_56_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_56_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.setBit<REC_ERR_MST9_REG3_56_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG3_56_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_56_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG3_56_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG3_56_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG3_56_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG3_56_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG3_56_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG3_56_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG3_56_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG3_56_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG3_56_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_56_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG3_56_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG3_56_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.getBit<REC_ERR_MST9_REG3_56_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG3_56_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_56_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_56_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_56_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_56_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_56_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG3_56_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_56_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG3_56_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_56_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_56_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_56_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG3_56_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_56_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG3_56_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG3_56_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG3_56_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_56_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG3_56_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_56_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG3_57_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_57_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_57_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG3_57_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_57_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_57_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_57_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_57_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG3_57_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_57_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_57_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_57_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.setBit<REC_ERR_MST9_REG3_57_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG3_57_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_57_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG3_57_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG3_57_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG3_57_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG3_57_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG3_57_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG3_57_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG3_57_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG3_57_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG3_57_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_57_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG3_57_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG3_57_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.getBit<REC_ERR_MST9_REG3_57_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG3_57_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_57_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_57_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_57_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_57_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_57_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG3_57_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_57_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG3_57_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_57_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_57_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_57_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG3_57_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_57_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG3_57_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG3_57_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG3_57_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_57_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG3_57_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_57_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG3_58_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_58_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_58_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG3_58_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_58_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_58_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_58_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_58_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG3_58_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_58_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_58_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_58_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.setBit<REC_ERR_MST9_REG3_58_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG3_58_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_58_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG3_58_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG3_58_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG3_58_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG3_58_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG3_58_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG3_58_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG3_58_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG3_58_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG3_58_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_58_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG3_58_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG3_58_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.getBit<REC_ERR_MST9_REG3_58_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG3_58_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_58_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_58_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_58_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_58_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_58_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG3_58_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_58_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG3_58_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_58_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_58_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_58_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG3_58_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_58_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG3_58_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG3_58_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG3_58_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_58_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG3_58_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_58_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG3_59_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_59_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_59_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG3_59_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_59_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_59_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_59_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_59_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG3_59_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_59_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_59_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_59_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.setBit<REC_ERR_MST9_REG3_59_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG3_59_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_59_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG3_59_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG3_59_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG3_59_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG3_59_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG3_59_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG3_59_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG3_59_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG3_59_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG3_59_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_59_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG3_59_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG3_59_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.getBit<REC_ERR_MST9_REG3_59_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG3_59_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_59_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_59_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_59_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_59_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_59_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG3_59_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_59_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG3_59_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_59_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_59_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_59_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG3_59_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_59_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG3_59_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG3_59_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG3_59_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_59_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG3_59_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_59_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG3_60_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_60_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_60_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG3_60_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_60_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_60_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_60_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_60_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG3_60_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_60_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_60_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_60_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.setBit<REC_ERR_MST9_REG3_60_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG3_60_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_60_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG3_60_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG3_60_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG3_60_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG3_60_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG3_60_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG3_60_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG3_60_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG3_60_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG3_60_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_60_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG3_60_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG3_60_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.getBit<REC_ERR_MST9_REG3_60_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG3_60_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_60_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_60_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_60_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_60_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_60_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG3_60_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_60_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG3_60_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_60_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_60_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_60_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG3_60_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_60_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG3_60_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG3_60_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG3_60_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_60_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG3_60_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_60_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG3_61_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_61_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_61_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG3_61_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_61_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_61_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_61_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_61_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG3_61_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_61_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_61_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_61_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.setBit<REC_ERR_MST9_REG3_61_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG3_61_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_61_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG3_61_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG3_61_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG3_61_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG3_61_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG3_61_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG3_61_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG3_61_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG3_61_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG3_61_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_61_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG3_61_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG3_61_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.getBit<REC_ERR_MST9_REG3_61_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG3_61_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_61_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_61_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_61_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_61_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_61_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG3_61_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_61_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG3_61_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_61_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_61_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_61_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG3_61_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_61_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG3_61_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG3_61_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG3_61_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_61_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG3_61_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_61_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG3_62_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_62_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_62_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG3_62_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_62_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_62_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_62_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_62_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG3_62_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_62_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_62_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_62_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.setBit<REC_ERR_MST9_REG3_62_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG3_62_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_62_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG3_62_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG3_62_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG3_62_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG3_62_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG3_62_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG3_62_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG3_62_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG3_62_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG3_62_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_62_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG3_62_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG3_62_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.getBit<REC_ERR_MST9_REG3_62_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG3_62_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_62_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_62_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_62_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_62_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_62_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG3_62_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_62_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG3_62_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_62_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_62_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_62_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG3_62_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_62_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG3_62_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG3_62_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG3_62_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_62_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG3_62_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_62_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG3_63_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_63_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_63_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG3_63_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_63_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_63_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_63_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_63_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG3_63_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_63_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_63_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_63_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.setBit<REC_ERR_MST9_REG3_63_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG3_63_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_63_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG3_63_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG3_63_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG3_63_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG3_63_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG3_63_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG3_63_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG3_63_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG3_63_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG3_63_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_63_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG3_63_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG3_63_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.getBit<REC_ERR_MST9_REG3_63_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG3_63_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_63_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG3_63_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_63_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_63_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_63_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG3_63_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_63_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG3_63_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG3_63_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG3_63_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_63_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG3_63_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG3_63_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG3_63_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG3_63_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG3_63_MST9_ERROR_CODE,
           REC_ERR_MST9_REG3_63_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG3_63_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG3_63_MST9_ERROR_CODE]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
