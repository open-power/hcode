/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/pec/reg00005_unused.H $       */
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

#ifndef __PEC_REG00005_H_UNUSED__
#define __PEC_REG00005_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace pec
{
#endif


//>> PREP_[EPS_THERM_WSUB_SKITTER_DATA0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_THERM_WSUB_SKITTER_DATA0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_DATA0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_THERM_WSUB_SKITTER_DATA0]

//>> GET_[EPS_THERM_WSUB_SKITTER_DATA0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_THERM_WSUB_SKITTER_DATA0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_DATA0;
#endif
    return fapi2::getScom(i_target, EPS_THERM_WSUB_SKITTER_DATA0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_DATA0]

//>> PUT_[EPS_THERM_WSUB_SKITTER_DATA0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_THERM_WSUB_SKITTER_DATA0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_DATA0));
#endif
    return fapi2::putScom(i_target, EPS_THERM_WSUB_SKITTER_DATA0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_THERM_WSUB_SKITTER_DATA0]


//>> PREP_[EPS_THERM_WSUB_SKITTER_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_THERM_WSUB_SKITTER_MODE_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_MODE_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_THERM_WSUB_SKITTER_MODE_REG]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_THERM_WSUB_SKITTER_MODE_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_MODE_REG;
#endif
    return fapi2::getScom(i_target, EPS_THERM_WSUB_SKITTER_MODE_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG]

//>> PUT_[EPS_THERM_WSUB_SKITTER_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_THERM_WSUB_SKITTER_MODE_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return fapi2::putScom(i_target, EPS_THERM_WSUB_SKITTER_MODE_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_THERM_WSUB_SKITTER_MODE_REG]


//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.setBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> CLEAR_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.clearBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline bool GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.getBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.setBit<EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> CLEAR_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.clearBit<EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline bool GET_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.getBit<EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.setBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> CLEAR_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.clearBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline bool GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.getBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.setBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> CLEAR_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.clearBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline bool GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.getBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> PREP_[PB_PBCQ_PEPBREGS_PREDV_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_PBCQ_PEPBREGS_PREDV_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PBCQ_PEPBREGS_PREDV_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_PBCQ_PEPBREGS_PREDV_REG]

//>> GET_[PB_PBCQ_PEPBREGS_PREDV_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_PBCQ_PEPBREGS_PREDV_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PBCQ_PEPBREGS_PREDV_REG;
#endif
    return fapi2::getScom(i_target, PB_PBCQ_PEPBREGS_PREDV_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PREDV_REG]

//>> PUT_[PB_PBCQ_PEPBREGS_PREDV_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_PBCQ_PEPBREGS_PREDV_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PREDV_REG));
#endif
    return fapi2::putScom(i_target, PB_PBCQ_PEPBREGS_PREDV_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_PBCQ_PEPBREGS_PREDV_REG]


//>> SET_[PB_PBCQ_PEPBREGS_PREDV_REG_RD_PREDV_TIMEOUT_MASK]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PREDV_REG_RD_PREDV_TIMEOUT_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PREDV_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PREDV_REG_RD_PREDV_TIMEOUT_MASK,
           PB_PBCQ_PEPBREGS_PREDV_REG_RD_PREDV_TIMEOUT_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PREDV_REG_RD_PREDV_TIMEOUT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PREDV_REG_RD_PREDV_TIMEOUT_MASK]

//>> SET_[PB_PBCQ_PEPBREGS_PREDV_REG_RD_PREDV_TIMEOUT_MASK]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PREDV_REG_RD_PREDV_TIMEOUT_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PREDV_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PREDV_REG_RD_PREDV_TIMEOUT_MASK,
           PB_PBCQ_PEPBREGS_PREDV_REG_RD_PREDV_TIMEOUT_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PREDV_REG_RD_PREDV_TIMEOUT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PREDV_REG_RD_PREDV_TIMEOUT_MASK]

//>> GET_[PB_PBCQ_PEPBREGS_PREDV_REG_RD_PREDV_TIMEOUT_MASK]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_PREDV_REG_RD_PREDV_TIMEOUT_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PREDV_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PREDV_REG_RD_PREDV_TIMEOUT_MASK,
           PB_PBCQ_PEPBREGS_PREDV_REG_RD_PREDV_TIMEOUT_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PREDV_REG_RD_PREDV_TIMEOUT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PREDV_REG_RD_PREDV_TIMEOUT_MASK]

//>> SET_[PB_PBCQ_PEPBREGS_PREDV_REG_WR_PREDV_TIMEOUT_MASK]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PREDV_REG_WR_PREDV_TIMEOUT_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PREDV_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PREDV_REG_WR_PREDV_TIMEOUT_MASK,
           PB_PBCQ_PEPBREGS_PREDV_REG_WR_PREDV_TIMEOUT_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PREDV_REG_WR_PREDV_TIMEOUT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PREDV_REG_WR_PREDV_TIMEOUT_MASK]

//>> SET_[PB_PBCQ_PEPBREGS_PREDV_REG_WR_PREDV_TIMEOUT_MASK]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PREDV_REG_WR_PREDV_TIMEOUT_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PREDV_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PREDV_REG_WR_PREDV_TIMEOUT_MASK,
           PB_PBCQ_PEPBREGS_PREDV_REG_WR_PREDV_TIMEOUT_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PREDV_REG_WR_PREDV_TIMEOUT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PREDV_REG_WR_PREDV_TIMEOUT_MASK]

//>> GET_[PB_PBCQ_PEPBREGS_PREDV_REG_WR_PREDV_TIMEOUT_MASK]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_PREDV_REG_WR_PREDV_TIMEOUT_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PREDV_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PREDV_REG_WR_PREDV_TIMEOUT_MASK,
           PB_PBCQ_PEPBREGS_PREDV_REG_WR_PREDV_TIMEOUT_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PREDV_REG_WR_PREDV_TIMEOUT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PREDV_REG_WR_PREDV_TIMEOUT_MASK]

//>> PREP_[TOP0_IOPFIR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TOP0_IOPFIR_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP0_IOPFIR_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TOP0_IOPFIR_RW]

//>> GET_[TOP0_IOPFIR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TOP0_IOPFIR_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP0_IOPFIR_RW;
#endif
    return fapi2::getScom(i_target, TOP0_IOPFIR_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TOP0_IOPFIR_RW]

//>> PUT_[TOP0_IOPFIR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TOP0_IOPFIR_RW(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return fapi2::putScom(i_target, TOP0_IOPFIR_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TOP0_IOPFIR_RW]

//>> PREP_[TOP0_IOPFIR_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TOP0_IOPFIR_WO_AND(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP0_IOPFIR_WO_AND;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TOP0_IOPFIR_WO_AND]

//>> GET_[TOP0_IOPFIR_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TOP0_IOPFIR_WO_AND(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP0_IOPFIR_WO_AND;
#endif
    return fapi2::getScom(i_target, TOP0_IOPFIR_WO_AND, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TOP0_IOPFIR_WO_AND]

//>> PUT_[TOP0_IOPFIR_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TOP0_IOPFIR_WO_AND(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return fapi2::putScom(i_target, TOP0_IOPFIR_WO_AND, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TOP0_IOPFIR_WO_AND]

//>> PREP_[TOP0_IOPFIR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TOP0_IOPFIR_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP0_IOPFIR_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TOP0_IOPFIR_WO_OR]

//>> GET_[TOP0_IOPFIR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TOP0_IOPFIR_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP0_IOPFIR_WO_OR;
#endif
    return fapi2::getScom(i_target, TOP0_IOPFIR_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TOP0_IOPFIR_WO_OR]

//>> PUT_[TOP0_IOPFIR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TOP0_IOPFIR_WO_OR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return fapi2::putScom(i_target, TOP0_IOPFIR_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TOP0_IOPFIR_WO_OR]


//>> SET_[TOP0_IOPFIR_PHY0_ECC_CE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_PHY0_ECC_CE_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIR_PHY0_ECC_CE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IOPFIR_PHY0_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_PHY0_ECC_CE_ERR]

//>> SET_[TOP0_IOPFIR_PHY0_ECC_CE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_PHY0_ECC_CE_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIR_PHY0_ECC_CE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IOPFIR_PHY0_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_PHY0_ECC_CE_ERR]

//>> SET_[TOP0_IOPFIR_PHY0_ECC_CE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_PHY0_ECC_CE_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.setBit<TOP0_IOPFIR_PHY0_ECC_CE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IOPFIR_PHY0_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_PHY0_ECC_CE_ERR]

//>> CLEAR_[TOP0_IOPFIR_PHY0_ECC_CE_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IOPFIR_PHY0_ECC_CE_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.clearBit<TOP0_IOPFIR_PHY0_ECC_CE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IOPFIR_PHY0_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IOPFIR_PHY0_ECC_CE_ERR]

//>> GET_[TOP0_IOPFIR_PHY0_ECC_CE_ERR]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IOPFIR_PHY0_ECC_CE_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<TOP0_IOPFIR_PHY0_ECC_CE_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IOPFIR_PHY0_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIR_PHY0_ECC_CE_ERR]

//>> GET_[TOP0_IOPFIR_PHY0_ECC_CE_ERR]
static inline bool GET_TOP0_IOPFIR_PHY0_ECC_CE_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return i_data.getBit<TOP0_IOPFIR_PHY0_ECC_CE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IOPFIR_PHY0_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIR_PHY0_ECC_CE_ERR]

//>> SET_[TOP0_IOPFIR_PHY0_ECC_UE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_PHY0_ECC_UE_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIR_PHY0_ECC_UE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IOPFIR_PHY0_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_PHY0_ECC_UE_ERR]

//>> SET_[TOP0_IOPFIR_PHY0_ECC_UE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_PHY0_ECC_UE_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIR_PHY0_ECC_UE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IOPFIR_PHY0_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_PHY0_ECC_UE_ERR]

//>> SET_[TOP0_IOPFIR_PHY0_ECC_UE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_PHY0_ECC_UE_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.setBit<TOP0_IOPFIR_PHY0_ECC_UE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IOPFIR_PHY0_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_PHY0_ECC_UE_ERR]

//>> CLEAR_[TOP0_IOPFIR_PHY0_ECC_UE_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IOPFIR_PHY0_ECC_UE_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.clearBit<TOP0_IOPFIR_PHY0_ECC_UE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IOPFIR_PHY0_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IOPFIR_PHY0_ECC_UE_ERR]

//>> GET_[TOP0_IOPFIR_PHY0_ECC_UE_ERR]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IOPFIR_PHY0_ECC_UE_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<TOP0_IOPFIR_PHY0_ECC_UE_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IOPFIR_PHY0_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIR_PHY0_ECC_UE_ERR]

//>> GET_[TOP0_IOPFIR_PHY0_ECC_UE_ERR]
static inline bool GET_TOP0_IOPFIR_PHY0_ECC_UE_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return i_data.getBit<TOP0_IOPFIR_PHY0_ECC_UE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IOPFIR_PHY0_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIR_PHY0_ECC_UE_ERR]

//>> SET_[TOP0_IOPFIR_PHY1_ECC_CE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_PHY1_ECC_CE_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIR_PHY1_ECC_CE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IOPFIR_PHY1_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_PHY1_ECC_CE_ERR]

//>> SET_[TOP0_IOPFIR_PHY1_ECC_CE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_PHY1_ECC_CE_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIR_PHY1_ECC_CE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IOPFIR_PHY1_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_PHY1_ECC_CE_ERR]

//>> SET_[TOP0_IOPFIR_PHY1_ECC_CE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_PHY1_ECC_CE_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.setBit<TOP0_IOPFIR_PHY1_ECC_CE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IOPFIR_PHY1_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_PHY1_ECC_CE_ERR]

//>> CLEAR_[TOP0_IOPFIR_PHY1_ECC_CE_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IOPFIR_PHY1_ECC_CE_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.clearBit<TOP0_IOPFIR_PHY1_ECC_CE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IOPFIR_PHY1_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IOPFIR_PHY1_ECC_CE_ERR]

//>> GET_[TOP0_IOPFIR_PHY1_ECC_CE_ERR]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IOPFIR_PHY1_ECC_CE_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<TOP0_IOPFIR_PHY1_ECC_CE_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IOPFIR_PHY1_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIR_PHY1_ECC_CE_ERR]

//>> GET_[TOP0_IOPFIR_PHY1_ECC_CE_ERR]
static inline bool GET_TOP0_IOPFIR_PHY1_ECC_CE_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return i_data.getBit<TOP0_IOPFIR_PHY1_ECC_CE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IOPFIR_PHY1_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIR_PHY1_ECC_CE_ERR]

//>> SET_[TOP0_IOPFIR_PHY1_ECC_UE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_PHY1_ECC_UE_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIR_PHY1_ECC_UE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IOPFIR_PHY1_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_PHY1_ECC_UE_ERR]

//>> SET_[TOP0_IOPFIR_PHY1_ECC_UE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_PHY1_ECC_UE_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIR_PHY1_ECC_UE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IOPFIR_PHY1_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_PHY1_ECC_UE_ERR]

//>> SET_[TOP0_IOPFIR_PHY1_ECC_UE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_PHY1_ECC_UE_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.setBit<TOP0_IOPFIR_PHY1_ECC_UE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IOPFIR_PHY1_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_PHY1_ECC_UE_ERR]

//>> CLEAR_[TOP0_IOPFIR_PHY1_ECC_UE_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IOPFIR_PHY1_ECC_UE_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.clearBit<TOP0_IOPFIR_PHY1_ECC_UE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IOPFIR_PHY1_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IOPFIR_PHY1_ECC_UE_ERR]

//>> GET_[TOP0_IOPFIR_PHY1_ECC_UE_ERR]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IOPFIR_PHY1_ECC_UE_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<TOP0_IOPFIR_PHY1_ECC_UE_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IOPFIR_PHY1_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIR_PHY1_ECC_UE_ERR]

//>> GET_[TOP0_IOPFIR_PHY1_ECC_UE_ERR]
static inline bool GET_TOP0_IOPFIR_PHY1_ECC_UE_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return i_data.getBit<TOP0_IOPFIR_PHY1_ECC_UE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IOPFIR_PHY1_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIR_PHY1_ECC_UE_ERR]

//>> SET_[TOP0_IOPFIR_SCOM0_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_SCOM0_ECC_CE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIR_SCOM0_ECC_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IOPFIR_SCOM0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_SCOM0_ECC_CE]

//>> SET_[TOP0_IOPFIR_SCOM0_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_SCOM0_ECC_CE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIR_SCOM0_ECC_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IOPFIR_SCOM0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_SCOM0_ECC_CE]

//>> SET_[TOP0_IOPFIR_SCOM0_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_SCOM0_ECC_CE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.setBit<TOP0_IOPFIR_SCOM0_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IOPFIR_SCOM0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_SCOM0_ECC_CE]

//>> CLEAR_[TOP0_IOPFIR_SCOM0_ECC_CE]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IOPFIR_SCOM0_ECC_CE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.clearBit<TOP0_IOPFIR_SCOM0_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IOPFIR_SCOM0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IOPFIR_SCOM0_ECC_CE]

//>> GET_[TOP0_IOPFIR_SCOM0_ECC_CE]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IOPFIR_SCOM0_ECC_CE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<TOP0_IOPFIR_SCOM0_ECC_CE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IOPFIR_SCOM0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIR_SCOM0_ECC_CE]

//>> GET_[TOP0_IOPFIR_SCOM0_ECC_CE]
static inline bool GET_TOP0_IOPFIR_SCOM0_ECC_CE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return i_data.getBit<TOP0_IOPFIR_SCOM0_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IOPFIR_SCOM0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIR_SCOM0_ECC_CE]

//>> SET_[TOP0_IOPFIR_SCOM0_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_SCOM0_ECC_UE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIR_SCOM0_ECC_UE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IOPFIR_SCOM0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_SCOM0_ECC_UE]

//>> SET_[TOP0_IOPFIR_SCOM0_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_SCOM0_ECC_UE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIR_SCOM0_ECC_UE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IOPFIR_SCOM0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_SCOM0_ECC_UE]

//>> SET_[TOP0_IOPFIR_SCOM0_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_SCOM0_ECC_UE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.setBit<TOP0_IOPFIR_SCOM0_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IOPFIR_SCOM0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_SCOM0_ECC_UE]

//>> CLEAR_[TOP0_IOPFIR_SCOM0_ECC_UE]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IOPFIR_SCOM0_ECC_UE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.clearBit<TOP0_IOPFIR_SCOM0_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IOPFIR_SCOM0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IOPFIR_SCOM0_ECC_UE]

//>> GET_[TOP0_IOPFIR_SCOM0_ECC_UE]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IOPFIR_SCOM0_ECC_UE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<TOP0_IOPFIR_SCOM0_ECC_UE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IOPFIR_SCOM0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIR_SCOM0_ECC_UE]

//>> GET_[TOP0_IOPFIR_SCOM0_ECC_UE]
static inline bool GET_TOP0_IOPFIR_SCOM0_ECC_UE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return i_data.getBit<TOP0_IOPFIR_SCOM0_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IOPFIR_SCOM0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIR_SCOM0_ECC_UE]

//>> SET_[TOP0_IOPFIR_SCOM1_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_SCOM1_ECC_CE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIR_SCOM1_ECC_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IOPFIR_SCOM1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_SCOM1_ECC_CE]

//>> SET_[TOP0_IOPFIR_SCOM1_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_SCOM1_ECC_CE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIR_SCOM1_ECC_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IOPFIR_SCOM1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_SCOM1_ECC_CE]

//>> SET_[TOP0_IOPFIR_SCOM1_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_SCOM1_ECC_CE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.setBit<TOP0_IOPFIR_SCOM1_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IOPFIR_SCOM1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_SCOM1_ECC_CE]

//>> CLEAR_[TOP0_IOPFIR_SCOM1_ECC_CE]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IOPFIR_SCOM1_ECC_CE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.clearBit<TOP0_IOPFIR_SCOM1_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IOPFIR_SCOM1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IOPFIR_SCOM1_ECC_CE]

//>> GET_[TOP0_IOPFIR_SCOM1_ECC_CE]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IOPFIR_SCOM1_ECC_CE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<TOP0_IOPFIR_SCOM1_ECC_CE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IOPFIR_SCOM1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIR_SCOM1_ECC_CE]

//>> GET_[TOP0_IOPFIR_SCOM1_ECC_CE]
static inline bool GET_TOP0_IOPFIR_SCOM1_ECC_CE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return i_data.getBit<TOP0_IOPFIR_SCOM1_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IOPFIR_SCOM1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIR_SCOM1_ECC_CE]

//>> SET_[TOP0_IOPFIR_SCOM1_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_SCOM1_ECC_UE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIR_SCOM1_ECC_UE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IOPFIR_SCOM1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_SCOM1_ECC_UE]

//>> SET_[TOP0_IOPFIR_SCOM1_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_SCOM1_ECC_UE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIR_SCOM1_ECC_UE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IOPFIR_SCOM1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_SCOM1_ECC_UE]

//>> SET_[TOP0_IOPFIR_SCOM1_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_SCOM1_ECC_UE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.setBit<TOP0_IOPFIR_SCOM1_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IOPFIR_SCOM1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_SCOM1_ECC_UE]

//>> CLEAR_[TOP0_IOPFIR_SCOM1_ECC_UE]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IOPFIR_SCOM1_ECC_UE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.clearBit<TOP0_IOPFIR_SCOM1_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IOPFIR_SCOM1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IOPFIR_SCOM1_ECC_UE]

//>> GET_[TOP0_IOPFIR_SCOM1_ECC_UE]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IOPFIR_SCOM1_ECC_UE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<TOP0_IOPFIR_SCOM1_ECC_UE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IOPFIR_SCOM1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIR_SCOM1_ECC_UE]

//>> GET_[TOP0_IOPFIR_SCOM1_ECC_UE]
static inline bool GET_TOP0_IOPFIR_SCOM1_ECC_UE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return i_data.getBit<TOP0_IOPFIR_SCOM1_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IOPFIR_SCOM1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIR_SCOM1_ECC_UE]

//>> SET_[TOP0_IOPFIR_SCRUB0_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_SCRUB0_ECC_CE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIR_SCRUB0_ECC_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IOPFIR_SCRUB0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_SCRUB0_ECC_CE]

//>> SET_[TOP0_IOPFIR_SCRUB0_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_SCRUB0_ECC_CE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIR_SCRUB0_ECC_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IOPFIR_SCRUB0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_SCRUB0_ECC_CE]

//>> SET_[TOP0_IOPFIR_SCRUB0_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_SCRUB0_ECC_CE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.setBit<TOP0_IOPFIR_SCRUB0_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IOPFIR_SCRUB0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_SCRUB0_ECC_CE]

//>> CLEAR_[TOP0_IOPFIR_SCRUB0_ECC_CE]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IOPFIR_SCRUB0_ECC_CE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.clearBit<TOP0_IOPFIR_SCRUB0_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IOPFIR_SCRUB0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IOPFIR_SCRUB0_ECC_CE]

//>> GET_[TOP0_IOPFIR_SCRUB0_ECC_CE]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IOPFIR_SCRUB0_ECC_CE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<TOP0_IOPFIR_SCRUB0_ECC_CE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IOPFIR_SCRUB0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIR_SCRUB0_ECC_CE]

//>> GET_[TOP0_IOPFIR_SCRUB0_ECC_CE]
static inline bool GET_TOP0_IOPFIR_SCRUB0_ECC_CE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return i_data.getBit<TOP0_IOPFIR_SCRUB0_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IOPFIR_SCRUB0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIR_SCRUB0_ECC_CE]

//>> SET_[TOP0_IOPFIR_SCRUB0_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_SCRUB0_ECC_UE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIR_SCRUB0_ECC_UE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IOPFIR_SCRUB0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_SCRUB0_ECC_UE]

//>> SET_[TOP0_IOPFIR_SCRUB0_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_SCRUB0_ECC_UE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIR_SCRUB0_ECC_UE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IOPFIR_SCRUB0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_SCRUB0_ECC_UE]

//>> SET_[TOP0_IOPFIR_SCRUB0_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_SCRUB0_ECC_UE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.setBit<TOP0_IOPFIR_SCRUB0_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IOPFIR_SCRUB0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_SCRUB0_ECC_UE]

//>> CLEAR_[TOP0_IOPFIR_SCRUB0_ECC_UE]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IOPFIR_SCRUB0_ECC_UE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.clearBit<TOP0_IOPFIR_SCRUB0_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IOPFIR_SCRUB0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IOPFIR_SCRUB0_ECC_UE]

//>> GET_[TOP0_IOPFIR_SCRUB0_ECC_UE]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IOPFIR_SCRUB0_ECC_UE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<TOP0_IOPFIR_SCRUB0_ECC_UE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IOPFIR_SCRUB0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIR_SCRUB0_ECC_UE]

//>> GET_[TOP0_IOPFIR_SCRUB0_ECC_UE]
static inline bool GET_TOP0_IOPFIR_SCRUB0_ECC_UE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return i_data.getBit<TOP0_IOPFIR_SCRUB0_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IOPFIR_SCRUB0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIR_SCRUB0_ECC_UE]

//>> SET_[TOP0_IOPFIR_SCRUB1_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_SCRUB1_ECC_CE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIR_SCRUB1_ECC_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IOPFIR_SCRUB1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_SCRUB1_ECC_CE]

//>> SET_[TOP0_IOPFIR_SCRUB1_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_SCRUB1_ECC_CE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIR_SCRUB1_ECC_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IOPFIR_SCRUB1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_SCRUB1_ECC_CE]

//>> SET_[TOP0_IOPFIR_SCRUB1_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_SCRUB1_ECC_CE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.setBit<TOP0_IOPFIR_SCRUB1_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IOPFIR_SCRUB1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_SCRUB1_ECC_CE]

//>> CLEAR_[TOP0_IOPFIR_SCRUB1_ECC_CE]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IOPFIR_SCRUB1_ECC_CE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.clearBit<TOP0_IOPFIR_SCRUB1_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IOPFIR_SCRUB1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IOPFIR_SCRUB1_ECC_CE]

//>> GET_[TOP0_IOPFIR_SCRUB1_ECC_CE]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IOPFIR_SCRUB1_ECC_CE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<TOP0_IOPFIR_SCRUB1_ECC_CE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IOPFIR_SCRUB1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIR_SCRUB1_ECC_CE]

//>> GET_[TOP0_IOPFIR_SCRUB1_ECC_CE]
static inline bool GET_TOP0_IOPFIR_SCRUB1_ECC_CE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return i_data.getBit<TOP0_IOPFIR_SCRUB1_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IOPFIR_SCRUB1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIR_SCRUB1_ECC_CE]

//>> SET_[TOP0_IOPFIR_SCRUB1_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_SCRUB1_ECC_UE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIR_SCRUB1_ECC_UE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IOPFIR_SCRUB1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_SCRUB1_ECC_UE]

//>> SET_[TOP0_IOPFIR_SCRUB1_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_SCRUB1_ECC_UE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIR_SCRUB1_ECC_UE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IOPFIR_SCRUB1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_SCRUB1_ECC_UE]

//>> SET_[TOP0_IOPFIR_SCRUB1_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIR_SCRUB1_ECC_UE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.setBit<TOP0_IOPFIR_SCRUB1_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IOPFIR_SCRUB1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIR_SCRUB1_ECC_UE]

//>> CLEAR_[TOP0_IOPFIR_SCRUB1_ECC_UE]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IOPFIR_SCRUB1_ECC_UE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return o_data.clearBit<TOP0_IOPFIR_SCRUB1_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IOPFIR_SCRUB1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IOPFIR_SCRUB1_ECC_UE]

//>> GET_[TOP0_IOPFIR_SCRUB1_ECC_UE]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IOPFIR_SCRUB1_ECC_UE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<TOP0_IOPFIR_SCRUB1_ECC_UE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IOPFIR_SCRUB1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIR_SCRUB1_ECC_UE]

//>> GET_[TOP0_IOPFIR_SCRUB1_ECC_UE]
static inline bool GET_TOP0_IOPFIR_SCRUB1_ECC_UE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIR_RW, TOP0_IOPFIR_WO_AND, TOP0_IOPFIR_WO_OR));
#endif
    return i_data.getBit<TOP0_IOPFIR_SCRUB1_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IOPFIR_SCRUB1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIR_SCRUB1_ECC_UE]

//>> PREP_[TOP0_PIPEDINCTL3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TOP0_PIPEDINCTL3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP0_PIPEDINCTL3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TOP0_PIPEDINCTL3]

//>> GET_[TOP0_PIPEDINCTL3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TOP0_PIPEDINCTL3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP0_PIPEDINCTL3;
#endif
    return fapi2::getScom(i_target, TOP0_PIPEDINCTL3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TOP0_PIPEDINCTL3]

//>> PUT_[TOP0_PIPEDINCTL3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TOP0_PIPEDINCTL3(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL3));
#endif
    return fapi2::putScom(i_target, TOP0_PIPEDINCTL3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TOP0_PIPEDINCTL3]


//>> SET_[TOP0_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL3));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT]

//>> SET_[TOP0_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL3));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT]

//>> SET_[TOP0_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL3));
#endif
    return o_data.setBit<TOP0_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT]

//>> CLEAR_[TOP0_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL3));
#endif
    return o_data.clearBit<TOP0_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT]

//>> GET_[TOP0_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL3));
#endif
    return i_data.extractToRight<TOP0_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT]

//>> GET_[TOP0_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT]
static inline bool GET_TOP0_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL3));
#endif
    return i_data.getBit<TOP0_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT]

//>> SET_[TOP0_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL3));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT]

//>> SET_[TOP0_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL3));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT]

//>> SET_[TOP0_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL3));
#endif
    return o_data.setBit<TOP0_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT]

//>> CLEAR_[TOP0_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL3));
#endif
    return o_data.clearBit<TOP0_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT]

//>> GET_[TOP0_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL3));
#endif
    return i_data.extractToRight<TOP0_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT]

//>> GET_[TOP0_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT]
static inline bool GET_TOP0_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL3));
#endif
    return i_data.getBit<TOP0_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT]

//>> SET_[TOP0_PIPEDINCTL3_RESERVED_61_4]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL3_RESERVED_61_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL3));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL3_RESERVED_61_4,
           TOP0_PIPEDINCTL3_RESERVED_61_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDINCTL3_RESERVED_61_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL3_RESERVED_61_4]

//>> SET_[TOP0_PIPEDINCTL3_RESERVED_61_4]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL3_RESERVED_61_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL3));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL3_RESERVED_61_4,
           TOP0_PIPEDINCTL3_RESERVED_61_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDINCTL3_RESERVED_61_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL3_RESERVED_61_4]

//>> GET_[TOP0_PIPEDINCTL3_RESERVED_61_4]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDINCTL3_RESERVED_61_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL3));
#endif
    return i_data.extractToRight<TOP0_PIPEDINCTL3_RESERVED_61_4,
           TOP0_PIPEDINCTL3_RESERVED_61_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDINCTL3_RESERVED_61_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDINCTL3_RESERVED_61_4]

//>> SET_[TOP0_PIPEDINCTL3_PHY1_DTB]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL3_PHY1_DTB(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL3));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL3_PHY1_DTB,
           TOP0_PIPEDINCTL3_PHY1_DTB_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDINCTL3_PHY1_DTB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL3_PHY1_DTB]

//>> SET_[TOP0_PIPEDINCTL3_PHY1_DTB]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL3_PHY1_DTB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL3));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL3_PHY1_DTB,
           TOP0_PIPEDINCTL3_PHY1_DTB_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDINCTL3_PHY1_DTB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL3_PHY1_DTB]

//>> GET_[TOP0_PIPEDINCTL3_PHY1_DTB]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDINCTL3_PHY1_DTB(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL3));
#endif
    return i_data.extractToRight<TOP0_PIPEDINCTL3_PHY1_DTB,
           TOP0_PIPEDINCTL3_PHY1_DTB_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDINCTL3_PHY1_DTB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDINCTL3_PHY1_DTB]

//>> SET_[TOP0_PIPEDINCTL3_PHY0_DTB]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL3_PHY0_DTB(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL3));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL3_PHY0_DTB,
           TOP0_PIPEDINCTL3_PHY0_DTB_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDINCTL3_PHY0_DTB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL3_PHY0_DTB]

//>> SET_[TOP0_PIPEDINCTL3_PHY0_DTB]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL3_PHY0_DTB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL3));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL3_PHY0_DTB,
           TOP0_PIPEDINCTL3_PHY0_DTB_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDINCTL3_PHY0_DTB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL3_PHY0_DTB]

//>> GET_[TOP0_PIPEDINCTL3_PHY0_DTB]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDINCTL3_PHY0_DTB(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL3));
#endif
    return i_data.extractToRight<TOP0_PIPEDINCTL3_PHY0_DTB,
           TOP0_PIPEDINCTL3_PHY0_DTB_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDINCTL3_PHY0_DTB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDINCTL3_PHY0_DTB]

//>> PREP_[TOP0_PIPEDOUTCTL4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TOP0_PIPEDOUTCTL4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP0_PIPEDOUTCTL4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TOP0_PIPEDOUTCTL4]

//>> GET_[TOP0_PIPEDOUTCTL4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TOP0_PIPEDOUTCTL4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP0_PIPEDOUTCTL4;
#endif
    return fapi2::getScom(i_target, TOP0_PIPEDOUTCTL4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL4]

//>> PUT_[TOP0_PIPEDOUTCTL4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TOP0_PIPEDOUTCTL4(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL4));
#endif
    return fapi2::putScom(i_target, TOP0_PIPEDOUTCTL4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TOP0_PIPEDOUTCTL4]


//>> SET_[TOP0_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL4));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0,
           TOP0_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0]

//>> SET_[TOP0_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL4));
#endif
    return o_data.insertFromRight<TOP0_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0,
           TOP0_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0]

//>> GET_[TOP0_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDOUTCTL4));
#endif
    return i_data.extractToRight<TOP0_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0,
           TOP0_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0]

//>> PREP_[TRA0_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA0_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR0_CONFIG_2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA0_TR0_CONFIG_2]

//>> GET_[TRA0_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA0_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR0_CONFIG_2;
#endif
    return fapi2::getScom(i_target, TRA0_TR0_CONFIG_2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_2]

//>> PUT_[TRA0_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA0_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_2));
#endif
    return fapi2::putScom(i_target, TRA0_TR0_CONFIG_2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA0_TR0_CONFIG_2]


//>> SET_[TRA0_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_2_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_2_A,
           TRA0_TR0_CONFIG_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TRA0_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_2_A]

//>> SET_[TRA0_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_2_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_2_A,
           TRA0_TR0_CONFIG_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TRA0_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_2_A]

//>> GET_[TRA0_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_2_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_2));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_2_A,
           TRA0_TR0_CONFIG_2_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TRA0_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_2_A]

//>> SET_[TRA0_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_2_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_2_B,
           TRA0_TR0_CONFIG_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TRA0_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_2_B]

//>> SET_[TRA0_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_2_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_2_B,
           TRA0_TR0_CONFIG_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TRA0_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_2_B]

//>> GET_[TRA0_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_2_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_2));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_2_B,
           TRA0_TR0_CONFIG_2_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TRA0_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_2_B]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
