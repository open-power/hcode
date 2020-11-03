/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/eq/reg00009_unused.H $        */
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

#ifndef __EQ_REG00009_H_UNUSED__
#define __EQ_REG00009_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace eq
{
#endif


//>> PREP_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG]

//>> PUT_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG]


//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE,
           CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE,
           CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE,
           CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]

//>> CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]
static inline bool GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]

//>> CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]
static inline bool GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]

//>> CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]
static inline bool GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]

//>> CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]
static inline bool GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]

//>> CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]
static inline bool GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]

//>> CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]
static inline bool GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]

//>> CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]
static inline bool GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]

//>> CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]
static inline bool GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]

//>> CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]
static inline bool GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]

//>> CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]
static inline bool GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]

//>> CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]
static inline bool GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]

//>> CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]
static inline bool GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]

//>> CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]
static inline bool GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]

//>> CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]
static inline bool GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]

//>> CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]
static inline bool GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]

//>> CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]
static inline bool GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]

//>> CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]
static inline bool GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]

//>> CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]
static inline bool GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]

//>> CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]
static inline bool GET_CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]

//>> PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES]

//>> PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES]


//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE]

//>> PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA]

//>> PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA]


//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.setBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]

//>> CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.clearBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]
static inline bool GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return i_data.getBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ORE_IS_LATE_HIST]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.setBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]

//>> CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.clearBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]
static inline bool GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return i_data.getBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SENSOR_DATA_ACHE_IS_LATE_HIST]

//>> PREP_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG]

//>> PUT_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG]


//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE]

//>> PREP_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS]

//>> PUT_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS]


//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_LOCK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_LOCK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_LOCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_LOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_LOCK]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_LOCK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_LOCK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_LOCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_LOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_LOCK]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_LOCK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_LOCK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_LOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_LOCK]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_LOCK]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_LOCK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_LOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_LOCK]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_LOCK]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_LOCK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_LOCK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_LOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_LOCK]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_LOCK]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_LOCK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_LOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_LOCK]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD1]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD1]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD1]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD1]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD1]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD1]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD1]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD1]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD1]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD2]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD2]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD2]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD2]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD2]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD2]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD2]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD2]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD2]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD2]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD2]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD2]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD3]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD3]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD3]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD3]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD3]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD3]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD3]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD3]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD3]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD3]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD3]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_PRELOAD3]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_CHOP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_CHOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_CHOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_CHOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_CHOP]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_CHOP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_CHOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_CHOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_CHOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_CHOP]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_CHOP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_CHOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_CHOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_CHOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_CHOP]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_CHOP]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_CHOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_CHOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_CHOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_CHOP]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_CHOP]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_CHOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_CHOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_CHOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_CHOP]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_CHOP]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_CHOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_CHOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_CHOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_CHOP]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_FSM_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_FSM_STATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_FSM_STATE,
           CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_FSM_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_FSM_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_FSM_STATE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_FSM_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_FSM_STATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_FSM_STATE,
           CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_FSM_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_FSM_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_FSM_STATE]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_FSM_STATE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_FSM_STATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_FSM_STATE,
           CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_FSM_STATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_FSM_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_FSM_STATE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE,
           CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE,
           CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE,
           CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG,
           CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG,
           CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG,
           CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG]

//>> PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE]

//>> PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE]


//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]

//>> PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INIT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INIT_MODE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INIT_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INIT_MODE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INIT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INIT_MODE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INIT_MODE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INIT_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INIT_MODE]

//>> PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INIT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INIT_MODE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INIT_MODE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INIT_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INIT_MODE]


//>> PREP_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT]

//>> PUT_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT]


//>> SET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL,
           CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL,
           CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL,
           CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL,
           CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL,
           CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL,
           CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL]

//>> PREP_[CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET]

//>> PUT_[CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET]


//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE,
           CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE,
           CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE,
           CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE]

//>> PREP_[CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE]

//>> PUT_[CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE]


//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]

//>> PREP_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE]

//>> PUT_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE]


//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE));
#endif
    return o_data.setBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE]

//>> CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE));
#endif
    return o_data.clearBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE));
#endif
    return i_data.extractToRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE]
static inline bool GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE));
#endif
    return i_data.getBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE));
#endif
    return o_data.setBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE]

//>> CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE));
#endif
    return o_data.clearBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE));
#endif
    return i_data.extractToRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE]
static inline bool GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE));
#endif
    return i_data.getBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE]

//>> PREP_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG]

//>> PUT_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG]


//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE,
           CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE,
           CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE,
           CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_MODE_FSM_STATE]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_INIT]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_HOLD]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_START]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_LP]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LP]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_DAC]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_DAC]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_LOAD_SENS_EN]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_MEASURE]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_COMP]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_EVAL]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_FINISH]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_ERROR]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_STATE_WAIT_LOCK]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_HOLD]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ADJUST]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_ONE_SHOT]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_SINGLE_STP]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MODE_FSM_STATE_REG_IS_MODEFSM_MEAS_ONLY]

//>> PREP_[CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY]

//>> PUT_[CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY]


//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE,
           CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE,
           CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE,
           CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SET_COMP_DLY_COMP_DELAY_VALUE]

//>> PREP_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS]

//>> PUT_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS]


//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ONE_SHOT_STATE]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_OVERFLOW]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_UNDERFLOW]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_LOCK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_LOCK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_LOCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_LOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_LOCK]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_LOCK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_LOCK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_LOCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_LOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_LOCK]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_LOCK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_LOCK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_LOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_LOCK]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_LOCK]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_LOCK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_LOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_LOCK]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_LOCK]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_LOCK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_LOCK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_LOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_LOCK]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_LOCK]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_LOCK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_LOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_LOCK]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUST_ERR]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCSENSE_IN]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD1]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD1]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD1]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD1]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD1]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD1]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD1]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD1]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD1]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD2]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD2]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD2]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD2]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD2]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD2]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD2]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD2]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD2]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD2]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD2]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD2]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD3]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD3]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD3]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD3]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD3]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD3]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD3]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD3]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD3]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD3]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD3]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_PRELOAD3]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_WAIT_CNT_EN]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_CHOP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_CHOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_CHOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_CHOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_CHOP]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_CHOP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_CHOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_CHOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_CHOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_CHOP]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_CHOP]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_CHOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_CHOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_CHOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_CHOP]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_CHOP]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_CHOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_CHOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_CHOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_CHOP]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_CHOP]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_CHOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_CHOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_CHOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_CHOP]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_CHOP]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_CHOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_CHOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_CHOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_CHOP]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_FSM_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_FSM_STATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_FSM_STATE,
           CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_FSM_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_FSM_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_FSM_STATE]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_FSM_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_FSM_STATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_FSM_STATE,
           CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_FSM_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_FSM_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_FSM_STATE]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_FSM_STATE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_FSM_STATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_FSM_STATE,
           CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_FSM_STATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_FSM_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_FSM_STATE]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE,
           CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE,
           CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE,
           CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_COMP_CYCLE]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_INVERT_SENSE]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_ADJUSTMENT_DIR]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG,
           CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG,
           CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG,
           CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_STATUS_BITS_DCC_CONFIG]

//>> PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS]

//>> PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS]


//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS));
#endif
    return o_data.setBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT]

//>> CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS));
#endif
    return o_data.clearBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT]
static inline bool GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS));
#endif
    return i_data.getBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_PDLYS_CACHE_PDLYS_INVERT]

//>> PREP_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_CLKSTOP_ON_XSTOP_MASK3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_CLKSTOP_ON_XSTOP_MASK3;
#endif
    return fapi2::getScom(i_target, EPS_FIR_CLKSTOP_ON_XSTOP_MASK3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3]

//>> PUT_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return fapi2::putScom(i_target, EPS_FIR_CLKSTOP_ON_XSTOP_MASK3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3]


//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_RECOV_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SPATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_LXSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_HOSTATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_SYS_XSTOP_STAGED_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_DBG_TRIG_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP010]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP011]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP012]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP013]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP014]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK3));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK3_UNIT_TC_FIR_LOCAL_XSTOP015]

//>> PREP_[EPS_THERM_WSUB2_SKITTER_FORCE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_THERM_WSUB2_SKITTER_FORCE_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB2_SKITTER_FORCE_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_THERM_WSUB2_SKITTER_FORCE_REG]

//>> GET_[EPS_THERM_WSUB2_SKITTER_FORCE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_THERM_WSUB2_SKITTER_FORCE_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB2_SKITTER_FORCE_REG;
#endif
    return fapi2::getScom(i_target, EPS_THERM_WSUB2_SKITTER_FORCE_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_THERM_WSUB2_SKITTER_FORCE_REG]

//>> PUT_[EPS_THERM_WSUB2_SKITTER_FORCE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_THERM_WSUB2_SKITTER_FORCE_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_FORCE_REG));
#endif
    return fapi2::putScom(i_target, EPS_THERM_WSUB2_SKITTER_FORCE_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_THERM_WSUB2_SKITTER_FORCE_REG]


//>> SET_[EPS_THERM_WSUB2_SKITTER_FORCE_REG_F_SKITTER_READ]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB2_SKITTER_FORCE_REG_F_SKITTER_READ(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_FORCE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB2_SKITTER_FORCE_REG_F_SKITTER_READ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_THERM_WSUB2_SKITTER_FORCE_REG_F_SKITTER_READ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB2_SKITTER_FORCE_REG_F_SKITTER_READ]

//>> SET_[EPS_THERM_WSUB2_SKITTER_FORCE_REG_F_SKITTER_READ]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB2_SKITTER_FORCE_REG_F_SKITTER_READ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_FORCE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB2_SKITTER_FORCE_REG_F_SKITTER_READ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_THERM_WSUB2_SKITTER_FORCE_REG_F_SKITTER_READ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB2_SKITTER_FORCE_REG_F_SKITTER_READ]

//>> SET_[EPS_THERM_WSUB2_SKITTER_FORCE_REG_F_SKITTER_READ]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB2_SKITTER_FORCE_REG_F_SKITTER_READ(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_FORCE_REG));
#endif
    return o_data.setBit<EPS_THERM_WSUB2_SKITTER_FORCE_REG_F_SKITTER_READ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_THERM_WSUB2_SKITTER_FORCE_REG_F_SKITTER_READ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB2_SKITTER_FORCE_REG_F_SKITTER_READ]

//>> CLEAR_[EPS_THERM_WSUB2_SKITTER_FORCE_REG_F_SKITTER_READ]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_THERM_WSUB2_SKITTER_FORCE_REG_F_SKITTER_READ(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_FORCE_REG));
#endif
    return o_data.clearBit<EPS_THERM_WSUB2_SKITTER_FORCE_REG_F_SKITTER_READ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_THERM_WSUB2_SKITTER_FORCE_REG_F_SKITTER_READ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_THERM_WSUB2_SKITTER_FORCE_REG_F_SKITTER_READ]

//>> GET_[EPS_THERM_WSUB2_SKITTER_FORCE_REG_F_SKITTER_READ]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB2_SKITTER_FORCE_REG_F_SKITTER_READ(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_FORCE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB2_SKITTER_FORCE_REG_F_SKITTER_READ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_THERM_WSUB2_SKITTER_FORCE_REG_F_SKITTER_READ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB2_SKITTER_FORCE_REG_F_SKITTER_READ]

//>> GET_[EPS_THERM_WSUB2_SKITTER_FORCE_REG_F_SKITTER_READ]
static inline bool GET_EPS_THERM_WSUB2_SKITTER_FORCE_REG_F_SKITTER_READ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_SKITTER_FORCE_REG));
#endif
    return i_data.getBit<EPS_THERM_WSUB2_SKITTER_FORCE_REG_F_SKITTER_READ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_THERM_WSUB2_SKITTER_FORCE_REG_F_SKITTER_READ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB2_SKITTER_FORCE_REG_F_SKITTER_READ]

//>> PREP_[EPS_THERM_WSUB_SKITTER_DATA2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_THERM_WSUB_SKITTER_DATA2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_DATA2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_THERM_WSUB_SKITTER_DATA2]

//>> GET_[EPS_THERM_WSUB_SKITTER_DATA2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_THERM_WSUB_SKITTER_DATA2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_DATA2;
#endif
    return fapi2::getScom(i_target, EPS_THERM_WSUB_SKITTER_DATA2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_DATA2]

//>> PUT_[EPS_THERM_WSUB_SKITTER_DATA2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_THERM_WSUB_SKITTER_DATA2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_DATA2));
#endif
    return fapi2::putScom(i_target, EPS_THERM_WSUB_SKITTER_DATA2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_THERM_WSUB_SKITTER_DATA2]


//>> PREP_[EPS_THERM_WSUB_SKITTER_FORCE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_THERM_WSUB_SKITTER_FORCE_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_FORCE_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_THERM_WSUB_SKITTER_FORCE_REG]

//>> GET_[EPS_THERM_WSUB_SKITTER_FORCE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_THERM_WSUB_SKITTER_FORCE_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_FORCE_REG;
#endif
    return fapi2::getScom(i_target, EPS_THERM_WSUB_SKITTER_FORCE_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_FORCE_REG]

//>> PUT_[EPS_THERM_WSUB_SKITTER_FORCE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_THERM_WSUB_SKITTER_FORCE_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_FORCE_REG));
#endif
    return fapi2::putScom(i_target, EPS_THERM_WSUB_SKITTER_FORCE_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_THERM_WSUB_SKITTER_FORCE_REG]


//>> SET_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_FORCE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]

//>> SET_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_FORCE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]

//>> SET_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_FORCE_REG));
#endif
    return o_data.setBit<EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]

//>> CLEAR_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_FORCE_REG));
#endif
    return o_data.clearBit<EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]

//>> GET_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_FORCE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]

//>> GET_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]
static inline bool GET_EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_FORCE_REG));
#endif
    return i_data.getBit<EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_FORCE_REG_F_SKITTER_READ]

//>> PREP_[L3TRA0_TR0_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA0_TR0_CONFIG_0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA0_TR0_CONFIG_0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA0_TR0_CONFIG_0]

//>> GET_[L3TRA0_TR0_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA0_TR0_CONFIG_0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA0_TR0_CONFIG_0;
#endif
    return fapi2::getScom(i_target, L3TRA0_TR0_CONFIG_0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_0]

//>> PUT_[L3TRA0_TR0_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA0_TR0_CONFIG_0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_0));
#endif
    return fapi2::putScom(i_target, L3TRA0_TR0_CONFIG_0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA0_TR0_CONFIG_0]


//>> SET_[L3TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_0));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           L3TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> SET_[L3TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_0));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           L3TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> GET_[L3TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_0));
#endif
    return i_data.extractToRight<L3TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           L3TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> PREP_[L3TRA0_TR1_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA0_TR1_CONFIG_9(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA0_TR1_CONFIG_9;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA0_TR1_CONFIG_9]

//>> GET_[L3TRA0_TR1_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA0_TR1_CONFIG_9(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA0_TR1_CONFIG_9;
#endif
    return fapi2::getScom(i_target, L3TRA0_TR1_CONFIG_9, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_9]

//>> PUT_[L3TRA0_TR1_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA0_TR1_CONFIG_9(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return fapi2::putScom(i_target, L3TRA0_TR1_CONFIG_9, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA0_TR1_CONFIG_9]


//>> SET_[L3TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[L3TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[L3TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.setBit<L3TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]

//>> CLEAR_[L3TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]

//>> GET_[L3TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]

//>> GET_[L3TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]
static inline bool GET_L3TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return i_data.getBit<L3TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[L3TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[L3TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[L3TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.setBit<L3TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> CLEAR_[L3TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> GET_[L3TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> GET_[L3TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline bool GET_L3TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return i_data.getBit<L3TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[L3TRA0_TR1_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_MATCHA_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_MATCHA_MUXSEL,
           L3TRA0_TR1_CONFIG_9_MATCHA_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_MATCHA_MUXSEL]

//>> SET_[L3TRA0_TR1_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_MATCHA_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_MATCHA_MUXSEL,
           L3TRA0_TR1_CONFIG_9_MATCHA_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_MATCHA_MUXSEL]

//>> GET_[L3TRA0_TR1_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_9_MATCHA_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_9_MATCHA_MUXSEL,
           L3TRA0_TR1_CONFIG_9_MATCHA_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_9_MATCHA_MUXSEL]

//>> SET_[L3TRA0_TR1_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_MATCHB_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_MATCHB_MUXSEL,
           L3TRA0_TR1_CONFIG_9_MATCHB_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_MATCHB_MUXSEL]

//>> SET_[L3TRA0_TR1_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_MATCHB_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_MATCHB_MUXSEL,
           L3TRA0_TR1_CONFIG_9_MATCHB_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_MATCHB_MUXSEL]

//>> GET_[L3TRA0_TR1_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_9_MATCHB_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_9_MATCHB_MUXSEL,
           L3TRA0_TR1_CONFIG_9_MATCHB_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_9_MATCHB_MUXSEL]

//>> SET_[L3TRA0_TR1_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_MATCHC_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_MATCHC_MUXSEL,
           L3TRA0_TR1_CONFIG_9_MATCHC_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_MATCHC_MUXSEL]

//>> SET_[L3TRA0_TR1_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_MATCHC_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_MATCHC_MUXSEL,
           L3TRA0_TR1_CONFIG_9_MATCHC_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_MATCHC_MUXSEL]

//>> GET_[L3TRA0_TR1_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_9_MATCHC_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_9_MATCHC_MUXSEL,
           L3TRA0_TR1_CONFIG_9_MATCHC_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_9_MATCHC_MUXSEL]

//>> SET_[L3TRA0_TR1_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_MATCHD_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_MATCHD_MUXSEL,
           L3TRA0_TR1_CONFIG_9_MATCHD_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_MATCHD_MUXSEL]

//>> SET_[L3TRA0_TR1_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_MATCHD_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_MATCHD_MUXSEL,
           L3TRA0_TR1_CONFIG_9_MATCHD_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_MATCHD_MUXSEL]

//>> GET_[L3TRA0_TR1_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_9_MATCHD_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_9_MATCHD_MUXSEL,
           L3TRA0_TR1_CONFIG_9_MATCHD_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_9_MATCHD_MUXSEL]

//>> SET_[L3TRA0_TR1_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_TRIG0_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_TRIG0_OR_MASK,
           L3TRA0_TR1_CONFIG_9_TRIG0_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_TRIG0_OR_MASK]

//>> SET_[L3TRA0_TR1_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_TRIG0_OR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_TRIG0_OR_MASK,
           L3TRA0_TR1_CONFIG_9_TRIG0_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_TRIG0_OR_MASK]

//>> GET_[L3TRA0_TR1_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_9_TRIG0_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_9_TRIG0_OR_MASK,
           L3TRA0_TR1_CONFIG_9_TRIG0_OR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_9_TRIG0_OR_MASK]

//>> SET_[L3TRA0_TR1_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_TRIG0_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_TRIG0_AND_MASK,
           L3TRA0_TR1_CONFIG_9_TRIG0_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_TRIG0_AND_MASK]

//>> SET_[L3TRA0_TR1_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_TRIG0_AND_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_TRIG0_AND_MASK,
           L3TRA0_TR1_CONFIG_9_TRIG0_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_TRIG0_AND_MASK]

//>> GET_[L3TRA0_TR1_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_9_TRIG0_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_9_TRIG0_AND_MASK,
           L3TRA0_TR1_CONFIG_9_TRIG0_AND_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_9_TRIG0_AND_MASK]

//>> SET_[L3TRA0_TR1_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_TRIG1_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_TRIG1_OR_MASK,
           L3TRA0_TR1_CONFIG_9_TRIG1_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_TRIG1_OR_MASK]

//>> SET_[L3TRA0_TR1_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_TRIG1_OR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_TRIG1_OR_MASK,
           L3TRA0_TR1_CONFIG_9_TRIG1_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_TRIG1_OR_MASK]

//>> GET_[L3TRA0_TR1_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_9_TRIG1_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_9_TRIG1_OR_MASK,
           L3TRA0_TR1_CONFIG_9_TRIG1_OR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_9_TRIG1_OR_MASK]

//>> SET_[L3TRA0_TR1_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_TRIG1_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_TRIG1_AND_MASK,
           L3TRA0_TR1_CONFIG_9_TRIG1_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_TRIG1_AND_MASK]

//>> SET_[L3TRA0_TR1_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_TRIG1_AND_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_TRIG1_AND_MASK,
           L3TRA0_TR1_CONFIG_9_TRIG1_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_TRIG1_AND_MASK]

//>> GET_[L3TRA0_TR1_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_9_TRIG1_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_9_TRIG1_AND_MASK,
           L3TRA0_TR1_CONFIG_9_TRIG1_AND_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_9_TRIG1_AND_MASK]

//>> SET_[L3TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[L3TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[L3TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.setBit<L3TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]

//>> CLEAR_[L3TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]

//>> GET_[L3TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]

//>> GET_[L3TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]
static inline bool GET_L3TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return i_data.getBit<L3TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[L3TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[L3TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[L3TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.setBit<L3TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]

//>> CLEAR_[L3TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]

//>> GET_[L3TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]

//>> GET_[L3TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]
static inline bool GET_L3TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return i_data.getBit<L3TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[L3TRA0_TR1_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_MATCH_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_MATCH_NOT_MODE,
           L3TRA0_TR1_CONFIG_9_MATCH_NOT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_MATCH_NOT_MODE]

//>> SET_[L3TRA0_TR1_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_MATCH_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_MATCH_NOT_MODE,
           L3TRA0_TR1_CONFIG_9_MATCH_NOT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_MATCH_NOT_MODE]

//>> GET_[L3TRA0_TR1_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_9_MATCH_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_9_MATCH_NOT_MODE,
           L3TRA0_TR1_CONFIG_9_MATCH_NOT_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_9_MATCH_NOT_MODE]

//>> SET_[L3TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_ERROR_CMP_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[L3TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_ERROR_CMP_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_ERROR_CMP_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[L3TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.setBit<L3TRA0_TR1_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]

//>> CLEAR_[L3TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR1_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA0_TR1_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]

//>> GET_[L3TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_9_ERROR_CMP_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]

//>> GET_[L3TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]
static inline bool GET_L3TRA0_TR1_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return i_data.getBit<L3TRA0_TR1_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[L3TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[L3TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[L3TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.setBit<L3TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]

//>> CLEAR_[L3TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]

//>> GET_[L3TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]

//>> GET_[L3TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]
static inline bool GET_L3TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return i_data.getBit<L3TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[L3TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[L3TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[L3TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.setBit<L3TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]

//>> CLEAR_[L3TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]

//>> GET_[L3TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]

//>> GET_[L3TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]
static inline bool GET_L3TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return i_data.getBit<L3TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[L3TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[L3TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[L3TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.setBit<L3TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]

//>> CLEAR_[L3TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]

//>> GET_[L3TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]

//>> GET_[L3TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]
static inline bool GET_L3TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return i_data.getBit<L3TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[L3TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[L3TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[L3TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.setBit<L3TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> CLEAR_[L3TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> GET_[L3TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> GET_[L3TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline bool GET_L3TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return i_data.getBit<L3TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[L3TRA0_TR1_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_SPARE_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_SPARE_LT]

//>> SET_[L3TRA0_TR1_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_SPARE_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_9_SPARE_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_SPARE_LT]

//>> SET_[L3TRA0_TR1_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.setBit<L3TRA0_TR1_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_9_SPARE_LT]

//>> CLEAR_[L3TRA0_TR1_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR1_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA0_TR1_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR1_CONFIG_9_SPARE_LT]

//>> GET_[L3TRA0_TR1_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_9_SPARE_LT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_9_SPARE_LT]

//>> GET_[L3TRA0_TR1_CONFIG_9_SPARE_LT]
static inline bool GET_L3TRA0_TR1_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_9));
#endif
    return i_data.getBit<L3TRA0_TR1_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA0_TR1_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_9_SPARE_LT]

//>> PREP_[L3TRA2_TR1_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA2_TR1_CONFIG_1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA2_TR1_CONFIG_1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA2_TR1_CONFIG_1]

//>> GET_[L3TRA2_TR1_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA2_TR1_CONFIG_1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA2_TR1_CONFIG_1;
#endif
    return fapi2::getScom(i_target, L3TRA2_TR1_CONFIG_1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_1]

//>> PUT_[L3TRA2_TR1_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA2_TR1_CONFIG_1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_1));
#endif
    return fapi2::putScom(i_target, L3TRA2_TR1_CONFIG_1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA2_TR1_CONFIG_1]


//>> SET_[L3TRA2_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_1));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           L3TRA2_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA2_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> SET_[L3TRA2_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_1));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           L3TRA2_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA2_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> GET_[L3TRA2_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_1));
#endif
    return i_data.extractToRight<L3TRA2_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           L3TRA2_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA2_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> PREP_[MULTICAST_GROUP_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_MULTICAST_GROUP_2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MULTICAST_GROUP_2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[MULTICAST_GROUP_2]

//>> GET_[MULTICAST_GROUP_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_MULTICAST_GROUP_2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MULTICAST_GROUP_2;
#endif
    return fapi2::getScom(i_target, MULTICAST_GROUP_2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[MULTICAST_GROUP_2]

//>> PUT_[MULTICAST_GROUP_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_MULTICAST_GROUP_2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(MULTICAST_GROUP_2));
#endif
    return fapi2::putScom(i_target, MULTICAST_GROUP_2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[MULTICAST_GROUP_2]


//>> SET_[MULTICAST_GROUP_2_MULTICAST2_GROUP]
static inline fapi2::buffer<uint64_t>& SET_MULTICAST_GROUP_2_MULTICAST2_GROUP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MULTICAST_GROUP_2));
#endif
    return o_data.insertFromRight<MULTICAST_GROUP_2_MULTICAST2_GROUP,
           MULTICAST_GROUP_2_MULTICAST2_GROUP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access MULTICAST_GROUP_2_MULTICAST2_GROUP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MULTICAST_GROUP_2_MULTICAST2_GROUP]

//>> SET_[MULTICAST_GROUP_2_MULTICAST2_GROUP]
static inline fapi2::buffer<uint64_t>& SET_MULTICAST_GROUP_2_MULTICAST2_GROUP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MULTICAST_GROUP_2));
#endif
    return o_data.insertFromRight<MULTICAST_GROUP_2_MULTICAST2_GROUP,
           MULTICAST_GROUP_2_MULTICAST2_GROUP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access MULTICAST_GROUP_2_MULTICAST2_GROUP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MULTICAST_GROUP_2_MULTICAST2_GROUP]

//>> GET_[MULTICAST_GROUP_2_MULTICAST2_GROUP]
static inline fapi2::buffer<uint64_t>& GET_MULTICAST_GROUP_2_MULTICAST2_GROUP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MULTICAST_GROUP_2));
#endif
    return i_data.extractToRight<MULTICAST_GROUP_2_MULTICAST2_GROUP,
           MULTICAST_GROUP_2_MULTICAST2_GROUP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access MULTICAST_GROUP_2_MULTICAST2_GROUP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[MULTICAST_GROUP_2_MULTICAST2_GROUP]

//>> PREP_[QMETRA0_TR0_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QMETRA0_TR0_CONFIG_9(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QMETRA0_TR0_CONFIG_9;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QMETRA0_TR0_CONFIG_9]

//>> GET_[QMETRA0_TR0_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QMETRA0_TR0_CONFIG_9(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QMETRA0_TR0_CONFIG_9;
#endif
    return fapi2::getScom(i_target, QMETRA0_TR0_CONFIG_9, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_9]

//>> PUT_[QMETRA0_TR0_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QMETRA0_TR0_CONFIG_9(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return fapi2::putScom(i_target, QMETRA0_TR0_CONFIG_9, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QMETRA0_TR0_CONFIG_9]


//>> SET_[QMETRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_DISABLE_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[QMETRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_DISABLE_COMPRESSION(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_DISABLE_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[QMETRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<QMETRA0_TR0_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> CLEAR_[QMETRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<QMETRA0_TR0_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> GET_[QMETRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_9_DISABLE_COMPRESSION,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> GET_[QMETRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline bool GET_QMETRA0_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<QMETRA0_TR0_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[QMETRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[QMETRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[QMETRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<QMETRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> CLEAR_[QMETRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<QMETRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> GET_[QMETRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> GET_[QMETRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline bool GET_QMETRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<QMETRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[QMETRA0_TR0_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_MATCHA_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_MATCHA_MUXSEL,
           QMETRA0_TR0_CONFIG_9_MATCHA_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_MATCHA_MUXSEL]

//>> SET_[QMETRA0_TR0_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_MATCHA_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_MATCHA_MUXSEL,
           QMETRA0_TR0_CONFIG_9_MATCHA_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_MATCHA_MUXSEL]

//>> GET_[QMETRA0_TR0_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_9_MATCHA_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_9_MATCHA_MUXSEL,
           QMETRA0_TR0_CONFIG_9_MATCHA_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_9_MATCHA_MUXSEL]

//>> SET_[QMETRA0_TR0_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_MATCHB_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_MATCHB_MUXSEL,
           QMETRA0_TR0_CONFIG_9_MATCHB_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_MATCHB_MUXSEL]

//>> SET_[QMETRA0_TR0_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_MATCHB_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_MATCHB_MUXSEL,
           QMETRA0_TR0_CONFIG_9_MATCHB_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_MATCHB_MUXSEL]

//>> GET_[QMETRA0_TR0_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_9_MATCHB_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_9_MATCHB_MUXSEL,
           QMETRA0_TR0_CONFIG_9_MATCHB_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_9_MATCHB_MUXSEL]

//>> SET_[QMETRA0_TR0_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_MATCHC_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_MATCHC_MUXSEL,
           QMETRA0_TR0_CONFIG_9_MATCHC_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_MATCHC_MUXSEL]

//>> SET_[QMETRA0_TR0_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_MATCHC_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_MATCHC_MUXSEL,
           QMETRA0_TR0_CONFIG_9_MATCHC_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_MATCHC_MUXSEL]

//>> GET_[QMETRA0_TR0_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_9_MATCHC_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_9_MATCHC_MUXSEL,
           QMETRA0_TR0_CONFIG_9_MATCHC_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_9_MATCHC_MUXSEL]

//>> SET_[QMETRA0_TR0_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_MATCHD_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_MATCHD_MUXSEL,
           QMETRA0_TR0_CONFIG_9_MATCHD_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_MATCHD_MUXSEL]

//>> SET_[QMETRA0_TR0_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_MATCHD_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_MATCHD_MUXSEL,
           QMETRA0_TR0_CONFIG_9_MATCHD_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_MATCHD_MUXSEL]

//>> GET_[QMETRA0_TR0_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_9_MATCHD_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_9_MATCHD_MUXSEL,
           QMETRA0_TR0_CONFIG_9_MATCHD_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_9_MATCHD_MUXSEL]

//>> SET_[QMETRA0_TR0_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_TRIG0_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_TRIG0_OR_MASK,
           QMETRA0_TR0_CONFIG_9_TRIG0_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_TRIG0_OR_MASK]

//>> SET_[QMETRA0_TR0_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_TRIG0_OR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_TRIG0_OR_MASK,
           QMETRA0_TR0_CONFIG_9_TRIG0_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_TRIG0_OR_MASK]

//>> GET_[QMETRA0_TR0_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_9_TRIG0_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_9_TRIG0_OR_MASK,
           QMETRA0_TR0_CONFIG_9_TRIG0_OR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_9_TRIG0_OR_MASK]

//>> SET_[QMETRA0_TR0_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_TRIG0_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_TRIG0_AND_MASK,
           QMETRA0_TR0_CONFIG_9_TRIG0_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_TRIG0_AND_MASK]

//>> SET_[QMETRA0_TR0_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_TRIG0_AND_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_TRIG0_AND_MASK,
           QMETRA0_TR0_CONFIG_9_TRIG0_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_TRIG0_AND_MASK]

//>> GET_[QMETRA0_TR0_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_9_TRIG0_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_9_TRIG0_AND_MASK,
           QMETRA0_TR0_CONFIG_9_TRIG0_AND_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_9_TRIG0_AND_MASK]

//>> SET_[QMETRA0_TR0_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_TRIG1_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_TRIG1_OR_MASK,
           QMETRA0_TR0_CONFIG_9_TRIG1_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_TRIG1_OR_MASK]

//>> SET_[QMETRA0_TR0_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_TRIG1_OR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_TRIG1_OR_MASK,
           QMETRA0_TR0_CONFIG_9_TRIG1_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_TRIG1_OR_MASK]

//>> GET_[QMETRA0_TR0_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_9_TRIG1_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_9_TRIG1_OR_MASK,
           QMETRA0_TR0_CONFIG_9_TRIG1_OR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_9_TRIG1_OR_MASK]

//>> SET_[QMETRA0_TR0_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_TRIG1_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_TRIG1_AND_MASK,
           QMETRA0_TR0_CONFIG_9_TRIG1_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_TRIG1_AND_MASK]

//>> SET_[QMETRA0_TR0_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_TRIG1_AND_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_TRIG1_AND_MASK,
           QMETRA0_TR0_CONFIG_9_TRIG1_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_TRIG1_AND_MASK]

//>> GET_[QMETRA0_TR0_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_9_TRIG1_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_9_TRIG1_AND_MASK,
           QMETRA0_TR0_CONFIG_9_TRIG1_AND_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_9_TRIG1_AND_MASK]

//>> SET_[QMETRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_TRIG0_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[QMETRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_TRIG0_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_TRIG0_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[QMETRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<QMETRA0_TR0_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> CLEAR_[QMETRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<QMETRA0_TR0_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> GET_[QMETRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_9_TRIG0_NOT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> GET_[QMETRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline bool GET_QMETRA0_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<QMETRA0_TR0_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[QMETRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_TRIG1_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[QMETRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_TRIG1_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_TRIG1_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[QMETRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<QMETRA0_TR0_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> CLEAR_[QMETRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<QMETRA0_TR0_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> GET_[QMETRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_9_TRIG1_NOT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> GET_[QMETRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline bool GET_QMETRA0_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<QMETRA0_TR0_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[QMETRA0_TR0_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_MATCH_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_MATCH_NOT_MODE,
           QMETRA0_TR0_CONFIG_9_MATCH_NOT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_MATCH_NOT_MODE]

//>> SET_[QMETRA0_TR0_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_MATCH_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_MATCH_NOT_MODE,
           QMETRA0_TR0_CONFIG_9_MATCH_NOT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_MATCH_NOT_MODE]

//>> GET_[QMETRA0_TR0_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_9_MATCH_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_9_MATCH_NOT_MODE,
           QMETRA0_TR0_CONFIG_9_MATCH_NOT_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_9_MATCH_NOT_MODE]

//>> SET_[QMETRA0_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_ERROR_CMP_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[QMETRA0_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_ERROR_CMP_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_ERROR_CMP_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[QMETRA0_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<QMETRA0_TR0_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> CLEAR_[QMETRA0_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<QMETRA0_TR0_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> GET_[QMETRA0_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_9_ERROR_CMP_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> GET_[QMETRA0_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline bool GET_QMETRA0_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<QMETRA0_TR0_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[QMETRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[QMETRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[QMETRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<QMETRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> CLEAR_[QMETRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<QMETRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> GET_[QMETRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> GET_[QMETRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline bool GET_QMETRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<QMETRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[QMETRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_TRIG0_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[QMETRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_TRIG0_ERR_CMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_TRIG0_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[QMETRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<QMETRA0_TR0_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> CLEAR_[QMETRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<QMETRA0_TR0_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> GET_[QMETRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_9_TRIG0_ERR_CMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> GET_[QMETRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline bool GET_QMETRA0_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<QMETRA0_TR0_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[QMETRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_TRIG1_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[QMETRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_TRIG1_ERR_CMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_TRIG1_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[QMETRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<QMETRA0_TR0_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> CLEAR_[QMETRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<QMETRA0_TR0_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> GET_[QMETRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_9_TRIG1_ERR_CMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> GET_[QMETRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline bool GET_QMETRA0_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<QMETRA0_TR0_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[QMETRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[QMETRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[QMETRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<QMETRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> CLEAR_[QMETRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<QMETRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> GET_[QMETRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> GET_[QMETRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline bool GET_QMETRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<QMETRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[QMETRA0_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_SPARE_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_SPARE_LT]

//>> SET_[QMETRA0_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_SPARE_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_9_SPARE_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_SPARE_LT]

//>> SET_[QMETRA0_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<QMETRA0_TR0_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_9_SPARE_LT]

//>> CLEAR_[QMETRA0_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<QMETRA0_TR0_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR0_CONFIG_9_SPARE_LT]

//>> GET_[QMETRA0_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_9_SPARE_LT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_9_SPARE_LT]

//>> GET_[QMETRA0_TR0_CONFIG_9_SPARE_LT]
static inline bool GET_QMETRA0_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<QMETRA0_TR0_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access QMETRA0_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_9_SPARE_LT]

//>> PREP_[QMETRA0_TR1_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QMETRA0_TR1_CONFIG_0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QMETRA0_TR1_CONFIG_0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QMETRA0_TR1_CONFIG_0]

//>> GET_[QMETRA0_TR1_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QMETRA0_TR1_CONFIG_0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QMETRA0_TR1_CONFIG_0;
#endif
    return fapi2::getScom(i_target, QMETRA0_TR1_CONFIG_0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_0]

//>> PUT_[QMETRA0_TR1_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QMETRA0_TR1_CONFIG_0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG_0));
#endif
    return fapi2::putScom(i_target, QMETRA0_TR1_CONFIG_0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QMETRA0_TR1_CONFIG_0]


//>> SET_[QMETRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG_0));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           QMETRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> SET_[QMETRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG_0));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           QMETRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> GET_[QMETRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG_0));
#endif
    return i_data.extractToRight<QMETRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           QMETRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
