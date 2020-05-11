/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/perv/reg00022_unused.H $      */
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

#ifndef __PERV_REG00022_H_UNUSED__
#define __PERV_REG00022_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace perv
{
#endif


//>> PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE]

//>> PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE]


//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM]

//>> PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE]

//>> PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE]


//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.setBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]

//>> CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]
static inline bool GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return i_data.getBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.setBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]

//>> CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]
static inline bool GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return i_data.getBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.setBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]

//>> CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]
static inline bool GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return i_data.getBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.setBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]

//>> CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]
static inline bool GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return i_data.getBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.setBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]

//>> CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]
static inline bool GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return i_data.getBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]

//>> PREP_[CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY]

//>> PUT_[CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY]


//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE,
           CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE,
           CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE,
           CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE]

//>> PREP_[CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC]

//>> PUT_[CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_DCADJ_WRAP_SET_DEC_DCC]


//>> PREP_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES]

//>> PUT_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES]


//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0,
           CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0,
           CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0,
           CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1,
           CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1,
           CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1,
           CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2,
           CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2,
           CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2,
           CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3,
           CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3,
           CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3,
           CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3]

//>> PREP_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA]

//>> PUT_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA]


//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.setBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]

//>> CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.clearBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return i_data.extractToRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]
static inline bool GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return i_data.getBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST,
           CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST,
           CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return i_data.extractToRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST,
           CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.setBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]

//>> CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.clearBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return i_data.extractToRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]
static inline bool GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return i_data.getBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST,
           CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST,
           CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return i_data.extractToRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST,
           CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST]

//>> PREP_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES]

//>> PUT_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES]


//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES));
#endif
    return o_data.setBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]

//>> CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES));
#endif
    return o_data.clearBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES));
#endif
    return i_data.extractToRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]
static inline bool GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES));
#endif
    return i_data.getBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]

//>> PREP_[CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC]

//>> PUT_[CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_DCADJ_WRAP_SET_DEC_DCC]


//>> PREP_[CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE]

//>> PUT_[CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE]


//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD]

//>> PREP_[CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY]

//>> PUT_[CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY]


//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE,
           CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE,
           CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE,
           CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE]

//>> PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE]

//>> PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE]


//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE));
#endif
    return o_data.setBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE]

//>> CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE));
#endif
    return o_data.clearBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE]
static inline bool GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE));
#endif
    return i_data.getBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_ENABLE]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_OVERRIDE_VALUE]

//>> PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE]

//>> PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE]


//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_OP_MODE_FSM_STATE_OP_MODE_FSM]

//>> PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE]

//>> PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE]


//>> PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT]

//>> PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT]


//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE]

//>> PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_7_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2B_DATA_AREA_7_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_7_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_7_RO]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_7_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_7_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_7_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_7_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_7_RO]

//>> PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_7_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2B_DATA_AREA_7_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_7_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_7_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_7_RO]


//>> PREP_[QMETRA0_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QMETRA0_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QMETRA0_TR0_CONFIG_1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QMETRA0_TR0_CONFIG_1]

//>> GET_[QMETRA0_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QMETRA0_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QMETRA0_TR0_CONFIG_1;
#endif
    return fapi2::getScom(i_target, QMETRA0_TR0_CONFIG_1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_1]

//>> PUT_[QMETRA0_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QMETRA0_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_1));
#endif
    return fapi2::putScom(i_target, QMETRA0_TR0_CONFIG_1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QMETRA0_TR0_CONFIG_1]


//>> SET_[QMETRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_1));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           QMETRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> SET_[QMETRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_1));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           QMETRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> GET_[QMETRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_1));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           QMETRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> PREP_[QMETRA0_TR1_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QMETRA0_TR1_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QMETRA0_TR1_TRACE_HI_DATA_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QMETRA0_TR1_TRACE_HI_DATA_REG]

//>> GET_[QMETRA0_TR1_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QMETRA0_TR1_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QMETRA0_TR1_TRACE_HI_DATA_REG;
#endif
    return fapi2::getScom(i_target, QMETRA0_TR1_TRACE_HI_DATA_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QMETRA0_TR1_TRACE_HI_DATA_REG]

//>> PUT_[QMETRA0_TR1_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QMETRA0_TR1_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_HI_DATA_REG));
#endif
    return fapi2::putScom(i_target, QMETRA0_TR1_TRACE_HI_DATA_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QMETRA0_TR1_TRACE_HI_DATA_REG]


//>> SET_[QMETRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_HI_DATA_REG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           QMETRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access QMETRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> SET_[QMETRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_HI_DATA_REG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           QMETRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access QMETRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> GET_[QMETRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_HI_DATA_REG));
#endif
    return i_data.extractToRight<QMETRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           QMETRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access QMETRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> PREP_[ATOMIC_LOCK_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_ATOMIC_LOCK_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = ATOMIC_LOCK_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[ATOMIC_LOCK_REG]

//>> GET_[ATOMIC_LOCK_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_ATOMIC_LOCK_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = ATOMIC_LOCK_REG;
#endif
    return fapi2::getScom(i_target, ATOMIC_LOCK_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[ATOMIC_LOCK_REG]

//>> PUT_[ATOMIC_LOCK_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_ATOMIC_LOCK_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(ATOMIC_LOCK_REG));
#endif
    return fapi2::putScom(i_target, ATOMIC_LOCK_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[ATOMIC_LOCK_REG]


//>> SET_[ATOMIC_LOCK_REG_LOCK_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_ATOMIC_LOCK_REG_LOCK_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATOMIC_LOCK_REG));
#endif
    return o_data.insertFromRight<ATOMIC_LOCK_REG_LOCK_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access ATOMIC_LOCK_REG_LOCK_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATOMIC_LOCK_REG_LOCK_ENABLE]

//>> SET_[ATOMIC_LOCK_REG_LOCK_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_ATOMIC_LOCK_REG_LOCK_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATOMIC_LOCK_REG));
#endif
    return o_data.insertFromRight<ATOMIC_LOCK_REG_LOCK_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access ATOMIC_LOCK_REG_LOCK_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATOMIC_LOCK_REG_LOCK_ENABLE]

//>> SET_[ATOMIC_LOCK_REG_LOCK_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_ATOMIC_LOCK_REG_LOCK_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATOMIC_LOCK_REG));
#endif
    return o_data.setBit<ATOMIC_LOCK_REG_LOCK_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access ATOMIC_LOCK_REG_LOCK_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATOMIC_LOCK_REG_LOCK_ENABLE]

//>> CLEAR_[ATOMIC_LOCK_REG_LOCK_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_ATOMIC_LOCK_REG_LOCK_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATOMIC_LOCK_REG));
#endif
    return o_data.clearBit<ATOMIC_LOCK_REG_LOCK_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access ATOMIC_LOCK_REG_LOCK_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[ATOMIC_LOCK_REG_LOCK_ENABLE]

//>> GET_[ATOMIC_LOCK_REG_LOCK_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_ATOMIC_LOCK_REG_LOCK_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATOMIC_LOCK_REG));
#endif
    return i_data.extractToRight<ATOMIC_LOCK_REG_LOCK_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access ATOMIC_LOCK_REG_LOCK_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ATOMIC_LOCK_REG_LOCK_ENABLE]

//>> GET_[ATOMIC_LOCK_REG_LOCK_ENABLE]
static inline bool GET_ATOMIC_LOCK_REG_LOCK_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATOMIC_LOCK_REG));
#endif
    return i_data.getBit<ATOMIC_LOCK_REG_LOCK_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access ATOMIC_LOCK_REG_LOCK_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ATOMIC_LOCK_REG_LOCK_ENABLE]

//>> SET_[ATOMIC_LOCK_REG_ID]
static inline fapi2::buffer<uint64_t>& SET_ATOMIC_LOCK_REG_ID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATOMIC_LOCK_REG));
#endif
    return o_data.insertFromRight<ATOMIC_LOCK_REG_ID,
           ATOMIC_LOCK_REG_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access ATOMIC_LOCK_REG_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATOMIC_LOCK_REG_ID]

//>> SET_[ATOMIC_LOCK_REG_ID]
static inline fapi2::buffer<uint64_t>& SET_ATOMIC_LOCK_REG_ID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATOMIC_LOCK_REG));
#endif
    return o_data.insertFromRight<ATOMIC_LOCK_REG_ID,
           ATOMIC_LOCK_REG_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access ATOMIC_LOCK_REG_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATOMIC_LOCK_REG_ID]

//>> GET_[ATOMIC_LOCK_REG_ID]
static inline fapi2::buffer<uint64_t>& GET_ATOMIC_LOCK_REG_ID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATOMIC_LOCK_REG));
#endif
    return i_data.extractToRight<ATOMIC_LOCK_REG_ID,
           ATOMIC_LOCK_REG_ID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access ATOMIC_LOCK_REG_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ATOMIC_LOCK_REG_ID]

//>> SET_[ATOMIC_LOCK_REG_ACTIVITY]
static inline fapi2::buffer<uint64_t>& SET_ATOMIC_LOCK_REG_ACTIVITY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATOMIC_LOCK_REG));
#endif
    return o_data.insertFromRight<ATOMIC_LOCK_REG_ACTIVITY,
           ATOMIC_LOCK_REG_ACTIVITY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access ATOMIC_LOCK_REG_ACTIVITY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATOMIC_LOCK_REG_ACTIVITY]

//>> SET_[ATOMIC_LOCK_REG_ACTIVITY]
static inline fapi2::buffer<uint64_t>& SET_ATOMIC_LOCK_REG_ACTIVITY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATOMIC_LOCK_REG));
#endif
    return o_data.insertFromRight<ATOMIC_LOCK_REG_ACTIVITY,
           ATOMIC_LOCK_REG_ACTIVITY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access ATOMIC_LOCK_REG_ACTIVITY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[ATOMIC_LOCK_REG_ACTIVITY]

//>> GET_[ATOMIC_LOCK_REG_ACTIVITY]
static inline fapi2::buffer<uint64_t>& GET_ATOMIC_LOCK_REG_ACTIVITY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(ATOMIC_LOCK_REG));
#endif
    return i_data.extractToRight<ATOMIC_LOCK_REG_ACTIVITY,
           ATOMIC_LOCK_REG_ACTIVITY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access ATOMIC_LOCK_REG_ACTIVITY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[ATOMIC_LOCK_REG_ACTIVITY]

//>> PREP_[COMP_INTR_INTERRUPT_HOLD_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_COMP_INTR_INTERRUPT_HOLD_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT_HOLD_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[COMP_INTR_INTERRUPT_HOLD_REG]

//>> GET_[COMP_INTR_INTERRUPT_HOLD_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_COMP_INTR_INTERRUPT_HOLD_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT_HOLD_REG;
#endif
    return fapi2::getScom(i_target, COMP_INTR_INTERRUPT_HOLD_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT_HOLD_REG]

//>> PUT_[COMP_INTR_INTERRUPT_HOLD_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_COMP_INTR_INTERRUPT_HOLD_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_HOLD_REG));
#endif
    return fapi2::putScom(i_target, COMP_INTR_INTERRUPT_HOLD_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[COMP_INTR_INTERRUPT_HOLD_REG]


//>> SET_[COMP_INTR_INTERRUPT_HOLD_REG_INTERRUPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_COMP_INTR_INTERRUPT_HOLD_REG_INTERRUPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_HOLD_REG));
#endif
    return o_data.insertFromRight<COMP_INTR_INTERRUPT_HOLD_REG_INTERRUPT_HOLD,
           COMP_INTR_INTERRUPT_HOLD_REG_INTERRUPT_HOLD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access COMP_INTR_INTERRUPT_HOLD_REG_INTERRUPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[COMP_INTR_INTERRUPT_HOLD_REG_INTERRUPT_HOLD]

//>> SET_[COMP_INTR_INTERRUPT_HOLD_REG_INTERRUPT_HOLD]
static inline fapi2::buffer<uint64_t>& SET_COMP_INTR_INTERRUPT_HOLD_REG_INTERRUPT_HOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_HOLD_REG));
#endif
    return o_data.insertFromRight<COMP_INTR_INTERRUPT_HOLD_REG_INTERRUPT_HOLD,
           COMP_INTR_INTERRUPT_HOLD_REG_INTERRUPT_HOLD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access COMP_INTR_INTERRUPT_HOLD_REG_INTERRUPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[COMP_INTR_INTERRUPT_HOLD_REG_INTERRUPT_HOLD]

//>> GET_[COMP_INTR_INTERRUPT_HOLD_REG_INTERRUPT_HOLD]
static inline fapi2::buffer<uint64_t>& GET_COMP_INTR_INTERRUPT_HOLD_REG_INTERRUPT_HOLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_HOLD_REG));
#endif
    return i_data.extractToRight<COMP_INTR_INTERRUPT_HOLD_REG_INTERRUPT_HOLD,
           COMP_INTR_INTERRUPT_HOLD_REG_INTERRUPT_HOLD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access COMP_INTR_INTERRUPT_HOLD_REG_INTERRUPT_HOLD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT_HOLD_REG_INTERRUPT_HOLD]

//>> PREP_[EPS_DBG_TRACE_MODE_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_DBG_TRACE_MODE_REG_2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_TRACE_MODE_REG_2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_DBG_TRACE_MODE_REG_2]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_DBG_TRACE_MODE_REG_2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_TRACE_MODE_REG_2;
#endif
    return fapi2::getScom(i_target, EPS_DBG_TRACE_MODE_REG_2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2]

//>> PUT_[EPS_DBG_TRACE_MODE_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_DBG_TRACE_MODE_REG_2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return fapi2::putScom(i_target, EPS_DBG_TRACE_MODE_REG_2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_DBG_TRACE_MODE_REG_2]


//>> SET_[EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE,
           EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE,
           EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE,
           EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.setBit<EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]

//>> CLEAR_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]
static inline bool GET_EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.getBit<EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.setBit<EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]

//>> CLEAR_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]
static inline bool GET_EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.getBit<EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.setBit<EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]

//>> CLEAR_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]
static inline bool GET_EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.getBit<EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.setBit<EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]

//>> CLEAR_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]
static inline bool GET_EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.getBit<EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.setBit<EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]

//>> CLEAR_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]
static inline bool GET_EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.getBit<EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.setBit<EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]

//>> CLEAR_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]
static inline bool GET_EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.getBit<EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK,
           EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK,
           EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK,
           EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK]

//>> PREP_[EPS_FIR_LOCAL_MASK_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_FIR_LOCAL_MASK_WO_AND(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_LOCAL_MASK_WO_AND;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_FIR_LOCAL_MASK_WO_AND]

//>> GET_[EPS_FIR_LOCAL_MASK_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_FIR_LOCAL_MASK_WO_AND(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_LOCAL_MASK_WO_AND;
#endif
    return fapi2::getScom(i_target, EPS_FIR_LOCAL_MASK_WO_AND, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_FIR_LOCAL_MASK_WO_AND]

//>> PUT_[EPS_FIR_LOCAL_MASK_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_FIR_LOCAL_MASK_WO_AND(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_MASK_RW, EPS_FIR_LOCAL_MASK_WO_AND, EPS_FIR_LOCAL_MASK_WO_OR));
#endif
    return fapi2::putScom(i_target, EPS_FIR_LOCAL_MASK_WO_AND, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_FIR_LOCAL_MASK_WO_AND]

//>> PREP_[EPS_FIR_LOCAL_MASK_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_FIR_LOCAL_MASK_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_LOCAL_MASK_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_FIR_LOCAL_MASK_WO_OR]

//>> GET_[EPS_FIR_LOCAL_MASK_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_FIR_LOCAL_MASK_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_LOCAL_MASK_WO_OR;
#endif
    return fapi2::getScom(i_target, EPS_FIR_LOCAL_MASK_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_FIR_LOCAL_MASK_WO_OR]

//>> PUT_[EPS_FIR_LOCAL_MASK_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_FIR_LOCAL_MASK_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_FIR_LOCAL_MASK_RW, EPS_FIR_LOCAL_MASK_WO_AND, EPS_FIR_LOCAL_MASK_WO_OR));
#endif
    return fapi2::putScom(i_target, EPS_FIR_LOCAL_MASK_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_FIR_LOCAL_MASK_WO_OR]


//>> PREP_[EPS_THERM_WSUB2_SKITTER_DATA2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_THERM_WSUB2_SKITTER_DATA2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB2_SKITTER_DATA2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_THERM_WSUB2_SKITTER_DATA2]

//>> GET_[EPS_THERM_WSUB2_SKITTER_DATA2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_THERM_WSUB2_SKITTER_DATA2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB2_SKITTER_DATA2;
#endif
    return fapi2::getScom(i_target, EPS_THERM_WSUB2_SKITTER_DATA2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_THERM_WSUB2_SKITTER_DATA2]

//>> PUT_[EPS_THERM_WSUB2_SKITTER_DATA2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_THERM_WSUB2_SKITTER_DATA2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_DATA2));
#endif
    return fapi2::putScom(i_target, EPS_THERM_WSUB2_SKITTER_DATA2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_THERM_WSUB2_SKITTER_DATA2]


//>> PREP_[FIRST_ERR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FIRST_ERR_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FIRST_ERR_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FIRST_ERR_REG]

//>> GET_[FIRST_ERR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FIRST_ERR_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FIRST_ERR_REG;
#endif
    return fapi2::getScom(i_target, FIRST_ERR_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FIRST_ERR_REG]

//>> PUT_[FIRST_ERR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FIRST_ERR_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return fapi2::putScom(i_target, FIRST_ERR_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FIRST_ERR_REG]


//>> SET_[FIRST_ERR_REG_TIMEOUT_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_FIRST_ERR_REG_TIMEOUT_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return o_data.insertFromRight<FIRST_ERR_REG_TIMEOUT_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FIRST_ERR_REG_TIMEOUT_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FIRST_ERR_REG_TIMEOUT_ACTIVE]

//>> SET_[FIRST_ERR_REG_TIMEOUT_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_FIRST_ERR_REG_TIMEOUT_ACTIVE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return o_data.insertFromRight<FIRST_ERR_REG_TIMEOUT_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FIRST_ERR_REG_TIMEOUT_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FIRST_ERR_REG_TIMEOUT_ACTIVE]

//>> SET_[FIRST_ERR_REG_TIMEOUT_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_FIRST_ERR_REG_TIMEOUT_ACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return o_data.setBit<FIRST_ERR_REG_TIMEOUT_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FIRST_ERR_REG_TIMEOUT_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FIRST_ERR_REG_TIMEOUT_ACTIVE]

//>> CLEAR_[FIRST_ERR_REG_TIMEOUT_ACTIVE]
static inline fapi2::buffer<uint64_t>& CLEAR_FIRST_ERR_REG_TIMEOUT_ACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return o_data.clearBit<FIRST_ERR_REG_TIMEOUT_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FIRST_ERR_REG_TIMEOUT_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FIRST_ERR_REG_TIMEOUT_ACTIVE]

//>> GET_[FIRST_ERR_REG_TIMEOUT_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_FIRST_ERR_REG_TIMEOUT_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return i_data.extractToRight<FIRST_ERR_REG_TIMEOUT_ACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FIRST_ERR_REG_TIMEOUT_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FIRST_ERR_REG_TIMEOUT_ACTIVE]

//>> GET_[FIRST_ERR_REG_TIMEOUT_ACTIVE]
static inline bool GET_FIRST_ERR_REG_TIMEOUT_ACTIVE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return i_data.getBit<FIRST_ERR_REG_TIMEOUT_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FIRST_ERR_REG_TIMEOUT_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FIRST_ERR_REG_TIMEOUT_ACTIVE]

//>> SET_[FIRST_ERR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_FIRST_ERR_REG_PARITY_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return o_data.insertFromRight<FIRST_ERR_REG_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FIRST_ERR_REG_PARITY_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FIRST_ERR_REG_PARITY_ERR]

//>> SET_[FIRST_ERR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_FIRST_ERR_REG_PARITY_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return o_data.insertFromRight<FIRST_ERR_REG_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FIRST_ERR_REG_PARITY_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FIRST_ERR_REG_PARITY_ERR]

//>> SET_[FIRST_ERR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_FIRST_ERR_REG_PARITY_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return o_data.setBit<FIRST_ERR_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FIRST_ERR_REG_PARITY_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FIRST_ERR_REG_PARITY_ERR]

//>> CLEAR_[FIRST_ERR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_FIRST_ERR_REG_PARITY_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return o_data.clearBit<FIRST_ERR_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FIRST_ERR_REG_PARITY_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FIRST_ERR_REG_PARITY_ERR]

//>> GET_[FIRST_ERR_REG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& GET_FIRST_ERR_REG_PARITY_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return i_data.extractToRight<FIRST_ERR_REG_PARITY_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FIRST_ERR_REG_PARITY_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FIRST_ERR_REG_PARITY_ERR]

//>> GET_[FIRST_ERR_REG_PARITY_ERR]
static inline bool GET_FIRST_ERR_REG_PARITY_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return i_data.getBit<FIRST_ERR_REG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FIRST_ERR_REG_PARITY_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FIRST_ERR_REG_PARITY_ERR]

//>> SET_[FIRST_ERR_REG_BEAT_NUM_ERR]
static inline fapi2::buffer<uint64_t>& SET_FIRST_ERR_REG_BEAT_NUM_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return o_data.insertFromRight<FIRST_ERR_REG_BEAT_NUM_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FIRST_ERR_REG_BEAT_NUM_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FIRST_ERR_REG_BEAT_NUM_ERR]

//>> SET_[FIRST_ERR_REG_BEAT_NUM_ERR]
static inline fapi2::buffer<uint64_t>& SET_FIRST_ERR_REG_BEAT_NUM_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return o_data.insertFromRight<FIRST_ERR_REG_BEAT_NUM_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FIRST_ERR_REG_BEAT_NUM_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FIRST_ERR_REG_BEAT_NUM_ERR]

//>> SET_[FIRST_ERR_REG_BEAT_NUM_ERR]
static inline fapi2::buffer<uint64_t>& SET_FIRST_ERR_REG_BEAT_NUM_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return o_data.setBit<FIRST_ERR_REG_BEAT_NUM_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FIRST_ERR_REG_BEAT_NUM_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FIRST_ERR_REG_BEAT_NUM_ERR]

//>> CLEAR_[FIRST_ERR_REG_BEAT_NUM_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_FIRST_ERR_REG_BEAT_NUM_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return o_data.clearBit<FIRST_ERR_REG_BEAT_NUM_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FIRST_ERR_REG_BEAT_NUM_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FIRST_ERR_REG_BEAT_NUM_ERR]

//>> GET_[FIRST_ERR_REG_BEAT_NUM_ERR]
static inline fapi2::buffer<uint64_t>& GET_FIRST_ERR_REG_BEAT_NUM_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return i_data.extractToRight<FIRST_ERR_REG_BEAT_NUM_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FIRST_ERR_REG_BEAT_NUM_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FIRST_ERR_REG_BEAT_NUM_ERR]

//>> GET_[FIRST_ERR_REG_BEAT_NUM_ERR]
static inline bool GET_FIRST_ERR_REG_BEAT_NUM_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return i_data.getBit<FIRST_ERR_REG_BEAT_NUM_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FIRST_ERR_REG_BEAT_NUM_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FIRST_ERR_REG_BEAT_NUM_ERR]

//>> SET_[FIRST_ERR_REG_BEAT_REC_ERR]
static inline fapi2::buffer<uint64_t>& SET_FIRST_ERR_REG_BEAT_REC_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return o_data.insertFromRight<FIRST_ERR_REG_BEAT_REC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FIRST_ERR_REG_BEAT_REC_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FIRST_ERR_REG_BEAT_REC_ERR]

//>> SET_[FIRST_ERR_REG_BEAT_REC_ERR]
static inline fapi2::buffer<uint64_t>& SET_FIRST_ERR_REG_BEAT_REC_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return o_data.insertFromRight<FIRST_ERR_REG_BEAT_REC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FIRST_ERR_REG_BEAT_REC_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FIRST_ERR_REG_BEAT_REC_ERR]

//>> SET_[FIRST_ERR_REG_BEAT_REC_ERR]
static inline fapi2::buffer<uint64_t>& SET_FIRST_ERR_REG_BEAT_REC_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return o_data.setBit<FIRST_ERR_REG_BEAT_REC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FIRST_ERR_REG_BEAT_REC_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FIRST_ERR_REG_BEAT_REC_ERR]

//>> CLEAR_[FIRST_ERR_REG_BEAT_REC_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_FIRST_ERR_REG_BEAT_REC_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return o_data.clearBit<FIRST_ERR_REG_BEAT_REC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FIRST_ERR_REG_BEAT_REC_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FIRST_ERR_REG_BEAT_REC_ERR]

//>> GET_[FIRST_ERR_REG_BEAT_REC_ERR]
static inline fapi2::buffer<uint64_t>& GET_FIRST_ERR_REG_BEAT_REC_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return i_data.extractToRight<FIRST_ERR_REG_BEAT_REC_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FIRST_ERR_REG_BEAT_REC_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FIRST_ERR_REG_BEAT_REC_ERR]

//>> GET_[FIRST_ERR_REG_BEAT_REC_ERR]
static inline bool GET_FIRST_ERR_REG_BEAT_REC_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return i_data.getBit<FIRST_ERR_REG_BEAT_REC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FIRST_ERR_REG_BEAT_REC_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FIRST_ERR_REG_BEAT_REC_ERR]

//>> SET_[FIRST_ERR_REG_RECEIVED_ERROR]
static inline fapi2::buffer<uint64_t>& SET_FIRST_ERR_REG_RECEIVED_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return o_data.insertFromRight<FIRST_ERR_REG_RECEIVED_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FIRST_ERR_REG_RECEIVED_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FIRST_ERR_REG_RECEIVED_ERROR]

//>> SET_[FIRST_ERR_REG_RECEIVED_ERROR]
static inline fapi2::buffer<uint64_t>& SET_FIRST_ERR_REG_RECEIVED_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return o_data.insertFromRight<FIRST_ERR_REG_RECEIVED_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FIRST_ERR_REG_RECEIVED_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FIRST_ERR_REG_RECEIVED_ERROR]

//>> SET_[FIRST_ERR_REG_RECEIVED_ERROR]
static inline fapi2::buffer<uint64_t>& SET_FIRST_ERR_REG_RECEIVED_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return o_data.setBit<FIRST_ERR_REG_RECEIVED_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FIRST_ERR_REG_RECEIVED_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FIRST_ERR_REG_RECEIVED_ERROR]

//>> CLEAR_[FIRST_ERR_REG_RECEIVED_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_FIRST_ERR_REG_RECEIVED_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return o_data.clearBit<FIRST_ERR_REG_RECEIVED_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FIRST_ERR_REG_RECEIVED_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FIRST_ERR_REG_RECEIVED_ERROR]

//>> GET_[FIRST_ERR_REG_RECEIVED_ERROR]
static inline fapi2::buffer<uint64_t>& GET_FIRST_ERR_REG_RECEIVED_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return i_data.extractToRight<FIRST_ERR_REG_RECEIVED_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FIRST_ERR_REG_RECEIVED_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FIRST_ERR_REG_RECEIVED_ERROR]

//>> GET_[FIRST_ERR_REG_RECEIVED_ERROR]
static inline bool GET_FIRST_ERR_REG_RECEIVED_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return i_data.getBit<FIRST_ERR_REG_RECEIVED_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FIRST_ERR_REG_RECEIVED_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FIRST_ERR_REG_RECEIVED_ERROR]

//>> SET_[FIRST_ERR_REG_RX_PCB_DATA_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_FIRST_ERR_REG_RX_PCB_DATA_P_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return o_data.insertFromRight<FIRST_ERR_REG_RX_PCB_DATA_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FIRST_ERR_REG_RX_PCB_DATA_P_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FIRST_ERR_REG_RX_PCB_DATA_P_ERR]

//>> SET_[FIRST_ERR_REG_RX_PCB_DATA_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_FIRST_ERR_REG_RX_PCB_DATA_P_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return o_data.insertFromRight<FIRST_ERR_REG_RX_PCB_DATA_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FIRST_ERR_REG_RX_PCB_DATA_P_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FIRST_ERR_REG_RX_PCB_DATA_P_ERR]

//>> SET_[FIRST_ERR_REG_RX_PCB_DATA_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_FIRST_ERR_REG_RX_PCB_DATA_P_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return o_data.setBit<FIRST_ERR_REG_RX_PCB_DATA_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FIRST_ERR_REG_RX_PCB_DATA_P_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FIRST_ERR_REG_RX_PCB_DATA_P_ERR]

//>> CLEAR_[FIRST_ERR_REG_RX_PCB_DATA_P_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_FIRST_ERR_REG_RX_PCB_DATA_P_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return o_data.clearBit<FIRST_ERR_REG_RX_PCB_DATA_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FIRST_ERR_REG_RX_PCB_DATA_P_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FIRST_ERR_REG_RX_PCB_DATA_P_ERR]

//>> GET_[FIRST_ERR_REG_RX_PCB_DATA_P_ERR]
static inline fapi2::buffer<uint64_t>& GET_FIRST_ERR_REG_RX_PCB_DATA_P_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return i_data.extractToRight<FIRST_ERR_REG_RX_PCB_DATA_P_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FIRST_ERR_REG_RX_PCB_DATA_P_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FIRST_ERR_REG_RX_PCB_DATA_P_ERR]

//>> GET_[FIRST_ERR_REG_RX_PCB_DATA_P_ERR]
static inline bool GET_FIRST_ERR_REG_RX_PCB_DATA_P_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return i_data.getBit<FIRST_ERR_REG_RX_PCB_DATA_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FIRST_ERR_REG_RX_PCB_DATA_P_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FIRST_ERR_REG_RX_PCB_DATA_P_ERR]

//>> SET_[FIRST_ERR_REG_PIB_ADDR_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_FIRST_ERR_REG_PIB_ADDR_P_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return o_data.insertFromRight<FIRST_ERR_REG_PIB_ADDR_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FIRST_ERR_REG_PIB_ADDR_P_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FIRST_ERR_REG_PIB_ADDR_P_ERR]

//>> SET_[FIRST_ERR_REG_PIB_ADDR_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_FIRST_ERR_REG_PIB_ADDR_P_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return o_data.insertFromRight<FIRST_ERR_REG_PIB_ADDR_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FIRST_ERR_REG_PIB_ADDR_P_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FIRST_ERR_REG_PIB_ADDR_P_ERR]

//>> SET_[FIRST_ERR_REG_PIB_ADDR_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_FIRST_ERR_REG_PIB_ADDR_P_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return o_data.setBit<FIRST_ERR_REG_PIB_ADDR_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FIRST_ERR_REG_PIB_ADDR_P_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FIRST_ERR_REG_PIB_ADDR_P_ERR]

//>> CLEAR_[FIRST_ERR_REG_PIB_ADDR_P_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_FIRST_ERR_REG_PIB_ADDR_P_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return o_data.clearBit<FIRST_ERR_REG_PIB_ADDR_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FIRST_ERR_REG_PIB_ADDR_P_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FIRST_ERR_REG_PIB_ADDR_P_ERR]

//>> GET_[FIRST_ERR_REG_PIB_ADDR_P_ERR]
static inline fapi2::buffer<uint64_t>& GET_FIRST_ERR_REG_PIB_ADDR_P_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return i_data.extractToRight<FIRST_ERR_REG_PIB_ADDR_P_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FIRST_ERR_REG_PIB_ADDR_P_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FIRST_ERR_REG_PIB_ADDR_P_ERR]

//>> GET_[FIRST_ERR_REG_PIB_ADDR_P_ERR]
static inline bool GET_FIRST_ERR_REG_PIB_ADDR_P_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return i_data.getBit<FIRST_ERR_REG_PIB_ADDR_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FIRST_ERR_REG_PIB_ADDR_P_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FIRST_ERR_REG_PIB_ADDR_P_ERR]

//>> SET_[FIRST_ERR_REG_PIB_DATA_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_FIRST_ERR_REG_PIB_DATA_P_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return o_data.insertFromRight<FIRST_ERR_REG_PIB_DATA_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FIRST_ERR_REG_PIB_DATA_P_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FIRST_ERR_REG_PIB_DATA_P_ERR]

//>> SET_[FIRST_ERR_REG_PIB_DATA_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_FIRST_ERR_REG_PIB_DATA_P_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return o_data.insertFromRight<FIRST_ERR_REG_PIB_DATA_P_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FIRST_ERR_REG_PIB_DATA_P_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FIRST_ERR_REG_PIB_DATA_P_ERR]

//>> SET_[FIRST_ERR_REG_PIB_DATA_P_ERR]
static inline fapi2::buffer<uint64_t>& SET_FIRST_ERR_REG_PIB_DATA_P_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return o_data.setBit<FIRST_ERR_REG_PIB_DATA_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FIRST_ERR_REG_PIB_DATA_P_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FIRST_ERR_REG_PIB_DATA_P_ERR]

//>> CLEAR_[FIRST_ERR_REG_PIB_DATA_P_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_FIRST_ERR_REG_PIB_DATA_P_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return o_data.clearBit<FIRST_ERR_REG_PIB_DATA_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FIRST_ERR_REG_PIB_DATA_P_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FIRST_ERR_REG_PIB_DATA_P_ERR]

//>> GET_[FIRST_ERR_REG_PIB_DATA_P_ERR]
static inline fapi2::buffer<uint64_t>& GET_FIRST_ERR_REG_PIB_DATA_P_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return i_data.extractToRight<FIRST_ERR_REG_PIB_DATA_P_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FIRST_ERR_REG_PIB_DATA_P_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FIRST_ERR_REG_PIB_DATA_P_ERR]

//>> GET_[FIRST_ERR_REG_PIB_DATA_P_ERR]
static inline bool GET_FIRST_ERR_REG_PIB_DATA_P_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FIRST_ERR_REG));
#endif
    return i_data.getBit<FIRST_ERR_REG_PIB_DATA_P_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FIRST_ERR_REG_PIB_DATA_P_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FIRST_ERR_REG_PIB_DATA_P_ERR]

//>> PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI]

//>> GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_1_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_1_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_1_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1A_DATA_AREA_1_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_1_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_1_RW]

//>> GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_1_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1A_DATA_AREA_1_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_1_RW;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_1_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_1_RW]

//>> PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_1_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1A_DATA_AREA_1_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_1_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_1_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_1_RW]


//>> SET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_1_MDA_M1A_DATA_AREA_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1A_DATA_AREA_1_MDA_M1A_DATA_AREA_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_1_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1A_DATA_AREA_1_MDA_M1A_DATA_AREA_1,
           FSXCOMP_FSXLOG_M1A_DATA_AREA_1_MDA_M1A_DATA_AREA_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1A_DATA_AREA_1_MDA_M1A_DATA_AREA_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_1_MDA_M1A_DATA_AREA_1]

//>> SET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_1_MDA_M1A_DATA_AREA_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1A_DATA_AREA_1_MDA_M1A_DATA_AREA_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_1_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1A_DATA_AREA_1_MDA_M1A_DATA_AREA_1,
           FSXCOMP_FSXLOG_M1A_DATA_AREA_1_MDA_M1A_DATA_AREA_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1A_DATA_AREA_1_MDA_M1A_DATA_AREA_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_1_MDA_M1A_DATA_AREA_1]

//>> GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_1_MDA_M1A_DATA_AREA_1]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M1A_DATA_AREA_1_MDA_M1A_DATA_AREA_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_1_RW));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M1A_DATA_AREA_1_MDA_M1A_DATA_AREA_1,
           FSXCOMP_FSXLOG_M1A_DATA_AREA_1_MDA_M1A_DATA_AREA_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1A_DATA_AREA_1_MDA_M1A_DATA_AREA_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_1_MDA_M1A_DATA_AREA_1]

//>> PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_12_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_12_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_12_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2A_DATA_AREA_12_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_12_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_12_RW]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_12_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_12_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_12_RW;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_12_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_12_RW]

//>> PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_12_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2A_DATA_AREA_12_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_12_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_12_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_12_RW]


//>> SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_12_MDA_M2A_DATA_AREA_12]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2A_DATA_AREA_12_MDA_M2A_DATA_AREA_12(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_12_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2A_DATA_AREA_12_MDA_M2A_DATA_AREA_12,
           FSXCOMP_FSXLOG_M2A_DATA_AREA_12_MDA_M2A_DATA_AREA_12_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2A_DATA_AREA_12_MDA_M2A_DATA_AREA_12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_12_MDA_M2A_DATA_AREA_12]

//>> SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_12_MDA_M2A_DATA_AREA_12]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2A_DATA_AREA_12_MDA_M2A_DATA_AREA_12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_12_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2A_DATA_AREA_12_MDA_M2A_DATA_AREA_12,
           FSXCOMP_FSXLOG_M2A_DATA_AREA_12_MDA_M2A_DATA_AREA_12_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2A_DATA_AREA_12_MDA_M2A_DATA_AREA_12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_12_MDA_M2A_DATA_AREA_12]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_12_MDA_M2A_DATA_AREA_12]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_12_MDA_M2A_DATA_AREA_12(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_12_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_12_RW));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M2A_DATA_AREA_12_MDA_M2A_DATA_AREA_12,
           FSXCOMP_FSXLOG_M2A_DATA_AREA_12_MDA_M2A_DATA_AREA_12_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2A_DATA_AREA_12_MDA_M2A_DATA_AREA_12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_12_MDA_M2A_DATA_AREA_12]

//>> PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_7_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_7_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI_BYTE]

//>> SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_7_MDA_M2B_DATA_AREA_7]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2B_DATA_AREA_7_MDA_M2B_DATA_AREA_7(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_7_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2B_DATA_AREA_7_MDA_M2B_DATA_AREA_7,
           FSXCOMP_FSXLOG_M2B_DATA_AREA_7_MDA_M2B_DATA_AREA_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2B_DATA_AREA_7_MDA_M2B_DATA_AREA_7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_7_MDA_M2B_DATA_AREA_7]

//>> SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_7_MDA_M2B_DATA_AREA_7]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2B_DATA_AREA_7_MDA_M2B_DATA_AREA_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_7_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2B_DATA_AREA_7_MDA_M2B_DATA_AREA_7,
           FSXCOMP_FSXLOG_M2B_DATA_AREA_7_MDA_M2B_DATA_AREA_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2B_DATA_AREA_7_MDA_M2B_DATA_AREA_7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_7_MDA_M2B_DATA_AREA_7]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_7_MDA_M2B_DATA_AREA_7]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_7_MDA_M2B_DATA_AREA_7(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_7_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_7_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M2B_DATA_AREA_7_MDA_M2B_DATA_AREA_7,
           FSXCOMP_FSXLOG_M2B_DATA_AREA_7_MDA_M2B_DATA_AREA_7_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2B_DATA_AREA_7_MDA_M2B_DATA_AREA_7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_7_MDA_M2B_DATA_AREA_7]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_RO(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_RO]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_RO]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_RO]


//>> SET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_M1HC1B_MAILBOX_1_HEADER_COMMAND_B]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_M1HC1B_MAILBOX_1_HEADER_COMMAND_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_M1HC1B_MAILBOX_1_HEADER_COMMAND_B,
           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_M1HC1B_MAILBOX_1_HEADER_COMMAND_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_M1HC1B_MAILBOX_1_HEADER_COMMAND_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_M1HC1B_MAILBOX_1_HEADER_COMMAND_B]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_M1HC1B_MAILBOX_1_HEADER_COMMAND_B]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_M1HC1B_MAILBOX_1_HEADER_COMMAND_B(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_M1HC1B_MAILBOX_1_HEADER_COMMAND_B,
           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_M1HC1B_MAILBOX_1_HEADER_COMMAND_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_M1HC1B_MAILBOX_1_HEADER_COMMAND_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_M1HC1B_MAILBOX_1_HEADER_COMMAND_B]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_M1HC1B_MAILBOX_1_HEADER_COMMAND_B]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_M1HC1B_MAILBOX_1_HEADER_COMMAND_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_M1HC1B_MAILBOX_1_HEADER_COMMAND_B,
           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_M1HC1B_MAILBOX_1_HEADER_COMMAND_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_M1HC1B_MAILBOX_1_HEADER_COMMAND_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_B_M1HC1B_MAILBOX_1_HEADER_COMMAND_B]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_RW(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_RW]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_RW(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_RW;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_RW]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_RW(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_RW]


//>> SET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_M2HC1A_MAILBOX_2_HEADER_COMMAND_1_A]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_M2HC1A_MAILBOX_2_HEADER_COMMAND_1_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_M2HC1A_MAILBOX_2_HEADER_COMMAND_1_A,
           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_M2HC1A_MAILBOX_2_HEADER_COMMAND_1_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_M2HC1A_MAILBOX_2_HEADER_COMMAND_1_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_M2HC1A_MAILBOX_2_HEADER_COMMAND_1_A]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_M2HC1A_MAILBOX_2_HEADER_COMMAND_1_A]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_M2HC1A_MAILBOX_2_HEADER_COMMAND_1_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_M2HC1A_MAILBOX_2_HEADER_COMMAND_1_A,
           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_M2HC1A_MAILBOX_2_HEADER_COMMAND_1_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_M2HC1A_MAILBOX_2_HEADER_COMMAND_1_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_M2HC1A_MAILBOX_2_HEADER_COMMAND_1_A]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_M2HC1A_MAILBOX_2_HEADER_COMMAND_1_A]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_M2HC1A_MAILBOX_2_HEADER_COMMAND_1_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_RW));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_M2HC1A_MAILBOX_2_HEADER_COMMAND_1_A,
           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_M2HC1A_MAILBOX_2_HEADER_COMMAND_1_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_M2HC1A_MAILBOX_2_HEADER_COMMAND_1_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_1_A_M2HC1A_MAILBOX_2_HEADER_COMMAND_1_A]

//>> PREP_[FSXCOMP_FSXLOG_ROOT_CTRL4_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_ROOT_CTRL4_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_ROOT_CTRL4_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_ROOT_CTRL4_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL4_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_ROOT_CTRL4_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_ROOT_CTRL4_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_ROOT_CTRL4_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL4_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_ROOT_CTRL4_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_ROOT_CTRL4_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL4_FSI, FSXCOMP_FSXLOG_ROOT_CTRL4_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL4_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_ROOT_CTRL4_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_ROOT_CTRL4_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_ROOT_CTRL4_COPY_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_ROOT_CTRL4_COPY_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_ROOT_CTRL4_COPY_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_ROOT_CTRL4_COPY_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL4_COPY_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_ROOT_CTRL4_COPY_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_ROOT_CTRL4_COPY_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_ROOT_CTRL4_COPY_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL4_COPY_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_ROOT_CTRL4_COPY_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_ROOT_CTRL4_COPY_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL4_COPY_FSI, FSXCOMP_FSXLOG_ROOT_CTRL4_COPY_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL4_COPY_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_ROOT_CTRL4_COPY_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_ROOT_CTRL4_COPY_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_ROOT_CTRL4_COPY_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_ROOT_CTRL4_COPY_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_ROOT_CTRL4_COPY_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_ROOT_CTRL4_COPY_RW]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL4_COPY_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_ROOT_CTRL4_COPY_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_ROOT_CTRL4_COPY_RW;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_ROOT_CTRL4_COPY_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL4_COPY_RW]

//>> PUT_[FSXCOMP_FSXLOG_ROOT_CTRL4_COPY_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_ROOT_CTRL4_COPY_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL4_COPY_FSI, FSXCOMP_FSXLOG_ROOT_CTRL4_COPY_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL4_COPY_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_ROOT_CTRL4_COPY_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_ROOT_CTRL4_COPY_RW]


//>> PREP_[L3TRA0_TR1_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA0_TR1_CONFIG_1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA0_TR1_CONFIG_1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA0_TR1_CONFIG_1]

//>> GET_[L3TRA0_TR1_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA0_TR1_CONFIG_1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA0_TR1_CONFIG_1;
#endif
    return fapi2::getScom(i_target, L3TRA0_TR1_CONFIG_1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_1]

//>> PUT_[L3TRA0_TR1_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA0_TR1_CONFIG_1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_1));
#endif
    return fapi2::putScom(i_target, L3TRA0_TR1_CONFIG_1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA0_TR1_CONFIG_1]


//>> SET_[L3TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_1));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           L3TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> SET_[L3TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_1));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           L3TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> GET_[L3TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_1));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           L3TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> PREP_[L3TRA1_TR0_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA1_TR0_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR0_TRACE_LO_DATA_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA1_TR0_TRACE_LO_DATA_REG]

//>> GET_[L3TRA1_TR0_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA1_TR0_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR0_TRACE_LO_DATA_REG;
#endif
    return fapi2::getScom(i_target, L3TRA1_TR0_TRACE_LO_DATA_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA1_TR0_TRACE_LO_DATA_REG]

//>> PUT_[L3TRA1_TR0_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA1_TR0_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return fapi2::putScom(i_target, L3TRA1_TR0_TRACE_LO_DATA_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA1_TR0_TRACE_LO_DATA_REG]


//>> SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA,
           L3TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA]

//>> SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA,
           L3TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA]

//>> GET_[L3TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA,
           L3TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_TRACE_LO_DATA_REG_LO_DATA]

//>> SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS,
           L3TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS]

//>> SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS,
           L3TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS]

//>> GET_[L3TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS,
           L3TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_TRACE_LO_DATA_REG_ADDRESS]

//>> SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK,
           L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK]

//>> SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK,
           L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK]

//>> GET_[L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK,
           L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK]

//>> SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> CLEAR_[L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> GET_[L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> GET_[L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline bool GET_L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<L3TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> CLEAR_[L3TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<L3TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> GET_[L3TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> GET_[L3TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline bool GET_L3TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<L3TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_TRACE_LO_DATA_REG_RUNNING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_TRACE_LO_DATA_REG_RUNNING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_TRACE_LO_DATA_REG_RUNNING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<L3TRA1_TR0_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> CLEAR_[L3TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR0_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<L3TRA1_TR0_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> GET_[L3TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA1_TR0_TRACE_LO_DATA_REG_RUNNING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> GET_[L3TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline bool GET_L3TRA1_TR0_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<L3TRA1_TR0_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           L3TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           L3TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> GET_[L3TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           L3TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> PREP_[L3TRA2_TR0_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA2_TR0_CONFIG_0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA2_TR0_CONFIG_0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA2_TR0_CONFIG_0]

//>> GET_[L3TRA2_TR0_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA2_TR0_CONFIG_0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA2_TR0_CONFIG_0;
#endif
    return fapi2::getScom(i_target, L3TRA2_TR0_CONFIG_0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_0]

//>> PUT_[L3TRA2_TR0_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA2_TR0_CONFIG_0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_0));
#endif
    return fapi2::putScom(i_target, L3TRA2_TR0_CONFIG_0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA2_TR0_CONFIG_0]


//>> SET_[L3TRA2_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_0));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           L3TRA2_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> SET_[L3TRA2_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_0));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           L3TRA2_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> GET_[L3TRA2_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_0));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           L3TRA2_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> PREP_[L3TRA2_TR1_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA2_TR1_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA2_TR1_TRACE_HI_DATA_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA2_TR1_TRACE_HI_DATA_REG]

//>> GET_[L3TRA2_TR1_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA2_TR1_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA2_TR1_TRACE_HI_DATA_REG;
#endif
    return fapi2::getScom(i_target, L3TRA2_TR1_TRACE_HI_DATA_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA2_TR1_TRACE_HI_DATA_REG]

//>> PUT_[L3TRA2_TR1_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA2_TR1_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_HI_DATA_REG));
#endif
    return fapi2::putScom(i_target, L3TRA2_TR1_TRACE_HI_DATA_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA2_TR1_TRACE_HI_DATA_REG]


//>> SET_[L3TRA2_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_HI_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           L3TRA2_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> SET_[L3TRA2_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_HI_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           L3TRA2_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> GET_[L3TRA2_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_HI_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA2_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           L3TRA2_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> PREP_[L3TRA2_TR1_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA2_TR1_CONFIG_9(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA2_TR1_CONFIG_9;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA2_TR1_CONFIG_9]

//>> GET_[L3TRA2_TR1_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA2_TR1_CONFIG_9(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA2_TR1_CONFIG_9;
#endif
    return fapi2::getScom(i_target, L3TRA2_TR1_CONFIG_9, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_9]

//>> PUT_[L3TRA2_TR1_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA2_TR1_CONFIG_9(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return fapi2::putScom(i_target, L3TRA2_TR1_CONFIG_9, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA2_TR1_CONFIG_9]


//>> SET_[L3TRA2_TR1_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_DISABLE_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[L3TRA2_TR1_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_DISABLE_COMPRESSION(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_DISABLE_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[L3TRA2_TR1_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.setBit<L3TRA2_TR1_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_DISABLE_COMPRESSION]

//>> CLEAR_[L3TRA2_TR1_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR1_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA2_TR1_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR1_CONFIG_9_DISABLE_COMPRESSION]

//>> GET_[L3TRA2_TR1_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR1_CONFIG_9_DISABLE_COMPRESSION,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_9_DISABLE_COMPRESSION]

//>> GET_[L3TRA2_TR1_CONFIG_9_DISABLE_COMPRESSION]
static inline bool GET_L3TRA2_TR1_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return i_data.getBit<L3TRA2_TR1_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[L3TRA2_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[L3TRA2_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[L3TRA2_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.setBit<L3TRA2_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> CLEAR_[L3TRA2_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA2_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> GET_[L3TRA2_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> GET_[L3TRA2_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline bool GET_L3TRA2_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return i_data.getBit<L3TRA2_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[L3TRA2_TR1_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_MATCHA_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_MATCHA_MUXSEL,
           L3TRA2_TR1_CONFIG_9_MATCHA_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_MATCHA_MUXSEL]

//>> SET_[L3TRA2_TR1_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_MATCHA_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_MATCHA_MUXSEL,
           L3TRA2_TR1_CONFIG_9_MATCHA_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_MATCHA_MUXSEL]

//>> GET_[L3TRA2_TR1_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_CONFIG_9_MATCHA_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR1_CONFIG_9_MATCHA_MUXSEL,
           L3TRA2_TR1_CONFIG_9_MATCHA_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_9_MATCHA_MUXSEL]

//>> SET_[L3TRA2_TR1_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_MATCHB_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_MATCHB_MUXSEL,
           L3TRA2_TR1_CONFIG_9_MATCHB_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_MATCHB_MUXSEL]

//>> SET_[L3TRA2_TR1_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_MATCHB_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_MATCHB_MUXSEL,
           L3TRA2_TR1_CONFIG_9_MATCHB_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_MATCHB_MUXSEL]

//>> GET_[L3TRA2_TR1_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_CONFIG_9_MATCHB_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR1_CONFIG_9_MATCHB_MUXSEL,
           L3TRA2_TR1_CONFIG_9_MATCHB_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_9_MATCHB_MUXSEL]

//>> SET_[L3TRA2_TR1_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_MATCHC_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_MATCHC_MUXSEL,
           L3TRA2_TR1_CONFIG_9_MATCHC_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_MATCHC_MUXSEL]

//>> SET_[L3TRA2_TR1_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_MATCHC_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_MATCHC_MUXSEL,
           L3TRA2_TR1_CONFIG_9_MATCHC_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_MATCHC_MUXSEL]

//>> GET_[L3TRA2_TR1_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_CONFIG_9_MATCHC_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR1_CONFIG_9_MATCHC_MUXSEL,
           L3TRA2_TR1_CONFIG_9_MATCHC_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_9_MATCHC_MUXSEL]

//>> SET_[L3TRA2_TR1_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_MATCHD_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_MATCHD_MUXSEL,
           L3TRA2_TR1_CONFIG_9_MATCHD_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_MATCHD_MUXSEL]

//>> SET_[L3TRA2_TR1_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_MATCHD_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_MATCHD_MUXSEL,
           L3TRA2_TR1_CONFIG_9_MATCHD_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_MATCHD_MUXSEL]

//>> GET_[L3TRA2_TR1_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_CONFIG_9_MATCHD_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR1_CONFIG_9_MATCHD_MUXSEL,
           L3TRA2_TR1_CONFIG_9_MATCHD_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_9_MATCHD_MUXSEL]

//>> SET_[L3TRA2_TR1_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_TRIG0_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_TRIG0_OR_MASK,
           L3TRA2_TR1_CONFIG_9_TRIG0_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_TRIG0_OR_MASK]

//>> SET_[L3TRA2_TR1_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_TRIG0_OR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_TRIG0_OR_MASK,
           L3TRA2_TR1_CONFIG_9_TRIG0_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_TRIG0_OR_MASK]

//>> GET_[L3TRA2_TR1_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_CONFIG_9_TRIG0_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR1_CONFIG_9_TRIG0_OR_MASK,
           L3TRA2_TR1_CONFIG_9_TRIG0_OR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_9_TRIG0_OR_MASK]

//>> SET_[L3TRA2_TR1_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_TRIG0_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_TRIG0_AND_MASK,
           L3TRA2_TR1_CONFIG_9_TRIG0_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_TRIG0_AND_MASK]

//>> SET_[L3TRA2_TR1_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_TRIG0_AND_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_TRIG0_AND_MASK,
           L3TRA2_TR1_CONFIG_9_TRIG0_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_TRIG0_AND_MASK]

//>> GET_[L3TRA2_TR1_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_CONFIG_9_TRIG0_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR1_CONFIG_9_TRIG0_AND_MASK,
           L3TRA2_TR1_CONFIG_9_TRIG0_AND_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_9_TRIG0_AND_MASK]

//>> SET_[L3TRA2_TR1_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_TRIG1_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_TRIG1_OR_MASK,
           L3TRA2_TR1_CONFIG_9_TRIG1_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_TRIG1_OR_MASK]

//>> SET_[L3TRA2_TR1_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_TRIG1_OR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_TRIG1_OR_MASK,
           L3TRA2_TR1_CONFIG_9_TRIG1_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_TRIG1_OR_MASK]

//>> GET_[L3TRA2_TR1_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_CONFIG_9_TRIG1_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR1_CONFIG_9_TRIG1_OR_MASK,
           L3TRA2_TR1_CONFIG_9_TRIG1_OR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_9_TRIG1_OR_MASK]

//>> SET_[L3TRA2_TR1_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_TRIG1_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_TRIG1_AND_MASK,
           L3TRA2_TR1_CONFIG_9_TRIG1_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_TRIG1_AND_MASK]

//>> SET_[L3TRA2_TR1_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_TRIG1_AND_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_TRIG1_AND_MASK,
           L3TRA2_TR1_CONFIG_9_TRIG1_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_TRIG1_AND_MASK]

//>> GET_[L3TRA2_TR1_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_CONFIG_9_TRIG1_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR1_CONFIG_9_TRIG1_AND_MASK,
           L3TRA2_TR1_CONFIG_9_TRIG1_AND_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_9_TRIG1_AND_MASK]

//>> SET_[L3TRA2_TR1_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_TRIG0_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[L3TRA2_TR1_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_TRIG0_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_TRIG0_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[L3TRA2_TR1_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.setBit<L3TRA2_TR1_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_TRIG0_NOT_MODE]

//>> CLEAR_[L3TRA2_TR1_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR1_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA2_TR1_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR1_CONFIG_9_TRIG0_NOT_MODE]

//>> GET_[L3TRA2_TR1_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR1_CONFIG_9_TRIG0_NOT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_9_TRIG0_NOT_MODE]

//>> GET_[L3TRA2_TR1_CONFIG_9_TRIG0_NOT_MODE]
static inline bool GET_L3TRA2_TR1_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return i_data.getBit<L3TRA2_TR1_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[L3TRA2_TR1_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_TRIG1_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[L3TRA2_TR1_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_TRIG1_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_TRIG1_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[L3TRA2_TR1_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.setBit<L3TRA2_TR1_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_TRIG1_NOT_MODE]

//>> CLEAR_[L3TRA2_TR1_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR1_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA2_TR1_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR1_CONFIG_9_TRIG1_NOT_MODE]

//>> GET_[L3TRA2_TR1_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR1_CONFIG_9_TRIG1_NOT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_9_TRIG1_NOT_MODE]

//>> GET_[L3TRA2_TR1_CONFIG_9_TRIG1_NOT_MODE]
static inline bool GET_L3TRA2_TR1_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return i_data.getBit<L3TRA2_TR1_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[L3TRA2_TR1_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_MATCH_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_MATCH_NOT_MODE,
           L3TRA2_TR1_CONFIG_9_MATCH_NOT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_MATCH_NOT_MODE]

//>> SET_[L3TRA2_TR1_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_MATCH_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_MATCH_NOT_MODE,
           L3TRA2_TR1_CONFIG_9_MATCH_NOT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_MATCH_NOT_MODE]

//>> GET_[L3TRA2_TR1_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_CONFIG_9_MATCH_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR1_CONFIG_9_MATCH_NOT_MODE,
           L3TRA2_TR1_CONFIG_9_MATCH_NOT_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_9_MATCH_NOT_MODE]

//>> SET_[L3TRA2_TR1_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_ERROR_CMP_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[L3TRA2_TR1_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_ERROR_CMP_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_ERROR_CMP_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[L3TRA2_TR1_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.setBit<L3TRA2_TR1_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_ERROR_CMP_MASK]

//>> CLEAR_[L3TRA2_TR1_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR1_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA2_TR1_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR1_CONFIG_9_ERROR_CMP_MASK]

//>> GET_[L3TRA2_TR1_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR1_CONFIG_9_ERROR_CMP_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_9_ERROR_CMP_MASK]

//>> GET_[L3TRA2_TR1_CONFIG_9_ERROR_CMP_MASK]
static inline bool GET_L3TRA2_TR1_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return i_data.getBit<L3TRA2_TR1_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[L3TRA2_TR1_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_ERROR_CMP_PATTERN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[L3TRA2_TR1_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_ERROR_CMP_PATTERN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_ERROR_CMP_PATTERN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[L3TRA2_TR1_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.setBit<L3TRA2_TR1_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_ERROR_CMP_PATTERN]

//>> CLEAR_[L3TRA2_TR1_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR1_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA2_TR1_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR1_CONFIG_9_ERROR_CMP_PATTERN]

//>> GET_[L3TRA2_TR1_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR1_CONFIG_9_ERROR_CMP_PATTERN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_9_ERROR_CMP_PATTERN]

//>> GET_[L3TRA2_TR1_CONFIG_9_ERROR_CMP_PATTERN]
static inline bool GET_L3TRA2_TR1_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return i_data.getBit<L3TRA2_TR1_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[L3TRA2_TR1_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_TRIG0_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[L3TRA2_TR1_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_TRIG0_ERR_CMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_TRIG0_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[L3TRA2_TR1_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.setBit<L3TRA2_TR1_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_TRIG0_ERR_CMP]

//>> CLEAR_[L3TRA2_TR1_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR1_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA2_TR1_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR1_CONFIG_9_TRIG0_ERR_CMP]

//>> GET_[L3TRA2_TR1_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR1_CONFIG_9_TRIG0_ERR_CMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_9_TRIG0_ERR_CMP]

//>> GET_[L3TRA2_TR1_CONFIG_9_TRIG0_ERR_CMP]
static inline bool GET_L3TRA2_TR1_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return i_data.getBit<L3TRA2_TR1_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[L3TRA2_TR1_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_TRIG1_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[L3TRA2_TR1_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_TRIG1_ERR_CMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_TRIG1_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[L3TRA2_TR1_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.setBit<L3TRA2_TR1_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_TRIG1_ERR_CMP]

//>> CLEAR_[L3TRA2_TR1_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR1_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA2_TR1_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR1_CONFIG_9_TRIG1_ERR_CMP]

//>> GET_[L3TRA2_TR1_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR1_CONFIG_9_TRIG1_ERR_CMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_9_TRIG1_ERR_CMP]

//>> GET_[L3TRA2_TR1_CONFIG_9_TRIG1_ERR_CMP]
static inline bool GET_L3TRA2_TR1_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return i_data.getBit<L3TRA2_TR1_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[L3TRA2_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[L3TRA2_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[L3TRA2_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.setBit<L3TRA2_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> CLEAR_[L3TRA2_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA2_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> GET_[L3TRA2_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> GET_[L3TRA2_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline bool GET_L3TRA2_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return i_data.getBit<L3TRA2_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[L3TRA2_TR1_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_SPARE_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_SPARE_LT]

//>> SET_[L3TRA2_TR1_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_SPARE_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_9_SPARE_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_SPARE_LT]

//>> SET_[L3TRA2_TR1_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.setBit<L3TRA2_TR1_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_9_SPARE_LT]

//>> CLEAR_[L3TRA2_TR1_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR1_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA2_TR1_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR1_CONFIG_9_SPARE_LT]

//>> GET_[L3TRA2_TR1_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR1_CONFIG_9_SPARE_LT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_9_SPARE_LT]

//>> GET_[L3TRA2_TR1_CONFIG_9_SPARE_LT]
static inline bool GET_L3TRA2_TR1_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_9));
#endif
    return i_data.getBit<L3TRA2_TR1_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_9_SPARE_LT]

//>> PREP_[LOCAL_FIR_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_LOCAL_FIR_WO_AND(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = LOCAL_FIR_WO_AND;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[LOCAL_FIR_WO_AND]

//>> GET_[LOCAL_FIR_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_LOCAL_FIR_WO_AND(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = LOCAL_FIR_WO_AND;
#endif
    return fapi2::getScom(i_target, LOCAL_FIR_WO_AND, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[LOCAL_FIR_WO_AND]

//>> PUT_[LOCAL_FIR_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_LOCAL_FIR_WO_AND(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(LOCAL_FIR_RW, LOCAL_FIR_WO_AND, LOCAL_FIR_WO_OR));
#endif
    return fapi2::putScom(i_target, LOCAL_FIR_WO_AND, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[LOCAL_FIR_WO_AND]

//>> PREP_[LOCAL_FIR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_LOCAL_FIR_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = LOCAL_FIR_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[LOCAL_FIR_WO_OR]

//>> GET_[LOCAL_FIR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_LOCAL_FIR_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = LOCAL_FIR_WO_OR;
#endif
    return fapi2::getScom(i_target, LOCAL_FIR_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[LOCAL_FIR_WO_OR]

//>> PUT_[LOCAL_FIR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_LOCAL_FIR_WO_OR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(LOCAL_FIR_RW, LOCAL_FIR_WO_AND, LOCAL_FIR_WO_OR));
#endif
    return fapi2::putScom(i_target, LOCAL_FIR_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[LOCAL_FIR_WO_OR]


//>> PREP_[MCAST_GRP_1_SLAVES_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_MCAST_GRP_1_SLAVES_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MCAST_GRP_1_SLAVES_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[MCAST_GRP_1_SLAVES_REG]

//>> GET_[MCAST_GRP_1_SLAVES_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_MCAST_GRP_1_SLAVES_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MCAST_GRP_1_SLAVES_REG;
#endif
    return fapi2::getScom(i_target, MCAST_GRP_1_SLAVES_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[MCAST_GRP_1_SLAVES_REG]

//>> PUT_[MCAST_GRP_1_SLAVES_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_MCAST_GRP_1_SLAVES_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(MCAST_GRP_1_SLAVES_REG));
#endif
    return fapi2::putScom(i_target, MCAST_GRP_1_SLAVES_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[MCAST_GRP_1_SLAVES_REG]


//>> SET_[MCAST_GRP_1_SLAVES_REG_SLAVES_MCAST_GROUP_1]
static inline fapi2::buffer<uint64_t>& SET_MCAST_GRP_1_SLAVES_REG_SLAVES_MCAST_GROUP_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MCAST_GRP_1_SLAVES_REG));
#endif
    return o_data.insertFromRight<MCAST_GRP_1_SLAVES_REG_SLAVES_MCAST_GROUP_1,
           MCAST_GRP_1_SLAVES_REG_SLAVES_MCAST_GROUP_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access MCAST_GRP_1_SLAVES_REG_SLAVES_MCAST_GROUP_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[MCAST_GRP_1_SLAVES_REG_SLAVES_MCAST_GROUP_1]

//>> SET_[MCAST_GRP_1_SLAVES_REG_SLAVES_MCAST_GROUP_1]
static inline fapi2::buffer<uint64_t>& SET_MCAST_GRP_1_SLAVES_REG_SLAVES_MCAST_GROUP_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MCAST_GRP_1_SLAVES_REG));
#endif
    return o_data.insertFromRight<MCAST_GRP_1_SLAVES_REG_SLAVES_MCAST_GROUP_1,
           MCAST_GRP_1_SLAVES_REG_SLAVES_MCAST_GROUP_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access MCAST_GRP_1_SLAVES_REG_SLAVES_MCAST_GROUP_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[MCAST_GRP_1_SLAVES_REG_SLAVES_MCAST_GROUP_1]

//>> GET_[MCAST_GRP_1_SLAVES_REG_SLAVES_MCAST_GROUP_1]
static inline fapi2::buffer<uint64_t>& GET_MCAST_GRP_1_SLAVES_REG_SLAVES_MCAST_GROUP_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MCAST_GRP_1_SLAVES_REG));
#endif
    return i_data.extractToRight<MCAST_GRP_1_SLAVES_REG_SLAVES_MCAST_GROUP_1,
           MCAST_GRP_1_SLAVES_REG_SLAVES_MCAST_GROUP_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access MCAST_GRP_1_SLAVES_REG_SLAVES_MCAST_GROUP_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[MCAST_GRP_1_SLAVES_REG_SLAVES_MCAST_GROUP_1]

//>> PREP_[MCAST_GRP_2_SLAVES_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_MCAST_GRP_2_SLAVES_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MCAST_GRP_2_SLAVES_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[MCAST_GRP_2_SLAVES_REG]

//>> GET_[MCAST_GRP_2_SLAVES_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_MCAST_GRP_2_SLAVES_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MCAST_GRP_2_SLAVES_REG;
#endif
    return fapi2::getScom(i_target, MCAST_GRP_2_SLAVES_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[MCAST_GRP_2_SLAVES_REG]

//>> PUT_[MCAST_GRP_2_SLAVES_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_MCAST_GRP_2_SLAVES_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(MCAST_GRP_2_SLAVES_REG));
#endif
    return fapi2::putScom(i_target, MCAST_GRP_2_SLAVES_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[MCAST_GRP_2_SLAVES_REG]


//>> SET_[MCAST_GRP_2_SLAVES_REG_SLAVES_MCAST_GROUP_2]
static inline fapi2::buffer<uint64_t>& SET_MCAST_GRP_2_SLAVES_REG_SLAVES_MCAST_GROUP_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MCAST_GRP_2_SLAVES_REG));
#endif
    return o_data.insertFromRight<MCAST_GRP_2_SLAVES_REG_SLAVES_MCAST_GROUP_2,
           MCAST_GRP_2_SLAVES_REG_SLAVES_MCAST_GROUP_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access MCAST_GRP_2_SLAVES_REG_SLAVES_MCAST_GROUP_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[MCAST_GRP_2_SLAVES_REG_SLAVES_MCAST_GROUP_2]

//>> SET_[MCAST_GRP_2_SLAVES_REG_SLAVES_MCAST_GROUP_2]
static inline fapi2::buffer<uint64_t>& SET_MCAST_GRP_2_SLAVES_REG_SLAVES_MCAST_GROUP_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MCAST_GRP_2_SLAVES_REG));
#endif
    return o_data.insertFromRight<MCAST_GRP_2_SLAVES_REG_SLAVES_MCAST_GROUP_2,
           MCAST_GRP_2_SLAVES_REG_SLAVES_MCAST_GROUP_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access MCAST_GRP_2_SLAVES_REG_SLAVES_MCAST_GROUP_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[MCAST_GRP_2_SLAVES_REG_SLAVES_MCAST_GROUP_2]

//>> GET_[MCAST_GRP_2_SLAVES_REG_SLAVES_MCAST_GROUP_2]
static inline fapi2::buffer<uint64_t>& GET_MCAST_GRP_2_SLAVES_REG_SLAVES_MCAST_GROUP_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MCAST_GRP_2_SLAVES_REG));
#endif
    return i_data.extractToRight<MCAST_GRP_2_SLAVES_REG_SLAVES_MCAST_GROUP_2,
           MCAST_GRP_2_SLAVES_REG_SLAVES_MCAST_GROUP_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access MCAST_GRP_2_SLAVES_REG_SLAVES_MCAST_GROUP_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[MCAST_GRP_2_SLAVES_REG_SLAVES_MCAST_GROUP_2]

//>> PREP_[MCAST_GRP_4_SLAVES_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_MCAST_GRP_4_SLAVES_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MCAST_GRP_4_SLAVES_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[MCAST_GRP_4_SLAVES_REG]

//>> GET_[MCAST_GRP_4_SLAVES_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_MCAST_GRP_4_SLAVES_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MCAST_GRP_4_SLAVES_REG;
#endif
    return fapi2::getScom(i_target, MCAST_GRP_4_SLAVES_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[MCAST_GRP_4_SLAVES_REG]

//>> PUT_[MCAST_GRP_4_SLAVES_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_MCAST_GRP_4_SLAVES_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(MCAST_GRP_4_SLAVES_REG));
#endif
    return fapi2::putScom(i_target, MCAST_GRP_4_SLAVES_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[MCAST_GRP_4_SLAVES_REG]


//>> SET_[MCAST_GRP_4_SLAVES_REG_SLAVES_MCAST_GROUP_4]
static inline fapi2::buffer<uint64_t>& SET_MCAST_GRP_4_SLAVES_REG_SLAVES_MCAST_GROUP_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MCAST_GRP_4_SLAVES_REG));
#endif
    return o_data.insertFromRight<MCAST_GRP_4_SLAVES_REG_SLAVES_MCAST_GROUP_4,
           MCAST_GRP_4_SLAVES_REG_SLAVES_MCAST_GROUP_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access MCAST_GRP_4_SLAVES_REG_SLAVES_MCAST_GROUP_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[MCAST_GRP_4_SLAVES_REG_SLAVES_MCAST_GROUP_4]

//>> SET_[MCAST_GRP_4_SLAVES_REG_SLAVES_MCAST_GROUP_4]
static inline fapi2::buffer<uint64_t>& SET_MCAST_GRP_4_SLAVES_REG_SLAVES_MCAST_GROUP_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MCAST_GRP_4_SLAVES_REG));
#endif
    return o_data.insertFromRight<MCAST_GRP_4_SLAVES_REG_SLAVES_MCAST_GROUP_4,
           MCAST_GRP_4_SLAVES_REG_SLAVES_MCAST_GROUP_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access MCAST_GRP_4_SLAVES_REG_SLAVES_MCAST_GROUP_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[MCAST_GRP_4_SLAVES_REG_SLAVES_MCAST_GROUP_4]

//>> GET_[MCAST_GRP_4_SLAVES_REG_SLAVES_MCAST_GROUP_4]
static inline fapi2::buffer<uint64_t>& GET_MCAST_GRP_4_SLAVES_REG_SLAVES_MCAST_GROUP_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MCAST_GRP_4_SLAVES_REG));
#endif
    return i_data.extractToRight<MCAST_GRP_4_SLAVES_REG_SLAVES_MCAST_GROUP_4,
           MCAST_GRP_4_SLAVES_REG_SLAVES_MCAST_GROUP_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access MCAST_GRP_4_SLAVES_REG_SLAVES_MCAST_GROUP_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[MCAST_GRP_4_SLAVES_REG_SLAVES_MCAST_GROUP_4]

//>> PREP_[OTPC_M_EXPORT_REGL_CTRL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_OTPC_M_EXPORT_REGL_CTRL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = OTPC_M_EXPORT_REGL_CTRL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[OTPC_M_EXPORT_REGL_CTRL]

//>> GET_[OTPC_M_EXPORT_REGL_CTRL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_OTPC_M_EXPORT_REGL_CTRL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = OTPC_M_EXPORT_REGL_CTRL;
#endif
    return fapi2::getScom(i_target, OTPC_M_EXPORT_REGL_CTRL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_CTRL]

//>> PUT_[OTPC_M_EXPORT_REGL_CTRL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_OTPC_M_EXPORT_REGL_CTRL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return fapi2::putScom(i_target, OTPC_M_EXPORT_REGL_CTRL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[OTPC_M_EXPORT_REGL_CTRL]


//>> SET_[OTPC_M_EXPORT_REGL_CTRL_TP_NX_ALLOW_CRYPTO_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_TP_NX_ALLOW_CRYPTO_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_CTRL_TP_NX_ALLOW_CRYPTO_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_NX_ALLOW_CRYPTO_DC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_TP_NX_ALLOW_CRYPTO_DC]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_TP_NX_ALLOW_CRYPTO_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_TP_NX_ALLOW_CRYPTO_DC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_CTRL_TP_NX_ALLOW_CRYPTO_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_NX_ALLOW_CRYPTO_DC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_TP_NX_ALLOW_CRYPTO_DC]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_TP_NX_ALLOW_CRYPTO_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_TP_NX_ALLOW_CRYPTO_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.setBit<OTPC_M_EXPORT_REGL_CTRL_TP_NX_ALLOW_CRYPTO_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_NX_ALLOW_CRYPTO_DC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_TP_NX_ALLOW_CRYPTO_DC]

//>> CLEAR_[OTPC_M_EXPORT_REGL_CTRL_TP_NX_ALLOW_CRYPTO_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_EXPORT_REGL_CTRL_TP_NX_ALLOW_CRYPTO_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.clearBit<OTPC_M_EXPORT_REGL_CTRL_TP_NX_ALLOW_CRYPTO_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_NX_ALLOW_CRYPTO_DC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_EXPORT_REGL_CTRL_TP_NX_ALLOW_CRYPTO_DC]

//>> GET_[OTPC_M_EXPORT_REGL_CTRL_TP_NX_ALLOW_CRYPTO_DC]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_EXPORT_REGL_CTRL_TP_NX_ALLOW_CRYPTO_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return i_data.extractToRight<OTPC_M_EXPORT_REGL_CTRL_TP_NX_ALLOW_CRYPTO_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_NX_ALLOW_CRYPTO_DC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_CTRL_TP_NX_ALLOW_CRYPTO_DC]

//>> GET_[OTPC_M_EXPORT_REGL_CTRL_TP_NX_ALLOW_CRYPTO_DC]
static inline bool GET_OTPC_M_EXPORT_REGL_CTRL_TP_NX_ALLOW_CRYPTO_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return i_data.getBit<OTPC_M_EXPORT_REGL_CTRL_TP_NX_ALLOW_CRYPTO_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_NX_ALLOW_CRYPTO_DC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_CTRL_TP_NX_ALLOW_CRYPTO_DC]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_VMX_CRYPTO_DIS_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_VMX_CRYPTO_DIS_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_VMX_CRYPTO_DIS_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_VMX_CRYPTO_DIS_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_VMX_CRYPTO_DIS_DC]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_VMX_CRYPTO_DIS_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_VMX_CRYPTO_DIS_DC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_VMX_CRYPTO_DIS_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_VMX_CRYPTO_DIS_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_VMX_CRYPTO_DIS_DC]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_VMX_CRYPTO_DIS_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_VMX_CRYPTO_DIS_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.setBit<OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_VMX_CRYPTO_DIS_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_VMX_CRYPTO_DIS_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_VMX_CRYPTO_DIS_DC]

//>> CLEAR_[OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_VMX_CRYPTO_DIS_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_VMX_CRYPTO_DIS_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.clearBit<OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_VMX_CRYPTO_DIS_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_VMX_CRYPTO_DIS_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_VMX_CRYPTO_DIS_DC]

//>> GET_[OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_VMX_CRYPTO_DIS_DC]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_VMX_CRYPTO_DIS_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return i_data.extractToRight<OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_VMX_CRYPTO_DIS_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_VMX_CRYPTO_DIS_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_VMX_CRYPTO_DIS_DC]

//>> GET_[OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_VMX_CRYPTO_DIS_DC]
static inline bool GET_OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_VMX_CRYPTO_DIS_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return i_data.getBit<OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_VMX_CRYPTO_DIS_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_VMX_CRYPTO_DIS_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_VMX_CRYPTO_DIS_DC]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_CTRL_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_CTRL_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.setBit<OTPC_M_EXPORT_REGL_CTRL_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC]

//>> CLEAR_[OTPC_M_EXPORT_REGL_CTRL_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_EXPORT_REGL_CTRL_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.clearBit<OTPC_M_EXPORT_REGL_CTRL_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_EXPORT_REGL_CTRL_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC]

//>> GET_[OTPC_M_EXPORT_REGL_CTRL_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_EXPORT_REGL_CTRL_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return i_data.extractToRight<OTPC_M_EXPORT_REGL_CTRL_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_CTRL_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC]

//>> GET_[OTPC_M_EXPORT_REGL_CTRL_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC]
static inline bool GET_OTPC_M_EXPORT_REGL_CTRL_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return i_data.getBit<OTPC_M_EXPORT_REGL_CTRL_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_CTRL_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_2CHIP]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_2CHIP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_2CHIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_2CHIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_2CHIP]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_2CHIP]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_2CHIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_2CHIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_2CHIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_2CHIP]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_2CHIP]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_2CHIP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.setBit<OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_2CHIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_2CHIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_2CHIP]

//>> CLEAR_[OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_2CHIP]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_2CHIP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.clearBit<OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_2CHIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_2CHIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_2CHIP]

//>> GET_[OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_2CHIP]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_2CHIP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return i_data.extractToRight<OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_2CHIP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_2CHIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_2CHIP]

//>> GET_[OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_2CHIP]
static inline bool GET_OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_2CHIP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return i_data.getBit<OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_2CHIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_2CHIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_2CHIP]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_GROUP]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_GROUP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_GROUP,
           OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_GROUP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_GROUP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_GROUP]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_GROUP]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_GROUP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_GROUP,
           OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_GROUP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_GROUP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_GROUP]

//>> GET_[OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_GROUP]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_GROUP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return i_data.extractToRight<OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_GROUP,
           OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_GROUP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_GROUP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_CTRL_TP_PB_FUSE_TOPOLOGY_GROUP]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_TP_NP_NVLINK_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_TP_NP_NVLINK_DISABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_CTRL_TP_NP_NVLINK_DISABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_NP_NVLINK_DISABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_TP_NP_NVLINK_DISABLE]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_TP_NP_NVLINK_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_TP_NP_NVLINK_DISABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_CTRL_TP_NP_NVLINK_DISABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_NP_NVLINK_DISABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_TP_NP_NVLINK_DISABLE]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_TP_NP_NVLINK_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_TP_NP_NVLINK_DISABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.setBit<OTPC_M_EXPORT_REGL_CTRL_TP_NP_NVLINK_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_NP_NVLINK_DISABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_TP_NP_NVLINK_DISABLE]

//>> CLEAR_[OTPC_M_EXPORT_REGL_CTRL_TP_NP_NVLINK_DISABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_EXPORT_REGL_CTRL_TP_NP_NVLINK_DISABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.clearBit<OTPC_M_EXPORT_REGL_CTRL_TP_NP_NVLINK_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_NP_NVLINK_DISABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_EXPORT_REGL_CTRL_TP_NP_NVLINK_DISABLE]

//>> GET_[OTPC_M_EXPORT_REGL_CTRL_TP_NP_NVLINK_DISABLE]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_EXPORT_REGL_CTRL_TP_NP_NVLINK_DISABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return i_data.extractToRight<OTPC_M_EXPORT_REGL_CTRL_TP_NP_NVLINK_DISABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_NP_NVLINK_DISABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_CTRL_TP_NP_NVLINK_DISABLE]

//>> GET_[OTPC_M_EXPORT_REGL_CTRL_TP_NP_NVLINK_DISABLE]
static inline bool GET_OTPC_M_EXPORT_REGL_CTRL_TP_NP_NVLINK_DISABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return i_data.getBit<OTPC_M_EXPORT_REGL_CTRL_TP_NP_NVLINK_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_NP_NVLINK_DISABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_CTRL_TP_NP_NVLINK_DISABLE]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_HW_MODE_SEL_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_HW_MODE_SEL_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_HW_MODE_SEL_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_HW_MODE_SEL_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_HW_MODE_SEL_DC]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_HW_MODE_SEL_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_HW_MODE_SEL_DC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_HW_MODE_SEL_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_HW_MODE_SEL_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_HW_MODE_SEL_DC]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_HW_MODE_SEL_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_HW_MODE_SEL_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.setBit<OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_HW_MODE_SEL_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_HW_MODE_SEL_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_HW_MODE_SEL_DC]

//>> CLEAR_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_HW_MODE_SEL_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_HW_MODE_SEL_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.clearBit<OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_HW_MODE_SEL_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_HW_MODE_SEL_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_HW_MODE_SEL_DC]

//>> GET_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_HW_MODE_SEL_DC]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_HW_MODE_SEL_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return i_data.extractToRight<OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_HW_MODE_SEL_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_HW_MODE_SEL_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_HW_MODE_SEL_DC]

//>> GET_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_HW_MODE_SEL_DC]
static inline bool GET_OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_HW_MODE_SEL_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return i_data.getBit<OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_HW_MODE_SEL_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_HW_MODE_SEL_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_HW_MODE_SEL_DC]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.setBit<OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC]

//>> CLEAR_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.clearBit<OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC]

//>> GET_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return i_data.extractToRight<OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC]

//>> GET_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC]
static inline bool GET_OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return i_data.getBit<OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.setBit<OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC]

//>> CLEAR_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.clearBit<OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC]

//>> GET_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return i_data.extractToRight<OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC]

//>> GET_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC]
static inline bool GET_OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return i_data.getBit<OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_CTRL_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_TP_MC_ALLOW_CRYPTO_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_TP_MC_ALLOW_CRYPTO_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_CTRL_TP_MC_ALLOW_CRYPTO_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_MC_ALLOW_CRYPTO_DC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_TP_MC_ALLOW_CRYPTO_DC]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_TP_MC_ALLOW_CRYPTO_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_TP_MC_ALLOW_CRYPTO_DC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_CTRL_TP_MC_ALLOW_CRYPTO_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_MC_ALLOW_CRYPTO_DC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_TP_MC_ALLOW_CRYPTO_DC]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_TP_MC_ALLOW_CRYPTO_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_TP_MC_ALLOW_CRYPTO_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.setBit<OTPC_M_EXPORT_REGL_CTRL_TP_MC_ALLOW_CRYPTO_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_MC_ALLOW_CRYPTO_DC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_TP_MC_ALLOW_CRYPTO_DC]

//>> CLEAR_[OTPC_M_EXPORT_REGL_CTRL_TP_MC_ALLOW_CRYPTO_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_EXPORT_REGL_CTRL_TP_MC_ALLOW_CRYPTO_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.clearBit<OTPC_M_EXPORT_REGL_CTRL_TP_MC_ALLOW_CRYPTO_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_MC_ALLOW_CRYPTO_DC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_EXPORT_REGL_CTRL_TP_MC_ALLOW_CRYPTO_DC]

//>> GET_[OTPC_M_EXPORT_REGL_CTRL_TP_MC_ALLOW_CRYPTO_DC]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_EXPORT_REGL_CTRL_TP_MC_ALLOW_CRYPTO_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return i_data.extractToRight<OTPC_M_EXPORT_REGL_CTRL_TP_MC_ALLOW_CRYPTO_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_MC_ALLOW_CRYPTO_DC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_CTRL_TP_MC_ALLOW_CRYPTO_DC]

//>> GET_[OTPC_M_EXPORT_REGL_CTRL_TP_MC_ALLOW_CRYPTO_DC]
static inline bool GET_OTPC_M_EXPORT_REGL_CTRL_TP_MC_ALLOW_CRYPTO_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return i_data.getBit<OTPC_M_EXPORT_REGL_CTRL_TP_MC_ALLOW_CRYPTO_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_MC_ALLOW_CRYPTO_DC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_CTRL_TP_MC_ALLOW_CRYPTO_DC]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_OTP_SPIM_MEAS_SEEPROM_LOCK_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_OTP_SPIM_MEAS_SEEPROM_LOCK_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_CTRL_OTP_SPIM_MEAS_SEEPROM_LOCK_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_OTP_SPIM_MEAS_SEEPROM_LOCK_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_OTP_SPIM_MEAS_SEEPROM_LOCK_DC]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_OTP_SPIM_MEAS_SEEPROM_LOCK_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_OTP_SPIM_MEAS_SEEPROM_LOCK_DC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_CTRL_OTP_SPIM_MEAS_SEEPROM_LOCK_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_OTP_SPIM_MEAS_SEEPROM_LOCK_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_OTP_SPIM_MEAS_SEEPROM_LOCK_DC]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_OTP_SPIM_MEAS_SEEPROM_LOCK_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_OTP_SPIM_MEAS_SEEPROM_LOCK_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.setBit<OTPC_M_EXPORT_REGL_CTRL_OTP_SPIM_MEAS_SEEPROM_LOCK_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_OTP_SPIM_MEAS_SEEPROM_LOCK_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_OTP_SPIM_MEAS_SEEPROM_LOCK_DC]

//>> CLEAR_[OTPC_M_EXPORT_REGL_CTRL_OTP_SPIM_MEAS_SEEPROM_LOCK_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_EXPORT_REGL_CTRL_OTP_SPIM_MEAS_SEEPROM_LOCK_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.clearBit<OTPC_M_EXPORT_REGL_CTRL_OTP_SPIM_MEAS_SEEPROM_LOCK_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_OTP_SPIM_MEAS_SEEPROM_LOCK_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_EXPORT_REGL_CTRL_OTP_SPIM_MEAS_SEEPROM_LOCK_DC]

//>> GET_[OTPC_M_EXPORT_REGL_CTRL_OTP_SPIM_MEAS_SEEPROM_LOCK_DC]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_EXPORT_REGL_CTRL_OTP_SPIM_MEAS_SEEPROM_LOCK_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return i_data.extractToRight<OTPC_M_EXPORT_REGL_CTRL_OTP_SPIM_MEAS_SEEPROM_LOCK_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_OTP_SPIM_MEAS_SEEPROM_LOCK_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_CTRL_OTP_SPIM_MEAS_SEEPROM_LOCK_DC]

//>> GET_[OTPC_M_EXPORT_REGL_CTRL_OTP_SPIM_MEAS_SEEPROM_LOCK_DC]
static inline bool GET_OTPC_M_EXPORT_REGL_CTRL_OTP_SPIM_MEAS_SEEPROM_LOCK_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return i_data.getBit<OTPC_M_EXPORT_REGL_CTRL_OTP_SPIM_MEAS_SEEPROM_LOCK_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_OTP_SPIM_MEAS_SEEPROM_LOCK_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_CTRL_OTP_SPIM_MEAS_SEEPROM_LOCK_DC]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_TP_PAU_POWER_HEADER_DISABLE_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_TP_PAU_POWER_HEADER_DISABLE_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_CTRL_TP_PAU_POWER_HEADER_DISABLE_DC,
           OTPC_M_EXPORT_REGL_CTRL_TP_PAU_POWER_HEADER_DISABLE_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_PAU_POWER_HEADER_DISABLE_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_TP_PAU_POWER_HEADER_DISABLE_DC]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_TP_PAU_POWER_HEADER_DISABLE_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_TP_PAU_POWER_HEADER_DISABLE_DC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_CTRL_TP_PAU_POWER_HEADER_DISABLE_DC,
           OTPC_M_EXPORT_REGL_CTRL_TP_PAU_POWER_HEADER_DISABLE_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_PAU_POWER_HEADER_DISABLE_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_TP_PAU_POWER_HEADER_DISABLE_DC]

//>> GET_[OTPC_M_EXPORT_REGL_CTRL_TP_PAU_POWER_HEADER_DISABLE_DC]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_EXPORT_REGL_CTRL_TP_PAU_POWER_HEADER_DISABLE_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return i_data.extractToRight<OTPC_M_EXPORT_REGL_CTRL_TP_PAU_POWER_HEADER_DISABLE_DC,
           OTPC_M_EXPORT_REGL_CTRL_TP_PAU_POWER_HEADER_DISABLE_DC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_PAU_POWER_HEADER_DISABLE_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_CTRL_TP_PAU_POWER_HEADER_DISABLE_DC]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_FLOP_THROTTLE_EN_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_FLOP_THROTTLE_EN_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_FLOP_THROTTLE_EN_DC,
           OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_FLOP_THROTTLE_EN_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_FLOP_THROTTLE_EN_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_FLOP_THROTTLE_EN_DC]

//>> SET_[OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_FLOP_THROTTLE_EN_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_FLOP_THROTTLE_EN_DC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_FLOP_THROTTLE_EN_DC,
           OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_FLOP_THROTTLE_EN_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_FLOP_THROTTLE_EN_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_FLOP_THROTTLE_EN_DC]

//>> GET_[OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_FLOP_THROTTLE_EN_DC]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_FLOP_THROTTLE_EN_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_CTRL));
#endif
    return i_data.extractToRight<OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_FLOP_THROTTLE_EN_DC,
           OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_FLOP_THROTTLE_EN_DC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_FLOP_THROTTLE_EN_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_CTRL_TP_EX_FUSE_FLOP_THROTTLE_EN_DC]

//>> PREP_[OTPC_M_EXPORT_REGL_STATUS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_OTPC_M_EXPORT_REGL_STATUS(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = OTPC_M_EXPORT_REGL_STATUS;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[OTPC_M_EXPORT_REGL_STATUS]

//>> GET_[OTPC_M_EXPORT_REGL_STATUS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_OTPC_M_EXPORT_REGL_STATUS(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = OTPC_M_EXPORT_REGL_STATUS;
#endif
    return fapi2::getScom(i_target, OTPC_M_EXPORT_REGL_STATUS, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_STATUS]

//>> PUT_[OTPC_M_EXPORT_REGL_STATUS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_OTPC_M_EXPORT_REGL_STATUS(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return fapi2::putScom(i_target, OTPC_M_EXPORT_REGL_STATUS, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[OTPC_M_EXPORT_REGL_STATUS]


//>> SET_[OTPC_M_EXPORT_REGL_STATUS_TP_NX_ALLOW_CRYPTO_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_TP_NX_ALLOW_CRYPTO_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_STATUS_TP_NX_ALLOW_CRYPTO_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_NX_ALLOW_CRYPTO_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_TP_NX_ALLOW_CRYPTO_DC]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_TP_NX_ALLOW_CRYPTO_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_TP_NX_ALLOW_CRYPTO_DC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_STATUS_TP_NX_ALLOW_CRYPTO_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_NX_ALLOW_CRYPTO_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_TP_NX_ALLOW_CRYPTO_DC]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_TP_NX_ALLOW_CRYPTO_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_TP_NX_ALLOW_CRYPTO_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.setBit<OTPC_M_EXPORT_REGL_STATUS_TP_NX_ALLOW_CRYPTO_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_NX_ALLOW_CRYPTO_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_TP_NX_ALLOW_CRYPTO_DC]

//>> CLEAR_[OTPC_M_EXPORT_REGL_STATUS_TP_NX_ALLOW_CRYPTO_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_EXPORT_REGL_STATUS_TP_NX_ALLOW_CRYPTO_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.clearBit<OTPC_M_EXPORT_REGL_STATUS_TP_NX_ALLOW_CRYPTO_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_NX_ALLOW_CRYPTO_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_EXPORT_REGL_STATUS_TP_NX_ALLOW_CRYPTO_DC]

//>> GET_[OTPC_M_EXPORT_REGL_STATUS_TP_NX_ALLOW_CRYPTO_DC]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_EXPORT_REGL_STATUS_TP_NX_ALLOW_CRYPTO_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return i_data.extractToRight<OTPC_M_EXPORT_REGL_STATUS_TP_NX_ALLOW_CRYPTO_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_NX_ALLOW_CRYPTO_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_STATUS_TP_NX_ALLOW_CRYPTO_DC]

//>> GET_[OTPC_M_EXPORT_REGL_STATUS_TP_NX_ALLOW_CRYPTO_DC]
static inline bool GET_OTPC_M_EXPORT_REGL_STATUS_TP_NX_ALLOW_CRYPTO_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return i_data.getBit<OTPC_M_EXPORT_REGL_STATUS_TP_NX_ALLOW_CRYPTO_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_NX_ALLOW_CRYPTO_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_STATUS_TP_NX_ALLOW_CRYPTO_DC]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_VMX_CRYPTO_DIS_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_VMX_CRYPTO_DIS_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_VMX_CRYPTO_DIS_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_VMX_CRYPTO_DIS_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_VMX_CRYPTO_DIS_DC]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_VMX_CRYPTO_DIS_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_VMX_CRYPTO_DIS_DC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_VMX_CRYPTO_DIS_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_VMX_CRYPTO_DIS_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_VMX_CRYPTO_DIS_DC]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_VMX_CRYPTO_DIS_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_VMX_CRYPTO_DIS_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.setBit<OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_VMX_CRYPTO_DIS_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_VMX_CRYPTO_DIS_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_VMX_CRYPTO_DIS_DC]

//>> CLEAR_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_VMX_CRYPTO_DIS_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_VMX_CRYPTO_DIS_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.clearBit<OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_VMX_CRYPTO_DIS_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_VMX_CRYPTO_DIS_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_VMX_CRYPTO_DIS_DC]

//>> GET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_VMX_CRYPTO_DIS_DC]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_VMX_CRYPTO_DIS_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return i_data.extractToRight<OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_VMX_CRYPTO_DIS_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_VMX_CRYPTO_DIS_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_VMX_CRYPTO_DIS_DC]

//>> GET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_VMX_CRYPTO_DIS_DC]
static inline bool GET_OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_VMX_CRYPTO_DIS_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return i_data.getBit<OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_VMX_CRYPTO_DIS_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_VMX_CRYPTO_DIS_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_VMX_CRYPTO_DIS_DC]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_STATUS_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_STATUS_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.setBit<OTPC_M_EXPORT_REGL_STATUS_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC]

//>> CLEAR_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_EXPORT_REGL_STATUS_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.clearBit<OTPC_M_EXPORT_REGL_STATUS_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC]

//>> GET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_EXPORT_REGL_STATUS_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return i_data.extractToRight<OTPC_M_EXPORT_REGL_STATUS_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC]

//>> GET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC]
static inline bool GET_OTPC_M_EXPORT_REGL_STATUS_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return i_data.getBit<OTPC_M_EXPORT_REGL_STATUS_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_EFUSE_EXTENDED_MEMORY_DISABLE_DC]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_2CHIP]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_2CHIP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_2CHIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_2CHIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_2CHIP]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_2CHIP]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_2CHIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_2CHIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_2CHIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_2CHIP]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_2CHIP]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_2CHIP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.setBit<OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_2CHIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_2CHIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_2CHIP]

//>> CLEAR_[OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_2CHIP]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_2CHIP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.clearBit<OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_2CHIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_2CHIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_2CHIP]

//>> GET_[OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_2CHIP]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_2CHIP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return i_data.extractToRight<OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_2CHIP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_2CHIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_2CHIP]

//>> GET_[OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_2CHIP]
static inline bool GET_OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_2CHIP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return i_data.getBit<OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_2CHIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_2CHIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_2CHIP]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_GROUP]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_GROUP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_GROUP,
           OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_GROUP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_GROUP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_GROUP]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_GROUP]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_GROUP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_GROUP,
           OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_GROUP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_GROUP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_GROUP]

//>> GET_[OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_GROUP]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_GROUP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return i_data.extractToRight<OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_GROUP,
           OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_GROUP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_GROUP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_STATUS_TP_PB_FUSE_TOPOLOGY_GROUP]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_TP_NP_NVLINK_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_TP_NP_NVLINK_DISABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_STATUS_TP_NP_NVLINK_DISABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_NP_NVLINK_DISABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_TP_NP_NVLINK_DISABLE]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_TP_NP_NVLINK_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_TP_NP_NVLINK_DISABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_STATUS_TP_NP_NVLINK_DISABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_NP_NVLINK_DISABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_TP_NP_NVLINK_DISABLE]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_TP_NP_NVLINK_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_TP_NP_NVLINK_DISABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.setBit<OTPC_M_EXPORT_REGL_STATUS_TP_NP_NVLINK_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_NP_NVLINK_DISABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_TP_NP_NVLINK_DISABLE]

//>> CLEAR_[OTPC_M_EXPORT_REGL_STATUS_TP_NP_NVLINK_DISABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_EXPORT_REGL_STATUS_TP_NP_NVLINK_DISABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.clearBit<OTPC_M_EXPORT_REGL_STATUS_TP_NP_NVLINK_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_NP_NVLINK_DISABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_EXPORT_REGL_STATUS_TP_NP_NVLINK_DISABLE]

//>> GET_[OTPC_M_EXPORT_REGL_STATUS_TP_NP_NVLINK_DISABLE]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_EXPORT_REGL_STATUS_TP_NP_NVLINK_DISABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return i_data.extractToRight<OTPC_M_EXPORT_REGL_STATUS_TP_NP_NVLINK_DISABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_NP_NVLINK_DISABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_STATUS_TP_NP_NVLINK_DISABLE]

//>> GET_[OTPC_M_EXPORT_REGL_STATUS_TP_NP_NVLINK_DISABLE]
static inline bool GET_OTPC_M_EXPORT_REGL_STATUS_TP_NP_NVLINK_DISABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return i_data.getBit<OTPC_M_EXPORT_REGL_STATUS_TP_NP_NVLINK_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_NP_NVLINK_DISABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_STATUS_TP_NP_NVLINK_DISABLE]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_HW_MODE_SEL_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_HW_MODE_SEL_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_HW_MODE_SEL_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_HW_MODE_SEL_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_HW_MODE_SEL_DC]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_HW_MODE_SEL_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_HW_MODE_SEL_DC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_HW_MODE_SEL_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_HW_MODE_SEL_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_HW_MODE_SEL_DC]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_HW_MODE_SEL_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_HW_MODE_SEL_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.setBit<OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_HW_MODE_SEL_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_HW_MODE_SEL_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_HW_MODE_SEL_DC]

//>> CLEAR_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_HW_MODE_SEL_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_HW_MODE_SEL_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.clearBit<OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_HW_MODE_SEL_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_HW_MODE_SEL_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_HW_MODE_SEL_DC]

//>> GET_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_HW_MODE_SEL_DC]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_HW_MODE_SEL_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return i_data.extractToRight<OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_HW_MODE_SEL_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_HW_MODE_SEL_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_HW_MODE_SEL_DC]

//>> GET_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_HW_MODE_SEL_DC]
static inline bool GET_OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_HW_MODE_SEL_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return i_data.getBit<OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_HW_MODE_SEL_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_HW_MODE_SEL_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_HW_MODE_SEL_DC]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.setBit<OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC]

//>> CLEAR_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.clearBit<OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC]

//>> GET_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return i_data.extractToRight<OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC]

//>> GET_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC]
static inline bool GET_OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return i_data.getBit<OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL0_DC]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.setBit<OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC]

//>> CLEAR_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.clearBit<OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC]

//>> GET_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return i_data.extractToRight<OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC]

//>> GET_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC]
static inline bool GET_OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return i_data.getBit<OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_STATUS_OTP_PCBMS_FUSED_CORE_MODE_SEL1_DC]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_SMT8_CTYPE_EN_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_SMT8_CTYPE_EN_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_SMT8_CTYPE_EN_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_SMT8_CTYPE_EN_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_SMT8_CTYPE_EN_DC]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_SMT8_CTYPE_EN_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_SMT8_CTYPE_EN_DC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_SMT8_CTYPE_EN_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_SMT8_CTYPE_EN_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_SMT8_CTYPE_EN_DC]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_SMT8_CTYPE_EN_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_SMT8_CTYPE_EN_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.setBit<OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_SMT8_CTYPE_EN_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_SMT8_CTYPE_EN_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_SMT8_CTYPE_EN_DC]

//>> CLEAR_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_SMT8_CTYPE_EN_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_SMT8_CTYPE_EN_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.clearBit<OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_SMT8_CTYPE_EN_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_SMT8_CTYPE_EN_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_SMT8_CTYPE_EN_DC]

//>> GET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_SMT8_CTYPE_EN_DC]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_SMT8_CTYPE_EN_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return i_data.extractToRight<OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_SMT8_CTYPE_EN_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_SMT8_CTYPE_EN_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_SMT8_CTYPE_EN_DC]

//>> GET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_SMT8_CTYPE_EN_DC]
static inline bool GET_OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_SMT8_CTYPE_EN_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return i_data.getBit<OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_SMT8_CTYPE_EN_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_SMT8_CTYPE_EN_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_SMT8_CTYPE_EN_DC]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_TP_MC_ALLOW_CRYPTO_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_TP_MC_ALLOW_CRYPTO_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_STATUS_TP_MC_ALLOW_CRYPTO_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_MC_ALLOW_CRYPTO_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_TP_MC_ALLOW_CRYPTO_DC]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_TP_MC_ALLOW_CRYPTO_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_TP_MC_ALLOW_CRYPTO_DC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_STATUS_TP_MC_ALLOW_CRYPTO_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_MC_ALLOW_CRYPTO_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_TP_MC_ALLOW_CRYPTO_DC]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_TP_MC_ALLOW_CRYPTO_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_TP_MC_ALLOW_CRYPTO_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.setBit<OTPC_M_EXPORT_REGL_STATUS_TP_MC_ALLOW_CRYPTO_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_MC_ALLOW_CRYPTO_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_TP_MC_ALLOW_CRYPTO_DC]

//>> CLEAR_[OTPC_M_EXPORT_REGL_STATUS_TP_MC_ALLOW_CRYPTO_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_EXPORT_REGL_STATUS_TP_MC_ALLOW_CRYPTO_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.clearBit<OTPC_M_EXPORT_REGL_STATUS_TP_MC_ALLOW_CRYPTO_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_MC_ALLOW_CRYPTO_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_EXPORT_REGL_STATUS_TP_MC_ALLOW_CRYPTO_DC]

//>> GET_[OTPC_M_EXPORT_REGL_STATUS_TP_MC_ALLOW_CRYPTO_DC]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_EXPORT_REGL_STATUS_TP_MC_ALLOW_CRYPTO_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return i_data.extractToRight<OTPC_M_EXPORT_REGL_STATUS_TP_MC_ALLOW_CRYPTO_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_MC_ALLOW_CRYPTO_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_STATUS_TP_MC_ALLOW_CRYPTO_DC]

//>> GET_[OTPC_M_EXPORT_REGL_STATUS_TP_MC_ALLOW_CRYPTO_DC]
static inline bool GET_OTPC_M_EXPORT_REGL_STATUS_TP_MC_ALLOW_CRYPTO_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return i_data.getBit<OTPC_M_EXPORT_REGL_STATUS_TP_MC_ALLOW_CRYPTO_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_MC_ALLOW_CRYPTO_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_STATUS_TP_MC_ALLOW_CRYPTO_DC]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_OTP_SPIM_MEAS_SEEPROM_LOCK_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_OTP_SPIM_MEAS_SEEPROM_LOCK_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_STATUS_OTP_SPIM_MEAS_SEEPROM_LOCK_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_OTP_SPIM_MEAS_SEEPROM_LOCK_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_OTP_SPIM_MEAS_SEEPROM_LOCK_DC]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_OTP_SPIM_MEAS_SEEPROM_LOCK_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_OTP_SPIM_MEAS_SEEPROM_LOCK_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_STATUS_OTP_SPIM_MEAS_SEEPROM_LOCK_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_OTP_SPIM_MEAS_SEEPROM_LOCK_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_OTP_SPIM_MEAS_SEEPROM_LOCK_DC]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_OTP_SPIM_MEAS_SEEPROM_LOCK_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_OTP_SPIM_MEAS_SEEPROM_LOCK_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.setBit<OTPC_M_EXPORT_REGL_STATUS_OTP_SPIM_MEAS_SEEPROM_LOCK_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_OTP_SPIM_MEAS_SEEPROM_LOCK_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_OTP_SPIM_MEAS_SEEPROM_LOCK_DC]

//>> CLEAR_[OTPC_M_EXPORT_REGL_STATUS_OTP_SPIM_MEAS_SEEPROM_LOCK_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_OTPC_M_EXPORT_REGL_STATUS_OTP_SPIM_MEAS_SEEPROM_LOCK_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.clearBit<OTPC_M_EXPORT_REGL_STATUS_OTP_SPIM_MEAS_SEEPROM_LOCK_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_OTP_SPIM_MEAS_SEEPROM_LOCK_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[OTPC_M_EXPORT_REGL_STATUS_OTP_SPIM_MEAS_SEEPROM_LOCK_DC]

//>> GET_[OTPC_M_EXPORT_REGL_STATUS_OTP_SPIM_MEAS_SEEPROM_LOCK_DC]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_EXPORT_REGL_STATUS_OTP_SPIM_MEAS_SEEPROM_LOCK_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return i_data.extractToRight<OTPC_M_EXPORT_REGL_STATUS_OTP_SPIM_MEAS_SEEPROM_LOCK_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_OTP_SPIM_MEAS_SEEPROM_LOCK_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_STATUS_OTP_SPIM_MEAS_SEEPROM_LOCK_DC]

//>> GET_[OTPC_M_EXPORT_REGL_STATUS_OTP_SPIM_MEAS_SEEPROM_LOCK_DC]
static inline bool GET_OTPC_M_EXPORT_REGL_STATUS_OTP_SPIM_MEAS_SEEPROM_LOCK_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return i_data.getBit<OTPC_M_EXPORT_REGL_STATUS_OTP_SPIM_MEAS_SEEPROM_LOCK_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_OTP_SPIM_MEAS_SEEPROM_LOCK_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_STATUS_OTP_SPIM_MEAS_SEEPROM_LOCK_DC]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_TP_PAU_POWER_HEADER_DISABLE_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_TP_PAU_POWER_HEADER_DISABLE_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_STATUS_TP_PAU_POWER_HEADER_DISABLE_DC,
           OTPC_M_EXPORT_REGL_STATUS_TP_PAU_POWER_HEADER_DISABLE_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_PAU_POWER_HEADER_DISABLE_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_TP_PAU_POWER_HEADER_DISABLE_DC]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_TP_PAU_POWER_HEADER_DISABLE_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_TP_PAU_POWER_HEADER_DISABLE_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_STATUS_TP_PAU_POWER_HEADER_DISABLE_DC,
           OTPC_M_EXPORT_REGL_STATUS_TP_PAU_POWER_HEADER_DISABLE_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_PAU_POWER_HEADER_DISABLE_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_TP_PAU_POWER_HEADER_DISABLE_DC]

//>> GET_[OTPC_M_EXPORT_REGL_STATUS_TP_PAU_POWER_HEADER_DISABLE_DC]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_EXPORT_REGL_STATUS_TP_PAU_POWER_HEADER_DISABLE_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return i_data.extractToRight<OTPC_M_EXPORT_REGL_STATUS_TP_PAU_POWER_HEADER_DISABLE_DC,
           OTPC_M_EXPORT_REGL_STATUS_TP_PAU_POWER_HEADER_DISABLE_DC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_PAU_POWER_HEADER_DISABLE_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_STATUS_TP_PAU_POWER_HEADER_DISABLE_DC]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_FLOP_THROTTLE_EN_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_FLOP_THROTTLE_EN_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_FLOP_THROTTLE_EN_DC,
           OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_FLOP_THROTTLE_EN_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_FLOP_THROTTLE_EN_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_FLOP_THROTTLE_EN_DC]

//>> SET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_FLOP_THROTTLE_EN_DC]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_FLOP_THROTTLE_EN_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return o_data.insertFromRight<OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_FLOP_THROTTLE_EN_DC,
           OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_FLOP_THROTTLE_EN_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_FLOP_THROTTLE_EN_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_FLOP_THROTTLE_EN_DC]

//>> GET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_FLOP_THROTTLE_EN_DC]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_FLOP_THROTTLE_EN_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_EXPORT_REGL_STATUS));
#endif
    return i_data.extractToRight<OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_FLOP_THROTTLE_EN_DC,
           OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_FLOP_THROTTLE_EN_DC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_FLOP_THROTTLE_EN_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_EXPORT_REGL_STATUS_TP_EX_FUSE_FLOP_THROTTLE_EN_DC]

//>> PREP_[OTPC_M_MEASURE_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_OTPC_M_MEASURE_REG1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = OTPC_M_MEASURE_REG1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[OTPC_M_MEASURE_REG1]

//>> GET_[OTPC_M_MEASURE_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_OTPC_M_MEASURE_REG1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = OTPC_M_MEASURE_REG1;
#endif
    return fapi2::getScom(i_target, OTPC_M_MEASURE_REG1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[OTPC_M_MEASURE_REG1]

//>> PUT_[OTPC_M_MEASURE_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_OTPC_M_MEASURE_REG1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG1));
#endif
    return fapi2::putScom(i_target, OTPC_M_MEASURE_REG1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[OTPC_M_MEASURE_REG1]


//>> SET_[OTPC_M_MEASURE_REG1_SEEPROM_MEASUREMENT1_DATA]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_MEASURE_REG1_SEEPROM_MEASUREMENT1_DATA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG1));
#endif
    return o_data.insertFromRight<OTPC_M_MEASURE_REG1_SEEPROM_MEASUREMENT1_DATA,
           OTPC_M_MEASURE_REG1_SEEPROM_MEASUREMENT1_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_MEASURE_REG1_SEEPROM_MEASUREMENT1_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_MEASURE_REG1_SEEPROM_MEASUREMENT1_DATA]

//>> SET_[OTPC_M_MEASURE_REG1_SEEPROM_MEASUREMENT1_DATA]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_MEASURE_REG1_SEEPROM_MEASUREMENT1_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG1));
#endif
    return o_data.insertFromRight<OTPC_M_MEASURE_REG1_SEEPROM_MEASUREMENT1_DATA,
           OTPC_M_MEASURE_REG1_SEEPROM_MEASUREMENT1_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_MEASURE_REG1_SEEPROM_MEASUREMENT1_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_MEASURE_REG1_SEEPROM_MEASUREMENT1_DATA]

//>> GET_[OTPC_M_MEASURE_REG1_SEEPROM_MEASUREMENT1_DATA]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_MEASURE_REG1_SEEPROM_MEASUREMENT1_DATA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG1));
#endif
    return i_data.extractToRight<OTPC_M_MEASURE_REG1_SEEPROM_MEASUREMENT1_DATA,
           OTPC_M_MEASURE_REG1_SEEPROM_MEASUREMENT1_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_MEASURE_REG1_SEEPROM_MEASUREMENT1_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_MEASURE_REG1_SEEPROM_MEASUREMENT1_DATA]

//>> PREP_[RECOV]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RECOV(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RECOV;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RECOV]

//>> GET_[RECOV]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RECOV(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RECOV;
#endif
    return fapi2::getScom(i_target, RECOV, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RECOV]

//>> PUT_[RECOV]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RECOV(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return fapi2::putScom(i_target, RECOV, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RECOV]


//>> SET_[RECOV_ANY_RECOV]
static inline fapi2::buffer<uint64_t>& SET_RECOV_ANY_RECOV(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_ANY_RECOV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_ANY_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_ANY_RECOV]

//>> SET_[RECOV_ANY_RECOV]
static inline fapi2::buffer<uint64_t>& SET_RECOV_ANY_RECOV(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_ANY_RECOV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_ANY_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_ANY_RECOV]

//>> SET_[RECOV_ANY_RECOV]
static inline fapi2::buffer<uint64_t>& SET_RECOV_ANY_RECOV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_ANY_RECOV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_ANY_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_ANY_RECOV]

//>> CLEAR_[RECOV_ANY_RECOV]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_ANY_RECOV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_ANY_RECOV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_ANY_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_ANY_RECOV]

//>> GET_[RECOV_ANY_RECOV]
static inline fapi2::buffer<uint64_t>& GET_RECOV_ANY_RECOV(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_ANY_RECOV,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_ANY_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_ANY_RECOV]

//>> GET_[RECOV_ANY_RECOV]
static inline bool GET_RECOV_ANY_RECOV(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_ANY_RECOV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_ANY_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_ANY_RECOV]

//>> SET_[RECOV_RESERVED1R]
static inline fapi2::buffer<uint64_t>& SET_RECOV_RESERVED1R(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_RESERVED1R,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_RESERVED1R chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_RESERVED1R]

//>> SET_[RECOV_RESERVED1R]
static inline fapi2::buffer<uint64_t>& SET_RECOV_RESERVED1R(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_RESERVED1R,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_RESERVED1R chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_RESERVED1R]

//>> SET_[RECOV_RESERVED1R]
static inline fapi2::buffer<uint64_t>& SET_RECOV_RESERVED1R(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_RESERVED1R>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_RESERVED1R chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_RESERVED1R]

//>> CLEAR_[RECOV_RESERVED1R]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_RESERVED1R(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_RESERVED1R>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_RESERVED1R chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_RESERVED1R]

//>> GET_[RECOV_RESERVED1R]
static inline fapi2::buffer<uint64_t>& GET_RECOV_RESERVED1R(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_RESERVED1R,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_RESERVED1R chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_RESERVED1R]

//>> GET_[RECOV_RESERVED1R]
static inline bool GET_RECOV_RESERVED1R(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_RESERVED1R>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_RESERVED1R chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_RESERVED1R]

//>> SET_[RECOV_ANY_LOCAL_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_RECOV_ANY_LOCAL_XSTOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_ANY_LOCAL_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_ANY_LOCAL_XSTOP]

//>> SET_[RECOV_ANY_LOCAL_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_RECOV_ANY_LOCAL_XSTOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_ANY_LOCAL_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_ANY_LOCAL_XSTOP]

//>> SET_[RECOV_ANY_LOCAL_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_RECOV_ANY_LOCAL_XSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_ANY_LOCAL_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_ANY_LOCAL_XSTOP]

//>> CLEAR_[RECOV_ANY_LOCAL_XSTOP]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_ANY_LOCAL_XSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_ANY_LOCAL_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_ANY_LOCAL_XSTOP]

//>> GET_[RECOV_ANY_LOCAL_XSTOP]
static inline fapi2::buffer<uint64_t>& GET_RECOV_ANY_LOCAL_XSTOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_ANY_LOCAL_XSTOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_ANY_LOCAL_XSTOP]

//>> GET_[RECOV_ANY_LOCAL_XSTOP]
static inline bool GET_RECOV_ANY_LOCAL_XSTOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_ANY_LOCAL_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_ANY_LOCAL_XSTOP]

//>> SET_[RECOV_RESERVED3R]
static inline fapi2::buffer<uint64_t>& SET_RECOV_RESERVED3R(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_RESERVED3R,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_RESERVED3R chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_RESERVED3R]

//>> SET_[RECOV_RESERVED3R]
static inline fapi2::buffer<uint64_t>& SET_RECOV_RESERVED3R(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_RESERVED3R,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_RESERVED3R chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_RESERVED3R]

//>> SET_[RECOV_RESERVED3R]
static inline fapi2::buffer<uint64_t>& SET_RECOV_RESERVED3R(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_RESERVED3R>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_RESERVED3R chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_RESERVED3R]

//>> CLEAR_[RECOV_RESERVED3R]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_RESERVED3R(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_RESERVED3R>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_RESERVED3R chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_RESERVED3R]

//>> GET_[RECOV_RESERVED3R]
static inline fapi2::buffer<uint64_t>& GET_RECOV_RESERVED3R(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_RESERVED3R,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_RESERVED3R chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_RESERVED3R]

//>> GET_[RECOV_RESERVED3R]
static inline bool GET_RECOV_RESERVED3R(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_RESERVED3R>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_RESERVED3R chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_RESERVED3R]

//>> SET_[RECOV_PERV]
static inline fapi2::buffer<uint64_t>& SET_RECOV_PERV(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_PERV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_PERV]

//>> SET_[RECOV_PERV]
static inline fapi2::buffer<uint64_t>& SET_RECOV_PERV(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_PERV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_PERV]

//>> SET_[RECOV_PERV]
static inline fapi2::buffer<uint64_t>& SET_RECOV_PERV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_PERV]

//>> CLEAR_[RECOV_PERV]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_PERV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_PERV]

//>> GET_[RECOV_PERV]
static inline fapi2::buffer<uint64_t>& GET_RECOV_PERV(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_PERV,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_PERV]

//>> GET_[RECOV_PERV]
static inline bool GET_RECOV_PERV(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_PERV]

//>> SET_[RECOV_IN05]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN05(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN05]

//>> SET_[RECOV_IN05]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN05(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN05]

//>> SET_[RECOV_IN05]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN05(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN05]

//>> CLEAR_[RECOV_IN05]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN05(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN05]

//>> GET_[RECOV_IN05]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN05(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN05,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN05]

//>> GET_[RECOV_IN05]
static inline bool GET_RECOV_IN05(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN05]

//>> SET_[RECOV_IN06]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN06(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN06]

//>> SET_[RECOV_IN06]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN06(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN06]

//>> SET_[RECOV_IN06]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN06(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN06]

//>> CLEAR_[RECOV_IN06]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN06(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN06]

//>> GET_[RECOV_IN06]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN06(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN06,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN06]

//>> GET_[RECOV_IN06]
static inline bool GET_RECOV_IN06(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN06]

//>> SET_[RECOV_IN07]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN07(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN07]

//>> SET_[RECOV_IN07]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN07(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN07]

//>> SET_[RECOV_IN07]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN07(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN07]

//>> CLEAR_[RECOV_IN07]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN07(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN07]

//>> GET_[RECOV_IN07]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN07(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN07,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN07]

//>> GET_[RECOV_IN07]
static inline bool GET_RECOV_IN07(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN07]

//>> SET_[RECOV_IN08]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN08(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN08]

//>> SET_[RECOV_IN08]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN08(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN08]

//>> SET_[RECOV_IN08]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN08(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN08]

//>> CLEAR_[RECOV_IN08]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN08(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN08]

//>> GET_[RECOV_IN08]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN08(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN08,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN08]

//>> GET_[RECOV_IN08]
static inline bool GET_RECOV_IN08(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN08]

//>> SET_[RECOV_IN09]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN09(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN09]

//>> SET_[RECOV_IN09]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN09(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN09]

//>> SET_[RECOV_IN09]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN09(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN09]

//>> CLEAR_[RECOV_IN09]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN09(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN09]

//>> GET_[RECOV_IN09]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN09(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN09,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN09]

//>> GET_[RECOV_IN09]
static inline bool GET_RECOV_IN09(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN09]

//>> SET_[RECOV_IN10]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN10(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN10]

//>> SET_[RECOV_IN10]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN10]

//>> SET_[RECOV_IN10]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN10]

//>> CLEAR_[RECOV_IN10]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN10]

//>> GET_[RECOV_IN10]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN10(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN10,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN10]

//>> GET_[RECOV_IN10]
static inline bool GET_RECOV_IN10(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN10]

//>> SET_[RECOV_IN11]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN11(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN11]

//>> SET_[RECOV_IN11]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN11(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN11]

//>> SET_[RECOV_IN11]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN11]

//>> CLEAR_[RECOV_IN11]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN11]

//>> GET_[RECOV_IN11]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN11(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN11,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN11]

//>> GET_[RECOV_IN11]
static inline bool GET_RECOV_IN11(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN11]

//>> SET_[RECOV_IN12]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN12(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN12]

//>> SET_[RECOV_IN12]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN12]

//>> SET_[RECOV_IN12]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN12]

//>> CLEAR_[RECOV_IN12]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN12]

//>> GET_[RECOV_IN12]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN12(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN12,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN12]

//>> GET_[RECOV_IN12]
static inline bool GET_RECOV_IN12(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN12]

//>> SET_[RECOV_IN13]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN13(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN13]

//>> SET_[RECOV_IN13]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN13]

//>> SET_[RECOV_IN13]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN13]

//>> CLEAR_[RECOV_IN13]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN13]

//>> GET_[RECOV_IN13]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN13(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN13,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN13]

//>> GET_[RECOV_IN13]
static inline bool GET_RECOV_IN13(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN13]

//>> SET_[RECOV_IN14]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN14(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN14]

//>> SET_[RECOV_IN14]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN14]

//>> SET_[RECOV_IN14]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN14]

//>> CLEAR_[RECOV_IN14]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN14]

//>> GET_[RECOV_IN14]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN14(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN14,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN14]

//>> GET_[RECOV_IN14]
static inline bool GET_RECOV_IN14(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN14]

//>> SET_[RECOV_IN15]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN15(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN15]

//>> SET_[RECOV_IN15]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN15]

//>> SET_[RECOV_IN15]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN15]

//>> CLEAR_[RECOV_IN15]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN15]

//>> GET_[RECOV_IN15]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN15(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN15,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN15]

//>> GET_[RECOV_IN15]
static inline bool GET_RECOV_IN15(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN15]

//>> SET_[RECOV_IN16]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN16(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN16,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN16]

//>> SET_[RECOV_IN16]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN16(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN16,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN16]

//>> SET_[RECOV_IN16]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN16(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN16>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN16]

//>> CLEAR_[RECOV_IN16]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN16(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN16>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN16]

//>> GET_[RECOV_IN16]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN16(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN16,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN16]

//>> GET_[RECOV_IN16]
static inline bool GET_RECOV_IN16(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN16>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN16]

//>> SET_[RECOV_IN17]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN17(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN17,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN17]

//>> SET_[RECOV_IN17]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN17(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN17,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN17]

//>> SET_[RECOV_IN17]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN17(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN17>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN17]

//>> CLEAR_[RECOV_IN17]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN17(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN17>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN17]

//>> GET_[RECOV_IN17]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN17(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN17,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN17]

//>> GET_[RECOV_IN17]
static inline bool GET_RECOV_IN17(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN17>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN17]

//>> SET_[RECOV_IN18]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN18(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN18,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN18]

//>> SET_[RECOV_IN18]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN18(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN18,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN18]

//>> SET_[RECOV_IN18]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN18(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN18>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN18]

//>> CLEAR_[RECOV_IN18]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN18(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN18>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN18]

//>> GET_[RECOV_IN18]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN18(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN18,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN18]

//>> GET_[RECOV_IN18]
static inline bool GET_RECOV_IN18(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN18>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN18]

//>> SET_[RECOV_IN19]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN19(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN19,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN19]

//>> SET_[RECOV_IN19]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN19(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN19,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN19]

//>> SET_[RECOV_IN19]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN19(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN19]

//>> CLEAR_[RECOV_IN19]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN19(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN19]

//>> GET_[RECOV_IN19]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN19(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN19,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN19]

//>> GET_[RECOV_IN19]
static inline bool GET_RECOV_IN19(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN19]

//>> SET_[RECOV_IN20]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN20(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN20,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN20]

//>> SET_[RECOV_IN20]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN20(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN20,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN20]

//>> SET_[RECOV_IN20]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN20(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN20]

//>> CLEAR_[RECOV_IN20]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN20(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN20]

//>> GET_[RECOV_IN20]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN20(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN20,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN20]

//>> GET_[RECOV_IN20]
static inline bool GET_RECOV_IN20(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN20]

//>> SET_[RECOV_IN21]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN21(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN21,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN21]

//>> SET_[RECOV_IN21]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN21(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN21,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN21]

//>> SET_[RECOV_IN21]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN21(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN21>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN21]

//>> CLEAR_[RECOV_IN21]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN21(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN21>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN21]

//>> GET_[RECOV_IN21]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN21(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN21,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN21]

//>> GET_[RECOV_IN21]
static inline bool GET_RECOV_IN21(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN21>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN21]

//>> SET_[RECOV_IN22]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN22(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN22,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN22]

//>> SET_[RECOV_IN22]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN22(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN22,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN22]

//>> SET_[RECOV_IN22]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN22(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN22>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN22]

//>> CLEAR_[RECOV_IN22]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN22(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN22>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN22]

//>> GET_[RECOV_IN22]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN22(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN22,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN22]

//>> GET_[RECOV_IN22]
static inline bool GET_RECOV_IN22(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN22>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN22]

//>> SET_[RECOV_IN23]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN23(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN23,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN23]

//>> SET_[RECOV_IN23]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN23(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN23,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN23]

//>> SET_[RECOV_IN23]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN23(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN23]

//>> CLEAR_[RECOV_IN23]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN23(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN23]

//>> GET_[RECOV_IN23]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN23(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN23,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN23]

//>> GET_[RECOV_IN23]
static inline bool GET_RECOV_IN23(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN23]

//>> SET_[RECOV_IN24]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN24(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN24,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN24]

//>> SET_[RECOV_IN24]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN24(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN24,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN24]

//>> SET_[RECOV_IN24]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN24(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN24>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN24]

//>> CLEAR_[RECOV_IN24]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN24(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN24>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN24]

//>> GET_[RECOV_IN24]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN24(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN24,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN24]

//>> GET_[RECOV_IN24]
static inline bool GET_RECOV_IN24(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN24>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN24]

//>> SET_[RECOV_IN25]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN25(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN25,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN25]

//>> SET_[RECOV_IN25]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN25(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN25,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN25]

//>> SET_[RECOV_IN25]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN25(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN25>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN25]

//>> CLEAR_[RECOV_IN25]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN25(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN25>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN25]

//>> GET_[RECOV_IN25]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN25(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN25,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN25]

//>> GET_[RECOV_IN25]
static inline bool GET_RECOV_IN25(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN25>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN25]

//>> SET_[RECOV_IN26]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN26(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN26,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN26]

//>> SET_[RECOV_IN26]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN26(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN26,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN26]

//>> SET_[RECOV_IN26]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN26(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN26>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN26]

//>> CLEAR_[RECOV_IN26]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN26(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN26>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN26]

//>> GET_[RECOV_IN26]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN26(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN26,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN26]

//>> GET_[RECOV_IN26]
static inline bool GET_RECOV_IN26(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN26>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN26]

//>> SET_[RECOV_IN27]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN27(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN27,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN27]

//>> SET_[RECOV_IN27]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN27(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN27,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN27]

//>> SET_[RECOV_IN27]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN27(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN27>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN27]

//>> CLEAR_[RECOV_IN27]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN27(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN27>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN27]

//>> GET_[RECOV_IN27]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN27(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN27,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN27]

//>> GET_[RECOV_IN27]
static inline bool GET_RECOV_IN27(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN27>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN27]

//>> SET_[RECOV_IN28]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN28(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN28,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN28]

//>> SET_[RECOV_IN28]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN28(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN28,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN28]

//>> SET_[RECOV_IN28]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN28(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN28>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN28]

//>> CLEAR_[RECOV_IN28]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN28(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN28>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN28]

//>> GET_[RECOV_IN28]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN28(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN28,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN28]

//>> GET_[RECOV_IN28]
static inline bool GET_RECOV_IN28(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN28>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN28]

//>> SET_[RECOV_IN29]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN29(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN29,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN29]

//>> SET_[RECOV_IN29]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN29(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN29,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN29]

//>> SET_[RECOV_IN29]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN29(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN29>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN29]

//>> CLEAR_[RECOV_IN29]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN29(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN29>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN29]

//>> GET_[RECOV_IN29]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN29(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN29,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN29]

//>> GET_[RECOV_IN29]
static inline bool GET_RECOV_IN29(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN29>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN29]

//>> SET_[RECOV_IN30]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN30(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN30,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN30]

//>> SET_[RECOV_IN30]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN30(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN30,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN30]

//>> SET_[RECOV_IN30]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN30(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN30]

//>> CLEAR_[RECOV_IN30]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN30(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN30]

//>> GET_[RECOV_IN30]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN30(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN30,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN30]

//>> GET_[RECOV_IN30]
static inline bool GET_RECOV_IN30(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN30]

//>> SET_[RECOV_IN31]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN31(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN31,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN31]

//>> SET_[RECOV_IN31]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN31(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN31,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN31]

//>> SET_[RECOV_IN31]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN31(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN31>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN31]

//>> CLEAR_[RECOV_IN31]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN31(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN31>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN31]

//>> GET_[RECOV_IN31]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN31(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN31,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN31]

//>> GET_[RECOV_IN31]
static inline bool GET_RECOV_IN31(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN31>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN31]

//>> SET_[RECOV_IN32]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN32(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN32,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN32]

//>> SET_[RECOV_IN32]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN32(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN32,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN32]

//>> SET_[RECOV_IN32]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN32(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN32>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN32]

//>> CLEAR_[RECOV_IN32]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN32(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN32>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN32]

//>> GET_[RECOV_IN32]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN32(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN32,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN32]

//>> GET_[RECOV_IN32]
static inline bool GET_RECOV_IN32(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN32>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN32]

//>> SET_[RECOV_IN33]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN33(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN33,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN33]

//>> SET_[RECOV_IN33]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN33(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN33,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN33]

//>> SET_[RECOV_IN33]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN33(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN33>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN33]

//>> CLEAR_[RECOV_IN33]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN33(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN33>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN33]

//>> GET_[RECOV_IN33]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN33(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN33,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN33]

//>> GET_[RECOV_IN33]
static inline bool GET_RECOV_IN33(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN33>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN33]

//>> SET_[RECOV_IN34]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN34(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN34,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN34]

//>> SET_[RECOV_IN34]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN34(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN34,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN34]

//>> SET_[RECOV_IN34]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN34(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN34>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN34]

//>> CLEAR_[RECOV_IN34]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN34(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN34>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN34]

//>> GET_[RECOV_IN34]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN34(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN34,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN34]

//>> GET_[RECOV_IN34]
static inline bool GET_RECOV_IN34(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN34>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN34]

//>> SET_[RECOV_IN35]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN35(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN35,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN35]

//>> SET_[RECOV_IN35]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN35(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN35,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN35]

//>> SET_[RECOV_IN35]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN35(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN35>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN35]

//>> CLEAR_[RECOV_IN35]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN35(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN35>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN35]

//>> GET_[RECOV_IN35]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN35(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN35,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN35]

//>> GET_[RECOV_IN35]
static inline bool GET_RECOV_IN35(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN35>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN35]

//>> SET_[RECOV_IN36]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN36(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN36,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN36]

//>> SET_[RECOV_IN36]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN36(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN36,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN36]

//>> SET_[RECOV_IN36]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN36(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN36>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN36]

//>> CLEAR_[RECOV_IN36]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN36(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN36>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN36]

//>> GET_[RECOV_IN36]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN36(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN36,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN36]

//>> GET_[RECOV_IN36]
static inline bool GET_RECOV_IN36(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN36>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN36]

//>> SET_[RECOV_IN37]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN37(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN37,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN37]

//>> SET_[RECOV_IN37]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN37(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN37,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN37]

//>> SET_[RECOV_IN37]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN37(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN37>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN37]

//>> CLEAR_[RECOV_IN37]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN37(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN37>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN37]

//>> GET_[RECOV_IN37]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN37(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN37,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN37]

//>> GET_[RECOV_IN37]
static inline bool GET_RECOV_IN37(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN37>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN37]

//>> SET_[RECOV_IN38]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN38(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN38,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN38]

//>> SET_[RECOV_IN38]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN38(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN38,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN38]

//>> SET_[RECOV_IN38]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN38(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN38>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN38]

//>> CLEAR_[RECOV_IN38]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN38(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN38>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN38]

//>> GET_[RECOV_IN38]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN38(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN38,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN38]

//>> GET_[RECOV_IN38]
static inline bool GET_RECOV_IN38(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN38>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN38]

//>> SET_[RECOV_IN39]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN39(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN39,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN39]

//>> SET_[RECOV_IN39]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN39(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN39,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN39]

//>> SET_[RECOV_IN39]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN39(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN39>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN39]

//>> CLEAR_[RECOV_IN39]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN39(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN39>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN39]

//>> GET_[RECOV_IN39]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN39(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN39,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN39]

//>> GET_[RECOV_IN39]
static inline bool GET_RECOV_IN39(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN39>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN39]

//>> SET_[RECOV_IN40]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN40(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN40,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN40]

//>> SET_[RECOV_IN40]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN40(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN40,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN40]

//>> SET_[RECOV_IN40]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN40(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN40>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN40]

//>> CLEAR_[RECOV_IN40]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN40(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN40>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN40]

//>> GET_[RECOV_IN40]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN40(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN40,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN40]

//>> GET_[RECOV_IN40]
static inline bool GET_RECOV_IN40(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN40>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN40]

//>> SET_[RECOV_IN41]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN41(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN41,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN41]

//>> SET_[RECOV_IN41]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN41(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN41,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN41]

//>> SET_[RECOV_IN41]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN41(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN41>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN41]

//>> CLEAR_[RECOV_IN41]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN41(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN41>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN41]

//>> GET_[RECOV_IN41]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN41(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN41,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN41]

//>> GET_[RECOV_IN41]
static inline bool GET_RECOV_IN41(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN41>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN41]

//>> SET_[RECOV_IN42]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN42(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN42,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN42]

//>> SET_[RECOV_IN42]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN42(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN42,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN42]

//>> SET_[RECOV_IN42]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN42(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN42>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN42]

//>> CLEAR_[RECOV_IN42]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN42(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN42>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN42]

//>> GET_[RECOV_IN42]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN42(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN42,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN42]

//>> GET_[RECOV_IN42]
static inline bool GET_RECOV_IN42(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN42>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN42]

//>> SET_[RECOV_IN43]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN43(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN43,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN43]

//>> SET_[RECOV_IN43]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN43(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN43,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN43]

//>> SET_[RECOV_IN43]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN43(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN43>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN43]

//>> CLEAR_[RECOV_IN43]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN43(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN43>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN43]

//>> GET_[RECOV_IN43]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN43(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN43,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN43]

//>> GET_[RECOV_IN43]
static inline bool GET_RECOV_IN43(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN43>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN43]

//>> SET_[RECOV_IN44]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN44(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN44,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN44]

//>> SET_[RECOV_IN44]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN44(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN44,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN44]

//>> SET_[RECOV_IN44]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN44(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN44>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN44]

//>> CLEAR_[RECOV_IN44]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN44(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN44>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN44]

//>> GET_[RECOV_IN44]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN44(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN44,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN44]

//>> GET_[RECOV_IN44]
static inline bool GET_RECOV_IN44(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN44>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN44]

//>> SET_[RECOV_IN45]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN45(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN45,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN45]

//>> SET_[RECOV_IN45]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN45(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN45,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN45]

//>> SET_[RECOV_IN45]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN45(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN45>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN45]

//>> CLEAR_[RECOV_IN45]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN45(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN45>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN45]

//>> GET_[RECOV_IN45]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN45(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN45,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN45]

//>> GET_[RECOV_IN45]
static inline bool GET_RECOV_IN45(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN45>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN45]

//>> SET_[RECOV_IN46]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN46(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN46,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN46]

//>> SET_[RECOV_IN46]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN46(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN46,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN46]

//>> SET_[RECOV_IN46]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN46(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN46>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN46]

//>> CLEAR_[RECOV_IN46]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN46(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN46>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN46]

//>> GET_[RECOV_IN46]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN46(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN46,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN46]

//>> GET_[RECOV_IN46]
static inline bool GET_RECOV_IN46(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN46>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN46]

//>> SET_[RECOV_IN47]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN47(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN47,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN47]

//>> SET_[RECOV_IN47]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN47(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN47,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN47]

//>> SET_[RECOV_IN47]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN47(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN47>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN47]

//>> CLEAR_[RECOV_IN47]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN47(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN47>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN47]

//>> GET_[RECOV_IN47]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN47(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN47,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN47]

//>> GET_[RECOV_IN47]
static inline bool GET_RECOV_IN47(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN47>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN47]

//>> SET_[RECOV_IN48]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN48(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN48,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN48]

//>> SET_[RECOV_IN48]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN48(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN48,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN48]

//>> SET_[RECOV_IN48]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN48(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN48>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN48]

//>> CLEAR_[RECOV_IN48]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN48(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN48>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN48]

//>> GET_[RECOV_IN48]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN48(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN48,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN48]

//>> GET_[RECOV_IN48]
static inline bool GET_RECOV_IN48(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN48>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN48]

//>> SET_[RECOV_IN49]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN49(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN49,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN49]

//>> SET_[RECOV_IN49]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN49(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN49,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN49]

//>> SET_[RECOV_IN49]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN49(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN49>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN49]

//>> CLEAR_[RECOV_IN49]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN49(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN49>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN49]

//>> GET_[RECOV_IN49]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN49(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN49,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN49]

//>> GET_[RECOV_IN49]
static inline bool GET_RECOV_IN49(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN49>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN49]

//>> SET_[RECOV_IN50]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN50(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN50,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN50]

//>> SET_[RECOV_IN50]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN50(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN50,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN50]

//>> SET_[RECOV_IN50]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN50(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN50>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN50]

//>> CLEAR_[RECOV_IN50]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN50(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN50>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN50]

//>> GET_[RECOV_IN50]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN50(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN50,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN50]

//>> GET_[RECOV_IN50]
static inline bool GET_RECOV_IN50(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN50>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN50]

//>> SET_[RECOV_IN51]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN51(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN51,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN51]

//>> SET_[RECOV_IN51]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN51(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN51,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN51]

//>> SET_[RECOV_IN51]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN51(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN51>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN51]

//>> CLEAR_[RECOV_IN51]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN51(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN51>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN51]

//>> GET_[RECOV_IN51]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN51(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN51,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN51]

//>> GET_[RECOV_IN51]
static inline bool GET_RECOV_IN51(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN51>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN51]

//>> SET_[RECOV_IN52]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN52(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN52,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN52]

//>> SET_[RECOV_IN52]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN52(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN52,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN52]

//>> SET_[RECOV_IN52]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN52(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN52>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN52]

//>> CLEAR_[RECOV_IN52]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN52(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN52>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN52]

//>> GET_[RECOV_IN52]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN52(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN52,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN52]

//>> GET_[RECOV_IN52]
static inline bool GET_RECOV_IN52(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN52>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN52]

//>> SET_[RECOV_IN53]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN53(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN53,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access RECOV_IN53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN53]

//>> SET_[RECOV_IN53]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN53(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.insertFromRight<RECOV_IN53,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access RECOV_IN53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN53]

//>> SET_[RECOV_IN53]
static inline fapi2::buffer<uint64_t>& SET_RECOV_IN53(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.setBit<RECOV_IN53>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access RECOV_IN53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RECOV_IN53]

//>> CLEAR_[RECOV_IN53]
static inline fapi2::buffer<uint64_t>& CLEAR_RECOV_IN53(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return o_data.clearBit<RECOV_IN53>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access RECOV_IN53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RECOV_IN53]

//>> GET_[RECOV_IN53]
static inline fapi2::buffer<uint64_t>& GET_RECOV_IN53(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.extractToRight<RECOV_IN53,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access RECOV_IN53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN53]

//>> GET_[RECOV_IN53]
static inline bool GET_RECOV_IN53(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RECOV));
#endif
    return i_data.getBit<RECOV_IN53>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access RECOV_IN53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RECOV_IN53]

//>> PREP_[REC_ERR_MST4_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_REC_ERR_MST4_REG2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST4_REG2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[REC_ERR_MST4_REG2]

//>> GET_[REC_ERR_MST4_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_REC_ERR_MST4_REG2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST4_REG2;
#endif
    return fapi2::getScom(i_target, REC_ERR_MST4_REG2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[REC_ERR_MST4_REG2]

//>> PUT_[REC_ERR_MST4_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_REC_ERR_MST4_REG2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return fapi2::putScom(i_target, REC_ERR_MST4_REG2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[REC_ERR_MST4_REG2]


//>> SET_[REC_ERR_MST4_REG2_32_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_32_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_32_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG2_32_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_32_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_32_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_32_MST4_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_32_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG2_32_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_32_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_32_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_32_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.setBit<REC_ERR_MST4_REG2_32_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST4_REG2_32_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_32_MST4_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST4_REG2_32_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST4_REG2_32_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST4_REG2_32_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST4_REG2_32_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST4_REG2_32_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG2_32_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG2_32_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG2_32_MST4_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG2_32_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_32_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG2_32_MST4_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST4_REG2_32_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.getBit<REC_ERR_MST4_REG2_32_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST4_REG2_32_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_32_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_32_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_32_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_32_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_32_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG2_32_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_32_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG2_32_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_32_MST4_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_32_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_32_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG2_32_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_32_MST4_ERROR_CODE]

//>> GET_[REC_ERR_MST4_REG2_32_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG2_32_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG2_32_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_32_MST4_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG2_32_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_32_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG2_33_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_33_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_33_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG2_33_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_33_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_33_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_33_MST4_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_33_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG2_33_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_33_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_33_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_33_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.setBit<REC_ERR_MST4_REG2_33_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST4_REG2_33_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_33_MST4_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST4_REG2_33_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST4_REG2_33_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST4_REG2_33_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST4_REG2_33_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST4_REG2_33_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG2_33_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG2_33_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG2_33_MST4_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG2_33_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_33_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG2_33_MST4_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST4_REG2_33_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.getBit<REC_ERR_MST4_REG2_33_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST4_REG2_33_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_33_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_33_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_33_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_33_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_33_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG2_33_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_33_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG2_33_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_33_MST4_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_33_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_33_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG2_33_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_33_MST4_ERROR_CODE]

//>> GET_[REC_ERR_MST4_REG2_33_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG2_33_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG2_33_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_33_MST4_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG2_33_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_33_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG2_34_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_34_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_34_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG2_34_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_34_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_34_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_34_MST4_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_34_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG2_34_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_34_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_34_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_34_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.setBit<REC_ERR_MST4_REG2_34_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST4_REG2_34_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_34_MST4_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST4_REG2_34_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST4_REG2_34_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST4_REG2_34_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST4_REG2_34_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST4_REG2_34_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG2_34_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG2_34_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG2_34_MST4_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG2_34_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_34_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG2_34_MST4_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST4_REG2_34_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.getBit<REC_ERR_MST4_REG2_34_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST4_REG2_34_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_34_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_34_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_34_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_34_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_34_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG2_34_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_34_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG2_34_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_34_MST4_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_34_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_34_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG2_34_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_34_MST4_ERROR_CODE]

//>> GET_[REC_ERR_MST4_REG2_34_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG2_34_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG2_34_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_34_MST4_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG2_34_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_34_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG2_35_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_35_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_35_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG2_35_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_35_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_35_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_35_MST4_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_35_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG2_35_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_35_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_35_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_35_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.setBit<REC_ERR_MST4_REG2_35_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST4_REG2_35_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_35_MST4_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST4_REG2_35_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST4_REG2_35_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST4_REG2_35_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST4_REG2_35_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST4_REG2_35_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG2_35_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG2_35_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG2_35_MST4_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG2_35_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_35_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG2_35_MST4_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST4_REG2_35_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.getBit<REC_ERR_MST4_REG2_35_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST4_REG2_35_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_35_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_35_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_35_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_35_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_35_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG2_35_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_35_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG2_35_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_35_MST4_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_35_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_35_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG2_35_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_35_MST4_ERROR_CODE]

//>> GET_[REC_ERR_MST4_REG2_35_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG2_35_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG2_35_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_35_MST4_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG2_35_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_35_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG2_36_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_36_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_36_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG2_36_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_36_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_36_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_36_MST4_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_36_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG2_36_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_36_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_36_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_36_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.setBit<REC_ERR_MST4_REG2_36_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST4_REG2_36_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_36_MST4_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST4_REG2_36_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST4_REG2_36_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST4_REG2_36_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST4_REG2_36_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST4_REG2_36_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG2_36_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG2_36_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG2_36_MST4_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG2_36_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_36_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG2_36_MST4_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST4_REG2_36_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.getBit<REC_ERR_MST4_REG2_36_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST4_REG2_36_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_36_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_36_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_36_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_36_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_36_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG2_36_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_36_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG2_36_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_36_MST4_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_36_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_36_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG2_36_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_36_MST4_ERROR_CODE]

//>> GET_[REC_ERR_MST4_REG2_36_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG2_36_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG2_36_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_36_MST4_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG2_36_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_36_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG2_37_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_37_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_37_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG2_37_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_37_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_37_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_37_MST4_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_37_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG2_37_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_37_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_37_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_37_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.setBit<REC_ERR_MST4_REG2_37_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST4_REG2_37_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_37_MST4_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST4_REG2_37_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST4_REG2_37_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST4_REG2_37_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST4_REG2_37_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST4_REG2_37_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG2_37_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG2_37_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG2_37_MST4_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG2_37_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_37_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG2_37_MST4_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST4_REG2_37_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.getBit<REC_ERR_MST4_REG2_37_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST4_REG2_37_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_37_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_37_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_37_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_37_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_37_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG2_37_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_37_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG2_37_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_37_MST4_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_37_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_37_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG2_37_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_37_MST4_ERROR_CODE]

//>> GET_[REC_ERR_MST4_REG2_37_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG2_37_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG2_37_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_37_MST4_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG2_37_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_37_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG2_38_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_38_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_38_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG2_38_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_38_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_38_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_38_MST4_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_38_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG2_38_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_38_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_38_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_38_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.setBit<REC_ERR_MST4_REG2_38_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST4_REG2_38_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_38_MST4_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST4_REG2_38_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST4_REG2_38_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST4_REG2_38_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST4_REG2_38_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST4_REG2_38_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG2_38_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG2_38_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG2_38_MST4_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG2_38_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_38_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG2_38_MST4_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST4_REG2_38_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.getBit<REC_ERR_MST4_REG2_38_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST4_REG2_38_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_38_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_38_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_38_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_38_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_38_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG2_38_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_38_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG2_38_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_38_MST4_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_38_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_38_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG2_38_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_38_MST4_ERROR_CODE]

//>> GET_[REC_ERR_MST4_REG2_38_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG2_38_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG2_38_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_38_MST4_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG2_38_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_38_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG2_39_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_39_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_39_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG2_39_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_39_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_39_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_39_MST4_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_39_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG2_39_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_39_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_39_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_39_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.setBit<REC_ERR_MST4_REG2_39_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST4_REG2_39_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_39_MST4_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST4_REG2_39_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST4_REG2_39_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST4_REG2_39_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST4_REG2_39_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST4_REG2_39_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG2_39_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG2_39_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG2_39_MST4_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG2_39_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_39_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG2_39_MST4_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST4_REG2_39_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.getBit<REC_ERR_MST4_REG2_39_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST4_REG2_39_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_39_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_39_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_39_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_39_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_39_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG2_39_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_39_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG2_39_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_39_MST4_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_39_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_39_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG2_39_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_39_MST4_ERROR_CODE]

//>> GET_[REC_ERR_MST4_REG2_39_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG2_39_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG2_39_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_39_MST4_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG2_39_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_39_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG2_40_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_40_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_40_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG2_40_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_40_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_40_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_40_MST4_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_40_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG2_40_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_40_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_40_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_40_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.setBit<REC_ERR_MST4_REG2_40_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST4_REG2_40_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_40_MST4_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST4_REG2_40_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST4_REG2_40_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST4_REG2_40_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST4_REG2_40_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST4_REG2_40_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG2_40_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG2_40_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG2_40_MST4_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG2_40_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_40_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG2_40_MST4_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST4_REG2_40_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.getBit<REC_ERR_MST4_REG2_40_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST4_REG2_40_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_40_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_40_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_40_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_40_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_40_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG2_40_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_40_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG2_40_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_40_MST4_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_40_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_40_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG2_40_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_40_MST4_ERROR_CODE]

//>> GET_[REC_ERR_MST4_REG2_40_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG2_40_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG2_40_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_40_MST4_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG2_40_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_40_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG2_41_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_41_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_41_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG2_41_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_41_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_41_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_41_MST4_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_41_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG2_41_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_41_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_41_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_41_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.setBit<REC_ERR_MST4_REG2_41_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST4_REG2_41_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_41_MST4_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST4_REG2_41_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST4_REG2_41_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST4_REG2_41_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST4_REG2_41_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST4_REG2_41_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG2_41_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG2_41_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG2_41_MST4_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG2_41_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_41_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG2_41_MST4_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST4_REG2_41_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.getBit<REC_ERR_MST4_REG2_41_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST4_REG2_41_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_41_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_41_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_41_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_41_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_41_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG2_41_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_41_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG2_41_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_41_MST4_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_41_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_41_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG2_41_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_41_MST4_ERROR_CODE]

//>> GET_[REC_ERR_MST4_REG2_41_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG2_41_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG2_41_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_41_MST4_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG2_41_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_41_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG2_42_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_42_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_42_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG2_42_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_42_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_42_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_42_MST4_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_42_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG2_42_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_42_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_42_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_42_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.setBit<REC_ERR_MST4_REG2_42_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST4_REG2_42_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_42_MST4_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST4_REG2_42_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST4_REG2_42_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST4_REG2_42_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST4_REG2_42_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST4_REG2_42_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG2_42_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG2_42_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG2_42_MST4_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG2_42_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_42_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG2_42_MST4_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST4_REG2_42_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.getBit<REC_ERR_MST4_REG2_42_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST4_REG2_42_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_42_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_42_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_42_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_42_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_42_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG2_42_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_42_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG2_42_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_42_MST4_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_42_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_42_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG2_42_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_42_MST4_ERROR_CODE]

//>> GET_[REC_ERR_MST4_REG2_42_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG2_42_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG2_42_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_42_MST4_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG2_42_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_42_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG2_43_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_43_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_43_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG2_43_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_43_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_43_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_43_MST4_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_43_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG2_43_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_43_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_43_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_43_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.setBit<REC_ERR_MST4_REG2_43_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST4_REG2_43_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_43_MST4_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST4_REG2_43_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST4_REG2_43_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST4_REG2_43_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST4_REG2_43_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST4_REG2_43_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG2_43_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG2_43_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG2_43_MST4_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG2_43_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_43_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG2_43_MST4_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST4_REG2_43_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.getBit<REC_ERR_MST4_REG2_43_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST4_REG2_43_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_43_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_43_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_43_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_43_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_43_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG2_43_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_43_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG2_43_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_43_MST4_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_43_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_43_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG2_43_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_43_MST4_ERROR_CODE]

//>> GET_[REC_ERR_MST4_REG2_43_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG2_43_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG2_43_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_43_MST4_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG2_43_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_43_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG2_44_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_44_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_44_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG2_44_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_44_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_44_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_44_MST4_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_44_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG2_44_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_44_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_44_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_44_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.setBit<REC_ERR_MST4_REG2_44_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST4_REG2_44_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_44_MST4_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST4_REG2_44_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST4_REG2_44_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST4_REG2_44_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST4_REG2_44_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST4_REG2_44_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG2_44_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG2_44_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG2_44_MST4_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG2_44_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_44_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG2_44_MST4_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST4_REG2_44_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.getBit<REC_ERR_MST4_REG2_44_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST4_REG2_44_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_44_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_44_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_44_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_44_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_44_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG2_44_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_44_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG2_44_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_44_MST4_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_44_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_44_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG2_44_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_44_MST4_ERROR_CODE]

//>> GET_[REC_ERR_MST4_REG2_44_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG2_44_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG2_44_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_44_MST4_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG2_44_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_44_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG2_45_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_45_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_45_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG2_45_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_45_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_45_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_45_MST4_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_45_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG2_45_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_45_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_45_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_45_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.setBit<REC_ERR_MST4_REG2_45_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST4_REG2_45_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_45_MST4_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST4_REG2_45_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST4_REG2_45_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST4_REG2_45_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST4_REG2_45_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST4_REG2_45_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG2_45_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG2_45_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG2_45_MST4_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG2_45_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_45_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG2_45_MST4_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST4_REG2_45_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.getBit<REC_ERR_MST4_REG2_45_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST4_REG2_45_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_45_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_45_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_45_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_45_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_45_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG2_45_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_45_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG2_45_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_45_MST4_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_45_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_45_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG2_45_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_45_MST4_ERROR_CODE]

//>> GET_[REC_ERR_MST4_REG2_45_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG2_45_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG2_45_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_45_MST4_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG2_45_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_45_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG2_46_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_46_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_46_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG2_46_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_46_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_46_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_46_MST4_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_46_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG2_46_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_46_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_46_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_46_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.setBit<REC_ERR_MST4_REG2_46_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST4_REG2_46_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_46_MST4_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST4_REG2_46_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST4_REG2_46_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST4_REG2_46_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST4_REG2_46_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST4_REG2_46_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG2_46_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG2_46_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG2_46_MST4_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG2_46_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_46_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG2_46_MST4_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST4_REG2_46_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.getBit<REC_ERR_MST4_REG2_46_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST4_REG2_46_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_46_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_46_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_46_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_46_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_46_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG2_46_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_46_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG2_46_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_46_MST4_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_46_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_46_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG2_46_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_46_MST4_ERROR_CODE]

//>> GET_[REC_ERR_MST4_REG2_46_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG2_46_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG2_46_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_46_MST4_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG2_46_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_46_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG2_47_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_47_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_47_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG2_47_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_47_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_47_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_47_MST4_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_47_MST4_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG2_47_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_47_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_47_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_47_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.setBit<REC_ERR_MST4_REG2_47_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST4_REG2_47_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_47_MST4_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST4_REG2_47_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST4_REG2_47_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST4_REG2_47_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST4_REG2_47_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST4_REG2_47_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG2_47_MST4_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG2_47_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG2_47_MST4_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG2_47_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_47_MST4_RESPONSE_BIT]

//>> GET_[REC_ERR_MST4_REG2_47_MST4_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST4_REG2_47_MST4_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.getBit<REC_ERR_MST4_REG2_47_MST4_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST4_REG2_47_MST4_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_47_MST4_RESPONSE_BIT]

//>> SET_[REC_ERR_MST4_REG2_47_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_47_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_47_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_47_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST4_REG2_47_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_47_MST4_ERROR_CODE]

//>> SET_[REC_ERR_MST4_REG2_47_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST4_REG2_47_MST4_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST4_REG2_47_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_47_MST4_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST4_REG2_47_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST4_REG2_47_MST4_ERROR_CODE]

//>> GET_[REC_ERR_MST4_REG2_47_MST4_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST4_REG2_47_MST4_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST4_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST4_REG2_47_MST4_ERROR_CODE,
           REC_ERR_MST4_REG2_47_MST4_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST4_REG2_47_MST4_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST4_REG2_47_MST4_ERROR_CODE]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG103]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG103(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG103;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG103]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG103]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG103(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG103;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG103, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG103]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG103]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG103(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG103));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG103, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG103]


//>> SET_[SINGLE_OTP_ROM_OTPROM_REG103_REGISTER103]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG103_REGISTER103(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG103));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG103_REGISTER103,
           SINGLE_OTP_ROM_OTPROM_REG103_REGISTER103_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG103_REGISTER103 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG103_REGISTER103]

//>> SET_[SINGLE_OTP_ROM_OTPROM_REG103_REGISTER103]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG103_REGISTER103(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG103));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG103_REGISTER103,
           SINGLE_OTP_ROM_OTPROM_REG103_REGISTER103_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG103_REGISTER103 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG103_REGISTER103]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG103_REGISTER103]
static inline fapi2::buffer<uint64_t>& GET_SINGLE_OTP_ROM_OTPROM_REG103_REGISTER103(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG103));
#endif
    return i_data.extractToRight<SINGLE_OTP_ROM_OTPROM_REG103_REGISTER103,
           SINGLE_OTP_ROM_OTPROM_REG103_REGISTER103_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG103_REGISTER103 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG103_REGISTER103]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG12]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG12(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG12;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG12]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG12]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG12(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG12;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG12, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG12]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG12]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG12(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG12));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG12, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG12]


//>> SET_[SINGLE_OTP_ROM_OTPROM_REG12_REGISTER12]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG12_REGISTER12(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG12));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG12_REGISTER12,
           SINGLE_OTP_ROM_OTPROM_REG12_REGISTER12_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG12_REGISTER12 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG12_REGISTER12]

//>> SET_[SINGLE_OTP_ROM_OTPROM_REG12_REGISTER12]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG12_REGISTER12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG12));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG12_REGISTER12,
           SINGLE_OTP_ROM_OTPROM_REG12_REGISTER12_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG12_REGISTER12 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG12_REGISTER12]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG12_REGISTER12]
static inline fapi2::buffer<uint64_t>& GET_SINGLE_OTP_ROM_OTPROM_REG12_REGISTER12(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG12));
#endif
    return i_data.extractToRight<SINGLE_OTP_ROM_OTPROM_REG12_REGISTER12,
           SINGLE_OTP_ROM_OTPROM_REG12_REGISTER12_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG12_REGISTER12 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG12_REGISTER12]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG25]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG25(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG25;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG25]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG25]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG25(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG25;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG25, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG25]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG25]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG25(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG25));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG25, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG25]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
