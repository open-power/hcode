/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/eq/reg00003_unused.H $        */
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

#ifndef __EQ_REG00003_H_UNUSED__
#define __EQ_REG00003_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace eq
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
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_MEAS_MODE_VEC_MEASURE_MODE_VECTOR chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0 chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0 chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0 chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1 chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1 chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1 chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2 chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2 chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2 chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3 chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3 chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3 chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0 chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0 chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0 chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1 chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1 chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1 chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2 chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2 chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2 chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3 chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3 chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3 chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
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
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_ONE_SHOT_MODE_SET_ONE_SHOT_MD_SET1 chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
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
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
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
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
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
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_LOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
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
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_ADJUST_ERR chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCSENSE_IN chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_DCC_CHANGE chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_FSM_STATE chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SINGLE_STEP_COUNT_STEP_COUNT]

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
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_3_D]

//>> PREP_[QME_PCBSID]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_PCBSID(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_PCBSID;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_PCBSID]

//>> GET_[QME_PCBSID]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_PCBSID(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_PCBSID;
#endif
    return fapi2::getScom(i_target, QME_PCBSID, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_PCBSID]

//>> PUT_[QME_PCBSID]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_PCBSID(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return fapi2::putScom(i_target, QME_PCBSID, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_PCBSID]


//>> SET_[QME_PCBSID_EQ_VLD]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_VLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.insertFromRight<QME_PCBSID_EQ_VLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QME_PCBSID_EQ_VLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_VLD]

//>> SET_[QME_PCBSID_EQ_VLD]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_VLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.insertFromRight<QME_PCBSID_EQ_VLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QME_PCBSID_EQ_VLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_VLD]

//>> SET_[QME_PCBSID_EQ_VLD]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_VLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.setBit<QME_PCBSID_EQ_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access QME_PCBSID_EQ_VLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_VLD]

//>> CLEAR_[QME_PCBSID_EQ_VLD]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PCBSID_EQ_VLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.clearBit<QME_PCBSID_EQ_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access QME_PCBSID_EQ_VLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PCBSID_EQ_VLD]

//>> GET_[QME_PCBSID_EQ_VLD]
static inline fapi2::buffer<uint64_t>& GET_QME_PCBSID_EQ_VLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return i_data.extractToRight<QME_PCBSID_EQ_VLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QME_PCBSID_EQ_VLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSID_EQ_VLD]

//>> GET_[QME_PCBSID_EQ_VLD]
static inline bool GET_QME_PCBSID_EQ_VLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return i_data.getBit<QME_PCBSID_EQ_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access QME_PCBSID_EQ_VLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSID_EQ_VLD]

//>> SET_[QME_PCBSID_EQ_MERGING_SCHEME]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_MERGING_SCHEME(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.insertFromRight<QME_PCBSID_EQ_MERGING_SCHEME,
           QME_PCBSID_EQ_MERGING_SCHEME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QME_PCBSID_EQ_MERGING_SCHEME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_MERGING_SCHEME]

//>> SET_[QME_PCBSID_EQ_MERGING_SCHEME]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_MERGING_SCHEME(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.insertFromRight<QME_PCBSID_EQ_MERGING_SCHEME,
           QME_PCBSID_EQ_MERGING_SCHEME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QME_PCBSID_EQ_MERGING_SCHEME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_MERGING_SCHEME]

//>> GET_[QME_PCBSID_EQ_MERGING_SCHEME]
static inline fapi2::buffer<uint64_t>& GET_QME_PCBSID_EQ_MERGING_SCHEME(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return i_data.extractToRight<QME_PCBSID_EQ_MERGING_SCHEME,
           QME_PCBSID_EQ_MERGING_SCHEME_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QME_PCBSID_EQ_MERGING_SCHEME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSID_EQ_MERGING_SCHEME]

//>> SET_[QME_PCBSID_SP_ACK]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_SP_ACK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.insertFromRight<QME_PCBSID_SP_ACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QME_PCBSID_SP_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_SP_ACK]

//>> SET_[QME_PCBSID_SP_ACK]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_SP_ACK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.insertFromRight<QME_PCBSID_SP_ACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QME_PCBSID_SP_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_SP_ACK]

//>> SET_[QME_PCBSID_SP_ACK]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_SP_ACK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.setBit<QME_PCBSID_SP_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access QME_PCBSID_SP_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_SP_ACK]

//>> CLEAR_[QME_PCBSID_SP_ACK]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PCBSID_SP_ACK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.clearBit<QME_PCBSID_SP_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access QME_PCBSID_SP_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PCBSID_SP_ACK]

//>> GET_[QME_PCBSID_SP_ACK]
static inline fapi2::buffer<uint64_t>& GET_QME_PCBSID_SP_ACK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return i_data.extractToRight<QME_PCBSID_SP_ACK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QME_PCBSID_SP_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSID_SP_ACK]

//>> GET_[QME_PCBSID_SP_ACK]
static inline bool GET_QME_PCBSID_SP_ACK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return i_data.getBit<QME_PCBSID_SP_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access QME_PCBSID_SP_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSID_SP_ACK]

//>> SET_[QME_PCBSID_EQ_RD_NOT_WR]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_RD_NOT_WR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.insertFromRight<QME_PCBSID_EQ_RD_NOT_WR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QME_PCBSID_EQ_RD_NOT_WR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_RD_NOT_WR]

//>> SET_[QME_PCBSID_EQ_RD_NOT_WR]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_RD_NOT_WR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.insertFromRight<QME_PCBSID_EQ_RD_NOT_WR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QME_PCBSID_EQ_RD_NOT_WR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_RD_NOT_WR]

//>> SET_[QME_PCBSID_EQ_RD_NOT_WR]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_RD_NOT_WR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.setBit<QME_PCBSID_EQ_RD_NOT_WR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access QME_PCBSID_EQ_RD_NOT_WR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_RD_NOT_WR]

//>> CLEAR_[QME_PCBSID_EQ_RD_NOT_WR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PCBSID_EQ_RD_NOT_WR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.clearBit<QME_PCBSID_EQ_RD_NOT_WR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access QME_PCBSID_EQ_RD_NOT_WR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PCBSID_EQ_RD_NOT_WR]

//>> GET_[QME_PCBSID_EQ_RD_NOT_WR]
static inline fapi2::buffer<uint64_t>& GET_QME_PCBSID_EQ_RD_NOT_WR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return i_data.extractToRight<QME_PCBSID_EQ_RD_NOT_WR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QME_PCBSID_EQ_RD_NOT_WR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSID_EQ_RD_NOT_WR]

//>> GET_[QME_PCBSID_EQ_RD_NOT_WR]
static inline bool GET_QME_PCBSID_EQ_RD_NOT_WR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return i_data.getBit<QME_PCBSID_EQ_RD_NOT_WR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access QME_PCBSID_EQ_RD_NOT_WR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSID_EQ_RD_NOT_WR]

//>> SET_[QME_PCBSID_EQ_P]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_P(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.insertFromRight<QME_PCBSID_EQ_P,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QME_PCBSID_EQ_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_P]

//>> SET_[QME_PCBSID_EQ_P]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_P(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.insertFromRight<QME_PCBSID_EQ_P,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QME_PCBSID_EQ_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_P]

//>> SET_[QME_PCBSID_EQ_P]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_P(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.setBit<QME_PCBSID_EQ_P>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access QME_PCBSID_EQ_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_P]

//>> CLEAR_[QME_PCBSID_EQ_P]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PCBSID_EQ_P(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.clearBit<QME_PCBSID_EQ_P>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access QME_PCBSID_EQ_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PCBSID_EQ_P]

//>> GET_[QME_PCBSID_EQ_P]
static inline fapi2::buffer<uint64_t>& GET_QME_PCBSID_EQ_P(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return i_data.extractToRight<QME_PCBSID_EQ_P,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QME_PCBSID_EQ_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSID_EQ_P]

//>> GET_[QME_PCBSID_EQ_P]
static inline bool GET_QME_PCBSID_EQ_P(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return i_data.getBit<QME_PCBSID_EQ_P>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access QME_PCBSID_EQ_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSID_EQ_P]

//>> SET_[QME_PCBSID_EQ_LOCAL_ADDR_P]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_LOCAL_ADDR_P(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.insertFromRight<QME_PCBSID_EQ_LOCAL_ADDR_P,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QME_PCBSID_EQ_LOCAL_ADDR_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_LOCAL_ADDR_P]

//>> SET_[QME_PCBSID_EQ_LOCAL_ADDR_P]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_LOCAL_ADDR_P(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.insertFromRight<QME_PCBSID_EQ_LOCAL_ADDR_P,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QME_PCBSID_EQ_LOCAL_ADDR_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_LOCAL_ADDR_P]

//>> SET_[QME_PCBSID_EQ_LOCAL_ADDR_P]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_LOCAL_ADDR_P(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.setBit<QME_PCBSID_EQ_LOCAL_ADDR_P>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access QME_PCBSID_EQ_LOCAL_ADDR_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_LOCAL_ADDR_P]

//>> CLEAR_[QME_PCBSID_EQ_LOCAL_ADDR_P]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PCBSID_EQ_LOCAL_ADDR_P(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.clearBit<QME_PCBSID_EQ_LOCAL_ADDR_P>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access QME_PCBSID_EQ_LOCAL_ADDR_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PCBSID_EQ_LOCAL_ADDR_P]

//>> GET_[QME_PCBSID_EQ_LOCAL_ADDR_P]
static inline fapi2::buffer<uint64_t>& GET_QME_PCBSID_EQ_LOCAL_ADDR_P(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return i_data.extractToRight<QME_PCBSID_EQ_LOCAL_ADDR_P,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QME_PCBSID_EQ_LOCAL_ADDR_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSID_EQ_LOCAL_ADDR_P]

//>> GET_[QME_PCBSID_EQ_LOCAL_ADDR_P]
static inline bool GET_QME_PCBSID_EQ_LOCAL_ADDR_P(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return i_data.getBit<QME_PCBSID_EQ_LOCAL_ADDR_P>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access QME_PCBSID_EQ_LOCAL_ADDR_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSID_EQ_LOCAL_ADDR_P]

//>> SET_[QME_PCBSID_EQ_PORT]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_PORT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.insertFromRight<QME_PCBSID_EQ_PORT,
           QME_PCBSID_EQ_PORT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QME_PCBSID_EQ_PORT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_PORT]

//>> SET_[QME_PCBSID_EQ_PORT]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_PORT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.insertFromRight<QME_PCBSID_EQ_PORT,
           QME_PCBSID_EQ_PORT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QME_PCBSID_EQ_PORT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_PORT]

//>> GET_[QME_PCBSID_EQ_PORT]
static inline fapi2::buffer<uint64_t>& GET_QME_PCBSID_EQ_PORT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return i_data.extractToRight<QME_PCBSID_EQ_PORT,
           QME_PCBSID_EQ_PORT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QME_PCBSID_EQ_PORT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSID_EQ_PORT]

//>> SET_[QME_PCBSID_EQ_LOCAL_ADDR]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_LOCAL_ADDR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.insertFromRight<QME_PCBSID_EQ_LOCAL_ADDR,
           QME_PCBSID_EQ_LOCAL_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QME_PCBSID_EQ_LOCAL_ADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_LOCAL_ADDR]

//>> SET_[QME_PCBSID_EQ_LOCAL_ADDR]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSID_EQ_LOCAL_ADDR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return o_data.insertFromRight<QME_PCBSID_EQ_LOCAL_ADDR,
           QME_PCBSID_EQ_LOCAL_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QME_PCBSID_EQ_LOCAL_ADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSID_EQ_LOCAL_ADDR]

//>> GET_[QME_PCBSID_EQ_LOCAL_ADDR]
static inline fapi2::buffer<uint64_t>& GET_QME_PCBSID_EQ_LOCAL_ADDR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSID));
#endif
    return i_data.extractToRight<QME_PCBSID_EQ_LOCAL_ADDR,
           QME_PCBSID_EQ_LOCAL_ADDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QME_PCBSID_EQ_LOCAL_ADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSID_EQ_LOCAL_ADDR]

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
    FAPI_ERR("0:scom_eq Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_eq Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_eq Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_eq Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_eq Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_eq Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_eq Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_eq Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_eq Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_eq Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_eq Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_eq Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_eq Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_eq Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_eq Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_eq Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_eq Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_eq Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_eq Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_eq Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_eq Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_eq Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_eq Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_eq Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_eq Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_eq Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_eq Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_eq Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_eq Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_eq Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_eq Invalid dial access EPS_THERM_WSUB2_INJECT_REG_TRIP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access EPS_THERM_WSUB2_INJECT_REG_TRIP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access EPS_THERM_WSUB2_INJECT_REG_TRIP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_eq Invalid dial access EPS_THERM_WSUB2_INJECT_REG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access EPS_THERM_WSUB2_INJECT_REG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access EPS_THERM_WSUB2_INJECT_REG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB2_INJECT_REG_MODE]

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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA2_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA2_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA2_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA2_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA2_TR1_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA2_TR1_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA2_TR1_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA2_TR1_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA2_TR1_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA2_TR1_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
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
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
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
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
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
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
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
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> PREP_[LOCAL_XSTOP]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_LOCAL_XSTOP(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = LOCAL_XSTOP;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[LOCAL_XSTOP]

//>> GET_[LOCAL_XSTOP]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_LOCAL_XSTOP(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = LOCAL_XSTOP;
#endif
    return fapi2::getScom(i_target, LOCAL_XSTOP, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[LOCAL_XSTOP]

//>> PUT_[LOCAL_XSTOP]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_LOCAL_XSTOP(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return fapi2::putScom(i_target, LOCAL_XSTOP, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[LOCAL_XSTOP]


//>> SET_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_ANY_LOCAL_XSTOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_ANY_LOCAL_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access LOCAL_XSTOP_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]

//>> SET_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_ANY_LOCAL_XSTOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_ANY_LOCAL_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access LOCAL_XSTOP_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]

//>> SET_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_ANY_LOCAL_XSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_ANY_LOCAL_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access LOCAL_XSTOP_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]

//>> CLEAR_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_ANY_LOCAL_XSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_ANY_LOCAL_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access LOCAL_XSTOP_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]

//>> GET_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_ANY_LOCAL_XSTOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_ANY_LOCAL_XSTOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access LOCAL_XSTOP_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]

//>> GET_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]
static inline bool GET_LOCAL_XSTOP_ANY_LOCAL_XSTOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_ANY_LOCAL_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access LOCAL_XSTOP_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]

//>> SET_[LOCAL_XSTOP_RESERVED1L]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_RESERVED1L(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_RESERVED1L,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access LOCAL_XSTOP_RESERVED1L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_RESERVED1L]

//>> SET_[LOCAL_XSTOP_RESERVED1L]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_RESERVED1L(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_RESERVED1L,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access LOCAL_XSTOP_RESERVED1L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_RESERVED1L]

//>> SET_[LOCAL_XSTOP_RESERVED1L]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_RESERVED1L(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_RESERVED1L>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access LOCAL_XSTOP_RESERVED1L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_RESERVED1L]

//>> CLEAR_[LOCAL_XSTOP_RESERVED1L]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_RESERVED1L(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_RESERVED1L>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access LOCAL_XSTOP_RESERVED1L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_RESERVED1L]

//>> GET_[LOCAL_XSTOP_RESERVED1L]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_RESERVED1L(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_RESERVED1L,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access LOCAL_XSTOP_RESERVED1L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_RESERVED1L]

//>> GET_[LOCAL_XSTOP_RESERVED1L]
static inline bool GET_LOCAL_XSTOP_RESERVED1L(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_RESERVED1L>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access LOCAL_XSTOP_RESERVED1L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_RESERVED1L]

//>> SET_[LOCAL_XSTOP_RESERVED2L]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_RESERVED2L(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_RESERVED2L,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access LOCAL_XSTOP_RESERVED2L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_RESERVED2L]

//>> SET_[LOCAL_XSTOP_RESERVED2L]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_RESERVED2L(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_RESERVED2L,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access LOCAL_XSTOP_RESERVED2L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_RESERVED2L]

//>> SET_[LOCAL_XSTOP_RESERVED2L]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_RESERVED2L(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_RESERVED2L>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access LOCAL_XSTOP_RESERVED2L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_RESERVED2L]

//>> CLEAR_[LOCAL_XSTOP_RESERVED2L]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_RESERVED2L(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_RESERVED2L>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access LOCAL_XSTOP_RESERVED2L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_RESERVED2L]

//>> GET_[LOCAL_XSTOP_RESERVED2L]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_RESERVED2L(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_RESERVED2L,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access LOCAL_XSTOP_RESERVED2L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_RESERVED2L]

//>> GET_[LOCAL_XSTOP_RESERVED2L]
static inline bool GET_LOCAL_XSTOP_RESERVED2L(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_RESERVED2L>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access LOCAL_XSTOP_RESERVED2L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_RESERVED2L]

//>> SET_[LOCAL_XSTOP_RESERVED3L]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_RESERVED3L(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_RESERVED3L,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access LOCAL_XSTOP_RESERVED3L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_RESERVED3L]

//>> SET_[LOCAL_XSTOP_RESERVED3L]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_RESERVED3L(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_RESERVED3L,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access LOCAL_XSTOP_RESERVED3L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_RESERVED3L]

//>> SET_[LOCAL_XSTOP_RESERVED3L]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_RESERVED3L(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_RESERVED3L>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access LOCAL_XSTOP_RESERVED3L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_RESERVED3L]

//>> CLEAR_[LOCAL_XSTOP_RESERVED3L]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_RESERVED3L(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_RESERVED3L>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access LOCAL_XSTOP_RESERVED3L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_RESERVED3L]

//>> GET_[LOCAL_XSTOP_RESERVED3L]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_RESERVED3L(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_RESERVED3L,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access LOCAL_XSTOP_RESERVED3L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_RESERVED3L]

//>> GET_[LOCAL_XSTOP_RESERVED3L]
static inline bool GET_LOCAL_XSTOP_RESERVED3L(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_RESERVED3L>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access LOCAL_XSTOP_RESERVED3L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_RESERVED3L]

//>> SET_[LOCAL_XSTOP_PERV]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_PERV(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_PERV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access LOCAL_XSTOP_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_PERV]

//>> SET_[LOCAL_XSTOP_PERV]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_PERV(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_PERV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access LOCAL_XSTOP_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_PERV]

//>> SET_[LOCAL_XSTOP_PERV]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_PERV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access LOCAL_XSTOP_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_PERV]

//>> CLEAR_[LOCAL_XSTOP_PERV]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_PERV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access LOCAL_XSTOP_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_PERV]

//>> GET_[LOCAL_XSTOP_PERV]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_PERV(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_PERV,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access LOCAL_XSTOP_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_PERV]

//>> GET_[LOCAL_XSTOP_PERV]
static inline bool GET_LOCAL_XSTOP_PERV(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access LOCAL_XSTOP_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_PERV]

//>> SET_[LOCAL_XSTOP_IN05]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN05(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access LOCAL_XSTOP_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN05]

//>> SET_[LOCAL_XSTOP_IN05]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN05(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access LOCAL_XSTOP_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN05]

//>> SET_[LOCAL_XSTOP_IN05]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN05(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access LOCAL_XSTOP_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN05]

//>> CLEAR_[LOCAL_XSTOP_IN05]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN05(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access LOCAL_XSTOP_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN05]

//>> GET_[LOCAL_XSTOP_IN05]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN05(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN05,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access LOCAL_XSTOP_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN05]

//>> GET_[LOCAL_XSTOP_IN05]
static inline bool GET_LOCAL_XSTOP_IN05(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access LOCAL_XSTOP_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN05]

//>> SET_[LOCAL_XSTOP_IN06]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN06(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access LOCAL_XSTOP_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN06]

//>> SET_[LOCAL_XSTOP_IN06]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN06(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access LOCAL_XSTOP_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN06]

//>> SET_[LOCAL_XSTOP_IN06]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN06(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access LOCAL_XSTOP_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN06]

//>> CLEAR_[LOCAL_XSTOP_IN06]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN06(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access LOCAL_XSTOP_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN06]

//>> GET_[LOCAL_XSTOP_IN06]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN06(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN06,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access LOCAL_XSTOP_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN06]

//>> GET_[LOCAL_XSTOP_IN06]
static inline bool GET_LOCAL_XSTOP_IN06(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access LOCAL_XSTOP_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN06]

//>> SET_[LOCAL_XSTOP_IN07]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN07(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access LOCAL_XSTOP_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN07]

//>> SET_[LOCAL_XSTOP_IN07]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN07(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access LOCAL_XSTOP_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN07]

//>> SET_[LOCAL_XSTOP_IN07]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN07(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access LOCAL_XSTOP_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN07]

//>> CLEAR_[LOCAL_XSTOP_IN07]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN07(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access LOCAL_XSTOP_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN07]

//>> GET_[LOCAL_XSTOP_IN07]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN07(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN07,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access LOCAL_XSTOP_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN07]

//>> GET_[LOCAL_XSTOP_IN07]
static inline bool GET_LOCAL_XSTOP_IN07(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access LOCAL_XSTOP_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN07]

//>> SET_[LOCAL_XSTOP_IN08]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN08(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access LOCAL_XSTOP_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN08]

//>> SET_[LOCAL_XSTOP_IN08]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN08(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access LOCAL_XSTOP_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN08]

//>> SET_[LOCAL_XSTOP_IN08]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN08(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access LOCAL_XSTOP_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN08]

//>> CLEAR_[LOCAL_XSTOP_IN08]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN08(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access LOCAL_XSTOP_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN08]

//>> GET_[LOCAL_XSTOP_IN08]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN08(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN08,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access LOCAL_XSTOP_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN08]

//>> GET_[LOCAL_XSTOP_IN08]
static inline bool GET_LOCAL_XSTOP_IN08(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access LOCAL_XSTOP_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN08]

//>> SET_[LOCAL_XSTOP_IN09]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN09(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access LOCAL_XSTOP_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN09]

//>> SET_[LOCAL_XSTOP_IN09]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN09(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access LOCAL_XSTOP_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN09]

//>> SET_[LOCAL_XSTOP_IN09]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN09(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access LOCAL_XSTOP_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN09]

//>> CLEAR_[LOCAL_XSTOP_IN09]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN09(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access LOCAL_XSTOP_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN09]

//>> GET_[LOCAL_XSTOP_IN09]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN09(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN09,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access LOCAL_XSTOP_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN09]

//>> GET_[LOCAL_XSTOP_IN09]
static inline bool GET_LOCAL_XSTOP_IN09(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access LOCAL_XSTOP_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN09]

//>> SET_[LOCAL_XSTOP_IN10]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN10(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access LOCAL_XSTOP_IN10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN10]

//>> SET_[LOCAL_XSTOP_IN10]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access LOCAL_XSTOP_IN10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN10]

//>> SET_[LOCAL_XSTOP_IN10]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access LOCAL_XSTOP_IN10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN10]

//>> CLEAR_[LOCAL_XSTOP_IN10]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access LOCAL_XSTOP_IN10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN10]

//>> GET_[LOCAL_XSTOP_IN10]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN10(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN10,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access LOCAL_XSTOP_IN10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN10]

//>> GET_[LOCAL_XSTOP_IN10]
static inline bool GET_LOCAL_XSTOP_IN10(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access LOCAL_XSTOP_IN10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN10]

//>> SET_[LOCAL_XSTOP_IN11]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN11(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access LOCAL_XSTOP_IN11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN11]

//>> SET_[LOCAL_XSTOP_IN11]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN11(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access LOCAL_XSTOP_IN11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN11]

//>> SET_[LOCAL_XSTOP_IN11]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access LOCAL_XSTOP_IN11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN11]

//>> CLEAR_[LOCAL_XSTOP_IN11]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access LOCAL_XSTOP_IN11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN11]

//>> GET_[LOCAL_XSTOP_IN11]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN11(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN11,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access LOCAL_XSTOP_IN11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN11]

//>> GET_[LOCAL_XSTOP_IN11]
static inline bool GET_LOCAL_XSTOP_IN11(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access LOCAL_XSTOP_IN11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN11]

//>> SET_[LOCAL_XSTOP_IN12]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN12(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access LOCAL_XSTOP_IN12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN12]

//>> SET_[LOCAL_XSTOP_IN12]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access LOCAL_XSTOP_IN12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN12]

//>> SET_[LOCAL_XSTOP_IN12]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access LOCAL_XSTOP_IN12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN12]

//>> CLEAR_[LOCAL_XSTOP_IN12]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access LOCAL_XSTOP_IN12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN12]

//>> GET_[LOCAL_XSTOP_IN12]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN12(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN12,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access LOCAL_XSTOP_IN12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN12]

//>> GET_[LOCAL_XSTOP_IN12]
static inline bool GET_LOCAL_XSTOP_IN12(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access LOCAL_XSTOP_IN12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN12]

//>> SET_[LOCAL_XSTOP_IN13]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN13(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access LOCAL_XSTOP_IN13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN13]

//>> SET_[LOCAL_XSTOP_IN13]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access LOCAL_XSTOP_IN13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN13]

//>> SET_[LOCAL_XSTOP_IN13]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access LOCAL_XSTOP_IN13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN13]

//>> CLEAR_[LOCAL_XSTOP_IN13]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access LOCAL_XSTOP_IN13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN13]

//>> GET_[LOCAL_XSTOP_IN13]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN13(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN13,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access LOCAL_XSTOP_IN13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN13]

//>> GET_[LOCAL_XSTOP_IN13]
static inline bool GET_LOCAL_XSTOP_IN13(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access LOCAL_XSTOP_IN13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN13]

//>> SET_[LOCAL_XSTOP_IN14]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN14(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access LOCAL_XSTOP_IN14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN14]

//>> SET_[LOCAL_XSTOP_IN14]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access LOCAL_XSTOP_IN14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN14]

//>> SET_[LOCAL_XSTOP_IN14]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access LOCAL_XSTOP_IN14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN14]

//>> CLEAR_[LOCAL_XSTOP_IN14]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access LOCAL_XSTOP_IN14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN14]

//>> GET_[LOCAL_XSTOP_IN14]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN14(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN14,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access LOCAL_XSTOP_IN14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN14]

//>> GET_[LOCAL_XSTOP_IN14]
static inline bool GET_LOCAL_XSTOP_IN14(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access LOCAL_XSTOP_IN14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN14]

//>> SET_[LOCAL_XSTOP_IN15]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN15(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access LOCAL_XSTOP_IN15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN15]

//>> SET_[LOCAL_XSTOP_IN15]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access LOCAL_XSTOP_IN15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN15]

//>> SET_[LOCAL_XSTOP_IN15]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access LOCAL_XSTOP_IN15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN15]

//>> CLEAR_[LOCAL_XSTOP_IN15]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access LOCAL_XSTOP_IN15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN15]

//>> GET_[LOCAL_XSTOP_IN15]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN15(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN15,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access LOCAL_XSTOP_IN15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN15]

//>> GET_[LOCAL_XSTOP_IN15]
static inline bool GET_LOCAL_XSTOP_IN15(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access LOCAL_XSTOP_IN15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN15]

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
    FAPI_ERR("0:scom_eq Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:scom_eq Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:scom_eq Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:scom_eq Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:scom_eq Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:scom_eq Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LXSTOP_INTERRUPT_REG_LXSTOP]

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
    FAPI_ERR("0:scom_eq Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_eq Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_eq Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_eq Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_eq Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_eq Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]

//>> PREP_[SPATTN_MASK_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SPATTN_MASK_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SPATTN_MASK_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SPATTN_MASK_RW]

//>> GET_[SPATTN_MASK_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SPATTN_MASK_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SPATTN_MASK_RW;
#endif
    return fapi2::getScom(i_target, SPATTN_MASK_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SPATTN_MASK_RW]

//>> PUT_[SPATTN_MASK_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SPATTN_MASK_RW(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return fapi2::putScom(i_target, SPATTN_MASK_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SPATTN_MASK_RW]

//>> PREP_[SPATTN_MASK_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SPATTN_MASK_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SPATTN_MASK_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SPATTN_MASK_WO_CLEAR]

//>> GET_[SPATTN_MASK_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SPATTN_MASK_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SPATTN_MASK_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, SPATTN_MASK_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SPATTN_MASK_WO_CLEAR]

//>> PUT_[SPATTN_MASK_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SPATTN_MASK_WO_CLEAR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return fapi2::putScom(i_target, SPATTN_MASK_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SPATTN_MASK_WO_CLEAR]

//>> PREP_[SPATTN_MASK_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SPATTN_MASK_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SPATTN_MASK_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SPATTN_MASK_WO_OR]

//>> GET_[SPATTN_MASK_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SPATTN_MASK_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SPATTN_MASK_WO_OR;
#endif
    return fapi2::getScom(i_target, SPATTN_MASK_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SPATTN_MASK_WO_OR]

//>> PUT_[SPATTN_MASK_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SPATTN_MASK_WO_OR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return fapi2::putScom(i_target, SPATTN_MASK_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SPATTN_MASK_WO_OR]


//>> SET_[SPATTN_MASK_01]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_01(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_01,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_01]

//>> SET_[SPATTN_MASK_01]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_01(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_01,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_01]

//>> SET_[SPATTN_MASK_01]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_01(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_01]

//>> CLEAR_[SPATTN_MASK_01]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_01(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_01]

//>> GET_[SPATTN_MASK_01]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_01(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_01,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_01]

//>> GET_[SPATTN_MASK_01]
static inline bool GET_SPATTN_MASK_01(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_01]

//>> SET_[SPATTN_MASK_02]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_02(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_02,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_02]

//>> SET_[SPATTN_MASK_02]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_02(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_02,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_02]

//>> SET_[SPATTN_MASK_02]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_02(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_02]

//>> CLEAR_[SPATTN_MASK_02]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_02(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_02]

//>> GET_[SPATTN_MASK_02]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_02(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_02,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_02]

//>> GET_[SPATTN_MASK_02]
static inline bool GET_SPATTN_MASK_02(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_02]

//>> SET_[SPATTN_MASK_03]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_03(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_03,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_03]

//>> SET_[SPATTN_MASK_03]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_03(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_03,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_03]

//>> SET_[SPATTN_MASK_03]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_03(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_03]

//>> CLEAR_[SPATTN_MASK_03]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_03(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_03]

//>> GET_[SPATTN_MASK_03]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_03(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_03,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_03]

//>> GET_[SPATTN_MASK_03]
static inline bool GET_SPATTN_MASK_03(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_03]

//>> SET_[SPATTN_MASK_04]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_04(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_04,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_04]

//>> SET_[SPATTN_MASK_04]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_04(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_04,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_04]

//>> SET_[SPATTN_MASK_04]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_04(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_04]

//>> CLEAR_[SPATTN_MASK_04]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_04(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_04]

//>> GET_[SPATTN_MASK_04]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_04(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_04,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_04]

//>> GET_[SPATTN_MASK_04]
static inline bool GET_SPATTN_MASK_04(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_04]

//>> SET_[SPATTN_MASK_05]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_05(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_05]

//>> SET_[SPATTN_MASK_05]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_05(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_05]

//>> SET_[SPATTN_MASK_05]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_05(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_05]

//>> CLEAR_[SPATTN_MASK_05]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_05(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_05]

//>> GET_[SPATTN_MASK_05]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_05(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_05,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_05]

//>> GET_[SPATTN_MASK_05]
static inline bool GET_SPATTN_MASK_05(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_05]

//>> SET_[SPATTN_MASK_06]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_06(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_06]

//>> SET_[SPATTN_MASK_06]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_06(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_06]

//>> SET_[SPATTN_MASK_06]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_06(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_06]

//>> CLEAR_[SPATTN_MASK_06]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_06(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_06]

//>> GET_[SPATTN_MASK_06]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_06(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_06,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_06]

//>> GET_[SPATTN_MASK_06]
static inline bool GET_SPATTN_MASK_06(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_06]

//>> SET_[SPATTN_MASK_07]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_07(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_07]

//>> SET_[SPATTN_MASK_07]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_07(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_07]

//>> SET_[SPATTN_MASK_07]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_07(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_07]

//>> CLEAR_[SPATTN_MASK_07]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_07(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_07]

//>> GET_[SPATTN_MASK_07]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_07(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_07,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_07]

//>> GET_[SPATTN_MASK_07]
static inline bool GET_SPATTN_MASK_07(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_07]

//>> SET_[SPATTN_MASK_08]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_08(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_08]

//>> SET_[SPATTN_MASK_08]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_08(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_08]

//>> SET_[SPATTN_MASK_08]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_08(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_08]

//>> CLEAR_[SPATTN_MASK_08]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_08(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_08]

//>> GET_[SPATTN_MASK_08]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_08(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_08,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_08]

//>> GET_[SPATTN_MASK_08]
static inline bool GET_SPATTN_MASK_08(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_08]

//>> SET_[SPATTN_MASK_09]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_09(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_09]

//>> SET_[SPATTN_MASK_09]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_09(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_09]

//>> SET_[SPATTN_MASK_09]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_09(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_09]

//>> CLEAR_[SPATTN_MASK_09]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_09(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_09]

//>> GET_[SPATTN_MASK_09]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_09(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_09,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_09]

//>> GET_[SPATTN_MASK_09]
static inline bool GET_SPATTN_MASK_09(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_09]

//>> SET_[SPATTN_MASK_10]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_10(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_10]

//>> SET_[SPATTN_MASK_10]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_10]

//>> SET_[SPATTN_MASK_10]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_10]

//>> CLEAR_[SPATTN_MASK_10]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_10]

//>> GET_[SPATTN_MASK_10]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_10(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_10,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_10]

//>> GET_[SPATTN_MASK_10]
static inline bool GET_SPATTN_MASK_10(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_10]

//>> SET_[SPATTN_MASK_11]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_11(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_11]

//>> SET_[SPATTN_MASK_11]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_11(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_11]

//>> SET_[SPATTN_MASK_11]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_11]

//>> CLEAR_[SPATTN_MASK_11]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_11]

//>> GET_[SPATTN_MASK_11]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_11(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_11,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_11]

//>> GET_[SPATTN_MASK_11]
static inline bool GET_SPATTN_MASK_11(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_11]

//>> SET_[SPATTN_MASK_12]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_12(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_12]

//>> SET_[SPATTN_MASK_12]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_12]

//>> SET_[SPATTN_MASK_12]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_12]

//>> CLEAR_[SPATTN_MASK_12]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_12]

//>> GET_[SPATTN_MASK_12]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_12(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_12,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_12]

//>> GET_[SPATTN_MASK_12]
static inline bool GET_SPATTN_MASK_12(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_12]

//>> SET_[SPATTN_MASK_13]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_13(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_13]

//>> SET_[SPATTN_MASK_13]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_13]

//>> SET_[SPATTN_MASK_13]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_13]

//>> CLEAR_[SPATTN_MASK_13]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_13]

//>> GET_[SPATTN_MASK_13]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_13(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_13,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_13]

//>> GET_[SPATTN_MASK_13]
static inline bool GET_SPATTN_MASK_13(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_13]

//>> SET_[SPATTN_MASK_14]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_14(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_14]

//>> SET_[SPATTN_MASK_14]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_14]

//>> SET_[SPATTN_MASK_14]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_14]

//>> CLEAR_[SPATTN_MASK_14]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_14]

//>> GET_[SPATTN_MASK_14]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_14(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_14,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_14]

//>> GET_[SPATTN_MASK_14]
static inline bool GET_SPATTN_MASK_14(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_14]

//>> SET_[SPATTN_MASK_15]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_15(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_15]

//>> SET_[SPATTN_MASK_15]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_15]

//>> SET_[SPATTN_MASK_15]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_15]

//>> CLEAR_[SPATTN_MASK_15]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_15]

//>> GET_[SPATTN_MASK_15]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_15(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_15,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_15]

//>> GET_[SPATTN_MASK_15]
static inline bool GET_SPATTN_MASK_15(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_15]

//>> SET_[SPATTN_MASK_16]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_16(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_16,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_16]

//>> SET_[SPATTN_MASK_16]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_16(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_16,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_16]

//>> SET_[SPATTN_MASK_16]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_16(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_16>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_16]

//>> CLEAR_[SPATTN_MASK_16]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_16(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_16>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_16]

//>> GET_[SPATTN_MASK_16]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_16(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_16,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_16]

//>> GET_[SPATTN_MASK_16]
static inline bool GET_SPATTN_MASK_16(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_16>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_16]

//>> SET_[SPATTN_MASK_17]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_17(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_17,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_17]

//>> SET_[SPATTN_MASK_17]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_17(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_17,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_17]

//>> SET_[SPATTN_MASK_17]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_17(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_17>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_17]

//>> CLEAR_[SPATTN_MASK_17]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_17(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_17>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_17]

//>> GET_[SPATTN_MASK_17]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_17(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_17,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_17]

//>> GET_[SPATTN_MASK_17]
static inline bool GET_SPATTN_MASK_17(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_17>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_17]

//>> SET_[SPATTN_MASK_18]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_18(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_18,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_18]

//>> SET_[SPATTN_MASK_18]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_18(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_18,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_18]

//>> SET_[SPATTN_MASK_18]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_18(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_18>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_18]

//>> CLEAR_[SPATTN_MASK_18]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_18(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_18>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_18]

//>> GET_[SPATTN_MASK_18]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_18(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_18,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_18]

//>> GET_[SPATTN_MASK_18]
static inline bool GET_SPATTN_MASK_18(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_18>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_18]

//>> SET_[SPATTN_MASK_19]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_19(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_19,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_19]

//>> SET_[SPATTN_MASK_19]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_19(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_19,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_19]

//>> SET_[SPATTN_MASK_19]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_19(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_19]

//>> CLEAR_[SPATTN_MASK_19]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_19(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_19]

//>> GET_[SPATTN_MASK_19]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_19(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_19,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_19]

//>> GET_[SPATTN_MASK_19]
static inline bool GET_SPATTN_MASK_19(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_19]

//>> SET_[SPATTN_MASK_20]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_20(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_20,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_20]

//>> SET_[SPATTN_MASK_20]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_20(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_20,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_20]

//>> SET_[SPATTN_MASK_20]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_20(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_20]

//>> CLEAR_[SPATTN_MASK_20]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_20(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_20]

//>> GET_[SPATTN_MASK_20]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_20(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_20,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_20]

//>> GET_[SPATTN_MASK_20]
static inline bool GET_SPATTN_MASK_20(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_20]

//>> SET_[SPATTN_MASK_21]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_21(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_21,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_21]

//>> SET_[SPATTN_MASK_21]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_21(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_21,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_21]

//>> SET_[SPATTN_MASK_21]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_21(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_21>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_21]

//>> CLEAR_[SPATTN_MASK_21]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_21(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_21>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_21]

//>> GET_[SPATTN_MASK_21]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_21(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_21,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_21]

//>> GET_[SPATTN_MASK_21]
static inline bool GET_SPATTN_MASK_21(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_21>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_21]

//>> SET_[SPATTN_MASK_22]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_22(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_22,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_22]

//>> SET_[SPATTN_MASK_22]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_22(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_22,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_22]

//>> SET_[SPATTN_MASK_22]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_22(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_22>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_22]

//>> CLEAR_[SPATTN_MASK_22]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_22(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_22>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_22]

//>> GET_[SPATTN_MASK_22]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_22(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_22,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_22]

//>> GET_[SPATTN_MASK_22]
static inline bool GET_SPATTN_MASK_22(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_22>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_22]

//>> SET_[SPATTN_MASK_23]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_23(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_23,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_23]

//>> SET_[SPATTN_MASK_23]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_23(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_23,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_23]

//>> SET_[SPATTN_MASK_23]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_23(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_23]

//>> CLEAR_[SPATTN_MASK_23]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_23(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_23]

//>> GET_[SPATTN_MASK_23]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_23(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_23,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_23]

//>> GET_[SPATTN_MASK_23]
static inline bool GET_SPATTN_MASK_23(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_23]

//>> SET_[SPATTN_MASK_24]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_24(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_24,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_24]

//>> SET_[SPATTN_MASK_24]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_24(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_24,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_24]

//>> SET_[SPATTN_MASK_24]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_24(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_24>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_24]

//>> CLEAR_[SPATTN_MASK_24]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_24(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_24>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_24]

//>> GET_[SPATTN_MASK_24]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_24(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_24,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_24]

//>> GET_[SPATTN_MASK_24]
static inline bool GET_SPATTN_MASK_24(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_24>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_24]

//>> SET_[SPATTN_MASK_25]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_25(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_25,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_25]

//>> SET_[SPATTN_MASK_25]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_25(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_25,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_25]

//>> SET_[SPATTN_MASK_25]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_25(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_25>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_25]

//>> CLEAR_[SPATTN_MASK_25]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_25(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_25>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_25]

//>> GET_[SPATTN_MASK_25]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_25(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_25,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_25]

//>> GET_[SPATTN_MASK_25]
static inline bool GET_SPATTN_MASK_25(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_25>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_25]

//>> SET_[SPATTN_MASK_26]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_26(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_26,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_26]

//>> SET_[SPATTN_MASK_26]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_26(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_26,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_26]

//>> SET_[SPATTN_MASK_26]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_26(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_26>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_26]

//>> CLEAR_[SPATTN_MASK_26]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_26(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_26>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_26]

//>> GET_[SPATTN_MASK_26]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_26(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_26,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_26]

//>> GET_[SPATTN_MASK_26]
static inline bool GET_SPATTN_MASK_26(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_26>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_26]

//>> SET_[SPATTN_MASK_27]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_27(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_27,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_27]

//>> SET_[SPATTN_MASK_27]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_27(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_27,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_27]

//>> SET_[SPATTN_MASK_27]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_27(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_27>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_27]

//>> CLEAR_[SPATTN_MASK_27]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_27(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_27>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_27]

//>> GET_[SPATTN_MASK_27]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_27(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_27,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_27]

//>> GET_[SPATTN_MASK_27]
static inline bool GET_SPATTN_MASK_27(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_27>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_27]

//>> SET_[SPATTN_MASK_28]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_28(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_28,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_28]

//>> SET_[SPATTN_MASK_28]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_28(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_28,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_28]

//>> SET_[SPATTN_MASK_28]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_28(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_28>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_28]

//>> CLEAR_[SPATTN_MASK_28]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_28(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_28>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_28]

//>> GET_[SPATTN_MASK_28]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_28(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_28,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_28]

//>> GET_[SPATTN_MASK_28]
static inline bool GET_SPATTN_MASK_28(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_28>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_28]

//>> SET_[SPATTN_MASK_29]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_29(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_29,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_29]

//>> SET_[SPATTN_MASK_29]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_29(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_29,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_29]

//>> SET_[SPATTN_MASK_29]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_29(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_29>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_29]

//>> CLEAR_[SPATTN_MASK_29]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_29(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_29>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_29]

//>> GET_[SPATTN_MASK_29]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_29(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_29,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_29]

//>> GET_[SPATTN_MASK_29]
static inline bool GET_SPATTN_MASK_29(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_29>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_29]

//>> SET_[SPATTN_MASK_30]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_30(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_30,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_30]

//>> SET_[SPATTN_MASK_30]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_30(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_30,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_30]

//>> SET_[SPATTN_MASK_30]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_30(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_30]

//>> CLEAR_[SPATTN_MASK_30]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_30(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_30]

//>> GET_[SPATTN_MASK_30]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_30(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_30,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_30]

//>> GET_[SPATTN_MASK_30]
static inline bool GET_SPATTN_MASK_30(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_30]

//>> SET_[SPATTN_MASK_31]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_31(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_31,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_31]

//>> SET_[SPATTN_MASK_31]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_31(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_31,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_31]

//>> SET_[SPATTN_MASK_31]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_31(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_31>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_31]

//>> CLEAR_[SPATTN_MASK_31]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_31(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_31>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_31]

//>> GET_[SPATTN_MASK_31]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_31(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_31,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_31]

//>> GET_[SPATTN_MASK_31]
static inline bool GET_SPATTN_MASK_31(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_31>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_31]

//>> SET_[SPATTN_MASK_32]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_32(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_32,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_32]

//>> SET_[SPATTN_MASK_32]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_32(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_32,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_32]

//>> SET_[SPATTN_MASK_32]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_32(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_32>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_32]

//>> CLEAR_[SPATTN_MASK_32]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_32(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_32>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_32]

//>> GET_[SPATTN_MASK_32]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_32(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_32,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_32]

//>> GET_[SPATTN_MASK_32]
static inline bool GET_SPATTN_MASK_32(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_32>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_32]

//>> SET_[SPATTN_MASK_33]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_33(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_33,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_33]

//>> SET_[SPATTN_MASK_33]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_33(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_33,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_33]

//>> SET_[SPATTN_MASK_33]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_33(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_33>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_33]

//>> CLEAR_[SPATTN_MASK_33]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_33(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_33>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_33]

//>> GET_[SPATTN_MASK_33]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_33(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_33,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_33]

//>> GET_[SPATTN_MASK_33]
static inline bool GET_SPATTN_MASK_33(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_33>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_33]

//>> SET_[SPATTN_MASK_34]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_34(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_34,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_34]

//>> SET_[SPATTN_MASK_34]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_34(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_34,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_34]

//>> SET_[SPATTN_MASK_34]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_34(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_34>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_34]

//>> CLEAR_[SPATTN_MASK_34]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_34(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_34>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_34]

//>> GET_[SPATTN_MASK_34]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_34(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_34,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_34]

//>> GET_[SPATTN_MASK_34]
static inline bool GET_SPATTN_MASK_34(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_34>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_34]

//>> SET_[SPATTN_MASK_35]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_35(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_35,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access SPATTN_MASK_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_35]

//>> SET_[SPATTN_MASK_35]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_35(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_35,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access SPATTN_MASK_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_35]

//>> SET_[SPATTN_MASK_35]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_35(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_35>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access SPATTN_MASK_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_35]

//>> CLEAR_[SPATTN_MASK_35]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_35(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_35>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access SPATTN_MASK_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_35]

//>> GET_[SPATTN_MASK_35]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_35(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_35,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access SPATTN_MASK_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_35]

//>> GET_[SPATTN_MASK_35]
static inline bool GET_SPATTN_MASK_35(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_35>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access SPATTN_MASK_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_35]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
